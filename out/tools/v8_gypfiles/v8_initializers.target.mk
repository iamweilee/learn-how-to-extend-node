# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := v8_initializers
DEFS_Debug := \
	'-DV8_GYP_BUILD' \
	'-DV8_TYPED_ARRAY_MAX_SIZE_IN_HEAP=64' \
	'-DOPENSSL_NO_PINSHARED' \
	'-DOPENSSL_THREADS' \
	'-DV8_TARGET_ARCH_X64' \
	'-DV8_EMBEDDER_STRING="-node.16"' \
	'-DENABLE_DISASSEMBLER' \
	'-DV8_PROMISE_INTERNAL_FIELD_COUNT=1' \
	'-DENABLE_MINOR_MC' \
	'-DV8_INTL_SUPPORT' \
	'-DV8_USE_SNAPSHOT' \
	'-DV8_CONCURRENT_MARKING' \
	'-DV8_EMBEDDED_BUILTINS' \
	'-DV8_USE_SIPHASH' \
	'-DDISABLE_UNTRUSTED_CODE_MITIGATIONS' \
	'-DV8_WIN64_UNWINDING_INFO' \
	'-DUCONFIG_NO_SERVICE=1' \
	'-DU_ENABLE_DYLOAD=0' \
	'-DU_STATIC_IMPLEMENTATION=1' \
	'-DU_HAVE_STD_STRING=1' \
	'-DUCONFIG_NO_BREAK_ITERATION=0' \
	'-DDEBUG' \
	'-D_DEBUG' \
	'-DV8_ENABLE_CHECKS' \
	'-DOBJECT_PRINT' \
	'-DVERIFY_HEAP' \
	'-DV8_TRACE_MAPS' \
	'-DV8_ENABLE_ALLOCATION_TIMEOUT' \
	'-DV8_ENABLE_FORCE_SLOW_PATH' \
	'-DENABLE_HANDLE_ZAPPING'

# Flags passed to all source files.
CFLAGS_Debug := \
	-pthread \
	-Wno-unused-parameter \
	-m64 \
	-Wno-return-type \
	-fno-strict-aliasing \
	-m64 \
	-g \
	-Woverloaded-virtual \
	 \
	-fdata-sections \
	-ffunction-sections \
	-O3

# Flags passed to only C files.
CFLAGS_C_Debug :=

# Flags passed to only C++ files.
CFLAGS_CC_Debug := \
	-fno-rtti \
	-fno-exceptions \
	-std=gnu++1y

INCS_Debug := \
	-I$(srcdir)/deps/v8 \
	-I$(srcdir)/deps/v8/include \
	-I$(obj)/gen/torque-output-root \
	-I$(obj)/gen/generate-bytecode-output-root \
	-I$(srcdir)/deps/icu-small/source/i18n \
	-I$(srcdir)/deps/icu-small/source/common

DEFS_Release := \
	'-DV8_GYP_BUILD' \
	'-DV8_TYPED_ARRAY_MAX_SIZE_IN_HEAP=64' \
	'-DOPENSSL_NO_PINSHARED' \
	'-DOPENSSL_THREADS' \
	'-DV8_TARGET_ARCH_X64' \
	'-DV8_EMBEDDER_STRING="-node.16"' \
	'-DENABLE_DISASSEMBLER' \
	'-DV8_PROMISE_INTERNAL_FIELD_COUNT=1' \
	'-DENABLE_MINOR_MC' \
	'-DV8_INTL_SUPPORT' \
	'-DV8_USE_SNAPSHOT' \
	'-DV8_CONCURRENT_MARKING' \
	'-DV8_EMBEDDED_BUILTINS' \
	'-DV8_USE_SIPHASH' \
	'-DDISABLE_UNTRUSTED_CODE_MITIGATIONS' \
	'-DV8_WIN64_UNWINDING_INFO' \
	'-DUCONFIG_NO_SERVICE=1' \
	'-DU_ENABLE_DYLOAD=0' \
	'-DU_STATIC_IMPLEMENTATION=1' \
	'-DU_HAVE_STD_STRING=1' \
	'-DUCONFIG_NO_BREAK_ITERATION=0'

# Flags passed to all source files.
CFLAGS_Release := \
	-pthread \
	-Wno-unused-parameter \
	-m64 \
	-Wno-return-type \
	-fno-strict-aliasing \
	-m64 \
	-O3 \
	-fno-omit-frame-pointer \
	-fdata-sections \
	-ffunction-sections \
	 \
	-O3

# Flags passed to only C files.
CFLAGS_C_Release :=

