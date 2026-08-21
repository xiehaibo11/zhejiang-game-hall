
long aes_v8_set_decrypt_key(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined4 *puVar13;
  long extraout_x12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar10 = aes_v8_set_encrypt_key();
  if (lVar10 == 0) {
    puVar13 = (undefined4 *)(param_3 + -0xf0);
    puVar1 = puVar13 + extraout_x12 * 4;
    uVar2 = *(undefined4 *)(param_3 + -0xec);
    uVar3 = *(undefined4 *)(param_3 + -0xe8);
    uVar4 = *(undefined4 *)(param_3 + -0xe4);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    *puVar1 = *puVar13;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    *puVar13 = uVar5;
    *(undefined4 *)(param_3 + -0xec) = uVar6;
    *(undefined4 *)(param_3 + -0xe8) = uVar7;
    *(undefined4 *)(param_3 + -0xe4) = uVar8;
    pauVar9 = (undefined1 (*) [16])(param_3 + -0xe0);
    pauVar12 = (undefined1 (*) [16])(puVar1 + -4);
    do {
      pauVar11 = pauVar12;
      auVar14 = NEON_aesimc(*pauVar9,*pauVar9);
      auVar15 = NEON_aesimc(*pauVar11,*pauVar11);
      *(int *)*pauVar11 = auVar14._0_4_;
      *(int *)(*pauVar11 + 4) = auVar14._4_4_;
      *(int *)(*pauVar11 + 8) = auVar14._8_4_;
      *(int *)(*pauVar11 + 0xc) = auVar14._12_4_;
      pauVar12 = pauVar11 + -1;
      *(int *)*pauVar9 = auVar15._0_4_;
      *(int *)(*pauVar9 + 4) = auVar15._4_4_;
      *(int *)(*pauVar9 + 8) = auVar15._8_4_;
      *(int *)(*pauVar9 + 0xc) = auVar15._12_4_;
      pauVar9 = pauVar9 + 1;
    } while (pauVar9 < pauVar12);
    auVar14 = NEON_aesimc(*pauVar9,*pauVar9);
    *(int *)*pauVar12 = auVar14._0_4_;
    *(int *)(pauVar11[-1] + 4) = auVar14._4_4_;
    *(int *)(pauVar11[-1] + 8) = auVar14._8_4_;
    *(int *)(pauVar11[-1] + 0xc) = auVar14._12_4_;
    lVar10 = 0;
  }
  return lVar10;
}

