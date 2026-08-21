
/* v8::internal::compiler::JSHeapBroker::JSHeapBroker(v8::internal::Isolate*, v8::internal::Zone*,
   bool) */

void __thiscall
v8::internal::compiler::JSHeapBroker::JSHeapBroker
          (JSHeapBroker *this,Isolate *param_1,Zone *param_2,bool param_3)

{
  basic_ostream *pbVar1;
  RefsMap *pRVar2;
  ios_base *this_00;
  char local_34 [4];
  
  *(Isolate **)this = param_1;
  *(Zone **)(this + 8) = param_2;
  *(Zone **)(this + 0x10) = param_2;
  this[0x18] = (JSHeapBroker)0x0;
  this[0x20] = (JSHeapBroker)0x0;
  pRVar2 = *(RefsMap **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)pRVar2) < 0x18) {
    pRVar2 = (RefsMap *)Zone::NewExpand(param_2,0x18);
  }
  else {
    *(RefsMap **)(param_2 + 0x10) = pRVar2 + 0x18;
  }
  RefsMap::RefsMap(pRVar2,8);
  *(RefsMap **)(this + 0x30) = pRVar2;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  std::__ndk1::
  __hash_table<v8::internal::Handle<v8::internal::JSObject>,v8::internal::Handle<v8::internal::JSObject>::hash,v8::internal::Handle<v8::internal::JSObject>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject>>>
  ::rehash((__hash_table<v8::internal::Handle<v8::internal::JSObject>,v8::internal::Handle<v8::internal::JSObject>::hash,v8::internal::Handle<v8::internal::JSObject>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject>>>
            *)(this + 0x38),100);
  this_00 = (ios_base *)(this + 0xd8);
  *(undefined8 *)this_00 = 0x1ca11a0;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x74] = (JSHeapBroker)param_3;
  *(undefined8 *)(this + 0x78) = 0x1ca1178;
  std::__ndk1::ios_base::init(this_00,this + 0x80);
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x168) = 0xffffffff;
  *(undefined ***)this_00 = &PTR__StdoutStream_01ca1150;
  *(undefined ***)(this + 0x78) = &PTR__StdoutStream_01ca1128;
  *(undefined ***)(this + 0x80) = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::locale((locale *)(this + 0x88));
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)(this + 0x80) = &PTR__AndroidLogStream_01cbc008;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = *(undefined8 *)(this + 0x10);
  *(undefined4 *)(this + 0x1b0) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
            *)(this + 0x180),100);
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e8) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,v8::base::hash<v8::internal::compiler::ObjectData*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::equal_to<v8::internal::compiler::ObjectData*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,v8::base::hash<v8::internal::compiler::ObjectData*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::equal_to<v8::internal::compiler::ObjectData*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>>>
            *)(this + 0x1b8),100);
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x220) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
            *)(this + 0x1f0),100);
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(JSHeapBroker **)(this + 0x248) = this + 0x250;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 600) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x260) = 0;
  if ((this[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
    pbVar1 = (basic_ostream *)Trace(this);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,"Constructing heap broker",0x18);
    local_34[0] = '\n';
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,local_34,1);
  }
  return;
}

