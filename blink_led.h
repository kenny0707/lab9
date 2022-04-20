/*
 * You can write copyrights rules here. These rules will be copied into the outputs.
 */

/*
 * Generated by erpcgen 1.9.0 on Wed Apr 20 16:16:55 2022.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_blink_led_h_)
#define _blink_led_h_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "erpc_version.h"

#if 10900 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif

#if !defined(ERPC_TYPE_DEFINITIONS)
#define ERPC_TYPE_DEFINITIONS

#endif // ERPC_TYPE_DEFINITIONS

/*! @brief LEDBlinkService identifiers */
enum _LEDBlinkService_ids
{
    kLEDBlinkService_service_id = 1,
    kLEDBlinkService_led_on_id = 1,
    kLEDBlinkService_led_off_id = 2,
};

#if defined(__cplusplus)
extern "C" {
#endif

//! @name LEDBlinkService
//@{
void led_on(uint8_t led);

void led_off(uint8_t led);
//@}

#if defined(__cplusplus)
}
#endif

#endif // _blink_led_h_
