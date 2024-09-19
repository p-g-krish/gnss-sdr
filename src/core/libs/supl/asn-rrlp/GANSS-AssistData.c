/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "GANSS-AssistData.h"

static asn_TYPE_member_t asn_MBR_GANSS_AssistData_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct GANSS_AssistData, ganss_controlHeader),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_GANSS_ControlHeader,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "ganss-controlHeader"},
};
static ber_tlv_tag_t asn_DEF_GANSS_AssistData_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_GANSS_AssistData_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
        0} /* ganss-controlHeader at 1062 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GANSS_AssistData_specs_1 = {
    sizeof(struct GANSS_AssistData),
    offsetof(struct GANSS_AssistData, _asn_ctx),
    asn_MAP_GANSS_AssistData_tag2el_1,
    1, /* Count of tags in the map */
    0,
    0,
    0,  /* Optional elements (not needed) */
    -1, /* Start extensions */
    -1  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GANSS_AssistData = {
    "GANSS-AssistData",
    "GANSS-AssistData",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0, /* Use generic outmost tag fetcher */
    asn_DEF_GANSS_AssistData_tags_1,
    sizeof(asn_DEF_GANSS_AssistData_tags_1) /
        sizeof(asn_DEF_GANSS_AssistData_tags_1[0]), /* 1 */
    asn_DEF_GANSS_AssistData_tags_1,                /* Same as above */
    sizeof(asn_DEF_GANSS_AssistData_tags_1) /
        sizeof(asn_DEF_GANSS_AssistData_tags_1[0]), /* 1 */
    0,                                              /* No PER visible constraints */
    asn_MBR_GANSS_AssistData_1,
    1,                                /* Elements count */
    &asn_SPC_GANSS_AssistData_specs_1 /* Additional specs */
};
