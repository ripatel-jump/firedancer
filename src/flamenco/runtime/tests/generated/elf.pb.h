/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8-dev */

#ifndef PB_ORG_SOLANA_SEALEVEL_V1_ELF_PB_H_INCLUDED
#define PB_ORG_SOLANA_SEALEVEL_V1_ELF_PB_H_INCLUDED

#include "../../../nanopb/pb_firedancer.h"
#include "context.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct fd_exec_test_elf_binary {
    pb_bytes_array_t *data;
} fd_exec_test_elf_binary_t;

/* Wrapper for the ELF binary and the features that the loader should use
 Note that we currently hardcode the features to be used by the loader,
 so features isn't actually used yet. */
typedef struct fd_exec_test_elf_loader_ctx {
    bool has_elf;
    fd_exec_test_elf_binary_t elf;
    bool has_features;
    fd_exec_test_feature_set_t features;
    uint64_t elf_sz;
    bool deploy_checks;
} fd_exec_test_elf_loader_ctx_t;

/* Captures the results of a elf binary load.
 Structurally similar to fd_sbpf_program_t */
typedef struct fd_exec_test_elf_loader_effects {
    pb_bytes_array_t *rodata;
    uint64_t rodata_sz;
    /* bytes text = 3; // not needed, just points to a region in rodata */
    uint64_t text_cnt;
    uint64_t text_off;
    uint64_t entry_pc;
    pb_size_t calldests_count;
    uint64_t *calldests;
} fd_exec_test_elf_loader_effects_t;

typedef struct fd_exec_test_elf_loader_fixture {
    bool has_input;
    fd_exec_test_elf_loader_ctx_t input;
    bool has_output;
    fd_exec_test_elf_loader_effects_t output;
} fd_exec_test_elf_loader_fixture_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define FD_EXEC_TEST_ELF_BINARY_INIT_DEFAULT     {NULL}
#define FD_EXEC_TEST_ELF_LOADER_CTX_INIT_DEFAULT {false, FD_EXEC_TEST_ELF_BINARY_INIT_DEFAULT, false, FD_EXEC_TEST_FEATURE_SET_INIT_DEFAULT, 0, 0}
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_INIT_DEFAULT {NULL, 0, 0, 0, 0, 0, NULL}
#define FD_EXEC_TEST_ELF_LOADER_FIXTURE_INIT_DEFAULT {false, FD_EXEC_TEST_ELF_LOADER_CTX_INIT_DEFAULT, false, FD_EXEC_TEST_ELF_LOADER_EFFECTS_INIT_DEFAULT}
#define FD_EXEC_TEST_ELF_BINARY_INIT_ZERO        {NULL}
#define FD_EXEC_TEST_ELF_LOADER_CTX_INIT_ZERO    {false, FD_EXEC_TEST_ELF_BINARY_INIT_ZERO, false, FD_EXEC_TEST_FEATURE_SET_INIT_ZERO, 0, 0}
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_INIT_ZERO {NULL, 0, 0, 0, 0, 0, NULL}
#define FD_EXEC_TEST_ELF_LOADER_FIXTURE_INIT_ZERO {false, FD_EXEC_TEST_ELF_LOADER_CTX_INIT_ZERO, false, FD_EXEC_TEST_ELF_LOADER_EFFECTS_INIT_ZERO}

/* Field tags (for use in manual encoding/decoding) */
#define FD_EXEC_TEST_ELF_BINARY_DATA_TAG         1
#define FD_EXEC_TEST_ELF_LOADER_CTX_ELF_TAG      1
#define FD_EXEC_TEST_ELF_LOADER_CTX_FEATURES_TAG 2
#define FD_EXEC_TEST_ELF_LOADER_CTX_ELF_SZ_TAG   3
#define FD_EXEC_TEST_ELF_LOADER_CTX_DEPLOY_CHECKS_TAG 4
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_RODATA_TAG 1
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_RODATA_SZ_TAG 2
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_TEXT_CNT_TAG 4
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_TEXT_OFF_TAG 5
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_ENTRY_PC_TAG 6
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_CALLDESTS_TAG 7
#define FD_EXEC_TEST_ELF_LOADER_FIXTURE_INPUT_TAG 1
#define FD_EXEC_TEST_ELF_LOADER_FIXTURE_OUTPUT_TAG 2

/* Struct field encoding specification for nanopb */
#define FD_EXEC_TEST_ELF_BINARY_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    data,              1)
#define FD_EXEC_TEST_ELF_BINARY_CALLBACK NULL
#define FD_EXEC_TEST_ELF_BINARY_DEFAULT NULL

