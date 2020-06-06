#ifndef V8_GEN_TORQUE_GENERATED_FIELD_OFFSETS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_FIELD_OFFSETS_TQ_H_

#define TORQUE_GENERATED_CONTEXT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kScopeInfoOffset, kTaggedSize) \
V(kPreviousOffset, kTaggedSize) \
V(kExtensionOffset, kTaggedSize) \
V(kNativeContextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_HEAP_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kMapOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSRECEIVER_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPropertiesOrHashOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_HEAP_NUMBER_FIELDS(V) \
V(kValueOffset, kDoubleSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kObjectsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_ARRAY_BASE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_STRING_FIELDS(V) \
V(kLengthOffset, kInt32Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_NAME_FIELDS(V) \
V(kHashFieldOffset, kInt32Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSOBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kElementsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ODDBALL_FIELDS(V) \
V(kToNumberRawOffset, kDoubleSize) \
V(kStartOfStrongFieldsOffset, 0) \
V(kToStringOffset, kTaggedSize) \
V(kToNumberOffset, kTaggedSize) \
V(kTypeOfOffset, kTaggedSize) \
V(kKindOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BIG_INT_BASE_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SYMBOL_FIELDS(V) \
V(kFlagsOffset, kInt32Size) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CONS_STRING_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFirstOffset, kTaggedSize) \
V(kSecondOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_STRING_FIELDS(V) \
V(kResourceOffset, kSystemPointerSize) \
V(kResourceDataOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_ONE_BYTE_STRING_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_TWO_BYTE_STRING_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_INTERNALIZED_STRING_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SEQ_STRING_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_SEQ_ONE_BYTE_STRING_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SEQ_TWO_BYTE_STRING_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SLICED_STRING_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kParentOffset, kTaggedSize) \
V(kOffsetOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_THIN_STRING_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kActualOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_STRUCT_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_TUPLE2_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValue1Offset, kTaggedSize) \
V(kValue2Offset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_TUPLE3_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValue3Offset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_DOUBLE_ARRAY_FIELDS(V) \
V(kFloatsOffset, kDoubleSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WEAK_FIXED_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BYTE_ARRAY_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MAP_FIELDS(V) \
V(kInstanceSizeInWordsOffset, kUInt8Size) \
V(kInObjectPropertiesStartOrConstructorFunctionIndexOffset, kUInt8Size) \
V(kUsedOrUnusedInstanceSizeInWordsOffset, kUInt8Size) \
V(kVisitorIdOffset, kUInt8Size) \
V(kInstanceTypeOffset, kUInt16Size) \
V(kBitFieldOffset, kUInt8Size) \
V(kBitField2Offset, kUInt8Size) \
V(kBitField3Offset, kInt32Size) \
V(kOptionalPaddingOffset, kInt32Size) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPrototypeOffset, kTaggedSize) \
V(kConstructorOrBackPointerOffset, kTaggedSize) \
V(kInstanceDescriptorsOffset, kTaggedSize) \
V(kLayoutDescriptorOffset, kTaggedSize) \
V(kDependentCodeOffset, kTaggedSize) \
V(kPrototypeValidityCellOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kTransitionsOrPrototypeInfoOffset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ENUM_CACHE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kKeysOffset, kTaggedSize) \
V(kIndicesOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSourcePositionTableOffset, kTaggedSize) \
V(kStackFrameCacheOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_DESCRIPTOR_ARRAY_FIELDS(V) \
V(kNumberOfAllDescriptorsOffset, kUInt16Size) \
V(kNumberOfDescriptorsOffset, kUInt16Size) \
V(kRawNumberOfMarkedDescriptorsOffset, kUInt16Size) \
V(kFiller16BitsOffset, kUInt16Size) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEnumCacheOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSFUNCTION_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kFeedbackCellOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kCodeOffset, kTaggedSize) \
V(kPrototypeOrInitialMapOffset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPROXY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTargetOffset, kTaggedSize) \
V(kHandlerOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPROXY_REVOCABLE_RESULT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kProxyOffset, kTaggedSize) \
V(kRevokeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSGLOBAL_PROXY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNativeContextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPRIMITIVE_WRAPPER_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARGUMENTS_OBJECT_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARGUMENTS_OBJECT_WITH_LENGTH_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSLOPPY_ARGUMENTS_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCalleeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSTRICT_ARGUMENTS_OBJECT_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIteratedObjectOffset, kTaggedSize) \
V(kNextIndexOffset, kTaggedSize) \
V(kKindOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CALL_HANDLER_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallbackOffset, kTaggedSize) \
V(kJsCallbackOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MODULE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kExportsOffset, kTaggedSize) \
V(kHashOffset, kTaggedSize) \
V(kStatusOffset, kTaggedSize) \
V(kModuleNamespaceOffset, kTaggedSize) \
V(kExceptionOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_SOURCE_TEXT_MODULE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCodeOffset, kTaggedSize) \
V(kRegularExportsOffset, kTaggedSize) \
V(kRegularImportsOffset, kTaggedSize) \
V(kRequestedModulesOffset, kTaggedSize) \
V(kScriptOffset, kTaggedSize) \
V(kImportMetaOffset, kTaggedSize) \
V(kDfsIndexOffset, kTaggedSize) \
V(kDfsAncestorIndexOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SYNTHETIC_MODULE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOffset, kTaggedSize) \
V(kExportNamesOffset, kTaggedSize) \
V(kEvaluationStepsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSMODULE_NAMESPACE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kModuleOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_TEMPLATE_LIST_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSWEAK_COLLECTION_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSWEAK_SET_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSWEAK_MAP_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSCOLLECTION_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTableOffset, kTaggedSize) \
V(kIndexOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSMESSAGE_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kMessageTypeOffset, kTaggedSize) \
V(kArgumentsOffset, kTaggedSize) \
V(kScriptOffset, kTaggedSize) \
V(kStackFramesOffset, kTaggedSize) \
V(kSharedInfoOffset, kTaggedSize) \
V(kBytecodeOffsetOffset, kTaggedSize) \
V(kStartPositionOffset, kTaggedSize) \
V(kEndPositionOffset, kTaggedSize) \
V(kErrorLevelOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WEAK_ARRAY_LIST_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCapacityOffset, kTaggedSize) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROTOTYPE_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kJsModuleNamespaceOffset, kTaggedSize) \
V(kPrototypeUsersOffset, kTaggedSize) \
V(kRegistrySlotOffset, kTaggedSize) \
V(kValidityCellOffset, kTaggedSize) \
V(kObjectCreateMapOffset, kTaggedSize) \
V(kBitFieldOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SCRIPT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSourceOffset, kTaggedSize) \
V(kNameOffset, kTaggedSize) \
V(kLineOffsetOffset, kTaggedSize) \
V(kColumnOffsetOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kScriptTypeOffset, kTaggedSize) \
V(kLineEndsOffset, kTaggedSize) \
V(kIdOffset, kTaggedSize) \
V(kEvalFromSharedOrWrappedArgumentsOffset, kTaggedSize) \
V(kEvalFromPositionOffset, kTaggedSize) \
V(kSharedFunctionInfosOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kSourceUrlOffset, kTaggedSize) \
V(kSourceMappingUrlOffset, kTaggedSize) \
V(kHostDefinedOptionsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_EMBEDDER_DATA_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PREPARSE_DATA_FIELDS(V) \
V(kDataLengthOffset, kInt32Size) \
V(kInnerLengthOffset, kInt32Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_INTERPRETER_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBytecodeArrayOffset, kTaggedSize) \
V(kInterpreterTrampolineOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SHARED_FUNCTION_INFO_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kFunctionDataOffset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOrScopeInfoOffset, kTaggedSize) \
V(kOuterScopeInfoOrFeedbackMetadataOffset, kTaggedSize) \
V(kScriptOrDebugInfoOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kLengthOffset, kUInt16Size) \
V(kFormalParameterCountOffset, kUInt16Size) \
V(kExpectedNofPropertiesOffset, kUInt16Size) \
V(kFunctionTokenOffsetOffset, kUInt16Size) \
V(kFlagsOffset, kInt32Size) \
V(kFunctionLiteralIdOffset, kInt32Size) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSBOUND_FUNCTION_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBoundTargetFunctionOffset, kTaggedSize) \
V(kBoundThisOffset, kTaggedSize) \
V(kBoundArgumentsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FOREIGN_FIELDS(V) \
V(kForeignAddressOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FREE_SPACE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSizeOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_BUFFER_FIELDS(V) \
V(kByteLengthOffset, kIntptrSize) \
V(kBackingStoreOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_BUFFER_VIEW_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBufferOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kByteOffsetOffset, kIntptrSize) \
V(kByteLengthOffset, kIntptrSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSTYPED_ARRAY_FIELDS(V) \
V(kLengthOffset, kIntptrSize) \
V(kExternalPointerOffset, kSystemPointerSize) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBasePointerOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSCOLLECTION_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSSET_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSMAP_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSDATE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kYearOffset, kTaggedSize) \
V(kMonthOffset, kTaggedSize) \
V(kDayOffset, kTaggedSize) \
V(kWeekdayOffset, kTaggedSize) \
V(kHourOffset, kTaggedSize) \
V(kMinOffset, kTaggedSize) \
V(kSecOffset, kTaggedSize) \
V(kCacheStampOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSGLOBAL_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNativeContextOffset, kTaggedSize) \
V(kGlobalProxyOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSASYNC_FROM_SYNC_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSyncIteratorOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSTRING_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kStringOffset, kTaggedSize) \
V(kNextIndexOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_TEMPLATE_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTagOffset, kTaggedSize) \
V(kSerialNumberOffset, kTaggedSize) \
V(kNumberOfPropertiesOffset, kTaggedSize) \
V(kPropertyListOffset, kTaggedSize) \
V(kPropertyAccessorsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_TEMPLATE_OBJECT_DESCRIPTION_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kRawStringsOffset, kTaggedSize) \
V(kCookedStringsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FUNCTION_TEMPLATE_RARE_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPrototypeTemplateOffset, kTaggedSize) \
V(kPrototypeProviderTemplateOffset, kTaggedSize) \
V(kParentTemplateOffset, kTaggedSize) \
V(kNamedPropertyHandlerOffset, kTaggedSize) \
V(kIndexedPropertyHandlerOffset, kTaggedSize) \
V(kInstanceTemplateOffset, kTaggedSize) \
V(kInstanceCallHandlerOffset, kTaggedSize) \
V(kAccessCheckInfoOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FUNCTION_TEMPLATE_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallCodeOffset, kTaggedSize) \
V(kClassNameOffset, kTaggedSize) \
V(kSignatureOffset, kTaggedSize) \
V(kFunctionTemplateRareDataOffset, kTaggedSize) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kFlagOffset, kTaggedSize) \
V(kLengthOffset, kTaggedSize) \
V(kCachedPropertyNameOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_OBJECT_TEMPLATE_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kConstructorOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROPERTY_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthAndHashOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROPERTY_CELL_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOffset, kTaggedSize) \
V(kPropertyDetailsRawOffset, kTaggedSize) \
V(kValueOffset, kTaggedSize) \
V(kDependentCodeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSDATA_VIEW_FIELDS(V) \
V(kDataPointerOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_INTERCEPTOR_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kGetterOffset, kTaggedSize) \
V(kSetterOffset, kTaggedSize) \
V(kQueryOffset, kTaggedSize) \
V(kDescriptorOffset, kTaggedSize) \
V(kDeleterOffset, kTaggedSize) \
V(kEnumeratorOffset, kTaggedSize) \
V(kDefinerOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ACCESS_CHECK_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallbackOffset, kTaggedSize) \
V(kNamedInterceptorOffset, kTaggedSize) \
V(kIndexedInterceptorOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ARRAY_BOILERPLATE_DESCRIPTION_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFlagsOffset, kTaggedSize) \
V(kConstantElementsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ALIASED_ARGUMENTS_ENTRY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kAliasedContextSlotOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CELL_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_DATA_HANDLER_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSmiHandlerOffset, kTaggedSize) \
V(kValidityCellOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kData1Offset, kTaggedSize) \
V(kData2Offset, kTaggedSize) \
V(kData3Offset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSGENERATOR_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFunctionOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kReceiverOffset, kTaggedSize) \
V(kInputOrDebugPosOffset, kTaggedSize) \
V(kResumeModeOffset, kTaggedSize) \
V(kContinuationOffset, kTaggedSize) \
V(kParametersAndRegistersOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSASYNC_FUNCTION_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPromiseOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSASYNC_GENERATOR_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kQueueOffset, kTaggedSize) \
V(kIsAwaitingOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPROMISE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kReactionsOrResultOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MICROTASK_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_CALLBACK_TASK_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallbackOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CALLABLE_TASK_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallableOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_STACK_FRAME_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLineNumberOffset, kTaggedSize) \
V(kColumnNumberOffset, kTaggedSize) \
V(kPromiseAllIndexOffset, kTaggedSize) \
V(kScriptIdOffset, kTaggedSize) \
V(kScriptNameOffset, kTaggedSize) \
V(kScriptNameOrSourceUrlOffset, kTaggedSize) \
V(kFunctionNameOffset, kTaggedSize) \
V(kMethodNameOffset, kTaggedSize) \
V(kTypeNameOffset, kTaggedSize) \
V(kEvalOriginOffset, kTaggedSize) \
V(kWasmModuleNameOffset, kTaggedSize) \
V(kFlagOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_STACK_TRACE_FRAME_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFrameArrayOffset, kTaggedSize) \
V(kFrameIndexOffset, kTaggedSize) \
V(kFrameInfoOffset, kTaggedSize) \
V(kIdOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CLASS_POSITIONS_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kStartOffset, kTaggedSize) \
V(kEndOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_EXPORTED_FUNCTION_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kWrapperCodeOffset, kTaggedSize) \
V(kInstanceOffset, kTaggedSize) \
V(kJumpTableOffsetOffset, kTaggedSize) \
V(kFunctionIndexOffset, kTaggedSize) \
V(kCWrapperCodeOffset, kTaggedSize) \
V(kWasmCallTargetOffset, kTaggedSize) \
V(kPackedArgsSizeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_JSFUNCTION_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallableOffset, kTaggedSize) \
V(kWrapperCodeOffset, kTaggedSize) \
V(kSerializedReturnCountOffset, kTaggedSize) \
V(kSerializedParameterCountOffset, kTaggedSize) \
V(kSerializedSignatureOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_CAPI_FUNCTION_DATA_FIELDS(V) \
V(kCallTargetOffset, kSystemPointerSize) \
V(kEmbedderDataOffset, kSystemPointerSize) \
V(kStartOfStrongFieldsOffset, 0) \
V(kWrapperCodeOffset, kTaggedSize) \
V(kSerializedSignatureOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_INDIRECT_FUNCTION_TABLE_FIELDS(V) \
V(kSizeOffset, kInt32Size) \
V(kOptionalPaddingOffset, kInt32Size) \
V(kSigIdsOffset, kSystemPointerSize) \
V(kTargetsOffset, kSystemPointerSize) \
V(kStartOfStrongFieldsOffset, 0) \
V(kManagedNativeAllocationsOffset, kTaggedSize) \
V(kRefsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_DEBUG_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kInstanceOffset, kTaggedSize) \
V(kInterpreterHandleOffset, kTaggedSize) \
V(kLocalsNamesOffset, kTaggedSize) \
V(kCWasmEntriesOffset, kTaggedSize) \
V(kCWasmEntryMapOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_EXCEPTION_TAG_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIndexOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ASYNC_GENERATOR_REQUEST_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNextOffset, kTaggedSize) \
V(kResumeModeOffset, kTaggedSize) \
V(kValueOffset, kTaggedSize) \
V(kPromiseOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SOURCE_TEXT_MODULE_INFO_ENTRY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kExportNameOffset, kTaggedSize) \
V(kLocalNameOffset, kTaggedSize) \
V(kImportNameOffset, kTaggedSize) \
V(kModuleRequestOffset, kTaggedSize) \
V(kCellIndexOffset, kTaggedSize) \
V(kBegPosOffset, kTaggedSize) \
V(kEndPosOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROMISE_CAPABILITY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPromiseOffset, kTaggedSize) \
V(kResolveOffset, kTaggedSize) \
V(kRejectOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROMISE_REACTION_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNextOffset, kTaggedSize) \
V(kRejectHandlerOffset, kTaggedSize) \
V(kFulfillHandlerOffset, kTaggedSize) \
V(kPromiseOrCapabilityOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROMISE_REACTION_JOB_TASK_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kArgumentOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kHandlerOffset, kTaggedSize) \
V(kPromiseOrCapabilityOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_PROMISE_FULFILL_REACTION_JOB_TASK_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROMISE_REJECT_REACTION_JOB_TASK_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROMISE_RESOLVE_THENABLE_JOB_TASK_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kContextOffset, kTaggedSize) \
V(kPromiseToResolveOffset, kTaggedSize) \
V(kThenOffset, kTaggedSize) \
V(kThenableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSREG_EXP_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kDataOffset, kTaggedSize) \
V(kSourceOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSREG_EXP_RESULT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIndexOffset, kTaggedSize) \
V(kInputOffset, kTaggedSize) \
V(kGroupsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSREG_EXP_STRING_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIteratingRegExpOffset, kTaggedSize) \
V(kIteratedStringOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_REG_EXP_MATCH_INFO_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ACCESSOR_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kExpectedReceiverTypeOffset, kTaggedSize) \
V(kSetterOffset, kTaggedSize) \
V(kGetterOffset, kTaggedSize) \
V(kJsGetterOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ACCESSOR_PAIR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kGetterOffset, kTaggedSize) \
V(kSetterOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BREAK_POINT_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BREAK_POINT_INFO_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_DEBUG_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kDebuggerHintsOffset, kTaggedSize) \
V(kScriptOffset, kTaggedSize) \
V(kOriginalBytecodeArrayOffset, kTaggedSize) \
V(kDebugBytecodeArrayOffset, kTaggedSize) \
V(kBreakPointsOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kCoverageInfoOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FEEDBACK_VECTOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kOptimizedCodeWeakOrSmiOffset, kTaggedSize) \
V(kClosureFeedbackCellArrayOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kLengthOffset, kInt32Size) \
V(kInvocationCountOffset, kInt32Size) \
V(kProfilerTicksOffset, kInt32Size) \
V(kPaddingOffset, kInt32Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FEEDBACK_CELL_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kInterruptBudgetOffset, kInt32Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ALLOCATION_MEMENTO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kAllocationSiteOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_MODULE_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNativeModuleOffset, kTaggedSize) \
V(kExportWrappersOffset, kTaggedSize) \
V(kScriptOffset, kTaggedSize) \
V(kWeakInstanceListOffset, kTaggedSize) \
V(kAsmJsOffsetTableOffset, kTaggedSize) \
V(kBreakPointInfosOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_TABLE_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEntriesOffset, kTaggedSize) \
V(kMaximumLengthOffset, kTaggedSize) \
V(kDispatchTablesOffset, kTaggedSize) \
V(kRawTypeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_MEMORY_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kArrayBufferOffset, kTaggedSize) \
V(kMaximumPagesOffset, kTaggedSize) \
V(kInstancesOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_GLOBAL_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kUntaggedBufferOffset, kTaggedSize) \
V(kTaggedBufferOffset, kTaggedSize) \
V(kOffsetOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_EXCEPTION_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSerializedSignatureOffset, kTaggedSize) \
V(kExceptionTagOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ASM_WASM_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kManagedNativeModuleOffset, kTaggedSize) \
V(kExportWrappersOffset, kTaggedSize) \
V(kAsmJsOffsetTableOffset, kTaggedSize) \
V(kUsesBitsetOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSFINALIZATION_GROUP_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNativeContextOffset, kTaggedSize) \
V(kCleanupOffset, kTaggedSize) \
V(kActiveCellsOffset, kTaggedSize) \
V(kClearedCellsOffset, kTaggedSize) \
V(kKeyMapOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSFINALIZATION_GROUP_CLEANUP_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFinalizationGroupOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WEAK_CELL_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFinalizationGroupOffset, kTaggedSize) \
V(kTargetOffset, kTaggedSize) \
V(kHoldingsOffset, kTaggedSize) \
V(kPrevOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kKeyOffset, kTaggedSize) \
V(kKeyListPrevOffset, kTaggedSize) \
V(kKeyListNextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSWEAK_REF_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTargetOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BYTECODE_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kConstantPoolOffset, kTaggedSize) \
V(kHandlerTableOffset, kTaggedSize) \
V(kSourcePositionTableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kFrameSizeOffset, kInt32Size) \
V(kParameterSizeOffset, kInt32Size) \
V(kIncomingNewTargetOrGeneratorRegisterOffset, kInt32Size) \
V(kOsrNestingLevelOffset, kUInt8Size) \
V(kBytecodeAgeOffset, kUInt8Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MUTABLE_BIG_INT_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SORT_STATE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kReceiverOffset, kTaggedSize) \
V(kInitialReceiverMapOffset, kTaggedSize) \
V(kInitialReceiverLengthOffset, kTaggedSize) \
V(kUserCmpFnOffset, kTaggedSize) \
V(kSortComparePtrOffset, kTaggedSize) \
V(kLoadFnOffset, kTaggedSize) \
V(kStoreFnOffset, kTaggedSize) \
V(kDeleteFnOffset, kTaggedSize) \
V(kCanUseSameAccessorFnOffset, kTaggedSize) \
V(kMinGallopOffset, kTaggedSize) \
V(kPendingRunsSizeOffset, kTaggedSize) \
V(kPendingRunsOffset, kTaggedSize) \
V(kWorkArrayOffset, kTaggedSize) \
V(kTempArrayOffset, kTaggedSize) \
V(kSortLengthOffset, kTaggedSize) \
V(kNumberOfUndefinedOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_INTERNAL_CLASS_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kAOffset, kTaggedSize) \
V(kBOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SMI_PAIR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kAOffset, kTaggedSize) \
V(kBOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SMI_BOX_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kUnrelatedOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSDATE_TIME_FORMAT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIcuLocaleOffset, kTaggedSize) \
V(kIcuSimpleDateFormatOffset, kTaggedSize) \
V(kIcuDateIntervalFormatOffset, kTaggedSize) \
V(kBoundFormatOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSLIST_FORMAT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLocaleOffset, kTaggedSize) \
V(kIcuFormatterOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSNUMBER_FORMAT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLocaleOffset, kTaggedSize) \
V(kIcuNumberFormatterOffset, kTaggedSize) \
V(kBoundFormatOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPLURAL_RULES_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLocaleOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kIcuPluralRulesOffset, kTaggedSize) \
V(kIcuNumberFormatterOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSRELATIVE_TIME_FORMAT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLocaleOffset, kTaggedSize) \
V(kIcuFormatterOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSLOCALE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIcuLocaleOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSEGMENTER_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLocaleOffset, kTaggedSize) \
V(kIcuBreakIteratorOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSEGMENT_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIcuBreakIteratorOffset, kTaggedSize) \
V(kUnicodeStringOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSV8BREAK_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLocaleOffset, kTaggedSize) \
V(kBreakIteratorOffset, kTaggedSize) \
V(kUnicodeStringOffset, kTaggedSize) \
V(kBoundAdoptTextOffset, kTaggedSize) \
V(kBoundFirstOffset, kTaggedSize) \
V(kBoundNextOffset, kTaggedSize) \
V(kBoundCurrentOffset, kTaggedSize) \
V(kBoundBreakTypeOffset, kTaggedSize) \
V(kBreakIteratorTypeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSCOLLATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIcuCollatorOffset, kTaggedSize) \
V(kBoundCompareOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#endif  // V8_GEN_TORQUE_GENERATED_FIELD_OFFSETS_TQ_H_