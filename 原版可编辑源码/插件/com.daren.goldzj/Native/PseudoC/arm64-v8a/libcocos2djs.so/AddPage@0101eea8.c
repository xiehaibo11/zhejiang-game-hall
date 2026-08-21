
/* v8::internal::CodeLargeObjectSpace::AddPage(v8::internal::LargePage*, unsigned long) */

void __thiscall
v8::internal::CodeLargeObjectSpace::AddPage
          (CodeLargeObjectSpace *this,LargePage *param_1,ulong param_2)

{
  ulong uVar1;
  CodeLargeObjectSpace *pCVar2;
  long lVar3;
  long lVar4;
  LargePage *local_48 [2];
  LargePage **local_38;
  
  *(long *)(this + 0x68) = (long)*(int *)param_1 + *(long *)(this + 0x68);
  uVar1 = *(long *)(this + 0x50) + *(long *)param_1;
  *(ulong *)(this + 0x50) = uVar1;
  if (*(ulong *)(this + 0x58) < uVar1) {
    *(ulong *)(this + 0x58) = uVar1;
  }
  pCVar2 = this + 0x28;
  lVar3 = *(long *)pCVar2;
  *(ulong *)(this + 0x78) = *(long *)(this + 0x78) + param_2;
  *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(LargePage **)(this + 0x20) = param_1;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar4;
    *(long *)(param_1 + 0xe8) = lVar3;
    *(LargePage **)(lVar3 + 0xe0) = param_1;
    if (lVar4 != 0) {
      pCVar2 = (CodeLargeObjectSpace *)(lVar4 + 0xe8);
    }
  }
  *(LargePage **)pCVar2 = param_1;
  if (param_1 < param_1 + *(long *)param_1) {
    local_48[0] = param_1;
    do {
      local_38 = local_48;
      lVar3 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>>>
              ::
              __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                        ((ulong *)(this + 0x80),(piecewise_construct_t *)local_48,
                         (tuple *)&DAT_019c7168,(tuple *)&local_38);
      *(LargePage **)(lVar3 + 0x18) = param_1;
      local_48[0] = local_48[0] + 0x40000;
    } while (local_48[0] < param_1 + *(long *)param_1);
  }
  return;
}

