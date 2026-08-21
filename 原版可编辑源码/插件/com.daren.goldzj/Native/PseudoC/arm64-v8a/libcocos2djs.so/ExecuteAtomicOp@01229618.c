
/* v8::internal::wasm::ThreadImpl::ExecuteAtomicOp(v8::internal::wasm::WasmOpcode,
   v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*) */

undefined4 __thiscall
v8::internal::wasm::ThreadImpl::ExecuteAtomicOp
          (ThreadImpl *this,undefined4 param_2,Decoder *param_3,InterpreterCode *param_4,
          ulong param_5,int *param_6)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  ushort uVar4;
  ulong *puVar5;
  long *plVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 local_560;
  undefined8 local_558;
  ulong *local_550;
  undefined1 local_548;
  uint7 uStack_547;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined1 local_530;
  uint7 uStack_52f;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 uStack_520;
  undefined1 local_518;
  uint7 uStack_517;
  undefined1 uStack_510;
  undefined7 uStack_50f;
  undefined1 uStack_508;
  undefined1 local_500;
  undefined7 uStack_4ff;
  byte bStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined1 local_4e8;
  uint uStack_4e7;
  undefined3 uStack_4e3;
  undefined5 uStack_4e0;
  undefined4 uStack_4db;
  undefined1 local_4d0;
  uint uStack_4cf;
  undefined3 uStack_4cb;
  undefined5 uStack_4c8;
  undefined4 uStack_4c3;
  undefined1 local_4b8;
  uint uStack_4b7;
  undefined3 uStack_4b3;
  undefined5 uStack_4b0;
  undefined4 uStack_4ab;
  undefined1 local_4a0;
  uint7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined1 uStack_490;
  undefined1 local_488;
  uint7 uStack_487;
  undefined1 uStack_480;
  undefined7 uStack_47f;
  undefined1 uStack_478;
  undefined1 local_470;
  uint7 uStack_46f;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined1 uStack_460;
  undefined1 local_458;
  undefined7 uStack_457;
  byte bStack_450;
  undefined7 uStack_44f;
  undefined1 uStack_448;
  undefined1 local_440;
  uint7 uStack_43f;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined1 local_428;
  uint7 uStack_427;
  undefined1 uStack_420;
  undefined7 uStack_41f;
  undefined1 uStack_418;
  undefined1 local_410;
  uint7 uStack_40f;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined1 local_3f8;
  undefined7 uStack_3f7;
  byte bStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined1 local_3e0;
  uint7 uStack_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3d0;
  undefined1 local_3c8;
  uint7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined1 local_3b0;
  uint7 uStack_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined1 local_398;
  undefined7 uStack_397;
  byte bStack_390;
  undefined7 uStack_38f;
  undefined1 uStack_388;
  undefined1 local_380;
  uint7 uStack_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined1 local_368;
  uint7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined1 uStack_358;
  undefined1 local_350;
  uint7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined1 local_338;
  undefined7 uStack_337;
  byte bStack_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined1 local_320;
  uint7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined1 local_308;
  uint7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  undefined1 local_2f0;
  uint7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined1 local_2d8;
  undefined7 uStack_2d7;
  byte bStack_2d0;
  undefined7 uStack_2cf;
  undefined1 uStack_2c8;
  undefined1 local_2c0;
  uint7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined1 local_2a8;
  uint7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined1 local_290;
  uint7 uStack_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined1 local_278;
  undefined7 uStack_277;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined1 local_260;
  uint uStack_25f;
  undefined3 uStack_25b;
  undefined5 uStack_258;
  undefined4 uStack_253;
  undefined1 local_248;
  uint uStack_247;
  undefined3 uStack_243;
  undefined5 uStack_240;
  undefined4 uStack_23b;
  undefined1 local_230;
  uint uStack_22f;
  undefined3 uStack_22b;
  undefined5 uStack_228;
  undefined4 uStack_223;
  undefined1 local_218;
  uint uStack_217;
  undefined3 uStack_213;
  undefined5 uStack_210;
  undefined4 uStack_20b;
  undefined1 local_200;
  uint uStack_1ff;
  undefined3 uStack_1fb;
  undefined5 uStack_1f8;
  undefined4 uStack_1f3;
  undefined1 local_1e8;
  uint uStack_1e7;
  undefined3 uStack_1e3;
  undefined5 uStack_1e0;
  undefined4 uStack_1db;
  undefined1 local_1d0;
  uint uStack_1cf;
  undefined3 uStack_1cb;
  undefined5 uStack_1c8;
  undefined4 uStack_1c3;
  undefined1 local_1b8;
  uint uStack_1b7;
  undefined3 uStack_1b3;
  undefined5 uStack_1b0;
  undefined4 uStack_1ab;
  undefined1 local_1a0;
  uint uStack_19f;
  undefined3 uStack_19b;
  undefined5 uStack_198;
  undefined4 uStack_193;
  undefined1 local_188;
  uint uStack_187;
  undefined3 uStack_183;
  undefined5 uStack_180;
  undefined4 uStack_17b;
  undefined1 local_170;
  uint uStack_16f;
  undefined3 uStack_16b;
  undefined5 uStack_168;
  undefined4 uStack_163;
  undefined1 local_158;
  uint uStack_157;
  undefined3 uStack_153;
  undefined5 uStack_150;
  undefined4 uStack_14b;
  undefined1 local_140;
  uint uStack_13f;
  undefined3 uStack_13b;
  undefined5 uStack_138;
  undefined4 uStack_133;
  undefined1 local_128;
  uint uStack_127;
  undefined3 uStack_123;
  undefined5 uStack_120;
  undefined4 uStack_11b;
  undefined1 local_110;
  uint uStack_10f;
  undefined3 uStack_10b;
  undefined5 uStack_108;
  undefined4 uStack_103;
  undefined1 local_f8;
  uint uStack_f7;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined4 uStack_eb;
  undefined1 local_e0;
  uint uStack_df;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined4 uStack_d3;
  undefined1 local_c8;
  uint uStack_c7;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined4 uStack_bb;
  undefined8 *local_b0;
  ulong uStack_a8;
  undefined1 local_a0;
  undefined8 *local_90;
  ulong uStack_88;
  undefined1 local_80;
  StackValue local_70;
  uint uStack_6f;
  undefined4 uStack_6b;
  undefined4 uStack_67;
  undefined4 uStack_63;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  switch(param_2) {
  case 0xfe03:
    DataMemoryBarrier(2,3);
    *param_6 = *param_6 + 2;
    goto LAB_0122a99c;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xfe10:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)0x0,
                       (uint *)0x0);
    if (bVar7) {
      uStack_6f = (uint)*local_550;
      local_70 = (StackValue)0x1;
      uStack_6b = 0;
      uStack_67 = 0;
      uStack_63 = 0;
      uStack_a8 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_6f,1);
      local_a0 = 0;
      local_b0 = local_90;