#define FD_EXEC_TEST_ELF_LOADER_CTX_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  elf,               1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  features,          2) \
X(a, STATIC,   SINGULAR, UINT64,   elf_sz,            3) \
X(a, STATIC,   SINGULAR, BOOL,     deploy_checks,     4)
#define FD_EXEC_TEST_ELF_LOADER_CTX_CALLBACK NULL
#define FD_EXEC_TEST_ELF_LOADER_CTX_DEFAULT NULL
#define fd_exec_test_elf_loader_ctx_t_elf_MSGTYPE fd_exec_test_elf_binary_t
#define fd_exec_test_elf_loader_ctx_t_features_MSGTYPE fd_exec_test_feature_set_t

#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    rodata,            1) \
X(a, STATIC,   SINGULAR, UINT64,   rodata_sz,         2) \
X(a, STATIC,   SINGULAR, UINT64,   text_cnt,          4) \
X(a, STATIC,   SINGULAR, UINT64,   text_off,          5) \
X(a, STATIC,   SINGULAR, UINT64,   entry_pc,          6) \
X(a, POINTER,  REPEATED, UINT64,   calldests,         7)
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_CALLBACK NULL
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_DEFAULT NULL

#define FD_EXEC_TEST_ELF_LOADER_FIXTURE_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  input,             1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  output,            2)
#define FD_EXEC_TEST_ELF_LOADER_FIXTURE_CALLBACK NULL
#define FD_EXEC_TEST_ELF_LOADER_FIXTURE_DEFAULT NULL
#define fd_exec_test_elf_loader_fixture_t_input_MSGTYPE fd_exec_test_elf_loader_ctx_t
#define fd_exec_test_elf_loader_fixture_t_output_MSGTYPE fd_exec_test_elf_loader_effects_t

extern const pb_msgdesc_t fd_exec_test_elf_binary_t_msg;
extern const pb_msgdesc_t fd_exec_test_elf_loader_ctx_t_msg;
extern const pb_msgdesc_t fd_exec_test_elf_loader_effects_t_msg;
extern const pb_msgdesc_t fd_exec_test_elf_loader_fixture_t_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define FD_EXEC_TEST_ELF_BINARY_FIELDS &fd_exec_test_elf_binary_t_msg
#define FD_EXEC_TEST_ELF_LOADER_CTX_FIELDS &fd_exec_test_elf_loader_ctx_t_msg
#define FD_EXEC_TEST_ELF_LOADER_EFFECTS_FIELDS &fd_exec_test_elf_loader_effects_t_msg
#define FD_EXEC_TEST_ELF_LOADER_FIXTURE_FIELDS &fd_exec_test_elf_loader_fixture_t_msg

/* Maximum encoded size of messages (where known) */
/* fd_exec_test_ELFBinary_size depends on runtime parameters */
/* fd_exec_test_ELFLoaderCtx_size depends on runtime parameters */
/* fd_exec_test_ELFLoaderEffects_size depends on runtime parameters */
/* fd_exec_test_ELFLoaderFixture_size depends on runtime parameters */

/* Mapping from canonical names (mangle_names or overridden package name) */
#define org_solana_sealevel_v1_ELFBinary fd_exec_test_ELFBinary
#define org_solana_sealevel_v1_ELFLoaderCtx fd_exec_test_ELFLoaderCtx
#define org_solana_sealevel_v1_ELFLoaderEffects fd_exec_test_ELFLoaderEffects
#define org_solana_sealevel_v1_ELFLoaderFixture fd_exec_test_ELFLoaderFixture
#define ORG_SOLANA_SEALEVEL_V1_ELF_BINARY_INIT_DEFAULT FD_EXEC_TEST_ELF_BINARY_INIT_DEFAULT
#define ORG_SOLANA_SEALEVEL_V1_ELF_LOADER_CTX_INIT_DEFAULT FD_EXEC_TEST_ELF_LOADER_CTX_INIT_DEFAULT
#define ORG_SOLANA_SEALEVEL_V1_ELF_LOADER_EFFECTS_INIT_DEFAULT FD_EXEC_TEST_ELF_LOADER_EFFECTS_INIT_DEFAULT
#define ORG_SOLANA_SEALEVEL_V1_ELF_LOADER_FIXTURE_INIT_DEFAULT FD_EXEC_TEST_ELF_LOADER_FIXTURE_INIT_DEFAULT
#define ORG_SOLANA_SEALEVEL_V1_ELF_BINARY_INIT_ZERO FD_EXEC_TEST_ELF_BINARY_INIT_ZERO
#define ORG_SOLANA_SEALEVEL_V1_ELF_LOADER_CTX_INIT_ZERO FD_EXEC_TEST_ELF_LOADER_CTX_INIT_ZERO
#define ORG_SOLANA_SEALEVEL_V1_ELF_LOADER_EFFECTS_INIT_ZERO FD_EXEC_TEST_ELF_LOADER_EFFECTS_INIT_ZERO
#define ORG_SOLANA_SEALEVEL_V1_ELF_LOADER_FIXTURE_INIT_ZERO FD_EXEC_TEST_ELF_LOADER_FIXTURE_INIT_ZERO

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
