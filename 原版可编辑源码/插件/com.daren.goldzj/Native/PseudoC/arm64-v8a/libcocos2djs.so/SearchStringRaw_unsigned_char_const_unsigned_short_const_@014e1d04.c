
/* long v8::internal::SearchStringRaw<unsigned char const, unsigned short
   const>(v8::internal::Isolate*, unsigned char const*, int, unsigned short const*, int, int) */

long v8::internal::SearchStringRaw<unsigned_char_const,unsigned_short_const>
               (Isolate *param_1,uchar *param_2,int param_3,ushort *param_4,int param_5,int param_6)

{
  ulong *puVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  Isolate *local_50;
  ushort *puStack_48;
  long local_40;
  code *local_38;
  int local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_30 = param_5;
  if (param_5 < 0xfb) {
    local_30 = 0xfa;
  }
  local_40 = (long)param_5;
  local_30 = local_30 + -0xfa;
  puVar5 = (ulong *)param_4;
  if (7 < (uint)param_5) {
    if (((ulong)param_4 & 7) != 0) {
      uVar2 = *param_4;
      while (uVar2 < 0x100) {
        puVar5 = (ulong *)((long)puVar5 + 2);
        if (((ulong)puVar5 & 7) == 0) goto LAB_014e1d90;
        uVar2 = *(ushort *)puVar5;
      }
LAB_014e1df8:
      iVar4 = (int)((long)puVar5 - (long)param_4 >> 1);
      goto joined_r0x014e1de8;
    }
LAB_014e1d90:
    puVar1 = puVar5 + 2;
    for (; (puVar1 <= param_4 + param_5 && ((*puVar5 & 0xff00ff00ff00ff00) == 0));
        puVar5 = puVar5 + 1) {
      puVar1 = puVar5 + 3;
    }
  }
  for (; puVar5 < param_4 + param_5; puVar5 = (ulong *)((long)puVar5 + 2)) {
    if (0xff < (ushort)*puVar5) goto LAB_014e1df8;
  }
  iVar4 = (int)((ulong)((long)puVar5 - (long)param_4) >> 1);
joined_r0x014e1de8:
  if (iVar4 < param_5) {
    local_38 = StringSearch<unsigned_short,unsigned_char>::FailSearch;
  }
  else if (param_5 < 7) {
    if (param_5 == 1) {
      local_38 = StringSearch<unsigned_short,unsigned_char>::SingleCharSearch;
    }
    else {
      local_38 = StringSearch<unsigned_short,unsigned_char>::LinearSearch;
    }
  }
  else {
    local_38 = StringSearch<unsigned_short,unsigned_char>::InitialSearch;
  }
  local_50 = param_1;
  puStack_48 = param_4;
  iVar4 = (*local_38)(&local_50,param_2,(long)param_3,param_6);
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar4;
}

