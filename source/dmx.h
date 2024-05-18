/**
 * @file dmx.h
 * @author your name (you@domain.com)
 * @brief header file of dmx library this file inmplements core functions of the dmx library that are shared between the receiver and controller
 * @version 0.1
 * @date 2024-05-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <hardware/pio.h>
#include <dmx.pio.h>


#define dmxPortLim 4

class dmx
{
private:
    void _sendFrame();
    void _initPio();

    //private variables
    uint8_t _dmxPortCount;
    uint32_t _pioOffset;
    uint32_t _pioSm;

    //private interfaces
    PIO _pio;
public:
    dmx(PIO pio, uint8_t dmxPortCount);
    ~dmx();
};

/**
 * @brief Construct a new dmx::dmx object
 * 
 * @param pio the pio unit used for this set of dmx ports
 * @param dmxPortCount number of dmx ports to be initialized, limited is 4
 */
dmx::dmx(PIO pio, uint8_t dmxPortCount)
{
    //save number of ports
    if (dmxPortCount > dmxPortLim)
    {
        _dmxPortCount = 4;
    }
    else
    {
        _dmxPortCount = dmxPortCount;
    }
    //save pio unit
    _pio = pio;
}

dmx::~dmx()
{
}
