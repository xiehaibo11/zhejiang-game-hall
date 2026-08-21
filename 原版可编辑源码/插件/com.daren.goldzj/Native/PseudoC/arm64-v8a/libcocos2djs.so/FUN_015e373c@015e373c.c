
void FUN_015e373c(WasmFeatures *param_1,WasmFeatures *param_2,WasmFeatures *param_3,
                 WasmFeatures *param_4,WasmFeatures *param_5,undefined4 *param_6,uint param_7)

{
  WasmFeatures *pWVar1;
  WasmFeatures *pWVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  WasmFeatures *this;
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  WasmFeatures *pWVar9;
  WasmFeatures *pWVar10;
  WasmFeatures WVar11;
  WasmFeatures *pWVar12;
  WasmFeatures *pWVar13;
  ulong uVar14;
  WasmFeatures *pWVar15;
  ulong uVar16;
  byte *pbVar17;
  WasmFeatures *unaff_x19;
  uint uVar18;
  int iVar19;
  long unaff_x23;
  ulong unaff_x24;
  WasmFeatures *unaff_x25;
  WasmFeatures *unaff_x26;
  WasmFeatures *unaff_x27;
  WasmFeatures *pWVar20;
  undefined1 auVar21 [16];
  WasmFeatures *local_118;
  undefined4 local_108 [2];
  undefined8 local_100;
  WasmFeatures *local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  WasmFeatures *local_d8;
  WasmFeatures *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  WasmFeatures *local_b8;
  WasmFeatures *pWStack_b0;
  uint local_a8 [2];
  undefined4 local_a0;
  undefined3 uStack_9c;
  undefined4 local_98;
  undefined3 uStack_94;
  uint local_90;
  byte local_88;
  WasmFeatures aWStack_87 [7];
  WasmFeatures *local_80;
  WasmFeatures *pWStack_78;
  long local_70;
  
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar18 = *(uint *)(param_1 + 0x3c);
  iVar19 = *(int *)(param_1 + 0x44);
  if (iVar19 + uVar18 <= uVar18) {
LAB_015e3a14:
    if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar3 = *(uint *)(param_2 + 0xc0);
  uVar4 = param_7 ^ 1 | (uint)param_6;
  pWVar1 = param_3 + 0x1120;
  pWVar2 = param_3 + 0x10f0;
  pWVar9 = param_4;
  pWVar10 = param_5;
  if ((uVar4 & 1) != 0) goto switchD_015e3970_caseD_15e3800;
  do {
    puVar8 = auVar21._8_8_;
    this = auVar21._0_8_;
    if ((uVar3 >> 4 & 1) != 0) {
switchD_015e3970_caseD_15e3928:
      pWVar12 = *(WasmFeatures **)(param_1 + 0x130);
      if (pWVar12 != (WasmFeatures *)0x0) {
        pWVar15 = *(WasmFeatures **)(param_1 + 0x138);
switchD_015e3970_caseD_15e3934:
        pWVar13 = (WasmFeatures *)(ulong)*(uint *)(param_1 + 0x3c);
switchD_015e3970_caseD_15e3938:
        uVar14 = (ulong)(uVar18 - (int)pWVar13);
        uVar16 = ((long)pWVar15 - (long)pWVar12) * -0x5555555555555555;
        bVar6 = uVar14 <= uVar16;
        bVar7 = uVar16 - uVar14 == 0;
        if (bVar6 && !bVar7) {
          WVar11 = pWVar12[uVar14 * 3];
          pWVar12 = (WasmFeatures *)(ulong)(byte)WVar11;
          pbVar17 = &switchD_015e3970::switchdataD_01a5436c;
          pWVar13 = (WasmFeatures *)0x15e37ec;
          do {
            pWVar15 = (WasmFeatures *)(ulong)(byte)pWVar12[0x1a5436c];
            pWVar13 = pWVar13 + (long)pWVar15 * 4;
switchD_015e3970_switchD:
            pWVar20 = param_5;
            switch(pWVar13) {
            case (WasmFeatures *)0x15e37ec:
              goto switchD_015e3970_caseD_15e37ec;
            case (WasmFeatures *)0x15e3800:
              goto switchD_015e3970_caseD_15e3800;
            case (WasmFeatures *)0x15e3810:
              goto switchD_015e3970_caseD_15e3810;
            case (WasmFeatures *)0x15e381c:
              goto switchD_015e3970_caseD_15e381c;
            case (WasmFeatures *)0x15e385c:
              goto switchD_015e3970_caseD_15e385c;
            case (WasmFeatures *)0x15e386c:
              goto switchD_015e3970_caseD_15e386c;
            case (WasmFeatures *)0x15e3870:
              goto switchD_015e3970_caseD_15e3870;
            case (WasmFeatures *)0x15e3878:
              goto switchD_015e3970_caseD_15e3878;
            case (WasmFeatures *)0x15e3880:
              goto switchD_015e3970_caseD_15e3880;
            case (WasmFeatures *)0x15e388c:
              goto switchD_015e3970_caseD_15e388c;
            case (WasmFeatures *)0x15e3890:
              goto switchD_015e3970_caseD_15e3890;
            case (WasmFeatures *)0x15e38a0:
              goto switchD_015e3970_caseD_15e38a0;
            case (WasmFeatures *)0x15e38a4:
              goto switchD_015e3970_caseD_15e38a4;
            case (WasmFeatures *)0x15e38a8:
              goto switchD_015e3970_caseD_15e38a8;
            case (WasmFeatures *)0x15e38ac:
              goto switchD_015e3970_caseD_15e38ac;
            case (WasmFeatures *)0x15e38cc:
              goto switchD_015e3970_caseD_15e38cc;
            case (WasmFeatures *)0x15e38d4:
              goto switchD_015e3970_caseD_15e38d4;
            case (WasmFeatures *)0x15e38f0:
              goto switchD_015e3970_caseD_15e38f0;
            case (WasmFeatures *)0x15e38f8:
              goto switchD_015e3970_caseD_15e38f8;
            case (WasmFeatures *)0x15e38fc:
              goto switchD_015e3970_caseD_15e38fc;
            case (WasmFeatures *)0x15e3904:
              goto switchD_015e3970_caseD_15e3904;
            case (WasmFeatures *)0x15e3908:
              goto switchD_015e3970_caseD_15e3908;
            case (WasmFeatures *)0x15e3914:
              goto switchD_015e3970_caseD_15e3914;
            case (WasmFeatures *)0x15e391c:
              goto switchD_015e3970_caseD_15e391c;
            case (WasmFeatures *)0x15e3928:
              goto switchD_015e3970_caseD_15e3928;
            case (WasmFeatures *)0x15e3934:
              goto switchD_015e3970_caseD_15e3934;
            case (WasmFeatures *)0x15e3938:
              goto switchD_015e3970_caseD_15e3938;
            case (WasmFeatures *)0x15e3970:
              goto switchD_015e3970_switchD;
            case (WasmFeatures *)0x15e3974:
              goto switchD_015e3970_caseD_15e3974;
            case (WasmFeatures *)0x15e3978:
              goto switchD_015e3970_caseD_15e3978;
            case (WasmFeatures *)0x15e397c:
              goto switchD_015e3970_caseD_15e397c;
            case (WasmFeatures *)0x15e3980:
              goto switchD_015e3970_caseD_15e3980;
            case (WasmFeatures *)0x15e3984:
              goto switchD_015e3970_caseD_15e3984;
            case (WasmFeatures *)0x15e3988:
              goto switchD_015e3970_caseD_15e3988;
            case (WasmFeatures *)0x15e398c:
              goto switchD_015e3970_caseD_15e398c;
            case (WasmFeatures *)0x15e3990:
              goto switchD_015e3970_caseD_15e3990;
            case (WasmFeatures *)0x15e399c:
              goto switchD_015e3970_caseD_15e399c;
            case (WasmFeatures *)0x15e39a0:
              goto switchD_015e3970_caseD_15e39a0;
            case (WasmFeatures *)0x15e39a4:
              goto switchD_015e3970_caseD_15e39a4;
            case (WasmFeatures *)0x15e39a8:
              goto switchD_015e3970_caseD_15e39a8;
            case (WasmFeatures *)0x15e39ac:
              goto switchD_015e3970_caseD_15e39ac;
            case (WasmFeatures *)0x15e39b4:
              goto switchD_015e3970_caseD_15e39b4;
            case (WasmFeatures *)0x15e39b8:
              goto switchD_015e3970_caseD_15e39b8;
            case (WasmFeatures *)0x15e39bc:
              goto switchD_015e3970_caseD_15e39bc;
            case (WasmFeatures *)0x15e39c0:
              goto switchD_015e3970_caseD_15e39c0;
            case (WasmFeatures *)0x15e39c4:
              goto switchD_015e3970_caseD_15e39c4;
            case (WasmFeatures *)0x15e39c8:
              goto switchD_015e3970_caseD_15e39c8;
            case (WasmFeatures *)0x15e39cc:
              goto switchD_015e3970_caseD_15e39cc;
            case (WasmFeatures *)0x15e39d0:
              goto switchD_015e3970_caseD_15e39d0;
            case (WasmFeatures *)0x15e39d4:
              goto switchD_015e3970_caseD_15e39d4;
            }
          } while( true );
        }
      }
    }
switchD_015e3970_caseD_15e37ec:
    iVar19 = iVar19 + -1;
    uVar18 = uVar18 + 1;
    if (iVar19 == 0) goto LAB_015e3a14;
  } while ((uVar4 & 1) == 0);
switchD_015e3970_caseD_15e3800:
  pWVar15 = *(WasmFeatures **)(param_1 + 0x88);
  pbVar17 = (byte *)(long)(int)uVar18;
  pWVar13 = (WasmFeatures *)(ulong)uVar18;
  pWVar12 = param_2;
switchD_015e3970_caseD_15e3810:
  pWVar12 = *(WasmFeatures **)(pWVar12 + 0xe0);
  unaff_x25 = pWVar15 + (long)pWVar13 * 0x20;
  puVar8 = &local_e0;
switchD_015e3970_caseD_15e381c:
  param_3 = (WasmFeatures *)0x0;
  unaff_x23 = *(long *)pWVar12;
  local_118 = *(WasmFeatures **)(pWVar12 + 8);
  local_c8 = *(undefined8 *)(pWVar15 + (long)pbVar17 * 0x20);
  local_c0 = *(undefined4 *)(pWVar15 + (long)pbVar17 * 0x20 + 0x10);
  pWVar13 = (WasmFeatures *)(unaff_x23 + (ulong)*(uint *)(unaff_x25 + 0x10));
  pWVar15 = (WasmFeatures *)
            (unaff_x23 + (ulong)(*(int *)(unaff_x25 + 0x14) + *(uint *)(unaff_x25 + 0x10)));
  local_a0 = 0;
  uStack_9c = 0;
  local_a8[0] = uVar3;
switchD_015e3970_caseD_15e385c:
  local_d0 = (WasmFeatures *)0x0;
  bVar7 = param_1[0x178] == (WasmFeatures)0x0;
  local_b8 = pWVar13;
  pWStack_b0 = pWVar15;
switchD_015e3970_caseD_15e386c:
  pWVar12 = pWVar1;
  pWVar13 = pWVar2;
switchD_015e3970_caseD_15e3870:
  local_d8 = pWVar12;
  if (!bVar7) {
    local_d8 = pWVar13;
  }
  auVar21._8_8_ = puVar8;
  auVar21._0_8_ = local_d8;
  local_e0 = 0;
switchD_015e3970_caseD_15e3878:
  v8::internal::TimedHistogram::Start(auVar21._0_8_,auVar21._8_8_,(Isolate *)param_3);
  this = param_4;
switchD_015e3970_caseD_15e3880:
  auVar21._8_8_ = local_a8;
  auVar21._0_8_ = this;
  pWVar9 = (WasmFeatures *)local_e8;
switchD_015e3970_caseD_15e388c:
  pWVar10 = (WasmFeatures *)&local_c8;
switchD_015e3970_caseD_15e3890:
  local_e8[0] = 0;
  v8::internal::wasm::VerifyWasmCode
            (auVar21._0_8_,auVar21._8_8_,param_1,(WasmModule *)pWVar9,pWVar10,
             (FunctionBody *)param_6);
  pWVar13 = aWStack_87;
switchD_015e3970_caseD_15e38a0:
  this = local_d8;
  param_3 = local_d0;
switchD_015e3970_caseD_15e38a4:
  unaff_x19 = (WasmFeatures *)(ulong)local_90;
switchD_015e3970_caseD_15e38a8:
  unaff_x24 = (ulong)local_88;
switchD_015e3970_caseD_15e38ac:
  unaff_x26 = pWStack_78;
  unaff_x27 = local_80;
  local_a0._0_3_ = (undefined3)*(undefined4 *)pWVar13;
  local_a0._3_1_ = (undefined1)*(undefined4 *)(pWVar13 + 3);
  uStack_9c = (undefined3)((uint)*(undefined4 *)(pWVar13 + 3) >> 8);
  auVar21 = v8::internal::TimedHistogram::Stop
                      ((TimedHistogram *)this,(ElapsedTimer *)&local_e0,(Isolate *)param_3);
  pWVar12 = (WasmFeatures *)(ulong)local_a0;
switchD_015e3970_caseD_15e38cc:
  pWVar13 = (WasmFeatures *)(ulong)CONCAT31(uStack_9c,local_a0._3_1_);
  pWVar15 = (WasmFeatures *)(unaff_x24 >> 1);
switchD_015e3970_caseD_15e38d4:
  if ((unaff_x24 & 1) != 0) {
    pWVar15 = unaff_x27;
  }
  local_98._0_3_ = SUB83(pWVar12,0);
  local_98._3_1_ = SUB81(pWVar13,0);
  uStack_94 = (undefined3)((ulong)pWVar13 >> 8);
  if (pWVar15 != (WasmFeatures *)0x0) {
    local_108[0] = SUB84(unaff_x19,0);
    pWVar12 = (WasmFeatures *)&local_100;
switchD_015e3970_caseD_15e38f0:
    *(long *)pWVar12 = 0;
    *(long *)(pWVar12 + 8) = 0;
    *(long *)(pWVar12 + 0x10) = 0;
switchD_015e3970_caseD_15e38f8:
    if ((unaff_x24 & 1) == 0) {
switchD_015e3970_caseD_15e38fc:
      pWVar12 = (WasmFeatures *)(ulong)CONCAT31(uStack_94,local_98._3_1_);
      pWVar13 = (WasmFeatures *)(ulong)local_98;
switchD_015e3970_caseD_15e3904:
      pWVar15 = (WasmFeatures *)((long)&local_100 + 1);
switchD_015e3970_caseD_15e3908:
      local_100 = (WasmFeatures *)CONCAT71(local_100._1_7_,(char)unaff_x24);
      *(int *)(pWVar15 + 3) = (int)pWVar12;
      unaff_x19 = local_118;
switchD_015e3970_caseD_15e3914:
      *(int *)pWVar15 = (int)pWVar13;
      local_f0 = unaff_x26;
switchD_015e3970_caseD_15e391c:
    }
    else {
switchD_015e3970_caseD_15e3974:
      bVar6 = (WasmFeatures *)0xffffffffffffffef < unaff_x27;
switchD_015e3970_caseD_15e3978:
      if (bVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
switchD_015e3970_caseD_15e397c:
      bVar6 = (WasmFeatures *)0x16 < unaff_x27;
switchD_015e3970_caseD_15e3980:
      if (bVar6) {
switchD_015e3970_caseD_15e399c:
        pWVar12 = unaff_x27 + 0x10;
switchD_015e3970_caseD_15e39a0:
        unaff_x19 = (WasmFeatures *)((ulong)pWVar12 & 0xfffffffffffffff0);
switchD_015e3970_caseD_15e39a4:
        this = unaff_x19;
        unaff_x19 = this;
switchD_015e3970_caseD_15e39a8:
        this = operator_new((ulong)this);
switchD_015e3970_caseD_15e39ac:
        pWVar12 = (WasmFeatures *)((ulong)unaff_x19 | 1);
        unaff_x19 = local_118;
switchD_015e3970_caseD_15e39b4:
        pWVar20 = this;
switchD_015e3970_caseD_15e39b8:
        local_100 = pWVar12;
switchD_015e3970_caseD_15e39bc:
        local_f0 = this;
switchD_015e3970_caseD_15e39c0:
        this = pWVar20;
        pWVar20 = this;
switchD_015e3970_caseD_15e39c4:
        auVar21._8_8_ = unaff_x26;
        auVar21._0_8_ = this;
switchD_015e3970_caseD_15e39c8:
        param_3 = unaff_x27;
        unaff_x27 = param_3;
switchD_015e3970_caseD_15e39cc:
        memcpy(auVar21._0_8_,auVar21._8_8_,(size_t)param_3);
      }
      else {
switchD_015e3970_caseD_15e3984:
        pWVar20 = (WasmFeatures *)((long)&local_100 + 1);
switchD_015e3970_caseD_15e3988:
        unaff_x19 = local_118;
switchD_015e3970_caseD_15e398c:
        WVar11 = SUB41((int)unaff_x27 << 1,0);
switchD_015e3970_caseD_15e3990:
        local_100 = (WasmFeatures *)CONCAT71(local_100._1_7_,WVar11);
        if (unaff_x27 != (WasmFeatures *)0x0) goto switchD_015e3970_caseD_15e39c0;
      }
switchD_015e3970_caseD_15e39d0:
      pWVar20[(long)unaff_x27] = (WasmFeatures)0x0;
switchD_015e3970_caseD_15e39d4:
    }
    param_6 = local_108;
    param_3 = unaff_x19;
    pWVar9 = unaff_x25;
    pWVar10 = param_1;
    auVar21 = FUN_015e18d0(param_5,unaff_x23);
    if (((ulong)local_100 & 1) != 0) {
      operator_delete(local_f0);
      auVar21._8_8_ = extraout_x1;
      auVar21._0_8_ = extraout_x0;
    }
  }
  if ((unaff_x24 & 1) != 0) {
    operator_delete(unaff_x26);
    auVar21._8_8_ = extraout_x1_00;
    auVar21._0_8_ = extraout_x0_00;
  }
  goto switchD_015e3970_caseD_15e37ec;
}

