/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.7 */

#ifndef PB_MESSAGE_PB_H_INCLUDED
#define PB_MESSAGE_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _TestMessage {
    pb_callback_t str;
} TestMessage;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define TestMessage_init_default                 {{{NULL}, NULL}}
#define TestMessage_init_zero                    {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define TestMessage_str_tag                      1

/* Struct field encoding specification for nanopb */
#define TestMessage_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   str,               1)
#define TestMessage_CALLBACK pb_default_field_callback
#define TestMessage_DEFAULT NULL

extern const pb_msgdesc_t TestMessage_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define TestMessage_fields &TestMessage_msg

/* Maximum encoded size of messages (where known) */
/* TestMessage_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif