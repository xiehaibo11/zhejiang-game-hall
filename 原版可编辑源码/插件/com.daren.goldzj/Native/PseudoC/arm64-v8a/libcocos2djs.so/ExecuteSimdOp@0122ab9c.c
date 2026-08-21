
/* v8::internal::wasm::ThreadImpl::ExecuteSimdOp(v8::internal::wasm::WasmOpcode,
   v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*) */

bool __thiscall
v8::internal::wasm::ThreadImpl::ExecuteSimdOp
          (ThreadImpl *this,undefined4 param_2,undefined8 param_3,long param_4,long param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  undefined2 uVar10;
  long lVar11;
  undefined6 uVar12;
  ushort uVar13;
  double dVar14;
  double dVar15;
  ushort uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined7 uVar26;
  uint3 uVar27;
  undefined5 uVar28;
  uint7 uVar29;
  uint6 uVar30;
  uint3 uVar31;
  undefined6 uVar32;
  undefined5 uVar33;
  unkbyte9 Var34;
  float fVar35;
  undefined6 uVar36;
  undefined8 uVar37;
  undefined7 uVar38;
  double dVar39;
  long lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  int iVar44;
  float fVar45;
  undefined6 uVar46;
  undefined8 uVar47;
  ushort uVar48;
  double dVar49;
  long lVar50;
  int iVar51;
  uint uVar52;
  bool bVar53;
  uint uVar54;
  uint uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  int iVar58;
  int iVar59;
  ulong uVar60;
  long lVar61;
  double *pdVar62;
  int iVar63;
  byte *pbVar64;
  long lVar65;
  undefined1 *puVar66;
  int iVar67;
  long lVar68;
  int iVar69;
  byte *pbVar70;
  long lVar71;
  long lVar72;
  float fVar73;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined4 uVar74;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar75;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar76;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined4 uVar104;
  float fVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined4 uVar111;
  float fVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined4 uVar117;
  float fVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  undefined7 uStack_121f;
  byte bStack_1218;
  undefined7 uStack_1207;
  byte bStack_1200;
  undefined7 uStack_11ef;
  byte bStack_11e8;
  undefined7 uStack_11d7;
  byte bStack_11d0;
  undefined7 uStack_1117;
  byte bStack_1110;
  undefined7 uStack_10ff;
  byte bStack_10f8;
  undefined7 uStack_10e7;
  byte bStack_10e0;
  undefined7 uStack_10cf;
  byte bStack_10c8;
  undefined7 uStack_1087;
  byte bStack_1080;
  undefined7 uStack_106f;
  byte bStack_1068;
  undefined7 uStack_f67;
  byte bStack_f60;
  undefined7 uStack_f4f;
  byte bStack_f48;
  undefined7 uStack_f37;
  byte bStack_f30;
  undefined7 uStack_f1f;
  byte bStack_f18;
  undefined7 uStack_e2f;
  byte bStack_e28;
  undefined7 uStack_e17;
  byte bStack_e10;
  undefined7 uStack_dff;
  byte bStack_df8;
  undefined7 uStack_de7;
  undefined1 uStack_de0;
  undefined7 uStack_dcf;
  undefined1 uStack_dc8;
  undefined7 uStack_db7;
  undefined1 uStack_db0;
  undefined7 uStack_d9f;
  undefined1 uStack_d98;
  undefined7 uStack_d6f;
  undefined1 uStack_d68;
  undefined7 uStack_c67;
  undefined1 uStack_c60;
  undefined7 uStack_c4f;
  undefined1 uStack_c48;
  undefined7 uStack_c37;
  undefined1 uStack_c30;
  undefined7 uStack_c1f;
  undefined1 uStack_c18;
  undefined7 uStack_c07;
  undefined1 uStack_c00;
  undefined7 uStack_bef;
  undefined1 uStack_be8;
  undefined7 uStack_bd7;
  undefined1 uStack_bd0;
  undefined7 uStack_bbf;
  undefined1 uStack_bb8;
  undefined7 uStack_ba7;
  undefined1 uStack_ba0;
  undefined7 uStack_b8f;
  undefined1 uStack_b88;
  undefined7 uStack_b77;
  byte bStack_b70;
  undefined7 uStack_b5f;
  byte bStack_b58;
  undefined7 uStack_b47;
  byte bStack_b40;
  undefined7 uStack_b2f;
  byte bStack_b28;
  undefined7 uStack_b17;
  byte bStack_b10;
  undefined7 uStack_aff;
  byte bStack_af8;
  undefined7 uStack_ae7;
  undefined1 uStack_ae0;
  undefined7 uStack_acf;
  undefined1 uStack_ac8;
  undefined7 uStack_ab7;
  undefined1 uStack_ab0;
  undefined7 uStack_a9f;
  undefined1 uStack_a98;
  undefined7 uStack_a87;
  undefined1 uStack_a80;
  undefined7 uStack_a6f;
  undefined1 uStack_a68;
  undefined7 uStack_a57;
  undefined1 uStack_a50;
  undefined7 uStack_a3f;
  undefined1 uStack_a38;
  undefined7 uStack_a27;
  undefined1 uStack_a20;
  undefined7 uStack_a0f;
  undefined1 uStack_a08;
  undefined7 uStack_9f7;
  undefined1 uStack_9f0;
  undefined7 uStack_9df;
  undefined1 uStack_9d8;
  undefined7 uStack_9c7;
  undefined1 uStack_9c0;
  undefined7 uStack_9af;
  undefined1 uStack_9a8;
  undefined7 uStack_997;
  byte bStack_990;
  undefined7 uStack_97f;
  byte bStack_978;
  undefined7 uStack_967;
  byte bStack_960;
  undefined7 uStack_94f;
  byte bStack_948;
  undefined7 uStack_937;
  byte bStack_930;
  undefined7 uStack_91f;
  byte bStack_918;
  undefined7 uStack_907;
  byte bStack_900;
  undefined7 uStack_8ef;
  byte bStack_8e8;
  undefined7 uStack_8d7;
  undefined1 uStack_8d0;
  undefined7 uStack_8bf;
  undefined1 uStack_8b8;
  undefined7 uStack_8a7;
  undefined1 uStack_8a0;
  undefined7 uStack_88f;
  undefined1 uStack_888;
  undefined7 uStack_817;
  byte bStack_810;
  undefined7 uStack_7ff;
  byte bStack_7f8;
  undefined7 uStack_7e7;
  byte bStack_7e0;
  undefined1 uStack_7d8;
  double dStack_7d7;
  undefined7 uStack_7cf;
  byte bStack_7c8;
  undefined1 uStack_7c0;
  double dStack_7bf;
  undefined7 uStack_7b7;
  undefined1 uStack_7b0;
  undefined1 uStack_7a8;
  double dStack_7a7;
  undefined7 uStack_79f;
  byte bStack_798;
  undefined1 uStack_790;
  double dStack_78f;
  undefined7 uStack_787;
  byte bStack_780;
  undefined1 uStack_778;
  double dStack_777;
  undefined7 uStack_76f;
  byte bStack_768;
  undefined1 uStack_760;
  double dStack_75f;
  undefined7 uStack_757;
  byte bStack_750;
  byte abStack_748 [25];
  double dStack_72f;
  undefined7 uStack_727;
  byte bStack_720;
  undefined1 uStack_718;
  double dStack_717;
  undefined7 uStack_70f;
  byte bStack_708;
  undefined1 uStack_700;
  double dStack_6ff;
  undefined7 uStack_6f7;
  byte bStack_6f0;
  undefined1 uStack_6e8;
  undefined1 uStack_6d0;
  undefined1 uStack_6b8;
  undefined1 uStack_6a0;
  undefined1 uStack_688;
  double dStack_687;
  undefined7 uStack_67f;
  byte bStack_678;
  undefined1 uStack_670;
  double dStack_66f;
  undefined7 uStack_667;
  byte bStack_660;
  undefined1 uStack_658;
  double dStack_657;
  undefined7 uStack_64f;
  byte bStack_648;
  byte abStack_640 [16];
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 uStack_618;
  double dStack_617;
  undefined7 uStack_60f;
  undefined1 uStack_608;
  undefined1 uStack_600;
  double dStack_5ff;
  undefined7 uStack_5f7;
  byte bStack_5f0;
  undefined1 uStack_5e8;
  double dStack_5e7;
  undefined7 uStack_5df;
  undefined1 uStack_5d8;
  undefined1 uStack_5d0;
  double dStack_5cf;
  undefined7 uStack_5c7;
  byte bStack_5c0;
  undefined1 uStack_5b8;
  double dStack_5b7;
  undefined7 uStack_5af;
  undefined1 uStack_5a8;
  undefined1 uStack_5a0;
  double dStack_59f;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined1 uStack_588;
  double dStack_587;
  undefined7 uStack_57f;
  undefined1 uStack_578;
  undefined1 uStack_570;
  double dStack_56f;
  undefined7 uStack_567;
  undefined1 uStack_560;
  undefined1 uStack_558;
  double dStack_557;
  undefined7 uStack_54f;
  byte abStack_548 [9];
  double dStack_53f;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined1 uStack_528;
  double dStack_527;
  undefined7 uStack_51f;
  undefined1 uStack_518;
  undefined1 uStack_510;
  double dStack_50f;
  undefined7 uStack_507;
  undefined1 uStack_500;
  undefined1 uStack_4f8;
  double dStack_4f7;
  undefined7 uStack_4ef;
  undefined1 uStack_4e8;
  undefined1 uStack_4e0;
  double dStack_4df;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined1 auStack_4c8 [9];
  undefined7 uStack_4bf;
  byte bStack_4b8;
  undefined1 uStack_4b0;
  undefined7 uStack_4a7;
  byte bStack_4a0;
  undefined1 uStack_498;
  undefined7 uStack_48f;
  byte bStack_488;
  undefined1 uStack_480;
  undefined7 uStack_477;
  byte bStack_470;
  undefined1 uStack_468;
  double dStack_467;
  undefined7 uStack_45f;
  byte bStack_458;
  undefined1 uStack_450;
  double dStack_44f;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 uStack_408;
  undefined7 uStack_3ff;
  undefined1 uStack_3f8;
  undefined1 uStack_3f0;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined1 uStack_3d8;
  undefined7 uStack_3cf;
  undefined1 uStack_3c8;
  undefined1 uStack_3c0;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined1 uStack_3a8;
  double dStack_3a7;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined1 uStack_390;
  double dStack_38f;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined1 uStack_378;
  double dStack_377;
  undefined7 uStack_36f;
  byte bStack_368;
  undefined1 uStack_360;
  undefined7 uStack_357;
  byte bStack_350;
  undefined1 uStack_348;
  undefined7 uStack_33f;
  byte bStack_338;
  undefined1 uStack_330;
  double dStack_32f;
  undefined7 uStack_327;
  byte bStack_320;
  undefined1 uStack_318;
  double dStack_317;
  undefined7 uStack_30f;
  byte bStack_308;
  undefined1 uStack_300;
  double dStack_2ff;
  undefined7 uStack_2f7;
  byte bStack_2f0;
  undefined1 uStack_2e8;
  double dStack_2e7;
  undefined7 uStack_2df;
  byte bStack_2d8;
  undefined1 uStack_2d0;
  undefined7 uStack_2c7;
  byte bStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2af;
  byte bStack_2a8;
  undefined1 uStack_2a0;
  double dStack_29f;
  undefined7 uStack_297;
  byte bStack_290;
  undefined1 uStack_288;
  double dStack_287;
  undefined7 uStack_27f;
  byte bStack_278;
  undefined1 uStack_270;
  double dStack_26f;
  undefined7 uStack_267;
  byte bStack_260;
  undefined1 uStack_258;
  undefined1 auStack_257 [8];
  undefined7 uStack_24f;
  byte bStack_248;
  undefined4 uStack_240;
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  undefined2 uStack_238;
  undefined2 uStack_236;
  undefined2 uStack_234;
  undefined2 uStack_232;
  byte bStack_230;
  undefined1 uStack_220;
  int iStack_21f;
  undefined8 uStack_21b;
  undefined4 uStack_213;
  undefined1 uStack_208;
  int iStack_207;
  undefined8 uStack_203;
  undefined4 uStack_1fb;
  undefined1 uStack_1f0;
  int iStack_1ef;
  undefined8 uStack_1eb;
  undefined4 uStack_1e3;
  undefined1 uStack_1d8;
  int iStack_1d7;
  undefined8 uStack_1d3;
  undefined4 uStack_1cb;
  undefined1 uStack_1c0;
  float fStack_1bf;
  undefined8 uStack_1bb;
  undefined4 uStack_1b3;
  undefined1 uStack_1a8;
  undefined8 uStack_1a7;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined1 uStack_190;
  float fStack_18f;
  undefined8 uStack_18b;
  undefined4 uStack_183;
  undefined1 uStack_178;
  undefined8 uStack_177;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_157;
  undefined1 uStack_148;
  double dStack_147;
  undefined7 uStack_13f;
  byte bStack_138;
  undefined1 uStack_130;
  double dStack_12f;
  undefined7 uStack_127;
  byte bStack_120;
  undefined1 uStack_118;
  undefined1 uStack_100;
  double dStack_ff;
  undefined7 uStack_f7;
  byte bStack_f0;
  undefined1 uStack_e8;
  byte bStack_d0;
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  byte bStack_cc;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  byte bStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  byte bStack_c5;
  byte bStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  byte bStack_c0;
  undefined1 uStack_b0;
  float fStack_af;
  undefined4 uStack_ab;
  float fStack_a7;
  undefined4 uStack_a3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long local_78;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  bVar53 = false;
  switch(param_2) {
  case 0xfd00:
    bVar53 = ExecuteLoad<v8::internal::wasm::Simd128,v8::internal::wasm::Simd128>
                       (this,param_3,param_4,param_5,param_6,0xd,1);
    goto code_r0x01238a6c;
  case 0xfd01:
    bVar53 = ExecuteStore<v8::internal::wasm::Simd128,v8::internal::wasm::Simd128>
                       (this,param_3,param_4,param_5,param_6,0xd,1);
    goto code_r0x01238a6c;
  default:
    goto LAB_0123e458;
  case 0xfd03:
    param_5 = *(long *)(param_4 + 0x40) + param_5;
    uVar24 = *(undefined8 *)(param_5 + 2);
    uVar25 = *(undefined8 *)(param_5 + 10);
    bStack_c8 = (byte)uVar25;
    bStack_c7 = (byte)((ulong)uVar25 >> 8);
    bStack_c6 = (byte)((ulong)uVar25 >> 0x10);
    bStack_c5 = (byte)((ulong)uVar25 >> 0x18);
    bStack_c4 = (byte)((ulong)uVar25 >> 0x20);
    bStack_c3 = (byte)((ulong)uVar25 >> 0x28);
    bStack_c2 = (byte)((ulong)uVar25 >> 0x30);
    bStack_c1 = (byte)((ulong)uVar25 >> 0x38);
    bStack_d0 = (byte)uVar24;
    bStack_cf = (byte)((ulong)uVar24 >> 8);
    bStack_ce = (byte)((ulong)uVar24 >> 0x10);
    bStack_cd = (byte)((ulong)uVar24 >> 0x18);
    bStack_cc = (byte)((ulong)uVar24 >> 0x20);
    bStack_cb = (byte)((ulong)uVar24 >> 0x28);
    bStack_ca = (byte)((ulong)uVar24 >> 0x30);
    bStack_c9 = (byte)((ulong)uVar24 >> 0x38);
    *param_6 = *param_6 + 0x10;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_238._0_1_ = SUB41(fStack_a7,0);
    uStack_238._1_1_ = (byte)((uint)fStack_a7 >> 8);
    uStack_236._0_1_ = (byte)((uint)fStack_a7 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)fStack_a7 >> 0x18);
    uStack_234._0_1_ = SUB41(uStack_a3,0);
    uStack_234._1_1_ = (byte)((uint)uStack_a3 >> 8);
    uStack_232._0_1_ = (byte)((uint)uStack_a3 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)uStack_a3 >> 0x18);
    uStack_240._0_1_ = SUB41(fStack_af,0);
    uStack_240._1_1_ = (byte)((uint)fStack_af >> 8);
    uStack_240._2_1_ = (byte)((uint)fStack_af >> 0x10);
    uStack_240._3_1_ = (byte)((uint)fStack_af >> 0x18);
    uStack_23c._0_1_ = SUB41(uStack_ab,0);
    uStack_23c._1_1_ = (byte)((uint)uStack_ab >> 8);
    uStack_23a._0_1_ = (byte)((uint)uStack_ab >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)uStack_ab >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    dVar15 = uStack_628;
    dVar14 = uStack_630;
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(uStack_ab,fStack_af);
    uStack_418 = (double)CONCAT44(uStack_a3,fStack_a7);
    puVar17 = &uStack_420;
    if (0xf < bStack_d0) {
      puVar17 = (undefined8 *)(auStack_257 + 7);
    }
    puVar18 = &uStack_420;
    if (0xf < bStack_cf) {
      puVar18 = (undefined8 *)(auStack_257 + 7);
    }
    puVar19 = &uStack_420;
    if (0xf < bStack_ce) {
      puVar19 = (undefined8 *)(auStack_257 + 7);
    }
    puVar20 = &uStack_420;
    if (0xf < bStack_cd) {
      puVar20 = (undefined8 *)(auStack_257 + 7);
    }
    puVar21 = &uStack_420;
    if (0xf < bStack_cc) {
      puVar21 = (undefined8 *)(auStack_257 + 7);
    }
    uStack_630 = (double)CONCAT71(uStack_630._1_7_,*(undefined1 *)((long)puVar17 + (ulong)bStack_d0)
                                 );
    puVar22 = &uStack_420;
    if (0xf < bStack_cb) {
      puVar22 = (undefined8 *)(auStack_257 + 7);
    }
    puVar23 = &uStack_420;
    if (0xf < bStack_ca) {
      puVar23 = (undefined8 *)(auStack_257 + 7);
    }
    uStack_630._3_5_ = SUB85(dVar14,3);
    uStack_630._0_3_ =
         CONCAT12(*(undefined1 *)((long)puVar19 + (ulong)bStack_ce),
                  CONCAT11(*(undefined1 *)((long)puVar18 + (ulong)bStack_cf),
                           *(undefined1 *)((long)puVar17 + (ulong)bStack_d0)));
    puVar17 = &uStack_420;
    if (0xf < bStack_c9) {
      puVar17 = (undefined8 *)(auStack_257 + 7);
    }
    puVar18 = &uStack_420;
    if (0xf < bStack_c8) {
      puVar18 = (undefined8 *)(auStack_257 + 7);
    }
    uStack_630._5_3_ = SUB83(dVar14,5);
    uStack_630._0_5_ =
         CONCAT14(*(undefined1 *)((long)puVar21 + (ulong)bStack_cc),
                  CONCAT13(*(undefined1 *)((long)puVar20 + (ulong)bStack_cd),(undefined3)uStack_630)
                 );
    puVar19 = &uStack_420;
    if (0xf < bStack_c7) {
      puVar19 = (undefined8 *)(auStack_257 + 7);
    }
    puVar20 = &uStack_420;
    if (0xf < bStack_c6) {
      puVar20 = (undefined8 *)(auStack_257 + 7);
    }
    uStack_630._7_1_ = SUB81(dVar14,7);
    uStack_630._0_7_ =
         CONCAT16(*(undefined1 *)((long)puVar23 + (ulong)bStack_ca),
                  CONCAT15(*(undefined1 *)((long)puVar22 + (ulong)bStack_cb),(undefined5)uStack_630)
                 );
    puVar21 = &uStack_420;
    if (0xf < bStack_c5) {
      puVar21 = (undefined8 *)(auStack_257 + 7);
    }
    uStack_630 = (double)CONCAT17(*(undefined1 *)((long)puVar17 + (ulong)bStack_c9),
                                  (undefined7)uStack_630);
    puVar17 = &uStack_420;
    if (0xf < bStack_c4) {
      puVar17 = (undefined8 *)(auStack_257 + 7);
    }
    uStack_628 = (double)CONCAT71(uStack_628._1_7_,*(undefined1 *)((long)puVar18 + (ulong)bStack_c8)
                                 );
    puVar22 = &uStack_420;
    if (0xf < bStack_c3) {
      puVar22 = (undefined8 *)(auStack_257 + 7);
    }
    uStack_628._2_6_ = SUB86(dVar15,2);
    uStack_628._0_2_ =
         CONCAT11(*(undefined1 *)((long)puVar19 + (ulong)bStack_c7),
                  *(undefined1 *)((long)puVar18 + (ulong)bStack_c8));
    puVar18 = &uStack_420;
    if (0xf < bStack_c2) {
      puVar18 = (undefined8 *)(auStack_257 + 7);
    }
    puVar19 = &uStack_420;
    if (0xf < bStack_c1) {
      puVar19 = (undefined8 *)(auStack_257 + 7);
    }
    uStack_628._3_5_ = SUB85(dVar15,3);
    uStack_628._0_3_ =
         CONCAT12(*(undefined1 *)((long)puVar20 + (ulong)bStack_c6),(undefined2)uStack_628);
    bStack_1080 = *(byte *)((long)puVar19 + (ulong)bStack_c1);
    uStack_628._0_7_ =
         CONCAT16(*(undefined1 *)((long)puVar18 + (ulong)bStack_c2),
                  CONCAT15(*(undefined1 *)((long)puVar22 + (ulong)bStack_c3),
                           CONCAT14(*(undefined1 *)((long)puVar17 + (ulong)bStack_c4),
                                    CONCAT13(*(undefined1 *)((long)puVar21 + (ulong)bStack_c5),
                                             (undefined3)uStack_628))));
    uStack_628 = (double)CONCAT17(bStack_1080,(undefined7)uStack_628);
    uStack_90 = uStack_630;
    uStack_88 = uStack_628;
    auVar99._1_8_ = uStack_630;
    auVar99[0] = 5;
    auVar99._9_7_ = (undefined7)uStack_628;
    goto code_r0x0123e408;
  case 0xfd04:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = CONCAT22(CONCAT11(bStack_cf,bStack_cf),CONCAT11(bStack_cf,bStack_cf));
    uStack_90 = (double)CONCAT44(uVar74,uVar74);
    uStack_160 = 5;
    uStack_157 = SUB87(uStack_90,0);
    auVar90._1_8_ = uStack_90;
    auVar90[0] = 5;
    auVar90._9_7_ = uStack_157;
    bStack_810 = bStack_cf;
    uStack_88 = uStack_90;
    goto code_r0x0123b930;
  case 0xfd05:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_232._1_1_ = bStack_c0;
    uStack_1fb = 0;
    uStack_203 = 0;
    uStack_208 = 1;
    iStack_207 = (int)*(char *)((long)&uStack_240 + (ulong)bVar123);
    auVar83 = ZEXT516(CONCAT41(iStack_207,1));
    goto code_r0x0123bb18;
  case 0xfd06:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_232._1_1_ = bStack_c0;
    uStack_213 = 0;
    uStack_21b = 0;
    uStack_220 = 1;
    iStack_21f = (int)*(char *)((long)&uStack_240 + (ulong)bVar123);
    auVar83 = ZEXT516(CONCAT41(iStack_21f,1));
    goto code_r0x0123bb18;
  case 0xfd07:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    *(byte *)((long)&uStack_420 + (ulong)bVar123) = bStack_cf;
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_de7 = SUB87(uStack_418,0);
    uStack_de0 = (undefined1)((ulong)uStack_418 >> 0x38);
    auVar91._1_8_ = uStack_420;
    auVar91[0] = 5;
    auVar91._9_7_ = uStack_de7;
    uStack_d68 = uStack_de0;
    goto code_r0x0123bce4;
  case 0xfd08:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar10 = *(undefined2 *)((ulong)&bStack_d0 | 1);
    uStack_238._0_1_ = (byte)uVar10;
    uStack_238._1_1_ = (byte)((ushort)uVar10 >> 8);
    dStack_147 = (double)CONCAT17(uStack_238._1_1_,
                                  CONCAT16((byte)uStack_238,
                                           CONCAT15(uStack_238._1_1_,
                                                    CONCAT14((byte)uStack_238,
                                                             CONCAT13(uStack_238._1_1_,
                                                                      CONCAT12((byte)uStack_238,
                                                                               uVar10))))));
    uStack_13f = CONCAT16((byte)uStack_238,
                          CONCAT15(uStack_238._1_1_,
                                   CONCAT14((byte)uStack_238,
                                            CONCAT13(uStack_238._1_1_,
                                                     CONCAT12((byte)uStack_238,uVar10)))));
    uStack_88 = (double)CONCAT17(uStack_238._1_1_,uStack_13f);
    uStack_148 = 5;
    bStack_138 = uStack_238._1_1_;
    auVar92._1_8_ = dStack_147;
    auVar92[0] = 5;
    auVar92._9_7_ = uStack_13f;
    bVar123 = uStack_238._1_1_;
    uStack_240._0_1_ = (byte)uStack_238;
    uStack_240._1_1_ = uStack_238._1_1_;
    uStack_240._2_1_ = (byte)uStack_238;
    uStack_240._3_1_ = uStack_238._1_1_;
    uStack_23c._0_1_ = (byte)uStack_238;
    uStack_23c._1_1_ = uStack_238._1_1_;
    uStack_23a._0_1_ = (byte)uStack_238;
    uStack_23a._1_1_ = uStack_238._1_1_;
    uStack_236._0_1_ = (byte)uStack_238;
    uStack_236._1_1_ = uStack_238._1_1_;
    uStack_234._0_1_ = (byte)uStack_238;
    uStack_234._1_1_ = uStack_238._1_1_;
    uStack_232._0_1_ = (byte)uStack_238;
    uStack_232._1_1_ = uStack_238._1_1_;
    uStack_90 = dStack_147;
    goto code_r0x0123bdc0;
  case 0xfd09:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_232._1_1_ = bStack_c0;
    uStack_1cb = 0;
    uStack_1d3 = 0;
    uStack_1d8 = 1;
    iStack_1d7 = (int)*(short *)((long)&uStack_240 + (ulong)bVar123 * 2);
    auVar83 = ZEXT516(CONCAT41(iStack_1d7,1));
    goto code_r0x0123bb18;
  case 0xfd0a:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_232._1_1_ = bStack_c0;
    uStack_1e3 = 0;
    uStack_1eb = 0;
    uStack_1f0 = 1;
    iStack_1ef = (int)*(short *)((long)&uStack_240 + (ulong)bVar123 * 2);
    auVar83 = ZEXT516(CONCAT41(iStack_1ef,1));
code_r0x0123bb18:
    fStack_a7 = auVar83._9_4_;
    uStack_a3._0_3_ = auVar83._13_3_;
    uStack_a3 = (float)(uint)(uint3)uStack_a3;
    uStack_b0 = auVar83[0];
    fStack_af = auVar83._1_4_;
    uStack_ab = auVar83._5_4_;
    lVar61 = *(long *)(this + 0x28) - *(long *)(this + 0x18);
code_r0x0123bb30:
    uStack_240._0_1_ = bStack_cf;
    uStack_240._1_1_ = bStack_ce;
    uStack_240._2_1_ = bStack_cd;
    uStack_240._3_1_ = bStack_cc;
    uStack_23c._0_1_ = bStack_cb;
    uStack_23c._1_1_ = bStack_ca;
    uStack_23a._0_1_ = bStack_c9;
    uStack_23a._1_1_ = bStack_c8;
    uStack_238._0_1_ = bStack_c7;
    uStack_238._1_1_ = bStack_c6;
    uStack_236._0_1_ = bStack_c5;
    uStack_236._1_1_ = bStack_c4;
    uStack_234._0_1_ = bStack_c3;
    uStack_234._1_1_ = bStack_c2;
    uStack_232._0_1_ = bStack_c1;
    StackValue::StackValue((StackValue *)&uStack_90,&uStack_b0,this,lVar61 * -0xf0f0f0f0f0f0f0f);
    pdVar62 = *(double **)(this + 0x28);
    *(long *)(this + 0x28) = (long)pdVar62 + 0x11;
    goto code_r0x0123e450;
  case 0xfd0b:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    *(ushort *)((long)&uStack_420 + (ulong)bVar123 * 2) = CONCAT11(bStack_ce,bStack_cf);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_dcf = SUB87(uStack_418,0);
    uStack_dc8 = (undefined1)((ulong)uStack_418 >> 0x38);
    auVar91._1_8_ = uStack_420;
    auVar91[0] = 5;
    auVar91._9_7_ = uStack_dcf;
    uStack_d68 = uStack_dc8;
    goto code_r0x0123bce4;
  case 0xfd0c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = *(undefined4 *)((ulong)&bStack_d0 | 1);
    uStack_238._0_1_ = (byte)uVar74;
    uStack_238._1_1_ = (byte)((uint)uVar74 >> 8);
    uStack_236._0_1_ = (byte)((uint)uVar74 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)uVar74 >> 0x18);
    dStack_12f = (double)CONCAT17(uStack_236._1_1_,
                                  CONCAT16((byte)uStack_236,
                                           CONCAT15(uStack_238._1_1_,
                                                    CONCAT14((byte)uStack_238,uVar74))));
    uStack_127 = CONCAT16((byte)uStack_236,
                          CONCAT15(uStack_238._1_1_,CONCAT14((byte)uStack_238,uVar74)));
    uStack_88 = (double)CONCAT17(uStack_236._1_1_,uStack_127);
    uStack_130 = 5;
    bStack_120 = uStack_236._1_1_;
    auVar92._1_8_ = dStack_12f;
    auVar92[0] = 5;
    auVar92._9_7_ = uStack_127;
    bVar123 = uStack_236._1_1_;
    uStack_240._0_1_ = (byte)uStack_238;
    uStack_240._1_1_ = uStack_238._1_1_;
    uStack_240._2_1_ = (byte)uStack_236;
    uStack_240._3_1_ = uStack_236._1_1_;
    uStack_23c._0_1_ = (byte)uStack_238;
    uStack_23c._1_1_ = uStack_238._1_1_;
    uStack_23a._0_1_ = (byte)uStack_236;
    uStack_23a._1_1_ = uStack_236._1_1_;
    uStack_234._0_1_ = (byte)uStack_238;
    uStack_234._1_1_ = uStack_238._1_1_;
    uStack_232._0_1_ = (byte)uStack_236;
    uStack_232._1_1_ = uStack_236._1_1_;
    uStack_90 = dStack_12f;
    goto code_r0x0123bdc0;
  case 0xfd0d:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_232._1_1_ = bStack_c0;
    fStack_1bf = (float)(&uStack_240)[bVar123];
    uStack_1c0 = 1;
    uStack_1b3 = 0;
    uStack_1bb = 0;
    fStack_a7 = 0.0;
    uStack_a3 = 0.0;
    uStack_b0 = 1;
    uStack_ab = 0.0;
    lVar61 = *(long *)(this + 0x28) - *(long *)(this + 0x18);
    fStack_af = fStack_1bf;
    goto code_r0x0123bb30;
  case 0xfd0e:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    *(uint *)((long)&uStack_420 + (ulong)bVar123 * 4) =
         CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_db7 = SUB87(uStack_418,0);
    uStack_db0 = (undefined1)((ulong)uStack_418 >> 0x38);
    auVar91._1_8_ = uStack_420;
    auVar91[0] = 5;
    auVar91._9_7_ = uStack_db7;
    uStack_d68 = uStack_db0;
    goto code_r0x0123bce4;
  case 0xfd0f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar26 = CONCAT16(bStack_c9,
                      CONCAT15(bStack_ca,
                               CONCAT14(bStack_cb,
                                        CONCAT13(bStack_cc,
                                                 CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))))
                              ));
    uStack_90 = (double)CONCAT17(bStack_c8,uVar26);
    uStack_118 = 5;
    auVar90._1_8_ = uStack_90;
    auVar90[0] = 5;
    auVar90._9_7_ = uVar26;
    bStack_810 = bStack_c8;
    uStack_88 = uStack_90;
    goto code_r0x0123b930;
  case 0xfd10:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_232._1_1_ = bStack_c0;
    uStack_1a7 = *(undefined8 *)(&uStack_240 + (ulong)bVar123 * 2);
    uStack_19f = 0;
    uStack_198 = 0;
    uStack_1a8 = 2;
    Var34 = CONCAT81(uStack_1a7,2);
    goto code_r0x01238ce4;
  case 0xfd11:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    (&uStack_420)[bVar123] =
         CONCAT17(bStack_c8,
                  CONCAT16(bStack_c9,
                           CONCAT15(bStack_ca,
                                    CONCAT14(bStack_cb,
                                             CONCAT13(bStack_cc,
                                                      CONCAT12(bStack_cd,
                                                               CONCAT11(bStack_ce,bStack_cf)))))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_d9f = SUB87(uStack_418,0);
    uStack_d98 = (undefined1)((ulong)uStack_418 >> 0x38);
    auVar91._1_8_ = uStack_420;
    auVar91[0] = 5;
    auVar91._9_7_ = uStack_d9f;
    uStack_d68 = uStack_d98;
    goto code_r0x0123bce4;
  case 0xfd12:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = *(undefined4 *)((ulong)&bStack_d0 | 1);
    uStack_88 = (double)CONCAT44(uVar74,uVar74);
    uStack_90 = (double)CONCAT44(uVar74,uVar74);
    uStack_100 = 5;
    uStack_f7 = SUB87(uStack_88,0);
    bStack_f0 = (byte)((uint)uVar74 >> 0x18);
    dStack_ff = uStack_90;
    auVar92._1_8_ = uStack_90;
    auVar92[0] = 5;
    auVar92._9_7_ = uStack_f7;
    bVar123 = bStack_f0;
code_r0x0123bdc0:
    fStack_a7 = auVar92._9_4_;
    uStack_a3._0_3_ = auVar92._13_3_;
    uStack_b0 = auVar92[0];
    fStack_af = auVar92._1_4_;
    uStack_ab = auVar92._5_4_;
    uStack_a3 = (float)CONCAT13(bVar123,(uint3)uStack_a3);
code_r0x0123bdc8:
    lVar61 = (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f;
    goto code_r0x0123d91c;
  case 0xfd13:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_240._0_1_ = bStack_cf;
    uStack_240._1_1_ = bStack_ce;
    uStack_240._2_1_ = bStack_cd;
    uStack_240._3_1_ = bStack_cc;
    uStack_23c._0_1_ = bStack_cb;
    uStack_23c._1_1_ = bStack_ca;
    uStack_23a._0_1_ = bStack_c9;
    uStack_23a._1_1_ = bStack_c8;
    uStack_234._0_1_ = bStack_c3;
    uStack_234._1_1_ = bStack_c2;
    uStack_232._0_1_ = bStack_c1;
    uStack_232._1_1_ = bStack_c0;
    uStack_238._0_1_ = bStack_c7;
    uStack_238._1_1_ = bStack_c6;
    uStack_236._0_1_ = bStack_c5;
    uStack_236._1_1_ = bStack_c4;
    fStack_18f = (float)(&uStack_240)[bVar123];
    uStack_183 = 0;
    uStack_18b = 0;
    uStack_190 = 3;
    fStack_a7 = 0.0;
    uStack_a3 = 0.0;
    uStack_b0 = 3;
    uStack_ab = 0.0;
    lVar61 = (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f;
    fStack_af = fStack_18f;
    goto code_r0x0123d91c;
  case 0xfd14:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar104 = CONCAT13((byte)uStack_234,
                       CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uStack_420 = (double)CONCAT44((int)(CONCAT17((byte)uStack_238,
                                                 CONCAT16(uStack_23a._1_1_,
                                                          CONCAT15((byte)uStack_23a,
                                                                   CONCAT14(uStack_23c._1_1_,uVar74)
                                                                  ))) >> 0x20),uVar74);
    uStack_418 = (double)CONCAT44((int)(CONCAT17(bStack_230,
                                                 CONCAT16(uStack_232._1_1_,
                                                          CONCAT15((byte)uStack_232,
                                                                   CONCAT14(uStack_234._1_1_,uVar104
                                                                           )))) >> 0x20),uVar104);
    *(uint *)((long)&uStack_420 + (ulong)bVar123 * 4) =
         CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    fStack_a7 = SUB84(uStack_418,0);
    uStack_b0 = 5;
    fStack_af = SUB84(uStack_420,0);
    uStack_ab = (float)((ulong)uStack_420 >> 0x20);
    uStack_a3 = (float)((ulong)uStack_418 >> 0x20);
    goto code_r0x0123d904;
  case 0xfd15:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar26 = CONCAT16(bStack_c9,
                      CONCAT15(bStack_ca,
                               CONCAT14(bStack_cb,
                                        CONCAT13(bStack_cc,
                                                 CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))))
                              ));
    uStack_90 = (double)CONCAT17(bStack_c8,uVar26);
    uStack_e8 = 5;
    auVar90._1_8_ = uStack_90;
    auVar90[0] = 5;
    auVar90._9_7_ = uVar26;
    bStack_810 = bStack_c8;
    uStack_88 = uStack_90;
    goto code_r0x0123b930;
  case 0xfd16:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_232._1_1_ = bStack_c0;
    uStack_177 = *(undefined8 *)(&uStack_240 + (ulong)bVar123 * 2);
    uStack_16f = 0;
    uStack_168 = 0;
    uStack_178 = 4;
    Var34 = CONCAT81(uStack_177,4);
code_r0x01238ce4:
    fStack_a7 = 0.0;
    uStack_a3 = 0.0;
    uStack_b0 = (undefined1)Var34;
    fStack_af = (float)((unkuint9)Var34 >> 8);
    uStack_ab = (float)((unkuint9)Var34 >> 0x28);
    uStack_240._0_1_ = bStack_cf;
    uStack_240._1_1_ = bStack_ce;
    uStack_240._2_1_ = bStack_cd;
    uStack_240._3_1_ = bStack_cc;
    uStack_23c._0_1_ = bStack_cb;
    uStack_23c._1_1_ = bStack_ca;
    uStack_23a._0_1_ = bStack_c9;
    uStack_23a._1_1_ = bStack_c8;
    uStack_238._0_1_ = bStack_c7;
    uStack_238._1_1_ = bStack_c6;
    uStack_236._0_1_ = bStack_c5;
    uStack_236._1_1_ = bStack_c4;
    uStack_234._0_1_ = bStack_c3;
    uStack_234._1_1_ = bStack_c2;
    uStack_232._0_1_ = bStack_c1;
    goto code_r0x0123bdc8;
  case 0xfd17:
    bVar123 = *(byte *)(*(long *)(param_4 + 0x40) + param_5 + 2);
    *param_6 = *param_6 + 1;
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    (&uStack_420)[bVar123] =
         CONCAT17(bStack_c8,
                  CONCAT16(bStack_c9,
                           CONCAT15(bStack_ca,
                                    CONCAT14(bStack_cb,
                                             CONCAT13(bStack_cc,
                                                      CONCAT12(bStack_cd,
                                                               CONCAT11(bStack_ce,bStack_cf)))))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_d6f = SUB87(uStack_418,0);
    uStack_d68 = (undefined1)((ulong)uStack_418 >> 0x38);
    auVar91._1_8_ = uStack_420;
    auVar91[0] = 5;
    auVar91._9_7_ = uStack_d6f;
code_r0x0123bce4:
    fStack_a7 = auVar91._9_4_;
    uStack_a3._0_3_ = auVar91._13_3_;
    uStack_b0 = auVar91[0];
    fStack_af = auVar91._1_4_;
    uStack_ab = auVar91._5_4_;
    uStack_a3 = (float)CONCAT13(uStack_d68,(uint3)uStack_a3);
    uStack_420 = uStack_90;
    uStack_418 = uStack_88;
    goto code_r0x0123d904;
  case 0xfd18:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_));
    uVar26 = CONCAT16(uStack_23a._1_1_,
                      CONCAT15((byte)uStack_23a,
                               CONCAT14(uStack_23c._1_1_,CONCAT13((byte)uStack_23c,uVar27))));
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar28 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar12 = CONCAT15(bStack_ca,uVar28);
    uStack_630 = (double)CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar31 = CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,uVar31)))));
    uVar33 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,uVar33)));
    abStack_640[0] = -(uStack_240._1_1_ == bStack_cf);
    abStack_640[1] = -((uVar27 & 0xff00) >> 8 == ((uint)((uint5)uVar28 >> 8) & 0xff));
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    abStack_640[2] = -((uint)uStack_240._3_1_ == ((uint)((uint6)uVar12 >> 0x10) & 0xff));
    abStack_640[3] = -(((uint)((uint7)uVar26 >> 0x18) & 0xff) == (uint)bStack_cc);
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    abStack_640[4] = -((uVar6 & 0xff) == (uVar55 & 0xff));
    abStack_640[5] = -((uVar6 >> 8 & 0xff) == (uVar55 >> 8 & 0xff));
    abStack_640[6] =
         -(((ushort)((ulong)uStack_420 >> 0x30) & 0xff) ==
          ((ushort)((ulong)uStack_630 >> 0x30) & 0xff));
    abStack_640[7] = -((byte)uStack_238 == bStack_c8);
    abStack_640[8] = -(uStack_238._1_1_ == bStack_c7);
    abStack_640[9] = -((uVar31 & 0xff00) >> 8 == ((uint)((uint5)uVar33 >> 8) & 0xff));
    abStack_640[10] = -(uStack_236._1_1_ == bStack_c5);
    abStack_640[0xb] = -((byte)uStack_234 == bStack_c4);
    abStack_640[0xc] = -(uStack_234._1_1_ == bStack_c3);
    abStack_640[0xd] = -((byte)uStack_232 == bStack_c2);
    abStack_640[0xe] = -(uStack_232._1_1_ == bStack_c1);
    abStack_640[0xf] = -(bStack_230 == bStack_c0);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd19:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_));
    uVar26 = CONCAT16(uStack_23a._1_1_,
                      CONCAT15((byte)uStack_23a,
                               CONCAT14(uStack_23c._1_1_,CONCAT13((byte)uStack_23c,uVar27))));
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar28 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar12 = CONCAT15(bStack_ca,uVar28);
    uStack_630 = (double)CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar31 = CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,uVar31)))));
    uVar33 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,uVar33)));
    abStack_640[0] = -(uStack_240._1_1_ != bStack_cf);
    abStack_640[1] = -((uVar27 & 0xff00) >> 8 != ((uint)((uint5)uVar28 >> 8) & 0xff));
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    abStack_640[2] = -((uint)uStack_240._3_1_ != ((uint)((uint6)uVar12 >> 0x10) & 0xff));
    abStack_640[3] = -(((uint)((uint7)uVar26 >> 0x18) & 0xff) != (uint)bStack_cc);
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    abStack_640[4] = -((uVar6 & 0xff) != (uVar55 & 0xff));
    abStack_640[5] = -((uVar6 >> 8 & 0xff) != (uVar55 >> 8 & 0xff));
    abStack_640[6] =
         -(((ushort)((ulong)uStack_420 >> 0x30) & 0xff) !=
          ((ushort)((ulong)uStack_630 >> 0x30) & 0xff));
    abStack_640[7] = -((byte)uStack_238 != bStack_c8);
    abStack_640[8] = -(uStack_238._1_1_ != bStack_c7);
    abStack_640[9] = -((uVar31 & 0xff00) >> 8 != ((uint)((uint5)uVar33 >> 8) & 0xff));
    abStack_640[10] = -(uStack_236._1_1_ != bStack_c5);
    abStack_640[0xb] = -((byte)uStack_234 != bStack_c4);
    abStack_640[0xc] = -(uStack_234._1_1_ != bStack_c3);
    abStack_640[0xd] = -((byte)uStack_232 != bStack_c2);
    abStack_640[0xe] = -(uStack_232._1_1_ != bStack_c1);
    abStack_640[0xf] = -(bStack_230 != bStack_c0);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd1a:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,iVar58))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[0] = -((char)uStack_240._1_1_ < (char)bStack_cf);
    abStack_640[1] = -((iVar58 << 0x10) >> 0x18 < (int)(char)bStack_ce);
    abStack_640[2] = -((iVar58 << 8) >> 0x18 < (int)(char)bStack_cd);
    abStack_640[3] = -((char)(byte)uStack_23c < (char)bStack_cc);
    abStack_640[4] = -((char)uStack_23c._1_1_ < (char)bStack_cb);
    abStack_640[5] = -((char)(byte)uStack_23a < (char)bStack_ca);
    abStack_640[6] = -((char)uStack_23a._1_1_ < (char)bStack_c9);
    abStack_640[7] = -((char)(byte)uStack_238 < (char)bStack_c8);
    abStack_640[8] = -((char)uStack_238._1_1_ < (char)bStack_c7);
    abStack_640[9] = -((char)(byte)uStack_236 < (char)bStack_c6);
    abStack_640[10] = -((char)uStack_236._1_1_ < (char)bStack_c5);
    abStack_640[0xb] = -((char)(byte)uStack_234 < (char)bStack_c4);
    abStack_640[0xc] = -((char)uStack_234._1_1_ < (char)bStack_c3);
    abStack_640[0xd] = -((char)(byte)uStack_232 < (char)bStack_c2);
    abStack_640[0xe] = -((char)uStack_232._1_1_ < (char)bStack_c1);
    abStack_640[0xf] = -((char)bStack_230 < (char)bStack_c0);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd1b:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_));
    uVar26 = CONCAT16(uStack_23a._1_1_,
                      CONCAT15((byte)uStack_23a,
                               CONCAT14(uStack_23c._1_1_,CONCAT13((byte)uStack_23c,uVar27))));
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar28 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar12 = CONCAT15(bStack_ca,uVar28);
    uStack_630 = (double)CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar31 = CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,uVar31)))));
    uVar33 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,uVar33)));
    abStack_640[0] = -(uStack_240._1_1_ < bStack_cf);
    abStack_640[1] = -((uVar27 & 0xff00) >> 8 < ((uint)((uint5)uVar28 >> 8) & 0xff));
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    abStack_640[2] = -((uint)uStack_240._3_1_ < ((uint)((uint6)uVar12 >> 0x10) & 0xff));
    abStack_640[3] = -(((uint)((uint7)uVar26 >> 0x18) & 0xff) < (uint)bStack_cc);
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    abStack_640[4] = -((uVar6 & 0xff) < (uVar55 & 0xff));
    abStack_640[5] = -((uVar6 >> 8 & 0xff) < (uVar55 >> 8 & 0xff));
    abStack_640[6] =
         -(((ushort)((ulong)uStack_420 >> 0x30) & 0xff) <
          ((ushort)((ulong)uStack_630 >> 0x30) & 0xff));
    abStack_640[7] = -((byte)uStack_238 < bStack_c8);
    abStack_640[8] = -(uStack_238._1_1_ < bStack_c7);
    abStack_640[9] = -((uVar31 & 0xff00) >> 8 < ((uint)((uint5)uVar33 >> 8) & 0xff));
    abStack_640[10] = -(uStack_236._1_1_ < bStack_c5);
    abStack_640[0xb] = -((byte)uStack_234 < bStack_c4);
    abStack_640[0xc] = -(uStack_234._1_1_ < bStack_c3);
    abStack_640[0xd] = -((byte)uStack_232 < bStack_c2);
    abStack_640[0xe] = -(uStack_232._1_1_ < bStack_c1);
    abStack_640[0xf] = -(bStack_230 < bStack_c0);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd1c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,iVar58))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[0] = -((char)bStack_cf < (char)uStack_240._1_1_);
    abStack_640[1] = -((int)(char)bStack_ce < (iVar58 << 0x10) >> 0x18);
    abStack_640[2] = -((int)(char)bStack_cd < (iVar58 << 8) >> 0x18);
    abStack_640[3] = -((char)bStack_cc < (char)(byte)uStack_23c);
    abStack_640[4] = -((char)bStack_cb < (char)uStack_23c._1_1_);
    abStack_640[5] = -((char)bStack_ca < (char)(byte)uStack_23a);
    abStack_640[6] = -((char)bStack_c9 < (char)uStack_23a._1_1_);
    abStack_640[7] = -((char)bStack_c8 < (char)(byte)uStack_238);
    abStack_640[8] = -((char)bStack_c7 < (char)uStack_238._1_1_);
    abStack_640[9] = -((char)bStack_c6 < (char)(byte)uStack_236);
    abStack_640[10] = -((char)bStack_c5 < (char)uStack_236._1_1_);
    abStack_640[0xb] = -((char)bStack_c4 < (char)(byte)uStack_234);
    abStack_640[0xc] = -((char)bStack_c3 < (char)uStack_234._1_1_);
    abStack_640[0xd] = -((char)bStack_c2 < (char)(byte)uStack_232);
    abStack_640[0xe] = -((char)bStack_c1 < (char)uStack_232._1_1_);
    abStack_640[0xf] = -((char)bStack_c0 < (char)bStack_230);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd1d:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_));
    uVar26 = CONCAT16(uStack_23a._1_1_,
                      CONCAT15((byte)uStack_23a,
                               CONCAT14(uStack_23c._1_1_,CONCAT13((byte)uStack_23c,uVar27))));
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar28 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar12 = CONCAT15(bStack_ca,uVar28);
    uStack_630 = (double)CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar31 = CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,uVar31)))));
    uVar33 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,uVar33)));
    abStack_640[0] = -(bStack_cf < uStack_240._1_1_);
    abStack_640[1] = -(((uint)((uint5)uVar28 >> 8) & 0xff) < (uVar27 & 0xff00) >> 8);
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    abStack_640[2] = -(((uint)((uint6)uVar12 >> 0x10) & 0xff) < (uint)uStack_240._3_1_);
    abStack_640[3] = -((uint)bStack_cc < ((uint)((uint7)uVar26 >> 0x18) & 0xff));
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    abStack_640[4] = -((uVar55 & 0xff) < (uVar6 & 0xff));
    abStack_640[5] = -((uVar55 >> 8 & 0xff) < (uVar6 >> 8 & 0xff));
    abStack_640[6] =
         -(((ushort)((ulong)uStack_630 >> 0x30) & 0xff) <
          ((ushort)((ulong)uStack_420 >> 0x30) & 0xff));
    abStack_640[7] = -(bStack_c8 < (byte)uStack_238);
    abStack_640[8] = -(bStack_c7 < uStack_238._1_1_);
    abStack_640[9] = -(((uint)((uint5)uVar33 >> 8) & 0xff) < (uVar31 & 0xff00) >> 8);
    abStack_640[10] = -(bStack_c5 < uStack_236._1_1_);
    abStack_640[0xb] = -(bStack_c4 < (byte)uStack_234);
    abStack_640[0xc] = -(bStack_c3 < uStack_234._1_1_);
    abStack_640[0xd] = -(bStack_c2 < (byte)uStack_232);
    abStack_640[0xe] = -(bStack_c1 < uStack_232._1_1_);
    abStack_640[0xf] = -(bStack_c0 < bStack_230);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd1e:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,iVar58))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[0] = -((char)uStack_240._1_1_ <= (char)bStack_cf);
    abStack_640[1] = -((iVar58 << 0x10) >> 0x18 <= (int)(char)bStack_ce);
    abStack_640[2] = -((iVar58 << 8) >> 0x18 <= (int)(char)bStack_cd);
    abStack_640[3] = -((char)(byte)uStack_23c <= (char)bStack_cc);
    abStack_640[4] = -((char)uStack_23c._1_1_ <= (char)bStack_cb);
    abStack_640[5] = -((char)(byte)uStack_23a <= (char)bStack_ca);
    abStack_640[6] = -((char)uStack_23a._1_1_ <= (char)bStack_c9);
    abStack_640[7] = -((char)(byte)uStack_238 <= (char)bStack_c8);
    abStack_640[8] = -((char)uStack_238._1_1_ <= (char)bStack_c7);
    abStack_640[9] = -((char)(byte)uStack_236 <= (char)bStack_c6);
    abStack_640[10] = -((char)uStack_236._1_1_ <= (char)bStack_c5);
    abStack_640[0xb] = -((char)(byte)uStack_234 <= (char)bStack_c4);
    abStack_640[0xc] = -((char)uStack_234._1_1_ <= (char)bStack_c3);
    abStack_640[0xd] = -((char)(byte)uStack_232 <= (char)bStack_c2);
    abStack_640[0xe] = -((char)uStack_232._1_1_ <= (char)bStack_c1);
    abStack_640[0xf] = -((char)bStack_230 <= (char)bStack_c0);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd1f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_));
    uVar26 = CONCAT16(uStack_23a._1_1_,
                      CONCAT15((byte)uStack_23a,
                               CONCAT14(uStack_23c._1_1_,CONCAT13((byte)uStack_23c,uVar27))));
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar28 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar12 = CONCAT15(bStack_ca,uVar28);
    uStack_630 = (double)CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar31 = CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,uVar31)))));
    uVar33 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,uVar33)));
    abStack_640[0] = -(uStack_240._1_1_ <= bStack_cf);
    abStack_640[1] = -((uVar27 & 0xff00) >> 8 <= ((uint)((uint5)uVar28 >> 8) & 0xff));
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    abStack_640[2] = -((uint)uStack_240._3_1_ <= ((uint)((uint6)uVar12 >> 0x10) & 0xff));
    abStack_640[3] = -(((uint)((uint7)uVar26 >> 0x18) & 0xff) <= (uint)bStack_cc);
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    abStack_640[4] = -((uVar6 & 0xff) <= (uVar55 & 0xff));
    abStack_640[5] = -((uVar6 >> 8 & 0xff) <= (uVar55 >> 8 & 0xff));
    abStack_640[6] =
         -(((ushort)((ulong)uStack_420 >> 0x30) & 0xff) <=
          ((ushort)((ulong)uStack_630 >> 0x30) & 0xff));
    abStack_640[7] = -((byte)uStack_238 <= bStack_c8);
    abStack_640[8] = -(uStack_238._1_1_ <= bStack_c7);
    abStack_640[9] = -((uVar31 & 0xff00) >> 8 <= ((uint)((uint5)uVar33 >> 8) & 0xff));
    abStack_640[10] = -(uStack_236._1_1_ <= bStack_c5);
    abStack_640[0xb] = -((byte)uStack_234 <= bStack_c4);
    abStack_640[0xc] = -(uStack_234._1_1_ <= bStack_c3);
    abStack_640[0xd] = -((byte)uStack_232 <= bStack_c2);
    abStack_640[0xe] = -(uStack_232._1_1_ <= bStack_c1);
    abStack_640[0xf] = -(bStack_230 <= bStack_c0);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd20:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,iVar58))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[0] = -((char)bStack_cf <= (char)uStack_240._1_1_);
    abStack_640[1] = -((int)(char)bStack_ce <= (iVar58 << 0x10) >> 0x18);
    abStack_640[2] = -((int)(char)bStack_cd <= (iVar58 << 8) >> 0x18);
    abStack_640[3] = -((char)bStack_cc <= (char)(byte)uStack_23c);
    abStack_640[4] = -((char)bStack_cb <= (char)uStack_23c._1_1_);
    abStack_640[5] = -((char)bStack_ca <= (char)(byte)uStack_23a);
    abStack_640[6] = -((char)bStack_c9 <= (char)uStack_23a._1_1_);
    abStack_640[7] = -((char)bStack_c8 <= (char)(byte)uStack_238);
    abStack_640[8] = -((char)bStack_c7 <= (char)uStack_238._1_1_);
    abStack_640[9] = -((char)bStack_c6 <= (char)(byte)uStack_236);
    abStack_640[10] = -((char)bStack_c5 <= (char)uStack_236._1_1_);
    abStack_640[0xb] = -((char)bStack_c4 <= (char)(byte)uStack_234);
    abStack_640[0xc] = -((char)bStack_c3 <= (char)uStack_234._1_1_);
    abStack_640[0xd] = -((char)bStack_c2 <= (char)(byte)uStack_232);
    abStack_640[0xe] = -((char)bStack_c1 <= (char)uStack_232._1_1_);
    abStack_640[0xf] = -((char)bStack_c0 <= (char)bStack_230);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
    goto code_r0x0123d3d4;
  case 0xfd21:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_));
    uVar26 = CONCAT16(uStack_23a._1_1_,
                      CONCAT15((byte)uStack_23a,
                               CONCAT14(uStack_23c._1_1_,CONCAT13((byte)uStack_23c,uVar27))));
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar28 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar12 = CONCAT15(bStack_ca,uVar28);
    uStack_630 = (double)CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar31 = CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,uVar31)))));
    uVar33 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,uVar33)));
    abStack_640[0] = -(bStack_cf <= uStack_240._1_1_);
    abStack_640[1] = -(((uint)((uint5)uVar28 >> 8) & 0xff) <= (uVar27 & 0xff00) >> 8);
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    abStack_640[2] = -(((uint)((uint6)uVar12 >> 0x10) & 0xff) <= (uint)uStack_240._3_1_);
    abStack_640[3] = -((uint)bStack_cc <= ((uint)((uint7)uVar26 >> 0x18) & 0xff));
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    abStack_640[4] = -((uVar55 & 0xff) <= (uVar6 & 0xff));
    abStack_640[5] = -((uVar55 >> 8 & 0xff) <= (uVar6 >> 8 & 0xff));
    abStack_640[6] =
         -(((ushort)((ulong)uStack_630 >> 0x30) & 0xff) <=
          ((ushort)((ulong)uStack_420 >> 0x30) & 0xff));
    abStack_640[7] = -(bStack_c8 <= (byte)uStack_238);
    abStack_640[8] = -(bStack_c7 <= uStack_238._1_1_);
    abStack_640[9] = -(((uint)((uint5)uVar33 >> 8) & 0xff) <= (uVar31 & 0xff00) >> 8);
    abStack_640[10] = -(bStack_c5 <= uStack_236._1_1_);
    abStack_640[0xb] = -(bStack_c4 <= (byte)uStack_234);
    abStack_640[0xc] = -(bStack_c3 <= uStack_234._1_1_);
    abStack_640[0xd] = -(bStack_c2 <= (byte)uStack_232);
    abStack_640[0xe] = -(bStack_c1 <= uStack_232._1_1_);
    abStack_640[0xf] = -(bStack_c0 <= bStack_230);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar94._1_8_ = uStack_90;
    auVar94[0] = 5;
    auVar94._9_7_ = uVar26;
code_r0x0123d3d4:
    fStack_a7 = auVar94._9_4_;
    uStack_a3._0_3_ = auVar94._13_3_;
    uStack_b0 = auVar94[0];
    fStack_af = auVar94._1_4_;
    uStack_ab = auVar94._5_4_;
    uStack_a3 = (float)CONCAT13(abStack_640[0xf],(uint3)uStack_a3);
    goto code_r0x0123e410;
  case 0xfd22:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar12 = CONCAT15((byte)uStack_23a,
                      CONCAT14(uStack_23c._1_1_,
                               CONCAT13((byte)uStack_23c,
                                        CONCAT12(uStack_240._3_1_,
                                                 CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar6 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar6))));
    uVar32 = CONCAT15((byte)uStack_232,
                      CONCAT14(uStack_234._1_1_,
                               CONCAT13((byte)uStack_234,
                                        CONCAT12(uStack_236._1_1_,
                                                 CONCAT11((byte)uStack_236,uStack_238._1_1_)))));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar55 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar55))));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(((uint)((uint6)uVar12 >> 0x10) & 0xffff) == uVar6 >> 0x10),
                         -(ushort)(CONCAT11(uStack_240._2_1_,uStack_240._1_1_) ==
                                  CONCAT11(bStack_ce,bStack_cf)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(((uint)((uint6)uVar32 >> 0x10) & 0xffff) == uVar55 >> 0x10),
                         -(ushort)(CONCAT11((byte)uStack_236,uStack_238._1_1_) ==
                                  CONCAT11(bStack_c6,bStack_c7)));
    sVar100 = -(ushort)((short)((ulong)uVar25 >> 0x30) == (short)((ulong)uVar47 >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((short)((ulong)uVar24 >> 0x30) ==
                                           (short)((ulong)uVar37 >> 0x30)),
                                  CONCAT24(-(ushort)(((uint)((ulong)uVar24 >> 0x20) & 0xffff) ==
                                                    ((uint)((ulong)uVar37 >> 0x20) & 0xffff)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)(((uint)((ulong)uVar25 >> 0x20) & 0xffff) ==
                           ((uint)((ulong)uVar47 >> 0x20) & 0xffff)),(float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_b8f = SUB87(uStack_418,0);
    uStack_b88 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_b8f;
    uStack_c30 = uStack_b88;
    goto code_r0x0123d5d8;
  case 0xfd23:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar12 = CONCAT15((byte)uStack_23a,
                      CONCAT14(uStack_23c._1_1_,
                               CONCAT13((byte)uStack_23c,
                                        CONCAT12(uStack_240._3_1_,
                                                 CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar6 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar6))));
    uVar32 = CONCAT15((byte)uStack_232,
                      CONCAT14(uStack_234._1_1_,
                               CONCAT13((byte)uStack_234,
                                        CONCAT12(uStack_236._1_1_,
                                                 CONCAT11((byte)uStack_236,uStack_238._1_1_)))));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar55 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar55))));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(((uint)((uint6)uVar12 >> 0x10) & 0xffff) != uVar6 >> 0x10),
                         -(ushort)(CONCAT11(uStack_240._2_1_,uStack_240._1_1_) !=
                                  CONCAT11(bStack_ce,bStack_cf)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(((uint)((uint6)uVar32 >> 0x10) & 0xffff) != uVar55 >> 0x10),
                         -(ushort)(CONCAT11((byte)uStack_236,uStack_238._1_1_) !=
                                  CONCAT11(bStack_c6,bStack_c7)));
    sVar100 = -(ushort)((short)((ulong)uVar25 >> 0x30) != (short)((ulong)uVar47 >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((short)((ulong)uVar24 >> 0x30) !=
                                           (short)((ulong)uVar37 >> 0x30)),
                                  CONCAT24(-(ushort)(((uint)((ulong)uVar24 >> 0x20) & 0xffff) !=
                                                    ((uint)((ulong)uVar37 >> 0x20) & 0xffff)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)(((uint)((ulong)uVar25 >> 0x20) & 0xffff) !=
                           ((uint)((ulong)uVar47 >> 0x20) & 0xffff)),(float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_ba7 = SUB87(uStack_418,0);
    uStack_ba0 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_ba7;
    uStack_c30 = uStack_ba0;
    goto code_r0x0123d5d8;
  case 0xfd24:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,iVar58));
    iVar63 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,iVar63));
    iVar59 = CONCAT13((byte)uStack_234,
                      CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,iVar59));
    iVar67 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,iVar67));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(iVar58 >> 0x10 < iVar63 >> 0x10),
                         -(ushort)(CONCAT11(uStack_240._2_1_,uStack_240._1_1_) <
                                  CONCAT11(bStack_ce,bStack_cf)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(iVar59 >> 0x10 < iVar67 >> 0x10),
                         -(ushort)(CONCAT11((byte)uStack_236,uStack_238._1_1_) <
                                  CONCAT11(bStack_c6,bStack_c7)));
    sVar100 = -(ushort)((short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30) <
                       (short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((short)(CONCAT17((byte)uStack_238,
                                                             CONCAT16(uStack_23a._1_1_,uVar12)) >>
                                                   0x30) <
                                           (short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36)) >>
                                                  0x30)),
                                  CONCAT24(-(ushort)((short)((uint6)uVar12 >> 0x20) <
                                                    (short)((uint6)uVar36 >> 0x20)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)((short)((uint6)uVar32 >> 0x20) < (short)((uint6)uVar46 >> 0x20)),
                  (float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_bef = SUB87(uStack_418,0);
    uStack_be8 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_bef;
    uStack_c30 = uStack_be8;
    goto code_r0x0123d5d8;
  case 0xfd25:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar12 = CONCAT15((byte)uStack_23a,
                      CONCAT14(uStack_23c._1_1_,
                               CONCAT13((byte)uStack_23c,
                                        CONCAT12(uStack_240._3_1_,
                                                 CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar6 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar6))));
    uVar32 = CONCAT15((byte)uStack_232,
                      CONCAT14(uStack_234._1_1_,
                               CONCAT13((byte)uStack_234,
                                        CONCAT12(uStack_236._1_1_,
                                                 CONCAT11((byte)uStack_236,uStack_238._1_1_)))));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar55 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar55))));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(((uint)((uint6)uVar12 >> 0x10) & 0xffff) < uVar6 >> 0x10),
                         -(ushort)(CONCAT11(uStack_240._2_1_,uStack_240._1_1_) <
                                  CONCAT11(bStack_ce,bStack_cf)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(((uint)((uint6)uVar32 >> 0x10) & 0xffff) < uVar55 >> 0x10),
                         -(ushort)(CONCAT11((byte)uStack_236,uStack_238._1_1_) <
                                  CONCAT11(bStack_c6,bStack_c7)));
    sVar100 = -(ushort)((ushort)((ulong)uVar25 >> 0x30) < (ushort)((ulong)uVar47 >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((ushort)((ulong)uVar24 >> 0x30) <
                                           (ushort)((ulong)uVar37 >> 0x30)),
                                  CONCAT24(-(ushort)(((uint)((ulong)uVar24 >> 0x20) & 0xffff) <
                                                    ((uint)((ulong)uVar37 >> 0x20) & 0xffff)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)(((uint)((ulong)uVar25 >> 0x20) & 0xffff) <
                           ((uint)((ulong)uVar47 >> 0x20) & 0xffff)),(float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_c4f = SUB87(uStack_418,0);
    uStack_c48 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_c4f;
    uStack_c30 = uStack_c48;
    goto code_r0x0123d5d8;
  case 0xfd26:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,iVar58));
    iVar63 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,iVar63));
    iVar59 = CONCAT13((byte)uStack_234,
                      CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,iVar59));
    iVar67 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,iVar67));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(iVar63 >> 0x10 < iVar58 >> 0x10),
                         -(ushort)(CONCAT11(bStack_ce,bStack_cf) <
                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(iVar67 >> 0x10 < iVar59 >> 0x10),
                         -(ushort)(CONCAT11(bStack_c6,bStack_c7) <
                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    sVar100 = -(ushort)((short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30) <
                       (short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36))
                                                   >> 0x30) <
                                           (short)(CONCAT17((byte)uStack_238,
                                                            CONCAT16(uStack_23a._1_1_,uVar12)) >>
                                                  0x30)),
                                  CONCAT24(-(ushort)((short)((uint6)uVar36 >> 0x20) <
                                                    (short)((uint6)uVar12 >> 0x20)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)((short)((uint6)uVar46 >> 0x20) < (short)((uint6)uVar32 >> 0x20)),
                  (float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_bbf = SUB87(uStack_418,0);
    uStack_bb8 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_bbf;
    uStack_c30 = uStack_bb8;
    goto code_r0x0123d5d8;
  case 0xfd27:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar12 = CONCAT15((byte)uStack_23a,
                      CONCAT14(uStack_23c._1_1_,
                               CONCAT13((byte)uStack_23c,
                                        CONCAT12(uStack_240._3_1_,
                                                 CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar6 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar6))));
    uVar32 = CONCAT15((byte)uStack_232,
                      CONCAT14(uStack_234._1_1_,
                               CONCAT13((byte)uStack_234,
                                        CONCAT12(uStack_236._1_1_,
                                                 CONCAT11((byte)uStack_236,uStack_238._1_1_)))));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar55 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar55))));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(uVar6 >> 0x10 < ((uint)((uint6)uVar12 >> 0x10) & 0xffff)),
                         -(ushort)(CONCAT11(bStack_ce,bStack_cf) <
                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(uVar55 >> 0x10 < ((uint)((uint6)uVar32 >> 0x10) & 0xffff)),
                         -(ushort)(CONCAT11(bStack_c6,bStack_c7) <
                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    sVar100 = -(ushort)((ushort)((ulong)uVar47 >> 0x30) < (ushort)((ulong)uVar25 >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((ushort)((ulong)uVar37 >> 0x30) <
                                           (ushort)((ulong)uVar24 >> 0x30)),
                                  CONCAT24(-(ushort)(((uint)((ulong)uVar37 >> 0x20) & 0xffff) <
                                                    ((uint)((ulong)uVar24 >> 0x20) & 0xffff)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)(((uint)((ulong)uVar47 >> 0x20) & 0xffff) <
                           ((uint)((ulong)uVar25 >> 0x20) & 0xffff)),(float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_c1f = SUB87(uStack_418,0);
    uStack_c18 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_c1f;
    uStack_c30 = uStack_c18;
    goto code_r0x0123d5d8;
  case 0xfd28:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,iVar58));
    iVar63 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,iVar63));
    iVar59 = CONCAT13((byte)uStack_234,
                      CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,iVar59));
    iVar67 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,iVar67));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(iVar58 >> 0x10 <= iVar63 >> 0x10),
                         -(ushort)(CONCAT11(uStack_240._2_1_,uStack_240._1_1_) <=
                                  CONCAT11(bStack_ce,bStack_cf)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(iVar59 >> 0x10 <= iVar67 >> 0x10),
                         -(ushort)(CONCAT11((byte)uStack_236,uStack_238._1_1_) <=
                                  CONCAT11(bStack_c6,bStack_c7)));
    sVar100 = -(ushort)((short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30) <=
                       (short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((short)(CONCAT17((byte)uStack_238,
                                                             CONCAT16(uStack_23a._1_1_,uVar12)) >>
                                                   0x30) <=
                                           (short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36)) >>
                                                  0x30)),
                                  CONCAT24(-(ushort)((short)((uint6)uVar12 >> 0x20) <=
                                                    (short)((uint6)uVar36 >> 0x20)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)((short)((uint6)uVar32 >> 0x20) <= (short)((uint6)uVar46 >> 0x20)),
                  (float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_c07 = SUB87(uStack_418,0);
    uStack_c00 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_c07;
    uStack_c30 = uStack_c00;
    goto code_r0x0123d5d8;
  case 0xfd29:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar12 = CONCAT15((byte)uStack_23a,
                      CONCAT14(uStack_23c._1_1_,
                               CONCAT13((byte)uStack_23c,
                                        CONCAT12(uStack_240._3_1_,
                                                 CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar6 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar6))));
    uVar32 = CONCAT15((byte)uStack_232,
                      CONCAT14(uStack_234._1_1_,
                               CONCAT13((byte)uStack_234,
                                        CONCAT12(uStack_236._1_1_,
                                                 CONCAT11((byte)uStack_236,uStack_238._1_1_)))));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar55 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar55))));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(((uint)((uint6)uVar12 >> 0x10) & 0xffff) <= uVar6 >> 0x10),
                         -(ushort)(CONCAT11(uStack_240._2_1_,uStack_240._1_1_) <=
                                  CONCAT11(bStack_ce,bStack_cf)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(((uint)((uint6)uVar32 >> 0x10) & 0xffff) <= uVar55 >> 0x10),
                         -(ushort)(CONCAT11((byte)uStack_236,uStack_238._1_1_) <=
                                  CONCAT11(bStack_c6,bStack_c7)));
    sVar100 = -(ushort)((ushort)((ulong)uVar25 >> 0x30) <= (ushort)((ulong)uVar47 >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((ushort)((ulong)uVar24 >> 0x30) <=
                                           (ushort)((ulong)uVar37 >> 0x30)),
                                  CONCAT24(-(ushort)(((uint)((ulong)uVar24 >> 0x20) & 0xffff) <=
                                                    ((uint)((ulong)uVar37 >> 0x20) & 0xffff)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)(((uint)((ulong)uVar25 >> 0x20) & 0xffff) <=
                           ((uint)((ulong)uVar47 >> 0x20) & 0xffff)),(float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_c67 = SUB87(uStack_418,0);
    uStack_c60 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_c67;
    uStack_c30 = uStack_c60;
    goto code_r0x0123d5d8;
  case 0xfd2a:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,iVar58));
    iVar63 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,iVar63));
    iVar59 = CONCAT13((byte)uStack_234,
                      CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,iVar59));
    iVar67 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,iVar67));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(iVar63 >> 0x10 <= iVar58 >> 0x10),
                         -(ushort)(CONCAT11(bStack_ce,bStack_cf) <=
                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(iVar67 >> 0x10 <= iVar59 >> 0x10),
                         -(ushort)(CONCAT11(bStack_c6,bStack_c7) <=
                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    sVar100 = -(ushort)((short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30) <=
                       (short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36))
                                                   >> 0x30) <=
                                           (short)(CONCAT17((byte)uStack_238,
                                                            CONCAT16(uStack_23a._1_1_,uVar12)) >>
                                                  0x30)),
                                  CONCAT24(-(ushort)((short)((uint6)uVar36 >> 0x20) <=
                                                    (short)((uint6)uVar12 >> 0x20)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)((short)((uint6)uVar46 >> 0x20) <= (short)((uint6)uVar32 >> 0x20)),
                  (float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_bd7 = SUB87(uStack_418,0);
    uStack_bd0 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_bd7;
    uStack_c30 = uStack_bd0;
    goto code_r0x0123d5d8;
  case 0xfd2b:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar12 = CONCAT15((byte)uStack_23a,
                      CONCAT14(uStack_23c._1_1_,
                               CONCAT13((byte)uStack_23c,
                                        CONCAT12(uStack_240._3_1_,
                                                 CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar6 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar6))));
    uVar32 = CONCAT15((byte)uStack_232,
                      CONCAT14(uStack_234._1_1_,
                               CONCAT13((byte)uStack_234,
                                        CONCAT12(uStack_236._1_1_,
                                                 CONCAT11((byte)uStack_236,uStack_238._1_1_)))));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar55 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar55))));
    uStack_420._0_4_ =
         (float)CONCAT22(-(ushort)(uVar6 >> 0x10 <= ((uint)((uint6)uVar12 >> 0x10) & 0xffff)),
                         -(ushort)(CONCAT11(bStack_ce,bStack_cf) <=
                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uStack_418._0_4_ =
         (float)CONCAT22(-(ushort)(uVar55 >> 0x10 <= ((uint)((uint6)uVar32 >> 0x10) & 0xffff)),
                         -(ushort)(CONCAT11(bStack_c6,bStack_c7) <=
                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    sVar100 = -(ushort)((ushort)((ulong)uVar47 >> 0x30) <= (ushort)((ulong)uVar25 >> 0x30));
    uStack_420 = (double)CONCAT26(-(ushort)((ushort)((ulong)uVar37 >> 0x30) <=
                                           (ushort)((ulong)uVar24 >> 0x30)),
                                  CONCAT24(-(ushort)(((uint)((ulong)uVar37 >> 0x20) & 0xffff) <=
                                                    ((uint)((ulong)uVar24 >> 0x20) & 0xffff)),
                                           (float)uStack_420));
    uStack_418._0_6_ =
         CONCAT24(-(ushort)(((uint)((ulong)uVar47 >> 0x20) & 0xffff) <=
                           ((uint)((ulong)uVar25 >> 0x20) & 0xffff)),(float)uStack_418);
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_c37 = SUB87(uStack_418,0);
    uStack_c30 = (undefined1)((ushort)sVar100 >> 8);
    auVar95._1_8_ = uStack_420;
    auVar95[0] = 5;
    auVar95._9_7_ = uStack_c37;
code_r0x0123d5d8:
    fStack_a7 = auVar95._9_4_;
    uStack_a3._0_3_ = auVar95._13_3_;
    uStack_b0 = auVar95[0];
    fStack_af = auVar95._1_4_;
    uStack_ab = auVar95._5_4_;
    uStack_a3 = (float)CONCAT13(uStack_c30,(uint3)uStack_a3);
    uStack_420 = uStack_90;
    uStack_418 = uStack_88;
    goto code_r0x0123e410;
  case 0xfd2c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13((byte)uStack_238,
                                                   CONCAT12(uStack_23a._1_1_,
                                                            CONCAT11((byte)uStack_23a,
                                                                     uStack_23c._1_1_))) ==
                                         CONCAT13(bStack_c8,
                                                  CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)))
                                         ),-(uint)(CONCAT13((byte)uStack_23c,
                                                            CONCAT12(uStack_240._3_1_,
                                                                     CONCAT11(uStack_240._2_1_,
                                                                              uStack_240._1_1_))) ==
                                                  CONCAT13(bStack_cc,
                                                           CONCAT12(bStack_cd,
                                                                    CONCAT11(bStack_ce,bStack_cf))))
                                 );
    iVar58 = -(uint)(CONCAT13(bStack_230,
                              CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))
                             ) ==
                    CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13((byte)uStack_234,
                                                          CONCAT12(uStack_236._1_1_,
                                                                   CONCAT11((byte)uStack_236,
                                                                            uStack_238._1_1_))) ==
                                                CONCAT13(bStack_c4,
                                                         CONCAT12(bStack_c5,
                                                                  CONCAT11(bStack_c6,bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_a9f = SUB87(uStack_418,0);
    uStack_a98 = (undefined1)((uint)iVar58 >> 0x18);
    auVar77._1_8_ = uStack_420;
    auVar77[0] = 5;
    auVar77._9_7_ = uStack_a9f;
    uStack_ae0 = uStack_a98;
    goto code_r0x01232ecc;
  case 0xfd2d:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13((byte)uStack_238,
                                                   CONCAT12(uStack_23a._1_1_,
                                                            CONCAT11((byte)uStack_23a,
                                                                     uStack_23c._1_1_))) !=
                                         CONCAT13(bStack_c8,
                                                  CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)))
                                         ),-(uint)(CONCAT13((byte)uStack_23c,
                                                            CONCAT12(uStack_240._3_1_,
                                                                     CONCAT11(uStack_240._2_1_,
                                                                              uStack_240._1_1_))) !=
                                                  CONCAT13(bStack_cc,
                                                           CONCAT12(bStack_cd,
                                                                    CONCAT11(bStack_ce,bStack_cf))))
                                 );
    iVar58 = -(uint)(CONCAT13(bStack_230,
                              CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))
                             ) !=
                    CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13((byte)uStack_234,
                                                          CONCAT12(uStack_236._1_1_,
                                                                   CONCAT11((byte)uStack_236,
                                                                            uStack_238._1_1_))) !=
                                                CONCAT13(bStack_c4,
                                                         CONCAT12(bStack_c5,
                                                                  CONCAT11(bStack_c6,bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_ab7 = SUB87(uStack_418,0);
    uStack_ab0 = (undefined1)((uint)iVar58 >> 0x18);
    auVar77._1_8_ = uStack_420;
    auVar77[0] = 5;
    auVar77._9_7_ = uStack_ab7;
    uStack_ae0 = uStack_ab0;
    goto code_r0x01232ecc;
  case 0xfd2e:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13((byte)uStack_238,
                                                   CONCAT12(uStack_23a._1_1_,
                                                            CONCAT11((byte)uStack_23a,
                                                                     uStack_23c._1_1_))) <
                                         CONCAT13(bStack_c8,
                                                  CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)))
                                         ),-(uint)(CONCAT13((byte)uStack_23c,
                                                            CONCAT12(uStack_240._3_1_,
                                                                     CONCAT11(uStack_240._2_1_,
                                                                              uStack_240._1_1_))) <
                                                  CONCAT13(bStack_cc,
                                                           CONCAT12(bStack_cd,
                                                                    CONCAT11(bStack_ce,bStack_cf))))
                                 );
    iVar58 = -(uint)(CONCAT13(bStack_230,
                              CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))
                             ) <
                    CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13((byte)uStack_234,
                                                          CONCAT12(uStack_236._1_1_,
                                                                   CONCAT11((byte)uStack_236,
                                                                            uStack_238._1_1_))) <
                                                CONCAT13(bStack_c4,
                                                         CONCAT12(bStack_c5,
                                                                  CONCAT11(bStack_c6,bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_aff = SUB87(uStack_418,0);
    bStack_af8 = (byte)((uint)iVar58 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_aff;
    bStack_230 = bStack_af8;
    goto code_r0x0123cb80;
  case 0xfd2f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13((byte)uStack_238,
                                                   CONCAT12(uStack_23a._1_1_,
                                                            CONCAT11((byte)uStack_23a,
                                                                     uStack_23c._1_1_))) <
                                         CONCAT13(bStack_c8,
                                                  CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)))
                                         ),-(uint)(CONCAT13((byte)uStack_23c,
                                                            CONCAT12(uStack_240._3_1_,
                                                                     CONCAT11(uStack_240._2_1_,
                                                                              uStack_240._1_1_))) <
                                                  CONCAT13(bStack_cc,
                                                           CONCAT12(bStack_cd,
                                                                    CONCAT11(bStack_ce,bStack_cf))))
                                 );
    iVar58 = -(uint)(CONCAT13(bStack_230,
                              CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))
                             ) <
                    CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13((byte)uStack_234,
                                                          CONCAT12(uStack_236._1_1_,
                                                                   CONCAT11((byte)uStack_236,
                                                                            uStack_238._1_1_))) <
                                                CONCAT13(bStack_c4,
                                                         CONCAT12(bStack_c5,
                                                                  CONCAT11(bStack_c6,bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_b5f = SUB87(uStack_418,0);
    bStack_b58 = (byte)((uint)iVar58 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_b5f;
    bStack_230 = bStack_b58;
    goto code_r0x0123cb80;
  case 0xfd30:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13(bStack_c8,
                                                   CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))
                                                  ) <
                                         CONCAT13((byte)uStack_238,
                                                  CONCAT12(uStack_23a._1_1_,
                                                           CONCAT11((byte)uStack_23a,
                                                                    uStack_23c._1_1_)))),
                                  -(uint)(CONCAT13(bStack_cc,
                                                   CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))
                                                  ) <
                                         CONCAT13((byte)uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_)))));
    iVar58 = -(uint)(CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) <
                    CONCAT13(bStack_230,
                             CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)))
                    );
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13(bStack_c4,
                                                          CONCAT12(bStack_c5,
                                                                   CONCAT11(bStack_c6,bStack_c7))) <
                                                CONCAT13((byte)uStack_234,
                                                         CONCAT12(uStack_236._1_1_,
                                                                  CONCAT11((byte)uStack_236,
                                                                           uStack_238._1_1_)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_acf = SUB87(uStack_418,0);
    uStack_ac8 = (undefined1)((uint)iVar58 >> 0x18);
    auVar77._1_8_ = uStack_420;
    auVar77[0] = 5;
    auVar77._9_7_ = uStack_acf;
    uStack_ae0 = uStack_ac8;
    goto code_r0x01232ecc;
  case 0xfd31:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13(bStack_c8,
                                                   CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))
                                                  ) <
                                         CONCAT13((byte)uStack_238,
                                                  CONCAT12(uStack_23a._1_1_,
                                                           CONCAT11((byte)uStack_23a,
                                                                    uStack_23c._1_1_)))),
                                  -(uint)(CONCAT13(bStack_cc,
                                                   CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))
                                                  ) <
                                         CONCAT13((byte)uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_)))));
    iVar58 = -(uint)(CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) <
                    CONCAT13(bStack_230,
                             CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)))
                    );
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13(bStack_c4,
                                                          CONCAT12(bStack_c5,
                                                                   CONCAT11(bStack_c6,bStack_c7))) <
                                                CONCAT13((byte)uStack_234,
                                                         CONCAT12(uStack_236._1_1_,
                                                                  CONCAT11((byte)uStack_236,
                                                                           uStack_238._1_1_)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_b2f = SUB87(uStack_418,0);
    bStack_b28 = (byte)((uint)iVar58 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_b2f;
    bStack_230 = bStack_b28;
    goto code_r0x0123cb80;
  case 0xfd32:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13((byte)uStack_238,
                                                   CONCAT12(uStack_23a._1_1_,
                                                            CONCAT11((byte)uStack_23a,
                                                                     uStack_23c._1_1_))) <=
                                         CONCAT13(bStack_c8,
                                                  CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)))
                                         ),-(uint)(CONCAT13((byte)uStack_23c,
                                                            CONCAT12(uStack_240._3_1_,
                                                                     CONCAT11(uStack_240._2_1_,
                                                                              uStack_240._1_1_))) <=
                                                  CONCAT13(bStack_cc,
                                                           CONCAT12(bStack_cd,
                                                                    CONCAT11(bStack_ce,bStack_cf))))
                                 );
    iVar58 = -(uint)(CONCAT13(bStack_230,
                              CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))
                             ) <=
                    CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13((byte)uStack_234,
                                                          CONCAT12(uStack_236._1_1_,
                                                                   CONCAT11((byte)uStack_236,
                                                                            uStack_238._1_1_))) <=
                                                CONCAT13(bStack_c4,
                                                         CONCAT12(bStack_c5,
                                                                  CONCAT11(bStack_c6,bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_b17 = SUB87(uStack_418,0);
    bStack_b10 = (byte)((uint)iVar58 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_b17;
    bStack_230 = bStack_b10;
    goto code_r0x0123cb80;
  case 0xfd33:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13((byte)uStack_238,
                                                   CONCAT12(uStack_23a._1_1_,
                                                            CONCAT11((byte)uStack_23a,
                                                                     uStack_23c._1_1_))) <=
                                         CONCAT13(bStack_c8,
                                                  CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)))
                                         ),-(uint)(CONCAT13((byte)uStack_23c,
                                                            CONCAT12(uStack_240._3_1_,
                                                                     CONCAT11(uStack_240._2_1_,
                                                                              uStack_240._1_1_))) <=
                                                  CONCAT13(bStack_cc,
                                                           CONCAT12(bStack_cd,
                                                                    CONCAT11(bStack_ce,bStack_cf))))
                                 );
    iVar58 = -(uint)(CONCAT13(bStack_230,
                              CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))
                             ) <=
                    CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13((byte)uStack_234,
                                                          CONCAT12(uStack_236._1_1_,
                                                                   CONCAT11((byte)uStack_236,
                                                                            uStack_238._1_1_))) <=
                                                CONCAT13(bStack_c4,
                                                         CONCAT12(bStack_c5,
                                                                  CONCAT11(bStack_c6,bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_b77 = SUB87(uStack_418,0);
    bStack_b70 = (byte)((uint)iVar58 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_b77;
    bStack_230 = bStack_b70;
    goto code_r0x0123cb80;
  case 0xfd34:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13(bStack_c8,
                                                   CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))
                                                  ) <=
                                         CONCAT13((byte)uStack_238,
                                                  CONCAT12(uStack_23a._1_1_,
                                                           CONCAT11((byte)uStack_23a,
                                                                    uStack_23c._1_1_)))),
                                  -(uint)(CONCAT13(bStack_cc,
                                                   CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))
                                                  ) <=
                                         CONCAT13((byte)uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_)))));
    iVar58 = -(uint)(CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) <=
                    CONCAT13(bStack_230,
                             CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)))
                    );
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13(bStack_c4,
                                                          CONCAT12(bStack_c5,
                                                                   CONCAT11(bStack_c6,bStack_c7)))
                                                <= CONCAT13((byte)uStack_234,
                                                            CONCAT12(uStack_236._1_1_,
                                                                     CONCAT11((byte)uStack_236,
                                                                              uStack_238._1_1_)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_ae7 = SUB87(uStack_418,0);
    uStack_ae0 = (undefined1)((uint)iVar58 >> 0x18);
    auVar77._1_8_ = uStack_420;
    auVar77[0] = 5;
    auVar77._9_7_ = uStack_ae7;
code_r0x01232ecc:
    fStack_a7 = auVar77._9_4_;
    uStack_a3._0_3_ = auVar77._13_3_;
    uStack_b0 = auVar77[0];
    fStack_af = auVar77._1_4_;
    uStack_ab = auVar77._5_4_;
    uStack_a3 = (float)CONCAT13(uStack_ae0,(uint3)uStack_a3);
    uStack_420 = uStack_90;
    uStack_418 = uStack_88;
    goto code_r0x0123d904;
  case 0xfd35:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)(CONCAT13(bStack_c8,
                                                   CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))
                                                  ) <=
                                         CONCAT13((byte)uStack_238,
                                                  CONCAT12(uStack_23a._1_1_,
                                                           CONCAT11((byte)uStack_23a,
                                                                    uStack_23c._1_1_)))),
                                  -(uint)(CONCAT13(bStack_cc,
                                                   CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))
                                                  ) <=
                                         CONCAT13((byte)uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_)))));
    iVar58 = -(uint)(CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) <=
                    CONCAT13(bStack_230,
                             CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)))
                    );
    uStack_418 = (double)CONCAT44(iVar58,-(uint)(CONCAT13(bStack_c4,
                                                          CONCAT12(bStack_c5,
                                                                   CONCAT11(bStack_c6,bStack_c7)))
                                                <= CONCAT13((byte)uStack_234,
                                                            CONCAT12(uStack_236._1_1_,
                                                                     CONCAT11((byte)uStack_236,
                                                                              uStack_238._1_1_)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_b47 = SUB87(uStack_418,0);
    bStack_b40 = (byte)((uint)iVar58 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_b47;
    bStack_230 = bStack_b40;
    goto code_r0x0123cb80;
  case 0xfd36:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17((byte)uStack_238,
                                          CONCAT16(uStack_23a._1_1_,
                                                   CONCAT15((byte)uStack_23a,
                                                            CONCAT14(uStack_23c._1_1_,
                                                                     CONCAT13((byte)uStack_23c,
                                                                              CONCAT12(uStack_240.
                                                                                       _3_1_,
                                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))))))
                                == CONCAT17(bStack_c8,
                                            CONCAT16(bStack_c9,
                                                     CONCAT15(bStack_ca,
                                                              CONCAT14(bStack_cb,
                                                                       CONCAT13(bStack_cc,
                                                                                CONCAT12(bStack_cd,
                                                                                         CONCAT11(
                                                  bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_230,
                                          CONCAT16(uStack_232._1_1_,
                                                   CONCAT15((byte)uStack_232,
                                                            CONCAT14(uStack_234._1_1_,
                                                                     CONCAT13((byte)uStack_234,
                                                                              CONCAT12(uStack_236.
                                                                                       _1_1_,
                                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)))))))
                                == CONCAT17(bStack_c0,
                                            CONCAT16(bStack_c1,
                                                     CONCAT15(bStack_c2,
                                                              CONCAT14(bStack_c3,
                                                                       CONCAT13(bStack_c4,
                                                                                CONCAT12(bStack_c5,
                                                                                         CONCAT11(
                                                  bStack_c6,bStack_c7))))))));
    uStack_9af = SUB87(uStack_88,0);
    uStack_9a8 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar84._1_8_ = uStack_90;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_9af;
    uStack_9c0 = uStack_9a8;
    goto code_r0x012391d0;
  case 0xfd37:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17((byte)uStack_238,
                                          CONCAT16(uStack_23a._1_1_,
                                                   CONCAT15((byte)uStack_23a,
                                                            CONCAT14(uStack_23c._1_1_,
                                                                     CONCAT13((byte)uStack_23c,
                                                                              CONCAT12(uStack_240.
                                                                                       _3_1_,
                                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))))))
                                != CONCAT17(bStack_c8,
                                            CONCAT16(bStack_c9,
                                                     CONCAT15(bStack_ca,
                                                              CONCAT14(bStack_cb,
                                                                       CONCAT13(bStack_cc,
                                                                                CONCAT12(bStack_cd,
                                                                                         CONCAT11(
                                                  bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_230,
                                          CONCAT16(uStack_232._1_1_,
                                                   CONCAT15((byte)uStack_232,
                                                            CONCAT14(uStack_234._1_1_,
                                                                     CONCAT13((byte)uStack_234,
                                                                              CONCAT12(uStack_236.
                                                                                       _1_1_,
                                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)))))))
                                != CONCAT17(bStack_c0,
                                            CONCAT16(bStack_c1,
                                                     CONCAT15(bStack_c2,
                                                              CONCAT14(bStack_c3,
                                                                       CONCAT13(bStack_c4,
                                                                                CONCAT12(bStack_c5,
                                                                                         CONCAT11(
                                                  bStack_c6,bStack_c7))))))));
    uStack_9c7 = SUB87(uStack_88,0);
    uStack_9c0 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar84._1_8_ = uStack_90;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_9c7;
    goto code_r0x012391d0;
  case 0xfd38:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17((byte)uStack_238,
                                          CONCAT16(uStack_23a._1_1_,
                                                   CONCAT15((byte)uStack_23a,
                                                            CONCAT14(uStack_23c._1_1_,
                                                                     CONCAT13((byte)uStack_23c,
                                                                              CONCAT12(uStack_240.
                                                                                       _3_1_,
                                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))))))
                                < CONCAT17(bStack_c8,
                                           CONCAT16(bStack_c9,
                                                    CONCAT15(bStack_ca,
                                                             CONCAT14(bStack_cb,
                                                                      CONCAT13(bStack_cc,
                                                                               CONCAT12(bStack_cd,
                                                                                        CONCAT11(
                                                  bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_230,
                                          CONCAT16(uStack_232._1_1_,
                                                   CONCAT15((byte)uStack_232,
                                                            CONCAT14(uStack_234._1_1_,
                                                                     CONCAT13((byte)uStack_234,
                                                                              CONCAT12(uStack_236.
                                                                                       _1_1_,
                                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)))))))
                                < CONCAT17(bStack_c0,
                                           CONCAT16(bStack_c1,
                                                    CONCAT15(bStack_c2,
                                                             CONCAT14(bStack_c3,
                                                                      CONCAT13(bStack_c4,
                                                                               CONCAT12(bStack_c5,
                                                                                        CONCAT11(
                                                  bStack_c6,bStack_c7))))))));
    uStack_a0f = SUB87(uStack_88,0);
    uStack_a08 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar96._1_8_ = uStack_90;
    auVar96[0] = 5;
    auVar96._9_7_ = uStack_a0f;
    uStack_a50 = uStack_a08;
    goto code_r0x0123d754;
  case 0xfd39:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17((byte)uStack_238,
                                          CONCAT16(uStack_23a._1_1_,
                                                   CONCAT15((byte)uStack_23a,
                                                            CONCAT14(uStack_23c._1_1_,
                                                                     CONCAT13((byte)uStack_23c,
                                                                              CONCAT12(uStack_240.
                                                                                       _3_1_,
                                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))))))
                                < CONCAT17(bStack_c8,
                                           CONCAT16(bStack_c9,
                                                    CONCAT15(bStack_ca,
                                                             CONCAT14(bStack_cb,
                                                                      CONCAT13(bStack_cc,
                                                                               CONCAT12(bStack_cd,
                                                                                        CONCAT11(
                                                  bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_230,
                                          CONCAT16(uStack_232._1_1_,
                                                   CONCAT15((byte)uStack_232,
                                                            CONCAT14(uStack_234._1_1_,
                                                                     CONCAT13((byte)uStack_234,
                                                                              CONCAT12(uStack_236.
                                                                                       _1_1_,
                                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)))))))
                                < CONCAT17(bStack_c0,
                                           CONCAT16(bStack_c1,
                                                    CONCAT15(bStack_c2,
                                                             CONCAT14(bStack_c3,
                                                                      CONCAT13(bStack_c4,
                                                                               CONCAT12(bStack_c5,
                                                                                        CONCAT11(
                                                  bStack_c6,bStack_c7))))))));
    uStack_a6f = SUB87(uStack_88,0);
    uStack_a68 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar96._1_8_ = uStack_90;
    auVar96[0] = 5;
    auVar96._9_7_ = uStack_a6f;
    uStack_a50 = uStack_a68;
    goto code_r0x0123d754;
  case 0xfd3a:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17(bStack_c8,
                                          CONCAT16(bStack_c9,
                                                   CONCAT15(bStack_ca,
                                                            CONCAT14(bStack_cb,
                                                                     CONCAT13(bStack_cc,
                                                                              CONCAT12(bStack_cd,
                                                                                       CONCAT11(
                                                  bStack_ce,bStack_cf))))))) <
                                CONCAT17((byte)uStack_238,
                                         CONCAT16(uStack_23a._1_1_,
                                                  CONCAT15((byte)uStack_23a,
                                                           CONCAT14(uStack_23c._1_1_,
                                                                    CONCAT13((byte)uStack_23c,
                                                                             CONCAT12(uStack_240.
                                                                                      _3_1_,CONCAT11
                                                  (uStack_240._2_1_,uStack_240._1_1_))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_c0,
                                          CONCAT16(bStack_c1,
                                                   CONCAT15(bStack_c2,
                                                            CONCAT14(bStack_c3,
                                                                     CONCAT13(bStack_c4,
                                                                              CONCAT12(bStack_c5,
                                                                                       CONCAT11(
                                                  bStack_c6,bStack_c7))))))) <
                                CONCAT17(bStack_230,
                                         CONCAT16(uStack_232._1_1_,
                                                  CONCAT15((byte)uStack_232,
                                                           CONCAT14(uStack_234._1_1_,
                                                                    CONCAT13((byte)uStack_234,
                                                                             CONCAT12(uStack_236.
                                                                                      _1_1_,CONCAT11
                                                  ((byte)uStack_236,uStack_238._1_1_))))))));
    uStack_9df = SUB87(uStack_88,0);
    uStack_9d8 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar96._1_8_ = uStack_90;
    auVar96[0] = 5;
    auVar96._9_7_ = uStack_9df;
    uStack_a50 = uStack_9d8;
    goto code_r0x0123d754;
  case 0xfd3b:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17(bStack_c8,
                                          CONCAT16(bStack_c9,
                                                   CONCAT15(bStack_ca,
                                                            CONCAT14(bStack_cb,
                                                                     CONCAT13(bStack_cc,
                                                                              CONCAT12(bStack_cd,
                                                                                       CONCAT11(
                                                  bStack_ce,bStack_cf))))))) <
                                CONCAT17((byte)uStack_238,
                                         CONCAT16(uStack_23a._1_1_,
                                                  CONCAT15((byte)uStack_23a,
                                                           CONCAT14(uStack_23c._1_1_,
                                                                    CONCAT13((byte)uStack_23c,
                                                                             CONCAT12(uStack_240.
                                                                                      _3_1_,CONCAT11
                                                  (uStack_240._2_1_,uStack_240._1_1_))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_c0,
                                          CONCAT16(bStack_c1,
                                                   CONCAT15(bStack_c2,
                                                            CONCAT14(bStack_c3,
                                                                     CONCAT13(bStack_c4,
                                                                              CONCAT12(bStack_c5,
                                                                                       CONCAT11(
                                                  bStack_c6,bStack_c7))))))) <
                                CONCAT17(bStack_230,
                                         CONCAT16(uStack_232._1_1_,
                                                  CONCAT15((byte)uStack_232,
                                                           CONCAT14(uStack_234._1_1_,
                                                                    CONCAT13((byte)uStack_234,
                                                                             CONCAT12(uStack_236.
                                                                                      _1_1_,CONCAT11
                                                  ((byte)uStack_236,uStack_238._1_1_))))))));
    uStack_a3f = SUB87(uStack_88,0);
    uStack_a38 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar96._1_8_ = uStack_90;
    auVar96[0] = 5;
    auVar96._9_7_ = uStack_a3f;
    uStack_a50 = uStack_a38;
    goto code_r0x0123d754;
  case 0xfd3c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17((byte)uStack_238,
                                          CONCAT16(uStack_23a._1_1_,
                                                   CONCAT15((byte)uStack_23a,
                                                            CONCAT14(uStack_23c._1_1_,
                                                                     CONCAT13((byte)uStack_23c,
                                                                              CONCAT12(uStack_240.
                                                                                       _3_1_,
                                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))))))
                                <= CONCAT17(bStack_c8,
                                            CONCAT16(bStack_c9,
                                                     CONCAT15(bStack_ca,
                                                              CONCAT14(bStack_cb,
                                                                       CONCAT13(bStack_cc,
                                                                                CONCAT12(bStack_cd,
                                                                                         CONCAT11(
                                                  bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_230,
                                          CONCAT16(uStack_232._1_1_,
                                                   CONCAT15((byte)uStack_232,
                                                            CONCAT14(uStack_234._1_1_,
                                                                     CONCAT13((byte)uStack_234,
                                                                              CONCAT12(uStack_236.
                                                                                       _1_1_,
                                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)))))))
                                <= CONCAT17(bStack_c0,
                                            CONCAT16(bStack_c1,
                                                     CONCAT15(bStack_c2,
                                                              CONCAT14(bStack_c3,
                                                                       CONCAT13(bStack_c4,
                                                                                CONCAT12(bStack_c5,
                                                                                         CONCAT11(
                                                  bStack_c6,bStack_c7))))))));
    uStack_a27 = SUB87(uStack_88,0);
    uStack_a20 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar96._1_8_ = uStack_90;
    auVar96[0] = 5;
    auVar96._9_7_ = uStack_a27;
    uStack_a50 = uStack_a20;
    goto code_r0x0123d754;
  case 0xfd3d:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17((byte)uStack_238,
                                          CONCAT16(uStack_23a._1_1_,
                                                   CONCAT15((byte)uStack_23a,
                                                            CONCAT14(uStack_23c._1_1_,
                                                                     CONCAT13((byte)uStack_23c,
                                                                              CONCAT12(uStack_240.
                                                                                       _3_1_,
                                                  CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))))))
                                <= CONCAT17(bStack_c8,
                                            CONCAT16(bStack_c9,
                                                     CONCAT15(bStack_ca,
                                                              CONCAT14(bStack_cb,
                                                                       CONCAT13(bStack_cc,
                                                                                CONCAT12(bStack_cd,
                                                                                         CONCAT11(
                                                  bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_230,
                                          CONCAT16(uStack_232._1_1_,
                                                   CONCAT15((byte)uStack_232,
                                                            CONCAT14(uStack_234._1_1_,
                                                                     CONCAT13((byte)uStack_234,
                                                                              CONCAT12(uStack_236.
                                                                                       _1_1_,
                                                  CONCAT11((byte)uStack_236,uStack_238._1_1_)))))))
                                <= CONCAT17(bStack_c0,
                                            CONCAT16(bStack_c1,
                                                     CONCAT15(bStack_c2,
                                                              CONCAT14(bStack_c3,
                                                                       CONCAT13(bStack_c4,
                                                                                CONCAT12(bStack_c5,
                                                                                         CONCAT11(
                                                  bStack_c6,bStack_c7))))))));
    uStack_a87 = SUB87(uStack_88,0);
    uStack_a80 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar96._1_8_ = uStack_90;
    auVar96[0] = 5;
    auVar96._9_7_ = uStack_a87;
    uStack_a50 = uStack_a80;
    goto code_r0x0123d754;
  case 0xfd3e:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17(bStack_c8,
                                          CONCAT16(bStack_c9,
                                                   CONCAT15(bStack_ca,
                                                            CONCAT14(bStack_cb,
                                                                     CONCAT13(bStack_cc,
                                                                              CONCAT12(bStack_cd,
                                                                                       CONCAT11(
                                                  bStack_ce,bStack_cf))))))) <=
                                CONCAT17((byte)uStack_238,
                                         CONCAT16(uStack_23a._1_1_,
                                                  CONCAT15((byte)uStack_23a,
                                                           CONCAT14(uStack_23c._1_1_,
                                                                    CONCAT13((byte)uStack_23c,
                                                                             CONCAT12(uStack_240.
                                                                                      _3_1_,CONCAT11
                                                  (uStack_240._2_1_,uStack_240._1_1_))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_c0,
                                          CONCAT16(bStack_c1,
                                                   CONCAT15(bStack_c2,
                                                            CONCAT14(bStack_c3,
                                                                     CONCAT13(bStack_c4,
                                                                              CONCAT12(bStack_c5,
                                                                                       CONCAT11(
                                                  bStack_c6,bStack_c7))))))) <=
                                CONCAT17(bStack_230,
                                         CONCAT16(uStack_232._1_1_,
                                                  CONCAT15((byte)uStack_232,
                                                           CONCAT14(uStack_234._1_1_,
                                                                    CONCAT13((byte)uStack_234,
                                                                             CONCAT12(uStack_236.
                                                                                      _1_1_,CONCAT11
                                                  ((byte)uStack_236,uStack_238._1_1_))))))));
    uStack_9f7 = SUB87(uStack_88,0);
    uStack_9f0 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar96._1_8_ = uStack_90;
    auVar96[0] = 5;
    auVar96._9_7_ = uStack_9f7;
    uStack_a50 = uStack_9f0;
    goto code_r0x0123d754;
  case 0xfd3f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)(CONCAT17(bStack_c8,
                                          CONCAT16(bStack_c9,
                                                   CONCAT15(bStack_ca,
                                                            CONCAT14(bStack_cb,
                                                                     CONCAT13(bStack_cc,
                                                                              CONCAT12(bStack_cd,
                                                                                       CONCAT11(
                                                  bStack_ce,bStack_cf))))))) <=
                                CONCAT17((byte)uStack_238,
                                         CONCAT16(uStack_23a._1_1_,
                                                  CONCAT15((byte)uStack_23a,
                                                           CONCAT14(uStack_23c._1_1_,
                                                                    CONCAT13((byte)uStack_23c,
                                                                             CONCAT12(uStack_240.
                                                                                      _3_1_,CONCAT11
                                                  (uStack_240._2_1_,uStack_240._1_1_))))))));
    uStack_88 = (double)-(ulong)(CONCAT17(bStack_c0,
                                          CONCAT16(bStack_c1,
                                                   CONCAT15(bStack_c2,
                                                            CONCAT14(bStack_c3,
                                                                     CONCAT13(bStack_c4,
                                                                              CONCAT12(bStack_c5,
                                                                                       CONCAT11(
                                                  bStack_c6,bStack_c7))))))) <=
                                CONCAT17(bStack_230,
                                         CONCAT16(uStack_232._1_1_,
                                                  CONCAT15((byte)uStack_232,
                                                           CONCAT14(uStack_234._1_1_,
                                                                    CONCAT13((byte)uStack_234,
                                                                             CONCAT12(uStack_236.
                                                                                      _1_1_,CONCAT11
                                                  ((byte)uStack_236,uStack_238._1_1_))))))));
    uStack_a57 = SUB87(uStack_88,0);
    uStack_a50 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar96._1_8_ = uStack_90;
    auVar96[0] = 5;
    auVar96._9_7_ = uStack_a57;
code_r0x0123d754:
    fStack_a7 = auVar96._9_4_;
    uStack_a3._0_3_ = auVar96._13_3_;
    uStack_b0 = auVar96[0];
    fStack_af = auVar96._1_4_;
    uStack_ab = auVar96._5_4_;
    uStack_a3 = (float)CONCAT13(uStack_a50,(uint3)uStack_a3);
    goto code_r0x0123d904;
  case 0xfd40:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)((float)CONCAT13((byte)uStack_238,
                                                          CONCAT12(uStack_23a._1_1_,
                                                                   CONCAT11((byte)uStack_23a,
                                                                            uStack_23c._1_1_))) ==
                                         (float)CONCAT13(bStack_c8,
                                                         CONCAT12(bStack_c9,
                                                                  CONCAT11(bStack_ca,bStack_cb)))),
                                  -(uint)((float)CONCAT13((byte)uStack_23c,
                                                          CONCAT12(uStack_240._3_1_,
                                                                   CONCAT11(uStack_240._2_1_,
                                                                            uStack_240._1_1_))) ==
                                         (float)CONCAT13(bStack_cc,
                                                         CONCAT12(bStack_cd,
                                                                  CONCAT11(bStack_ce,bStack_cf)))));
    iVar58 = -(uint)((float)CONCAT13(bStack_230,
                                     CONCAT12(uStack_232._1_1_,
                                              CONCAT11((byte)uStack_232,uStack_234._1_1_))) ==
                    (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)((float)CONCAT13((byte)uStack_234,
                                                                 CONCAT12(uStack_236._1_1_,
                                                                          CONCAT11((byte)uStack_236,
                                                                                   uStack_238._1_1_)
                                                                         )) ==
                                                (float)CONCAT13(bStack_c4,
                                                                CONCAT12(bStack_c5,
                                                                         CONCAT11(bStack_c6,
                                                                                  bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_91f = SUB87(uStack_418,0);
    bStack_918 = (byte)((uint)iVar58 >> 0x18);
    auVar85._1_8_ = uStack_420;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_91f;
    bStack_900 = bStack_918;
    break;
  case 0xfd41:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)((float)CONCAT13((byte)uStack_238,
                                                          CONCAT12(uStack_23a._1_1_,
                                                                   CONCAT11((byte)uStack_23a,
                                                                            uStack_23c._1_1_))) !=
                                         (float)CONCAT13(bStack_c8,
                                                         CONCAT12(bStack_c9,
                                                                  CONCAT11(bStack_ca,bStack_cb)))),
                                  -(uint)((float)CONCAT13((byte)uStack_23c,
                                                          CONCAT12(uStack_240._3_1_,
                                                                   CONCAT11(uStack_240._2_1_,
                                                                            uStack_240._1_1_))) !=
                                         (float)CONCAT13(bStack_cc,
                                                         CONCAT12(bStack_cd,
                                                                  CONCAT11(bStack_ce,bStack_cf)))));
    iVar58 = -(uint)((float)CONCAT13(bStack_230,
                                     CONCAT12(uStack_232._1_1_,
                                              CONCAT11((byte)uStack_232,uStack_234._1_1_))) !=
                    (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)((float)CONCAT13((byte)uStack_234,
                                                                 CONCAT12(uStack_236._1_1_,
                                                                          CONCAT11((byte)uStack_236,
                                                                                   uStack_238._1_1_)
                                                                         )) !=
                                                (float)CONCAT13(bStack_c4,
                                                                CONCAT12(bStack_c5,
                                                                         CONCAT11(bStack_c6,
                                                                                  bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_937 = SUB87(uStack_418,0);
    bStack_930 = (byte)((uint)iVar58 >> 0x18);
    auVar85._1_8_ = uStack_420;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_937;
    bStack_900 = bStack_930;
    break;
  case 0xfd42:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)((float)CONCAT13((byte)uStack_238,
                                                          CONCAT12(uStack_23a._1_1_,
                                                                   CONCAT11((byte)uStack_23a,
                                                                            uStack_23c._1_1_))) <
                                         (float)CONCAT13(bStack_c8,
                                                         CONCAT12(bStack_c9,
                                                                  CONCAT11(bStack_ca,bStack_cb)))),
                                  -(uint)((float)CONCAT13((byte)uStack_23c,
                                                          CONCAT12(uStack_240._3_1_,
                                                                   CONCAT11(uStack_240._2_1_,
                                                                            uStack_240._1_1_))) <
                                         (float)CONCAT13(bStack_cc,
                                                         CONCAT12(bStack_cd,
                                                                  CONCAT11(bStack_ce,bStack_cf)))));
    iVar58 = -(uint)((float)CONCAT13(bStack_230,
                                     CONCAT12(uStack_232._1_1_,
                                              CONCAT11((byte)uStack_232,uStack_234._1_1_))) <
                    (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)((float)CONCAT13((byte)uStack_234,
                                                                 CONCAT12(uStack_236._1_1_,
                                                                          CONCAT11((byte)uStack_236,
                                                                                   uStack_238._1_1_)
                                                                         )) <
                                                (float)CONCAT13(bStack_c4,
                                                                CONCAT12(bStack_c5,
                                                                         CONCAT11(bStack_c6,
                                                                                  bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_97f = SUB87(uStack_418,0);
    bStack_978 = (byte)((uint)iVar58 >> 0x18);
    auVar85._1_8_ = uStack_420;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_97f;
    bStack_900 = bStack_978;
    break;
  case 0xfd43:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)((float)CONCAT13(bStack_c8,
                                                          CONCAT12(bStack_c9,
                                                                   CONCAT11(bStack_ca,bStack_cb))) <
                                         (float)CONCAT13((byte)uStack_238,
                                                         CONCAT12(uStack_23a._1_1_,
                                                                  CONCAT11((byte)uStack_23a,
                                                                           uStack_23c._1_1_)))),
                                  -(uint)((float)CONCAT13(bStack_cc,
                                                          CONCAT12(bStack_cd,
                                                                   CONCAT11(bStack_ce,bStack_cf))) <
                                         (float)CONCAT13((byte)uStack_23c,
                                                         CONCAT12(uStack_240._3_1_,
                                                                  CONCAT11(uStack_240._2_1_,
                                                                           uStack_240._1_1_)))));
    iVar58 = -(uint)((float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) <
                    (float)CONCAT13(bStack_230,
                                    CONCAT12(uStack_232._1_1_,
                                             CONCAT11((byte)uStack_232,uStack_234._1_1_))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)((float)CONCAT13(bStack_c4,
                                                                 CONCAT12(bStack_c5,
                                                                          CONCAT11(bStack_c6,
                                                                                   bStack_c7))) <
                                                (float)CONCAT13((byte)uStack_234,
                                                                CONCAT12(uStack_236._1_1_,
                                                                         CONCAT11((byte)uStack_236,
                                                                                  uStack_238._1_1_))
                                                               )));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_94f = SUB87(uStack_418,0);
    bStack_948 = (byte)((uint)iVar58 >> 0x18);
    auVar85._1_8_ = uStack_420;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_94f;
    bStack_900 = bStack_948;
    break;
  case 0xfd44:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)((float)CONCAT13((byte)uStack_238,
                                                          CONCAT12(uStack_23a._1_1_,
                                                                   CONCAT11((byte)uStack_23a,
                                                                            uStack_23c._1_1_))) <=
                                         (float)CONCAT13(bStack_c8,
                                                         CONCAT12(bStack_c9,
                                                                  CONCAT11(bStack_ca,bStack_cb)))),
                                  -(uint)((float)CONCAT13((byte)uStack_23c,
                                                          CONCAT12(uStack_240._3_1_,
                                                                   CONCAT11(uStack_240._2_1_,
                                                                            uStack_240._1_1_))) <=
                                         (float)CONCAT13(bStack_cc,
                                                         CONCAT12(bStack_cd,
                                                                  CONCAT11(bStack_ce,bStack_cf)))));
    iVar58 = -(uint)((float)CONCAT13(bStack_230,
                                     CONCAT12(uStack_232._1_1_,
                                              CONCAT11((byte)uStack_232,uStack_234._1_1_))) <=
                    (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)((float)CONCAT13((byte)uStack_234,
                                                                 CONCAT12(uStack_236._1_1_,
                                                                          CONCAT11((byte)uStack_236,
                                                                                   uStack_238._1_1_)
                                                                         )) <=
                                                (float)CONCAT13(bStack_c4,
                                                                CONCAT12(bStack_c5,
                                                                         CONCAT11(bStack_c6,
                                                                                  bStack_c7)))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_997 = SUB87(uStack_418,0);
    bStack_990 = (byte)((uint)iVar58 >> 0x18);
    auVar85._1_8_ = uStack_420;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_997;
    bStack_900 = bStack_990;
    break;
  case 0xfd45:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(-(uint)((float)CONCAT13(bStack_c8,
                                                          CONCAT12(bStack_c9,
                                                                   CONCAT11(bStack_ca,bStack_cb)))
                                         <= (float)CONCAT13((byte)uStack_238,
                                                            CONCAT12(uStack_23a._1_1_,
                                                                     CONCAT11((byte)uStack_23a,
                                                                              uStack_23c._1_1_)))),
                                  -(uint)((float)CONCAT13(bStack_cc,
                                                          CONCAT12(bStack_cd,
                                                                   CONCAT11(bStack_ce,bStack_cf)))
                                         <= (float)CONCAT13((byte)uStack_23c,
                                                            CONCAT12(uStack_240._3_1_,
                                                                     CONCAT11(uStack_240._2_1_,
                                                                              uStack_240._1_1_)))));
    iVar58 = -(uint)((float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) <=
                    (float)CONCAT13(bStack_230,
                                    CONCAT12(uStack_232._1_1_,
                                             CONCAT11((byte)uStack_232,uStack_234._1_1_))));
    uStack_418 = (double)CONCAT44(iVar58,-(uint)((float)CONCAT13(bStack_c4,
                                                                 CONCAT12(bStack_c5,
                                                                          CONCAT11(bStack_c6,
                                                                                   bStack_c7))) <=
                                                (float)CONCAT13((byte)uStack_234,
                                                                CONCAT12(uStack_236._1_1_,
                                                                         CONCAT11((byte)uStack_236,
                                                                                  uStack_238._1_1_))
                                                               )));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_967 = SUB87(uStack_418,0);
    bStack_960 = (byte)((uint)iVar58 >> 0x18);
    auVar85._1_8_ = uStack_420;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_967;
    bStack_900 = bStack_960;
    break;
  case 0xfd46:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)((double)CONCAT17((byte)uStack_238,
                                                  CONCAT16(uStack_23a._1_1_,
                                                           CONCAT15((byte)uStack_23a,
                                                                    CONCAT14(uStack_23c._1_1_,
                                                                             CONCAT13((byte)
                                                  uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_))))))) ==
                                (double)CONCAT17(bStack_c8,
                                                 CONCAT16(bStack_c9,
                                                          CONCAT15(bStack_ca,
                                                                   CONCAT14(bStack_cb,
                                                                            CONCAT13(bStack_cc,
                                                                                     CONCAT12(
                                                  bStack_cd,CONCAT11(bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)((double)CONCAT17(bStack_230,
                                                  CONCAT16(uStack_232._1_1_,
                                                           CONCAT15((byte)uStack_232,
                                                                    CONCAT14(uStack_234._1_1_,
                                                                             CONCAT13((byte)
                                                  uStack_234,
                                                  CONCAT12(uStack_236._1_1_,
                                                           CONCAT11((byte)uStack_236,
                                                                    uStack_238._1_1_))))))) ==
                                (double)CONCAT17(bStack_c0,
                                                 CONCAT16(bStack_c1,
                                                          CONCAT15(bStack_c2,
                                                                   CONCAT14(bStack_c3,
                                                                            CONCAT13(bStack_c4,
                                                                                     CONCAT12(
                                                  bStack_c5,CONCAT11(bStack_c6,bStack_c7))))))));
    uStack_88f = SUB87(uStack_88,0);
    uStack_888 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar78._1_8_ = uStack_90;
    auVar78[0] = 5;
    auVar78._9_7_ = uStack_88f;
    uStack_8d0 = uStack_888;
    goto code_r0x01233b60;
  case 0xfd47:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)((double)CONCAT17((byte)uStack_238,
                                                  CONCAT16(uStack_23a._1_1_,
                                                           CONCAT15((byte)uStack_23a,
                                                                    CONCAT14(uStack_23c._1_1_,
                                                                             CONCAT13((byte)
                                                  uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_))))))) !=
                                (double)CONCAT17(bStack_c8,
                                                 CONCAT16(bStack_c9,
                                                          CONCAT15(bStack_ca,
                                                                   CONCAT14(bStack_cb,
                                                                            CONCAT13(bStack_cc,
                                                                                     CONCAT12(
                                                  bStack_cd,CONCAT11(bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)((double)CONCAT17(bStack_230,
                                                  CONCAT16(uStack_232._1_1_,
                                                           CONCAT15((byte)uStack_232,
                                                                    CONCAT14(uStack_234._1_1_,
                                                                             CONCAT13((byte)
                                                  uStack_234,
                                                  CONCAT12(uStack_236._1_1_,
                                                           CONCAT11((byte)uStack_236,
                                                                    uStack_238._1_1_))))))) !=
                                (double)CONCAT17(bStack_c0,
                                                 CONCAT16(bStack_c1,
                                                          CONCAT15(bStack_c2,
                                                                   CONCAT14(bStack_c3,
                                                                            CONCAT13(bStack_c4,
                                                                                     CONCAT12(
                                                  bStack_c5,CONCAT11(bStack_c6,bStack_c7))))))));
    uStack_8a7 = SUB87(uStack_88,0);
    uStack_8a0 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar78._1_8_ = uStack_90;
    auVar78[0] = 5;
    auVar78._9_7_ = uStack_8a7;
    uStack_8d0 = uStack_8a0;
    goto code_r0x01233b60;
  case 0xfd48:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)((double)CONCAT17((byte)uStack_238,
                                                  CONCAT16(uStack_23a._1_1_,
                                                           CONCAT15((byte)uStack_23a,
                                                                    CONCAT14(uStack_23c._1_1_,
                                                                             CONCAT13((byte)
                                                  uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_))))))) <
                                (double)CONCAT17(bStack_c8,
                                                 CONCAT16(bStack_c9,
                                                          CONCAT15(bStack_ca,
                                                                   CONCAT14(bStack_cb,
                                                                            CONCAT13(bStack_cc,
                                                                                     CONCAT12(
                                                  bStack_cd,CONCAT11(bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)((double)CONCAT17(bStack_230,
                                                  CONCAT16(uStack_232._1_1_,
                                                           CONCAT15((byte)uStack_232,
                                                                    CONCAT14(uStack_234._1_1_,
                                                                             CONCAT13((byte)
                                                  uStack_234,
                                                  CONCAT12(uStack_236._1_1_,
                                                           CONCAT11((byte)uStack_236,
                                                                    uStack_238._1_1_))))))) <
                                (double)CONCAT17(bStack_c0,
                                                 CONCAT16(bStack_c1,
                                                          CONCAT15(bStack_c2,
                                                                   CONCAT14(bStack_c3,
                                                                            CONCAT13(bStack_c4,
                                                                                     CONCAT12(
                                                  bStack_c5,CONCAT11(bStack_c6,bStack_c7))))))));
    uStack_8ef = SUB87(uStack_88,0);
    bStack_8e8 = (byte)((ulong)uStack_88 >> 0x38);
    auVar85._1_8_ = uStack_90;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_8ef;
    bStack_900 = bStack_8e8;
    break;
  case 0xfd49:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)((double)CONCAT17(bStack_c8,
                                                  CONCAT16(bStack_c9,
                                                           CONCAT15(bStack_ca,
                                                                    CONCAT14(bStack_cb,
                                                                             CONCAT13(bStack_cc,
                                                                                      CONCAT12(
                                                  bStack_cd,CONCAT11(bStack_ce,bStack_cf))))))) <
                                (double)CONCAT17((byte)uStack_238,
                                                 CONCAT16(uStack_23a._1_1_,
                                                          CONCAT15((byte)uStack_23a,
                                                                   CONCAT14(uStack_23c._1_1_,
                                                                            CONCAT13((byte)
                                                  uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_))))))));
    uStack_88 = (double)-(ulong)((double)CONCAT17(bStack_c0,
                                                  CONCAT16(bStack_c1,
                                                           CONCAT15(bStack_c2,
                                                                    CONCAT14(bStack_c3,
                                                                             CONCAT13(bStack_c4,
                                                                                      CONCAT12(
                                                  bStack_c5,CONCAT11(bStack_c6,bStack_c7))))))) <
                                (double)CONCAT17(bStack_230,
                                                 CONCAT16(uStack_232._1_1_,
                                                          CONCAT15((byte)uStack_232,
                                                                   CONCAT14(uStack_234._1_1_,
                                                                            CONCAT13((byte)
                                                  uStack_234,
                                                  CONCAT12(uStack_236._1_1_,
                                                           CONCAT11((byte)uStack_236,
                                                                    uStack_238._1_1_))))))));
    uStack_8bf = SUB87(uStack_88,0);
    uStack_8b8 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar78._1_8_ = uStack_90;
    auVar78[0] = 5;
    auVar78._9_7_ = uStack_8bf;
    uStack_8d0 = uStack_8b8;
    goto code_r0x01233b60;
  case 0xfd4a:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)((double)CONCAT17((byte)uStack_238,
                                                  CONCAT16(uStack_23a._1_1_,
                                                           CONCAT15((byte)uStack_23a,
                                                                    CONCAT14(uStack_23c._1_1_,
                                                                             CONCAT13((byte)
                                                  uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_))))))) <=
                                (double)CONCAT17(bStack_c8,
                                                 CONCAT16(bStack_c9,
                                                          CONCAT15(bStack_ca,
                                                                   CONCAT14(bStack_cb,
                                                                            CONCAT13(bStack_cc,
                                                                                     CONCAT12(
                                                  bStack_cd,CONCAT11(bStack_ce,bStack_cf))))))));
    uStack_88 = (double)-(ulong)((double)CONCAT17(bStack_230,
                                                  CONCAT16(uStack_232._1_1_,
                                                           CONCAT15((byte)uStack_232,
                                                                    CONCAT14(uStack_234._1_1_,
                                                                             CONCAT13((byte)
                                                  uStack_234,
                                                  CONCAT12(uStack_236._1_1_,
                                                           CONCAT11((byte)uStack_236,
                                                                    uStack_238._1_1_))))))) <=
                                (double)CONCAT17(bStack_c0,
                                                 CONCAT16(bStack_c1,
                                                          CONCAT15(bStack_c2,
                                                                   CONCAT14(bStack_c3,
                                                                            CONCAT13(bStack_c4,
                                                                                     CONCAT12(
                                                  bStack_c5,CONCAT11(bStack_c6,bStack_c7))))))));
    uStack_907 = SUB87(uStack_88,0);
    bStack_900 = (byte)((ulong)uStack_88 >> 0x38);
    auVar85._1_8_ = uStack_90;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_907;
    break;
  case 0xfd4b:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-(ulong)((double)CONCAT17(bStack_c8,
                                                  CONCAT16(bStack_c9,
                                                           CONCAT15(bStack_ca,
                                                                    CONCAT14(bStack_cb,
                                                                             CONCAT13(bStack_cc,
                                                                                      CONCAT12(
                                                  bStack_cd,CONCAT11(bStack_ce,bStack_cf))))))) <=
                                (double)CONCAT17((byte)uStack_238,
                                                 CONCAT16(uStack_23a._1_1_,
                                                          CONCAT15((byte)uStack_23a,
                                                                   CONCAT14(uStack_23c._1_1_,
                                                                            CONCAT13((byte)
                                                  uStack_23c,
                                                  CONCAT12(uStack_240._3_1_,
                                                           CONCAT11(uStack_240._2_1_,
                                                                    uStack_240._1_1_))))))));
    uStack_88 = (double)-(ulong)((double)CONCAT17(bStack_c0,
                                                  CONCAT16(bStack_c1,
                                                           CONCAT15(bStack_c2,
                                                                    CONCAT14(bStack_c3,
                                                                             CONCAT13(bStack_c4,
                                                                                      CONCAT12(
                                                  bStack_c5,CONCAT11(bStack_c6,bStack_c7))))))) <=
                                (double)CONCAT17(bStack_230,
                                                 CONCAT16(uStack_232._1_1_,
                                                          CONCAT15((byte)uStack_232,
                                                                   CONCAT14(uStack_234._1_1_,
                                                                            CONCAT13((byte)
                                                  uStack_234,
                                                  CONCAT12(uStack_236._1_1_,
                                                           CONCAT11((byte)uStack_236,
                                                                    uStack_238._1_1_))))))));
    uStack_8d7 = SUB87(uStack_88,0);
    uStack_8d0 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar78._1_8_ = uStack_90;
    auVar78[0] = 5;
    auVar78._9_7_ = uStack_8d7;
code_r0x01233b60:
    fStack_a7 = auVar78._9_4_;
    uStack_a3._0_3_ = auVar78._13_3_;
    uStack_b0 = auVar78[0];
    fStack_af = auVar78._1_4_;
    uStack_ab = auVar78._5_4_;
    uStack_a3 = (float)CONCAT13(uStack_8d0,(uint3)uStack_a3);
code_r0x0123e65c:
    StackValue::StackValue
              ((StackValue *)&uStack_90,&uStack_b0,this,
               (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
    pdVar62 = *(double **)(this + 0x28);
    *(long *)(this + 0x28) = (long)pdVar62 + 0x11;
    goto code_r0x0123e450;
  case 0xfd4c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar6 = ~CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar55 = ~CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    uVar7 = ~CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar8 = ~CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_23c._0_1_ = (byte)uVar55;
    uStack_23c._1_1_ = (byte)(uVar55 >> 8);
    uStack_23a._0_1_ = (byte)(uVar55 >> 0x10);
    uStack_23a._1_1_ = (byte)(uVar55 >> 0x18);
    uStack_240._0_1_ = (byte)uVar6;
    uStack_240._1_1_ = (byte)(uVar6 >> 8);
    uStack_240._2_1_ = (byte)(uVar6 >> 0x10);
    uStack_240._3_1_ = (byte)(uVar6 >> 0x18);
    uStack_234._0_1_ = (byte)uVar8;
    uStack_234._1_1_ = (byte)(uVar8 >> 8);
    uStack_232._0_1_ = (byte)(uVar8 >> 0x10);
    uStack_232._1_1_ = (byte)(uVar8 >> 0x18);
    uStack_238._0_1_ = (byte)uVar7;
    uStack_238._1_1_ = (byte)(uVar7 >> 8);
    uStack_236._0_1_ = (byte)(uVar7 >> 0x10);
    uStack_236._1_1_ = (byte)(uVar7 >> 0x18);
    uVar26 = CONCAT16((byte)uStack_232,CONCAT15(uStack_234._1_1_,CONCAT14((byte)uStack_234,uVar7)));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,CONCAT14((byte)uStack_23c,uVar6)
                                                  )));
    auVar89._1_8_ = uStack_90;
    auVar89[0] = 5;
    auVar89._9_7_ = uVar26;
    bVar123 = uStack_232._1_1_;
    goto code_r0x0123aed4;
  case 0xfd4d:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_4df = (double)(CONCAT17(bStack_c8,
                                   CONCAT16(bStack_c9,
                                            CONCAT15(bStack_ca,
                                                     CONCAT14(bStack_cb,
                                                              CONCAT13(bStack_cc,
                                                                       CONCAT12(bStack_cd,
                                                                                CONCAT11(bStack_ce,
                                                                                         bStack_cf))
                                                                      ))))) &
                         CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_))))))));
    uStack_418 = (double)(CONCAT17(bStack_c0,
                                   CONCAT16(bStack_c1,
                                            CONCAT15(bStack_c2,
                                                     CONCAT14(bStack_c3,
                                                              CONCAT13(bStack_c4,
                                                                       CONCAT12(bStack_c5,
                                                                                CONCAT11(bStack_c6,
                                                                                         bStack_c7))
                                                                      ))))) &
                         CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))));
    uStack_9c0 = (undefined1)((ulong)uStack_418 >> 0x38);
    uStack_4e0 = 5;
    uStack_4d7 = SUB87(uStack_418,0);
    auVar84._1_8_ = dStack_4df;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_4d7;
    uStack_4d0 = uStack_9c0;
    uStack_420 = dStack_4df;
    uStack_90 = dStack_4df;
    uStack_88 = uStack_418;
    goto code_r0x012391d0;
  case 0xfd4e:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_4f7 = (double)(CONCAT17(bStack_c8,
                                   CONCAT16(bStack_c9,
                                            CONCAT15(bStack_ca,
                                                     CONCAT14(bStack_cb,
                                                              CONCAT13(bStack_cc,
                                                                       CONCAT12(bStack_cd,
                                                                                CONCAT11(bStack_ce,
                                                                                         bStack_cf))
                                                                      ))))) |
                         CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_))))))));
    uStack_418 = (double)(CONCAT17(bStack_c0,
                                   CONCAT16(bStack_c1,
                                            CONCAT15(bStack_c2,
                                                     CONCAT14(bStack_c3,
                                                              CONCAT13(bStack_c4,
                                                                       CONCAT12(bStack_c5,
                                                                                CONCAT11(bStack_c6,
                                                                                         bStack_c7))
                                                                      ))))) |
                         CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))));
    uStack_9c0 = (undefined1)((ulong)uStack_418 >> 0x38);
    uStack_4f8 = 5;
    uStack_4ef = SUB87(uStack_418,0);
    auVar84._1_8_ = dStack_4f7;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_4ef;
    uStack_4e8 = uStack_9c0;
    uStack_420 = dStack_4f7;
    uStack_90 = dStack_4f7;
    uStack_88 = uStack_418;
    goto code_r0x012391d0;
  case 0xfd4f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_50f = (double)(CONCAT17(bStack_c8,
                                   CONCAT16(bStack_c9,
                                            CONCAT15(bStack_ca,
                                                     CONCAT14(bStack_cb,
                                                              CONCAT13(bStack_cc,
                                                                       CONCAT12(bStack_cd,
                                                                                CONCAT11(bStack_ce,
                                                                                         bStack_cf))
                                                                      ))))) ^
                         CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_))))))));
    uStack_418 = (double)(CONCAT17(bStack_c0,
                                   CONCAT16(bStack_c1,
                                            CONCAT15(bStack_c2,
                                                     CONCAT14(bStack_c3,
                                                              CONCAT13(bStack_c4,
                                                                       CONCAT12(bStack_c5,
                                                                                CONCAT11(bStack_c6,
                                                                                         bStack_c7))
                                                                      ))))) ^
                         CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))));
    uStack_9c0 = (undefined1)((ulong)uStack_418 >> 0x38);
    uStack_510 = 5;
    uStack_507 = SUB87(uStack_418,0);
    auVar84._1_8_ = dStack_50f;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_507;
    uStack_500 = uStack_9c0;
    uStack_420 = dStack_50f;
    uStack_90 = dStack_50f;
    uStack_88 = uStack_418;
    goto code_r0x012391d0;
  case 0xfd50:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    bStack_c8 = SUB41(fStack_a7,0);
    bStack_c7 = (byte)((uint)fStack_a7 >> 8);
    bStack_c6 = (byte)((uint)fStack_a7 >> 0x10);
    bStack_c5 = (byte)((uint)fStack_a7 >> 0x18);
    bStack_c4 = SUB41(uStack_a3,0);
    bStack_c3 = (byte)((uint)uStack_a3 >> 8);
    bStack_c2 = (byte)((uint)uStack_a3 >> 0x10);
    bStack_c1 = (byte)((uint)uStack_a3 >> 0x18);
    bStack_d0 = SUB41(fStack_af,0);
    bStack_cf = (byte)((uint)fStack_af >> 8);
    bStack_ce = (byte)((uint)fStack_af >> 0x10);
    bStack_cd = (byte)((uint)fStack_af >> 0x18);
    bStack_cc = SUB41(uStack_ab,0);
    bStack_cb = (byte)((uint)uStack_ab >> 8);
    bStack_ca = (byte)((uint)uStack_ab >> 0x10);
    bStack_c9 = (byte)((uint)uStack_ab >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    fVar105 = uStack_a3;
    fVar118 = fStack_a7;
    fVar112 = uStack_ab;
    fVar75 = fStack_af;
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_238._0_1_ = SUB41(fStack_a7,0);
    uStack_238._1_1_ = (byte)((uint)fStack_a7 >> 8);
    uStack_236._0_1_ = (byte)((uint)fStack_a7 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)fStack_a7 >> 0x18);
    uStack_234._0_1_ = SUB41(uStack_a3,0);
    uStack_234._1_1_ = (byte)((uint)uStack_a3 >> 8);
    uStack_232._0_1_ = (byte)((uint)uStack_a3 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)uStack_a3 >> 0x18);
    uStack_240._0_1_ = SUB41(fStack_af,0);
    uStack_240._1_1_ = (byte)((uint)fStack_af >> 8);
    uStack_240._2_1_ = (byte)((uint)fStack_af >> 0x10);
    uStack_240._3_1_ = (byte)((uint)fStack_af >> 0x18);
    uStack_23c._0_1_ = SUB41(uStack_ab,0);
    uStack_23c._1_1_ = (byte)((uint)uStack_ab >> 8);
    uStack_23a._0_1_ = (byte)((uint)uStack_ab >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)uStack_ab >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
      fVar112 = (float)CONCAT13(uStack_23a._1_1_,
                                CONCAT12((byte)uStack_23a,
                                         CONCAT11(uStack_23c._1_1_,(byte)uStack_23c)));
      fVar75 = (float)CONCAT13(uStack_240._3_1_,
                               CONCAT12(uStack_240._2_1_,CONCAT11(uStack_240._1_1_,(byte)uStack_240)
                                       ));
      fVar105 = (float)CONCAT13(uStack_232._1_1_,
                                CONCAT12((byte)uStack_232,
                                         CONCAT11(uStack_234._1_1_,(byte)uStack_234)));
      fVar118 = (float)CONCAT13(uStack_236._1_1_,
                                CONCAT12((byte)uStack_236,
                                         CONCAT11(uStack_238._1_1_,(byte)uStack_238)));
    }
    uVar55 = CONCAT13(bStack_cd,CONCAT12(bStack_ce,CONCAT11(bStack_cf,bStack_d0)));
    uVar7 = CONCAT13(bStack_c9,CONCAT12(bStack_ca,CONCAT11(bStack_cb,bStack_cc)));
    uVar8 = CONCAT13(bStack_c5,CONCAT12(bStack_c6,CONCAT11(bStack_c7,bStack_c8)));
    uVar6 = CONCAT13(bStack_c1,CONCAT12(bStack_c2,CONCAT11(bStack_c3,bStack_c4)));
    uVar6 = (uint)uStack_a3 & uVar6 | (uint)fVar105 & (uVar6 ^ 0xffffffff);
    uStack_420 = (double)CONCAT44((uint)uStack_ab & uVar7 | (uint)fVar112 & (uVar7 ^ 0xffffffff),
                                  (uint)fStack_af & uVar55 | (uint)fVar75 & (uVar55 ^ 0xffffffff));
    uStack_418 = (double)CONCAT44(uVar6,(uint)fStack_a7 & uVar8 |
                                        (uint)fVar118 & (uVar8 ^ 0xffffffff));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_10cf = SUB87(uStack_418,0);
    bStack_10c8 = (byte)(uVar6 >> 0x18);
    auVar97._1_8_ = uStack_420;
    auVar97[0] = 5;
    auVar97._9_7_ = uStack_10cf;
    bStack_1218 = bStack_10c8;
    goto code_r0x0123d8fc;
  case 0xfd51:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    sVar100 = CONCAT11(-bStack_cc,-bStack_cd);
    sVar101 = CONCAT11(-bStack_c4,-bStack_c5);
    sVar102 = CONCAT11(-bStack_ca,-bStack_cb);
    sVar103 = CONCAT11(-bStack_c8,-bStack_c9);
    sVar119 = CONCAT11(-bStack_c2,-bStack_c3);
    uStack_232._1_1_ = -bStack_c0;
    sVar120 = CONCAT11(uStack_232._1_1_,-bStack_c1);
    uStack_240._0_2_ = CONCAT11(-bStack_ce,-bStack_cf);
    uStack_90 = (double)CONCAT17(-bStack_c8,
                                 CONCAT16(-bStack_c9,
                                          CONCAT15(-bStack_ca,
                                                   CONCAT14(-bStack_cb,
                                                            CONCAT13(-bStack_cc,
                                                                     CONCAT12(-bStack_cd,
                                                                              (short)uStack_240)))))
                                );
    uStack_238 = CONCAT11(-bStack_c6,-bStack_c7);
    uVar26 = CONCAT16(-bStack_c1,
                      CONCAT15(-bStack_c2,
                               CONCAT14(-bStack_c3,
                                        CONCAT13(-bStack_c4,CONCAT12(-bStack_c5,uStack_238)))));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    auVar87._1_8_ = uStack_90;
    auVar87[0] = 5;
    auVar87._9_7_ = uVar26;
    goto code_r0x0123a118;
  case 0xfd52:
  case 0xfd63:
  case 0xfd74:
  case 0xfd85:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    auVar110 = ZEXT216(CONCAT11(((uStack_ab != 0.0 || fStack_af != 0.0) || fStack_a7 != 0.0) ||
                                uStack_a3 != 0.0,1));
    bStack_f30 = 0;
    goto code_r0x0123a730;
  case 0xfd53:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    auVar110 = ZEXT216(CONCAT11(((((((((((((((((uint)fStack_af & 0xff) != 0 &&
                                             ((uint)fStack_af & 0xff00) != 0) &&
                                            ((uint)fStack_af & 0xff0000) != 0) &&
                                           ((uint)fStack_af & 0xff000000) != 0) &&
                                          ((uint)uStack_ab & 0xff) != 0) &&
                                         ((uint)uStack_ab & 0xff00) != 0) &&
                                        ((uint)uStack_ab & 0xff0000) != 0) &&
                                       (uint)uStack_ab >> 0x18 != 0) &&
                                      ((uint)fStack_a7 & 0xff) != 0) &&
                                     ((uint)fStack_a7 & 0xff00) != 0) &&
                                    ((uint)fStack_a7 & 0xff0000) != 0) &&
                                   ((uint)fStack_a7 & 0xff000000) != 0) &&
                                  ((uint)uStack_a3 & 0xff) != 0) && ((uint)uStack_a3 & 0xff00) != 0)
                                && ((uint)uStack_a3 & 0xff0000) != 0) &&
                                (uint)uStack_a3 >> 0x18 != 0,1));
    bStack_f30 = 0;
    goto code_r0x0123a730;
  case 0xfd54:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar31 = CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7));
    uVar38 = CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,CONCAT13(bStack_c4,uVar31))));
    uVar27 = CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf));
    uVar26 = CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,CONCAT13(bStack_cc,uVar27))));
    uVar24 = CONCAT17(bStack_c8,uVar26);
    uVar6 = (uint)fStack_af & 7;
    uStack_420._0_2_ =
         CONCAT11((char)(((uVar27 & 0xff00) >> 8) << (ulong)uVar6),
                  (char)((uVar27 & 0xff) << (ulong)uVar6));
    uStack_420._0_3_ = CONCAT12(bStack_cd << (ulong)uVar6,(undefined2)uStack_420);
    uStack_420._0_4_ =
         (float)CONCAT13((char)(((uint)((uint7)uVar26 >> 0x18) & 0xff) << (ulong)uVar6),
                         (undefined3)uStack_420);
    uVar55 = (uint)((ulong)uVar24 >> 0x20);
    uStack_420._0_5_ = CONCAT14((char)((uVar55 & 0xff) << (ulong)uVar6),(float)uStack_420);
    uStack_240._0_1_ = bStack_cf;
    uStack_240._1_1_ = bStack_ce;
    uStack_240._2_1_ = bStack_cd;
    uStack_240._3_1_ = bStack_cc;
    uStack_23c._0_1_ = bStack_cb;
    uStack_23c._1_1_ = bStack_ca;
    uStack_23a._0_1_ = bStack_c9;
    uStack_23a._1_1_ = bStack_c8;
    uStack_420._0_6_ = CONCAT15((char)((uVar55 >> 8 & 0xff) << (ulong)uVar6),(undefined5)uStack_420)
    ;
    uStack_420._0_7_ =
         CONCAT16((char)(((ushort)((ulong)uVar24 >> 0x30) & 0xff) << (ulong)uVar6),(int6)uStack_420)
    ;
    uStack_420 = (double)CONCAT17(bStack_c8 << (ulong)uVar6,(undefined7)uStack_420);
    uStack_418._0_2_ =
         CONCAT11((char)(((uVar31 & 0xff00) >> 8) << (ulong)uVar6),
                  (char)((uVar31 & 0xff) << (ulong)uVar6));
    uStack_238._0_1_ = bStack_c7;
    uStack_238._1_1_ = bStack_c6;
    uStack_236._0_1_ = bStack_c5;
    uStack_236._1_1_ = bStack_c4;
    uStack_234._0_1_ = bStack_c3;
    uStack_234._1_1_ = bStack_c2;
    uStack_232._0_1_ = bStack_c1;
    uStack_232._1_1_ = bStack_c0;
    uStack_418._0_3_ = CONCAT12(bStack_c5 << (ulong)uVar6,(undefined2)uStack_418);
    uStack_418._0_4_ =
         (float)CONCAT13((char)(((uint)((uint7)uVar38 >> 0x18) & 0xff) << (ulong)uVar6),
                         (undefined3)uStack_418);
    uStack_418._0_5_ =
         CONCAT14((char)(((uint)(CONCAT17(bStack_c0,uVar38) >> 0x20) & 0xff) << (ulong)uVar6),
                  (float)uStack_418);
    bStack_1218 = bStack_c0 << (ulong)uVar6;
    uStack_418._0_6_ = CONCAT15(bStack_c2 << (ulong)uVar6,(undefined5)uStack_418);
    uStack_418._0_7_ = CONCAT16(bStack_c1 << (ulong)uVar6,(undefined6)uStack_418);
    uStack_418 = (double)CONCAT17(bStack_1218,(undefined7)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    auVar97._1_8_ = uStack_420;
    auVar97[0] = 5;
    auVar97._9_7_ = (undefined7)uStack_418;
    goto code_r0x0123d8fc;
  case 0xfd55:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar59 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    iVar58 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar6 = (uint)fStack_af & 7;
    uStack_240._0_1_ = bStack_cf;
    uStack_420._0_2_ =
         CONCAT11((char)(((iVar58 << 0x10) >> 0x18) >> uVar6),(char)((int)(char)bStack_cf >> uVar6))
    ;
    uStack_420._0_3_ = CONCAT12((char)(((iVar58 << 8) >> 0x18) >> uVar6),(undefined2)uStack_420);
    uStack_420._0_4_ = (float)CONCAT13((char)((int)(char)bStack_cc >> uVar6),(undefined3)uStack_420)
    ;
    uStack_238._0_1_ = bStack_c7;
    uStack_418._0_2_ =
         CONCAT11((char)(((iVar59 << 0x10) >> 0x18) >> uVar6),(char)((int)(char)bStack_c7 >> uVar6))
    ;
    uStack_418._0_3_ = CONCAT12((char)(((iVar59 << 8) >> 0x18) >> uVar6),(undefined2)uStack_418);
    uStack_418._0_4_ = (float)CONCAT13((char)((int)(char)bStack_c4 >> uVar6),(undefined3)uStack_418)
    ;
    uStack_23c._0_1_ = bStack_cb;
    uStack_420._0_5_ = CONCAT14((char)((int)(char)bStack_cb >> uVar6),(float)uStack_420);
    uStack_23c._1_1_ = bStack_ca;
    uStack_240._1_1_ = bStack_ce;
    uStack_240._2_1_ = bStack_cd;
    uStack_240._3_1_ = bStack_cc;
    uStack_23a._0_1_ = bStack_c9;
    uStack_23a._1_1_ = bStack_c8;
    uStack_420._0_6_ = CONCAT15((char)((int)(char)bStack_ca >> uVar6),(undefined5)uStack_420);
    uStack_238._1_1_ = bStack_c6;
    uStack_236._0_1_ = bStack_c5;
    uStack_236._1_1_ = bStack_c4;
    uStack_234._0_1_ = bStack_c3;
    uStack_234._1_1_ = bStack_c2;
    uStack_232._0_1_ = bStack_c1;
    uStack_232._1_1_ = bStack_c0;
    uStack_420._0_7_ = CONCAT16((char)((int)(char)bStack_c9 >> uVar6),(int6)uStack_420);
    uStack_420 = (double)CONCAT17((char)((int)(char)bStack_c8 >> uVar6),(undefined7)uStack_420);
    uStack_418._0_5_ = CONCAT14((char)((int)(char)bStack_c3 >> uVar6),(float)uStack_418);
    uStack_418._0_6_ = CONCAT15((char)((int)(char)bStack_c2 >> uVar6),(undefined5)uStack_418);
    uStack_418._0_7_ = CONCAT16((char)((int)(char)bStack_c1 >> uVar6),(undefined6)uStack_418);
    bStack_1218 = (byte)((int)(char)bStack_c0 >> uVar6);
    uStack_418 = (double)CONCAT17(bStack_1218,(undefined7)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    auVar97._1_8_ = uStack_420;
    auVar97[0] = 5;
    auVar97._9_7_ = (undefined7)uStack_418;
    goto code_r0x0123d8fc;
  case 0xfd56:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar31 = CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7));
    uVar38 = CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,CONCAT13(bStack_c4,uVar31))));
    uVar27 = CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf));
    uVar26 = CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,CONCAT13(bStack_cc,uVar27))));
    uVar24 = CONCAT17(bStack_c8,uVar26);
    uVar6 = (uint)fStack_af & 7;
    uStack_420._0_2_ =
         CONCAT11((char)(((uVar27 & 0xff00) >> 8) >> (ulong)uVar6),
                  (char)((uVar27 & 0xff) >> (ulong)uVar6));
    uStack_420._0_3_ = CONCAT12(bStack_cd >> (ulong)uVar6,(undefined2)uStack_420);
    uStack_420._0_4_ =
         (float)CONCAT13((char)(((uint)((uint7)uVar26 >> 0x18) & 0xff) >> (ulong)uVar6),
                         (undefined3)uStack_420);
    uVar55 = (uint)((ulong)uVar24 >> 0x20);
    uStack_420._0_5_ = CONCAT14((char)((uVar55 & 0xff) >> (ulong)uVar6),(float)uStack_420);
    uStack_240._0_1_ = bStack_cf;
    uStack_240._1_1_ = bStack_ce;
    uStack_240._2_1_ = bStack_cd;
    uStack_240._3_1_ = bStack_cc;
    uStack_23c._0_1_ = bStack_cb;
    uStack_23c._1_1_ = bStack_ca;
    uStack_23a._0_1_ = bStack_c9;
    uStack_23a._1_1_ = bStack_c8;
    uStack_420._0_6_ = CONCAT15((char)((uVar55 >> 8 & 0xff) >> (ulong)uVar6),(undefined5)uStack_420)
    ;
    uStack_420._0_7_ =
         CONCAT16((char)(((ushort)((ulong)uVar24 >> 0x30) & 0xff) >> (ulong)uVar6),(int6)uStack_420)
    ;
    uStack_420 = (double)CONCAT17(bStack_c8 >> (ulong)uVar6,(undefined7)uStack_420);
    uStack_418._0_2_ =
         CONCAT11((char)(((uVar31 & 0xff00) >> 8) >> (ulong)uVar6),
                  (char)((uVar31 & 0xff) >> (ulong)uVar6));
    uStack_238._0_1_ = bStack_c7;
    uStack_238._1_1_ = bStack_c6;
    uStack_236._0_1_ = bStack_c5;
    uStack_236._1_1_ = bStack_c4;
    uStack_234._0_1_ = bStack_c3;
    uStack_234._1_1_ = bStack_c2;
    uStack_232._0_1_ = bStack_c1;
    uStack_232._1_1_ = bStack_c0;
    uStack_418._0_3_ = CONCAT12(bStack_c5 >> (ulong)uVar6,(undefined2)uStack_418);
    uStack_418._0_4_ =
         (float)CONCAT13((char)(((uint)((uint7)uVar38 >> 0x18) & 0xff) >> (ulong)uVar6),
                         (undefined3)uStack_418);
    uStack_418._0_5_ =
         CONCAT14((char)(((uint)(CONCAT17(bStack_c0,uVar38) >> 0x20) & 0xff) >> (ulong)uVar6),
                  (float)uStack_418);
    bStack_1218 = bStack_c0 >> (ulong)uVar6;
    uStack_418._0_6_ = CONCAT15(bStack_c2 >> (ulong)uVar6,(undefined5)uStack_418);
    uStack_418._0_7_ = CONCAT16(bStack_c1 >> (ulong)uVar6,(undefined6)uStack_418);
    uStack_418 = (double)CONCAT17(bStack_1218,(undefined7)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    auVar97._1_8_ = uStack_420;
    auVar97[0] = 5;
    auVar97._9_7_ = (undefined7)uStack_418;
    goto code_r0x0123d8fc;
  case 0xfd57:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    abStack_640[0] = bStack_cf + uStack_240._1_1_;
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[4] = bStack_cb + uStack_23c._1_1_;
    abStack_640[5] = bStack_ca + (byte)uStack_23a;
    abStack_640[6] = bStack_c9 + uStack_23a._1_1_;
    abStack_640[1] = bStack_ce + uStack_240._2_1_;
    abStack_640[2] = bStack_cd + uStack_240._3_1_;
    abStack_640[3] = bStack_cc + (byte)uStack_23c;
    abStack_640[7] = bStack_c8 + (byte)uStack_238;
    abStack_640[8] = bStack_c7 + uStack_238._1_1_;
    abStack_640[9] = bStack_c6 + (byte)uStack_236;
    abStack_640[10] = uStack_236._1_1_ + bStack_c5;
    abStack_640[0xb] = (byte)uStack_234 + bStack_c4;
    abStack_640[0xc] = bStack_c3 + uStack_234._1_1_;
    abStack_640[0xd] = bStack_c2 + (byte)uStack_232;
    abStack_640[0xe] = bStack_c1 + uStack_232._1_1_;
    bStack_648 = bStack_c0 + bStack_230;
    dStack_657 = (double)CONCAT17(abStack_640[7],
                                  CONCAT16(abStack_640[6],
                                           CONCAT15(abStack_640[5],
                                                    CONCAT14(abStack_640[4],
                                                             CONCAT13(abStack_640[3],
                                                                      CONCAT12(abStack_640[2],
                                                                               CONCAT11(abStack_640
                                                                                        [1],
                                                  abStack_640[0])))))));
    uStack_64f = CONCAT16(abStack_640[0xe],
                          CONCAT15(abStack_640[0xd],
                                   CONCAT14(abStack_640[0xc],
                                            CONCAT13(abStack_640[0xb],
                                                     CONCAT12(abStack_640[10],
                                                              CONCAT11(abStack_640[9],abStack_640[8]
                                                                      ))))));
    uStack_88 = (double)CONCAT17(bStack_648,uStack_64f);
    uStack_658 = 5;
    auVar86._1_8_ = dStack_657;
    auVar86[0] = 5;
    auVar86._9_7_ = uStack_64f;
    abStack_640[0xf] = bStack_648;
    uStack_90 = dStack_657;
    goto code_r0x01239a3c;
  case 0xfd58:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    uVar27 = CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,CONCAT13(bStack_cc,uVar27))))
                                 );
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    sVar119 = (short)(char)uStack_232._1_1_;
    sVar120 = (short)(char)bStack_230;
    bVar123 = -('\0' < (char)uStack_240._1_1_) & -('\0' < (char)bStack_cf);
    bVar124 = -('\0' < (char)uStack_240._2_1_) & -('\0' < (char)bStack_ce);
    bVar125 = -('\0' < (char)uStack_240._3_1_) & -('\0' < (char)bStack_cd);
    bVar126 = -('\0' < (char)(byte)uStack_23c) & -('\0' < (char)bStack_cc);
    bVar127 = -('\0' < (char)uStack_23c._1_1_) & -('\0' < (char)bStack_cb);
    bVar128 = -('\0' < (char)(byte)uStack_23a) & -('\0' < (char)bStack_ca);
    bVar129 = -('\0' < (char)uStack_23a._1_1_) & -('\0' < (char)bStack_c9);
    bVar130 = -('\0' < (char)(byte)uStack_238) & -('\0' < (char)bStack_c8);
    bVar131 = -('\0' < (char)uStack_238._1_1_) & -('\0' < (char)bStack_c7);
    bVar132 = -('\0' < (char)(byte)uStack_236) & -('\0' < (char)bStack_c6);
    bVar133 = -('\0' < (char)uStack_236._1_1_) & -('\0' < (char)bStack_c5);
    bVar134 = -('\0' < (char)(byte)uStack_234) & -('\0' < (char)bStack_c4);
    bVar135 = -('\0' < (char)uStack_234._1_1_) & -('\0' < (char)bStack_c3);
    bVar136 = -('\0' < (char)(byte)uStack_232) & -('\0' < (char)bStack_c2);
    bVar137 = -('\0' < (char)uStack_232._1_1_) & -('\0' < (char)bStack_c1);
    bVar138 = -('\0' < (char)bStack_230) & -('\0' < (char)bStack_c0);
    uVar74 = CONCAT13((char)bStack_c2 >> 7,CONCAT12(bStack_c2,(short)(char)bStack_c3));
    uVar12 = CONCAT15((char)bStack_c1 >> 7,CONCAT14(bStack_c1,uVar74));
    sVar100 = (short)(char)uStack_23c._1_1_;
    sVar101 = (short)(char)(byte)uStack_23a;
    sVar102 = (short)(char)uStack_23a._1_1_;
    sVar103 = (short)(char)(byte)uStack_238;
    uVar6 = (uint)CONCAT11(bVar126,bVar125) << 0x10 ^ 0x1010000;
    uVar55 = (uint)CONCAT11(bVar134,bVar133) << 0x10 ^ 0x1010000;
    abStack_640[0] =
         bStack_cf + uStack_240._1_1_ ^
         (bStack_cf + uStack_240._1_1_ ^ 0x7f) &
         -((int)(0x7f - (uVar27 & 0xff)) < (int)(short)(char)uStack_240._1_1_) & bVar123;
    abStack_640[1] =
         bStack_ce + uStack_240._2_1_ ^
         (bStack_ce + uStack_240._2_1_ ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_ce) < (int)(short)(char)uStack_240._2_1_) & bVar124;
    abStack_640[2] =
         bStack_cd + uStack_240._3_1_ ^
         (bStack_cd + uStack_240._3_1_ ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_cd) < (int)(short)(char)uStack_240._3_1_) & bVar125;
    abStack_640[3] =
         bStack_cc + (byte)uStack_23c ^
         (bStack_cc + (byte)uStack_23c ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_cc) < (int)(short)(char)(byte)uStack_23c) & bVar126;
    abStack_640[4] =
         bStack_cb + uStack_23c._1_1_ ^
         (bStack_cb + uStack_23c._1_1_ ^ 0x7f) &
         -((int)(0x7f - (CONCAT12(bStack_ca,(ushort)bStack_cb) & 0xffff)) <
          CONCAT13(sVar100 >> 0xf,(int3)sVar100)) & bVar127;
    abStack_640[5] =
         bStack_ca + (byte)uStack_23a ^
         (bStack_ca + (byte)uStack_23a ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_ca) < CONCAT13(sVar101 >> 0xf,(int3)sVar101)) & bVar128;
    abStack_640[6] =
         bStack_c9 + uStack_23a._1_1_ ^
         (bStack_c9 + uStack_23a._1_1_ ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_c9) < CONCAT13(sVar102 >> 0xf,(int3)sVar102)) & bVar129;
    abStack_640[7] =
         bStack_c8 + (byte)uStack_238 ^
         (bStack_c8 + (byte)uStack_238 ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_c8) < CONCAT13(sVar103 >> 0xf,(int3)sVar103)) & bVar130;
    abStack_640[8] =
         bStack_c7 + uStack_238._1_1_ ^
         (bStack_c7 + uStack_238._1_1_ ^ 0x7f) &
         -((int)(0x7f - (CONCAT12(bStack_c6,(ushort)bStack_c7) & 0xffff)) <
          (int)(short)(char)uStack_238._1_1_) & bVar131;
    abStack_640[9] =
         bStack_c6 + (byte)uStack_236 ^
         (bStack_c6 + (byte)uStack_236 ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_c6) < (int)(short)(char)(byte)uStack_236) & bVar132;
    abStack_640[10] =
         bStack_c5 + uStack_236._1_1_ ^
         (bStack_c5 + uStack_236._1_1_ ^ 0x7f) &
         -((int)(0x7f - (CONCAT12(bStack_c4,(ushort)bStack_c5) & 0xffff)) <
          (int)(short)(char)uStack_236._1_1_) & bVar133;
    abStack_640[0xb] =
         bStack_c4 + (byte)uStack_234 ^
         (bStack_c4 + (byte)uStack_234 ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_c4) < (int)(short)(char)(byte)uStack_234) & bVar134;
    abStack_640[0xc] =
         bStack_c3 + uStack_234._1_1_ ^
         (bStack_c3 + uStack_234._1_1_ ^ 0x7f) &
         -((int)(0x7f - (CONCAT12(bStack_c2,(ushort)bStack_c3) & 0xffff)) <
          (int)(short)(char)uStack_234._1_1_) & bVar135;
    abStack_640[0xd] =
         bStack_c2 + (byte)uStack_232 ^
         (bStack_c2 + (byte)uStack_232 ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_c2) < (int)(short)(char)(byte)uStack_232) & bVar136;
    abStack_640[0xe] =
         bStack_c1 + uStack_232._1_1_ ^
         (bStack_c1 + uStack_232._1_1_ ^ 0x7f) &
         -((int)(0x7f - (uint)bStack_c1) < CONCAT13(sVar119 >> 0xf,(int3)sVar119)) & bVar137;
    bStack_900 = bStack_c0 + bStack_230 ^
                 (bStack_c0 + bStack_230 ^ 0x7f) &
                 -((int)(0x7f - (uint)bStack_c0) < CONCAT13(sVar120 >> 0xf,(int3)sVar120)) & bVar138
    ;
    abStack_640[0] =
         abStack_640[0] ^
         (abStack_640[0] ^ 0x80) &
         (char)((-((int)(short)(char)uStack_240._1_1_ < -0x80 - (short)(char)bStack_cf) &
                -((char)(bStack_cf & uStack_240._1_1_) < '\0') & (bVar123 ^ 1)) << 7) >> 7;
    abStack_640[1] =
         abStack_640[1] ^
         (abStack_640[1] ^ 0x80) &
         (char)((-((int)(short)(char)uStack_240._2_1_ < -0x80 - (short)(char)bStack_ce) &
                -((char)(bStack_ce & uStack_240._2_1_) < '\0') & (bVar124 ^ 1)) << 7) >> 7;
    abStack_640[2] =
         abStack_640[2] ^
         (abStack_640[2] ^ 0x80) &
         (char)((-((int)(short)(char)uStack_240._3_1_ < -0x80 - (short)(char)bStack_cd) &
                -((char)(bStack_cd & uStack_240._3_1_) < '\0') & (byte)(uVar6 >> 0x10)) << 7) >> 7;
    abStack_640[3] =
         abStack_640[3] ^
         (abStack_640[3] ^ 0x80) &
         (char)((-((int)(short)(char)(byte)uStack_23c < -0x80 - (short)(char)bStack_cc) &
                -((char)(bStack_cc & (byte)uStack_23c) < '\0') & (byte)(uVar6 >> 0x18)) << 7) >> 7;
    abStack_640[4] =
         abStack_640[4] ^
         (abStack_640[4] ^ 0x80) &
         (char)((-(CONCAT13(sVar100 >> 0xf,(int3)sVar100) < -0x80 - (short)(char)bStack_cb) &
                -((char)(bStack_cb & uStack_23c._1_1_) < '\0') & (bVar127 ^ 1)) << 7) >> 7;
    abStack_640[5] =
         abStack_640[5] ^
         (abStack_640[5] ^ 0x80) &
         (char)((-(CONCAT13(sVar101 >> 0xf,(int3)sVar101) < -0x80 - (short)(char)bStack_ca) &
                -((char)(bStack_ca & (byte)uStack_23a) < '\0') & (bVar128 ^ 1)) << 7) >> 7;
    abStack_640[6] =
         abStack_640[6] ^
         (abStack_640[6] ^ 0x80) &
         (char)((-(CONCAT13(sVar102 >> 0xf,(int3)sVar102) < -0x80 - (short)(char)bStack_c9) &
                -((char)(bStack_c9 & uStack_23a._1_1_) < '\0') & (bVar129 ^ 1)) << 7) >> 7;
    abStack_640[7] =
         abStack_640[7] ^
         (abStack_640[7] ^ 0x80) &
         (char)((-(CONCAT13(sVar103 >> 0xf,(int3)sVar103) < -0x80 - (short)(char)bStack_c8) &
                -((char)(bStack_c8 & (byte)uStack_238) < '\0') & (bVar130 ^ 1)) << 7) >> 7;
    abStack_640[8] =
         abStack_640[8] ^
         (abStack_640[8] ^ 0x80) &
         (char)((-((int)(short)(char)uStack_238._1_1_ < -0x80 - (short)(char)bStack_c7) &
                -((char)(bStack_c7 & uStack_238._1_1_) < '\0') & (bVar131 ^ 1)) << 7) >> 7;
    abStack_640[9] =
         abStack_640[9] ^
         (abStack_640[9] ^ 0x80) &
         (char)((-((int)(short)(char)(byte)uStack_236 < -0x80 - (short)(char)bStack_c6) &
                -((char)(bStack_c6 & (byte)uStack_236) < '\0') & (bVar132 ^ 1)) << 7) >> 7;
    abStack_640[10] =
         abStack_640[10] ^
         (abStack_640[10] ^ 0x80) &
         (char)((-((int)(short)(char)uStack_236._1_1_ < -0x80 - (short)(char)bStack_c5) &
                -((char)(bStack_c5 & uStack_236._1_1_) < '\0') & (byte)(uVar55 >> 0x10)) << 7) >> 7;
    abStack_640[0xb] =
         abStack_640[0xb] ^
         (abStack_640[0xb] ^ 0x80) &
         (char)((-((int)(short)(char)(byte)uStack_234 < -0x80 - (short)(char)bStack_c4) &
                -((char)(bStack_c4 & (byte)uStack_234) < '\0') & (byte)(uVar55 >> 0x18)) << 7) >> 7;
    abStack_640[0xc] =
         abStack_640[0xc] ^
         (abStack_640[0xc] ^ 0x80) &
         (char)((-((int)(short)(char)uStack_234._1_1_ < -0x80 - (short)(char)bStack_c3) &
                -((char)(bStack_c3 & uStack_234._1_1_) < '\0') & (bVar135 ^ 1)) << 7) >> 7;
    abStack_640[0xd] =
         abStack_640[0xd] ^
         (abStack_640[0xd] ^ 0x80) &
         (char)((-((int)(short)(char)(byte)uStack_232 < -0x80 - (short)((uint)uVar74 >> 0x10)) &
                -((char)(bStack_c2 & (byte)uStack_232) < '\0') & (bVar136 ^ 1)) << 7) >> 7;
    abStack_640[0xe] =
         abStack_640[0xe] ^
         (abStack_640[0xe] ^ 0x80) &
         (char)((-(CONCAT13(sVar119 >> 0xf,(int3)sVar119) < -0x80 - (short)((uint6)uVar12 >> 0x20))
                & -((char)(bStack_c1 & uStack_232._1_1_) < '\0') & (bVar137 ^ 1)) << 7) >> 7;
    bStack_900 = bStack_900 ^
                 (bStack_900 ^ 0x80) &
                 (char)((-(CONCAT13(sVar120 >> 0xf,(int3)sVar120) <
                          -0x80 - (short)(CONCAT17((char)bStack_c0 >> 7,CONCAT16(bStack_c0,uVar12))
                                         >> 0x30)) &
                        -((char)(bStack_c0 & bStack_230) < '\0') & (bVar138 ^ 1)) << 7) >> 7;
    uStack_6f7 = CONCAT16(abStack_640[0xe],
                          CONCAT15(abStack_640[0xd],
                                   CONCAT14(abStack_640[0xc],
                                            CONCAT13(abStack_640[0xb],
                                                     CONCAT12(abStack_640[10],
                                                              CONCAT11(abStack_640[9],abStack_640[8]
                                                                      ))))));
    uStack_88 = (double)CONCAT17(bStack_900,uStack_6f7);
    dStack_6ff = (double)CONCAT17(abStack_640[7],
                                  CONCAT16(abStack_640[6],
                                           CONCAT15(abStack_640[5],
                                                    CONCAT14(abStack_640[4],
                                                             CONCAT13(abStack_640[3],
                                                                      CONCAT12(abStack_640[2],
                                                                               CONCAT11(abStack_640
                                                                                        [1],
                                                  abStack_640[0])))))));
    uStack_700 = 5;
    auVar85._1_8_ = dStack_6ff;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_6f7;
    bStack_6f0 = bStack_900;
    abStack_640[0xf] = bStack_900;
    uStack_90 = dStack_6ff;
    break;
  case 0xfd59:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf));
    uVar26 = CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,CONCAT13(bStack_cc,uVar27))));
    uStack_630 = (double)CONCAT17(bStack_c8,uVar26);
    uVar28 = CONCAT14(uStack_23c._1_1_,
                      CONCAT13((byte)uStack_23c,
                               CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)
                                       )));
    uVar12 = CONCAT15((byte)uStack_23a,uVar28);
    uStack_420 = (double)CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar33 = CONCAT14(uStack_234._1_1_,
                      CONCAT13((byte)uStack_234,
                               CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)
                                       )));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,CONCAT15((byte)uStack_232,uVar33)));
    uVar31 = CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7));
    uVar32 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,CONCAT13(bStack_c4,uVar31)));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar32));
    uVar9 = (ushort)bStack_cf + (ushort)uStack_240._1_1_;
    uVar6 = ((uVar27 & 0xff00) >> 8) + ((uint)((uint5)uVar28 >> 8) & 0xff);
    uVar55 = (uint)bStack_cd + ((uint)((uint6)uVar12 >> 0x10) & 0xff);
    if (0xfe < uVar9) {
      uVar9 = 0xff;
    }
    uVar8 = (uint)((ulong)uStack_630 >> 0x20);
    uVar7 = ((uint)((uint7)uVar26 >> 0x18) & 0xff) + (uint)(byte)uStack_23c;
    if (0xfe < uVar6) {
      uVar6 = 0xff;
    }
    uVar54 = (uint)((ulong)uStack_420 >> 0x20);
    uVar1 = (uVar8 & 0xff) + (uVar54 & 0xff);
    if (0xfe < uVar55) {
      uVar55 = 0xff;
    }
    uVar8 = (uVar8 >> 8 & 0xff) + (uVar54 >> 8 & 0xff);
    if (0xfe < uVar7) {
      uVar7 = 0xff;
    }
    uVar16 = ((ushort)((ulong)uStack_630 >> 0x30) & 0xff) +
             ((ushort)((ulong)uStack_420 >> 0x30) & 0xff);
    uVar13 = (ushort)bStack_c7 + (ushort)uStack_238._1_1_;
    uVar54 = ((uVar31 & 0xff00) >> 8) + ((uint)((uint5)uVar33 >> 8) & 0xff);
    abStack_640[3] = (byte)uVar7;
    if (0xfe < uVar1) {
      uVar1 = 0xff;
    }
    uVar7 = (uint)bStack_c8 + (uint)(byte)uStack_238;
    abStack_640[4] = (byte)uVar1;
    if (0xfe < uVar8) {
      uVar8 = 0xff;
    }
    abStack_640[5] = (byte)uVar8;
    if (0xfe < uVar16) {
      uVar16 = 0xff;
    }
    abStack_640[0] = (byte)uVar9;
    abStack_640[6] = (byte)uVar16;
    if (0xfe < uVar7) {
      uVar7 = 0xff;
    }
    abStack_640[1] = (byte)uVar6;
    uVar6 = (uint)uStack_236._1_1_ + ((uint)((uint6)uVar32 >> 0x10) & 0xff);
    if (0xfe < uVar13) {
      uVar13 = 0xff;
    }
    uVar8 = (uint)(byte)uStack_234 + (uint)bStack_c4;
    abStack_640[8] = (byte)uVar13;
    if (0xfe < uVar54) {
      uVar54 = 0xff;
    }
    uVar1 = (uint)bStack_c3 + (uint)uStack_234._1_1_;
    abStack_640[9] = (byte)uVar54;
    if (0xfe < uVar6) {
      uVar6 = 0xff;
    }
    uVar54 = (uint)bStack_c2 + (uint)(byte)uStack_232;
    if (0xfe < uVar8) {
      uVar8 = 0xff;
    }
    uVar5 = (uint)bStack_c1 + (uint)uStack_232._1_1_;
    abStack_640[0xb] = (byte)uVar8;
    if (0xfe < uVar1) {
      uVar1 = 0xff;
    }
    uVar8 = (uint)bStack_c0 + (uint)bStack_230;
    abStack_640[0xc] = (byte)uVar1;
    if (0xfe < uVar54) {
      uVar54 = 0xff;
    }
    abStack_640[0xd] = (byte)uVar54;
    if (0xfe < uVar5) {
      uVar5 = 0xff;
    }
    if (0xfe < uVar8) {
      uVar8 = 0xff;
    }
    abStack_640[2] = (byte)uVar55;
    abStack_640[7] = (byte)uVar7;
    abStack_640[10] = (byte)uVar6;
    abStack_640[0xe] = (byte)uVar5;
    bStack_708 = (byte)uVar8;
    fStack_af = (float)CONCAT13(abStack_640[3],
                                CONCAT12(abStack_640[2],CONCAT11(abStack_640[1],abStack_640[0])));
    uVar26 = CONCAT16(abStack_640[6],CONCAT15(abStack_640[5],CONCAT14(abStack_640[4],fStack_af)));
    dStack_717 = (double)CONCAT17(abStack_640[7],uVar26);
    fStack_a7 = (float)CONCAT13(abStack_640[0xb],
                                CONCAT12(abStack_640[10],CONCAT11(abStack_640[9],abStack_640[8])));
    uStack_70f = CONCAT16(abStack_640[0xe],
                          CONCAT15(abStack_640[0xd],CONCAT14(abStack_640[0xc],fStack_a7)));
    uStack_88 = (double)CONCAT17(bStack_708,uStack_70f);
    uStack_718 = 5;
    uStack_a3._0_3_ = (uint3)((uint7)uStack_70f >> 0x20);
    uStack_b0 = 5;
    uStack_ab._0_3_ = (undefined3)((uint7)uVar26 >> 0x20);
    uStack_ab = (float)CONCAT13(abStack_640[7],(undefined3)uStack_ab);
    uStack_a3 = (float)CONCAT13(bStack_708,(uint3)uStack_a3);
    abStack_640[0xf] = bStack_708;
    uStack_90 = dStack_717;
    goto code_r0x0123e410;
  case 0xfd5a:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    abStack_640[0] = uStack_240._1_1_ - bStack_cf;
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[4] = uStack_23c._1_1_ - bStack_cb;
    abStack_640[5] = (byte)uStack_23a - bStack_ca;
    abStack_640[6] = uStack_23a._1_1_ - bStack_c9;
    abStack_640[1] = uStack_240._2_1_ - bStack_ce;
    abStack_640[2] = uStack_240._3_1_ - bStack_cd;
    abStack_640[3] = (byte)uStack_23c - bStack_cc;
    abStack_640[7] = (byte)uStack_238 - bStack_c8;
    abStack_640[8] = uStack_238._1_1_ - bStack_c7;
    abStack_640[9] = (byte)uStack_236 - bStack_c6;
    abStack_640[10] = uStack_236._1_1_ - bStack_c5;
    abStack_640[0xb] = (byte)uStack_234 - bStack_c4;
    abStack_640[0xc] = uStack_234._1_1_ - bStack_c3;
    abStack_640[0xd] = (byte)uStack_232 - bStack_c2;
    abStack_640[0xe] = uStack_232._1_1_ - bStack_c1;
    bStack_660 = bStack_230 - bStack_c0;
    dStack_66f = (double)CONCAT17(abStack_640[7],
                                  CONCAT16(abStack_640[6],
                                           CONCAT15(abStack_640[5],
                                                    CONCAT14(abStack_640[4],
                                                             CONCAT13(abStack_640[3],
                                                                      CONCAT12(abStack_640[2],
                                                                               CONCAT11(abStack_640
                                                                                        [1],
                                                  abStack_640[0])))))));
    uStack_667 = CONCAT16(abStack_640[0xe],
                          CONCAT15(abStack_640[0xd],
                                   CONCAT14(abStack_640[0xc],
                                            CONCAT13(abStack_640[0xb],
                                                     CONCAT12(abStack_640[10],
                                                              CONCAT11(abStack_640[9],abStack_640[8]
                                                                      ))))));
    uStack_88 = (double)CONCAT17(bStack_660,uStack_667);
    uStack_670 = 5;
    auVar86._1_8_ = dStack_66f;
    auVar86[0] = 5;
    auVar86._9_7_ = uStack_667;
    abStack_640[0xf] = bStack_660;
    uStack_90 = dStack_66f;
code_r0x01239a3c:
    fStack_a7 = auVar86._9_4_;
    uStack_a3._0_3_ = auVar86._13_3_;
    uStack_b0 = auVar86[0];
    fStack_af = auVar86._1_4_;
    uStack_ab = auVar86._5_4_;
    uStack_a3 = (float)CONCAT13(abStack_640[0xf],(uint3)uStack_a3);
    goto code_r0x0123e410;
  case 0xfd5b:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    sVar119 = (short)(char)uStack_234._1_1_;
    sVar120 = (short)(char)(byte)uStack_232;
    sVar121 = (short)(char)uStack_232._1_1_;
    sVar122 = (short)(char)bStack_230;
    uVar74 = CONCAT13((char)bStack_c2 >> 7,CONCAT12(bStack_c2,(short)(char)bStack_c3));
    uVar12 = CONCAT15((char)bStack_c1 >> 7,CONCAT14(bStack_c1,uVar74));
    sVar100 = (short)(char)uStack_23c._1_1_;
    sVar101 = (short)(char)(byte)uStack_23a;
    sVar102 = (short)(char)uStack_23a._1_1_;
    sVar103 = (short)(char)(byte)uStack_238;
    abStack_640[0] =
         uStack_240._1_1_ - bStack_cf ^
         (uStack_240._1_1_ - bStack_cf ^ 0x7f) &
         -((short)(char)bStack_cf + 0x7f < (int)(short)(char)uStack_240._1_1_) &
         -(-1 < (char)uStack_240._1_1_) & -((char)bStack_cf < '\0');
    abStack_640[1] =
         uStack_240._2_1_ - bStack_ce ^
         (uStack_240._2_1_ - bStack_ce ^ 0x7f) &
         -((short)(char)bStack_ce + 0x7f < (int)(short)(char)uStack_240._2_1_) &
         -(-1 < (char)uStack_240._2_1_) & -((char)bStack_ce < '\0');
    abStack_640[2] =
         uStack_240._3_1_ - bStack_cd ^
         (uStack_240._3_1_ - bStack_cd ^ 0x7f) &
         -((short)(char)bStack_cd + 0x7f < (int)(short)(char)uStack_240._3_1_) &
         -(-1 < (char)uStack_240._3_1_) & -((char)bStack_cd < '\0');
    abStack_640[3] =
         (byte)uStack_23c - bStack_cc ^
         ((byte)uStack_23c - bStack_cc ^ 0x7f) &
         -((short)(char)bStack_cc + 0x7f < (int)(short)(char)(byte)uStack_23c) &
         -(-1 < (char)(byte)uStack_23c) & -((char)bStack_cc < '\0');
    abStack_640[4] =
         uStack_23c._1_1_ - bStack_cb ^
         (uStack_23c._1_1_ - bStack_cb ^ 0x7f) &
         -((short)(char)bStack_cb + 0x7f < CONCAT13(sVar100 >> 0xf,(int3)sVar100)) &
         -(-1 < (char)uStack_23c._1_1_) & -((char)bStack_cb < '\0');
    abStack_640[5] =
         (byte)uStack_23a - bStack_ca ^
         ((byte)uStack_23a - bStack_ca ^ 0x7f) &
         -((short)(char)bStack_ca + 0x7f < CONCAT13(sVar101 >> 0xf,(int3)sVar101)) &
         -(-1 < (char)(byte)uStack_23a) & -((char)bStack_ca < '\0');
    abStack_640[6] =
         uStack_23a._1_1_ - bStack_c9 ^
         (uStack_23a._1_1_ - bStack_c9 ^ 0x7f) &
         -((short)(char)bStack_c9 + 0x7f < CONCAT13(sVar102 >> 0xf,(int3)sVar102)) &
         -(-1 < (char)uStack_23a._1_1_) & -((char)bStack_c9 < '\0');
    abStack_640[7] =
         (byte)uStack_238 - bStack_c8 ^
         ((byte)uStack_238 - bStack_c8 ^ 0x7f) &
         -((short)(char)bStack_c8 + 0x7f < CONCAT13(sVar103 >> 0xf,(int3)sVar103)) &
         -(-1 < (char)(byte)uStack_238) & -((char)bStack_c8 < '\0');
    abStack_640[8] =
         uStack_238._1_1_ - bStack_c7 ^
         (uStack_238._1_1_ - bStack_c7 ^ 0x7f) &
         -((short)(char)bStack_c7 + 0x7f < (int)(short)(char)uStack_238._1_1_) &
         -(-1 < (char)uStack_238._1_1_) & -((char)bStack_c7 < '\0');
    abStack_640[9] =
         (byte)uStack_236 - bStack_c6 ^
         ((byte)uStack_236 - bStack_c6 ^ 0x7f) &
         -((short)(char)bStack_c6 + 0x7f < (int)(short)(char)(byte)uStack_236) &
         -(-1 < (char)(byte)uStack_236) & -((char)bStack_c6 < '\0');
    abStack_640[10] =
         uStack_236._1_1_ - bStack_c5 ^
         (uStack_236._1_1_ - bStack_c5 ^ 0x7f) &
         -((short)(char)bStack_c5 + 0x7f < (int)(short)(char)uStack_236._1_1_) &
         -(-1 < (char)uStack_236._1_1_) & -((char)bStack_c5 < '\0');
    abStack_640[0xb] =
         (byte)uStack_234 - bStack_c4 ^
         ((byte)uStack_234 - bStack_c4 ^ 0x7f) &
         -((short)(char)bStack_c4 + 0x7f < (int)(short)(char)(byte)uStack_234) &
         -(-1 < (char)(byte)uStack_234) & -((char)bStack_c4 < '\0');
    abStack_640[0xc] =
         uStack_234._1_1_ - bStack_c3 ^
         (uStack_234._1_1_ - bStack_c3 ^ 0x7f) &
         -((short)(char)bStack_c3 + 0x7f < CONCAT13(sVar119 >> 0xf,(int3)sVar119)) &
         -(-1 < (char)uStack_234._1_1_) & -((char)bStack_c3 < '\0');
    abStack_640[0xd] =
         (byte)uStack_232 - bStack_c2 ^
         ((byte)uStack_232 - bStack_c2 ^ 0x7f) &
         -((short)((uint)uVar74 >> 0x10) + 0x7f < CONCAT13(sVar120 >> 0xf,(int3)sVar120)) &
         -(-1 < (char)(byte)uStack_232) & -((char)bStack_c2 < '\0');
    abStack_640[0xe] =
         uStack_232._1_1_ - bStack_c1 ^
         (uStack_232._1_1_ - bStack_c1 ^ 0x7f) &
         -((short)((uint6)uVar12 >> 0x20) + 0x7f < CONCAT13(sVar121 >> 0xf,(int3)sVar121)) &
         -(-1 < (char)uStack_232._1_1_) & -((char)bStack_c1 < '\0');
    bStack_900 = bStack_230 - bStack_c0 ^
                 (bStack_230 - bStack_c0 ^ 0x7f) &
                 -((short)(CONCAT17((char)bStack_c0 >> 7,CONCAT16(bStack_c0,uVar12)) >> 0x30) + 0x7f
                  < CONCAT13(sVar122 >> 0xf,(int3)sVar122)) &
                 -(-1 < (char)bStack_230) & -((char)bStack_c0 < '\0');
    abStack_640[0] =
         abStack_640[0] ^
         (abStack_640[0] ^ 0x80) &
         -((int)(short)(char)uStack_240._1_1_ <
          (int)((CONCAT12(bStack_ce,(ushort)bStack_cf) & 0xffff) - 0x80)) &
         -((char)uStack_240._1_1_ < '\0') & -('\0' < (char)bStack_cf);
    abStack_640[1] =
         abStack_640[1] ^
         (abStack_640[1] ^ 0x80) &
         -((int)(short)(char)uStack_240._2_1_ < (int)(bStack_ce - 0x80)) &
         -((char)uStack_240._2_1_ < '\0') & -('\0' < (char)bStack_ce);
    abStack_640[2] =
         abStack_640[2] ^
         (abStack_640[2] ^ 0x80) &
         -((int)(short)(char)uStack_240._3_1_ <
          (int)((CONCAT12(bStack_cc,(ushort)bStack_cd) & 0xffff) - 0x80)) &
         -((char)uStack_240._3_1_ < '\0') & -('\0' < (char)bStack_cd);
    abStack_640[3] =
         abStack_640[3] ^
         (abStack_640[3] ^ 0x80) &
         -((int)(short)(char)(byte)uStack_23c < (int)(bStack_cc - 0x80)) &
         -((char)(byte)uStack_23c < '\0') & -('\0' < (char)bStack_cc);
    abStack_640[4] =
         abStack_640[4] ^
         (abStack_640[4] ^ 0x80) &
         -(CONCAT13(sVar100 >> 0xf,(int3)sVar100) <
          (int)((CONCAT12(bStack_ca,(ushort)bStack_cb) & 0xffff) - 0x80)) &
         -((char)uStack_23c._1_1_ < '\0') & -('\0' < (char)bStack_cb);
    abStack_640[5] =
         abStack_640[5] ^
         (abStack_640[5] ^ 0x80) &
         -(CONCAT13(sVar101 >> 0xf,(int3)sVar101) < (int)(bStack_ca - 0x80)) &
         -((char)(byte)uStack_23a < '\0') & -('\0' < (char)bStack_ca);
    abStack_640[6] =
         abStack_640[6] ^
         (abStack_640[6] ^ 0x80) &
         -(CONCAT13(sVar102 >> 0xf,(int3)sVar102) < (int)(bStack_c9 - 0x80)) &
         -((char)uStack_23a._1_1_ < '\0') & -('\0' < (char)bStack_c9);
    abStack_640[7] =
         abStack_640[7] ^
         (abStack_640[7] ^ 0x80) &
         -(CONCAT13(sVar103 >> 0xf,(int3)sVar103) < (int)(bStack_c8 - 0x80)) &
         -((char)(byte)uStack_238 < '\0') & -('\0' < (char)bStack_c8);
    abStack_640[8] =
         abStack_640[8] ^
         (abStack_640[8] ^ 0x80) &
         -((int)(short)(char)uStack_238._1_1_ <
          (int)((CONCAT12(bStack_c6,(ushort)bStack_c7) & 0xffff) - 0x80)) &
         -((char)uStack_238._1_1_ < '\0') & -('\0' < (char)bStack_c7);
    abStack_640[9] =
         abStack_640[9] ^
         (abStack_640[9] ^ 0x80) &
         -((int)(short)(char)(byte)uStack_236 < (int)(bStack_c6 - 0x80)) &
         -((char)(byte)uStack_236 < '\0') & -('\0' < (char)bStack_c6);
    abStack_640[10] =
         abStack_640[10] ^
         (abStack_640[10] ^ 0x80) &
         -((int)(short)(char)uStack_236._1_1_ <
          (int)((CONCAT12(bStack_c4,(ushort)bStack_c5) & 0xffff) - 0x80)) &
         -((char)uStack_236._1_1_ < '\0') & -('\0' < (char)bStack_c5);
    abStack_640[0xb] =
         abStack_640[0xb] ^
         (abStack_640[0xb] ^ 0x80) &
         -((int)(short)(char)(byte)uStack_234 < (int)(bStack_c4 - 0x80)) &
         -((char)(byte)uStack_234 < '\0') & -('\0' < (char)bStack_c4);
    abStack_640[0xc] =
         abStack_640[0xc] ^
         (abStack_640[0xc] ^ 0x80) &
         -(CONCAT13(sVar119 >> 0xf,(int3)sVar119) <
          (int)((CONCAT12(bStack_c2,(ushort)bStack_c3) & 0xffff) - 0x80)) &
         -((char)uStack_234._1_1_ < '\0') & -('\0' < (char)bStack_c3);
    abStack_640[0xd] =
         abStack_640[0xd] ^
         (abStack_640[0xd] ^ 0x80) &
         -(CONCAT13(sVar120 >> 0xf,(int3)sVar120) < (int)(bStack_c2 - 0x80)) &
         -((char)(byte)uStack_232 < '\0') & -('\0' < (char)bStack_c2);
    abStack_640[0xe] =
         abStack_640[0xe] ^
         (abStack_640[0xe] ^ 0x80) &
         -(CONCAT13(sVar121 >> 0xf,(int3)sVar121) < (int)(bStack_c1 - 0x80)) &
         -((char)uStack_232._1_1_ < '\0') & -('\0' < (char)bStack_c1);
    bStack_900 = bStack_900 ^
                 (bStack_900 ^ 0x80) &
                 -(CONCAT13(sVar122 >> 0xf,(int3)sVar122) < (int)(bStack_c0 - 0x80)) &
                 -((char)bStack_230 < '\0') & -('\0' < (char)bStack_c0);
    uStack_727 = CONCAT16(abStack_640[0xe],
                          CONCAT15(abStack_640[0xd],
                                   CONCAT14(abStack_640[0xc],
                                            CONCAT13(abStack_640[0xb],
                                                     CONCAT12(abStack_640[10],
                                                              CONCAT11(abStack_640[9],abStack_640[8]
                                                                      ))))));
    uStack_88 = (double)CONCAT17(bStack_900,uStack_727);
    dStack_72f = (double)CONCAT17(abStack_640[7],
                                  CONCAT16(abStack_640[6],
                                           CONCAT15(abStack_640[5],
                                                    CONCAT14(abStack_640[4],
                                                             CONCAT13(abStack_640[3],
                                                                      CONCAT12(abStack_640[2],
                                                                               CONCAT11(abStack_640
                                                                                        [1],
                                                  abStack_640[0])))))));
    abStack_748[0x18] = 5;
    auVar85._1_8_ = dStack_72f;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_727;
    bStack_720 = bStack_900;
    abStack_640[0xf] = bStack_900;
    uStack_90 = dStack_72f;
    break;
  case 0xfd5c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_));
    uVar26 = CONCAT16(uStack_23a._1_1_,
                      CONCAT15((byte)uStack_23a,
                               CONCAT14(uStack_23c._1_1_,CONCAT13((byte)uStack_23c,uVar27))));
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar28 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar12 = CONCAT15(bStack_ca,uVar28);
    uVar38 = CONCAT16(bStack_c9,uVar12);
    uStack_630 = (double)CONCAT17(bStack_c8,uVar38);
    uVar6 = uVar27 & 0xff00;
    bVar123 = uStack_240._1_1_;
    if (uStack_240._1_1_ <= bStack_cf) {
      bVar123 = bStack_cf;
    }
    bVar124 = (byte)(uVar6 >> 8);
    if (uVar6 >> 8 <= ((uint)((uint5)uVar28 >> 8) & 0xff)) {
      bVar124 = bStack_ce;
    }
    abStack_640[0] = bVar123 - bStack_cf;
    bVar125 = uStack_240._3_1_;
    if ((uint)uStack_240._3_1_ <= ((uint)((uint6)uVar12 >> 0x10) & 0xff)) {
      bVar125 = bStack_cd;
    }
    abStack_640[1] = bVar124 - bStack_ce;
    bVar126 = (byte)uStack_23c;
    if (((uint)((uint7)uVar26 >> 0x18) & 0xff) <= ((uint)((uint7)uVar38 >> 0x18) & 0xff)) {
      bVar126 = bStack_cc;
    }
    abStack_640[2] = bVar125 - bStack_cd;
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    bVar127 = uStack_23c._1_1_;
    if ((uVar6 & 0xff) <= (uVar55 & 0xff)) {
      bVar127 = bStack_cb;
    }
    abStack_640[3] = bVar126 - bStack_cc;
    uVar27 = CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,uVar27)))));
    uVar28 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uVar12 = CONCAT15(bStack_c2,uVar28);
    uVar26 = CONCAT16(bStack_c1,uVar12);
    uStack_628 = (double)CONCAT17(bStack_c0,uVar26);
    bVar128 = (byte)uStack_23a;
    if ((uVar6 >> 8 & 0xff) <= (uVar55 >> 8 & 0xff)) {
      bVar128 = bStack_ca;
    }
    abStack_640[4] = bVar127 - bStack_cb;
    bVar129 = uStack_23a._1_1_;
    if (((ushort)((ulong)uStack_420 >> 0x30) & 0xff) <= ((ushort)((ulong)uStack_630 >> 0x30) & 0xff)
       ) {
      bVar129 = bStack_c9;
    }
    abStack_640[5] = bVar128 - bStack_ca;
    bVar130 = (byte)uStack_238;
    if ((byte)uStack_238 <= bStack_c8) {
      bVar130 = bStack_c8;
    }
    uVar6 = uVar27 & 0xff00;
    bVar131 = uStack_238._1_1_;
    if (uStack_238._1_1_ <= bStack_c7) {
      bVar131 = bStack_c7;
    }
    abStack_640[6] = bVar129 - bStack_c9;
    bVar132 = (byte)(uVar6 >> 8);
    if (uVar6 >> 8 <= ((uint)((uint5)uVar28 >> 8) & 0xff)) {
      bVar132 = bStack_c6;
    }
    abStack_640[8] = bVar131 - bStack_c7;
    abStack_640[7] = bVar130 - bStack_c8;
    bVar133 = uStack_236._1_1_;
    if ((uint)uStack_236._1_1_ <= ((uint)((uint6)uVar12 >> 0x10) & 0xff)) {
      bVar133 = bStack_c5;
    }
    abStack_640[9] = bVar132 - bStack_c6;
    bVar134 = (byte)uStack_234;
    if ((uint)(byte)uStack_234 <= ((uint)((uint7)uVar26 >> 0x18) & 0xff)) {
      bVar134 = bStack_c4;
    }
    abStack_640[10] = bVar133 - bStack_c5;
    abStack_640[0xb] = bVar134 - bStack_c4;
    bVar135 = uStack_234._1_1_;
    if (uStack_234._1_1_ <= bStack_c3) {
      bVar135 = bStack_c3;
    }
    bVar136 = (byte)uStack_232;
    if ((byte)uStack_232 <= bStack_c2) {
      bVar136 = bStack_c2;
    }
    abStack_640[0xc] = bVar135 - bStack_c3;
    bVar137 = uStack_232._1_1_;
    if (uStack_232._1_1_ <= bStack_c1) {
      bVar137 = bStack_c1;
    }
    abStack_640[0xd] = bVar136 - bStack_c2;
    if (bStack_230 <= bStack_c0) {
      bStack_230 = bStack_c0;
    }
    abStack_640[0xe] = bVar137 - bStack_c1;
    abStack_640[0xf] = bStack_230 - bStack_c0;
    uStack_90 = (double)CONCAT17(bVar130 - bStack_c8,
                                 CONCAT16(bVar129 - bStack_c9,
                                          CONCAT15(bVar128 - bStack_ca,
                                                   CONCAT14(bVar127 - bStack_cb,
                                                            CONCAT13(bVar126 - bStack_cc,
                                                                     CONCAT12(bVar125 - bStack_cd,
                                                                              CONCAT11(bVar124 - 
                                                  bStack_ce,bVar123 - bStack_cf)))))));
    uStack_88 = (double)CONCAT17(bStack_230 - bStack_c0,
                                 CONCAT16(bVar137 - bStack_c1,
                                          CONCAT15(bVar136 - bStack_c2,
                                                   CONCAT14(bVar135 - bStack_c3,
                                                            CONCAT13(bVar134 - bStack_c4,
                                                                     CONCAT12(bVar133 - bStack_c5,
                                                                              CONCAT11(bVar132 - 
                                                  bStack_c6,bVar131 - bStack_c7)))))));
    puVar66 = &uStack_7d8;
    goto code_r0x0123a8cc;
  case 0xfd5d:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    abStack_640[0] = bStack_cf * uStack_240._1_1_;
    abStack_640[1] = bStack_ce * uStack_240._2_1_;
    abStack_640[2] = bStack_cd * uStack_240._3_1_;
    abStack_640[3] = bStack_cc * (byte)uStack_23c;
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[4] = bStack_cb * uStack_23c._1_1_;
    abStack_640[5] = bStack_ca * (byte)uStack_23a;
    abStack_640[6] = bStack_c9 * uStack_23a._1_1_;
    abStack_640[7] = bStack_c8 * (byte)uStack_238;
    abStack_640[8] = bStack_c7 * uStack_238._1_1_;
    abStack_640[9] = bStack_c6 * (byte)uStack_236;
    abStack_640[10] = uStack_236._1_1_ * bStack_c5;
    abStack_640[0xb] = (byte)uStack_234 * bStack_c4;
    abStack_640[0xc] = bStack_c3 * uStack_234._1_1_;
    abStack_640[0xd] = bStack_c2 * (byte)uStack_232;
    abStack_640[0xe] = bStack_c1 * uStack_232._1_1_;
    bStack_678 = bStack_c0 * bStack_230;
    fStack_af = (float)CONCAT13(abStack_640[3],
                                CONCAT12(abStack_640[2],CONCAT11(abStack_640[1],abStack_640[0])));
    uVar26 = CONCAT16(abStack_640[6],CONCAT15(abStack_640[5],CONCAT14(abStack_640[4],fStack_af)));
    dStack_687 = (double)CONCAT17(abStack_640[7],uVar26);
    fStack_a7 = (float)CONCAT13(abStack_640[0xb],
                                CONCAT12(abStack_640[10],CONCAT11(abStack_640[9],abStack_640[8])));
    uStack_67f = CONCAT16(abStack_640[0xe],
                          CONCAT15(abStack_640[0xd],CONCAT14(abStack_640[0xc],fStack_a7)));
    uStack_88 = (double)CONCAT17(bStack_678,uStack_67f);
    uStack_688 = 5;
    uStack_a3._0_3_ = (uint3)((uint7)uStack_67f >> 0x20);
    uStack_b0 = 5;
    uStack_ab._0_3_ = (undefined3)((uint7)uVar26 >> 0x20);
    uStack_ab = (float)CONCAT13(abStack_640[7],(undefined3)uStack_ab);
    uStack_a3 = (float)CONCAT13(bStack_678,(uint3)uStack_a3);
    abStack_640[0xf] = bStack_678;
    uStack_90 = dStack_687;
    goto code_r0x0123e410;
  case 0xfd5e:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    abStack_640[0] = uStack_240._1_1_;
    if ((char)bStack_cf <= (char)uStack_240._1_1_) {
      abStack_640[0] = bStack_cf;
    }
    abStack_640[1] = uStack_240._2_1_;
    if ((char)bStack_ce <= (char)uStack_240._2_1_) {
      abStack_640[1] = bStack_ce;
    }
    abStack_640[2] = uStack_240._3_1_;
    if ((char)bStack_cd <= (char)uStack_240._3_1_) {
      abStack_640[2] = bStack_cd;
    }
    abStack_640[3] = (byte)uStack_23c;
    if ((char)bStack_cc <= (char)(byte)uStack_23c) {
      abStack_640[3] = bStack_cc;
    }
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    abStack_640[4] = uStack_23c._1_1_;
    if ((char)bStack_cb <= (char)uStack_23c._1_1_) {
      abStack_640[4] = bStack_cb;
    }
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[5] = (byte)uStack_23a;
    if ((char)bStack_ca <= (char)(byte)uStack_23a) {
      abStack_640[5] = bStack_ca;
    }
    abStack_640[6] = uStack_23a._1_1_;
    if ((char)bStack_c9 <= (char)uStack_23a._1_1_) {
      abStack_640[6] = bStack_c9;
    }
    abStack_640[7] = (byte)uStack_238;
    if ((char)bStack_c8 <= (char)(byte)uStack_238) {
      abStack_640[7] = bStack_c8;
    }
    abStack_640[8] = uStack_238._1_1_;
    if ((char)bStack_c7 <= (char)uStack_238._1_1_) {
      abStack_640[8] = bStack_c7;
    }
    abStack_640[9] = (byte)uStack_236;
    if ((char)bStack_c6 <= (char)(byte)uStack_236) {
      abStack_640[9] = bStack_c6;
    }
    abStack_640[10] = uStack_236._1_1_;
    if ((char)bStack_c5 <= (char)uStack_236._1_1_) {
      abStack_640[10] = bStack_c5;
    }
    abStack_640[0xb] = (byte)uStack_234;
    if ((char)bStack_c4 <= (char)(byte)uStack_234) {
      abStack_640[0xb] = bStack_c4;
    }
    abStack_640[0xc] = uStack_234._1_1_;
    if ((char)bStack_c3 <= (char)uStack_234._1_1_) {
      abStack_640[0xc] = bStack_c3;
    }
    abStack_640[0xd] = (byte)uStack_232;
    if ((char)bStack_c2 <= (char)(byte)uStack_232) {
      abStack_640[0xd] = bStack_c2;
    }
    abStack_640[0xe] = uStack_232._1_1_;
    if ((char)bStack_c1 <= (char)uStack_232._1_1_) {
      abStack_640[0xe] = bStack_c1;
    }
    if ((char)bStack_c0 <= (char)bStack_230) {
      bStack_230 = bStack_c0;
    }
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(bStack_230,uVar26);
    uStack_6a0 = 5;
    auVar93._1_8_ = uStack_90;
    auVar93[0] = 5;
    auVar93._9_7_ = uVar26;
    abStack_640[0xf] = bStack_230;
    goto code_r0x0123cb80;
  case 0xfd5f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar28 = CONCAT14(uStack_23c._1_1_,
                      CONCAT13((byte)uStack_23c,
                               CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)
                                       )));
    uVar12 = CONCAT15((byte)uStack_23a,uVar28);
    uVar26 = CONCAT16(uStack_23a._1_1_,uVar12);
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar33 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar32 = CONCAT15(bStack_ca,uVar33);
    uVar38 = CONCAT16(bStack_c9,uVar32);
    uStack_630 = (double)CONCAT17(bStack_c8,uVar38);
    abStack_640[0] = uStack_240._1_1_;
    if (bStack_cf <= uStack_240._1_1_) {
      abStack_640[0] = bStack_cf;
    }
    abStack_640[1] = uStack_240._2_1_;
    if (((uint)((uint5)uVar33 >> 8) & 0xff) <= ((uint)((uint5)uVar28 >> 8) & 0xff)) {
      abStack_640[1] = bStack_ce;
    }
    abStack_640[2] = uStack_240._3_1_;
    if (((uint)((uint6)uVar32 >> 0x10) & 0xff) <= ((uint)((uint6)uVar12 >> 0x10) & 0xff)) {
      abStack_640[2] = bStack_cd;
    }
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    abStack_640[3] = (byte)uStack_23c;
    if (((uint)((uint7)uVar38 >> 0x18) & 0xff) <= ((uint)((uint7)uVar26 >> 0x18) & 0xff)) {
      abStack_640[3] = bStack_cc;
    }
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    abStack_640[4] = uStack_23c._1_1_;
    if ((uVar55 & 0xff) <= (uVar6 & 0xff)) {
      abStack_640[4] = bStack_cb;
    }
    uVar28 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,uVar28)));
    abStack_640[5] = (byte)uStack_23a;
    if ((uVar55 >> 8 & 0xff) <= (uVar6 >> 8 & 0xff)) {
      abStack_640[5] = bStack_ca;
    }
    abStack_640[6] = uStack_23a._1_1_;
    if (((ushort)((ulong)uStack_630 >> 0x30) & 0xff) <= ((ushort)((ulong)uStack_420 >> 0x30) & 0xff)
       ) {
      abStack_640[6] = bStack_c9;
    }
    abStack_640[7] = (byte)uStack_238;
    if (bStack_c8 <= (byte)uStack_238) {
      abStack_640[7] = bStack_c8;
    }
    abStack_640[8] = uStack_238._1_1_;
    if (bStack_c7 <= uStack_238._1_1_) {
      abStack_640[8] = bStack_c7;
    }
    abStack_640[9] = (byte)uStack_236;
    if (((uint)((uint5)uVar28 >> 8) & 0xff) <= (uint)(byte)uStack_236) {
      abStack_640[9] = bStack_c6;
    }
    abStack_640[10] = uStack_236._1_1_;
    if (bStack_c5 <= uStack_236._1_1_) {
      abStack_640[10] = bStack_c5;
    }
    abStack_640[0xb] = (byte)uStack_234;
    if (bStack_c4 <= (byte)uStack_234) {
      abStack_640[0xb] = bStack_c4;
    }
    abStack_640[0xc] = uStack_234._1_1_;
    if (bStack_c3 <= uStack_234._1_1_) {
      abStack_640[0xc] = bStack_c3;
    }
    abStack_640[0xd] = (byte)uStack_232;
    if (bStack_c2 <= (byte)uStack_232) {
      abStack_640[0xd] = bStack_c2;
    }
    abStack_640[0xe] = uStack_232._1_1_;
    if (bStack_c1 <= uStack_232._1_1_) {
      abStack_640[0xe] = bStack_c1;
    }
    if (bStack_c0 <= bStack_230) {
      bStack_230 = bStack_c0;
    }
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(bStack_230,uVar26);
    uStack_6b8 = 5;
    auVar93._1_8_ = uStack_90;
    auVar93[0] = 5;
    auVar93._9_7_ = uVar26;
    abStack_640[0xf] = bStack_230;
    goto code_r0x0123cb80;
  case 0xfd60:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    abStack_640[0] = uStack_240._1_1_;
    if ((char)uStack_240._1_1_ <= (char)bStack_cf) {
      abStack_640[0] = bStack_cf;
    }
    abStack_640[1] = uStack_240._2_1_;
    if ((char)uStack_240._2_1_ <= (char)bStack_ce) {
      abStack_640[1] = bStack_ce;
    }
    abStack_640[2] = uStack_240._3_1_;
    if ((char)uStack_240._3_1_ <= (char)bStack_cd) {
      abStack_640[2] = bStack_cd;
    }
    abStack_640[3] = (byte)uStack_23c;
    if ((char)(byte)uStack_23c <= (char)bStack_cc) {
      abStack_640[3] = bStack_cc;
    }
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    abStack_640[4] = uStack_23c._1_1_;
    if ((char)uStack_23c._1_1_ <= (char)bStack_cb) {
      abStack_640[4] = bStack_cb;
    }
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    abStack_640[5] = (byte)uStack_23a;
    if ((char)(byte)uStack_23a <= (char)bStack_ca) {
      abStack_640[5] = bStack_ca;
    }
    abStack_640[6] = uStack_23a._1_1_;
    if ((char)uStack_23a._1_1_ <= (char)bStack_c9) {
      abStack_640[6] = bStack_c9;
    }
    abStack_640[7] = (byte)uStack_238;
    if ((char)(byte)uStack_238 <= (char)bStack_c8) {
      abStack_640[7] = bStack_c8;
    }
    abStack_640[8] = uStack_238._1_1_;
    if ((char)uStack_238._1_1_ <= (char)bStack_c7) {
      abStack_640[8] = bStack_c7;
    }
    abStack_640[9] = (byte)uStack_236;
    if ((char)(byte)uStack_236 <= (char)bStack_c6) {
      abStack_640[9] = bStack_c6;
    }
    abStack_640[10] = uStack_236._1_1_;
    if ((char)uStack_236._1_1_ <= (char)bStack_c5) {
      abStack_640[10] = bStack_c5;
    }
    abStack_640[0xb] = (byte)uStack_234;
    if ((char)(byte)uStack_234 <= (char)bStack_c4) {
      abStack_640[0xb] = bStack_c4;
    }
    abStack_640[0xc] = uStack_234._1_1_;
    if ((char)uStack_234._1_1_ <= (char)bStack_c3) {
      abStack_640[0xc] = bStack_c3;
    }
    abStack_640[0xd] = (byte)uStack_232;
    if ((char)(byte)uStack_232 <= (char)bStack_c2) {
      abStack_640[0xd] = bStack_c2;
    }
    abStack_640[0xe] = uStack_232._1_1_;
    if ((char)uStack_232._1_1_ <= (char)bStack_c1) {
      abStack_640[0xe] = bStack_c1;
    }
    if ((char)bStack_230 <= (char)bStack_c0) {
      bStack_230 = bStack_c0;
    }
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(bStack_230,uVar26);
    uStack_6d0 = 5;
    auVar93._1_8_ = uStack_90;
    auVar93[0] = 5;
    auVar93._9_7_ = uVar26;
    abStack_640[0xf] = bStack_230;
    goto code_r0x0123cb80;
  case 0xfd61:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar28 = CONCAT14(uStack_23c._1_1_,
                      CONCAT13((byte)uStack_23c,
                               CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)
                                       )));
    uVar12 = CONCAT15((byte)uStack_23a,uVar28);
    uVar26 = CONCAT16(uStack_23a._1_1_,uVar12);
    uStack_420 = (double)CONCAT17((byte)uStack_238,uVar26);
    uVar33 = CONCAT14(bStack_cb,
                      CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar32 = CONCAT15(bStack_ca,uVar33);
    uVar38 = CONCAT16(bStack_c9,uVar32);
    uStack_630 = (double)CONCAT17(bStack_c8,uVar38);
    abStack_640[0] = uStack_240._1_1_;
    if (uStack_240._1_1_ <= bStack_cf) {
      abStack_640[0] = bStack_cf;
    }
    abStack_640[1] = uStack_240._2_1_;
    if (((uint)((uint5)uVar28 >> 8) & 0xff) <= ((uint)((uint5)uVar33 >> 8) & 0xff)) {
      abStack_640[1] = bStack_ce;
    }
    abStack_640[2] = uStack_240._3_1_;
    if (((uint)((uint6)uVar12 >> 0x10) & 0xff) <= ((uint)((uint6)uVar32 >> 0x10) & 0xff)) {
      abStack_640[2] = bStack_cd;
    }
    uVar6 = (uint)((ulong)uStack_420 >> 0x20);
    abStack_640[3] = (byte)uStack_23c;
    if (((uint)((uint7)uVar26 >> 0x18) & 0xff) <= ((uint)((uint7)uVar38 >> 0x18) & 0xff)) {
      abStack_640[3] = bStack_cc;
    }
    uVar55 = (uint)((ulong)uStack_630 >> 0x20);
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    abStack_640[4] = uStack_23c._1_1_;
    if ((uVar6 & 0xff) <= (uVar55 & 0xff)) {
      abStack_640[4] = bStack_cb;
    }
    uVar28 = CONCAT14(bStack_c3,
                      CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uStack_628 = (double)CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,uVar28)));
    abStack_640[5] = (byte)uStack_23a;
    if ((uVar6 >> 8 & 0xff) <= (uVar55 >> 8 & 0xff)) {
      abStack_640[5] = bStack_ca;
    }
    abStack_640[6] = uStack_23a._1_1_;
    if (((ushort)((ulong)uStack_420 >> 0x30) & 0xff) <= ((ushort)((ulong)uStack_630 >> 0x30) & 0xff)
       ) {
      abStack_640[6] = bStack_c9;
    }
    abStack_640[7] = (byte)uStack_238;
    if ((byte)uStack_238 <= bStack_c8) {
      abStack_640[7] = bStack_c8;
    }
    abStack_640[8] = uStack_238._1_1_;
    if (uStack_238._1_1_ <= bStack_c7) {
      abStack_640[8] = bStack_c7;
    }
    abStack_640[9] = (byte)uStack_236;
    if ((uint)(byte)uStack_236 <= ((uint)((uint5)uVar28 >> 8) & 0xff)) {
      abStack_640[9] = bStack_c6;
    }
    abStack_640[10] = uStack_236._1_1_;
    if (uStack_236._1_1_ <= bStack_c5) {
      abStack_640[10] = bStack_c5;
    }
    abStack_640[0xb] = (byte)uStack_234;
    if ((byte)uStack_234 <= bStack_c4) {
      abStack_640[0xb] = bStack_c4;
    }
    abStack_640[0xc] = uStack_234._1_1_;
    if (uStack_234._1_1_ <= bStack_c3) {
      abStack_640[0xc] = bStack_c3;
    }
    abStack_640[0xd] = (byte)uStack_232;
    if ((byte)uStack_232 <= bStack_c2) {
      abStack_640[0xd] = bStack_c2;
    }
    abStack_640[0xe] = uStack_232._1_1_;
    if (uStack_232._1_1_ <= bStack_c1) {
      abStack_640[0xe] = bStack_c1;
    }
    if (bStack_230 <= bStack_c0) {
      bStack_230 = bStack_c0;
    }
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(bStack_230,uVar26);
    uStack_6e8 = 5;
    auVar93._1_8_ = uStack_90;
    auVar93[0] = 5;
    auVar93._9_7_ = uVar26;
    abStack_640[0xf] = bStack_230;
    goto code_r0x0123cb80;
  case 0xfd62:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar12 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar74));
    uVar104 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar32 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar104));
    uStack_240._0_2_ = -CONCAT11(bStack_ce,bStack_cf);
    sVar100 = -(short)((uint)uVar74 >> 0x10);
    uStack_240._2_1_ = (byte)sVar100;
    uStack_240._3_1_ = (byte)((ushort)sVar100 >> 8);
    uStack_238 = -CONCAT11(bStack_c6,bStack_c7);
    sVar101 = -(short)((uint)uVar104 >> 0x10);
    uStack_236._0_1_ = (byte)sVar101;
    uStack_236._1_1_ = (byte)((ushort)sVar101 >> 8);
    sVar102 = -(short)((uint6)uVar12 >> 0x20);
    uStack_23c._0_1_ = (byte)sVar102;
    uStack_23c._1_1_ = (byte)((ushort)sVar102 >> 8);
    sVar103 = -(short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12)) >> 0x30);
    sVar119 = -(short)((uint6)uVar32 >> 0x20);
    sVar120 = -(short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar32)) >> 0x30);
    uStack_23a._0_1_ = (byte)sVar103;
    uStack_23a._1_1_ = (byte)((ushort)sVar103 >> 8);
    uStack_234._0_1_ = (byte)sVar119;
    uStack_234._1_1_ = (byte)((ushort)sVar119 >> 8);
    uStack_232._0_1_ = (byte)sVar120;
    uStack_232._1_1_ = (byte)((ushort)sVar120 >> 8);
    uVar26 = CONCAT16((byte)uStack_232,
                      CONCAT15(uStack_234._1_1_,
                               CONCAT14((byte)uStack_234,
                                        CONCAT13(uStack_236._1_1_,
                                                 CONCAT12((byte)uStack_236,uStack_238)))));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,
                                                            CONCAT13(uStack_240._3_1_,
                                                                     CONCAT12(uStack_240._2_1_,
                                                                              (short)uStack_240)))))
                                );
    auVar87._1_8_ = uStack_90;
    auVar87[0] = 5;
    auVar87._9_7_ = uVar26;
code_r0x0123a118:
    fStack_a7 = auVar87._9_4_;
    uStack_a3._0_3_ = auVar87._13_3_;
    uStack_b0 = auVar87[0];
    fStack_af = auVar87._1_4_;
    uStack_ab = auVar87._5_4_;
    uStack_a3 = (float)CONCAT13(uStack_232._1_1_,(uint3)uStack_a3);
    goto code_r0x0123b938;
  case 0xfd64:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    auVar110 = ZEXT216(CONCAT11(((((((((uint)fStack_af & 0xffff) != 0 &&
                                     ((uint)fStack_af & 0xffff0000) != 0) &&
                                    ((uint)uStack_ab & 0xffff) != 0) && (uint)uStack_ab >> 0x10 != 0
                                   ) && ((uint)fStack_a7 & 0xffff) != 0) &&
                                 ((uint)fStack_a7 & 0xffff0000) != 0) &&
                                ((uint)uStack_a3 & 0xffff) != 0) && (uint)uStack_a3 >> 0x10 != 0,1))
    ;
    bStack_f30 = 0;
    goto code_r0x0123a730;
  case 0xfd65:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf));
    uVar12 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,CONCAT13(bStack_cc,uVar27)));
    uVar24 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar31 = CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7));
    uVar32 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,CONCAT13(bStack_c4,uVar31)));
    uVar25 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar32));
    uVar6 = (uint)fStack_af & 0xf;
    iVar58 = (uVar27 & 0xffff) << (ulong)uVar6;
    iVar59 = ((uint)((uint6)uVar12 >> 0x10) & 0xffff) << (ulong)uVar6;
    iVar63 = ((uint)((ulong)uVar24 >> 0x20) & 0xffff) << (ulong)uVar6;
    sVar100 = (short)((ulong)uVar24 >> 0x30) << (ulong)uVar6;
    iVar67 = (uVar31 & 0xffff) << (ulong)uVar6;
    iVar69 = ((uint)((uint6)uVar32 >> 0x10) & 0xffff) << (ulong)uVar6;
    iVar2 = ((uint)((ulong)uVar25 >> 0x20) & 0xffff) << (ulong)uVar6;
    sVar101 = (short)((ulong)uVar25 >> 0x30) << (ulong)uVar6;
    uStack_240._0_1_ = (byte)iVar58;
    uStack_240._1_1_ = (byte)((uint)iVar58 >> 8);
    uStack_240._2_1_ = (byte)iVar59;
    uStack_240._3_1_ = (byte)((uint)iVar59 >> 8);
    uStack_23c._0_1_ = (byte)iVar63;
    uStack_23c._1_1_ = (byte)((uint)iVar63 >> 8);
    uStack_23a._0_1_ = (byte)sVar100;
    uStack_23a._1_1_ = (byte)((ushort)sVar100 >> 8);
    uStack_238._0_1_ = (byte)iVar67;
    uStack_238._1_1_ = (byte)((uint)iVar67 >> 8);
    uStack_236._0_1_ = (byte)iVar69;
    uStack_236._1_1_ = (byte)((uint)iVar69 >> 8);
    uStack_234._0_1_ = (byte)iVar2;
    uStack_234._1_1_ = (byte)((uint)iVar2 >> 8);
    uStack_232._0_1_ = (byte)sVar101;
    uStack_232._1_1_ = (byte)((ushort)sVar101 >> 8);
    uVar26 = CONCAT16((byte)uStack_232,
                      CONCAT15(uStack_234._1_1_,
                               CONCAT14((byte)uStack_234,
                                        CONCAT13(uStack_236._1_1_,
                                                 CONCAT12((byte)uStack_236,(short)iVar67)))));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,
                                                            CONCAT13(uStack_240._3_1_,
                                                                     CONCAT12(uStack_240._2_1_,
                                                                              (short)iVar58))))));
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uVar26;
    bStack_1218 = uStack_232._1_1_;
    goto code_r0x0123d8fc;
  case 0xfd66:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar12 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,iVar58));
    iVar63 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar32 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,iVar63));
    uVar6 = (uint)fStack_af & 0xf;
    iVar58 = (iVar58 >> 0x10) >> uVar6;
    uStack_240._2_1_ = (byte)iVar58;
    uStack_240._3_1_ = (byte)((uint)iVar58 >> 8);
    iVar58 = (int)CONCAT11(bStack_c6,bStack_c7) >> uVar6;
    uStack_238._0_1_ = (byte)iVar58;
    uStack_238._1_1_ = (byte)((uint)iVar58 >> 8);
    iVar59 = (int)CONCAT11(bStack_ce,bStack_cf) >> uVar6;
    iVar63 = (iVar63 >> 0x10) >> uVar6;
    uStack_240._0_1_ = (byte)iVar59;
    uStack_240._1_1_ = (byte)((uint)iVar59 >> 8);
    uStack_236._0_1_ = (byte)iVar63;
    uStack_236._1_1_ = (byte)((uint)iVar63 >> 8);
    iVar63 = (int)(short)((uint6)uVar12 >> 0x20) >> uVar6;
    iVar67 = (int)(short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12)) >> 0x30) >> uVar6;
    iVar69 = (int)(short)((uint6)uVar32 >> 0x20) >> uVar6;
    iVar2 = (int)(short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar32)) >> 0x30) >> uVar6;
    uStack_23c._0_1_ = (byte)iVar63;
    uStack_23c._1_1_ = (byte)((uint)iVar63 >> 8);
    uStack_23a._0_1_ = (byte)iVar67;
    uStack_23a._1_1_ = (byte)((uint)iVar67 >> 8);
    uStack_234._0_1_ = (byte)iVar69;
    uStack_234._1_1_ = (byte)((uint)iVar69 >> 8);
    uStack_232._0_1_ = (byte)iVar2;
    uStack_232._1_1_ = (byte)((uint)iVar2 >> 8);
    uVar26 = CONCAT16((byte)uStack_232,
                      CONCAT15(uStack_234._1_1_,
                               CONCAT14((byte)uStack_234,
                                        CONCAT13(uStack_236._1_1_,
                                                 CONCAT12((byte)uStack_236,(short)iVar58)))));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,
                                                            CONCAT13(uStack_240._3_1_,
                                                                     CONCAT12(uStack_240._2_1_,
                                                                              (short)iVar59))))));
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uVar26;
    bStack_1218 = uStack_232._1_1_;
    goto code_r0x0123d8fc;
  case 0xfd67:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf));
    uVar12 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,CONCAT13(bStack_cc,uVar27)));
    uVar24 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar31 = CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7));
    uVar32 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,CONCAT13(bStack_c4,uVar31)));
    uVar25 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar32));
    uVar6 = (uint)fStack_af & 0xf;
    uVar55 = (uVar27 & 0xffff) >> (ulong)uVar6;
    uVar7 = ((uint)((uint6)uVar12 >> 0x10) & 0xffff) >> (ulong)uVar6;
    uVar8 = ((uint)((ulong)uVar24 >> 0x20) & 0xffff) >> (ulong)uVar6;
    uVar9 = (ushort)((ulong)uVar24 >> 0x30) >> (ulong)uVar6;
    uVar1 = (uVar31 & 0xffff) >> (ulong)uVar6;
    uVar54 = ((uint)((uint6)uVar32 >> 0x10) & 0xffff) >> (ulong)uVar6;
    uVar5 = ((uint)((ulong)uVar25 >> 0x20) & 0xffff) >> (ulong)uVar6;
    uVar16 = (ushort)((ulong)uVar25 >> 0x30) >> (ulong)uVar6;
    uStack_240._0_1_ = (byte)uVar55;
    uStack_240._1_1_ = (byte)(uVar55 >> 8);
    uStack_240._2_1_ = (byte)uVar7;
    uStack_240._3_1_ = (byte)(uVar7 >> 8);
    uStack_23c._0_1_ = (byte)uVar8;
    uStack_23c._1_1_ = (byte)(uVar8 >> 8);
    uStack_23a._0_1_ = (byte)uVar9;
    uStack_23a._1_1_ = (byte)(uVar9 >> 8);
    uStack_238._0_1_ = (byte)uVar1;
    uStack_238._1_1_ = (byte)(uVar1 >> 8);
    uStack_236._0_1_ = (byte)uVar54;
    uStack_236._1_1_ = (byte)(uVar54 >> 8);
    uStack_234._0_1_ = (byte)uVar5;
    uStack_234._1_1_ = (byte)(uVar5 >> 8);
    uStack_232._0_1_ = (byte)uVar16;
    uStack_232._1_1_ = (byte)(uVar16 >> 8);
    uVar26 = CONCAT16((byte)uStack_232,
                      CONCAT15(uStack_234._1_1_,
                               CONCAT14((byte)uStack_234,
                                        CONCAT13(uStack_236._1_1_,
                                                 CONCAT12((byte)uStack_236,(short)uVar1)))));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,
                                                            CONCAT13(uStack_240._3_1_,
                                                                     CONCAT12(uStack_240._2_1_,
                                                                              (short)uVar55))))));
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uVar26;
    bStack_1218 = uStack_232._1_1_;
    goto code_r0x0123d8fc;
  case 0xfd68:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    uVar104 = CONCAT13((byte)uStack_234,
                       CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    sVar100 = (short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30) +
              (short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30);
    uStack_420._0_4_ =
         (float)CONCAT22((short)((uint)uVar111 >> 0x10) + (short)((uint)uVar74 >> 0x10),
                         CONCAT11(bStack_ce,bStack_cf) + CONCAT11(uStack_240._2_1_,uStack_240._1_1_)
                        );
    uStack_420._0_6_ =
         CONCAT24((short)((uint6)uVar36 >> 0x20) + (short)((uint6)uVar12 >> 0x20),(float)uStack_420)
    ;
    uStack_420 = (double)CONCAT26((short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36)) >> 0x30) +
                                  (short)(CONCAT17((byte)uStack_238,
                                                   CONCAT16(uStack_23a._1_1_,uVar12)) >> 0x30),
                                  (int6)uStack_420);
    uStack_418._0_4_ =
         (float)CONCAT22((short)((uint)uVar117 >> 0x10) + (short)((uint)uVar104 >> 0x10),
                         CONCAT11(bStack_c6,bStack_c7) + CONCAT11((byte)uStack_236,uStack_238._1_1_)
                        );
    uStack_418._0_6_ =
         CONCAT24((short)((uint6)uVar46 >> 0x20) + (short)((uint6)uVar32 >> 0x20),(float)uStack_418)
    ;
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_528 = 5;
    uStack_51f = SUB87(uStack_418,0);
    uStack_518 = (undefined1)((ushort)sVar100 >> 8);
    dStack_527 = uStack_420;
    auVar88._1_8_ = uStack_420;
    auVar88[0] = 5;
    auVar88._9_7_ = uStack_51f;
    uVar56 = uStack_518;
    goto code_r0x0123a63c;
  case 0xfd69:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar9 = CONCAT11(uStack_240._2_1_,uStack_240._1_1_);
    iVar59 = CONCAT13((byte)uStack_23c,CONCAT12(uStack_240._3_1_,uVar9));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,iVar59));
    uVar13 = CONCAT11(bStack_ce,bStack_cf);
    uVar6 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,uVar13));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar6));
    uVar24 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36));
    uVar16 = CONCAT11((byte)uStack_236,uStack_238._1_1_);
    iVar63 = CONCAT13((byte)uStack_234,CONCAT12(uStack_236._1_1_,uVar16));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,iVar63));
    uVar48 = CONCAT11(bStack_c6,bStack_c7);
    uVar55 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,uVar48));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar55));
    uVar25 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46));
    iVar58 = (int)(short)uVar9;
    if ((iVar58 < 1) || ((short)uVar13 < 1)) {
      if ((-1 < (short)(uVar13 & uVar9)) || (-0x8000 - (short)uVar13 <= iVar58))
      goto code_r0x0123d98c;
      sVar100 = -0x8000;
    }
    else {
      sVar100 = 0x7fff;
      if (iVar58 <= (int)(0x7fff - (CONCAT12(bStack_cd,uVar13) & 0xffff))) {
code_r0x0123d98c:
        sVar100 = uVar13 + uVar9;
      }
    }
    uVar9 = (ushort)((uint)iVar59 >> 0x10);
    uVar13 = (ushort)(uVar6 >> 0x10);
    if ((iVar59 >> 0x10 < 1) || ((int)uVar6 >> 0x10 < 1)) {
      if ((-1 < (short)(uVar13 & uVar9)) || (-0x8000 - (short)uVar13 <= (int)(short)uVar9))
      goto code_r0x0123db7c;
      sVar101 = -0x8000;
    }
    else {
      sVar101 = 0x7fff;
      if ((int)(short)uVar9 <= (int)(0x7fff - (uVar6 >> 0x10))) {
code_r0x0123db7c:
        sVar101 = uVar13 + uVar9;
      }
    }
    uVar9 = (ushort)((uint6)uVar12 >> 0x20);
    uStack_420._0_4_ = (float)CONCAT22(sVar101,sVar100);
    uVar13 = (ushort)((uint6)uVar36 >> 0x20);
    if (((short)uVar9 < 1) || ((short)uVar13 < 1)) {
      if ((-1 < (short)(uVar13 & uVar9)) || (-0x8000 - (short)uVar13 <= (int)(short)uVar9))
      goto code_r0x0123dc5c;
      sVar100 = -0x8000;
    }
    else {
      sVar100 = 0x7fff;
      if ((int)(short)uVar9 <= (int)(0x7fff - ((uint)((ulong)uVar24 >> 0x20) & 0xffff))) {
code_r0x0123dc5c:
        sVar100 = uVar13 + uVar9;
      }
    }
    iVar58 = (int)(short)uVar16;
    uVar9 = (ushort)(CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12)) >> 0x30);
    uStack_420._0_6_ = CONCAT24(sVar100,(float)uStack_420);
    uVar13 = (ushort)((ulong)uVar24 >> 0x30);
    if (((short)uVar9 < 1) || ((short)uVar13 < 1)) {
      if ((-1 < (short)(uVar13 & uVar9)) || (-0x8000 - (short)uVar13 <= (int)(short)uVar9))
      goto code_r0x0123dd34;
      sVar100 = -0x8000;
    }
    else {
      sVar100 = 0x7fff;
      if ((int)(short)uVar9 <= (int)(0x7fff - (uint)uVar13)) {
code_r0x0123dd34:
        sVar100 = uVar13 + uVar9;
      }
    }
    uStack_420 = (double)CONCAT26(sVar100,(int6)uStack_420);
    if ((iVar58 < 1) || ((short)uVar48 < 1)) {
      if ((-1 < (short)(uVar48 & uVar16)) || (-0x8000 - (short)uVar48 <= iVar58))
      goto code_r0x0123de08;
      sVar100 = -0x8000;
    }
    else {
      sVar100 = 0x7fff;
      if (iVar58 <= (int)(0x7fff - (CONCAT12(bStack_c5,uVar48) & 0xffff))) {
code_r0x0123de08:
        sVar100 = uVar48 + uVar16;
      }
    }
    uVar9 = (ushort)((uint)iVar63 >> 0x10);
    uVar16 = (ushort)(uVar55 >> 0x10);
    if ((iVar63 >> 0x10 < 1) || ((int)uVar55 >> 0x10 < 1)) {
      if ((-1 < (short)(uVar16 & uVar9)) || (-0x8000 - (short)uVar16 <= (int)(short)uVar9))
      goto code_r0x0123deec;
      sVar101 = -0x8000;
    }
    else {
      sVar101 = 0x7fff;
      if ((int)(short)uVar9 <= (int)(0x7fff - (uVar55 >> 0x10))) {
code_r0x0123deec:
        sVar101 = uVar16 + uVar9;
      }
    }
    uVar9 = (ushort)((uint6)uVar32 >> 0x20);
    uStack_418._0_4_ = (float)CONCAT22(sVar101,sVar100);
    uVar16 = (ushort)((uint6)uVar46 >> 0x20);
    if (((short)uVar9 < 1) || ((short)uVar16 < 1)) {
      if ((-1 < (short)(uVar16 & uVar9)) || (-0x8000 - (short)uVar16 <= (int)(short)uVar9))
      goto code_r0x0123dfd0;
      sVar100 = -0x8000;
    }
    else {
      sVar100 = 0x7fff;
      if ((int)(short)uVar9 <= (int)(0x7fff - ((uint)((ulong)uVar25 >> 0x20) & 0xffff))) {
code_r0x0123dfd0:
        sVar100 = uVar16 + uVar9;
      }
    }
    uVar9 = (ushort)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30);
    uStack_418._0_6_ = CONCAT24(sVar100,(float)uStack_418);
    uVar16 = (ushort)((ulong)uVar25 >> 0x30);
    if (((short)uVar9 < 1) || ((short)uVar16 < 1)) {
      if ((-1 < (short)(uVar16 & uVar9)) || (-0x8000 - (short)uVar16 <= (int)(short)uVar9))
      goto code_r0x0123e0e0;
      sVar100 = -0x8000;
    }
    else {
      sVar100 = 0x7fff;
      if ((int)(short)uVar9 <= (int)(0x7fff - (uint)uVar16)) {
code_r0x0123e0e0:
        sVar100 = uVar16 + uVar9;
      }
    }
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_5d0 = 5;
    uStack_5c7 = SUB87(uStack_418,0);
    bStack_5c0 = (byte)((ushort)sVar100 >> 8);
    dStack_5cf = uStack_420;
    auVar99._1_8_ = uStack_420;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_5c7;
    bStack_1080 = bStack_5c0;
    goto code_r0x0123e408;
  case 0xfd6a:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar12 = CONCAT15(bStack_ca,
                      CONCAT14(bStack_cb,
                               CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)))
                              ));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12));
    uVar55 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar24 = CONCAT17((byte)uStack_238,
                      CONCAT16(uStack_23a._1_1_,
                               CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar55))));
    uVar1 = CONCAT13((byte)uStack_234,
                     CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar25 = CONCAT17(bStack_230,
                      CONCAT16(uStack_232._1_1_,
                               CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar1))));
    uVar32 = CONCAT15(bStack_c2,
                      CONCAT14(bStack_c3,
                               CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)))
                              ));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar32));
    uVar6 = ((uint)((ulong)uVar37 >> 0x20) & 0xffff) + ((uint)((ulong)uVar24 >> 0x20) & 0xffff);
    uVar7 = (uint)(ushort)((ulong)uVar37 >> 0x30) + (uint)(ushort)((ulong)uVar24 >> 0x30);
    uVar27 = (uint3)CONCAT11(bStack_ce,bStack_cf) +
             (uint3)CONCAT11(uStack_240._2_1_,uStack_240._1_1_);
    uVar8 = ((uint)((uint6)uVar12 >> 0x10) & 0xffff) + (uVar55 >> 0x10);
    uVar55 = ((uint)((ulong)uVar47 >> 0x20) & 0xffff) + ((uint)((ulong)uVar25 >> 0x20) & 0xffff);
    uVar31 = (uint3)CONCAT11(bStack_c6,bStack_c7) +
             (uint3)CONCAT11((byte)uStack_236,uStack_238._1_1_);
    uVar1 = ((uint)((uint6)uVar32 >> 0x10) & 0xffff) + (uVar1 >> 0x10);
    uVar54 = (uint)(ushort)((ulong)uVar47 >> 0x30) + (uint)(ushort)((ulong)uVar25 >> 0x30);
    if (0xfffe < uVar27) {
      uVar27 = 0xffff;
    }
    if (0xfffe < uVar8) {
      uVar8 = 0xffff;
    }
    uStack_420._0_6_ = (uint6)(ushort)uVar8 << 0x10;
    if (0xfffe < uVar6) {
      uVar6 = 0xffff;
    }
    if (0xfffe < uVar7) {
      uVar7 = 0xffff;
    }
    uStack_420 = (double)CONCAT26((short)uVar7,(int6)uStack_420);
    if (0xfffe < uVar31) {
      uVar31 = 0xffff;
    }
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
    uStack_418._0_4_ = (float)CONCAT22((short)uVar1,(short)uVar31);
    if (0xfffe < uVar55) {
      uVar55 = 0xffff;
    }
    uStack_418._0_6_ = CONCAT24((short)uVar55,(float)uStack_418);
    if (0xfffe < uVar54) {
      uVar54 = 0xffff;
    }
    uStack_420 = (double)CONCAT62(uStack_420._2_6_,(short)uVar27);
    uStack_420._0_6_ = CONCAT24((short)uVar6,(float)uStack_420);
    uStack_420 = (double)CONCAT26((short)uVar7,(int6)uStack_420);
    uStack_418 = (double)CONCAT26((short)uVar54,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_5e8 = 5;
    uStack_5df = SUB87(uStack_418,0);
    uStack_5d8 = (undefined1)(uVar54 >> 8);
    dStack_5e7 = uStack_420;
    fStack_a7 = (float)uStack_418;
    uStack_a3._0_3_ = (uint3)((ulong)uStack_418 >> 0x20);
    uStack_b0 = 5;
    fStack_af = (float)uStack_420;
    uStack_ab = (float)((ulong)uStack_420 >> 0x20);
    uStack_a3 = (float)CONCAT13(uStack_5d8,(uint3)uStack_a3);
    goto code_r0x0123e410;
  case 0xfd6b:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    uVar104 = CONCAT13((byte)uStack_234,
                       CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    sVar100 = (short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30) -
              (short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30);
    uStack_420._0_4_ =
         (float)CONCAT22((short)((uint)uVar74 >> 0x10) - (short)((uint)uVar111 >> 0x10),
                         CONCAT11(uStack_240._2_1_,uStack_240._1_1_) - CONCAT11(bStack_ce,bStack_cf)
                        );
    uStack_420._0_6_ =
         CONCAT24((short)((uint6)uVar12 >> 0x20) - (short)((uint6)uVar36 >> 0x20),(float)uStack_420)
    ;
    uStack_420 = (double)CONCAT26((short)(CONCAT17((byte)uStack_238,
                                                   CONCAT16(uStack_23a._1_1_,uVar12)) >> 0x30) -
                                  (short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36)) >> 0x30),
                                  (int6)uStack_420);
    uStack_418._0_4_ =
         (float)CONCAT22((short)((uint)uVar104 >> 0x10) - (short)((uint)uVar117 >> 0x10),
                         CONCAT11((byte)uStack_236,uStack_238._1_1_) - CONCAT11(bStack_c6,bStack_c7)
                        );
    uStack_418._0_6_ =
         CONCAT24((short)((uint6)uVar32 >> 0x20) - (short)((uint6)uVar46 >> 0x20),(float)uStack_418)
    ;
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    abStack_548[8] = 5;
    uStack_537 = SUB87(uStack_418,0);
    uStack_530 = (undefined1)((ushort)sVar100 >> 8);
    dStack_53f = uStack_420;
    auVar88._1_8_ = uStack_420;
    auVar88[0] = 5;
    auVar88._9_7_ = uStack_537;
    uVar56 = uStack_530;
    goto code_r0x0123a63c;
  case 0xfd6c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    sVar102 = CONCAT11(bStack_ce,bStack_cf);
    iVar63 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,sVar102));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,iVar63));
    uVar24 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36));
    sVar100 = CONCAT11(uStack_240._2_1_,uStack_240._1_1_);
    uVar74 = CONCAT13((byte)uStack_23c,CONCAT12(uStack_240._3_1_,sVar100));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    lVar61 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    sVar101 = CONCAT11((byte)uStack_236,uStack_238._1_1_);
    uVar104 = CONCAT13((byte)uStack_234,CONCAT12(uStack_236._1_1_,sVar101));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    lVar68 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    sVar103 = CONCAT11(bStack_c6,bStack_c7);
    iVar67 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,sVar103));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,iVar67));
    uVar25 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46));
    iVar58 = (int)sVar102;
    iVar59 = (int)sVar100;
    if ((iVar59 < 0) || (-1 < iVar58)) {
      if ((-1 < iVar59) ||
         ((iVar58 < 1 || ((int)((CONCAT12(bStack_cd,sVar102) & 0xffff) - 0x8000) <= iVar59))))
      goto code_r0x0123d81c;
      sVar119 = -0x8000;
    }
    else {
      sVar119 = 0x7fff;
      if (iVar59 <= iVar58 + 0x7fff) {
code_r0x0123d81c:
        sVar119 = sVar100 - sVar102;
      }
    }
    sVar102 = (short)((uint)uVar74 >> 0x10);
    sVar100 = (short)((uint)iVar63 >> 0x10);
    if (((char)(byte)uStack_23c < '\0') || (-1 < iVar63 >> 0x10)) {
      if ((-1 < (char)(byte)uStack_23c) ||
         ((iVar63 >> 0x10 < 1 ||
          ((int)(((uint)((uint6)uVar36 >> 0x10) & 0xffff) - 0x8000) <= (int)sVar102))))
      goto code_r0x0123dafc;
      sVar120 = -0x8000;
    }
    else {
      sVar120 = 0x7fff;
      if ((int)sVar102 <= sVar100 + 0x7fff) {
code_r0x0123dafc:
        sVar120 = sVar102 - sVar100;
      }
    }
    iVar58 = (int)sVar101;
    lVar71 = lVar61 << 0x10;
    uStack_420._0_4_ = (float)CONCAT22(sVar120,sVar119);
    sVar100 = (short)((uint6)uVar12 >> 0x20);
    sVar102 = (short)((uint6)uVar36 >> 0x20);
    if ((lVar71 < 0) || (-1 < (char)bStack_ca)) {
      if ((-1 < lVar71) ||
         ((sVar102 < 1 || ((int)(((uint)((ulong)uVar24 >> 0x20) & 0xffff) - 0x8000) <= (int)sVar100)
          ))) goto code_r0x0123dbdc;
      sVar119 = -0x8000;
    }
    else {
      sVar119 = 0x7fff;
      if ((int)sVar100 <= sVar102 + 0x7fff) {
code_r0x0123dbdc:
        sVar119 = sVar100 - sVar102;
      }
    }
    sVar100 = (short)((ulong)lVar61 >> 0x30);
    uStack_420._0_6_ = CONCAT24(sVar119,(float)uStack_420);
    uVar9 = (ushort)((ulong)uVar24 >> 0x30);
    if (((char)(byte)uStack_238 < '\0') || (-1 < (char)bStack_c8)) {
      if ((-1 < (char)(byte)uStack_238) ||
         (((short)uVar9 < 1 || ((int)(uVar9 - 0x8000) <= (int)sVar100)))) goto code_r0x0123dcc0;
      sVar102 = -0x8000;
    }
    else {
      sVar102 = 0x7fff;
      if ((int)sVar100 <= (short)uVar9 + 0x7fff) {
code_r0x0123dcc0:
        sVar102 = sVar100 - uVar9;
      }
    }
    iVar59 = (int)sVar103;
    uStack_420 = (double)CONCAT26(sVar102,(int6)uStack_420);
    if ((iVar58 < 0) || (-1 < iVar59)) {
      if ((-1 < iVar58) ||
         ((iVar59 < 1 || ((int)((CONCAT12(bStack_c5,sVar103) & 0xffff) - 0x8000) <= iVar58))))
      goto code_r0x0123dd8c;
      sVar100 = -0x8000;
    }
    else {
      sVar100 = 0x7fff;
      if (iVar58 <= iVar59 + 0x7fff) {
code_r0x0123dd8c:
        sVar100 = sVar101 - sVar103;
      }
    }
    sVar102 = (short)((uint)uVar104 >> 0x10);
    sVar101 = (short)((uint)iVar67 >> 0x10);
    if (((char)(byte)uStack_234 < '\0') || (-1 < iVar67 >> 0x10)) {
      if ((-1 < (char)(byte)uStack_234) ||
         ((iVar67 >> 0x10 < 1 ||
          ((int)(((uint)((uint6)uVar46 >> 0x10) & 0xffff) - 0x8000) <= (int)sVar102))))
      goto code_r0x0123de70;
      sVar103 = -0x8000;
    }
    else {
      sVar103 = 0x7fff;
      if ((int)sVar102 <= sVar101 + 0x7fff) {
code_r0x0123de70:
        sVar103 = sVar102 - sVar101;
      }
    }
    lVar61 = lVar68 << 0x10;
    uStack_418._0_4_ = (float)CONCAT22(sVar103,sVar100);
    sVar100 = (short)((uint6)uVar32 >> 0x20);
    sVar101 = (short)((uint6)uVar46 >> 0x20);
    if ((lVar61 < 0) || (-1 < (char)bStack_c2)) {
      if ((-1 < lVar61) ||
         ((sVar101 < 1 || ((int)(((uint)((ulong)uVar25 >> 0x20) & 0xffff) - 0x8000) <= (int)sVar100)
          ))) goto code_r0x0123df4c;
      sVar102 = -0x8000;
    }
    else {
      sVar102 = 0x7fff;
      if ((int)sVar100 <= sVar101 + 0x7fff) {
code_r0x0123df4c:
        sVar102 = sVar100 - sVar101;
      }
    }
    sVar100 = (short)((ulong)lVar68 >> 0x30);
    uStack_418._0_6_ = CONCAT24(sVar102,(float)uStack_418);
    uVar9 = (ushort)((ulong)uVar25 >> 0x30);
    if (((char)bStack_230 < '\0') || (-1 < (char)bStack_c0)) {
      if ((-1 < (char)bStack_230) || (((short)uVar9 < 1 || ((int)(uVar9 - 0x8000) <= (int)sVar100)))
         ) goto code_r0x0123e044;
      sVar101 = -0x8000;
    }
    else {
      sVar101 = 0x7fff;
      if ((int)sVar100 <= (short)uVar9 + 0x7fff) {
code_r0x0123e044:
        sVar101 = sVar100 - uVar9;
      }
    }
    uStack_418 = (double)CONCAT26(sVar101,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_600 = 5;
    uStack_5f7 = SUB87(uStack_418,0);
    bStack_5f0 = (byte)((ushort)sVar101 >> 8);
    dStack_5ff = uStack_420;
    auVar99._1_8_ = uStack_420;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_5f7;
    bStack_1080 = bStack_5f0;
    goto code_r0x0123e408;
  case 0xfd6d:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar9 = CONCAT11(uStack_240._2_1_,uStack_240._1_1_);
    uVar74 = CONCAT13((byte)uStack_23c,CONCAT12(uStack_240._3_1_,uVar9));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar13 = CONCAT11(bStack_ce,bStack_cf);
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,uVar13));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36));
    uVar16 = CONCAT11((byte)uStack_236,uStack_238._1_1_);
    uVar104 = CONCAT13((byte)uStack_234,CONCAT12(uStack_236._1_1_,uVar16));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar48 = CONCAT11(bStack_c6,bStack_c7);
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,uVar48));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46));
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    sVar101 = (short)((uint)uVar111 >> 0x10);
    sVar100 = (short)((uint)uVar74 >> 0x10);
    if (((uint)((uint6)uVar12 >> 0x10) & 0xffff) <= ((uint)((uint6)uVar36 >> 0x10) & 0xffff)) {
      sVar100 = sVar101;
    }
    sVar103 = (short)((uint6)uVar36 >> 0x20);
    sVar102 = (short)((uint6)uVar12 >> 0x20);
    if (((uint)((ulong)uVar24 >> 0x20) & 0xffff) <= ((uint)((ulong)uVar37 >> 0x20) & 0xffff)) {
      sVar102 = sVar103;
    }
    uStack_420._0_4_ = (float)CONCAT22(sVar100 - sVar101,uVar9 - uVar13);
    uVar9 = (ushort)((ulong)uVar24 >> 0x30);
    uVar13 = (ushort)((ulong)uVar37 >> 0x30);
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    if (uVar16 <= uVar48) {
      uVar16 = uVar48;
    }
    uStack_420._0_6_ = CONCAT24(sVar102 - sVar103,(float)uStack_420);
    sVar101 = (short)((uint)uVar117 >> 0x10);
    uStack_420 = (double)CONCAT26(uVar9 - uVar13,(int6)uStack_420);
    sVar102 = (short)((uint6)uVar46 >> 0x20);
    sVar100 = (short)((uint)uVar104 >> 0x10);
    if (((uint)((uint6)uVar32 >> 0x10) & 0xffff) <= ((uint)((uint6)uVar46 >> 0x10) & 0xffff)) {
      sVar100 = sVar101;
    }
    sVar103 = (short)((uint6)uVar32 >> 0x20);
    if (((uint)((ulong)uVar25 >> 0x20) & 0xffff) <= ((uint)((ulong)uVar47 >> 0x20) & 0xffff)) {
      sVar103 = sVar102;
    }
    uVar13 = (ushort)((ulong)uVar47 >> 0x30);
    uVar9 = (ushort)((ulong)uVar25 >> 0x30);
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    uStack_418._0_4_ = (float)CONCAT22(sVar100 - sVar101,uVar16 - uVar48);
    uStack_418._0_6_ = CONCAT24(sVar103 - sVar102,(float)uStack_418);
    uStack_418 = (double)CONCAT26(uVar9 - uVar13,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_618 = 5;
    uStack_60f = SUB87(uStack_418,0);
    uStack_608 = (undefined1)((ushort)(uVar9 - uVar13) >> 8);
    dStack_617 = uStack_420;
    auVar88._1_8_ = uStack_420;
    auVar88[0] = 5;
    auVar88._9_7_ = uStack_60f;
    uVar56 = uStack_608;
    goto code_r0x0123a63c;
  case 0xfd6e:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    uVar104 = CONCAT13((byte)uStack_234,
                       CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    sVar100 = (short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30) *
              (short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30);
    uStack_420._0_4_ =
         (float)CONCAT22((short)((uint)uVar111 >> 0x10) * (short)((uint)uVar74 >> 0x10),
                         CONCAT11(bStack_ce,bStack_cf) * CONCAT11(uStack_240._2_1_,uStack_240._1_1_)
                        );
    uStack_420._0_6_ =
         CONCAT24((short)((uint6)uVar36 >> 0x20) * (short)((uint6)uVar12 >> 0x20),(float)uStack_420)
    ;
    uStack_420 = (double)CONCAT26((short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36)) >> 0x30) *
                                  (short)(CONCAT17((byte)uStack_238,
                                                   CONCAT16(uStack_23a._1_1_,uVar12)) >> 0x30),
                                  (int6)uStack_420);
    uStack_418._0_4_ =
         (float)CONCAT22((short)((uint)uVar117 >> 0x10) * (short)((uint)uVar104 >> 0x10),
                         CONCAT11(bStack_c6,bStack_c7) * CONCAT11((byte)uStack_236,uStack_238._1_1_)
                        );
    uStack_418._0_6_ =
         CONCAT24((short)((uint6)uVar46 >> 0x20) * (short)((uint6)uVar32 >> 0x20),(float)uStack_418)
    ;
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    puVar66 = &uStack_5d0;
    uStack_558 = 5;
    uStack_54f = SUB87(uStack_418,0);
    abStack_548[0] = (byte)((ushort)sVar100 >> 8);
    dStack_557 = uStack_420;
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_54f;
    goto code_r0x0123aa7c;
  case 0xfd6f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    sVar100 = CONCAT11(uStack_240._2_1_,uStack_240._1_1_);
    uVar74 = CONCAT13((byte)uStack_23c,CONCAT12(uStack_240._3_1_,sVar100));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    sVar102 = CONCAT11(bStack_ce,bStack_cf);
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,sVar102));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    sVar101 = CONCAT11((byte)uStack_236,uStack_238._1_1_);
    uVar104 = CONCAT13((byte)uStack_234,CONCAT12(uStack_236._1_1_,sVar101));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    sVar103 = CONCAT11(bStack_c6,bStack_c7);
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,sVar103));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    if (sVar102 <= sVar100) {
      sVar100 = sVar102;
    }
    sVar119 = (short)((uint)uVar111 >> 0x10);
    sVar102 = (short)((uint)uVar74 >> 0x10);
    if (sVar119 <= sVar102) {
      sVar102 = sVar119;
    }
    sVar120 = (short)((uint6)uVar36 >> 0x20);
    sVar119 = (short)((uint6)uVar12 >> 0x20);
    uStack_420._0_4_ = (float)CONCAT22(sVar102,sVar100);
    if (sVar120 <= sVar119) {
      sVar119 = sVar120;
    }
    sVar102 = (short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36)) >> 0x30);
    sVar100 = (short)(CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12)) >> 0x30);
    if (sVar102 <= sVar100) {
      sVar100 = sVar102;
    }
    uStack_420._0_6_ = CONCAT24(sVar119,(float)uStack_420);
    uStack_420 = (double)CONCAT26(sVar100,(int6)uStack_420);
    if (sVar103 <= sVar101) {
      sVar101 = sVar103;
    }
    sVar102 = (short)((uint)uVar117 >> 0x10);
    sVar100 = (short)((uint)uVar104 >> 0x10);
    if (sVar102 <= sVar100) {
      sVar100 = sVar102;
    }
    sVar103 = (short)((uint6)uVar46 >> 0x20);
    sVar102 = (short)((uint6)uVar32 >> 0x20);
    uStack_418._0_4_ = (float)CONCAT22(sVar100,sVar101);
    if (sVar103 <= sVar102) {
      sVar102 = sVar103;
    }
    sVar101 = (short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30);
    sVar100 = (short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30);
    uStack_418._0_6_ = CONCAT24(sVar102,(float)uStack_418);
    if (sVar101 <= sVar100) {
      sVar100 = sVar101;
    }
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_570 = 5;
    uStack_567 = SUB87(uStack_418,0);
    uStack_560 = (undefined1)((ushort)sVar100 >> 8);
    dStack_56f = uStack_420;
    auVar88._1_8_ = uStack_420;
    auVar88[0] = 5;
    auVar88._9_7_ = uStack_567;
    uVar56 = uStack_560;
    goto code_r0x0123a63c;
  case 0xfd70:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar9 = CONCAT11(uStack_240._2_1_,uStack_240._1_1_);
    uVar74 = CONCAT13((byte)uStack_23c,CONCAT12(uStack_240._3_1_,uVar9));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar13 = CONCAT11(bStack_ce,bStack_cf);
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,uVar13));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36));
    uVar16 = CONCAT11((byte)uStack_236,uStack_238._1_1_);
    uVar104 = CONCAT13((byte)uStack_234,CONCAT12(uStack_236._1_1_,uVar16));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar48 = CONCAT11(bStack_c6,bStack_c7);
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,uVar48));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46));
    if (uVar13 <= uVar9) {
      uVar9 = uVar13;
    }
    uVar10 = (short)((uint)uVar74 >> 0x10);
    if (((uint)((uint6)uVar36 >> 0x10) & 0xffff) <= ((uint)((uint6)uVar12 >> 0x10) & 0xffff)) {
      uVar10 = (short)((uint)uVar111 >> 0x10);
    }
    uStack_420._0_4_ = (float)CONCAT22(uVar10,uVar9);
    uVar10 = (short)((uint6)uVar12 >> 0x20);
    if (((uint)((ulong)uVar37 >> 0x20) & 0xffff) <= ((uint)((ulong)uVar24 >> 0x20) & 0xffff)) {
      uVar10 = (short)((uint6)uVar36 >> 0x20);
    }
    uVar9 = (ushort)((ulong)uVar24 >> 0x30);
    uVar13 = (ushort)((ulong)uVar37 >> 0x30);
    if (uVar13 <= uVar9) {
      uVar9 = uVar13;
    }
    uStack_420._0_6_ = CONCAT24(uVar10,(float)uStack_420);
    uStack_420 = (double)CONCAT26(uVar9,(int6)uStack_420);
    if (uVar48 <= uVar16) {
      uVar16 = uVar48;
    }
    uVar10 = (short)((uint)uVar104 >> 0x10);
    if (((uint)((uint6)uVar46 >> 0x10) & 0xffff) <= ((uint)((uint6)uVar32 >> 0x10) & 0xffff)) {
      uVar10 = (short)((uint)uVar117 >> 0x10);
    }
    uVar3 = (short)((uint6)uVar32 >> 0x20);
    if (((uint)((ulong)uVar47 >> 0x20) & 0xffff) <= ((uint)((ulong)uVar25 >> 0x20) & 0xffff)) {
      uVar3 = (short)((uint6)uVar46 >> 0x20);
    }
    uVar9 = (ushort)((ulong)uVar25 >> 0x30);
    uVar13 = (ushort)((ulong)uVar47 >> 0x30);
    if (uVar13 <= uVar9) {
      uVar9 = uVar13;
    }
    uStack_418._0_4_ = (float)CONCAT22(uVar10,uVar16);
    uStack_418 = (double)CONCAT26(uVar9,CONCAT24(uVar3,(float)uStack_418));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_588 = 5;
    uStack_57f = SUB87(uStack_418,0);
    uStack_578 = (undefined1)(uVar9 >> 8);
    dStack_587 = uStack_420;
    auVar88._1_8_ = uStack_420;
    auVar88[0] = 5;
    auVar88._9_7_ = uStack_57f;
    uVar56 = uStack_578;
    goto code_r0x0123a63c;
  case 0xfd71:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    sVar100 = CONCAT11(uStack_240._2_1_,uStack_240._1_1_);
    uVar74 = CONCAT13((byte)uStack_23c,CONCAT12(uStack_240._3_1_,sVar100));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    sVar102 = CONCAT11(bStack_ce,bStack_cf);
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,sVar102));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    sVar101 = CONCAT11((byte)uStack_236,uStack_238._1_1_);
    uVar104 = CONCAT13((byte)uStack_234,CONCAT12(uStack_236._1_1_,sVar101));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    sVar103 = CONCAT11(bStack_c6,bStack_c7);
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,sVar103));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    if (sVar100 <= sVar102) {
      sVar100 = sVar102;
    }
    sVar119 = (short)((uint)uVar111 >> 0x10);
    sVar102 = (short)((uint)uVar74 >> 0x10);
    if (sVar102 <= sVar119) {
      sVar102 = sVar119;
    }
    sVar120 = (short)((uint6)uVar36 >> 0x20);
    sVar119 = (short)((uint6)uVar12 >> 0x20);
    uStack_420._0_4_ = (float)CONCAT22(sVar102,sVar100);
    if (sVar119 <= sVar120) {
      sVar119 = sVar120;
    }
    sVar102 = (short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36)) >> 0x30);
    sVar100 = (short)(CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12)) >> 0x30);
    if (sVar100 <= sVar102) {
      sVar100 = sVar102;
    }
    uStack_420._0_6_ = CONCAT24(sVar119,(float)uStack_420);
    uStack_420 = (double)CONCAT26(sVar100,(int6)uStack_420);
    if (sVar101 <= sVar103) {
      sVar101 = sVar103;
    }
    sVar102 = (short)((uint)uVar117 >> 0x10);
    sVar100 = (short)((uint)uVar104 >> 0x10);
    if (sVar100 <= sVar102) {
      sVar100 = sVar102;
    }
    sVar103 = (short)((uint6)uVar46 >> 0x20);
    sVar102 = (short)((uint6)uVar32 >> 0x20);
    uStack_418._0_4_ = (float)CONCAT22(sVar100,sVar101);
    if (sVar102 <= sVar103) {
      sVar102 = sVar103;
    }
    sVar101 = (short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30);
    sVar100 = (short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >> 0x30);
    uStack_418._0_6_ = CONCAT24(sVar102,(float)uStack_418);
    if (sVar100 <= sVar101) {
      sVar100 = sVar101;
    }
    uStack_418 = (double)CONCAT26(sVar100,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_5a0 = 5;
    uStack_597 = SUB87(uStack_418,0);
    uStack_590 = (undefined1)((ushort)sVar100 >> 8);
    dStack_59f = uStack_420;
    auVar88._1_8_ = uStack_420;
    auVar88[0] = 5;
    auVar88._9_7_ = uStack_597;
    uVar56 = uStack_590;
    goto code_r0x0123a63c;
  case 0xfd72:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar9 = CONCAT11(uStack_240._2_1_,uStack_240._1_1_);
    uVar74 = CONCAT13((byte)uStack_23c,CONCAT12(uStack_240._3_1_,uVar9));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    uVar24 = CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12));
    uVar13 = CONCAT11(bStack_ce,bStack_cf);
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,uVar13));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    uVar37 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36));
    uVar16 = CONCAT11((byte)uStack_236,uStack_238._1_1_);
    uVar104 = CONCAT13((byte)uStack_234,CONCAT12(uStack_236._1_1_,uVar16));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    uVar25 = CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32));
    uVar48 = CONCAT11(bStack_c6,bStack_c7);
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,uVar48));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    uVar47 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46));
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    uVar10 = (short)((uint)uVar74 >> 0x10);
    if (((uint)((uint6)uVar12 >> 0x10) & 0xffff) <= ((uint)((uint6)uVar36 >> 0x10) & 0xffff)) {
      uVar10 = (short)((uint)uVar111 >> 0x10);
    }
    uStack_420._0_4_ = (float)CONCAT22(uVar10,uVar9);
    uVar10 = (short)((uint6)uVar12 >> 0x20);
    if (((uint)((ulong)uVar24 >> 0x20) & 0xffff) <= ((uint)((ulong)uVar37 >> 0x20) & 0xffff)) {
      uVar10 = (short)((uint6)uVar36 >> 0x20);
    }
    uVar9 = (ushort)((ulong)uVar24 >> 0x30);
    uVar13 = (ushort)((ulong)uVar37 >> 0x30);
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    uStack_420._0_6_ = CONCAT24(uVar10,(float)uStack_420);
    uStack_420 = (double)CONCAT26(uVar9,(int6)uStack_420);
    if (uVar16 <= uVar48) {
      uVar16 = uVar48;
    }
    uVar10 = (short)((uint)uVar104 >> 0x10);
    if (((uint)((uint6)uVar32 >> 0x10) & 0xffff) <= ((uint)((uint6)uVar46 >> 0x10) & 0xffff)) {
      uVar10 = (short)((uint)uVar117 >> 0x10);
    }
    uVar3 = (short)((uint6)uVar32 >> 0x20);
    if (((uint)((ulong)uVar25 >> 0x20) & 0xffff) <= ((uint)((ulong)uVar47 >> 0x20) & 0xffff)) {
      uVar3 = (short)((uint6)uVar46 >> 0x20);
    }
    uVar9 = (ushort)((ulong)uVar25 >> 0x30);
    uVar13 = (ushort)((ulong)uVar47 >> 0x30);
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    uStack_418._0_4_ = (float)CONCAT22(uVar10,uVar16);
    uStack_418 = (double)CONCAT26(uVar9,CONCAT24(uVar3,(float)uStack_418));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_5b8 = 5;
    uStack_5af = SUB87(uStack_418,0);
    uStack_5a8 = (undefined1)(uVar9 >> 8);
    dStack_5b7 = uStack_420;
    auVar88._1_8_ = uStack_420;
    auVar88[0] = 5;
    auVar88._9_7_ = uStack_5af;
    uVar56 = uStack_5a8;
code_r0x0123a63c:
    fStack_a7 = auVar88._9_4_;
    uStack_a3._0_3_ = auVar88._13_3_;
    uStack_b0 = auVar88[0];
    fStack_af = auVar88._1_4_;
    uStack_ab = auVar88._5_4_;
    uStack_a3 = (float)CONCAT13(uVar56,(uint3)uStack_a3);
    uStack_420 = uStack_90;
    uStack_418 = uStack_88;
    goto code_r0x0123e410;
  case 0xfd73:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = -CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    iVar59 = -CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    iVar63 = -CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    iVar67 = -CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_23c._0_1_ = (byte)iVar59;
    uStack_23c._1_1_ = (byte)((uint)iVar59 >> 8);
    uStack_23a._0_1_ = (byte)((uint)iVar59 >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)iVar59 >> 0x18);
    uStack_240._0_1_ = (byte)iVar58;
    uStack_240._1_1_ = (byte)((uint)iVar58 >> 8);
    uStack_240._2_1_ = (byte)((uint)iVar58 >> 0x10);
    uStack_240._3_1_ = (byte)((uint)iVar58 >> 0x18);
    uStack_234._0_1_ = (byte)iVar67;
    uStack_234._1_1_ = (byte)((uint)iVar67 >> 8);
    uStack_232._0_1_ = (byte)((uint)iVar67 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)iVar67 >> 0x18);
    uStack_238._0_1_ = (byte)iVar63;
    uStack_238._1_1_ = (byte)((uint)iVar63 >> 8);
    uStack_236._0_1_ = (byte)((uint)iVar63 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)iVar63 >> 0x18);
    uVar26 = CONCAT16((byte)uStack_232,CONCAT15(uStack_234._1_1_,CONCAT14((byte)uStack_234,iVar63)))
    ;
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,iVar58))));
    auVar89._1_8_ = uStack_90;
    auVar89[0] = 5;
    auVar89._9_7_ = uVar26;
    bVar123 = uStack_232._1_1_;
    goto code_r0x0123aed4;
  case 0xfd75:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    auVar110 = ZEXT216(CONCAT11(((fStack_af != 0.0 && uStack_ab != 0.0) && fStack_a7 != 0.0) &&
                                uStack_a3 != 0.0,1));
    bStack_f30 = 0;
    goto code_r0x0123a730;
  case 0xfd76:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))) <<
             (ulong)((uint)fStack_af & 0x1f);
    iVar59 = CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))) <<
             (ulong)((uint)fStack_af & 0x1f);
    iVar63 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))) <<
             (ulong)((uint)fStack_af & 0x1f);
    iVar67 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) <<
             (ulong)((uint)fStack_af & 0x1f);
    uStack_23c._0_1_ = (byte)iVar59;
    uStack_23c._1_1_ = (byte)((uint)iVar59 >> 8);
    uStack_23a._0_1_ = (byte)((uint)iVar59 >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)iVar59 >> 0x18);
    uStack_240._0_1_ = (byte)iVar58;
    uStack_240._1_1_ = (byte)((uint)iVar58 >> 8);
    uStack_240._2_1_ = (byte)((uint)iVar58 >> 0x10);
    uStack_240._3_1_ = (byte)((uint)iVar58 >> 0x18);
    uStack_234._0_1_ = (byte)iVar67;
    uStack_234._1_1_ = (byte)((uint)iVar67 >> 8);
    uStack_232._0_1_ = (byte)((uint)iVar67 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)iVar67 >> 0x18);
    uStack_238._0_1_ = (byte)iVar63;
    uStack_238._1_1_ = (byte)((uint)iVar63 >> 8);
    uStack_236._0_1_ = (byte)((uint)iVar63 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)iVar63 >> 0x18);
    uVar26 = CONCAT16((byte)uStack_232,CONCAT15(uStack_234._1_1_,CONCAT14((byte)uStack_234,iVar63)))
    ;
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,iVar58))));
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uVar26;
    bStack_1218 = uStack_232._1_1_;
    goto code_r0x0123d8fc;
  case 0xfd77:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))) >>
             ((uint)fStack_af & 0x1f);
    iVar59 = CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))) >>
             ((uint)fStack_af & 0x1f);
    iVar63 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))) >>
             ((uint)fStack_af & 0x1f);
    iVar67 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) >>
             ((uint)fStack_af & 0x1f);
    uStack_23c._0_1_ = (byte)iVar59;
    uStack_23c._1_1_ = (byte)((uint)iVar59 >> 8);
    uStack_23a._0_1_ = (byte)((uint)iVar59 >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)iVar59 >> 0x18);
    uStack_240._0_1_ = (byte)iVar58;
    uStack_240._1_1_ = (byte)((uint)iVar58 >> 8);
    uStack_240._2_1_ = (byte)((uint)iVar58 >> 0x10);
    uStack_240._3_1_ = (byte)((uint)iVar58 >> 0x18);
    uStack_234._0_1_ = (byte)iVar67;
    uStack_234._1_1_ = (byte)((uint)iVar67 >> 8);
    uStack_232._0_1_ = (byte)((uint)iVar67 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)iVar67 >> 0x18);
    uStack_238._0_1_ = (byte)iVar63;
    uStack_238._1_1_ = (byte)((uint)iVar63 >> 8);
    uStack_236._0_1_ = (byte)((uint)iVar63 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)iVar63 >> 0x18);
    uVar26 = CONCAT16((byte)uStack_232,CONCAT15(uStack_234._1_1_,CONCAT14((byte)uStack_234,iVar63)))
    ;
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,iVar58))));
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uVar26;
    bStack_1218 = uStack_232._1_1_;
    goto code_r0x0123d8fc;
  case 0xfd78:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar6 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))) >>
            (ulong)((uint)fStack_af & 0x1f);
    uVar55 = CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))) >>
             (ulong)((uint)fStack_af & 0x1f);
    uVar7 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))) >>
            (ulong)((uint)fStack_af & 0x1f);
    uVar8 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) >>
            (ulong)((uint)fStack_af & 0x1f);
    uStack_23c._0_1_ = (byte)uVar55;
    uStack_23c._1_1_ = (byte)(uVar55 >> 8);
    uStack_23a._0_1_ = (byte)(uVar55 >> 0x10);
    uStack_23a._1_1_ = (byte)(uVar55 >> 0x18);
    uStack_240._0_1_ = (byte)uVar6;
    uStack_240._1_1_ = (byte)(uVar6 >> 8);
    uStack_240._2_1_ = (byte)(uVar6 >> 0x10);
    uStack_240._3_1_ = (byte)(uVar6 >> 0x18);
    uStack_234._0_1_ = (byte)uVar8;
    uStack_234._1_1_ = (byte)(uVar8 >> 8);
    uStack_232._0_1_ = (byte)(uVar8 >> 0x10);
    uStack_232._1_1_ = (byte)(uVar8 >> 0x18);
    uStack_238._0_1_ = (byte)uVar7;
    uStack_238._1_1_ = (byte)(uVar7 >> 8);
    uStack_236._0_1_ = (byte)(uVar7 >> 0x10);
    uStack_236._1_1_ = (byte)(uVar7 >> 0x18);
    uVar26 = CONCAT16((byte)uStack_232,CONCAT15(uStack_234._1_1_,CONCAT14((byte)uStack_234,uVar7)));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,CONCAT14((byte)uStack_23c,uVar6)
                                                  )));
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uVar26;
    bStack_1218 = uStack_232._1_1_;
    goto code_r0x0123d8fc;
  case 0xfd79:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT44(CONCAT13(bStack_c8,
                                           CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))) +
                                  CONCAT13((byte)uStack_238,
                                           CONCAT12(uStack_23a._1_1_,
                                                    CONCAT11((byte)uStack_23a,uStack_23c._1_1_))),
                                  CONCAT13(bStack_cc,
                                           CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))) +
                                  CONCAT13((byte)uStack_23c,
                                           CONCAT12(uStack_240._3_1_,
                                                    CONCAT11(uStack_240._2_1_,uStack_240._1_1_))));
    uStack_418 = (double)CONCAT44(CONCAT13(bStack_c0,
                                           CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) +
                                  CONCAT13(bStack_230,
                                           CONCAT12(uStack_232._1_1_,
                                                    CONCAT11((byte)uStack_232,uStack_234._1_1_))),
                                  CONCAT13(bStack_c4,
                                           CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))) +
                                  CONCAT13((byte)uStack_234,
                                           CONCAT12(uStack_236._1_1_,
                                                    CONCAT11((byte)uStack_236,uStack_238._1_1_))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    puVar66 = auStack_4c8;
code_r0x0123a8cc:
    puVar66[0x90] = 5;
    *(double *)(puVar66 + 0x99) = uStack_88;
    *(double *)(puVar66 + 0x91) = uStack_90;
    auVar93 = *(undefined1 (*) [16])(puVar66 + 0x90);
    bStack_230 = puVar66[0xa0];
    goto code_r0x0123cb80;
  case 0xfd7c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13(bStack_230,
                      CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))) -
             CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_420 = (double)CONCAT44(CONCAT13((byte)uStack_238,
                                           CONCAT12(uStack_23a._1_1_,
                                                    CONCAT11((byte)uStack_23a,uStack_23c._1_1_))) -
                                  CONCAT13(bStack_c8,
                                           CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))),
                                  CONCAT13((byte)uStack_23c,
                                           CONCAT12(uStack_240._3_1_,
                                                    CONCAT11(uStack_240._2_1_,uStack_240._1_1_))) -
                                  CONCAT13(bStack_cc,
                                           CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uStack_418 = (double)CONCAT44(iVar58,CONCAT13((byte)uStack_234,
                                                  CONCAT12(uStack_236._1_1_,
                                                           CONCAT11((byte)uStack_236,
                                                                    uStack_238._1_1_))) -
                                         CONCAT13(bStack_c4,
                                                  CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)))
                                 );
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    puVar66 = auStack_4c8;
    uStack_450 = 5;
    uStack_447 = SUB87(uStack_418,0);
    uStack_440 = (undefined1)((uint)iVar58 >> 0x18);
    dStack_44f = uStack_420;
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_447;
code_r0x0123aa7c:
    bStack_230 = puVar66[0x88];
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    goto code_r0x0123cb80;
  case 0xfd7f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) *
             CONCAT13(bStack_230,
                      CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)));
    uStack_420 = (double)CONCAT44(CONCAT13(bStack_c8,
                                           CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))) *
                                  CONCAT13((byte)uStack_238,
                                           CONCAT12(uStack_23a._1_1_,
                                                    CONCAT11((byte)uStack_23a,uStack_23c._1_1_))),
                                  CONCAT13(bStack_cc,
                                           CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))) *
                                  CONCAT13((byte)uStack_23c,
                                           CONCAT12(uStack_240._3_1_,
                                                    CONCAT11(uStack_240._2_1_,uStack_240._1_1_))));
    uStack_418 = (double)CONCAT44(iVar58,CONCAT13(bStack_c4,
                                                  CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)))
                                         * CONCAT13((byte)uStack_234,
                                                    CONCAT12(uStack_236._1_1_,
                                                             CONCAT11((byte)uStack_236,
                                                                      uStack_238._1_1_))));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_468 = 5;
    uStack_45f = SUB87(uStack_418,0);
    bStack_458 = (byte)((uint)iVar58 >> 0x18);
    dStack_467 = uStack_420;
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_45f;
    bStack_230 = bStack_458;
    goto code_r0x0123cb80;
  case 0xfd80:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    iVar69 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    iVar59 = CONCAT13((byte)uStack_238,
                      CONCAT12(uStack_23a._1_1_,CONCAT11((byte)uStack_23a,uStack_23c._1_1_)));
    iVar2 = CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    iVar67 = CONCAT13(bStack_230,
                      CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)));
    iVar63 = CONCAT13((byte)uStack_234,
                      CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    iVar44 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    iVar51 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    if (iVar69 <= iVar58) {
      iVar58 = iVar69;
    }
    if (iVar2 <= iVar59) {
      iVar59 = iVar2;
    }
    if (iVar44 <= iVar63) {
      iVar63 = iVar44;
    }
    uStack_420 = (double)CONCAT44(iVar59,iVar58);
    if (iVar51 <= iVar67) {
      iVar67 = iVar51;
    }
    uStack_418 = (double)CONCAT44(iVar67,iVar63);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_480 = 5;
    uStack_477 = SUB87(uStack_418,0);
    bStack_470 = (byte)((uint)iVar67 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_477;
    bStack_230 = bStack_470;
    goto code_r0x0123cb80;
  case 0xfd81:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar6 = CONCAT13((byte)uStack_23c,
                     CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar1 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar55 = CONCAT13((byte)uStack_238,
                      CONCAT12(uStack_23a._1_1_,CONCAT11((byte)uStack_23a,uStack_23c._1_1_)));
    uVar54 = CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    uVar8 = CONCAT13(bStack_230,
                     CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)));
    uVar7 = CONCAT13((byte)uStack_234,
                     CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar5 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar52 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    if (uVar1 <= uVar6) {
      uVar6 = uVar1;
    }
    if (uVar54 <= uVar55) {
      uVar55 = uVar54;
    }
    if (uVar5 <= uVar7) {
      uVar7 = uVar5;
    }
    uStack_420 = (double)CONCAT44(uVar55,uVar6);
    if (uVar52 <= uVar8) {
      uVar8 = uVar52;
    }
    uStack_418 = (double)CONCAT44(uVar8,uVar7);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_498 = 5;
    uStack_48f = SUB87(uStack_418,0);
    bStack_488 = (byte)(uVar8 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_48f;
    bStack_230 = bStack_488;
    goto code_r0x0123cb80;
  case 0xfd82:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    iVar69 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    iVar59 = CONCAT13((byte)uStack_238,
                      CONCAT12(uStack_23a._1_1_,CONCAT11((byte)uStack_23a,uStack_23c._1_1_)));
    iVar2 = CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    iVar67 = CONCAT13(bStack_230,
                      CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)));
    iVar63 = CONCAT13((byte)uStack_234,
                      CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    iVar44 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    iVar51 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    if (iVar58 <= iVar69) {
      iVar58 = iVar69;
    }
    if (iVar59 <= iVar2) {
      iVar59 = iVar2;
    }
    if (iVar63 <= iVar44) {
      iVar63 = iVar44;
    }
    uStack_420 = (double)CONCAT44(iVar59,iVar58);
    if (iVar67 <= iVar51) {
      iVar67 = iVar51;
    }
    uStack_418 = (double)CONCAT44(iVar67,iVar63);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_4b0 = 5;
    uStack_4a7 = SUB87(uStack_418,0);
    bStack_4a0 = (byte)((uint)iVar67 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_4a7;
    bStack_230 = bStack_4a0;
    goto code_r0x0123cb80;
  case 0xfd83:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar6 = CONCAT13((byte)uStack_23c,
                     CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar1 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar55 = CONCAT13((byte)uStack_238,
                      CONCAT12(uStack_23a._1_1_,CONCAT11((byte)uStack_23a,uStack_23c._1_1_)));
    uVar54 = CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    uVar8 = CONCAT13(bStack_230,
                     CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)));
    uVar7 = CONCAT13((byte)uStack_234,
                     CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar5 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar52 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (uVar55 <= uVar54) {
      uVar55 = uVar54;
    }
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    uStack_420 = (double)CONCAT44(uVar55,uVar6);
    if (uVar8 <= uVar52) {
      uVar8 = uVar52;
    }
    uStack_418 = (double)CONCAT44(uVar8,uVar7);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    auStack_4c8[0] = 5;
    uStack_4bf = SUB87(uStack_418,0);
    bStack_4b8 = (byte)(uVar8 >> 0x18);
    auVar93._1_8_ = uStack_420;
    auVar93[0] = 5;
    auVar93._9_7_ = uStack_4bf;
    bStack_230 = bStack_4b8;
code_r0x0123cb80:
    fStack_a7 = auVar93._9_4_;
    uStack_a3._0_3_ = auVar93._13_3_;
    uStack_b0 = auVar93[0];
    fStack_af = auVar93._1_4_;
    uStack_ab = auVar93._5_4_;
    uStack_a3 = (float)CONCAT13(bStack_230,(uint3)uStack_a3);
    goto code_r0x0123e410;
  case 0xfd84:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)-CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_88 = (double)-CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    uStack_817 = SUB87(uStack_88,0);
    bStack_810 = (byte)((ulong)uStack_88 >> 0x38);
    auVar90._1_8_ = uStack_90;
    auVar90[0] = 5;
    auVar90._9_7_ = uStack_817;
    goto code_r0x0123b930;
  case 0xfd86:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    auVar110 = ZEXT216(CONCAT11(CONCAT44(uStack_ab,fStack_af) != 0 &&
                                CONCAT44(uStack_a3,fStack_a7) != 0,1));
    bStack_f30 = 0;
    goto code_r0x0123a730;
  case 0xfd87:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)(CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            )))) << ((ulong)(uint)fStack_af & 0x3f))
    ;
    uStack_88 = (double)(CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            )))) << ((ulong)(uint)fStack_af & 0x3f))
    ;
    uStack_dff = SUB87(uStack_88,0);
    bStack_df8 = (byte)((ulong)uStack_88 >> 0x38);
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uStack_dff;
    bStack_1218 = bStack_df8;
    goto code_r0x0123d8fc;
  case 0xfd88:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)(CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            )))) >> ((ulong)(uint)fStack_af & 0x3f))
    ;
    uStack_88 = (double)(CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            )))) >> ((ulong)(uint)fStack_af & 0x3f))
    ;
    uStack_e17 = SUB87(uStack_88,0);
    bStack_e10 = (byte)((ulong)uStack_88 >> 0x38);
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uStack_e17;
    bStack_1218 = bStack_e10;
    goto code_r0x0123d8fc;
  case 0xfd89:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)(CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            )))) >> ((ulong)(uint)fStack_af & 0x3f))
    ;
    uStack_88 = (double)(CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            )))) >> ((ulong)(uint)fStack_af & 0x3f))
    ;
    uStack_e2f = SUB87(uStack_88,0);
    bStack_e28 = (byte)((ulong)uStack_88 >> 0x38);
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uStack_e2f;
    bStack_1218 = bStack_e28;
    goto code_r0x0123d8fc;
  case 0xfd8a:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_377 = (double)(CONCAT17(bStack_c8,
                                   CONCAT16(bStack_c9,
                                            CONCAT15(bStack_ca,
                                                     CONCAT14(bStack_cb,
                                                              CONCAT13(bStack_cc,
                                                                       CONCAT12(bStack_cd,
                                                                                CONCAT11(bStack_ce,
                                                                                         bStack_cf))
                                                                      ))))) +
                         CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_))))))));
    uStack_88 = (double)(CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            )))) +
                        CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))));
    uStack_378 = 5;
    uStack_36f = SUB87(uStack_88,0);
    bStack_368 = (byte)((ulong)uStack_88 >> 0x38);
    auVar85._1_8_ = dStack_377;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_36f;
    bStack_900 = bStack_368;
    uStack_90 = dStack_377;
    break;
  case 0xfd8c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_3a7 = (double)(CONCAT17(bStack_c8,
                                   CONCAT16(bStack_c9,
                                            CONCAT15(bStack_ca,
                                                     CONCAT14(bStack_cb,
                                                              CONCAT13(bStack_cc,
                                                                       CONCAT12(bStack_cd,
                                                                                CONCAT11(bStack_ce,
                                                                                         bStack_cf))
                                                                      ))))) *
                         CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_))))))));
    uStack_88 = (double)(CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            )))) *
                        CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))));
    uStack_3a8 = 5;
    uStack_39f = SUB87(uStack_88,0);
    uStack_398 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar84._1_8_ = dStack_3a7;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_39f;
    uStack_9c0 = uStack_398;
    uStack_90 = dStack_3a7;
    goto code_r0x012391d0;
  case 0xfd8d:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_38f = (double)(CONCAT17((byte)uStack_238,
                                   CONCAT16(uStack_23a._1_1_,
                                            CONCAT15((byte)uStack_23a,
                                                     CONCAT14(uStack_23c._1_1_,
                                                              CONCAT13((byte)uStack_23c,
                                                                       CONCAT12(uStack_240._3_1_,
                                                                                CONCAT11(uStack_240.
                                                                                         _2_1_,
                                                  uStack_240._1_1_))))))) -
                         CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            )))));
    uStack_88 = (double)(CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))) -
                        CONCAT17(bStack_c0,
                                 CONCAT16(bStack_c1,
                                          CONCAT15(bStack_c2,
                                                   CONCAT14(bStack_c3,
                                                            CONCAT13(bStack_c4,
                                                                     CONCAT12(bStack_c5,
                                                                              CONCAT11(bStack_c6,
                                                                                       bStack_c7))))
                                                  ))));
    uStack_390 = 5;
    uStack_387 = SUB87(uStack_88,0);
    uStack_380 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar84._1_8_ = dStack_38f;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_387;
    uStack_9c0 = uStack_380;
    uStack_90 = dStack_38f;
    goto code_r0x012391d0;
  case 0xfd8e:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)CONCAT17((byte)uStack_238,
                                 CONCAT16(uStack_23a._1_1_,
                                          CONCAT15((byte)uStack_23a,
                                                   CONCAT14(uStack_23c._1_1_,
                                                            CONCAT13((byte)uStack_23c,
                                                                     CONCAT12(uStack_240._3_1_,
                                                                              CONCAT11(uStack_240.
                                                                                       _2_1_,
                                                  uStack_240._1_1_)))))));
    dVar14 = (double)CONCAT17(bStack_c8,
                              CONCAT16(bStack_c9,
                                       CONCAT15(bStack_ca,
                                                CONCAT14(bStack_cb,
                                                         CONCAT13(bStack_cc,
                                                                  CONCAT12(bStack_cd,
                                                                           CONCAT11(bStack_ce,
                                                                                    bStack_cf)))))))
    ;
    uStack_88 = (double)CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    dVar15 = (double)CONCAT17(bStack_c0,
                              CONCAT16(bStack_c1,
                                       CONCAT15(bStack_c2,
                                                CONCAT14(bStack_c3,
                                                         CONCAT13(bStack_c4,
                                                                  CONCAT12(bStack_c5,
                                                                           CONCAT11(bStack_c6,
                                                                                    bStack_c7)))))))
    ;
    if ((long)dVar14 <= (long)uStack_90) {
      uStack_90 = dVar14;
    }
    if ((long)dVar15 <= (long)uStack_88) {
      uStack_88 = dVar15;
    }
    uStack_3c0 = 5;
    uStack_3b7 = SUB87(uStack_88,0);
    uStack_3b0 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar84._1_8_ = uStack_90;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_3b7;
    uStack_9c0 = uStack_3b0;
    goto code_r0x012391d0;
  case 0xfd8f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)CONCAT17((byte)uStack_238,
                                 CONCAT16(uStack_23a._1_1_,
                                          CONCAT15((byte)uStack_23a,
                                                   CONCAT14(uStack_23c._1_1_,
                                                            CONCAT13((byte)uStack_23c,
                                                                     CONCAT12(uStack_240._3_1_,
                                                                              CONCAT11(uStack_240.
                                                                                       _2_1_,
                                                  uStack_240._1_1_)))))));
    dVar14 = (double)CONCAT17(bStack_c8,
                              CONCAT16(bStack_c9,
                                       CONCAT15(bStack_ca,
                                                CONCAT14(bStack_cb,
                                                         CONCAT13(bStack_cc,
                                                                  CONCAT12(bStack_cd,
                                                                           CONCAT11(bStack_ce,
                                                                                    bStack_cf)))))))
    ;
    uStack_88 = (double)CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    dVar15 = (double)CONCAT17(bStack_c0,
                              CONCAT16(bStack_c1,
                                       CONCAT15(bStack_c2,
                                                CONCAT14(bStack_c3,
                                                         CONCAT13(bStack_c4,
                                                                  CONCAT12(bStack_c5,
                                                                           CONCAT11(bStack_c6,
                                                                                    bStack_c7)))))))
    ;
    if ((ulong)dVar14 <= (ulong)uStack_90) {
      uStack_90 = dVar14;
    }
    if ((ulong)dVar15 <= (ulong)uStack_88) {
      uStack_88 = dVar15;
    }
    uStack_3d8 = 5;
    uStack_3cf = SUB87(uStack_88,0);
    uStack_3c8 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar84._1_8_ = uStack_90;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_3cf;
    uStack_9c0 = uStack_3c8;
    goto code_r0x012391d0;
  case 0xfd90:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)CONCAT17((byte)uStack_238,
                                 CONCAT16(uStack_23a._1_1_,
                                          CONCAT15((byte)uStack_23a,
                                                   CONCAT14(uStack_23c._1_1_,
                                                            CONCAT13((byte)uStack_23c,
                                                                     CONCAT12(uStack_240._3_1_,
                                                                              CONCAT11(uStack_240.
                                                                                       _2_1_,
                                                  uStack_240._1_1_)))))));
    dVar14 = (double)CONCAT17(bStack_c8,
                              CONCAT16(bStack_c9,
                                       CONCAT15(bStack_ca,
                                                CONCAT14(bStack_cb,
                                                         CONCAT13(bStack_cc,
                                                                  CONCAT12(bStack_cd,
                                                                           CONCAT11(bStack_ce,
                                                                                    bStack_cf)))))))
    ;
    uStack_88 = (double)CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    dVar15 = (double)CONCAT17(bStack_c0,
                              CONCAT16(bStack_c1,
                                       CONCAT15(bStack_c2,
                                                CONCAT14(bStack_c3,
                                                         CONCAT13(bStack_c4,
                                                                  CONCAT12(bStack_c5,
                                                                           CONCAT11(bStack_c6,
                                                                                    bStack_c7)))))))
    ;
    if ((long)uStack_90 <= (long)dVar14) {
      uStack_90 = dVar14;
    }
    if ((long)uStack_88 <= (long)dVar15) {
      uStack_88 = dVar15;
    }
    uStack_3f0 = 5;
    uStack_3e7 = SUB87(uStack_88,0);
    uStack_3e0 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar84._1_8_ = uStack_90;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_3e7;
    uStack_9c0 = uStack_3e0;
    goto code_r0x012391d0;
  case 0xfd91:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)CONCAT17((byte)uStack_238,
                                 CONCAT16(uStack_23a._1_1_,
                                          CONCAT15((byte)uStack_23a,
                                                   CONCAT14(uStack_23c._1_1_,
                                                            CONCAT13((byte)uStack_23c,
                                                                     CONCAT12(uStack_240._3_1_,
                                                                              CONCAT11(uStack_240.
                                                                                       _2_1_,
                                                  uStack_240._1_1_)))))));
    dVar14 = (double)CONCAT17(bStack_c8,
                              CONCAT16(bStack_c9,
                                       CONCAT15(bStack_ca,
                                                CONCAT14(bStack_cb,
                                                         CONCAT13(bStack_cc,
                                                                  CONCAT12(bStack_cd,
                                                                           CONCAT11(bStack_ce,
                                                                                    bStack_cf)))))))
    ;
    uStack_88 = (double)CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    dVar15 = (double)CONCAT17(bStack_c0,
                              CONCAT16(bStack_c1,
                                       CONCAT15(bStack_c2,
                                                CONCAT14(bStack_c3,
                                                         CONCAT13(bStack_c4,
                                                                  CONCAT12(bStack_c5,
                                                                           CONCAT11(bStack_c6,
                                                                                    bStack_c7)))))))
    ;
    if ((ulong)uStack_90 <= (ulong)dVar14) {
      uStack_90 = dVar14;
    }
    if ((ulong)uStack_88 <= (ulong)dVar15) {
      uStack_88 = dVar15;
    }
    uStack_408 = 5;
    uStack_3ff = SUB87(uStack_88,0);
    uStack_3f8 = (undefined1)((ulong)uStack_88 >> 0x38);
    auVar84._1_8_ = uStack_90;
    auVar84[0] = 5;
    auVar84._9_7_ = uStack_3ff;
    uStack_9c0 = uStack_3f8;
code_r0x012391d0:
    fStack_a7 = auVar84._9_4_;
    uStack_a3._0_3_ = auVar84._13_3_;
    uStack_b0 = auVar84[0];
    fStack_af = auVar84._1_4_;
    uStack_ab = auVar84._5_4_;
    uStack_a3 = (float)CONCAT13(uStack_9c0,(uint3)uStack_a3);
    goto code_r0x0123e410;
  case 0xfd95:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)(CONCAT44(CONCAT13(bStack_c8,
                                           CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))),
                                  CONCAT13(bStack_cc,
                                           CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)))) &
                        0x7fffffff7fffffff);
    uStack_88 = (double)(CONCAT44(CONCAT13(bStack_c0,
                                           CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))),
                                  CONCAT13(bStack_c4,
                                           CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)))) &
                        0x7fffffff7fffffff);
    uStack_7a8 = 5;
    uStack_79f = SUB87(uStack_88,0);
    bStack_798 = (byte)((ulong)uStack_88 >> 0x38);
    dStack_7a7 = uStack_90;
    auVar89._1_8_ = uStack_90;
    auVar89[0] = 5;
    auVar89._9_7_ = uStack_79f;
    bVar123 = bStack_798;
code_r0x0123aed4:
    sVar120 = CONCAT11(uStack_232._1_1_,(byte)uStack_232);
    sVar119 = CONCAT11(uStack_234._1_1_,(byte)uStack_234);
    sVar101 = CONCAT11(uStack_236._1_1_,(byte)uStack_236);
    sVar103 = CONCAT11(uStack_23a._1_1_,(byte)uStack_23a);
    sVar102 = CONCAT11(uStack_23c._1_1_,(byte)uStack_23c);
    sVar100 = CONCAT11(uStack_240._3_1_,uStack_240._2_1_);
    fStack_a7 = auVar89._9_4_;
    uStack_a3._0_3_ = auVar89._13_3_;
    uStack_b0 = auVar89[0];
    fStack_af = auVar89._1_4_;
    uStack_ab = auVar89._5_4_;
    uStack_a3 = (float)CONCAT13(bVar123,(uint3)uStack_a3);
    goto code_r0x0123b938;
  case 0xfd96:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fStack_af = -(float)CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uStack_ab = -*(float *)((ulong)&bStack_d0 | 5);
    fStack_a7 = -(float)CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uStack_a3 = -(float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_88 = (double)CONCAT44(uStack_a3,fStack_a7);
    uStack_90 = (double)CONCAT44(uStack_ab,fStack_af);
    uStack_7c0 = 5;
    uStack_7b7 = SUB87(uStack_88,0);
    uStack_7b0 = (undefined1)((uint)uStack_a3 >> 0x18);
    dStack_7bf = uStack_90;
    uStack_b0 = 5;
    goto code_r0x0123bdc8;
  case 0xfd97:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = SQRT((float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_90 = (double)CONCAT44(SQRT((float)CONCAT13(bStack_c8,
                                                      CONCAT12(bStack_c9,
                                                               CONCAT11(bStack_ca,bStack_cb)))),
                                 SQRT((float)CONCAT13(bStack_cc,
                                                      CONCAT12(bStack_cd,
                                                               CONCAT11(bStack_ce,bStack_cf)))));
    uStack_88 = (double)CONCAT44(fVar75,SQRT((float)CONCAT13(bStack_c4,
                                                             CONCAT12(bStack_c5,
                                                                      CONCAT11(bStack_c6,bStack_c7))
                                                            )));
    uStack_7d8 = 5;
    uStack_7cf = SUB87(uStack_88,0);
    bStack_7c8 = (byte)((uint)fVar75 >> 0x18);
    dStack_7d7 = uStack_90;
    auVar90._1_8_ = uStack_90;
    auVar90[0] = 5;
    auVar90._9_7_ = uStack_7cf;
    bStack_810 = bStack_7c8;
    goto code_r0x0123b930;
  case 0xfd98:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    bStack_d0 = SUB41(fStack_af,0);
    bStack_cf = (byte)((uint)fStack_af >> 8);
    bStack_ce = (byte)((uint)fStack_af >> 0x10);
    bStack_cd = (byte)((uint)fStack_af >> 0x18);
    bStack_cc = SUB41(uStack_ab,0);
    bStack_cb = (byte)((uint)uStack_ab >> 8);
    bStack_ca = (byte)((uint)uStack_ab >> 0x10);
    bStack_c9 = (byte)((uint)uStack_ab >> 0x18);
    bStack_c8 = SUB41(fStack_a7,0);
    bStack_c7 = (byte)((uint)fStack_a7 >> 8);
    bStack_c6 = (byte)((uint)fStack_a7 >> 0x10);
    bStack_c5 = (byte)((uint)fStack_a7 >> 0x18);
    bStack_c4 = SUB41(uStack_a3,0);
    bStack_c3 = (byte)((uint)uStack_a3 >> 8);
    bStack_c2 = (byte)((uint)uStack_a3 >> 0x10);
    bStack_c1 = (byte)((uint)uStack_a3 >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    fVar75 = uStack_a3;
    fVar112 = fStack_a7;
    fVar118 = uStack_ab;
    fVar105 = fStack_af;
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_23c._0_1_ = SUB41(uStack_ab,0);
    uStack_23c._1_1_ = (byte)((uint)uStack_ab >> 8);
    uStack_23a._0_1_ = (byte)((uint)uStack_ab >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)uStack_ab >> 0x18);
    uStack_240._0_1_ = SUB41(fStack_af,0);
    uStack_240._1_1_ = (byte)((uint)fStack_af >> 8);
    uStack_240._2_1_ = (byte)((uint)fStack_af >> 0x10);
    uStack_240._3_1_ = (byte)((uint)fStack_af >> 0x18);
    uStack_234._0_1_ = SUB41(uStack_a3,0);
    uStack_234._1_1_ = (byte)((uint)uStack_a3 >> 8);
    uStack_232._0_1_ = (byte)((uint)uStack_a3 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)uStack_a3 >> 0x18);
    uStack_238._0_1_ = SUB41(fStack_a7,0);
    uStack_238._1_1_ = (byte)((uint)fStack_a7 >> 8);
    uStack_236._0_1_ = (byte)((uint)fStack_a7 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)fStack_a7 >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
      fVar118 = (float)CONCAT13(uStack_23a._1_1_,
                                CONCAT12((byte)uStack_23a,
                                         CONCAT11(uStack_23c._1_1_,(byte)uStack_23c)));
      fVar105 = (float)CONCAT13(uStack_240._3_1_,
                                CONCAT12(uStack_240._2_1_,
                                         CONCAT11(uStack_240._1_1_,(byte)uStack_240)));
      fVar75 = (float)CONCAT13(uStack_232._1_1_,
                               CONCAT12((byte)uStack_232,CONCAT11(uStack_234._1_1_,(byte)uStack_234)
                                       ));
      fVar112 = (float)CONCAT13(uStack_236._1_1_,
                                CONCAT12((byte)uStack_236,
                                         CONCAT11(uStack_238._1_1_,(byte)uStack_238)));
    }
    uStack_a3 = fVar75 * (float)CONCAT13(bStack_c1,CONCAT12(bStack_c2,CONCAT11(bStack_c3,bStack_c4))
                                        ) + uStack_a3;
    uStack_90 = (double)CONCAT44(fVar118 * (float)CONCAT13(bStack_c9,
                                                           CONCAT12(bStack_ca,
                                                                    CONCAT11(bStack_cb,bStack_cc)))
                                 + uStack_ab,
                                 fVar105 * (float)CONCAT13(bStack_cd,
                                                           CONCAT12(bStack_ce,
                                                                    CONCAT11(bStack_cf,bStack_d0)))
                                 + fStack_af);
    uStack_88 = (double)CONCAT44(uStack_a3,
                                 fVar112 * (float)CONCAT13(bStack_c5,
                                                           CONCAT12(bStack_c6,
                                                                    CONCAT11(bStack_c7,bStack_c8)))
                                 + fStack_a7);
    uStack_11d7 = SUB87(uStack_88,0);
    bStack_11d0 = (byte)((uint)uStack_a3 >> 0x18);
    auVar98._1_8_ = uStack_90;
    auVar98[0] = 5;
    auVar98._9_7_ = uStack_11d7;
    bStack_7f8 = bStack_11d0;
    goto code_r0x0123e384;
  case 0xfd99:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    bStack_d0 = SUB41(fStack_af,0);
    bStack_cf = (byte)((uint)fStack_af >> 8);
    bStack_ce = (byte)((uint)fStack_af >> 0x10);
    bStack_cd = (byte)((uint)fStack_af >> 0x18);
    bStack_cc = SUB41(uStack_ab,0);
    bStack_cb = (byte)((uint)uStack_ab >> 8);
    bStack_ca = (byte)((uint)uStack_ab >> 0x10);
    bStack_c9 = (byte)((uint)uStack_ab >> 0x18);
    bStack_c8 = SUB41(fStack_a7,0);
    bStack_c7 = (byte)((uint)fStack_a7 >> 8);
    bStack_c6 = (byte)((uint)fStack_a7 >> 0x10);
    bStack_c5 = (byte)((uint)fStack_a7 >> 0x18);
    bStack_c4 = SUB41(uStack_a3,0);
    bStack_c3 = (byte)((uint)uStack_a3 >> 8);
    bStack_c2 = (byte)((uint)uStack_a3 >> 0x10);
    bStack_c1 = (byte)((uint)uStack_a3 >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    fVar75 = uStack_a3;
    fVar112 = fStack_a7;
    fVar118 = uStack_ab;
    fVar105 = fStack_af;
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_23c._0_1_ = SUB41(uStack_ab,0);
    uStack_23c._1_1_ = (byte)((uint)uStack_ab >> 8);
    uStack_23a._0_1_ = (byte)((uint)uStack_ab >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)uStack_ab >> 0x18);
    uStack_240._0_1_ = SUB41(fStack_af,0);
    uStack_240._1_1_ = (byte)((uint)fStack_af >> 8);
    uStack_240._2_1_ = (byte)((uint)fStack_af >> 0x10);
    uStack_240._3_1_ = (byte)((uint)fStack_af >> 0x18);
    uStack_234._0_1_ = SUB41(uStack_a3,0);
    uStack_234._1_1_ = (byte)((uint)uStack_a3 >> 8);
    uStack_232._0_1_ = (byte)((uint)uStack_a3 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)uStack_a3 >> 0x18);
    uStack_238._0_1_ = SUB41(fStack_a7,0);
    uStack_238._1_1_ = (byte)((uint)fStack_a7 >> 8);
    uStack_236._0_1_ = (byte)((uint)fStack_a7 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)fStack_a7 >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
      fVar118 = (float)CONCAT13(uStack_23a._1_1_,
                                CONCAT12((byte)uStack_23a,
                                         CONCAT11(uStack_23c._1_1_,(byte)uStack_23c)));
      fVar105 = (float)CONCAT13(uStack_240._3_1_,
                                CONCAT12(uStack_240._2_1_,
                                         CONCAT11(uStack_240._1_1_,(byte)uStack_240)));
      fVar75 = (float)CONCAT13(uStack_232._1_1_,
                               CONCAT12((byte)uStack_232,CONCAT11(uStack_234._1_1_,(byte)uStack_234)
                                       ));
      fVar112 = (float)CONCAT13(uStack_236._1_1_,
                                CONCAT12((byte)uStack_236,
                                         CONCAT11(uStack_238._1_1_,(byte)uStack_238)));
    }
    uStack_a3 = uStack_a3 -
                fVar75 * (float)CONCAT13(bStack_c1,CONCAT12(bStack_c2,CONCAT11(bStack_c3,bStack_c4))
                                        );
    uStack_90 = (double)CONCAT44(uStack_ab -
                                 fVar118 * (float)CONCAT13(bStack_c9,
                                                           CONCAT12(bStack_ca,
                                                                    CONCAT11(bStack_cb,bStack_cc))),
                                 fStack_af -
                                 fVar105 * (float)CONCAT13(bStack_cd,
                                                           CONCAT12(bStack_ce,
                                                                    CONCAT11(bStack_cf,bStack_d0))))
    ;
    uStack_88 = (double)CONCAT44(uStack_a3,
                                 fStack_a7 -
                                 fVar112 * (float)CONCAT13(bStack_c5,
                                                           CONCAT12(bStack_c6,
                                                                    CONCAT11(bStack_c7,bStack_c8))))
    ;
    uStack_11ef = SUB87(uStack_88,0);
    bStack_11e8 = (byte)((uint)uStack_a3 >> 0x18);
    auVar98._1_8_ = uStack_90;
    auVar98[0] = 5;
    auVar98._9_7_ = uStack_11ef;
    bStack_7f8 = bStack_11e8;
    goto code_r0x0123e384;
  case 0xfd9a:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_230,
                             CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)))
             + (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_90 = (double)CONCAT44((float)CONCAT13((byte)uStack_238,
                                                 CONCAT12(uStack_23a._1_1_,
                                                          CONCAT11((byte)uStack_23a,uStack_23c._1_1_
                                                                  ))) +
                                 (float)CONCAT13(bStack_c8,
                                                 CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))),
                                 (float)CONCAT13((byte)uStack_23c,
                                                 CONCAT12(uStack_240._3_1_,
                                                          CONCAT11(uStack_240._2_1_,uStack_240._1_1_
                                                                  ))) +
                                 (float)CONCAT13(bStack_cc,
                                                 CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))))
    ;
    uStack_88 = (double)CONCAT44(fVar75,(float)CONCAT13((byte)uStack_234,
                                                        CONCAT12(uStack_236._1_1_,
                                                                 CONCAT11((byte)uStack_236,
                                                                          uStack_238._1_1_))) +
                                        (float)CONCAT13(bStack_c4,
                                                        CONCAT12(bStack_c5,
                                                                 CONCAT11(bStack_c6,bStack_c7))));
    uStack_2e8 = 5;
    uStack_2df = SUB87(uStack_88,0);
    bStack_2d8 = (byte)((uint)fVar75 >> 0x18);
    dStack_2e7 = uStack_90;
    auVar85._1_8_ = uStack_90;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_2df;
    bStack_900 = bStack_2d8;
    break;
  case 0xfd9b:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_230,
                             CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)))
             - (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_90 = (double)CONCAT44((float)CONCAT13((byte)uStack_238,
                                                 CONCAT12(uStack_23a._1_1_,
                                                          CONCAT11((byte)uStack_23a,uStack_23c._1_1_
                                                                  ))) -
                                 (float)CONCAT13(bStack_c8,
                                                 CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))),
                                 (float)CONCAT13((byte)uStack_23c,
                                                 CONCAT12(uStack_240._3_1_,
                                                          CONCAT11(uStack_240._2_1_,uStack_240._1_1_
                                                                  ))) -
                                 (float)CONCAT13(bStack_cc,
                                                 CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))))
    ;
    uStack_88 = (double)CONCAT44(fVar75,(float)CONCAT13((byte)uStack_234,
                                                        CONCAT12(uStack_236._1_1_,
                                                                 CONCAT11((byte)uStack_236,
                                                                          uStack_238._1_1_))) -
                                        (float)CONCAT13(bStack_c4,
                                                        CONCAT12(bStack_c5,
                                                                 CONCAT11(bStack_c6,bStack_c7))));
    uStack_300 = 5;
    uStack_2f7 = SUB87(uStack_88,0);
    bStack_2f0 = (byte)((uint)fVar75 >> 0x18);
    dStack_2ff = uStack_90;
    auVar85._1_8_ = uStack_90;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_2f7;
    bStack_900 = bStack_2f0;
    break;
  case 0xfd9c:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_230,
                             CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)))
             * (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_90 = (double)CONCAT44((float)CONCAT13((byte)uStack_238,
                                                 CONCAT12(uStack_23a._1_1_,
                                                          CONCAT11((byte)uStack_23a,uStack_23c._1_1_
                                                                  ))) *
                                 (float)CONCAT13(bStack_c8,
                                                 CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))),
                                 (float)CONCAT13((byte)uStack_23c,
                                                 CONCAT12(uStack_240._3_1_,
                                                          CONCAT11(uStack_240._2_1_,uStack_240._1_1_
                                                                  ))) *
                                 (float)CONCAT13(bStack_cc,
                                                 CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))))
    ;
    uStack_88 = (double)CONCAT44(fVar75,(float)CONCAT13((byte)uStack_234,
                                                        CONCAT12(uStack_236._1_1_,
                                                                 CONCAT11((byte)uStack_236,
                                                                          uStack_238._1_1_))) *
                                        (float)CONCAT13(bStack_c4,
                                                        CONCAT12(bStack_c5,
                                                                 CONCAT11(bStack_c6,bStack_c7))));
    uStack_318 = 5;
    uStack_30f = SUB87(uStack_88,0);
    bStack_308 = (byte)((uint)fVar75 >> 0x18);
    dStack_317 = uStack_90;
    auVar85._1_8_ = uStack_90;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_30f;
    bStack_900 = bStack_308;
    break;
  case 0xfd9d:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_230,
                             CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_)))
             / (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_90 = (double)CONCAT44((float)CONCAT13((byte)uStack_238,
                                                 CONCAT12(uStack_23a._1_1_,
                                                          CONCAT11((byte)uStack_23a,uStack_23c._1_1_
                                                                  ))) /
                                 (float)CONCAT13(bStack_c8,
                                                 CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))),
                                 (float)CONCAT13((byte)uStack_23c,
                                                 CONCAT12(uStack_240._3_1_,
                                                          CONCAT11(uStack_240._2_1_,uStack_240._1_1_
                                                                  ))) /
                                 (float)CONCAT13(bStack_cc,
                                                 CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))))
    ;
    uStack_88 = (double)CONCAT44(fVar75,(float)CONCAT13((byte)uStack_234,
                                                        CONCAT12(uStack_236._1_1_,
                                                                 CONCAT11((byte)uStack_236,
                                                                          uStack_238._1_1_))) /
                                        (float)CONCAT13(bStack_c4,
                                                        CONCAT12(bStack_c5,
                                                                 CONCAT11(bStack_c6,bStack_c7))));
    uStack_330 = 5;
    uStack_327 = SUB87(uStack_88,0);
    bStack_320 = (byte)((uint)fVar75 >> 0x18);
    dStack_32f = uStack_90;
    auVar85._1_8_ = uStack_90;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_327;
    bStack_900 = bStack_320;
    break;
  case 0xfd9e:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13((byte)uStack_23c,
                             CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))
    ;
    fVar112 = (float)CONCAT13((byte)uStack_238,
                              CONCAT12(uStack_23a._1_1_,CONCAT11((byte)uStack_23a,uStack_23c._1_1_))
                             );
    fVar105 = (float)CONCAT13(bStack_230,
                              CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))
                             );
    fVar118 = (float)CONCAT13((byte)uStack_234,
                              CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_))
                             );
    fVar43 = (float)CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    fVar73 = (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    fVar45 = (float)CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    fVar76 = fVar75;
    if ((((!NAN(fVar75)) &&
         (fVar76 = (float)CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))),
         !NAN(fVar76))) && (((char)(byte)uStack_23c < '\0' || (-1 < (char)bStack_cc)))) &&
       (fVar75 <= fVar76)) {
      fVar76 = fVar75;
    }
    fVar75 = fVar112;
    if ((((!NAN(fVar112)) && (fVar75 = fVar43, !NAN(fVar43))) &&
        (((char)(byte)uStack_238 < '\0' || (-1 < (char)bStack_c8)))) && (fVar112 <= fVar43)) {
      fVar75 = fVar112;
    }
    fVar112 = fVar118;
    if ((((!NAN(fVar118)) && (fVar112 = fVar45, !NAN(fVar45))) &&
        (((char)(byte)uStack_234 < '\0' || (-1 < (char)bStack_c4)))) && (fVar118 <= fVar45)) {
      fVar112 = fVar118;
    }
    fVar118 = fVar105;
    if (((!NAN(fVar105)) && (fVar118 = fVar73, !NAN(fVar73))) &&
       ((((char)bStack_230 < '\0' || (-1 < (char)bStack_c0)) && (fVar105 <= fVar73)))) {
      fVar118 = fVar105;
    }
    uStack_90 = (double)CONCAT44(fVar75,fVar76);
    uStack_88 = (double)CONCAT44(fVar118,fVar112);
    uStack_348 = 5;
    uStack_33f = SUB87(uStack_88,0);
    bStack_338 = (byte)((uint)fVar118 >> 0x18);
    auVar99._1_8_ = uStack_90;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_33f;
    bStack_1080 = bStack_338;
    goto code_r0x0123e408;
  case 0xfd9f:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13((byte)uStack_23c,
                             CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)))
    ;
    fVar112 = (float)CONCAT13((byte)uStack_238,
                              CONCAT12(uStack_23a._1_1_,CONCAT11((byte)uStack_23a,uStack_23c._1_1_))
                             );
    fVar105 = (float)CONCAT13(bStack_230,
                              CONCAT12(uStack_232._1_1_,CONCAT11((byte)uStack_232,uStack_234._1_1_))
                             );
    fVar118 = (float)CONCAT13((byte)uStack_234,
                              CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_))
                             );
    fVar76 = (float)CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    fVar45 = (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    fVar43 = (float)CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    fVar73 = fVar75;
    if ((((!NAN(fVar75)) &&
         (fVar35 = (float)CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))),
         fVar73 = fVar35, !NAN(fVar35))) &&
        (((char)(byte)uStack_23c < '\0' || (fVar73 = fVar75, -1 < (char)bStack_cc)))) &&
       (fVar73 = fVar75, fVar75 <= fVar35)) {
      fVar73 = fVar35;
    }
    fVar75 = fVar112;
    if (((!NAN(fVar112)) && (fVar75 = fVar76, !NAN(fVar76))) &&
       ((((char)(byte)uStack_238 < '\0' || (fVar75 = fVar112, -1 < (char)bStack_c8)) &&
        (fVar75 = fVar112, fVar112 <= fVar76)))) {
      fVar75 = fVar76;
    }
    fVar112 = fVar118;
    if ((((!NAN(fVar118)) && (fVar112 = fVar43, !NAN(fVar43))) &&
        (((char)(byte)uStack_234 < '\0' || (fVar112 = fVar118, -1 < (char)bStack_c4)))) &&
       (fVar112 = fVar118, fVar118 <= fVar43)) {
      fVar112 = fVar43;
    }
    fVar118 = fVar105;
    if ((((!NAN(fVar105)) && (fVar118 = fVar45, !NAN(fVar45))) &&
        (((char)bStack_230 < '\0' || (fVar118 = fVar105, -1 < (char)bStack_c0)))) &&
       (fVar118 = fVar105, fVar105 <= fVar45)) {
      fVar118 = fVar45;
    }
    uStack_90 = (double)CONCAT44(fVar75,fVar73);
    uStack_88 = (double)CONCAT44(fVar118,fVar112);
    uStack_360 = 5;
    uStack_357 = SUB87(uStack_88,0);
    bStack_350 = (byte)((uint)fVar118 >> 0x18);
    auVar99._1_8_ = uStack_90;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_357;
    bStack_1080 = bStack_350;
    goto code_r0x0123e408;
  case 0xfda0:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_75f = ABS((double)CONCAT17(bStack_c8,
                                      CONCAT16(bStack_c9,
                                               CONCAT15(bStack_ca,
                                                        CONCAT14(bStack_cb,
                                                                 CONCAT13(bStack_cc,
                                                                          CONCAT12(bStack_cd,
                                                                                   CONCAT11(
                                                  bStack_ce,bStack_cf))))))));
    uStack_88 = ABS((double)CONCAT17(bStack_c0,
                                     CONCAT16(bStack_c1,
                                              CONCAT15(bStack_c2,
                                                       CONCAT14(bStack_c3,
                                                                CONCAT13(bStack_c4,
                                                                         CONCAT12(bStack_c5,
                                                                                  CONCAT11(bStack_c6
                                                  ,bStack_c7))))))));
    uStack_760 = 5;
    uStack_757 = SUB87(uStack_88,0);
    bStack_750 = (byte)((ulong)uStack_88 >> 0x38);
    auVar90._1_8_ = dStack_75f;
    auVar90[0] = 5;
    auVar90._9_7_ = uStack_757;
    bStack_810 = bStack_750;
    uStack_90 = dStack_75f;
    goto code_r0x0123b930;
  case 0xfda1:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_777 = -(double)CONCAT17(bStack_c8,
                                   CONCAT16(bStack_c9,
                                            CONCAT15(bStack_ca,
                                                     CONCAT14(bStack_cb,
                                                              CONCAT13(bStack_cc,
                                                                       CONCAT12(bStack_cd,
                                                                                CONCAT11(bStack_ce,
                                                                                         bStack_cf))
                                                                      )))));
    uStack_88 = -(double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    uStack_778 = 5;
    uStack_76f = SUB87(uStack_88,0);
    bStack_768 = (byte)((ulong)uStack_88 >> 0x38);
    auVar90._1_8_ = dStack_777;
    auVar90[0] = 5;
    auVar90._9_7_ = uStack_76f;
    bStack_810 = bStack_768;
    uStack_90 = dStack_777;
    goto code_r0x0123b930;
  case 0xfda2:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_78f = SQRT((double)CONCAT17(bStack_c8,
                                       CONCAT16(bStack_c9,
                                                CONCAT15(bStack_ca,
                                                         CONCAT14(bStack_cb,
                                                                  CONCAT13(bStack_cc,
                                                                           CONCAT12(bStack_cd,
                                                                                    CONCAT11(
                                                  bStack_ce,bStack_cf))))))));
    uStack_88 = SQRT((double)CONCAT17(bStack_c0,
                                      CONCAT16(bStack_c1,
                                               CONCAT15(bStack_c2,
                                                        CONCAT14(bStack_c3,
                                                                 CONCAT13(bStack_c4,
                                                                          CONCAT12(bStack_c5,
                                                                                   CONCAT11(
                                                  bStack_c6,bStack_c7))))))));
    uStack_790 = 5;
    uStack_787 = SUB87(uStack_88,0);
    bStack_780 = (byte)((ulong)uStack_88 >> 0x38);
    auVar90._1_8_ = dStack_78f;
    auVar90[0] = 5;
    auVar90._9_7_ = uStack_787;
    bStack_810 = bStack_780;
    uStack_90 = dStack_78f;
code_r0x0123b930:
    sVar120 = CONCAT11(uStack_232._1_1_,(byte)uStack_232);
    sVar119 = CONCAT11(uStack_234._1_1_,(byte)uStack_234);
    sVar101 = CONCAT11(uStack_236._1_1_,(byte)uStack_236);
    sVar103 = CONCAT11(uStack_23a._1_1_,(byte)uStack_23a);
    sVar102 = CONCAT11(uStack_23c._1_1_,(byte)uStack_23c);
    sVar100 = CONCAT11(uStack_240._3_1_,uStack_240._2_1_);
    fStack_a7 = auVar90._9_4_;
    uStack_a3._0_3_ = auVar90._13_3_;
    uStack_b0 = auVar90[0];
    fStack_af = auVar90._1_4_;
    uStack_ab = auVar90._5_4_;
    uStack_a3 = (float)CONCAT13(bStack_810,(uint3)uStack_a3);
    goto code_r0x0123b938;
  case 0xfda3:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    bStack_c8 = SUB41(fStack_a7,0);
    bStack_c7 = (byte)((uint)fStack_a7 >> 8);
    bStack_c6 = (byte)((uint)fStack_a7 >> 0x10);
    bStack_c5 = (byte)((uint)fStack_a7 >> 0x18);
    bStack_c4 = SUB41(uStack_a3,0);
    bStack_c3 = (byte)((uint)uStack_a3 >> 8);
    bStack_c2 = (byte)((uint)uStack_a3 >> 0x10);
    bStack_c1 = (byte)((uint)uStack_a3 >> 0x18);
    bStack_d0 = SUB41(fStack_af,0);
    bStack_cf = (byte)((uint)fStack_af >> 8);
    bStack_ce = (byte)((uint)fStack_af >> 0x10);
    bStack_cd = (byte)((uint)fStack_af >> 0x18);
    bStack_cc = SUB41(uStack_ab,0);
    bStack_cb = (byte)((uint)uStack_ab >> 8);
    bStack_ca = (byte)((uint)uStack_ab >> 0x10);
    bStack_c9 = (byte)((uint)uStack_ab >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dVar14 = (double)CONCAT44(uStack_a3,fStack_a7);
    dVar15 = (double)CONCAT44(uStack_ab,fStack_af);
    uStack_238._0_1_ = SUB41(fStack_a7,0);
    uStack_238._1_1_ = (byte)((uint)fStack_a7 >> 8);
    uStack_236._0_1_ = (byte)((uint)fStack_a7 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)fStack_a7 >> 0x18);
    uStack_234._0_1_ = SUB41(uStack_a3,0);
    uStack_234._1_1_ = (byte)((uint)uStack_a3 >> 8);
    uStack_232._0_1_ = (byte)((uint)uStack_a3 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)uStack_a3 >> 0x18);
    uStack_240._0_1_ = SUB41(fStack_af,0);
    uStack_240._1_1_ = (byte)((uint)fStack_af >> 8);
    uStack_240._2_1_ = (byte)((uint)fStack_af >> 0x10);
    uStack_240._3_1_ = (byte)((uint)fStack_af >> 0x18);
    uStack_23c._0_1_ = SUB41(uStack_ab,0);
    uStack_23c._1_1_ = (byte)((uint)uStack_ab >> 8);
    uStack_23a._0_1_ = (byte)((uint)uStack_ab >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)uStack_ab >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
      dVar14 = (double)CONCAT17(uStack_232._1_1_,
                                CONCAT16((byte)uStack_232,
                                         CONCAT15(uStack_234._1_1_,
                                                  CONCAT14((byte)uStack_234,
                                                           CONCAT13(uStack_236._1_1_,
                                                                    CONCAT12((byte)uStack_236,
                                                                             CONCAT11(uStack_238.
                                                                                      _1_1_,(byte)
                                                  uStack_238)))))));
      dVar15 = (double)CONCAT17(uStack_23a._1_1_,
                                CONCAT16((byte)uStack_23a,
                                         CONCAT15(uStack_23c._1_1_,
                                                  CONCAT14((byte)uStack_23c,
                                                           CONCAT13(uStack_240._3_1_,
                                                                    CONCAT12(uStack_240._2_1_,
                                                                             CONCAT11(uStack_240.
                                                                                      _1_1_,(byte)
                                                  uStack_240)))))));
    }
    uStack_90 = (double)CONCAT44(uStack_ab,fStack_af) +
                dVar15 * (double)CONCAT17(bStack_c9,
                                          CONCAT16(bStack_ca,
                                                   CONCAT15(bStack_cb,
                                                            CONCAT14(bStack_cc,
                                                                     CONCAT13(bStack_cd,
                                                                              CONCAT12(bStack_ce,
                                                                                       CONCAT11(
                                                  bStack_cf,bStack_d0)))))));
    uStack_88 = (double)CONCAT44(uStack_a3,fStack_a7) +
                dVar14 * (double)CONCAT17(bStack_c1,
                                          CONCAT16(bStack_c2,
                                                   CONCAT15(bStack_c3,
                                                            CONCAT14(bStack_c4,
                                                                     CONCAT13(bStack_c5,
                                                                              CONCAT12(bStack_c6,
                                                                                       CONCAT11(
                                                  bStack_c7,bStack_c8)))))));
    uStack_1207 = SUB87(uStack_88,0);
    bStack_1200 = (byte)((ulong)uStack_88 >> 0x38);
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uStack_1207;
    bStack_1218 = bStack_1200;
    goto code_r0x0123d8fc;
  case 0xfda4:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    bStack_c8 = SUB41(fStack_a7,0);
    bStack_c7 = (byte)((uint)fStack_a7 >> 8);
    bStack_c6 = (byte)((uint)fStack_a7 >> 0x10);
    bStack_c5 = (byte)((uint)fStack_a7 >> 0x18);
    bStack_c4 = SUB41(uStack_a3,0);
    bStack_c3 = (byte)((uint)uStack_a3 >> 8);
    bStack_c2 = (byte)((uint)uStack_a3 >> 0x10);
    bStack_c1 = (byte)((uint)uStack_a3 >> 0x18);
    bStack_d0 = SUB41(fStack_af,0);
    bStack_cf = (byte)((uint)fStack_af >> 8);
    bStack_ce = (byte)((uint)fStack_af >> 0x10);
    bStack_cd = (byte)((uint)fStack_af >> 0x18);
    bStack_cc = SUB41(uStack_ab,0);
    bStack_cb = (byte)((uint)uStack_ab >> 8);
    bStack_ca = (byte)((uint)uStack_ab >> 0x10);
    bStack_c9 = (byte)((uint)uStack_ab >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dVar14 = (double)CONCAT44(uStack_a3,fStack_a7);
    dVar15 = (double)CONCAT44(uStack_ab,fStack_af);
    uStack_238._0_1_ = SUB41(fStack_a7,0);
    uStack_238._1_1_ = (byte)((uint)fStack_a7 >> 8);
    uStack_236._0_1_ = (byte)((uint)fStack_a7 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)fStack_a7 >> 0x18);
    uStack_234._0_1_ = SUB41(uStack_a3,0);
    uStack_234._1_1_ = (byte)((uint)uStack_a3 >> 8);
    uStack_232._0_1_ = (byte)((uint)uStack_a3 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)uStack_a3 >> 0x18);
    uStack_240._0_1_ = SUB41(fStack_af,0);
    uStack_240._1_1_ = (byte)((uint)fStack_af >> 8);
    uStack_240._2_1_ = (byte)((uint)fStack_af >> 0x10);
    uStack_240._3_1_ = (byte)((uint)fStack_af >> 0x18);
    uStack_23c._0_1_ = SUB41(uStack_ab,0);
    uStack_23c._1_1_ = (byte)((uint)uStack_ab >> 8);
    uStack_23a._0_1_ = (byte)((uint)uStack_ab >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)uStack_ab >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
      dVar14 = (double)CONCAT17(uStack_232._1_1_,
                                CONCAT16((byte)uStack_232,
                                         CONCAT15(uStack_234._1_1_,
                                                  CONCAT14((byte)uStack_234,
                                                           CONCAT13(uStack_236._1_1_,
                                                                    CONCAT12((byte)uStack_236,
                                                                             CONCAT11(uStack_238.
                                                                                      _1_1_,(byte)
                                                  uStack_238)))))));
      dVar15 = (double)CONCAT17(uStack_23a._1_1_,
                                CONCAT16((byte)uStack_23a,
                                         CONCAT15(uStack_23c._1_1_,
                                                  CONCAT14((byte)uStack_23c,
                                                           CONCAT13(uStack_240._3_1_,
                                                                    CONCAT12(uStack_240._2_1_,
                                                                             CONCAT11(uStack_240.
                                                                                      _1_1_,(byte)
                                                  uStack_240)))))));
    }
    uStack_90 = (double)CONCAT44(uStack_ab,fStack_af) -
                dVar15 * (double)CONCAT17(bStack_c9,
                                          CONCAT16(bStack_ca,
                                                   CONCAT15(bStack_cb,
                                                            CONCAT14(bStack_cc,
                                                                     CONCAT13(bStack_cd,
                                                                              CONCAT12(bStack_ce,
                                                                                       CONCAT11(
                                                  bStack_cf,bStack_d0)))))));
    uStack_88 = (double)CONCAT44(uStack_a3,fStack_a7) -
                dVar14 * (double)CONCAT17(bStack_c1,
                                          CONCAT16(bStack_c2,
                                                   CONCAT15(bStack_c3,
                                                            CONCAT14(bStack_c4,
                                                                     CONCAT13(bStack_c5,
                                                                              CONCAT12(bStack_c6,
                                                                                       CONCAT11(
                                                  bStack_c7,bStack_c8)))))));
    uStack_121f = SUB87(uStack_88,0);
    bStack_1218 = (byte)((ulong)uStack_88 >> 0x38);
    auVar97._1_8_ = uStack_90;
    auVar97[0] = 5;
    auVar97._9_7_ = uStack_121f;
code_r0x0123d8fc:
    fStack_a7 = auVar97._9_4_;
    uStack_a3._0_3_ = auVar97._13_3_;
    uStack_b0 = auVar97[0];
    fStack_af = auVar97._1_4_;
    uStack_ab = auVar97._5_4_;
    uStack_a3 = (float)CONCAT13(bStack_1218,(uint3)uStack_a3);
code_r0x0123d904:
    lVar61 = (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f;
code_r0x0123d91c:
    StackValue::StackValue((StackValue *)&uStack_90,&uStack_b0,this,lVar61);
    pdVar62 = *(double **)(this + 0x28);
    *(long *)(this + 0x28) = (long)pdVar62 + 0x11;
    goto code_r0x0123e450;
  case 0xfda5:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    auStack_257 = (undefined1  [8])
                  ((double)CONCAT17((byte)uStack_238,
                                    CONCAT16(uStack_23a._1_1_,
                                             CONCAT15((byte)uStack_23a,
                                                      CONCAT14(uStack_23c._1_1_,
                                                               CONCAT13((byte)uStack_23c,
                                                                        CONCAT12(uStack_240._3_1_,
                                                                                 CONCAT11(uStack_240
                                                                                          ._2_1_,
                                                  uStack_240._1_1_))))))) +
                  (double)CONCAT17(bStack_c8,
                                   CONCAT16(bStack_c9,
                                            CONCAT15(bStack_ca,
                                                     CONCAT14(bStack_cb,
                                                              CONCAT13(bStack_cc,
                                                                       CONCAT12(bStack_cd,
                                                                                CONCAT11(bStack_ce,
                                                                                         bStack_cf))
                                                                      ))))));
    uStack_88 = (double)CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))) +
                (double)CONCAT17(bStack_c0,
                                 CONCAT16(bStack_c1,
                                          CONCAT15(bStack_c2,
                                                   CONCAT14(bStack_c3,
                                                            CONCAT13(bStack_c4,
                                                                     CONCAT12(bStack_c5,
                                                                              CONCAT11(bStack_c6,
                                                                                       bStack_c7))))
                                                  )));
    uStack_258 = 5;
    uStack_24f = SUB87(uStack_88,0);
    bStack_248 = (byte)((ulong)uStack_88 >> 0x38);
    auVar85._1_8_ = auStack_257;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_24f;
    bStack_900 = bStack_248;
    uStack_90 = (double)auStack_257;
    break;
  case 0xfda6:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_26f = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_))))))) -
                 (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_88 = (double)CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))) -
                (double)CONCAT17(bStack_c0,
                                 CONCAT16(bStack_c1,
                                          CONCAT15(bStack_c2,
                                                   CONCAT14(bStack_c3,
                                                            CONCAT13(bStack_c4,
                                                                     CONCAT12(bStack_c5,
                                                                              CONCAT11(bStack_c6,
                                                                                       bStack_c7))))
                                                  )));
    uStack_270 = 5;
    uStack_267 = SUB87(uStack_88,0);
    bStack_260 = (byte)((ulong)uStack_88 >> 0x38);
    auVar85._1_8_ = dStack_26f;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_267;
    bStack_900 = bStack_260;
    uStack_90 = dStack_26f;
    break;
  case 0xfda7:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_287 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_))))))) *
                 (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_88 = (double)CONCAT17(bStack_230,
                                 CONCAT16(uStack_232._1_1_,
                                          CONCAT15((byte)uStack_232,
                                                   CONCAT14(uStack_234._1_1_,
                                                            CONCAT13((byte)uStack_234,
                                                                     CONCAT12(uStack_236._1_1_,
                                                                              CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_))))))) *
                (double)CONCAT17(bStack_c0,
                                 CONCAT16(bStack_c1,
                                          CONCAT15(bStack_c2,
                                                   CONCAT14(bStack_c3,
                                                            CONCAT13(bStack_c4,
                                                                     CONCAT12(bStack_c5,
                                                                              CONCAT11(bStack_c6,
                                                                                       bStack_c7))))
                                                  )));
    uStack_288 = 5;
    uStack_27f = SUB87(uStack_88,0);
    bStack_278 = (byte)((ulong)uStack_88 >> 0x38);
    auVar85._1_8_ = dStack_287;
    auVar85[0] = 5;
    auVar85._9_7_ = uStack_27f;
    bStack_900 = bStack_278;
    uStack_90 = dStack_287;
    break;
  case 0xfda8:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dStack_29f = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_88 = (double)CONCAT17(bStack_c0,
                                 CONCAT16(bStack_c1,
                                          CONCAT15(bStack_c2,
                                                   CONCAT14(bStack_c3,
                                                            CONCAT13(bStack_c4,
                                                                     CONCAT12(bStack_c5,
                                                                              CONCAT11(bStack_c6,
                                                                                       bStack_c7))))
                                                  )));
    dVar14 = (double)CONCAT17((byte)uStack_238,
                              CONCAT16(uStack_23a._1_1_,
                                       CONCAT15((byte)uStack_23a,
                                                CONCAT14(uStack_23c._1_1_,
                                                         CONCAT13((byte)uStack_23c,
                                                                  CONCAT12(uStack_240._3_1_,
                                                                           CONCAT11(uStack_240._2_1_
                                                                                    ,uStack_240.
                                                                                     _1_1_)))))));
    dVar15 = (double)CONCAT17(bStack_230,
                              CONCAT16(uStack_232._1_1_,
                                       CONCAT15((byte)uStack_232,
                                                CONCAT14(uStack_234._1_1_,
                                                         CONCAT13((byte)uStack_234,
                                                                  CONCAT12(uStack_236._1_1_,
                                                                           CONCAT11((byte)uStack_236
                                                                                    ,uStack_238.
                                                                                     _1_1_)))))));
    if (dStack_29f == 0.0) {
      dStack_29f = NAN;
      if (((dVar14 != 0.0) && (!NAN(dVar14))) &&
         (dStack_29f = INFINITY, 0.0 <= dVar14 == (char)bStack_c8 < '\0')) {
        dStack_29f = -INFINITY;
      }
      if (uStack_88 != 0.0) goto code_r0x0123e3d4;
code_r0x01231a94:
      uStack_88 = NAN;
      if (((dVar15 != 0.0) && (!NAN(dVar15))) &&
         (uStack_88 = INFINITY, 0.0 <= dVar15 == (char)bStack_c0 < '\0')) {
        uStack_88 = -INFINITY;
      }
    }
    else {
      dStack_29f = dVar14 / dStack_29f;
      if (uStack_88 == 0.0) goto code_r0x01231a94;
code_r0x0123e3d4:
      uStack_88 = dVar15 / uStack_88;
    }
    uStack_2a0 = 5;
    uStack_297 = SUB87(uStack_88,0);
    bStack_290 = (byte)((ulong)uStack_88 >> 0x38);
    auVar99._1_8_ = dStack_29f;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_297;
    bStack_1080 = bStack_290;
    uStack_90 = dStack_29f;
    goto code_r0x0123e408;
  case 0xfda9:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dVar14 = (double)CONCAT17((byte)uStack_238,
                              CONCAT16(uStack_23a._1_1_,
                                       CONCAT15((byte)uStack_23a,
                                                CONCAT14(uStack_23c._1_1_,
                                                         CONCAT13((byte)uStack_23c,
                                                                  CONCAT12(uStack_240._3_1_,
                                                                           CONCAT11(uStack_240._2_1_
                                                                                    ,uStack_240.
                                                                                     _1_1_)))))));
    dVar15 = (double)CONCAT17(bStack_230,
                              CONCAT16(uStack_232._1_1_,
                                       CONCAT15((byte)uStack_232,
                                                CONCAT14(uStack_234._1_1_,
                                                         CONCAT13((byte)uStack_234,
                                                                  CONCAT12(uStack_236._1_1_,
                                                                           CONCAT11((byte)uStack_236
                                                                                    ,uStack_238.
                                                                                     _1_1_)))))));
    dVar49 = (double)CONCAT17(bStack_c0,
                              CONCAT16(bStack_c1,
                                       CONCAT15(bStack_c2,
                                                CONCAT14(bStack_c3,
                                                         CONCAT13(bStack_c4,
                                                                  CONCAT12(bStack_c5,
                                                                           CONCAT11(bStack_c6,
                                                                                    bStack_c7)))))))
    ;
    uStack_90 = dVar14;
    if ((((!NAN(dVar14)) &&
         (uStack_90 = (double)CONCAT17(bStack_c8,
                                       CONCAT16(bStack_c9,
                                                CONCAT15(bStack_ca,
                                                         CONCAT14(bStack_cb,
                                                                  CONCAT13(bStack_cc,
                                                                           CONCAT12(bStack_cd,
                                                                                    CONCAT11(
                                                  bStack_ce,bStack_cf))))))), !NAN(uStack_90))) &&
        (((char)(byte)uStack_238 < '\0' || (-1 < (char)bStack_c8)))) && (dVar14 <= uStack_90)) {
      uStack_90 = dVar14;
    }
    uStack_88 = dVar15;
    if (((!NAN(dVar15)) && (uStack_88 = dVar49, !NAN(dVar49))) &&
       ((((char)bStack_230 < '\0' || (-1 < (char)bStack_c0)) && (dVar15 <= dVar49)))) {
      uStack_88 = dVar15;
    }
    uStack_2b8 = 5;
    uStack_2af = SUB87(uStack_88,0);
    bStack_2a8 = (byte)((ulong)uStack_88 >> 0x38);
    auVar99._1_8_ = uStack_90;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_2af;
    bStack_1080 = bStack_2a8;
    goto code_r0x0123e408;
  case 0xfdaa:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dVar14 = (double)CONCAT17((byte)uStack_238,
                              CONCAT16(uStack_23a._1_1_,
                                       CONCAT15((byte)uStack_23a,
                                                CONCAT14(uStack_23c._1_1_,
                                                         CONCAT13((byte)uStack_23c,
                                                                  CONCAT12(uStack_240._3_1_,
                                                                           CONCAT11(uStack_240._2_1_
                                                                                    ,uStack_240.
                                                                                     _1_1_)))))));
    dVar15 = (double)CONCAT17(bStack_230,
                              CONCAT16(uStack_232._1_1_,
                                       CONCAT15((byte)uStack_232,
                                                CONCAT14(uStack_234._1_1_,
                                                         CONCAT13((byte)uStack_234,
                                                                  CONCAT12(uStack_236._1_1_,
                                                                           CONCAT11((byte)uStack_236
                                                                                    ,uStack_238.
                                                                                     _1_1_)))))));
    dVar49 = (double)CONCAT17(bStack_c0,
                              CONCAT16(bStack_c1,
                                       CONCAT15(bStack_c2,
                                                CONCAT14(bStack_c3,
                                                         CONCAT13(bStack_c4,
                                                                  CONCAT12(bStack_c5,
                                                                           CONCAT11(bStack_c6,
                                                                                    bStack_c7)))))))
    ;
    uStack_90 = dVar14;
    if ((((!NAN(dVar14)) &&
         (dVar39 = (double)CONCAT17(bStack_c8,
                                    CONCAT16(bStack_c9,
                                             CONCAT15(bStack_ca,
                                                      CONCAT14(bStack_cb,
                                                               CONCAT13(bStack_cc,
                                                                        CONCAT12(bStack_cd,
                                                                                 CONCAT11(bStack_ce,
                                                                                          bStack_cf)
                                                                                )))))),
         uStack_90 = dVar39, !NAN(dVar39))) &&
        (((char)(byte)uStack_238 < '\0' || (uStack_90 = dVar14, -1 < (char)bStack_c8)))) &&
       (uStack_90 = dVar14, dVar14 <= dVar39)) {
      uStack_90 = dVar39;
    }
    uStack_88 = dVar15;
    if (((!NAN(dVar15)) && (uStack_88 = dVar49, !NAN(dVar49))) &&
       ((((char)bStack_230 < '\0' || (uStack_88 = dVar15, -1 < (char)bStack_c0)) &&
        (uStack_88 = dVar15, dVar15 <= dVar49)))) {
      uStack_88 = dVar49;
    }
    uStack_2d0 = 5;
    uStack_2c7 = SUB87(uStack_88,0);
    bStack_2c0 = (byte)((ulong)uStack_88 >> 0x38);
    auVar99._1_8_ = uStack_90;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_2c7;
    bStack_1080 = bStack_2c0;
    goto code_r0x0123e408;
  case 0xfdab:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    fVar112 = (float)CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    fVar118 = (float)CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    fVar105 = (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    if (NAN(fVar75)) {
      iVar58 = 0;
    }
    else if (-2.1474836e+09 <= fVar75) {
      iVar58 = 0x7fffffff;
      if (fVar75 <= 2.1474836e+09) {
        iVar58 = (int)fVar75;
      }
    }
    else {
      iVar58 = -0x80000000;
    }
    uStack_240._0_1_ = (byte)iVar58;
    uStack_240._1_1_ = (byte)((uint)iVar58 >> 8);
    uStack_240._2_1_ = (byte)((uint)iVar58 >> 0x10);
    uStack_240._3_1_ = (byte)((uint)iVar58 >> 0x18);
    if (NAN(fVar112)) {
      iVar59 = 0;
    }
    else if (-2.1474836e+09 <= fVar112) {
      iVar59 = 0x7fffffff;
      if (fVar112 <= 2.1474836e+09) {
        iVar59 = (int)fVar112;
      }
    }
    else {
      iVar59 = -0x80000000;
    }
    uStack_23c._0_1_ = (byte)iVar59;
    uStack_23c._1_1_ = (byte)((uint)iVar59 >> 8);
    uStack_23a._0_1_ = (byte)((uint)iVar59 >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)iVar59 >> 0x18);
    if (NAN(fVar118)) {
      iVar59 = 0;
    }
    else if (-2.1474836e+09 <= fVar118) {
      iVar59 = 0x7fffffff;
      if (fVar118 <= 2.1474836e+09) {
        iVar59 = (int)fVar118;
      }
    }
    else {
      iVar59 = -0x80000000;
    }
    uStack_238._0_1_ = (byte)iVar59;
    uStack_238._1_1_ = (byte)((uint)iVar59 >> 8);
    uStack_236._0_1_ = (byte)((uint)iVar59 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)iVar59 >> 0x18);
    if (NAN(fVar105)) {
      iVar63 = 0;
    }
    else if (-2.1474836e+09 <= fVar105) {
      iVar63 = 0x7fffffff;
      if (fVar105 <= 2.1474836e+09) {
        iVar63 = (int)fVar105;
      }
    }
    else {
      iVar63 = -0x80000000;
    }
    uStack_234._0_1_ = (byte)iVar63;
    uStack_234._1_1_ = (byte)((uint)iVar63 >> 8);
    uStack_232._0_1_ = (byte)((uint)iVar63 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)iVar63 >> 0x18);
    uVar26 = CONCAT16((byte)uStack_232,CONCAT15(uStack_234._1_1_,CONCAT14((byte)uStack_234,iVar59)))
    ;
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,iVar58))));
    auVar98._1_8_ = uStack_90;
    auVar98[0] = 5;
    auVar98._9_7_ = uVar26;
    bStack_7f8 = uStack_232._1_1_;
code_r0x0123e384:
    fStack_a7 = auVar98._9_4_;
    uStack_a3._0_3_ = auVar98._13_3_;
    uStack_b0 = auVar98[0];
    fStack_af = auVar98._1_4_;
    uStack_ab = auVar98._5_4_;
code_r0x0123e658:
    uStack_a3 = (float)CONCAT13(bStack_7f8,(uint3)uStack_a3);
    goto code_r0x0123e65c;
  case 0xfdac:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    fVar112 = (float)CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    fVar118 = (float)CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    iVar58 = (int)fVar75;
    fVar105 = (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    if (4.2949673e+09 < fVar75) {
      iVar58 = -1;
    }
    iVar63 = (int)fVar112;
    iVar59 = 0;
    if (0.0 <= fVar75) {
      iVar59 = iVar58;
    }
    if (4.2949673e+09 < fVar112) {
      iVar63 = -1;
    }
    iVar67 = (int)fVar118;
    iVar58 = 0;
    if (0.0 <= fVar112) {
      iVar58 = iVar63;
    }
    uStack_240._0_1_ = (byte)iVar59;
    uStack_240._1_1_ = (byte)((uint)iVar59 >> 8);
    uStack_240._2_1_ = (byte)((uint)iVar59 >> 0x10);
    uStack_240._3_1_ = (byte)((uint)iVar59 >> 0x18);
    if (4.2949673e+09 < fVar118) {
      iVar67 = -1;
    }
    iVar69 = (int)fVar105;
    iVar63 = 0;
    if (0.0 <= fVar118) {
      iVar63 = iVar67;
    }
    uStack_23c._0_1_ = (byte)iVar58;
    uStack_23c._1_1_ = (byte)((uint)iVar58 >> 8);
    uStack_23a._0_1_ = (byte)((uint)iVar58 >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)iVar58 >> 0x18);
    if (4.2949673e+09 < fVar105) {
      iVar69 = -1;
    }
    iVar58 = 0;
    if (0.0 <= fVar105) {
      iVar58 = iVar69;
    }
    uStack_234._0_1_ = (byte)iVar58;
    uStack_234._1_1_ = (byte)((uint)iVar58 >> 8);
    uStack_232._0_1_ = (byte)((uint)iVar58 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)iVar58 >> 0x18);
    uStack_238._0_1_ = (byte)iVar63;
    uStack_238._1_1_ = (byte)((uint)iVar63 >> 8);
    uStack_236._0_1_ = (byte)((uint)iVar63 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)iVar63 >> 0x18);
    uVar26 = CONCAT16((byte)uStack_232,CONCAT15(uStack_234._1_1_,CONCAT14((byte)uStack_234,iVar63)))
    ;
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,iVar59))));
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uVar26;
    bStack_f30 = uStack_232._1_1_;
    goto code_r0x0123a730;
  case 0xfdaf:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_90 = (double)CONCAT44((float)CONCAT13(bStack_c8,
                                                 CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))),
                                 (float)CONCAT13(bStack_cc,
                                                 CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))))
    ;
    uStack_88 = (double)CONCAT44(fVar75,(float)CONCAT13(bStack_c4,
                                                        CONCAT12(bStack_c5,
                                                                 CONCAT11(bStack_c6,bStack_c7))));
    uStack_f4f = SUB87(uStack_88,0);
    bStack_f48 = (byte)((uint)fVar75 >> 0x18);
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uStack_f4f;
    bStack_f30 = bStack_f48;
    goto code_r0x0123a730;
  case 0xfdb0:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = NEON_ucvtf(CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf))));
    uVar104 = NEON_ucvtf(CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))));
    uVar111 = NEON_ucvtf(CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))));
    uVar117 = NEON_ucvtf(CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))));
    uStack_90 = (double)CONCAT44(uVar104,uVar74);
    uStack_88 = (double)CONCAT44(uVar117,uVar111);
    uStack_f67 = SUB87(uStack_88,0);
    bStack_f60 = (byte)((uint)uVar117 >> 0x18);
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uStack_f67;
    bStack_f30 = bStack_f60;
    goto code_r0x0123a730;
  case 0xfdb1:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    auVar41[1] = bStack_ce;
    auVar41[0] = bStack_cf;
    auVar41[2] = bStack_cd;
    auVar41[3] = bStack_cc;
    auVar41[4] = bStack_cb;
    auVar41[5] = bStack_ca;
    auVar41[6] = bStack_c9;
    auVar41[7] = bStack_c8;
    auVar41[8] = bStack_c7;
    auVar41[9] = bStack_c6;
    auVar41[10] = bStack_c5;
    auVar41[0xb] = bStack_c4;
    auVar41[0xc] = bStack_c3;
    auVar41[0xd] = bStack_c2;
    auVar41[0xe] = bStack_c1;
    auVar41[0xf] = bStack_c0;
    auVar83 = NEON_scvtf(auVar41,8);
    uStack_88 = auVar83._8_8_;
    uStack_90 = auVar83._0_8_;
    uStack_f1f = auVar83._8_7_;
    bStack_f18 = auVar83[0xf];
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uStack_f1f;
    bStack_f30 = bStack_f18;
    goto code_r0x0123a730;
  case 0xfdb2:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    auVar42[1] = bStack_ce;
    auVar42[0] = bStack_cf;
    auVar42[2] = bStack_cd;
    auVar42[3] = bStack_cc;
    auVar42[4] = bStack_cb;
    auVar42[5] = bStack_ca;
    auVar42[6] = bStack_c9;
    auVar42[7] = bStack_c8;
    auVar42[8] = bStack_c7;
    auVar42[9] = bStack_c6;
    auVar42[10] = bStack_c5;
    auVar42[0xb] = bStack_c4;
    auVar42[0xc] = bStack_c3;
    auVar42[0xd] = bStack_c2;
    auVar42[0xe] = bStack_c1;
    auVar42[0xf] = bStack_c0;
    auVar83 = NEON_ucvtf(auVar42,8);
    uStack_88 = auVar83._8_8_;
    uStack_90 = auVar83._0_8_;
    uStack_f37 = auVar83._8_7_;
    bStack_f30 = auVar83[0xf];
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uStack_f37;
    goto code_r0x0123a730;
  case 0xfdbd:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar74 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    uVar12 = CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,uVar74));
    uVar111 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    uVar36 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,uVar111));
    uVar104 = CONCAT13((byte)uStack_234,
                       CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    uVar32 = CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,uVar104));
    uVar117 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uVar46 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,uVar117));
    sVar100 = (short)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar46)) >> 0x30) +
              (short)((uint6)uVar46 >> 0x20);
    uStack_420._0_4_ =
         (float)CONCAT22((short)(CONCAT17((byte)uStack_238,CONCAT16(uStack_23a._1_1_,uVar12)) >>
                                0x30) + (short)((uint6)uVar12 >> 0x20),
                         CONCAT11(uStack_240._2_1_,uStack_240._1_1_) + (short)((uint)uVar74 >> 0x10)
                        );
    uStack_418._0_4_ =
         (float)CONCAT22((short)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar36)) >> 0x30) +
                         (short)((uint6)uVar36 >> 0x20),
                         CONCAT11(bStack_ce,bStack_cf) + (short)((uint)uVar111 >> 0x10));
    uStack_420 = (double)CONCAT26((short)(CONCAT17(bStack_230,CONCAT16(uStack_232._1_1_,uVar32)) >>
                                         0x30) + (short)((uint6)uVar32 >> 0x20),
                                  CONCAT24(CONCAT11((byte)uStack_236,uStack_238._1_1_) +
                                           (short)((uint)uVar104 >> 0x10),(float)uStack_420));
    uStack_418 = (double)CONCAT26(sVar100,CONCAT24(CONCAT11(bStack_c6,bStack_c7) +
                                                   (short)((uint)uVar117 >> 0x10),(float)uStack_418)
                                 );
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_1117 = SUB87(uStack_418,0);
    bStack_1110 = (byte)((ushort)sVar100 >> 8);
    auVar99._1_8_ = uStack_420;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_1117;
    bStack_1080 = bStack_1110;
    goto code_r0x0123e408;
  case 0xfdbe:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) +
             CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    uStack_420 = (double)CONCAT44(CONCAT13(bStack_230,
                                           CONCAT12(uStack_232._1_1_,
                                                    CONCAT11((byte)uStack_232,uStack_234._1_1_))) +
                                  CONCAT13((byte)uStack_234,
                                           CONCAT12(uStack_236._1_1_,
                                                    CONCAT11((byte)uStack_236,uStack_238._1_1_))),
                                  CONCAT13((byte)uStack_238,
                                           CONCAT12(uStack_23a._1_1_,
                                                    CONCAT11((byte)uStack_23a,uStack_23c._1_1_))) +
                                  CONCAT13((byte)uStack_23c,
                                           CONCAT12(uStack_240._3_1_,
                                                    CONCAT11(uStack_240._2_1_,uStack_240._1_1_))));
    uStack_418 = (double)CONCAT44(iVar58,CONCAT13(bStack_c8,
                                                  CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)))
                                         + CONCAT13(bStack_cc,
                                                    CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)
                                                            )));
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_10e7 = SUB87(uStack_418,0);
    bStack_10e0 = (byte)((uint)iVar58 >> 0x18);
    auVar99._1_8_ = uStack_420;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_10e7;
    bStack_1080 = bStack_10e0;
    goto code_r0x0123e408;
  case 0xfdbf:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_90 = (double)CONCAT44((float)CONCAT13((byte)uStack_234,
                                                 CONCAT12(uStack_236._1_1_,
                                                          CONCAT11((byte)uStack_236,uStack_238._1_1_
                                                                  ))) +
                                 (float)CONCAT13(bStack_230,
                                                 CONCAT12(uStack_232._1_1_,
                                                          CONCAT11((byte)uStack_232,uStack_234._1_1_
                                                                  ))),
                                 (float)CONCAT13((byte)uStack_23c,
                                                 CONCAT12(uStack_240._3_1_,
                                                          CONCAT11(uStack_240._2_1_,uStack_240._1_1_
                                                                  ))) +
                                 (float)CONCAT13((byte)uStack_238,
                                                 CONCAT12(uStack_23a._1_1_,
                                                          CONCAT11((byte)uStack_23a,uStack_23c._1_1_
                                                                  ))));
    fVar75 = (float)CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7))) +
             (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    uStack_88 = (double)CONCAT44(fVar75,(float)CONCAT13(bStack_cc,
                                                        CONCAT12(bStack_cd,
                                                                 CONCAT11(bStack_ce,bStack_cf))) +
                                        (float)CONCAT13(bStack_c8,
                                                        CONCAT12(bStack_c9,
                                                                 CONCAT11(bStack_ca,bStack_cb))));
    uStack_10ff = SUB87(uStack_88,0);
    bStack_10f8 = (byte)((uint)fVar75 >> 0x18);
    auVar99._1_8_ = uStack_90;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_10ff;
    bStack_1080 = bStack_10f8;
    goto code_r0x0123e408;
  case 0xfdc0:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    fVar75 = fStack_af;
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    bStack_c8 = SUB41(fStack_a7,0);
    bStack_c7 = (byte)((uint)fStack_a7 >> 8);
    bStack_c6 = (byte)((uint)fStack_a7 >> 0x10);
    bStack_c5 = (byte)((uint)fStack_a7 >> 0x18);
    bStack_c4 = SUB41(uStack_a3,0);
    bStack_c3 = (byte)((uint)uStack_a3 >> 8);
    bStack_c2 = (byte)((uint)uStack_a3 >> 0x10);
    bStack_c1 = (byte)((uint)uStack_a3 >> 0x18);
    bStack_d0 = SUB41(fStack_af,0);
    bStack_cf = (byte)((uint)fStack_af >> 8);
    bStack_ce = (byte)((uint)fStack_af >> 0x10);
    bStack_cd = (byte)((uint)fStack_af >> 0x18);
    bStack_cc = SUB41(uStack_ab,0);
    bStack_cb = (byte)((uint)uStack_ab >> 8);
    bStack_ca = (byte)((uint)uStack_ab >> 0x10);
    bStack_c9 = (byte)((uint)uStack_ab >> 0x18);
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    dVar15 = uStack_418;
    dVar14 = uStack_420;
    uVar60 = (ulong)(uint)fVar75;
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
      uVar60 = (ulong)bStack_d0;
    }
    uStack_238._0_1_ = SUB41(fStack_a7,0);
    uStack_238._1_1_ = (byte)((uint)fStack_a7 >> 8);
    uStack_236._0_1_ = (byte)((uint)fStack_a7 >> 0x10);
    uStack_236._1_1_ = (byte)((uint)fStack_a7 >> 0x18);
    uStack_234._0_1_ = SUB41(uStack_a3,0);
    uStack_234._1_1_ = (byte)((uint)uStack_a3 >> 8);
    uStack_232._0_1_ = (byte)((uint)uStack_a3 >> 0x10);
    uStack_232._1_1_ = (byte)((uint)uStack_a3 >> 0x18);
    uStack_240._0_1_ = SUB41(fStack_af,0);
    uStack_240._1_1_ = (byte)((uint)fStack_af >> 8);
    uStack_240._2_1_ = (byte)((uint)fStack_af >> 0x10);
    uStack_240._3_1_ = (byte)((uint)fStack_af >> 0x18);
    uStack_23c._0_1_ = SUB41(uStack_ab,0);
    uStack_23c._1_1_ = (byte)((uint)uStack_ab >> 8);
    uStack_23a._0_1_ = (byte)((uint)uStack_ab >> 0x10);
    uStack_23a._1_1_ = (byte)((uint)uStack_ab >> 0x18);
    if (((uint)uVar60 & 0xff) < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (uVar60 & 0xff));
    }
    else {
      uVar56 = 0;
    }
    uStack_420 = (double)CONCAT71(uStack_420._1_7_,uVar56);
    if ((ulong)bStack_cf < 0x10) {
      uVar57 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_cf);
    }
    else {
      uVar57 = 0;
    }
    uStack_420._2_6_ = SUB86(dVar14,2);
    uStack_420._0_2_ = CONCAT11(uVar57,uVar56);
    if ((ulong)bStack_ce < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_ce);
    }
    else {
      uVar56 = 0;
    }
    uStack_420._3_5_ = SUB85(dVar14,3);
    uStack_420._0_3_ = CONCAT12(uVar56,(undefined2)uStack_420);
    if ((ulong)bStack_cd < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_cd);
    }
    else {
      uVar56 = 0;
    }
    uStack_420._4_4_ = SUB84(dVar14,4);
    uStack_420._0_4_ = (float)CONCAT13(uVar56,(undefined3)uStack_420);
    if ((ulong)bStack_cc < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_cc);
    }
    else {
      uVar56 = 0;
    }
    uStack_420._5_3_ = SUB83(dVar14,5);
    uStack_420._0_5_ = CONCAT14(uVar56,(float)uStack_420);
    if ((ulong)bStack_cb < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_cb);
    }
    else {
      uVar56 = 0;
    }
    uStack_420._6_2_ = SUB82(dVar14,6);
    uStack_420._0_6_ = CONCAT15(uVar56,(undefined5)uStack_420);
    if ((ulong)bStack_ca < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_ca);
    }
    else {
      uVar56 = 0;
    }
    uStack_420._7_1_ = SUB81(dVar14,7);
    uStack_420._0_7_ = CONCAT16(uVar56,(int6)uStack_420);
    if ((ulong)bStack_c9 < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_c9);
    }
    else {
      uVar56 = 0;
    }
    uStack_420 = (double)CONCAT17(uVar56,(undefined7)uStack_420);
    if ((ulong)bStack_c8 < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_c8);
    }
    else {
      uVar56 = 0;
    }
    uStack_418 = (double)CONCAT71(uStack_418._1_7_,uVar56);
    if ((ulong)bStack_c7 < 0x10) {
      uVar57 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_c7);
    }
    else {
      uVar57 = 0;
    }
    uStack_418._2_6_ = SUB86(dVar15,2);
    uStack_418._0_2_ = CONCAT11(uVar57,uVar56);
    if ((ulong)bStack_c6 < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_c6);
    }
    else {
      uVar56 = 0;
    }
    uStack_418._3_5_ = SUB85(dVar15,3);
    uStack_418._0_3_ = CONCAT12(uVar56,(undefined2)uStack_418);
    if ((ulong)bStack_c5 < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_c5);
    }
    else {
      uVar56 = 0;
    }
    uStack_418._4_4_ = SUB84(dVar15,4);
    uStack_418._0_4_ = (float)CONCAT13(uVar56,(undefined3)uStack_418);
    if ((ulong)bStack_c4 < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_c4);
    }
    else {
      uVar56 = 0;
    }
    uStack_418._5_3_ = SUB83(dVar15,5);
    uStack_418._0_5_ = CONCAT14(uVar56,(float)uStack_418);
    if ((ulong)bStack_c3 < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_c3);
    }
    else {
      uVar56 = 0;
    }
    uStack_418._6_2_ = SUB82(dVar15,6);
    uStack_418._0_6_ = CONCAT15(uVar56,(undefined5)uStack_418);
    if ((ulong)bStack_c2 < 0x10) {
      uVar56 = *(undefined1 *)((long)&uStack_240 + (ulong)bStack_c2);
    }
    else {
      uVar56 = 0;
    }
    uStack_418._7_1_ = SUB81(dVar15,7);
    uStack_418._0_7_ = CONCAT16(uVar56,(undefined6)uStack_418);
    if ((ulong)bStack_c1 < 0x10) {
      bStack_1080 = *(byte *)((long)&uStack_240 + (ulong)bStack_c1);
    }
    else {
      bStack_1080 = 0;
    }
    uStack_418 = (double)CONCAT17(bStack_1080,(undefined7)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    auVar99._1_8_ = uStack_420;
    auVar99[0] = 5;
    auVar99._9_7_ = (undefined7)uStack_418;
    goto code_r0x0123e408;
  case 0xfdc2:
    bVar53 = DoSimdLoadSplat<v8::internal::wasm::int16,int,signed_char>
                       (this,param_3,param_4,param_5,param_6,2);
    goto code_r0x01238a6c;
  case 0xfdc3:
    bVar53 = DoSimdLoadSplat<v8::internal::wasm::int8,int,short>
                       (this,param_3,param_4,param_5,param_6,3);
    goto code_r0x01238a6c;
  case 0xfdc4:
    bVar53 = DoSimdLoadSplat<v8::internal::wasm::int4,int,int>
                       (this,param_3,param_4,param_5,param_6,4);
    goto code_r0x01238a6c;
  case 0xfdc5:
    bVar53 = DoSimdLoadSplat<v8::internal::wasm::int2,long,long>
                       (this,param_3,param_4,param_5,param_6,5);
    goto code_r0x01238a6c;
  case 0xfdc6:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    uVar60 = 0;
    pbVar64 = (byte *)&uStack_420;
    pbVar70 = abStack_640;
    do {
      pbVar4 = pbVar64;
      if (7 < uVar60) {
        pbVar4 = pbVar70;
      }
      sVar100 = *(short *)pbVar4;
      pbVar64 = pbVar64 + 2;
      pbVar70 = pbVar70 + 2;
      if (0x7e < sVar100) {
        sVar100 = 0x7f;
      }
      if (sVar100 < -0x7f) {
        sVar100 = -0x80;
      }
      abStack_640[uVar60] = (byte)sVar100;
      uVar60 = uVar60 + 1;
    } while (uVar60 != 0x10);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar99._1_8_ = uStack_90;
    auVar99[0] = 5;
    auVar99._9_7_ = uVar26;
    bStack_1080 = abStack_640[0xf];
    goto code_r0x0123e408;
  case 0xfdc7:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_420 = (double)CONCAT17((byte)uStack_238,
                                  CONCAT16(uStack_23a._1_1_,
                                           CONCAT15((byte)uStack_23a,
                                                    CONCAT14(uStack_23c._1_1_,
                                                             CONCAT13((byte)uStack_23c,
                                                                      CONCAT12(uStack_240._3_1_,
                                                                               CONCAT11(uStack_240.
                                                                                        _2_1_,
                                                  uStack_240._1_1_)))))));
    uStack_418 = (double)CONCAT17(bStack_230,
                                  CONCAT16(uStack_232._1_1_,
                                           CONCAT15((byte)uStack_232,
                                                    CONCAT14(uStack_234._1_1_,
                                                             CONCAT13((byte)uStack_234,
                                                                      CONCAT12(uStack_236._1_1_,
                                                                               CONCAT11((byte)
                                                  uStack_236,uStack_238._1_1_)))))));
    uStack_630 = (double)CONCAT17(bStack_c8,
                                  CONCAT16(bStack_c9,
                                           CONCAT15(bStack_ca,
                                                    CONCAT14(bStack_cb,
                                                             CONCAT13(bStack_cc,
                                                                      CONCAT12(bStack_cd,
                                                                               CONCAT11(bStack_ce,
                                                                                        bStack_cf)))
                                                            ))));
    uStack_628 = (double)CONCAT17(bStack_c0,
                                  CONCAT16(bStack_c1,
                                           CONCAT15(bStack_c2,
                                                    CONCAT14(bStack_c3,
                                                             CONCAT13(bStack_c4,
                                                                      CONCAT12(bStack_c5,
                                                                               CONCAT11(bStack_c6,
                                                                                        bStack_c7)))
                                                            ))));
    uVar60 = 0;
    pbVar64 = (byte *)&uStack_420;
    pbVar70 = abStack_640;
    do {
      pbVar4 = pbVar64;
      if (7 < uVar60) {
        pbVar4 = pbVar70;
      }
      sVar100 = *(short *)pbVar4;
      pbVar64 = pbVar64 + 2;
      pbVar70 = pbVar70 + 2;
      if (0xfe < sVar100) {
        sVar100 = 0xff;
      }
      abStack_640[uVar60] = (byte)sVar100 & ((byte)(sVar100 >> 0xf) ^ 0xff);
      uVar60 = uVar60 + 1;
    } while (uVar60 != 0x10);
    uStack_90 = (double)CONCAT17(abStack_640[7],
                                 CONCAT16(abStack_640[6],
                                          CONCAT15(abStack_640[5],
                                                   CONCAT14(abStack_640[4],
                                                            CONCAT13(abStack_640[3],
                                                                     CONCAT12(abStack_640[2],
                                                                              CONCAT11(abStack_640
                                                                                       [1],
                                                  abStack_640[0])))))));
    uVar26 = CONCAT16(abStack_640[0xe],
                      CONCAT15(abStack_640[0xd],
                               CONCAT14(abStack_640[0xc],
                                        CONCAT13(abStack_640[0xb],
                                                 CONCAT12(abStack_640[10],
                                                          CONCAT11(abStack_640[9],abStack_640[8]))))
                              ));
    uStack_88 = (double)CONCAT17(abStack_640[0xf],uVar26);
    auVar99._1_8_ = uStack_90;
    auVar99[0] = 5;
    auVar99._9_7_ = uVar26;
    bStack_1080 = abStack_640[0xf];
    goto code_r0x0123e408;
  case 0xfdc8:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    lVar61 = CONCAT17((byte)uStack_238,
                      CONCAT16(uStack_23a._1_1_,
                               CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,iVar58))));
    iVar59 = CONCAT13((byte)uStack_234,
                      CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    lVar68 = CONCAT17(bStack_230,
                      CONCAT16(uStack_232._1_1_,
                               CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,iVar59))));
    if (0x7ffe < iVar58) {
      iVar58 = 0x7fff;
    }
    if (iVar58 < -0x7fff) {
      iVar58 = -0x8000;
    }
    lVar71 = lVar61 >> 0x20;
    if (0x7ffe < (int)((ulong)lVar61 >> 0x20)) {
      lVar71 = 0x7fff;
    }
    if (lVar71 < -0x7fff) {
      lVar71 = -0x8000;
    }
    if (0x7ffe < iVar59) {
      iVar59 = 0x7fff;
    }
    iVar63 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    lVar65 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,iVar63))));
    uStack_420._0_4_ = (float)CONCAT22((short)lVar71,(short)iVar58);
    lVar61 = lVar68 >> 0x20;
    if (iVar59 < -0x7fff) {
      iVar59 = -0x8000;
    }
    if (0x7ffe < (int)((ulong)lVar68 >> 0x20)) {
      lVar61 = 0x7fff;
    }
    if (lVar61 < -0x7fff) {
      lVar61 = -0x8000;
    }
    if (0x7ffe < iVar63) {
      iVar63 = 0x7fff;
    }
    iVar58 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    lVar71 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,iVar58))));
    uStack_420._0_6_ = CONCAT24((short)iVar59,(float)uStack_420);
    lVar68 = lVar65 >> 0x20;
    if (iVar63 < -0x7fff) {
      iVar63 = -0x8000;
    }
    if (0x7ffe < (int)((ulong)lVar65 >> 0x20)) {
      lVar68 = 0x7fff;
    }
    uStack_420 = (double)CONCAT26((short)lVar61,(int6)uStack_420);
    if (lVar68 < -0x7fff) {
      lVar68 = -0x8000;
    }
    if (0x7ffe < iVar58) {
      iVar58 = 0x7fff;
    }
    lVar61 = lVar71 >> 0x20;
    if (iVar58 < -0x7fff) {
      iVar58 = -0x8000;
    }
    if (0x7ffe < (int)((ulong)lVar71 >> 0x20)) {
      lVar61 = 0x7fff;
    }
    if (lVar61 < -0x7fff) {
      lVar61 = -0x8000;
    }
    uStack_418._0_4_ = (float)CONCAT22((short)lVar68,(short)iVar63);
    uStack_418._0_6_ = CONCAT24((short)iVar58,(float)uStack_418);
    uStack_418 = (double)CONCAT26((short)lVar61,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_106f = SUB87(uStack_418,0);
    bStack_1068 = (byte)((ulong)lVar61 >> 8);
    auVar99._1_8_ = uStack_420;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_106f;
    bStack_1080 = bStack_1068;
    goto code_r0x0123e408;
  case 0xfdc9:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    iVar58 = CONCAT13((byte)uStack_23c,
                      CONCAT12(uStack_240._3_1_,CONCAT11(uStack_240._2_1_,uStack_240._1_1_)));
    lVar68 = CONCAT17((byte)uStack_238,
                      CONCAT16(uStack_23a._1_1_,
                               CONCAT15((byte)uStack_23a,CONCAT14(uStack_23c._1_1_,iVar58))));
    iVar59 = CONCAT13((byte)uStack_234,
                      CONCAT12(uStack_236._1_1_,CONCAT11((byte)uStack_236,uStack_238._1_1_)));
    lVar71 = CONCAT17(bStack_230,
                      CONCAT16(uStack_232._1_1_,
                               CONCAT15((byte)uStack_232,CONCAT14(uStack_234._1_1_,iVar59))));
    lVar61 = (long)iVar58;
    if (0xfffe < iVar58) {
      lVar61 = 0xffff;
    }
    lVar65 = lVar68 >> 0x20;
    lVar72 = (long)iVar59;
    if (0xfffe < (int)((ulong)lVar68 >> 0x20)) {
      lVar65 = 0xffff;
    }
    if (0xfffe < iVar59) {
      lVar72 = 0xffff;
    }
    iVar58 = CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    lVar40 = CONCAT17(bStack_c8,CONCAT16(bStack_c9,CONCAT15(bStack_ca,CONCAT14(bStack_cb,iVar58))));
    iVar59 = CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    lVar50 = CONCAT17(bStack_c0,CONCAT16(bStack_c1,CONCAT15(bStack_c2,CONCAT14(bStack_c3,iVar59))));
    lVar68 = lVar71 >> 0x20;
    uStack_420._0_4_ =
         (float)CONCAT22((ushort)lVar65 & ((ushort)(lVar65 >> 0x3f) ^ 0xffff),
                         (ushort)lVar61 & ((ushort)(lVar61 >> 0x3f) ^ 0xffff));
    if (0xfffe < (int)((ulong)lVar71 >> 0x20)) {
      lVar68 = 0xffff;
    }
    lVar61 = (long)iVar58;
    uStack_420._0_6_ =
         CONCAT24((ushort)lVar72 & ((ushort)(lVar72 >> 0x3f) ^ 0xffff),(float)uStack_420);
    lVar71 = lVar40 >> 0x20;
    if (0xfffe < iVar58) {
      lVar61 = 0xffff;
    }
    lVar65 = (long)iVar59;
    if (0xfffe < (int)((ulong)lVar40 >> 0x20)) {
      lVar71 = 0xffff;
    }
    uStack_420 = (double)CONCAT26((ushort)lVar68 & ((ushort)(lVar68 >> 0x3f) ^ 0xffff),
                                  (int6)uStack_420);
    lVar68 = lVar50 >> 0x20;
    if (0xfffe < iVar59) {
      lVar65 = 0xffff;
    }
    if (0xfffe < (int)((ulong)lVar50 >> 0x20)) {
      lVar68 = 0xffff;
    }
    uStack_418._0_4_ =
         (float)CONCAT22((ushort)lVar71 & ((ushort)(lVar71 >> 0x3f) ^ 0xffff),
                         (ushort)lVar61 & ((ushort)(lVar61 >> 0x3f) ^ 0xffff));
    uVar9 = (ushort)lVar68 & ((ushort)(lVar68 >> 0x3f) ^ 0xffff);
    uStack_418._0_6_ =
         CONCAT24((ushort)lVar65 & ((ushort)(lVar65 >> 0x3f) ^ 0xffff),(float)uStack_418);
    uStack_418 = (double)CONCAT26(uVar9,(undefined6)uStack_418);
    uStack_90 = uStack_420;
    uStack_88 = uStack_418;
    uStack_1087 = SUB87(uStack_418,0);
    bStack_1080 = (byte)(uVar9 >> 8);
    auVar99._1_8_ = uStack_420;
    auVar99[0] = 5;
    auVar99._9_7_ = uStack_1087;
code_r0x0123e408:
    fStack_a7 = auVar99._9_4_;
    uStack_a3._0_3_ = auVar99._13_3_;
    uStack_b0 = auVar99[0];
    fStack_af = auVar99._1_4_;
    uStack_ab = auVar99._5_4_;
    uStack_a3 = (float)CONCAT13(bStack_1080,(uint3)uStack_a3);
    goto code_r0x0123e410;
  case 0xfdca:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar24 = CONCAT17(bStack_c8,
                      CONCAT16(bStack_c9,
                               CONCAT15(bStack_ca,
                                        CONCAT14(bStack_cb,
                                                 CONCAT13(bStack_cc,
                                                          CONCAT12(bStack_cd,
                                                                   CONCAT11(bStack_ce,bStack_cf)))))
                              ));
    auVar79._8_8_ = 0xffffffffffffffe0;
    auVar79._0_8_ = 0xffffffffffffffe8;
    auVar113._8_8_ = uVar24;
    auVar113._0_8_ = uVar24;
    auVar106._8_8_ = 0xfffffffffffffff0;
    auVar106._0_8_ = 0xfffffffffffffff8;
    auVar110 = NEON_ushl(auVar113,auVar106,8);
    uStack_240._0_1_ = bStack_cf;
    auVar83 = NEON_ushl(auVar113,auVar79,8);
    uStack_240._1_1_ = (char)bStack_cf >> 7;
    uStack_240._2_1_ = auVar110[0];
    uStack_23c._0_1_ = auVar110[8];
    uStack_23a._0_1_ = auVar83[0];
    uStack_238._0_1_ = auVar83[8];
    uStack_240._3_1_ = (char)uStack_240._2_1_ >> 7;
    uStack_23c._1_1_ = (char)(byte)uStack_23c >> 7;
    uStack_23a._1_1_ = (char)(byte)uStack_23a >> 7;
    uStack_238._1_1_ = (char)(byte)uStack_238 >> 7;
    uStack_236._0_1_ = bStack_ca;
    uStack_236._1_1_ = (char)bStack_ca >> 7;
    uStack_234._0_1_ = bStack_c9;
    uStack_234._1_1_ = (char)bStack_c9 >> 7;
    uStack_232._0_1_ = bStack_c8;
    uStack_232._1_1_ = (char)bStack_c8 >> 7;
    uVar26 = CONCAT16(bStack_c8,
                      CONCAT15(uStack_234._1_1_,
                               CONCAT14(bStack_c9,
                                        CONCAT13(uStack_236._1_1_,
                                                 CONCAT12(bStack_ca,(short)(char)(byte)uStack_238)))
                              ));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,
                                                            CONCAT13(uStack_240._3_1_,
                                                                     CONCAT12(uStack_240._2_1_,
                                                                              (short)(char)bStack_cf
                                                                             ))))));
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uVar26;
    bStack_f30 = uStack_232._1_1_;
    goto code_r0x0123a730;
  case 0xfdcb:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar24 = CONCAT17(bStack_c0,
                      CONCAT16(bStack_c1,
                               CONCAT15(bStack_c2,
                                        CONCAT14(bStack_c3,
                                                 CONCAT13(bStack_c4,
                                                          CONCAT12(bStack_c5,
                                                                   CONCAT11(bStack_c6,bStack_c7)))))
                              ));
    auVar80._8_8_ = 0xffffffffffffffe0;
    auVar80._0_8_ = 0xffffffffffffffe8;
    auVar114._8_8_ = uVar24;
    auVar114._0_8_ = uVar24;
    auVar107._8_8_ = 0xfffffffffffffff0;
    auVar107._0_8_ = 0xfffffffffffffff8;
    auVar110 = NEON_ushl(auVar114,auVar107,8);
    uStack_240._0_1_ = bStack_c7;
    auVar83 = NEON_ushl(auVar114,auVar80,8);
    uStack_240._1_1_ = (char)bStack_c7 >> 7;
    uStack_240._2_1_ = auVar110[0];
    uStack_23c._0_1_ = auVar110[8];
    uStack_23a._0_1_ = auVar83[0];
    uStack_238._0_1_ = auVar83[8];
    uStack_240._3_1_ = (char)uStack_240._2_1_ >> 7;
    uStack_23c._1_1_ = (char)(byte)uStack_23c >> 7;
    uStack_23a._1_1_ = (char)(byte)uStack_23a >> 7;
    uStack_238._1_1_ = (char)(byte)uStack_238 >> 7;
    uStack_236._0_1_ = bStack_c2;
    uStack_236._1_1_ = (char)bStack_c2 >> 7;
    uStack_234._0_1_ = bStack_c1;
    uStack_234._1_1_ = (char)bStack_c1 >> 7;
    uStack_232._0_1_ = bStack_c0;
    uStack_232._1_1_ = (char)bStack_c0 >> 7;
    uVar26 = CONCAT16(bStack_c0,
                      CONCAT15(uStack_234._1_1_,
                               CONCAT14(bStack_c1,
                                        CONCAT13(uStack_236._1_1_,
                                                 CONCAT12(bStack_c2,(short)(char)(byte)uStack_238)))
                              ));
    uStack_88 = (double)CONCAT17(uStack_232._1_1_,uVar26);
    uStack_90 = (double)CONCAT17(uStack_23a._1_1_,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(uStack_23c._1_1_,
                                                   CONCAT14((byte)uStack_23c,
                                                            CONCAT13(uStack_240._3_1_,
                                                                     CONCAT12(uStack_240._2_1_,
                                                                              (short)(char)bStack_c7
                                                                             ))))));
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uVar26;
    bStack_f30 = uStack_232._1_1_;
    goto code_r0x0123a730;
  case 0xfdcc:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar24 = CONCAT17(bStack_c8,
                      CONCAT16(bStack_c9,
                               CONCAT15(bStack_ca,
                                        CONCAT14(bStack_cb,
                                                 CONCAT13(bStack_cc,
                                                          CONCAT12(bStack_cd,
                                                                   CONCAT11(bStack_ce,bStack_cf)))))
                              ));
    auVar81._8_8_ = 0xffffffffffffffe0;
    auVar81._0_8_ = 0xffffffffffffffe8;
    auVar115._8_8_ = uVar24;
    auVar115._0_8_ = uVar24;
    auVar108._8_8_ = 0xfffffffffffffff0;
    auVar108._0_8_ = 0xfffffffffffffff8;
    auVar110 = NEON_ushl(auVar115,auVar108,8);
    auVar83 = NEON_ushl(auVar115,auVar81,8);
    uStack_240._0_1_ = bStack_cf;
    uStack_240._1_1_ = 0;
    uVar60 = CONCAT26(auVar83._8_2_,CONCAT24(auVar83._0_2_,CONCAT22(auVar110._8_2_,auVar110._0_2_)))
             & 0xff00ff00ff00ff;
    uStack_240._2_1_ = (byte)uVar60;
    uStack_240._3_1_ = 0;
    uStack_23c._0_1_ = (byte)(uVar60 >> 0x10);
    uStack_23c._1_1_ = 0;
    uStack_23a._0_1_ = (byte)(uVar60 >> 0x20);
    uStack_23a._1_1_ = 0;
    uStack_238._0_1_ = (byte)(uVar60 >> 0x30);
    uStack_238._1_1_ = 0;
    uStack_236._0_1_ = bStack_ca;
    uStack_236._1_1_ = 0;
    uStack_234._0_1_ = bStack_c9;
    uStack_234._1_1_ = 0;
    uStack_232._0_1_ = bStack_c8;
    uStack_232._1_1_ = 0;
    uVar29 = CONCAT16(bStack_c8,
                      (uint6)CONCAT14(bStack_c9,(uint)CONCAT12(bStack_ca,(short)(uVar60 >> 0x30))));
    uStack_88 = (double)(ulong)uVar29;
    uStack_90 = (double)CONCAT17(0,CONCAT16((byte)uStack_23a,
                                            (uint6)CONCAT14((byte)uStack_23c,
                                                            (uint)CONCAT12(uStack_240._2_1_,
                                                                           (ushort)bStack_cf))));
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uVar29;
    bStack_f30 = 0;
    goto code_r0x0123a730;
  case 0xfdcd:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar24 = CONCAT17(bStack_c0,
                      CONCAT16(bStack_c1,
                               CONCAT15(bStack_c2,
                                        CONCAT14(bStack_c3,
                                                 CONCAT13(bStack_c4,
                                                          CONCAT12(bStack_c5,
                                                                   CONCAT11(bStack_c6,bStack_c7)))))
                              ));
    auVar82._8_8_ = 0xffffffffffffffe0;
    auVar82._0_8_ = 0xffffffffffffffe8;
    auVar116._8_8_ = uVar24;
    auVar116._0_8_ = uVar24;
    auVar109._8_8_ = 0xfffffffffffffff0;
    auVar109._0_8_ = 0xfffffffffffffff8;
    auVar110 = NEON_ushl(auVar116,auVar109,8);
    auVar83 = NEON_ushl(auVar116,auVar82,8);
    uStack_240._0_1_ = bStack_c7;
    uStack_240._1_1_ = 0;
    uVar60 = CONCAT26(auVar83._8_2_,CONCAT24(auVar83._0_2_,CONCAT22(auVar110._8_2_,auVar110._0_2_)))
             & 0xff00ff00ff00ff;
    uStack_240._2_1_ = (byte)uVar60;
    uStack_240._3_1_ = 0;
    uStack_23c._0_1_ = (byte)(uVar60 >> 0x10);
    uStack_23c._1_1_ = 0;
    uStack_23a._0_1_ = (byte)(uVar60 >> 0x20);
    uStack_23a._1_1_ = 0;
    uStack_238._0_1_ = (byte)(uVar60 >> 0x30);
    uStack_238._1_1_ = 0;
    uStack_236._0_1_ = bStack_c2;
    uStack_236._1_1_ = 0;
    uStack_234._0_1_ = bStack_c1;
    uStack_234._1_1_ = 0;
    uStack_232._0_1_ = bStack_c0;
    uStack_232._1_1_ = 0;
    uVar29 = CONCAT16(bStack_c0,
                      (uint6)CONCAT14(bStack_c1,(uint)CONCAT12(bStack_c2,(short)(uVar60 >> 0x30))));
    uStack_88 = (double)(ulong)uVar29;
    uStack_90 = (double)CONCAT17(0,CONCAT16((byte)uStack_23a,
                                            (uint6)CONCAT14((byte)uStack_23c,
                                                            (uint)CONCAT12(uStack_240._2_1_,
                                                                           (ushort)bStack_c7))));
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uVar29;
    bStack_f30 = 0;
    goto code_r0x0123a730;
  case 0xfdce:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_240._0_1_ = bStack_cf;
    uStack_240._1_1_ = bStack_ce;
    uStack_240._2_1_ = (byte)((short)(char)bStack_ce >> 7);
    uStack_23c._0_1_ = bStack_cd;
    uStack_23c._1_1_ = bStack_cc;
    uStack_23a._0_1_ = (char)bStack_cc >> 7;
    uStack_234._0_1_ = bStack_c9;
    uStack_234._1_1_ = bStack_c8;
    uStack_232._0_1_ =
         (byte)((int)CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb))) >> 0x1f);
    uStack_238._0_1_ = bStack_cb;
    uStack_238._1_1_ = bStack_ca;
    uStack_236._0_1_ = (byte)((short)(char)bStack_ca >> 7);
    uVar26 = CONCAT16((byte)uStack_232,
                      CONCAT15(bStack_c8,
                               CONCAT14(bStack_c9,
                                        CONCAT13((byte)uStack_236,
                                                 (int3)CONCAT11(bStack_ca,bStack_cb)))));
    uStack_88 = (double)CONCAT17((byte)uStack_232,uVar26);
    uStack_90 = (double)CONCAT17((byte)uStack_23a,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(bStack_cc,
                                                   CONCAT14(bStack_cd,
                                                            CONCAT13(uStack_240._2_1_,
                                                                     (int3)CONCAT11(bStack_ce,
                                                                                    bStack_cf))))));
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uVar26;
    bStack_f30 = (byte)uStack_232;
    uStack_240._3_1_ = uStack_240._2_1_;
    uStack_23a._1_1_ = (byte)uStack_23a;
    uStack_236._1_1_ = (byte)uStack_236;
    uStack_232._1_1_ = (byte)uStack_232;
    goto code_r0x0123a730;
  case 0xfdcf:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_240._0_1_ = bStack_c7;
    uStack_240._1_1_ = bStack_c6;
    uStack_240._2_1_ = (byte)((short)(char)bStack_c6 >> 7);
    uStack_23c._0_1_ = bStack_c5;
    uStack_23c._1_1_ = bStack_c4;
    uStack_23a._0_1_ = (char)bStack_c4 >> 7;
    uStack_234._0_1_ = bStack_c1;
    uStack_234._1_1_ = bStack_c0;
    uStack_232._0_1_ =
         (byte)((int)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3))) >> 0x1f);
    uStack_238._0_1_ = bStack_c3;
    uStack_238._1_1_ = bStack_c2;
    uStack_236._0_1_ = (byte)((short)(char)bStack_c2 >> 7);
    uVar26 = CONCAT16((byte)uStack_232,
                      CONCAT15(bStack_c0,
                               CONCAT14(bStack_c1,
                                        CONCAT13((byte)uStack_236,
                                                 (int3)CONCAT11(bStack_c2,bStack_c3)))));
    uStack_88 = (double)CONCAT17((byte)uStack_232,uVar26);
    uStack_90 = (double)CONCAT17((byte)uStack_23a,
                                 CONCAT16((byte)uStack_23a,
                                          CONCAT15(bStack_c4,
                                                   CONCAT14(bStack_c5,
                                                            CONCAT13(uStack_240._2_1_,
                                                                     (int3)CONCAT11(bStack_c6,
                                                                                    bStack_c7))))));
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_7_ = uVar26;
    bStack_f30 = (byte)uStack_232;
    uStack_240._3_1_ = uStack_240._2_1_;
    uStack_23a._1_1_ = (byte)uStack_23a;
    uStack_236._1_1_ = (byte)uStack_236;
    uStack_232._1_1_ = (byte)uStack_232;
    goto code_r0x0123a730;
  case 0xfdd0:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf));
    uVar12 = CONCAT15(bStack_ca,CONCAT14(bStack_cb,CONCAT13(bStack_cc,uVar27)));
    uVar6 = (uint)((uint6)uVar12 >> 0x10) & 0xffff;
    uVar55 = (uint)(CONCAT17(bStack_c8,CONCAT16(bStack_c9,uVar12)) >> 0x20) & 0xffff;
    uStack_23c._0_1_ = (byte)uVar6;
    uStack_23c._1_1_ = (byte)(uVar6 >> 8);
    uStack_23a._0_1_ = 0;
    uStack_23a._1_1_ = 0;
    uStack_240._0_1_ = bStack_cf;
    uStack_240._1_1_ = bStack_ce;
    uStack_240._2_1_ = 0;
    uStack_240._3_1_ = 0;
    uStack_234._0_1_ = bStack_c9;
    uStack_234._1_1_ = bStack_c8;
    uStack_232._0_1_ = 0;
    uStack_232._1_1_ = 0;
    uStack_238._0_1_ = (byte)uVar55;
    uStack_238._1_1_ = (byte)(uVar55 >> 8);
    uStack_236._0_1_ = 0;
    uStack_236._1_1_ = 0;
    uVar30 = CONCAT15(bStack_c8,CONCAT14(bStack_c9,(uint)(ushort)((uint6)uVar12 >> 0x20)));
    uStack_88 = (double)(ulong)uVar30;
    uStack_90 = (double)CONCAT26(0,CONCAT15(uStack_23c._1_1_,CONCAT14((byte)uStack_23c,(uint)uVar27)
                                           ) & 0xffff0000ffff);
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_6_ = uVar30;
    auVar110[0xf] = 0;
    bStack_f30 = 0;
    goto code_r0x0123a730;
  case 0xfdd1:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uVar27 = CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7));
    uVar12 = CONCAT15(bStack_c2,CONCAT14(bStack_c3,CONCAT13(bStack_c4,uVar27)));
    uVar6 = (uint)((uint6)uVar12 >> 0x10) & 0xffff;
    uVar55 = (uint)(CONCAT17(bStack_c0,CONCAT16(bStack_c1,uVar12)) >> 0x20) & 0xffff;
    uStack_23c._0_1_ = (byte)uVar6;
    uStack_23c._1_1_ = (byte)(uVar6 >> 8);
    uStack_23a._0_1_ = 0;
    uStack_23a._1_1_ = 0;
    uStack_240._0_1_ = bStack_c7;
    uStack_240._1_1_ = bStack_c6;
    uStack_240._2_1_ = 0;
    uStack_240._3_1_ = 0;
    uStack_234._0_1_ = bStack_c1;
    uStack_234._1_1_ = bStack_c0;
    uStack_232._0_1_ = 0;
    uStack_232._1_1_ = 0;
    uStack_238._0_1_ = (byte)uVar55;
    uStack_238._1_1_ = (byte)(uVar55 >> 8);
    uStack_236._0_1_ = 0;
    uStack_236._1_1_ = 0;
    uVar30 = CONCAT15(bStack_c0,CONCAT14(bStack_c1,(uint)(ushort)((uint6)uVar12 >> 0x20)));
    uStack_88 = (double)(ulong)uVar30;
    uStack_90 = (double)CONCAT26(0,CONCAT15(uStack_23c._1_1_,CONCAT14((byte)uStack_23c,(uint)uVar27)
                                           ) & 0xffff0000ffff);
    auVar110._1_8_ = uStack_90;
    auVar110[0] = 5;
    auVar110._9_6_ = uVar30;
    auVar110[0xf] = 0;
    bStack_f30 = 0;
code_r0x0123a730:
    sVar120 = CONCAT11(uStack_232._1_1_,(byte)uStack_232);
    sVar119 = CONCAT11(uStack_234._1_1_,(byte)uStack_234);
    sVar101 = CONCAT11(uStack_236._1_1_,(byte)uStack_236);
    sVar103 = CONCAT11(uStack_23a._1_1_,(byte)uStack_23a);
    sVar102 = CONCAT11(uStack_23c._1_1_,(byte)uStack_23c);
    sVar100 = CONCAT11(uStack_240._3_1_,uStack_240._2_1_);
    fStack_a7 = auVar110._9_4_;
    uStack_a3._0_3_ = auVar110._13_3_;
    uStack_b0 = auVar110[0];
    fStack_af = auVar110._1_4_;
    uStack_ab = auVar110._5_4_;
    uStack_a3 = (float)CONCAT13(bStack_f30,(uint3)uStack_a3);
code_r0x0123b938:
    lVar61 = *(long *)(this + 0x28) - *(long *)(this + 0x18);
    goto code_r0x0123e428;
  case 0xfdd2:
    bVar53 = DoSimdLoadExtend<v8::internal::wasm::int8,short,signed_char>
                       (this,param_3,param_4,param_5,param_6,5);
    goto code_r0x01238a6c;
  case 0xfdd3:
    bVar53 = DoSimdLoadExtend<v8::internal::wasm::int8,unsigned_short,unsigned_char>
                       (this,param_3,param_4,param_5,param_6,5);
    goto code_r0x01238a6c;
  case 0xfdd4:
    bVar53 = DoSimdLoadExtend<v8::internal::wasm::int4,int,short>
                       (this,param_3,param_4,param_5,param_6,5);
    goto code_r0x01238a6c;
  case 0xfdd5:
    bVar53 = DoSimdLoadExtend<v8::internal::wasm::int4,unsigned_int,unsigned_short>
                       (this,param_3,param_4,param_5,param_6,5);
    goto code_r0x01238a6c;
  case 0xfdd6:
    bVar53 = DoSimdLoadExtend<v8::internal::wasm::int2,long,int>
                       (this,param_3,param_4,param_5,param_6,5);
    goto code_r0x01238a6c;
  case 0xfdd7:
    bVar53 = DoSimdLoadExtend<v8::internal::wasm::int2,unsigned_long,unsigned_int>
                       (this,param_3,param_4,param_5,param_6,5);
code_r0x01238a6c:
    if (*(long *)(lVar11 + 0x28) == local_78) {
      return bVar53;
    }
    goto LAB_0123e768;
  case 0xfde0:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    fVar112 = (float)CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    fVar105 = (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    fVar118 = (float)CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    if (fVar75 == 0.0) {
      fVar75 = INFINITY;
      if ((char)bStack_cc < '\0') {
        fVar75 = -INFINITY;
      }
    }
    else {
      fVar75 = 1.0 / fVar75;
    }
    if (fVar112 == 0.0) {
      fVar112 = INFINITY;
      if ((char)bStack_c8 < '\0') {
        fVar112 = -INFINITY;
      }
    }
    else {
      fVar112 = 1.0 / fVar112;
    }
    if (fVar118 == 0.0) {
      fVar118 = INFINITY;
      if ((char)bStack_c4 < '\0') {
        fVar118 = -INFINITY;
      }
      if (fVar105 == 0.0) goto code_r0x0123e594;
code_r0x0123e528:
      fVar105 = 1.0 / fVar105;
    }
    else {
      fVar118 = 1.0 / fVar118;
      if (fVar105 != 0.0) goto code_r0x0123e528;
code_r0x0123e594:
      fVar105 = INFINITY;
      if ((char)bStack_c0 < '\0') {
        fVar105 = -INFINITY;
      }
    }
    uStack_90 = (double)CONCAT44(fVar112,fVar75);
    uStack_88 = (double)CONCAT44(fVar105,fVar118);
    uStack_7e7 = SUB87(uStack_88,0);
    bStack_7e0 = (byte)((uint)fVar105 >> 0x18);
    auVar83._1_8_ = uStack_90;
    auVar83[0] = 5;
    auVar83._9_7_ = uStack_7e7;
    bStack_7f8 = bStack_7e0;
    goto code_r0x0123e650;
  case 0xfde1:
    lVar61 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar61 + -0x11;
    uStack_80 = *(undefined1 *)(lVar61 + -1);
    uStack_90 = *(double *)(lVar61 + -0x11);
    uStack_88 = *(double *)(lVar61 + -9);
    StackValue::ExtractValue((ThreadImpl *)&uStack_90,(ulong)this);
    if (uStack_90._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    fVar75 = (float)CONCAT13(bStack_cc,CONCAT12(bStack_cd,CONCAT11(bStack_ce,bStack_cf)));
    fVar112 = (float)CONCAT13(bStack_c8,CONCAT12(bStack_c9,CONCAT11(bStack_ca,bStack_cb)));
    fVar105 = (float)CONCAT13(bStack_c0,CONCAT12(bStack_c1,CONCAT11(bStack_c2,bStack_c3)));
    fVar118 = (float)CONCAT13(bStack_c4,CONCAT12(bStack_c5,CONCAT11(bStack_c6,bStack_c7)));
    if (fVar75 == 0.0) {
      fVar75 = -INFINITY;
      if (-1 < (char)bStack_cc) {
        fVar75 = INFINITY;
      }
    }
    else {
      fVar75 = 1.0 / SQRT(fVar75);
    }
    if (fVar112 == 0.0) {
      fVar112 = -INFINITY;
      if (-1 < (char)bStack_c8) {
        fVar112 = INFINITY;
      }
    }
    else {
      fVar112 = 1.0 / SQRT(fVar112);
    }
    if (fVar118 == 0.0) {
      fVar118 = -INFINITY;
      if (-1 < (char)bStack_c4) {
        fVar118 = INFINITY;
      }
      if (fVar105 == 0.0) goto code_r0x0123e604;
code_r0x0123e568:
      fVar105 = 1.0 / SQRT(fVar105);
    }
    else {
      fVar118 = 1.0 / SQRT(fVar118);
      if (fVar105 != 0.0) goto code_r0x0123e568;
code_r0x0123e604:
      fVar105 = -INFINITY;
      if (-1 < (char)bStack_c0) {
        fVar105 = INFINITY;
      }
    }
    uStack_90 = (double)CONCAT44(fVar112,fVar75);
    uStack_88 = (double)CONCAT44(fVar105,fVar118);
    uStack_7ff = SUB87(uStack_88,0);
    bStack_7f8 = (byte)((uint)fVar105 >> 0x18);
    auVar83._1_8_ = uStack_90;
    auVar83[0] = 5;
    auVar83._9_7_ = uStack_7ff;
code_r0x0123e650:
    fStack_a7 = auVar83._9_4_;
    uStack_a3._0_3_ = auVar83._13_3_;
    uStack_b0 = auVar83[0];
    fStack_af = auVar83._1_4_;
    uStack_ab = auVar83._5_4_;
    goto code_r0x0123e658;
  }
  fStack_a7 = auVar85._9_4_;
  uStack_a3._0_3_ = auVar85._13_3_;
  uStack_b0 = auVar85[0];
  fStack_af = auVar85._1_4_;
  uStack_ab = auVar85._5_4_;
  uStack_a3 = (float)CONCAT13(bStack_900,(uint3)uStack_a3);
code_r0x0123e410:
  sVar120 = CONCAT11(uStack_232._1_1_,(byte)uStack_232);
  sVar119 = CONCAT11(uStack_234._1_1_,(byte)uStack_234);
  sVar101 = CONCAT11(uStack_236._1_1_,(byte)uStack_236);
  sVar103 = CONCAT11(uStack_23a._1_1_,(byte)uStack_23a);
  sVar102 = CONCAT11(uStack_23c._1_1_,(byte)uStack_23c);
  sVar100 = CONCAT11(uStack_240._3_1_,uStack_240._2_1_);
  lVar61 = *(long *)(this + 0x28) - *(long *)(this + 0x18);
code_r0x0123e428:
  uStack_240._2_2_ = sVar100;
  uStack_23c = sVar102;
  uStack_23a = sVar103;
  uStack_236 = sVar101;
  uStack_234 = sVar119;
  uStack_232 = sVar120;
  StackValue::StackValue((StackValue *)&uStack_90,&uStack_b0,this,lVar61 * -0xf0f0f0f0f0f0f0f);
  pdVar62 = *(double **)(this + 0x28);
  *(long *)(this + 0x28) = (long)pdVar62 + 0x11;
code_r0x0123e450:
  bVar53 = true;
  *(undefined1 *)(pdVar62 + 2) = uStack_80;
  pdVar62[1] = uStack_88;
  *pdVar62 = uStack_90;
LAB_0123e458:
  if (*(long *)(lVar11 + 0x28) == local_78) {
    return bVar53;
  }
LAB_0123e768:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

