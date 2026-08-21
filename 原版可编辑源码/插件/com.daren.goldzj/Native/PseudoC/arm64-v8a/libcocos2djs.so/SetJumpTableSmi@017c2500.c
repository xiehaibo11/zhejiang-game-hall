
/* v8::internal::interpreter::ConstantArrayBuilder::SetJumpTableSmi(unsigned long,
   v8::internal::Smi) */

void __thiscall
v8::internal::interpreter::ConstantArrayBuilder::SetJumpTableSmi
          (ConstantArrayBuilder *this,ulong param_1,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint local_2c;
  undefined8 local_28;
  
  plVar2 = *(long **)this;
  local_28 = param_3;
  if (((*plVar2 + plVar2[1]) - 1U < param_1) &&
     (plVar2 = *(long **)(this + 8), (*plVar2 + plVar2[1]) - 1U < param_1)) {
    plVar2 = *(long **)(this + 0x10);
    if ((*plVar2 + plVar2[1]) - 1U < param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  local_2c = (uint)param_1;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>,std::__ndk1::__map_value_compare<v8::internal::Smi,std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>,std::__ndk1::less<v8::internal::Smi>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>>>
  ::__emplace_unique_key_args<v8::internal::Smi,v8::internal::Smi&,unsigned_int>
            ((__tree<std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>,std::__ndk1::__map_value_compare<v8::internal::Smi,std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>,std::__ndk1::less<v8::internal::Smi>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>>>
              *)(this + 0x30),(Smi *)&local_28,(Smi *)&local_28,&local_2c);
  puVar1 = (undefined8 *)(plVar2[4] + (param_1 - *plVar2) * 0x10);
  *(undefined1 *)(puVar1 + 1) = 8;
  *puVar1 = local_28;
  return;
}

