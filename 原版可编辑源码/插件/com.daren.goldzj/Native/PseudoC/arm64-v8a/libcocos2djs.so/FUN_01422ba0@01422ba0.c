
undefined8 FUN_01422ba0(long param_1,uint param_2,ulong param_3,uint param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x26;
  
  uVar8 = (ulong)(param_2 + param_5);
  if ((int)param_2 < (int)param_4) {
    uVar7 = (param_2 + param_5) - 2;
    uVar6 = (param_4 + param_5) - 2;
    while ((int)param_2 <= (int)uVar7) {
      uVar8 = (long)((ulong)uVar6 << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(param_3 + 3) << 0x20) >> 0x21) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1422cac);
        (*pcVar5)();
      }
      uVar3 = (long)((ulong)uVar7 << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(param_1 + 3) << 0x20) >> 0x21) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1422cb0);
        (*pcVar5)();
      }
      uVar2 = *(uint *)(param_1 + uVar3 * 4 + 7);
      lVar1 = uVar8 * 4 + 7;
      uVar7 = uVar7 - 2;
      uVar6 = uVar6 - 2;
      *(uint *)(param_3 + lVar1) = uVar2;
      if (((((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar2 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0
         )) {
        FUN_0133eb00(param_3,param_3 + lVar1,0,0);
      }
    }
  }
  else {
    while ((int)param_2 < (int)uVar8) {
      uVar3 = (long)((ulong)param_4 << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(param_3 + 3) << 0x20) >> 0x21) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1422c1c);
        (*pcVar5)();
      }
      uVar4 = (long)((ulong)param_2 << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(param_1 + 3) << 0x20) >> 0x21) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1422c20);
        (*pcVar5)();
      }
      uVar7 = *(uint *)(param_1 + uVar4 * 4 + 7);
      lVar1 = uVar3 * 4 + 7;
      param_2 = param_2 + 2;
      param_4 = param_4 + 2;
      *(uint *)(param_3 + lVar1) = uVar7;
      if (((((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar7 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0
         )) {
        FUN_0133eb00(param_3,param_3 + lVar1,0,0);
      }
    }
  }
  return 0;
}