LAB_0122ab10:
      uStack_88 = 0;
      local_80 = 0;
      uVar13 = 1;
      StackValue::StackValue
                (&local_70,&local_90,this,
                 (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
      puVar11 = *(undefined8 **)(this + 0x28);
      *(long *)(this + 0x28) = (long)puVar11 + 0x11;
      *(undefined1 *)(puVar11 + 2) = uStack_63._3_1_;
      puVar11[1] = CONCAT35((undefined3)uStack_63,CONCAT41(uStack_67,uStack_6b._3_1_));
      *puVar11 = CONCAT35((undefined3)uStack_6b,CONCAT41(uStack_6f,local_70));
      goto LAB_0122ab5c;
    }
    break;
  case 0xfe11:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ulong *)0x0,
                       (ulong *)0x0);
    if (!bVar7) break;
    uVar8 = *local_550;
    local_70 = (StackValue)0x2;
    uStack_67 = 0;
    uStack_63 = 0;
    uStack_6f = (uint)uVar8;
    uStack_6b = (undefined4)(uVar8 >> 0x20);
    uVar13 = uStack_6b;
    uStack_a8 = uVar8 >> 0x38;
    uStack_6b._0_3_ = (undefined3)(uVar8 >> 0x20);
    local_b0 = (undefined8 *)CONCAT35((undefined3)uStack_6b,CONCAT41(uStack_6f,2));
    local_a0 = 0;
    local_90 = local_b0;
    uStack_88 = uStack_a8;
    uStack_6b = uVar13;
