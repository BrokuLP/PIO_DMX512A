/**
 * @file dmx.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <dmx.h>

/**
 * @brief methode to initialize core functions of dmx lib
 * 
 */
void dmx::_initPio(){
    _pioOffset = pio_add_program(_pio,);
    _pioSm = pio_claim_unused_sm(_pio, true);
}