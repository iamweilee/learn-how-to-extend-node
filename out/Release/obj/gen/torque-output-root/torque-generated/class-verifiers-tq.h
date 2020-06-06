#ifndef V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_TQ_H_

#ifdef VERIFY_HEAP
namespace v8 {
namespace internal {
class Isolate;
class Context;
class HeapObject;
class JSReceiver;
class HeapNumber;
class FixedArray;
class FixedArrayBase;
class String;
class Name;
class JSArray;
class JSObject;
class Oddball;
class Symbol;
class ConsString;
class ExternalString;
class ExternalOneByteString;
class ExternalTwoByteString;
class InternalizedString;
class SeqString;
class SeqOneByteString;
class SeqTwoByteString;
class SlicedString;
class ThinString;
class Struct;
class Tuple2;
class Tuple3;
class FixedDoubleArray;
class WeakFixedArray;
class ByteArray;
class Map;
class EnumCache;
class SourcePositionTableWithFrameCache;
class DescriptorArray;
class JSFunction;
class JSProxy;
class JSGlobalProxy;
class JSPrimitiveWrapper;
class JSArgumentsObject;
class JSSloppyArgumentsObject;
class JSArrayIterator;
class CallHandlerInfo;
class Module;
class SourceTextModule;
class SyntheticModule;
class JSModuleNamespace;
class JSWeakCollection;
class JSWeakSet;
class JSWeakMap;
class JSCollectionIterator;
class JSMessageObject;
class WeakArrayList;
class PrototypeInfo;
class Script;
class EmbedderDataArray;
class PreparseData;
class InterpreterData;
class SharedFunctionInfo;
class JSBoundFunction;
class Foreign;
class FreeSpace;
class JSArrayBuffer;
class JSArrayBufferView;
class JSTypedArray;
class JSCollection;
class JSSet;
class JSMap;
class JSDate;
class JSGlobalObject;
class JSAsyncFromSyncIterator;
class JSStringIterator;
class TemplateInfo;
class TemplateObjectDescription;
class FunctionTemplateRareData;
class FunctionTemplateInfo;
class ObjectTemplateInfo;
class PropertyArray;
class PropertyCell;
class JSDataView;
class InterceptorInfo;
class AccessCheckInfo;
class ArrayBoilerplateDescription;
class AliasedArgumentsEntry;
class Cell;
class DataHandler;
class JSGeneratorObject;
class JSAsyncFunctionObject;
class JSAsyncGeneratorObject;
class JSPromise;
class Microtask;
class CallbackTask;
class CallableTask;
class StackFrameInfo;
class StackTraceFrame;
class ClassPositions;
class WasmExportedFunctionData;
class WasmJSFunctionData;
class WasmCapiFunctionData;
class WasmIndirectFunctionTable;
class WasmDebugInfo;
class WasmExceptionTag;
class AsyncGeneratorRequest;
class SourceTextModuleInfoEntry;
class PromiseCapability;
class PromiseReaction;
class PromiseReactionJobTask;
class PromiseFulfillReactionJobTask;
class PromiseRejectReactionJobTask;
class PromiseResolveThenableJobTask;
class JSRegExp;
class JSRegExpResult;
class JSRegExpStringIterator;
class RegExpMatchInfo;
class AccessorInfo;
class AccessorPair;
class BreakPoint;
class BreakPointInfo;
class DebugInfo;
class FeedbackVector;
class FeedbackCell;
class AllocationMemento;
class WasmModuleObject;
class WasmTableObject;
class WasmMemoryObject;
class WasmGlobalObject;
class WasmExceptionObject;
class AsmWasmData;
class JSFinalizationGroup;
class JSFinalizationGroupCleanupIterator;
class WeakCell;
class JSWeakRef;
class BytecodeArray;
class SortState;
class InternalClass;
class SmiPair;
class SmiBox;
class JSDateTimeFormat;
class JSListFormat;
class JSNumberFormat;
class JSPluralRules;
class JSRelativeTimeFormat;
class JSLocale;
class JSSegmenter;
class JSSegmentIterator;
class JSV8BreakIterator;
class JSCollator;
class TorqueGeneratedClassVerifiers{
 public:
  static void ContextVerify(Context o, Isolate* isolate);
  static void HeapObjectVerify(HeapObject o, Isolate* isolate);
  static void JSReceiverVerify(JSReceiver o, Isolate* isolate);
  static void HeapNumberVerify(HeapNumber o, Isolate* isolate);
  static void FixedArrayVerify(FixedArray o, Isolate* isolate);
  static void FixedArrayBaseVerify(FixedArrayBase o, Isolate* isolate);
  static void StringVerify(String o, Isolate* isolate);
  static void NameVerify(Name o, Isolate* isolate);
  static void JSArrayVerify(JSArray o, Isolate* isolate);
  static void JSObjectVerify(JSObject o, Isolate* isolate);
  static void OddballVerify(Oddball o, Isolate* isolate);
  static void SymbolVerify(Symbol o, Isolate* isolate);
  static void ConsStringVerify(ConsString o, Isolate* isolate);
  static void ExternalStringVerify(ExternalString o, Isolate* isolate);
  static void ExternalOneByteStringVerify(ExternalOneByteString o, Isolate* isolate);
  static void ExternalTwoByteStringVerify(ExternalTwoByteString o, Isolate* isolate);
  static void InternalizedStringVerify(InternalizedString o, Isolate* isolate);
  static void SeqStringVerify(SeqString o, Isolate* isolate);
  static void SeqOneByteStringVerify(SeqOneByteString o, Isolate* isolate);
  static void SeqTwoByteStringVerify(SeqTwoByteString o, Isolate* isolate);
  static void SlicedStringVerify(SlicedString o, Isolate* isolate);
  static void ThinStringVerify(ThinString o, Isolate* isolate);
  static void StructVerify(Struct o, Isolate* isolate);
  static void Tuple2Verify(Tuple2 o, Isolate* isolate);
  static void Tuple3Verify(Tuple3 o, Isolate* isolate);
  static void FixedDoubleArrayVerify(FixedDoubleArray o, Isolate* isolate);
  static void WeakFixedArrayVerify(WeakFixedArray o, Isolate* isolate);
  static void ByteArrayVerify(ByteArray o, Isolate* isolate);
  static void MapVerify(Map o, Isolate* isolate);
  static void EnumCacheVerify(EnumCache o, Isolate* isolate);
  static void SourcePositionTableWithFrameCacheVerify(SourcePositionTableWithFrameCache o, Isolate* isolate);
  static void DescriptorArrayVerify(DescriptorArray o, Isolate* isolate);
  static void JSFunctionVerify(JSFunction o, Isolate* isolate);
  static void JSProxyVerify(JSProxy o, Isolate* isolate);
  static void JSGlobalProxyVerify(JSGlobalProxy o, Isolate* isolate);
  static void JSPrimitiveWrapperVerify(JSPrimitiveWrapper o, Isolate* isolate);
  static void JSArgumentsObjectVerify(JSArgumentsObject o, Isolate* isolate);
  static void JSSloppyArgumentsObjectVerify(JSSloppyArgumentsObject o, Isolate* isolate);
  static void JSArrayIteratorVerify(JSArrayIterator o, Isolate* isolate);
  static void CallHandlerInfoVerify(CallHandlerInfo o, Isolate* isolate);
  static void ModuleVerify(Module o, Isolate* isolate);
  static void SourceTextModuleVerify(SourceTextModule o, Isolate* isolate);
  static void SyntheticModuleVerify(SyntheticModule o, Isolate* isolate);
  static void JSModuleNamespaceVerify(JSModuleNamespace o, Isolate* isolate);
  static void JSWeakCollectionVerify(JSWeakCollection o, Isolate* isolate);
  static void JSWeakSetVerify(JSWeakSet o, Isolate* isolate);
  static void JSWeakMapVerify(JSWeakMap o, Isolate* isolate);
  static void JSCollectionIteratorVerify(JSCollectionIterator o, Isolate* isolate);
  static void JSMessageObjectVerify(JSMessageObject o, Isolate* isolate);
  static void WeakArrayListVerify(WeakArrayList o, Isolate* isolate);
  static void PrototypeInfoVerify(PrototypeInfo o, Isolate* isolate);
  static void ScriptVerify(Script o, Isolate* isolate);
  static void EmbedderDataArrayVerify(EmbedderDataArray o, Isolate* isolate);
  static void PreparseDataVerify(PreparseData o, Isolate* isolate);
  static void InterpreterDataVerify(InterpreterData o, Isolate* isolate);
  static void SharedFunctionInfoVerify(SharedFunctionInfo o, Isolate* isolate);
  static void JSBoundFunctionVerify(JSBoundFunction o, Isolate* isolate);
  static void ForeignVerify(Foreign o, Isolate* isolate);
  static void FreeSpaceVerify(FreeSpace o, Isolate* isolate);
  static void JSArrayBufferVerify(JSArrayBuffer o, Isolate* isolate);
  static void JSArrayBufferViewVerify(JSArrayBufferView o, Isolate* isolate);
  static void JSTypedArrayVerify(JSTypedArray o, Isolate* isolate);
  static void JSCollectionVerify(JSCollection o, Isolate* isolate);
  static void JSSetVerify(JSSet o, Isolate* isolate);
  static void JSMapVerify(JSMap o, Isolate* isolate);
  static void JSDateVerify(JSDate o, Isolate* isolate);
  static void JSGlobalObjectVerify(JSGlobalObject o, Isolate* isolate);
  static void JSAsyncFromSyncIteratorVerify(JSAsyncFromSyncIterator o, Isolate* isolate);
  static void JSStringIteratorVerify(JSStringIterator o, Isolate* isolate);
  static void TemplateInfoVerify(TemplateInfo o, Isolate* isolate);
  static void TemplateObjectDescriptionVerify(TemplateObjectDescription o, Isolate* isolate);
  static void FunctionTemplateRareDataVerify(FunctionTemplateRareData o, Isolate* isolate);
  static void FunctionTemplateInfoVerify(FunctionTemplateInfo o, Isolate* isolate);
  static void ObjectTemplateInfoVerify(ObjectTemplateInfo o, Isolate* isolate);
  static void PropertyArrayVerify(PropertyArray o, Isolate* isolate);
  static void PropertyCellVerify(PropertyCell o, Isolate* isolate);
  static void JSDataViewVerify(JSDataView o, Isolate* isolate);
  static void InterceptorInfoVerify(InterceptorInfo o, Isolate* isolate);
  static void AccessCheckInfoVerify(AccessCheckInfo o, Isolate* isolate);
  static void ArrayBoilerplateDescriptionVerify(ArrayBoilerplateDescription o, Isolate* isolate);
  static void AliasedArgumentsEntryVerify(AliasedArgumentsEntry o, Isolate* isolate);
  static void CellVerify(Cell o, Isolate* isolate);
  static void DataHandlerVerify(DataHandler o, Isolate* isolate);
  static void JSGeneratorObjectVerify(JSGeneratorObject o, Isolate* isolate);
  static void JSAsyncFunctionObjectVerify(JSAsyncFunctionObject o, Isolate* isolate);
  static void JSAsyncGeneratorObjectVerify(JSAsyncGeneratorObject o, Isolate* isolate);
  static void JSPromiseVerify(JSPromise o, Isolate* isolate);
  static void MicrotaskVerify(Microtask o, Isolate* isolate);
  static void CallbackTaskVerify(CallbackTask o, Isolate* isolate);
  static void CallableTaskVerify(CallableTask o, Isolate* isolate);
  static void StackFrameInfoVerify(StackFrameInfo o, Isolate* isolate);
  static void StackTraceFrameVerify(StackTraceFrame o, Isolate* isolate);
  static void ClassPositionsVerify(ClassPositions o, Isolate* isolate);
  static void WasmExportedFunctionDataVerify(WasmExportedFunctionData o, Isolate* isolate);
  static void WasmJSFunctionDataVerify(WasmJSFunctionData o, Isolate* isolate);
  static void WasmCapiFunctionDataVerify(WasmCapiFunctionData o, Isolate* isolate);
  static void WasmIndirectFunctionTableVerify(WasmIndirectFunctionTable o, Isolate* isolate);
  static void WasmDebugInfoVerify(WasmDebugInfo o, Isolate* isolate);
  static void WasmExceptionTagVerify(WasmExceptionTag o, Isolate* isolate);
  static void AsyncGeneratorRequestVerify(AsyncGeneratorRequest o, Isolate* isolate);
  static void SourceTextModuleInfoEntryVerify(SourceTextModuleInfoEntry o, Isolate* isolate);
  static void PromiseCapabilityVerify(PromiseCapability o, Isolate* isolate);
  static void PromiseReactionVerify(PromiseReaction o, Isolate* isolate);
  static void PromiseReactionJobTaskVerify(PromiseReactionJobTask o, Isolate* isolate);
  static void PromiseFulfillReactionJobTaskVerify(PromiseFulfillReactionJobTask o, Isolate* isolate);
  static void PromiseRejectReactionJobTaskVerify(PromiseRejectReactionJobTask o, Isolate* isolate);
  static void PromiseResolveThenableJobTaskVerify(PromiseResolveThenableJobTask o, Isolate* isolate);
  static void JSRegExpVerify(JSRegExp o, Isolate* isolate);
  static void JSRegExpResultVerify(JSRegExpResult o, Isolate* isolate);
  static void JSRegExpStringIteratorVerify(JSRegExpStringIterator o, Isolate* isolate);
  static void RegExpMatchInfoVerify(RegExpMatchInfo o, Isolate* isolate);
  static void AccessorInfoVerify(AccessorInfo o, Isolate* isolate);
  static void AccessorPairVerify(AccessorPair o, Isolate* isolate);
  static void BreakPointVerify(BreakPoint o, Isolate* isolate);
  static void BreakPointInfoVerify(BreakPointInfo o, Isolate* isolate);
  static void DebugInfoVerify(DebugInfo o, Isolate* isolate);
  static void FeedbackVectorVerify(FeedbackVector o, Isolate* isolate);
  static void FeedbackCellVerify(FeedbackCell o, Isolate* isolate);
  static void AllocationMementoVerify(AllocationMemento o, Isolate* isolate);
  static void WasmModuleObjectVerify(WasmModuleObject o, Isolate* isolate);
  static void WasmTableObjectVerify(WasmTableObject o, Isolate* isolate);
  static void WasmMemoryObjectVerify(WasmMemoryObject o, Isolate* isolate);
  static void WasmGlobalObjectVerify(WasmGlobalObject o, Isolate* isolate);
  static void WasmExceptionObjectVerify(WasmExceptionObject o, Isolate* isolate);
  static void AsmWasmDataVerify(AsmWasmData o, Isolate* isolate);
  static void JSFinalizationGroupVerify(JSFinalizationGroup o, Isolate* isolate);
  static void JSFinalizationGroupCleanupIteratorVerify(JSFinalizationGroupCleanupIterator o, Isolate* isolate);
  static void WeakCellVerify(WeakCell o, Isolate* isolate);
  static void JSWeakRefVerify(JSWeakRef o, Isolate* isolate);
  static void BytecodeArrayVerify(BytecodeArray o, Isolate* isolate);
  static void SortStateVerify(SortState o, Isolate* isolate);
  static void InternalClassVerify(InternalClass o, Isolate* isolate);
  static void SmiPairVerify(SmiPair o, Isolate* isolate);
  static void SmiBoxVerify(SmiBox o, Isolate* isolate);
  static void JSDateTimeFormatVerify(JSDateTimeFormat o, Isolate* isolate);
  static void JSListFormatVerify(JSListFormat o, Isolate* isolate);
  static void JSNumberFormatVerify(JSNumberFormat o, Isolate* isolate);
  static void JSPluralRulesVerify(JSPluralRules o, Isolate* isolate);
  static void JSRelativeTimeFormatVerify(JSRelativeTimeFormat o, Isolate* isolate);
  static void JSLocaleVerify(JSLocale o, Isolate* isolate);
  static void JSSegmenterVerify(JSSegmenter o, Isolate* isolate);
  static void JSSegmentIteratorVerify(JSSegmentIterator o, Isolate* isolate);
  static void JSV8BreakIteratorVerify(JSV8BreakIterator o, Isolate* isolate);
  static void JSCollatorVerify(JSCollator o, Isolate* isolate);
};
}  // namespace internal
}  // namespace v8
#endif  // VERIFY_HEAP
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_TQ_H_