LAB_0122a958:
    local_80 = 0;
    StackValue::StackValue
              (&local_70,&local_90,this,
               (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
    puVar11 = *(undefined8 **)(this + 0x28);
    *(long *)(this + 0x28) = (long)puVar11 + 0x11;
    *(undefined1 *)(puVar11 + 2) = uStack_63._3_1_;
    puVar11[1] = CONCAT35((undefined3)uStack_63,CONCAT41(uStack_67,uStack_6b._3_1_));
    *puVar11 = CONCAT35((undefined3)uStack_6b,CONCAT41(uStack_6f,local_70));
    goto LAB_0122a99c;
  case 0xfe12:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)0x0,
                       (uchar *)0x0);
    if (bVar7) {
      uStack_6f = (uint)(byte)*local_550;
LAB_01229b04:
      uStack_63 = 0;
      uStack_67 = 0;
      uStack_6b = 0;
      local_70 = (StackValue)0x1;
      uStack_a8 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_6f,1);
      local_a0 = 0;
      local_b0 = local_90;
      goto LAB_0122ab10;
    }
    break;
  case 0xfe13:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)0x0,
                       (ushort *)0x0);
    if (bVar7) {
      uStack_6f = (uint)(ushort)*local_550;
      goto LAB_01229b04;
    }
    break;
  case 0xfe14:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)0x0,
                       (uchar *)0x0);
    if (bVar7) {
      uStack_6f = (uint)(byte)*local_550;
LAB_01229bc8:
      uStack_63 = 0;
      uStack_67 = 0;
      local_70 = (StackValue)0x2;
      uStack_a8 = 0;
      local_b0 = (undefined8 *)(ulong)CONCAT41(uStack_6f,2);
      local_a0 = 0;
      local_90 = local_b0;
      uStack_88 = uStack_a8;
      uStack_6b = 0;
      goto LAB_0122a958;
    }
    break;
  case 0xfe15:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)0x0,
                       (ushort *)0x0);
    if (bVar7) {
      uStack_6f = (uint)(ushort)*local_550;
      goto LAB_01229bc8;
    }
    break;
  case 0xfe16:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)0x0,
                       (uint *)0x0);
    if (bVar7) {
      uStack_6f = (uint)*local_550;
      goto LAB_01229bc8;
    }
    break;
  case 0xfe17:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_70,param_5,param_6,(uint *)&local_90,
                       (uint *)0x0);
    if (!bVar7) break;
LAB_0122a1e0:
    *(undefined4 *)CONCAT35((undefined3)uStack_6b,CONCAT41(uStack_6f,local_70)) = local_90._0_4_;
    goto LAB_0122a99c;
  case 0xfe18:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_90,param_5,param_6,(ulong *)&local_70,
                       (ulong *)0x0);
    if (!bVar7) break;
    *local_90 = CONCAT35((undefined3)uStack_6b,CONCAT41(uStack_6f,local_70));
    goto LAB_0122a99c;
  case 0xfe19:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_70,param_5,param_6,(uchar *)&local_90,
                       (uchar *)0x0);
    if (!bVar7) break;
LAB_0122a1b0:
    *(uint *)CONCAT35((undefined3)uStack_6b,CONCAT41(uStack_6f,local_70)) = (uint)(byte)local_90;
    goto LAB_0122a99c;
  case 0xfe1a:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_70,param_5,param_6,(ushort *)&local_90,
                       (ushort *)0x0);
    if (!bVar7) break;
