
/* v8::internal::interpreter::ConstantArrayBuilder::AllocateReservedEntry(v8::internal::Smi) */

undefined4 __thiscall
v8::internal::interpreter::ConstantArrayBuilder::AllocateReservedEntry
          (ConstantArrayBuilder *this,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_38 [2];
  undefined8 *local_28;
  
  lVar2 = *(long *)this;
  local_38[0] = param_2;
  if (*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10) ==
      *(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4) {
    lVar2 = *(long *)(this + 8);
    if (*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10) ==
        *(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4) {
      lVar2 = *(long *)(this + 0x10);
      if (*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10) ==
          *(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
    }
  }
  uVar1 = ConstantArraySlice::Allocate(lVar2,param_2,2,1);
  local_28 = local_38;
  lVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>,std::__ndk1::__map_value_compare<v8::internal::Smi,std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>,std::__ndk1::less<v8::internal::Smi>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>>>
          ::
          __emplace_unique_key_args<v8::internal::Smi,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Smi_const&>,std::__ndk1::tuple<>>
                    ((Smi *)(this + 0x30),(piecewise_construct_t *)local_38,(tuple *)&DAT_01a634a0,
                     (tuple *)&local_28);
  *(undefined4 *)(lVar2 + 0x28) = uVar1;
  return uVar1;
}

