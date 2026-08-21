
/* v8::internal::MacroAssembler::LoadElementsKindFromMap(v8::internal::Register,
   v8::internal::Register) */

void v8::internal::MacroAssembler::LoadElementsKindFromMap
               (Assembler *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_58 = 10;
  local_64 = 0xffffffff;
  local_5c = 2;
  local_50 = 0xffffffff00000000;
  uStack_48 = 0xffffffff;
  local_70 = param_4;
  local_68 = param_5;
  local_40 = param_2;
  local_38 = param_3;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_40,&local_70,0x400000);
  local_70 = local_40;
  local_68 = local_38;
  local_30 = local_40;
  local_28 = local_38;
  if ((DecodeField<v8::base::BitField<v8::internal::ElementsKind,3,5,unsigned_int>>(v8::internal::Register,v8::internal::Register)
       ::setbits & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DecodeField<v8::base::BitField<v8::internal::ElementsKind,3,5,unsigned_int>>(v8::internal::Register,v8::internal::Register)
                                 ::setbits);
    if (iVar1 != 0) {
      DecodeField<v8::base::BitField<v8::internal::ElementsKind,3,5,unsigned_int>>(v8::internal::Register,v8::internal::Register)
      ::setbits = CountSetBits(0xf8,0x20);
      __cxa_guard_release(&DecodeField<v8::base::BitField<v8::internal::ElementsKind,3,5,unsigned_int>>(v8::internal::Register,v8::internal::Register)
                           ::setbits);
    }
  }
  Assembler::ubfm(param_1,(Register *)&local_70,(Register *)&local_30,3,
                  DecodeField<v8::base::BitField<v8::internal::ElementsKind,3,5,unsigned_int>>(v8::internal::Register,v8::internal::Register)
                  ::setbits + 2);
  return;
}