LAB_0122a180:
    *(uint *)CONCAT35((undefined3)uStack_6b,CONCAT41(uStack_6f,local_70)) = (uint)(ushort)local_90;
LAB_0122a99c:
    uVar13 = 1;
    goto LAB_0122ab5c;
  case 0xfe1b:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_70,param_5,param_6,(uchar *)&local_90,
                       (uchar *)0x0);
    if (bVar7) goto LAB_0122a1b0;
    break;
  case 0xfe1c:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_70,param_5,param_6,(ushort *)&local_90,
                       (ushort *)0x0);
    if (bVar7) goto LAB_0122a180;
    break;
  case 0xfe1d:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_70,param_5,param_6,(uint *)&local_90,
                       (uint *)0x0);
    if (bVar7) goto LAB_0122a1e0;
    break;
  case 0xfe1e:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uStack_c7 = (uint)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               uStack_c7 + CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_c8 = 1;
      uStack_bb = 0;
      uStack_c3 = 0;
      uStack_c0 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_c7,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe1f:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,&local_558,param_5,param_6,(ulong *)&local_550,
                       (ulong *)0x0);
    if (bVar7) {
      plVar6 = (long *)CONCAT44(local_558._4_4_,
                                CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558)))
      ;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar7) {
          *plVar6 = lVar9 + (long)local_550;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_278 = 2;
      uStack_26f = 0;
      uStack_268 = 0;
      uStack_277 = (undefined7)lVar9;
      bStack_270 = (byte)((ulong)lVar9 >> 0x38);
      uStack_88 = (ulong)bStack_270;
      local_90 = (undefined8 *)CONCAT71(uStack_277,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe20:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        bVar1 = (byte)*local_550;
        uStack_df = (uint)bVar1;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = bVar1 + (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_e0 = 1;
      uStack_d3 = 0;
      uStack_db = 0;
      uStack_d8 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT11(bVar1,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe21:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar4 = (ushort)*local_550;
        uStack_f7 = (uint)uVar4;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = uVar4 + CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_f8 = 1;
      uStack_eb = 0;
      uStack_f3 = 0;
      uStack_f0 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT21(uVar4,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe22:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = (byte)uVar8 + (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_290 = 2;
      uStack_287 = 0;
      uStack_280 = 0;
      uStack_28f = (uint7)(byte)uVar8;
      uStack_288 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_28f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe23:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = (ushort)uVar8 + CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_2a8 = 2;
      uStack_29f = 0;
      uStack_298 = 0;
      uStack_2a7 = (uint7)(ushort)uVar8;
      uStack_2a0 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_2a7,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe24:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               (uint)uVar8 + CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_2c0 = 2;
      uStack_2b7 = 0;
      uStack_2b0 = 0;
      uStack_2bf = (uint7)(uint)uVar8;
      uStack_2b8 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_2bf,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe25:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uStack_10f = (uint)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               uStack_10f - CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_110 = 1;
      uStack_103 = 0;
      uStack_10b = 0;
      uStack_108 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_10f,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe26:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,&local_558,param_5,param_6,(ulong *)&local_550,
                       (ulong *)0x0);
    if (bVar7) {
      plVar6 = (long *)CONCAT44(local_558._4_4_,
                                CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558)))
      ;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar7) {
          *plVar6 = lVar9 - (long)local_550;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_2d8 = 2;
      uStack_2cf = 0;
      uStack_2c8 = 0;
      uStack_2d7 = (undefined7)lVar9;
      bStack_2d0 = (byte)((ulong)lVar9 >> 0x38);
      uStack_88 = (ulong)bStack_2d0;
      local_90 = (undefined8 *)CONCAT71(uStack_2d7,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe27:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        bVar1 = (byte)*local_550;
        uStack_127 = (uint)bVar1;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = bVar1 - (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_128 = 1;
      uStack_11b = 0;
      uStack_123 = 0;
      uStack_120 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT11(bVar1,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe28:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar4 = (ushort)*local_550;
        uStack_13f = (uint)uVar4;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = uVar4 - CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_140 = 1;
      uStack_133 = 0;
      uStack_13b = 0;
      uStack_138 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT21(uVar4,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe29:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = (byte)uVar8 - (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_2f0 = 2;
      uStack_2e7 = 0;
      uStack_2e0 = 0;
      uStack_2ef = (uint7)(byte)uVar8;
      uStack_2e8 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_2ef,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe2a:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = (ushort)uVar8 - CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_308 = 2;
      uStack_2ff = 0;
      uStack_2f8 = 0;
      uStack_307 = (uint7)(ushort)uVar8;
      uStack_300 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_307,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe2b:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               (uint)uVar8 - CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_320 = 2;
      uStack_317 = 0;
      uStack_310 = 0;
      uStack_31f = (uint7)(uint)uVar8;
      uStack_318 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_31f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe2c:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uStack_157 = (uint)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               uStack_157 & CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_158 = 1;
      uStack_14b = 0;
      uStack_153 = 0;
      uStack_150 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_157,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe2d:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,&local_558,param_5,param_6,(ulong *)&local_550,
                       (ulong *)0x0);
    if (bVar7) {
      puVar5 = (ulong *)CONCAT44(local_558._4_4_,
                                 CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558))
                                );
      do {
        uVar8 = *puVar5;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar7) {
          *puVar5 = uVar8 & (ulong)local_550;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_338 = 2;
      uStack_32f = 0;
      uStack_328 = 0;
      uStack_337 = (undefined7)uVar8;
      bStack_330 = (byte)(uVar8 >> 0x38);
      uStack_88 = (ulong)bStack_330;
      local_90 = (undefined8 *)CONCAT71(uStack_337,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe2e:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        bVar1 = (byte)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = bVar1 & (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_170 = 1;
      uStack_163 = 0;
      uStack_16b = 0;
      uStack_168 = 0;
      uStack_16f = (uint)bVar1;
      local_90 = (undefined8 *)(ulong)CONCAT11(bVar1,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe2f:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar4 = (ushort)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = uVar4 & CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_188 = 1;
      uStack_17b = 0;
      uStack_183 = 0;
      uStack_180 = 0;
      uStack_187 = (uint)uVar4;
      local_90 = (undefined8 *)(ulong)CONCAT21(uVar4,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe30:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = (byte)uVar8 & (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_350 = 2;
      uStack_347 = 0;
      uStack_340 = 0;
      uStack_34f = (uint7)(byte)uVar8;
      uStack_348 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_34f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe31:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = (ushort)uVar8 & CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_368 = 2;
      uStack_35f = 0;
      uStack_358 = 0;
      uStack_367 = (uint7)(ushort)uVar8;
      uStack_360 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_367,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe32:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               (uint)uVar8 & CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_380 = 2;
      uStack_377 = 0;
      uStack_370 = 0;
      uStack_37f = (uint7)(uint)uVar8;
      uStack_378 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_37f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe33:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uStack_19f = (uint)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               uStack_19f | CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_1a0 = 1;
      uStack_193 = 0;
      uStack_19b = 0;
      uStack_198 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_19f,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe34:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,&local_558,param_5,param_6,(ulong *)&local_550,
                       (ulong *)0x0);
    if (bVar7) {
      puVar5 = (ulong *)CONCAT44(local_558._4_4_,
                                 CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558))
                                );
      do {
        uVar8 = *puVar5;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar7) {
          *puVar5 = uVar8 | (ulong)local_550;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_398 = 2;
      uStack_38f = 0;
      uStack_388 = 0;
      uStack_397 = (undefined7)uVar8;
      bStack_390 = (byte)(uVar8 >> 0x38);
      uStack_88 = (ulong)bStack_390;
      local_90 = (undefined8 *)CONCAT71(uStack_397,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe35:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        bVar1 = (byte)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = bVar1 | (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_1b8 = 1;
      uStack_1ab = 0;
      uStack_1b3 = 0;
      uStack_1b0 = 0;
      uStack_1b7 = (uint)bVar1;
      local_90 = (undefined8 *)(ulong)CONCAT11(bVar1,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe36:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar4 = (ushort)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = uVar4 | CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_1d0 = 1;
      uStack_1c3 = 0;
      uStack_1cb = 0;
      uStack_1c8 = 0;
      uStack_1cf = (uint)uVar4;
      local_90 = (undefined8 *)(ulong)CONCAT21(uVar4,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe37:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = (byte)uVar8 | (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_3b0 = 2;
      uStack_3a7 = 0;
      uStack_3a0 = 0;
      uStack_3af = (uint7)(byte)uVar8;
      uStack_3a8 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_3af,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe38:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = (ushort)uVar8 | CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_3c8 = 2;
      uStack_3bf = 0;
      uStack_3b8 = 0;
      uStack_3c7 = (uint7)(ushort)uVar8;
      uStack_3c0 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_3c7,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe39:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               (uint)uVar8 | CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_3e0 = 2;
      uStack_3d7 = 0;
      uStack_3d0 = 0;
      uStack_3df = (uint7)(uint)uVar8;
      uStack_3d8 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_3df,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe3a:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uStack_1e7 = (uint)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               uStack_1e7 ^ CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_1e8 = 1;
      uStack_1db = 0;
      uStack_1e3 = 0;
      uStack_1e0 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_1e7,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe3b:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,&local_558,param_5,param_6,(ulong *)&local_550,
                       (ulong *)0x0);
    if (bVar7) {
      puVar5 = (ulong *)CONCAT44(local_558._4_4_,
                                 CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558))
                                );
      do {
        uVar8 = *puVar5;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar7) {
          *puVar5 = uVar8 ^ (ulong)local_550;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_3f8 = 2;
      uStack_3ef = 0;
      uStack_3e8 = 0;
      uStack_3f7 = (undefined7)uVar8;
      bStack_3f0 = (byte)(uVar8 >> 0x38);
      uStack_88 = (ulong)bStack_3f0;
      local_90 = (undefined8 *)CONCAT71(uStack_3f7,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe3c:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        bVar1 = (byte)*local_550;
        uStack_1ff = (uint)bVar1;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = bVar1 ^ (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_200 = 1;
      uStack_1f3 = 0;
      uStack_1fb = 0;
      uStack_1f8 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT11(bVar1,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe3d:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar4 = (ushort)*local_550;
        uStack_217 = (uint)uVar4;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = uVar4 ^ CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_218 = 1;
      uStack_20b = 0;
      uStack_213 = 0;
      uStack_210 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT21(uVar4,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe3e:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = (byte)uVar8 ^ (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_410 = 2;
      uStack_407 = 0;
      uStack_400 = 0;
      uStack_40f = (uint7)(byte)uVar8;
      uStack_408 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_40f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe3f:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = (ushort)uVar8 ^ CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_428 = 2;
      uStack_41f = 0;
      uStack_418 = 0;
      uStack_427 = (uint7)(ushort)uVar8;
      uStack_420 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_427,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe40:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 =
               (uint)uVar8 ^ CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_440 = 2;
      uStack_437 = 0;
      uStack_430 = 0;
      uStack_43f = (uint7)(uint)uVar8;
      uStack_438 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_43f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe41:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uStack_22f = (uint)*local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 = CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_230 = 1;
      uStack_223 = 0;
      uStack_22b = 0;
      uStack_228 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_22f,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe42:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,&local_558,param_5,param_6,(ulong *)&local_550,
                       (ulong *)0x0);
    if (bVar7) {
      puVar11 = (undefined8 *)
                CONCAT44(local_558._4_4_,
                         CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558)));
      do {
        uVar10 = *puVar11;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar7) {
          *puVar11 = local_550;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_458 = 2;
      uStack_44f = 0;
      uStack_448 = 0;
      uStack_457 = (undefined7)uVar10;
      bStack_450 = (byte)((ulong)uVar10 >> 0x38);
      uStack_88 = (ulong)bStack_450;
      local_90 = (undefined8 *)CONCAT71(uStack_457,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe43:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_248 = 1;
      uStack_23b = 0;
      uStack_243 = 0;
      uStack_240 = 0;
      uStack_247 = (uint)(byte)uVar8;
      local_90 = (undefined8 *)(ulong)CONCAT11((byte)uVar8,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe44:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_260 = 1;
      uStack_253 = 0;
      uStack_25b = 0;
      uStack_258 = 0;
      uStack_25f = (uint)(ushort)uVar8;
      local_90 = (undefined8 *)(ulong)CONCAT21((ushort)uVar8,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe45:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(byte *)local_550 = (byte)local_558;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_470 = 2;
      uStack_467 = 0;
      uStack_460 = 0;
      uStack_46f = (uint7)(byte)uVar8;
      uStack_468 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_46f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe46:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = CONCAT11(local_558._1_1_,(byte)local_558);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_488 = 2;
      uStack_47f = 0;
      uStack_478 = 0;
      uStack_487 = (uint7)(ushort)uVar8;
      uStack_480 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_487,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe47:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)0x0);
    if (bVar7) {
      do {
        uVar8 = *local_550;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 = CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_4a0 = 2;
      uStack_497 = 0;
      uStack_490 = 0;
      uStack_49f = (uint7)(uint)uVar8;
      uStack_498 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_49f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe48:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)&local_560);
    if (bVar7) {
      do {
        uStack_4b7 = (uint)*local_550;
        if (uStack_4b7 != CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558))) {
          ClearExclusiveLocal();
          local_558._0_1_ = (byte)uStack_4b7;
          local_558._1_1_ = (undefined1)(uStack_4b7 >> 8);
          local_558._2_2_ = (undefined2)(uStack_4b7 >> 0x10);
          goto LAB_0122aacc;
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 = CONCAT22(local_560._2_2_,CONCAT11(local_560._1_1_,(uchar)local_560));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uStack_4b7 = CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
LAB_0122aacc:
      local_4b8 = 1;
      uStack_4ab = 0;
      uStack_4b3 = 0;
      uStack_4b0 = 0;
      local_90 = (undefined8 *)(ulong)CONCAT41(uStack_4b7,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe49:
    bVar7 = ExtractAtomicOpParams<unsigned_long,unsigned_long>
                      (this,param_3,param_4,&local_560,param_5,param_6,(ulong *)&local_550,
                       &local_558);
    if (bVar7) {
      puVar11 = (undefined8 *)
                CONCAT44(local_560._4_4_,
                         CONCAT22(local_560._2_2_,CONCAT11(local_560._1_1_,(uchar)local_560)));
      do {
        if ((ulong *)*puVar11 != local_550) {
          ClearExclusiveLocal();
          local_550 = (ulong *)*puVar11;
          break;
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar7) {
          *puVar11 = CONCAT44(local_558._4_4_,
                              CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558)));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uStack_4f7 = 0;
      uStack_4f0 = 0;
      uStack_4ff = SUB87(local_550,0);
      bStack_4f8 = (byte)((ulong)local_550 >> 0x38);
      local_500 = 2;
      uStack_88 = (ulong)bStack_4f8;
      local_90 = (undefined8 *)CONCAT71(uStack_4ff,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe4a:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)&local_560);
    if (bVar7) {
      do {
        if ((byte)*local_550 != (byte)local_558) {
          ClearExclusiveLocal();
          local_558._0_1_ = (byte)*local_550;
          break;
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uchar *)local_550 = (uchar)local_560;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_4d0 = 1;
      uStack_4c3 = 0;
      uStack_4cb = 0;
      uStack_4c8 = 0;
      uStack_4cf = (uint)(byte)local_558;
      local_90 = (undefined8 *)(ulong)CONCAT11((byte)local_558,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe4b:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_int>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)&local_560);
    if (bVar7) {
      do {
        uVar4 = (ushort)*local_550;
        if (uVar4 != CONCAT11(local_558._1_1_,(byte)local_558)) {
          ClearExclusiveLocal();
          local_558._0_1_ = (byte)uVar4;
          local_558._1_1_ = (undefined1)(uVar4 >> 8);
          goto LAB_0122aa2c;
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = CONCAT11(local_560._1_1_,(uchar)local_560);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar4 = CONCAT11(local_558._1_1_,(byte)local_558);
LAB_0122aa2c:
      uStack_4e3 = 0;
      uStack_4e0 = 0;
      local_4e8 = 1;
      uStack_4db = 0;
      uStack_4e7 = (uint)uVar4;
      local_90 = (undefined8 *)(ulong)CONCAT21(uVar4,1);
      goto LAB_0122ab10;
    }
    break;
  case 0xfe4c:
    bVar7 = ExtractAtomicOpParams<unsigned_char,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uchar *)&local_558,
                       (uchar *)&local_560);
    if (bVar7) {
      do {
        if ((byte)*local_550 != (byte)local_558) {
          ClearExclusiveLocal();
          local_558._0_1_ = (byte)*local_550;
          break;
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uchar *)local_550 = (uchar)local_560;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uStack_50f = 0;
      uStack_508 = 0;
      uStack_517 = (uint7)(byte)local_558;
      uStack_510 = 0;
      local_518 = 2;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_517,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe4d:
    bVar7 = ExtractAtomicOpParams<unsigned_short,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(ushort *)&local_558
                       ,(ushort *)&local_560);
    if (bVar7) {
      do {
        uVar4 = (ushort)*local_550;
        if (uVar4 != CONCAT11(local_558._1_1_,(byte)local_558)) {
          ClearExclusiveLocal();
          local_558._0_1_ = (byte)uVar4;
          local_558._1_1_ = (undefined1)(uVar4 >> 8);
          goto LAB_0122aaa0;
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(ushort *)local_550 = CONCAT11(local_560._1_1_,(uchar)local_560);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar4 = CONCAT11(local_558._1_1_,(byte)local_558);
LAB_0122aaa0:
      uStack_527 = 0;
      uStack_520 = 0;
      uStack_52f = (uint7)uVar4;
      uStack_528 = 0;
      local_530 = 2;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_52f,2);
      goto LAB_0122a958;
    }
    break;
  case 0xfe4e:
    bVar7 = ExtractAtomicOpParams<unsigned_int,unsigned_long>
                      (this,param_3,param_4,(ulong *)&local_550,param_5,param_6,(uint *)&local_558,
                       (uint *)&local_560);
    if (bVar7) {
      do {
        uVar12 = (uint)*local_550;
        if (uVar12 != CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558))) {
          ClearExclusiveLocal();
          local_558._0_1_ = (byte)uVar12;
          local_558._1_1_ = (undefined1)(uVar12 >> 8);
          local_558._2_2_ = (undefined2)(uVar12 >> 0x10);
          goto LAB_0122aa54;
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_550,0x10);
        if (bVar7) {
          *(uint *)local_550 = CONCAT22(local_560._2_2_,CONCAT11(local_560._1_1_,(uchar)local_560));
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar12 = CONCAT22(local_558._2_2_,CONCAT11(local_558._1_1_,(byte)local_558));
LAB_0122aa54:
      uStack_53f = 0;
      uStack_538 = 0;
      local_548 = 2;
      uStack_547 = (uint7)uVar12;
      uStack_540 = 0;
      uStack_88 = 0;
      local_90 = (undefined8 *)CONCAT71(uStack_547,2);
      goto LAB_0122a958;
    }
  }
  uVar13 = 0;
LAB_0122ab5c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

