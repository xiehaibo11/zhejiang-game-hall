
/* v8::internal::Smi::LexicographicCompare(v8::internal::Isolate*, v8::internal::Smi,
   v8::internal::Smi) */

undefined8 v8::internal::Smi::LexicographicCompare(Isolate *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_48 [16];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_48,param_1);
  uVar7 = param_2 >> 1;
  uVar8 = param_3 >> 1;
  if (uVar7 == uVar8) {
    uVar10 = 0;
    goto LAB_0111c2d0;
  }
  if ((uVar7 == 0) || (uVar8 == 0)) {
    uVar10 = 2;
    if ((int)uVar7 < (int)uVar8) {
      uVar10 = 0xfffffffffffffffe;
    }
    goto LAB_0111c2d0;
  }
  if (param_2 < 0) {
    if (param_3 < 0) {
      uVar8 = -uVar8;
      uVar7 = -uVar7;
      goto LAB_0111c208;
    }
  }
  else {
    if (param_3 < 0) {
      uVar10 = 2;
      goto LAB_0111c2d0;
    }
LAB_0111c208:
    iVar1 = (0x20 - (int)LZCOUNT(uVar7)) * 0x4d1 >> 0xc;
    iVar2 = (0x20 - (int)LZCOUNT(uVar8)) * 0x4d1 >> 0xc;
    uVar3 = iVar1 - (uint)(uVar7 < *(uint *)(&DAT_019da440 + (long)iVar1 * 4));
    uVar4 = iVar2 - (uint)(uVar8 < *(uint *)(&DAT_019da440 + (long)iVar2 * 4));
    if ((int)uVar3 < (int)uVar4) {
      uVar9 = 0xfffffffffffffffe;
      bVar6 = *(int *)(&DAT_019da440 + (long)(int)(uVar4 + ~uVar3) * 4) * uVar7 == uVar8 / 10;
      if (uVar8 / 10 <= *(int *)(&DAT_019da440 + (long)(int)(uVar4 + ~uVar3) * 4) * uVar7)
      goto LAB_0111c2c8;
    }
    else if ((int)uVar4 < (int)uVar3) {
      uVar9 = 2;
      bVar6 = uVar7 / 10 == *(int *)(&DAT_019da440 + (long)(int)(uVar3 + ~uVar4) * 4) * uVar8;
      if (*(int *)(&DAT_019da440 + (long)(int)(uVar3 + ~uVar4) * 4) * uVar8 <= uVar7 / 10) {
LAB_0111c2c8:
        uVar10 = 2;
        if (bVar6) {
          uVar10 = uVar9;
        }
        goto LAB_0111c2d0;
      }
    }
    else {
      uVar9 = 0;
      bVar6 = uVar7 == uVar8;
      if (uVar8 <= uVar7) goto LAB_0111c2c8;
    }
  }
  uVar10 = 0xfffffffffffffffe;
LAB_0111c2d0:
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_48);
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

