
/* void v8::internal::FindStringIndices<unsigned char, unsigned short>(v8::internal::Isolate*,
   v8::internal::Vector<unsigned char const>, v8::internal::Vector<unsigned short const>,
   std::__ndk1::vector<int, std::__ndk1::allocator<int> >*, unsigned int) */

void v8::internal::FindStringIndices<unsigned_char,unsigned_short>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,long param_5
               ,vector<int,std::__ndk1::allocator<int>> *param_6,int param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  uint uVar8;
  int local_74;
  undefined8 local_70;
  ulong *puStack_68;
  long local_60;
  code *local_58;
  int local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar8 = (uint)param_5;
  uVar5 = uVar8;
  if ((int)uVar8 < 0xfb) {
    uVar5 = 0xfa;
  }
  local_50 = uVar5 - 0xfa;
  puVar2 = (ulong *)((long)param_4 + ((param_5 << 0x20) >> 0x1f));
  local_74 = 0;
  puVar7 = param_4;
  if (7 < uVar8) {
    if (((ulong)param_4 & 7) != 0) {
      uVar3 = (ushort)*param_4;
      while (uVar3 < 0x100) {
        puVar7 = (ulong *)((long)puVar7 + 2);
        if (((ulong)puVar7 & 7) == 0) goto LAB_0157d0d8;
        uVar3 = *(ushort *)puVar7;
      }
LAB_0157d148:
      iVar6 = (int)((long)puVar7 - (long)param_4 >> 1);
      goto joined_r0x0157d130;
    }
LAB_0157d0d8:
    puVar1 = puVar7 + 2;
    for (; (puVar1 <= puVar2 && ((*puVar7 & 0xff00ff00ff00ff00) == 0)); puVar7 = puVar7 + 1) {
      puVar1 = puVar7 + 3;
    }
  }
  for (; puVar7 < puVar2; puVar7 = (ulong *)((long)puVar7 + 2)) {
    if (0xff < (ushort)*puVar7) goto LAB_0157d148;
  }
  iVar6 = (int)((ulong)((long)puVar7 - (long)param_4) >> 1);
joined_r0x0157d130:
  local_60 = param_5;
  puStack_68 = param_4;
  local_70 = param_1;
  if (iVar6 < (int)uVar8) {
    local_58 = StringSearch<unsigned_short,unsigned_char>::FailSearch;
  }
  else if ((int)uVar8 < 7) {
    if (uVar8 == 1) {
      local_58 = StringSearch<unsigned_short,unsigned_char>::SingleCharSearch;
    }
    else {
      local_58 = StringSearch<unsigned_short,unsigned_char>::LinearSearch;
    }
  }
  else {
    local_58 = StringSearch<unsigned_short,unsigned_char>::InitialSearch;
  }
  while ((param_7 != 0 &&
         (local_74 = (*local_58)(&local_70,param_2,param_3,local_74), -1 < local_74))) {
    if (*(int **)(param_6 + 8) == *(int **)(param_6 + 0x10)) {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                (param_6,&local_74);
    }
    else {
      **(int **)(param_6 + 8) = local_74;
      *(long *)(param_6 + 8) = *(long *)(param_6 + 8) + 4;
    }
    param_7 = param_7 + -1;
    local_74 = local_74 + uVar8;
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

