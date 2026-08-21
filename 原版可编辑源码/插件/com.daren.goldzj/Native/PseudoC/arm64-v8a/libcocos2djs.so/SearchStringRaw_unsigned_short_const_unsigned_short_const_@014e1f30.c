
/* long v8::internal::SearchStringRaw<unsigned short const, unsigned short
   const>(v8::internal::Isolate*, unsigned short const*, int, unsigned short const*, int, int) */

long v8::internal::SearchStringRaw<unsigned_short_const,unsigned_short_const>
               (Isolate *param_1,ushort *param_2,int param_3,ushort *param_4,int param_5,int param_6
               )

{
  long lVar1;
  int iVar2;
  Isolate *local_50;
  ushort *puStack_48;
  long local_40;
  code *local_38;
  int local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_5;
  if (param_5 < 0xfb) {
    local_30 = 0xfa;
  }
  local_40 = (long)param_5;
  local_30 = local_30 + -0xfa;
  if (param_5 < 7) {
    if (param_5 == 1) {
      local_38 = StringSearch<unsigned_short,unsigned_short>::SingleCharSearch;
    }
    else {
      local_38 = StringSearch<unsigned_short,unsigned_short>::LinearSearch;
    }
  }
  else {
    local_38 = StringSearch<unsigned_short,unsigned_short>::InitialSearch;
  }
  local_50 = param_1;
  puStack_48 = param_4;
  iVar2 = (*local_38)(&local_50,param_2,(long)param_3,param_6);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (long)iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

