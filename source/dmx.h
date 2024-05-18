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

class dmx
{
private:
    void _sendFrame();
    void _init();
public:
    dmx(/* args */);
    ~dmx();
};

dmx::dmx(/* args */)
{
}

dmx::~dmx()
{
}
