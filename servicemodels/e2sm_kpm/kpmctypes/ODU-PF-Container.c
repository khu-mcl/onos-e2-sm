/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v01.00.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "ODU-PF-Container.h"

#include "CellResourceReportListItem.h"
static int
memb_cellResourceReportList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 512)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_cellResourceReportList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cellResourceReportList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cellResourceReportList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CellResourceReportListItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_cellResourceReportList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_cellResourceReportList_specs_2 = {
	sizeof(struct ODU_PF_Container__cellResourceReportList),
	offsetof(struct ODU_PF_Container__cellResourceReportList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellResourceReportList_2 = {
	"cellResourceReportList",
	"cellResourceReportList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_cellResourceReportList_tags_2,
	sizeof(asn_DEF_cellResourceReportList_tags_2)
		/sizeof(asn_DEF_cellResourceReportList_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellResourceReportList_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellResourceReportList_tags_2)
		/sizeof(asn_DEF_cellResourceReportList_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_cellResourceReportList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_cellResourceReportList_2,
	1,	/* Single element */
	&asn_SPC_cellResourceReportList_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ODU_PF_Container_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ODU_PF_Container, cellResourceReportList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellResourceReportList_2,
		0,
		{ 0, &asn_PER_memb_cellResourceReportList_constr_2,  memb_cellResourceReportList_constraint_1 },
		0, 0, /* No default value */
		"cellResourceReportList"
		},
};
static const ber_tlv_tag_t asn_DEF_ODU_PF_Container_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ODU_PF_Container_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellResourceReportList */
};
asn_SEQUENCE_specifics_t asn_SPC_ODU_PF_Container_specs_1 = {
	sizeof(struct ODU_PF_Container),
	offsetof(struct ODU_PF_Container, _asn_ctx),
	asn_MAP_ODU_PF_Container_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ODU_PF_Container = {
	"ODU-PF-Container",
	"ODU-PF-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_ODU_PF_Container_tags_1,
	sizeof(asn_DEF_ODU_PF_Container_tags_1)
		/sizeof(asn_DEF_ODU_PF_Container_tags_1[0]), /* 1 */
	asn_DEF_ODU_PF_Container_tags_1,	/* Same as above */
	sizeof(asn_DEF_ODU_PF_Container_tags_1)
		/sizeof(asn_DEF_ODU_PF_Container_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ODU_PF_Container_1,
	1,	/* Elements count */
	&asn_SPC_ODU_PF_Container_specs_1	/* Additional specs */
};

