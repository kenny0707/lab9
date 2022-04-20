/*
 * You can write copyrights rules here. These rules will be copied into the outputs.
 */

/*
 * Generated by erpcgen 1.9.0 on Wed Apr 20 16:16:55 2022.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_blink_led_server_h_)
#define _blink_led_server_h_

#ifdef __cplusplus
#include "erpc_server.h"
#include "erpc_codec.h"
extern "C"
{
#include "blink_led.h"
#include <stdint.h>
#include <stdbool.h>
}

#if 10900 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif


/*!
 * @brief Service subclass for LEDBlinkService.
 */
class LEDBlinkService_service : public erpc::Service
{
public:
    LEDBlinkService_service() : Service(kLEDBlinkService_service_id) {}

    /*! @brief Call the correct server shim based on method unique ID. */
    virtual erpc_status_t handleInvocation(uint32_t methodId, uint32_t sequence, erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory);

private:
    /*! @brief Server shim for led_on of LEDBlinkService interface. */
    erpc_status_t led_on_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);

    /*! @brief Server shim for led_off of LEDBlinkService interface. */
    erpc_status_t led_off_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);
};

extern "C" {
#else
#include "blink_led.h"
#endif // __cplusplus

typedef void * erpc_service_t;

erpc_service_t create_LEDBlinkService_service(void);

#if ERPC_ALLOCATION_POLICY == ERPC_ALLOCATION_POLICY_DYNAMIC
void destroy_LEDBlinkService_service(erpc_service_t *service);
#elif ERPC_ALLOCATION_POLICY == ERPC_ALLOCATION_POLICY_STATIC
void destroy_LEDBlinkService_service(void);
#else
#warning "Unknown eRPC allocation policy!"
#endif

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _blink_led_server_h_
