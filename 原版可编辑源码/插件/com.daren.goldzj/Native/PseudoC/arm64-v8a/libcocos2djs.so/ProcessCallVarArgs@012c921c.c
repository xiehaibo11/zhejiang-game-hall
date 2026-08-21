
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCallVarArgs(v8::internal::ConvertReceiverMode,
   v8::internal::compiler::Hints const&, v8::internal::interpreter::Register, int,
   v8::internal::FeedbackSlot, v8::internal::compiler::MissingArgumentsPolicy) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCallVarArgs
          (SerializerForBackgroundCompilation *this,int param_2,undefined8 *param_3,
          undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  long local_68 [4];
  undefined8 local_48;
  
  PrepareArgumentsHints(local_68,this,param_4,(long)param_5);
  if (param_2 == 0) {
    lVar1 = *(long *)(this + 0x20);
    lVar2 = **(long **)this;
    if (lVar1 == 0) {
      lVar1 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
      *(long *)(this + 0x20) = lVar1;
    }
    local_48 = 0;
    Hints::AddConstant((Hints *)&local_48,lVar2 + 0xa0,lVar1);
    std::__ndk1::
    vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
    ::insert((vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
              *)local_68,local_68[0],&local_48);
  }
  ProcessCallOrConstruct(this,*param_3,0,0,local_68,param_6,param_7);
  return;
}

