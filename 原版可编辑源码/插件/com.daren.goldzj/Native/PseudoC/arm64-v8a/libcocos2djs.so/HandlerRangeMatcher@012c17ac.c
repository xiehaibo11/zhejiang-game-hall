
/* v8::internal::compiler::HandlerRangeMatcher::HandlerRangeMatcher(v8::internal::interpreter::BytecodeArrayIterator
   const&, v8::internal::Handle<v8::internal::BytecodeArray>) */

void __thiscall
v8::internal::compiler::HandlerRangeMatcher::HandlerRangeMatcher
          (HandlerRangeMatcher *this,undefined8 param_1,undefined8 *param_3)

{
  int iVar1;
  __tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
  *this_00;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  HandlerTable aHStack_40 [16];
  
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  this_00 = (__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
             *)(this + 8);
  *(HandlerRangeMatcher **)this_00 = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  HandlerTable::HandlerTable(aHStack_40,*param_3);
  iVar1 = HandlerTable::NumberOfRangeEntries(aHStack_40);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      local_50 = HandlerTable::GetRangeStart(aHStack_40,iVar2);
      local_4c = HandlerTable::GetRangeEnd(aHStack_40,iVar2);
      local_48 = HandlerTable::GetRangeHandler(aHStack_40,iVar2);
      std::__ndk1::
      __tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
      ::
      __emplace_unique_key_args<v8::internal::compiler::HandlerRangeMatcher::Range,v8::internal::compiler::HandlerRangeMatcher::Range>
                (this_00,(Range *)&local_50,(Range *)&local_50);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  *(undefined8 *)(this + 0x20) = *(undefined8 *)this_00;
  return;
}

