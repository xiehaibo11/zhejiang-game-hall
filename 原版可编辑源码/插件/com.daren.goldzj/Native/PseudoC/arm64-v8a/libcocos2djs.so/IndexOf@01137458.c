
/* v8::internal::String::IndexOf(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>, int) */

int v8::internal::String::IndexOf(undefined8 param_1,long *param_2,long *param_3,int param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_70;
  ulong *puStack_68;
  long local_60;
  code *local_58;
  int local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(int *)(*param_3 + 7) == 0) goto LAB_01137744;
  if (*(uint *)(*param_2 + 7) < (uint)(*(int *)(*param_3 + 7) + param_4)) {
    param_4 = -1;
    goto LAB_01137744;
  }
  puVar5 = (undefined8 *)Flatten(param_1,param_2,0);
  puVar6 = (undefined8 *)Flatten(param_1,param_3,0);
  local_70 = *puVar5;
  auVar12 = GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_70);
  local_70 = *puVar6;
  auVar13 = GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_70);
  puStack_68 = auVar13._0_8_;
  uVar7 = auVar13._8_4_;
  local_60 = (long)(int)uVar7;
  uVar10 = auVar12._8_8_ & 0xffffffff00000000;
  if (auVar13._8_8_ >> 0x20 == 1) {
    if (uVar10 == 0x100000000) {
      uVar8 = uVar7;
      if ((int)uVar7 < 0xfb) {
        uVar8 = 0xfa;
      }
      local_50 = uVar8 - 0xfa;
      if ((int)uVar7 < 7) {
        if (uVar7 == 1) {
          local_58 = StringSearch<unsigned_char,unsigned_char>::SingleCharSearch;
        }
        else {
          local_58 = StringSearch<unsigned_char,unsigned_char>::LinearSearch;
        }
      }
      else {
        local_58 = StringSearch<unsigned_char,unsigned_char>::InitialSearch;
      }
    }
    else {
      uVar8 = uVar7;
      if ((int)uVar7 < 0xfb) {
        uVar8 = 0xfa;
      }
      local_50 = uVar8 - 0xfa;
      if ((int)uVar7 < 7) {
        if (uVar7 == 1) {
          local_58 = StringSearch<unsigned_char,unsigned_short>::SingleCharSearch;
        }
        else {
          local_58 = StringSearch<unsigned_char,unsigned_short>::LinearSearch;
        }
      }
      else {
        local_58 = StringSearch<unsigned_char,unsigned_short>::InitialSearch;
      }
    }
  }
  else if (uVar10 == 0x100000000) {
    uVar8 = uVar7;
    if ((int)uVar7 < 0xfb) {
      uVar8 = 0xfa;
    }
    local_50 = uVar8 - 0xfa;
    puVar2 = (ulong *)((long)puStack_68 + local_60 * 2);
    puVar11 = puStack_68;
    if (uVar7 < 8) {
LAB_011376c8:
      for (; puVar11 < puVar2; puVar11 = (ulong *)((long)puVar11 + 2)) {
        if (0xff < (ushort)*puVar11) goto LAB_011376ec;
      }
      iVar9 = (int)((ulong)((long)puVar11 - (long)puStack_68) >> 1);
    }
    else {
      if (((ulong)puStack_68 & 7) == 0) {
LAB_01137684:
        puVar1 = puVar11 + 2;
        for (; (puVar1 <= puVar2 && ((*puVar11 & 0xff00ff00ff00ff00) == 0)); puVar11 = puVar11 + 1)
        {
          puVar1 = puVar11 + 3;
        }
        goto LAB_011376c8;
      }
      uVar3 = (ushort)*puStack_68;
      while (uVar3 < 0x100) {
        puVar11 = (ulong *)((long)puVar11 + 2);
        if (((ulong)puVar11 & 7) == 0) goto LAB_01137684;
        uVar3 = *(ushort *)puVar11;
      }
LAB_011376ec:
      iVar9 = (int)((long)puVar11 - (long)puStack_68 >> 1);
    }
    if (iVar9 < (int)uVar7) {
      local_58 = StringSearch<unsigned_short,unsigned_char>::FailSearch;
    }
    else if ((int)uVar7 < 7) {
      if (uVar7 == 1) {
        local_58 = StringSearch<unsigned_short,unsigned_char>::SingleCharSearch;
      }
      else {
        local_58 = StringSearch<unsigned_short,unsigned_char>::LinearSearch;
      }
    }
    else {
      local_58 = StringSearch<unsigned_short,unsigned_char>::InitialSearch;
    }
  }
  else {
    uVar8 = uVar7;
    if ((int)uVar7 < 0xfb) {
      uVar8 = 0xfa;
    }
    local_50 = uVar8 - 0xfa;
    if ((int)uVar7 < 7) {
      if (uVar7 == 1) {
        local_58 = StringSearch<unsigned_short,unsigned_short>::SingleCharSearch;
      }
      else {
        local_58 = StringSearch<unsigned_short,unsigned_short>::LinearSearch;
      }
    }
    else {
      local_58 = StringSearch<unsigned_short,unsigned_short>::InitialSearch;
    }
  }
  local_70 = param_1;
  param_4 = (*local_58)(&local_70,auVar12._0_8_,(long)auVar12._8_4_,param_4);
LAB_01137744:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}

