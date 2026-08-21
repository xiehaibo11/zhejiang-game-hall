
void speex_decode(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  uint local_54c;
  short local_548 [4];
  undefined8 auStack_540 [160];
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x58))(param_1,3,&local_54c);
  (**(code **)(*param_1 + 0x48))(param_1,param_2,local_548);
  uVar3 = (ulong)(int)local_54c;
  if (0 < (int)local_54c) {
    if (local_54c < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 & 0xfffffffffffffff8;
      puVar5 = auStack_540;
      puVar6 = (undefined8 *)(param_3 + 0x10);
      uVar7 = uVar4;
      do {
        uVar8 = puVar5[-1];
        uVar10 = *puVar5;
        puVar5 = puVar5 + 2;
        uVar7 = uVar7 - 8;
        auVar9._0_4_ = (int)(short)uVar8;
        auVar9._4_4_ = (int)(short)((ulong)uVar8 >> 0x10);
        auVar9._8_4_ = (int)(short)((ulong)uVar8 >> 0x20);
        auVar9._12_4_ = (int)(short)((ulong)uVar8 >> 0x30);
        auVar11._0_4_ = (int)(short)uVar10;
        auVar11._4_4_ = (int)(short)((ulong)uVar10 >> 0x10);
        auVar11._8_4_ = (int)(short)((ulong)uVar10 >> 0x20);
        auVar11._12_4_ = (int)(short)((ulong)uVar10 >> 0x30);
        auVar9 = NEON_scvtf(auVar9,4);
        auVar11 = NEON_scvtf(auVar11,4);
        puVar6[-1] = auVar9._8_8_;
        puVar6[-2] = auVar9._0_8_;
        puVar6[1] = auVar11._8_8_;
        *puVar6 = auVar11._0_8_;
        puVar6 = puVar6 + 4;
      } while (uVar7 != 0);
      if (uVar4 == uVar3) goto LAB_001319e4;
    }
    do {
      *(float *)(param_3 + uVar4 * 4) = (float)(int)*(short *)((long)auStack_540 + uVar4 * 2 + -8);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)uVar3);
  }
LAB_001319e4:
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