# Flags passed to only C++ files.
CFLAGS_CC_Release := \
	-fno-rtti \
	-fno-exceptions \
	-std=gnu++1y

INCS_Release := \
	-I$(srcdir)/deps/v8 \
	-I$(srcdir)/deps/v8/include \
	-I$(obj)/gen/torque-output-root \
	-I$(obj)/gen/generate-bytecode-output-root \
	-I$(srcdir)/deps/icu-small/source/i18n \
	-I$(srcdir)/deps/icu-small/source/common

OBJS := \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-arguments-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-array-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-async-function-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-async-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-async-generator-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-async-iterator-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-bigint-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-boolean-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-call-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-collections-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-console-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-constructor-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-conversion-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-date-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-debug-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-function-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-generator-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-global-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-handler-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-ic-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-internal-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-interpreter-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-intl-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-iterator-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-lazy-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-math-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-microtask-queue-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-number-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-object-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-promise-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-proxy-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-reflect-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-regexp-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-sharedarraybuffer-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-string-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-symbol-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-typed-array-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/builtins-wasm-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/growable-fixed-array-gen.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/setup-builtins-internal.o \
	$(obj).target/$(TARGET)/deps/v8/src/codegen/code-stub-assembler.o \
	$(obj).target/$(TARGET)/deps/v8/src/heap/setup-heap-internal.o \
	$(obj).target/$(TARGET)/deps/v8/src/ic/accessor-assembler.o \
	$(obj).target/$(TARGET)/deps/v8/src/ic/binary-op-assembler.o \
	$(obj).target/$(TARGET)/deps/v8/src/ic/keyed-store-generic.o \
	$(obj).target/$(TARGET)/deps/v8/src/interpreter/interpreter-assembler.o \
	$(obj).target/$(TARGET)/deps/v8/src/interpreter/interpreter-generator.o \
	$(obj).target/$(TARGET)/deps/v8/src/interpreter/interpreter-intrinsics-generator.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/arguments-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-copywithin-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-every-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-filter-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-find-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-findindex-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-foreach-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-join-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-lastindexof-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-map-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-of-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-reduce-right-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-reduce-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-reverse-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-shift-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-slice-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-some-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-splice-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-unshift-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/array-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/base-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/bigint-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/boolean-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/collections-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/data-view-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/extras-utils-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/frames-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/growable-fixed-array-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/internal-coverage-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/iterator-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/math-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/object-fromentries-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/object-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-constructor-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-delete-property-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-get-property-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-get-prototype-of-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-has-property-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-is-extensible-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-prevent-extensions-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-revocable-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-revoke-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-set-property-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-set-prototype-of-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/proxy-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/reflect-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/regexp-replace-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/regexp-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/string-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/string-endswith-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/string-html-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/string-iterator-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/string-repeat-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/string-slice-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/string-startswith-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/string-substring-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-createtypedarray-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-every-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-filter-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-find-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-findindex-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-foreach-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-reduce-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-reduceright-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-slice-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-some-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-subarray-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/builtins/typed-array-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/third_party/v8/builtins/array-sort-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/test/torque/test-torque-tq-csa.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/../../deps/v8/src/objects/intl-objects-tq-csa.o \
	$(obj).target/$(TARGET)/deps/v8/src/builtins/x64/builtins-x64.o \
	$(obj).target/$(TARGET)/gen/torque-output-root/torque-generated/exported-macros-assembler-tq.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# Make sure our dependencies are built before any of us.
$(OBJS): | $(obj).target/tools/v8_gypfiles/torque_generated_initializers.stamp $(obj).target/tools/icu/icuuc.stamp

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# End of this set of suffix rules
### Rules for final target.
LDFLAGS_Debug := \
	-pthread \
	-rdynamic \
	-m64 \
	-m64

LDFLAGS_Release := \
	-pthread \
	-rdynamic \
	-m64 \
	-m64

LIBS :=

$(obj).target/tools/v8_gypfiles/libv8_initializers.a: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/tools/v8_gypfiles/libv8_initializers.a: LIBS := $(LIBS)
$(obj).target/tools/v8_gypfiles/libv8_initializers.a: TOOLSET := $(TOOLSET)
$(obj).target/tools/v8_gypfiles/libv8_initializers.a: $(OBJS) FORCE_DO_CMD
	$(call do_cmd,alink_thin)

all_deps += $(obj).target/tools/v8_gypfiles/libv8_initializers.a
# Add target alias
.PHONY: v8_initializers
v8_initializers: $(obj).target/tools/v8_gypfiles/libv8_initializers.a

# Add target alias to "all" target.
.PHONY: all
all: v8_initializers
