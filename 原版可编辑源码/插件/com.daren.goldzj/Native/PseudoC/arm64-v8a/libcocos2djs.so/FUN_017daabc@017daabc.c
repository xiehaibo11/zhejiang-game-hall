
void FUN_017daabc(Assembler *param_1,long param_2,undefined4 param_3)

{
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *pSVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  Label *pLVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined *puVar11;
  Register *pRVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined2 uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 uVar21;
  int iVar22;
  Assembler *pAVar23;
  ulong uVar24;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined1 local_12f;
  Register local_128;
  byte bStack_127;
  byte bStack_126;
  uint5 uStack_125;
  uint local_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  Assembler *local_e0;
  undefined8 uStack_d8;
  Register *local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  Assembler *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Register local_90;
  uint uStack_8f;
  undefined3 uStack_8b;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  switch(param_3) {
  case 0x46:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x46;
LAB_017db28c:
      *(undefined4 *)(param_1 + 0x350) = uVar14;
      goto LAB_017df80c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df298;
  case 0x47:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x47;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df31c;
  case 0x48:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x48;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df39c;
  case 0x49:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x49;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df41c;
  case 0x4a:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x4a;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df49c;
  case 0x4b:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x4b;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df538;
  case 0x4c:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x4c;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df5dc;
  case 0x4d:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x4d;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df65c;
  case 0x4e:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x4e;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df6dc;
  case 0x4f:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      uVar14 = 0x4f;
      goto LAB_017db28c;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x2000;
    puVar11 = &DAT_01a63d34;
    goto LAB_017df75c;
  default:
    goto switchD_017dab14_caseD_50;
  case 0x51:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df298:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 0;
LAB_017df7a0:
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffff00000000);
    v8::internal::Assembler::cset(param_1,&local_e0,uVar8);
    uVar24 = *(ulong *)(param_1 + 0x240) | uVar24;
LAB_017df7bc:
    *(ulong *)(param_1 + 0x240) = uVar24;
    *(int *)(param_1 + uVar16 * 4 + 0x1c8 + 0x80) =
         *(int *)(param_1 + uVar16 * 4 + 0x1c8 + 0x80) + 1;
LAB_017df7cc:
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
LAB_017df7d8:
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
LAB_017df7e8:
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           (param_1 + 0x1c8));
    }
    uVar18 = 0x101;
    goto LAB_017df7f8;
  case 0x52:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df31c:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 1;
    goto LAB_017df7a0;
  case 0x53:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df39c:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 0xb;
    goto LAB_017df7a0;
  case 0x54:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df41c:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 3;
    goto LAB_017df7a0;
  case 0x55:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df49c:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 0xc;
    goto LAB_017df7a0;
  case 0x56:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df538:
    bStack_126 = 0;
    bStack_127 = 0;
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    local_c0 = 0;
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    local_120 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffff00000000);
    v8::internal::Assembler::cset(param_1,&local_e0,8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar24;
    *(int *)(param_1 + uVar16 * 4 + 0x248) = *(int *)(param_1 + uVar16 * 4 + 0x248) + 1;
LAB_017df590:
    iVar22 = 8;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 != *(undefined2 **)(param_1 + 0x1c8)) goto LAB_017df7d8;
    goto LAB_017df7e8;
  case 0x57:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df5dc:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 0xd;
    goto LAB_017df7a0;
  case 0x58:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df65c:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 9;
    goto LAB_017df7a0;
  case 0x59:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df6dc:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 10;
    goto LAB_017df7a0;
  case 0x5a:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_128 = SUB81(uVar6,0);
    uStack_125 = 0x4000;
    puVar11 = &DAT_01a63d28;
LAB_017df75c:
    bStack_126 = 0;
    bStack_127 = 0;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar11,&local_128,&local_e0,1,0x40000000);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uVar8 = 2;
    goto LAB_017df7a0;
  case 0x5b:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x2000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x2000000000;
    goto LAB_017dd02c;
  case 0x5c:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x2000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x2000000000;
    goto LAB_017dd24c;
  case 0x5d:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x2000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x2000000000;
    goto LAB_017dd088;
  case 0x5e:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x2000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x2000000000;
    goto LAB_017dd160;
  case 0x5f:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x2000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x2000000000;
    goto LAB_017dcefc;
  case 0x60:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x2000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x2000000000;
    goto LAB_017dcf54;
  case 0x61:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x4000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x4000000000;
LAB_017dd02c:
    local_128 = SUB81(uVar5,0);
    bStack_127 = (byte)(uVar5 >> 8);
    bStack_126 = (byte)(uVar5 >> 0x10);
    uStack_125 = (uint5)(uVar5 >> 0x18);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB81(uVar24,0);
    uStack_8f = (uint)(uVar24 >> 8);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    v8::internal::Assembler::fcmp(param_1,&local_128,&local_90);
    local_b0 = (Assembler *)(uVar16 & 0xff | 0x2000000000);
    uVar8 = 0;
LAB_017dd0b4:
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    local_e0 = local_b0;
    v8::internal::Assembler::cset(param_1,&local_e0,uVar8);
    local_128 = SUB81(local_b0,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = (uint5)((ulong)local_b0 >> 0x18);
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::Csel
              ((TurboAssembler *)param_1,&local_128,&DAT_01a63d34,&local_e0,6);
    uVar24 = *(ulong *)(param_1 + 0x240) | 1L << (uVar16 & 0x3f);
LAB_017dd120:
    *(ulong *)(param_1 + 0x240) = uVar24;
    *(int *)(param_1 + (uVar16 & 0xff) * 4 + 0x1c8 + 0x80) =
         *(int *)(param_1 + (uVar16 & 0xff) * 4 + 0x1c8 + 0x80) + 1;
    goto LAB_017df7cc;
  case 0x62:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x4000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x4000000000;
LAB_017dd24c:
    local_128 = SUB81(uVar5,0);
    bStack_127 = (byte)(uVar5 >> 8);
    bStack_126 = (byte)(uVar5 >> 0x10);
    uStack_125 = (uint5)(uVar5 >> 0x18);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB81(uVar24,0);
    uStack_8f = (uint)(uVar24 >> 8);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    v8::internal::Assembler::fcmp(param_1,&local_128,&local_90);
    local_e0 = (Assembler *)(uVar16 & 0xff | 0x2000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    v8::internal::Assembler::cset(param_1,&local_e0,1);
    uVar24 = *(ulong *)(param_1 + 0x240) | 1L << (uVar16 & 0x3f);
    goto LAB_017dd120;
  case 99:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x4000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x4000000000;
LAB_017dd088:
    local_128 = SUB81(uVar5,0);
    bStack_127 = (byte)(uVar5 >> 8);
    bStack_126 = (byte)(uVar5 >> 0x10);
    uStack_125 = (uint5)(uVar5 >> 0x18);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB81(uVar24,0);
    uStack_8f = (uint)(uVar24 >> 8);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    v8::internal::Assembler::fcmp(param_1,&local_128,&local_90);
    local_b0 = (Assembler *)(uVar16 & 0xff | 0x2000000000);
    uVar8 = 3;
    goto LAB_017dd0b4;
  case 100:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x4000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x4000000000;
LAB_017dd160:
    local_128 = SUB81(uVar5,0);
    bStack_127 = (byte)(uVar5 >> 8);
    bStack_126 = (byte)(uVar5 >> 0x10);
    uStack_125 = (uint5)(uVar5 >> 0x18);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB81(uVar24,0);
    uStack_8f = (uint)(uVar24 >> 8);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    v8::internal::Assembler::fcmp(param_1,&local_128,&local_90);
    pAVar23 = (Assembler *)(uVar16 & 0xff | 0x2000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    local_e0 = pAVar23;
    v8::internal::Assembler::cset(param_1,&local_e0,8);
    local_128 = SUB81(uVar16,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x2000;
    local_120 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    local_b0 = pAVar23;
    v8::internal::TurboAssembler::Csel
              ((TurboAssembler *)param_1,&local_128,&DAT_01a63d34,&local_e0,6);
    lVar17 = (uVar16 & 0xff) * 4;
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar16 & 0x3f);
    *(int *)(param_1 + lVar17 + 0x248) = *(int *)(param_1 + lVar17 + 0x248) + 1;
    goto LAB_017df590;
  case 0x65:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x4000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x4000000000;
LAB_017dcefc:
    local_128 = SUB81(uVar5,0);
    bStack_127 = (byte)(uVar5 >> 8);
    bStack_126 = (byte)(uVar5 >> 0x10);
    uStack_125 = (uint5)(uVar5 >> 0x18);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB81(uVar24,0);
    uStack_8f = (uint)(uVar24 >> 8);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    v8::internal::Assembler::fcmp(param_1,&local_128,&local_90);
    local_b0 = (Assembler *)(uVar16 & 0xff | 0x2000000000);
    uVar8 = 9;
    goto LAB_017dd0b4;
  case 0x66:
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                      ((LiftoffAssembler *)param_1,1L << (uVar24 & 0x3f));
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar5 = (ulong)((uVar4 & 0xff) - 0x1d) | 0x4000000000;
    uVar24 = (ulong)(((uint)uVar24 & 0xff) - 0x1d) | 0x4000000000;
LAB_017dcf54:
    local_128 = SUB81(uVar5,0);
    bStack_127 = (byte)(uVar5 >> 8);
    bStack_126 = (byte)(uVar5 >> 0x10);
    uStack_125 = (uint5)(uVar5 >> 0x18);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB81(uVar24,0);
    uStack_8f = (uint)(uVar24 >> 8);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    v8::internal::Assembler::fcmp(param_1,&local_128,&local_90);
    local_b0 = (Assembler *)(uVar16 & 0xff | 0x2000000000);
    uVar8 = 2;
    goto LAB_017dd0b4;
  case 0x6a:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      iVar22 = *(int *)(lVar17 + -8);
      lVar19 = (long)iVar22;
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar16 = uVar24 & 0xff;
      if ((*(ulong *)(param_1 + 0x240) >> (uVar24 & 0x3f) & 1) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar16 & 0xff;
      }
      local_90 = SUB81(uVar16,0);
      uStack_8f = 0x20000000;
      uStack_8b = 0;
      local_140 = uVar24 & 0xff | 0x2000000000;
      local_100 = 0x13;
      local_f8 = 0xffffffff;
      local_88 = 0;
      local_138 = 0;
      local_128 = (Register)0x0;
      local_120 = local_120 & 0xffffff00;
      local_f0 = 2;
      local_108 = lVar19;
      if (iVar22 < 0) {
        uVar24 = v8::internal::Assembler::IsImmAddSub(-lVar19);
        if ((uVar24 & 1) == 0) goto LAB_017dee14;
        local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
        uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
        local_b0 = (Assembler *)0xffffffff;
        local_b8 = CONCAT71(local_b8._1_7_,0x13);
        local_a8 = CONCAT44(local_a8._4_4_,2);
        pRVar12 = (Register *)&local_e0;
        uVar8 = 0x40000000;
        local_c0 = -lVar19;
      }
      else {
LAB_017dee14:
        pRVar12 = &local_128;
        uVar8 = 0;
      }
      v8::internal::TurboAssembler::AddSubMacro
                ((TurboAssembler *)param_1,&local_90,&local_140,pRVar12,0,uVar8);
      *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar16 & 0x3f);
      *(int *)(param_1 + uVar16 * 4 + 0x248) = *(int *)(param_1 + uVar16 * 4 + 0x248) + 1;
    }
    else {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar16 = uVar6 & 0xff;
      if (((uVar24 & uVar15) != 0) &&
         (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_128 = SUB81(uVar16,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x2000;
      local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
      local_120 = 0;
      local_88 = 0;
      local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
      uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
      local_c0 = 0;
      local_90 = SUB81(uVar6,0);
      uStack_8f = 0x20000000;
      uStack_8b = 0;
      local_b8 = CONCAT71(local_b8._1_7_,0x13);
      uStack_a0 = 0xffffffff;
      local_a8 = 0;
      v8::internal::TurboAssembler::AddSubMacro
                ((TurboAssembler *)param_1,&local_128,&local_90,&local_e0,0,0);
      *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar24;
      *(int *)(param_1 + uVar16 * 4 + 0x248) = *(int *)(param_1 + uVar16 * 4 + 0x248) + 1;
    }
    uVar21 = (undefined1)uVar16;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           (param_1 + 0x1c8));
    }
    uVar18 = 0x101;
    goto LAB_017dfac4;
  case 0x6b:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_128 = SUB81(uVar16,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x2000;
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    local_120 = 0;
    local_88 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_90 = SUB81(uVar6,0);
    uStack_8f = 0x20000000;
    uStack_8b = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,&local_128,&local_90,&local_e0,0,0x40000000);
    goto LAB_017dda98;
  case 0x6c:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    local_120 = 0;
    local_128 = SUB81(uVar6,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x2000;
    local_90 = SUB81(uVar5,0);
    uStack_8f = 0x20000000;
    uStack_8b = 0;
    local_88 = 0;
    v8::internal::Assembler::mul(param_1,(Register *)&local_e0,&local_128,&local_90);
LAB_017dda98:
    uVar24 = *(ulong *)(param_1 + 0x240) | uVar24;
    goto LAB_017df7bc;
  case 0x6d:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 8);
    FUN_017da05c(param_1,iVar22,3,0);
    FUN_017da05c(param_1,iVar22,4,0);
    v8::internal::wasm::LiftoffAssembler::emit_i32_divs
              (param_1,uVar16 | 0x4000000000,0,uVar6 & 0xff | 0x4000000000,0,
               uVar5 & 0xff | 0x4000000000,0,*(undefined8 *)(*(long *)(param_1 + 0x380) + -0x50),
               *(undefined8 *)(*(long *)(param_1 + 0x380) + -0x28));
    goto LAB_017de3b8;
  case 0x6e:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    pLVar7 = (Label *)FUN_017da05c(param_1,*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8),3,0);
    local_e0 = (Assembler *)(uVar5 & 0xff | 0x2000000000);
    uStack_d8._0_4_ = 0;
    v8::internal::TurboAssembler::Cbz((TurboAssembler *)param_1,(Register *)&local_e0,pLVar7);
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    local_120 = 0;
    local_90 = SUB81(uVar5,0);
    uStack_8f = 0x20000000;
    uStack_8b = 0;
    local_128 = SUB81(uVar6,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x2000;
    local_88 = 0;
    v8::internal::Assembler::udiv(param_1,(Register *)&local_e0,&local_128,&local_90);
LAB_017de3b8:
    uVar24 = *(ulong *)(param_1 + 0x240) | uVar24;
LAB_017de3c8:
    uVar21 = (undefined1)uVar16;
    *(ulong *)(param_1 + 0x240) = uVar24;
    *(int *)(param_1 + uVar16 * 4 + 0x1c8 + 0x80) =
         *(int *)(param_1 + uVar16 * 4 + 0x1c8 + 0x80) + 1;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           (param_1 + 0x1c8));
    }
    uVar18 = 0x101;
LAB_017dea50:
    *(undefined1 *)(puVar10 + 2) = uVar21;
    *(int *)(puVar10 + 4) = iVar22;
    goto LAB_017df800;
  case 0x6f:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    pLVar7 = (Label *)FUN_017da05c(param_1,*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8),5,0);
    local_140 = uVar5 & 0xff | 0x2000000000;
    local_128 = SUB81(uVar16,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x2000;
    local_e0 = param_1 + 0x198;
    uStack_d8 = param_1 + 0x1a8;
    local_120 = 0;
    local_88 = 0;
    local_138 = 0;
    local_90 = SUB81(uVar6,0);
    uStack_8f = 0x20000000;
    uStack_8b = 0;
    local_d0 = *(Register **)(param_1 + 0x198);
    local_c8 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = v8::internal::UseScratchRegisterScope::AcquireNextAvailable(local_e0);
    local_150 = 0x200000003f;
    if (uVar4 != 0x3f) {
      local_150 = (ulong)uVar4 | 0x2000000000;
    }
    local_148 = 0;
    v8::internal::Assembler::sdiv(param_1,(Register *)&local_150,&local_90,(Register *)&local_140);
    goto LAB_017de2cc;
  case 0x70:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    pLVar7 = (Label *)FUN_017da05c(param_1,*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8),5,0);
    local_140 = uVar5 & 0xff | 0x2000000000;
    local_128 = SUB81(uVar16,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x2000;
    local_e0 = param_1 + 0x198;
    uStack_d8 = param_1 + 0x1a8;
    local_120 = 0;
    local_88 = 0;
    local_138 = 0;
    local_90 = SUB81(uVar6,0);
    uStack_8f = 0x20000000;
    uStack_8b = 0;
    local_d0 = *(Register **)(param_1 + 0x198);
    local_c8 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = v8::internal::UseScratchRegisterScope::AcquireNextAvailable(local_e0);
    local_150 = 0x200000003f;
    if (uVar4 != 0x3f) {
      local_150 = (ulong)uVar4 | 0x2000000000;
    }
    local_148 = 0;
    v8::internal::Assembler::udiv(param_1,(Register *)&local_150,&local_90,(Register *)&local_140);
LAB_017de2cc:
    v8::internal::TurboAssembler::Cbz((TurboAssembler *)param_1,(Register *)&local_140,pLVar7);
    v8::internal::Assembler::msub
              (param_1,&local_128,(Register *)&local_150,(Register *)&local_140,&local_90);
    v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
              ((UseScratchRegisterScope *)&local_e0);
    uVar24 = *(ulong *)(param_1 + 0x240) | uVar24;
    goto LAB_017de3c8;
  case 0x71:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) != '\x02') {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar5 = uVar5 & 0xff;
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar6 = uVar6 & 0xff;
      uVar16 = uVar6;
      if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_128 = SUB81(uVar16,0);
      uVar8 = 0;
      goto LAB_017dfc10;
    }
    iVar22 = *(int *)(lVar17 + -8);
    *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar5 = uVar6;
    if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar16 == 0x13f8ffff) {
        uVar5 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                          ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar16 ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar5 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar24 = 1L << (uVar5 & 0x3f);
    }
    uVar16 = uVar5 & 0xff;
    local_128 = SUB81(uVar5,0);
    local_90 = SUB81(uVar6,0);
    uVar8 = 0;
    local_b0 = (Assembler *)0xffffffff;
    local_b8 = 0x13;
    local_a8 = CONCAT44(local_a8._4_4_,2);
    local_c0 = (long)iVar22;
    goto LAB_017dfc34;
  case 0x72:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) != '\x02') {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar5 = uVar5 & 0xff;
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar6 = uVar6 & 0xff;
      uVar16 = uVar6;
      if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_128 = SUB81(uVar16,0);
      uVar8 = 0x20000000;
      goto LAB_017dfc10;
    }
    iVar22 = *(int *)(lVar17 + -8);
    *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar24 = 1L << (uVar5 & 0x3f);
    uVar16 = uVar5;
    if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar16 == 0x13f8ffff) {
        uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar16 ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar24 = 1L << (uVar16 & 0x3f);
    }
    local_128 = SUB81(uVar16,0);
    local_90 = SUB81(uVar5,0);
    uVar8 = 0x20000000;
LAB_017def00:
    uVar16 = uVar16 & 0xff;
    uStack_8b = 0;
    uStack_8f = 0x20000000;
    uStack_125 = 0x2000;
    bStack_126 = 0;
    bStack_127 = 0;
    local_c0 = (long)iVar22;
    local_120 = 0;
    local_88 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_b0 = (Assembler *)0xffffffff;
    local_b8 = 0x13;
    local_a8 = CONCAT44(local_a8._4_4_,2);
    v8::internal::TurboAssembler::LogicalMacro
              ((TurboAssembler *)param_1,&local_128,&local_90,&local_e0,uVar8);
    uVar24 = *(ulong *)(param_1 + 0x240) | uVar24;
    goto LAB_017dfca0;
  case 0x73:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      iVar22 = *(int *)(lVar17 + -8);
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar24 = 1L << (uVar5 & 0x3f);
      uVar16 = uVar5;
      if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = 1L << (uVar16 & 0x3f);
      }
      local_128 = SUB81(uVar16,0);
      local_90 = SUB81(uVar5,0);
      uVar8 = 0x40000000;
      goto LAB_017def00;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar5 = uVar5 & 0xff;
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar6 = uVar6 & 0xff;
    uVar16 = uVar6;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_128 = SUB81(uVar16,0);
    uVar8 = 0x40000000;
LAB_017dfc10:
    local_b0 = (Assembler *)(uVar5 | 0x2000000000);
    local_c0 = 0;
    local_90 = SUB81(uVar6,0);
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
LAB_017dfc34:
    uStack_8b = 0;
    uStack_8f = 0x20000000;
    uStack_125 = 0x2000;
    bStack_126 = 0;
    bStack_127 = 0;
    local_88 = 0;
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    local_120 = 0;
    v8::internal::TurboAssembler::LogicalMacro
              ((TurboAssembler *)param_1,&local_128,&local_90,&local_e0,uVar8);
    goto LAB_017dfc90;
  case 0x74:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      uVar13 = *(uint *)(lVar17 + -8);
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar24 = 1L << (uVar5 & 0x3f);
      uVar5 = uVar5 & 0xff;
      uVar16 = uVar5;
      if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = 1L << (uVar16 & 0x3f);
        uVar16 = uVar16 & 0xff;
      }
      uVar4 = -uVar13;
      uVar13 = ~uVar13 & 0x1f;
LAB_017df098:
      local_e0 = (Assembler *)(uVar16 | 0x2000000000);
      uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
      local_120 = 0;
      local_128 = SUB81(uVar5,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x2000;
      v8::internal::Assembler::ubfm(param_1,(Register *)&local_e0,&local_128,uVar4 & 0x1f,uVar13);
    }
    else {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar16 = uVar6 & 0xff;
      if (((uVar24 & uVar15) != 0) &&
         (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_e0 = (Assembler *)(uVar16 | 0x2000000000);
      uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
      local_120 = 0;
      local_128 = SUB81(uVar6,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x2000;
      local_90 = SUB81(uVar5,0);
      uStack_8f = 0x20000000;
      uStack_8b = 0;
      local_88 = 0;
      v8::internal::Assembler::lslv(param_1,(Register *)&local_e0,&local_128,&local_90);
    }
    goto LAB_017dfc90;
  case 0x75:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      uVar4 = *(uint *)(lVar17 + -8);
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar24 = 1L << (uVar5 & 0x3f);
      uVar16 = uVar5;
      if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = 1L << (uVar16 & 0x3f);
      }
      uVar16 = uVar16 & 0xff;
      local_e0 = (Assembler *)(uVar16 | 0x2000000000);
      uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
      local_120 = 0;
      local_128 = SUB81(uVar5,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x2000;
      v8::internal::Assembler::sbfm(param_1,(Register *)&local_e0,&local_128,uVar4 & 0x1f,0x1f);
    }
    else {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar16 = uVar6 & 0xff;
      if (((uVar24 & uVar15) != 0) &&
         (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_e0 = (Assembler *)(uVar16 | 0x2000000000);
      uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
      local_120 = 0;
      local_128 = SUB81(uVar6,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x2000;
      local_90 = SUB81(uVar5,0);
      uStack_8f = 0x20000000;
      uStack_8b = 0;
      local_88 = 0;
      v8::internal::Assembler::asrv(param_1,(Register *)&local_e0,&local_128,&local_90);
    }
    goto LAB_017dfc90;
  case 0x76:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      uVar4 = *(uint *)(lVar17 + -8);
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar24 = 1L << (uVar5 & 0x3f);
      uVar5 = uVar5 & 0xff;
      uVar16 = uVar5;
      if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = 1L << (uVar16 & 0x3f);
        uVar16 = uVar16 & 0xff;
      }
      uVar13 = 0x1f;
      goto LAB_017df098;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_e0 = (Assembler *)(uVar16 | 0x2000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    local_120 = 0;
    local_128 = SUB81(uVar6,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x2000;
    local_90 = SUB81(uVar5,0);
    uStack_8f = 0x20000000;
    uStack_8b = 0;
    local_88 = 0;
    v8::internal::Assembler::lsrv(param_1,(Register *)&local_e0,&local_128,&local_90);
LAB_017dfc90:
    uVar24 = *(ulong *)(param_1 + 0x240) | uVar24;
LAB_017dfca0:
    *(ulong *)(param_1 + 0x240) = uVar24;
    *(int *)(param_1 + uVar16 * 4 + 0x1c8 + 0x80) =
         *(int *)(param_1 + uVar16 * 4 + 0x1c8 + 0x80) + 1;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           (param_1 + 0x1c8));
    }
    uVar18 = 0x101;
LAB_017dfea0:
    *(char *)(puVar10 + 2) = (char)uVar16;
    *(int *)(puVar10 + 4) = iVar22;
LAB_017dfea8:
    *puVar10 = uVar18;
    *(undefined2 **)(param_1 + 0x1d0) = puVar10 + 6;
    goto LAB_017df80c;
  case 0x77:
    uVar16 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar6 = 1L << (uVar16 & 0x3f);
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar6);
    uVar5 = *(ulong *)(param_1 + 0x240);
    if ((uVar5 >> (uVar24 & 0x3f) & 1) == 0) {
      uVar5 = uVar24 & 0xff;
    }
    else if ((uVar6 & uVar5) == 0) {
      uVar5 = uVar16 & 0xff;
    }
    else {
      if ((uVar5 & 0x13f8ffff) == 0x13f8ffff) {
        uVar5 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                          ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar5 = uVar5 & 0x13f8ffff ^ 0x13f8ffff;
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar5 = uVar5 & 0xff;
    }
    local_140 = CONCAT71(local_140._1_7_,(char)uVar5);
    local_90 = SUB81(uVar24,0);
    uStack_8f = CONCAT31(uStack_8f._1_3_,(char)uVar16);
    uVar8 = v8::internal::ExternalReference::wasm_word32_rol();
    goto LAB_017de42c;
  case 0x78:
    uVar16 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar6 = 1L << (uVar16 & 0x3f);
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar6);
    uVar5 = *(ulong *)(param_1 + 0x240);
    if ((uVar5 >> (uVar24 & 0x3f) & 1) == 0) {
      uVar5 = uVar24 & 0xff;
    }
    else if ((uVar6 & uVar5) == 0) {
      uVar5 = uVar16 & 0xff;
    }
    else {
      if ((uVar5 & 0x13f8ffff) == 0x13f8ffff) {
        uVar5 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                          ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar5 = uVar5 & 0x13f8ffff ^ 0x13f8ffff;
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar5 = uVar5 & 0xff;
    }
    local_140 = CONCAT71(local_140._1_7_,(char)uVar5);
    local_90 = SUB81(uVar24,0);
    uStack_8f = CONCAT31(uStack_8f._1_3_,(char)uVar16);
    uVar8 = v8::internal::ExternalReference::wasm_word32_ror();
LAB_017de42c:
    local_d0 = &local_128;
    bStack_126 = 1;
    local_128 = (Register)0x1;
    bStack_127 = 1;
    uStack_d8 = (Assembler *)0x2;
    local_e0 = (Assembler *)0x1;
    v8::internal::wasm::LiftoffAssembler::SpillAllRegisters((LiftoffAssembler *)param_1);
    uVar4 = bStack_127 - 1;
    if ((((8 < uVar4) || ((0x17fU >> (ulong)(uVar4 & 0x1f) & 1) == 0)) ||
        (uVar13 = bStack_126 - 1, 8 < uVar13)) || ((0x17fU >> (ulong)(uVar13 & 0x1f) & 1) == 0)) {
switchD_017dab14_caseD_50:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    v8::internal::wasm::LiftoffAssembler::CallC
              ((LiftoffAssembler *)param_1,&local_e0,&local_90,&local_140,0,
               (1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar13 * 4) & 0x1f)) +
               (1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar4 * 4) & 0x1f)),uVar8);
    pSVar1 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar5 & 0x3f);
    *(int *)(pSVar1 + uVar5 * 4 + 0x80) = *(int *)(pSVar1 + uVar5 * 4 + 0x80) + 1;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          (pSVar1);
    }
    uVar18 = 0x101;
    *(char *)(puVar10 + 2) = (char)uVar5;
    *(int *)(puVar10 + 4) = iVar22;
    goto LAB_017df800;
  case 0x7c:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      iVar22 = *(int *)(lVar17 + -8);
      lVar19 = (long)iVar22;
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar16 = uVar24 & 0xff;
      if ((*(ulong *)(param_1 + 0x240) >> (uVar24 & 0x3f) & 1) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar16 & 0xff;
      }
      local_140 = uVar24 & 0xff | 0x4000000000;
      local_90 = SUB81(uVar16,0);
      uStack_8f = 0x40000000;
      uStack_8b = 0;
      local_88 = 0;
      local_138 = 0;
      local_128 = (Register)0x0;
      local_100 = CONCAT71(local_100._1_7_,0x13);
      local_120 = local_120 & 0xffffff00;
      local_f8 = 0xffffffff;
      local_f0 = 2;
      local_108 = lVar19;
      if (iVar22 < 0) {
        uVar24 = v8::internal::Assembler::IsImmAddSub(-lVar19);
        if ((uVar24 & 1) == 0) goto LAB_017deca0;
        local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
        uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
        local_b0 = (Assembler *)0xffffffff;
        local_b8 = CONCAT71(local_b8._1_7_,0x13);
        local_a8 = CONCAT44(local_a8._4_4_,2);
        pRVar12 = (Register *)&local_e0;
        uVar8 = 0x40000000;
        local_c0 = -lVar19;
      }
      else {
LAB_017deca0:
        pRVar12 = &local_128;
        uVar8 = 0;
      }
      v8::internal::TurboAssembler::AddSubMacro
                ((TurboAssembler *)param_1,&local_90,&local_140,pRVar12,0,uVar8);
      *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar16 & 0x3f);
      *(int *)(param_1 + uVar16 * 4 + 0x248) = *(int *)(param_1 + uVar16 * 4 + 0x248) + 1;
    }
    else {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar16 = uVar6 & 0xff;
      if (((uVar24 & uVar15) != 0) &&
         (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_128 = SUB81(uVar16,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x4000;
      local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
      local_120 = 0;
      local_88 = 0;
      local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
      uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
      local_c0 = 0;
      local_90 = SUB81(uVar6,0);
      uStack_8f = 0x40000000;
      uStack_8b = 0;
      local_b8 = CONCAT71(local_b8._1_7_,0x13);
      uStack_a0 = 0xffffffff;
      local_a8 = 0;
      v8::internal::TurboAssembler::AddSubMacro
                ((TurboAssembler *)param_1,&local_128,&local_90,&local_e0,0,0);
      *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar24;
      *(int *)(param_1 + uVar16 * 4 + 0x248) = *(int *)(param_1 + uVar16 * 4 + 0x248) + 1;
    }
    uVar21 = (undefined1)uVar16;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           (param_1 + 0x1c8));
    }
    uVar18 = 0x201;
LAB_017dfac4:
    *(undefined1 *)(puVar10 + 2) = uVar21;
    *(int *)(puVar10 + 4) = iVar22;
    goto LAB_017dfea8;
  case 0x7d:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_128 = SUB81(uVar16,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x4000;
    local_b0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    local_120 = 0;
    local_88 = 0;
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_c0 = 0;
    local_90 = SUB81(uVar6,0);
    uStack_8f = 0x40000000;
    uStack_8b = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,&local_128,&local_90,&local_e0,0,0x40000000);
    goto LAB_017dde20;
  case 0x7e:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_e0 = (Assembler *)(uVar16 | 0x4000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    local_120 = 0;
    local_128 = SUB81(uVar6,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x4000;
    local_90 = SUB81(uVar5,0);
    uStack_8f = 0x40000000;
    uStack_8b = 0;
    local_88 = 0;
    v8::internal::Assembler::mul(param_1,(Register *)&local_e0,&local_128,&local_90);
LAB_017dde20:
    pSVar1 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar24;
    *(int *)(pSVar1 + uVar16 * 4 + 0x80) = *(int *)(pSVar1 + uVar16 * 4 + 0x80) + 1;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          (pSVar1);
    }
    uVar18 = 0x201;
    goto LAB_017df7f8;
  case 0x7f:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar15 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar15);
    uVar24 = *(ulong *)(param_1 + 0x240);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 >> (uVar6 & 0x3f) & 1) != 0) && (uVar16 = uVar5 & 0xff, (uVar15 & uVar24) != 0)) {
      if ((uVar24 & 0x13f8ffff) == 0x13f8ffff) {
        uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar24 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar16 & 0xff;
    }
    iVar22 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 8);
    FUN_017da05c(param_1,iVar22,3,0);
    FUN_017da05c(param_1,iVar22,4,0);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x380) + -0x50);
    lVar17 = *(long *)(*(long *)(param_1 + 0x380) + -0x28);
    uVar24 = v8::internal::wasm::LiftoffAssembler::emit_i64_divs
                       ((LiftoffAssembler *)param_1,uVar16,uVar6 & 0xff,uVar5 & 0xff,uVar8,lVar17);
    if ((uVar24 & 1) == 0) {
      uVar9 = v8::internal::ExternalReference::wasm_int64_div();
      uVar24 = 1L << (uVar16 & 0x3f);
      uVar15 = ~*(ulong *)(param_1 + 0x240);
      uVar4 = (uint)uVar15 & ((uint)uVar24 ^ 0xffffffff);
      if ((uVar4 & 0x13f8ffff) == 0) {
        uVar20 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,uVar24);
        uVar15 = ~*(ulong *)(param_1 + 0x240);
      }
      else {
        uVar20 = ((ulong)uVar4 & 0x2a8aaaa) >> 1 | ((ulong)uVar4 & 0x11505555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = LZCOUNT((uVar20 >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar15 = (ulong)~((uint)(1L << (uVar20 & 0x3f)) | (uint)uVar24) & 0x13f8ffff & uVar15;
      if (uVar15 == 0) {
        uVar15 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff);
      }
      else {
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = LZCOUNT((uVar15 >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      local_d0 = (Register *)&local_140;
      local_150._0_2_ = CONCAT11((char)uVar5,(char)uVar6);
      local_130 = (undefined1)uVar20;
      local_12f = (undefined1)uVar16;
      local_140 = CONCAT53(local_140._3_5_,0x20000);
      local_140 = CONCAT62(local_140._2_6_,0x201);
      uStack_d8 = (Assembler *)0x2;
      local_e0 = (Assembler *)0x1;
      v8::internal::wasm::LiftoffAssembler::SpillAllRegisters((LiftoffAssembler *)param_1);
      uVar4 = local_140._1_1_ - 1;
      if ((8 < uVar4) || ((0x17fU >> (ulong)(uVar4 & 0x1f) & 1) == 0))
      goto switchD_017dab14_caseD_50;
      uVar13 = local_140._2_1_ - 1;
      if ((8 < uVar13) || ((0x17fU >> (ulong)(uVar13 & 0x1f) & 1) == 0))
      goto switchD_017dab14_caseD_50;
      iVar22 = (1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar13 * 4) & 0x1f)) +
               (1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar4 * 4) & 0x1f));
      if (iVar22 < 9) {
        iVar22 = 8;
      }
      v8::internal::wasm::LiftoffAssembler::CallC
                ((LiftoffAssembler *)param_1,&local_e0,&local_150,&local_130,2,iVar22,uVar9);
      local_128 = (Register)0x1;
      uStack_11c = 0;
      uStack_118 = 0;
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0;
      local_120 = 0;
      v8::internal::wasm::LiftoffAssembler::LoadConstant
                ((LiftoffAssembler *)param_1,uVar15 & 0xff,&local_128,0x13);
      uVar5 = uVar20 & 0xff | 0x4000000000;
      uVar6 = uVar15 & 0xff | 0x4000000000;
      v8::internal::wasm::LiftoffAssembler::emit_cond_jump(param_1,0,uVar8,1,uVar5,0,uVar6,0);
      if (lVar17 != 0) {
        local_90 = (Register)0x1;
        uStack_8b = 0;
        local_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_8f = 0xffffffff;
        v8::internal::wasm::LiftoffAssembler::LoadConstant
                  ((LiftoffAssembler *)param_1,uVar15 & 0xff,&local_90,0x13);
        v8::internal::wasm::LiftoffAssembler::emit_cond_jump(param_1,0,lVar17,1,uVar5,0,uVar6,0);
      }
    }
    else {
      uVar24 = 1L << (uVar16 & 0x3f);
    }
    goto LAB_017de618;
  case 0x80:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    pLVar7 = (Label *)FUN_017da05c(param_1,*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8),3,0);
    local_e0 = (Assembler *)(uVar5 & 0xff | 0x4000000000);
    uStack_d8._0_4_ = 0;
    v8::internal::TurboAssembler::Cbz((TurboAssembler *)param_1,(Register *)&local_e0,pLVar7);
    local_e0 = (Assembler *)(uVar16 | 0x4000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    local_120 = 0;
    local_90 = SUB81(uVar5,0);
    uStack_8f = 0x40000000;
    uStack_8b = 0;
    local_128 = SUB81(uVar6,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x4000;
    local_88 = 0;
    v8::internal::Assembler::udiv(param_1,(Register *)&local_e0,&local_128,&local_90);
    uVar24 = *(ulong *)(param_1 + 0x240) | uVar24;
    goto LAB_017dea14;
  case 0x81:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    pLVar7 = (Label *)FUN_017da05c(param_1,*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8),5,0);
    local_140 = uVar5 & 0xff | 0x4000000000;
    local_128 = SUB81(uVar16,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x4000;
    local_e0 = param_1 + 0x198;
    uStack_d8 = param_1 + 0x1a8;
    local_120 = 0;
    local_88 = 0;
    local_138 = 0;
    local_90 = SUB81(uVar6,0);
    uStack_8f = 0x40000000;
    uStack_8b = 0;
    local_d0 = *(Register **)(param_1 + 0x198);
    local_c8 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = v8::internal::UseScratchRegisterScope::AcquireNextAvailable(local_e0);
    local_150 = 0x400000003f;
    if (uVar4 != 0x3f) {
      local_150 = (ulong)uVar4 | 0x4000000000;
    }
    local_148 = 0;
    v8::internal::Assembler::sdiv(param_1,(Register *)&local_150,&local_90,(Register *)&local_140);
    goto LAB_017de5e8;
  case 0x82:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    pLVar7 = (Label *)FUN_017da05c(param_1,*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8),5,0);
    local_140 = uVar5 & 0xff | 0x4000000000;
    local_128 = SUB81(uVar16,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x4000;
    local_e0 = param_1 + 0x198;
    uStack_d8 = param_1 + 0x1a8;
    local_120 = 0;
    local_88 = 0;
    local_138 = 0;
    local_90 = SUB81(uVar6,0);
    uStack_8f = 0x40000000;
    uStack_8b = 0;
    local_d0 = *(Register **)(param_1 + 0x198);
    local_c8 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = v8::internal::UseScratchRegisterScope::AcquireNextAvailable(local_e0);
    local_150 = 0x400000003f;
    if (uVar4 != 0x3f) {
      local_150 = (ulong)uVar4 | 0x4000000000;
    }
    local_148 = 0;
    v8::internal::Assembler::udiv(param_1,(Register *)&local_150,&local_90,(Register *)&local_140);
LAB_017de5e8:
    v8::internal::TurboAssembler::Cbz((TurboAssembler *)param_1,(Register *)&local_140,pLVar7);
    v8::internal::Assembler::msub
              (param_1,&local_128,(Register *)&local_150,(Register *)&local_140,&local_90);
    v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
              ((UseScratchRegisterScope *)&local_e0);
LAB_017de618:
    uVar24 = *(ulong *)(param_1 + 0x240) | uVar24;
LAB_017dea14:
    uVar21 = (undefined1)uVar16;
    *(ulong *)(param_1 + 0x240) = uVar24;
    *(int *)(param_1 + uVar16 * 4 + 0x1c8 + 0x80) =
         *(int *)(param_1 + uVar16 * 4 + 0x1c8 + 0x80) + 1;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           (param_1 + 0x1c8));
    }
    uVar18 = 0x201;
    goto LAB_017dea50;
  case 0x83:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      iVar22 = *(int *)(lVar17 + -8);
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar24 = 1L << (uVar5 & 0x3f);
      uVar16 = uVar5;
      if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = 1L << (uVar16 & 0x3f);
      }
      local_128 = SUB81(uVar16,0);
      local_90 = SUB81(uVar5,0);
      uVar8 = 0;
      goto LAB_017df1f0;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar5 = uVar5 & 0xff;
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar6 = uVar6 & 0xff;
    uVar16 = uVar6;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_128 = SUB81(uVar16,0);
    uVar8 = 0;
LAB_017dfe2c:
    local_b0 = (Assembler *)(uVar5 | 0x4000000000);
    local_c0 = 0;
    local_90 = SUB81(uVar6,0);
    uStack_a0 = 0xffffffff;
    local_a8 = 0;
    goto LAB_017dfe50;
  case 0x84:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) != '\x02') {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar5 = uVar5 & 0xff;
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar6 = uVar6 & 0xff;
      uVar16 = uVar6;
      if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_128 = SUB81(uVar16,0);
      uVar8 = 0x20000000;
      goto LAB_017dfe2c;
    }
    iVar22 = *(int *)(lVar17 + -8);
    *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar24 = 1L << (uVar5 & 0x3f);
    uVar16 = uVar5;
    if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar16 == 0x13f8ffff) {
        uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar16 ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar24 = 1L << (uVar16 & 0x3f);
    }
    local_128 = SUB81(uVar16,0);
    local_90 = SUB81(uVar5,0);
    uVar8 = 0x20000000;
    goto LAB_017df1f0;
  case 0x85:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) != '\x02') {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar5 = uVar5 & 0xff;
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar6 = uVar6 & 0xff;
      uVar16 = uVar6;
      if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_128 = SUB81(uVar16,0);
      uVar8 = 0x40000000;
      goto LAB_017dfe2c;
    }
    iVar22 = *(int *)(lVar17 + -8);
    *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar24 = 1L << (uVar5 & 0x3f);
    uVar16 = uVar5;
    if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar16 == 0x13f8ffff) {
        uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar16 ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar24 = 1L << (uVar16 & 0x3f);
    }
    local_128 = SUB81(uVar16,0);
    local_90 = SUB81(uVar5,0);
    uVar8 = 0x40000000;
LAB_017df1f0:
    uVar16 = uVar16 & 0xff;
    local_c0 = (long)iVar22;
    local_b0 = (Assembler *)0xffffffff;
    local_a8 = CONCAT44(local_a8._4_4_,2);
LAB_017dfe50:
    uStack_8b = 0;
    uStack_8f = 0x40000000;
    uStack_125 = 0x4000;
    bStack_126 = 0;
    bStack_127 = 0;
    local_88 = 0;
    local_b8 = CONCAT71(local_b8._1_7_,0x13);
    uStack_d8 = (Assembler *)((ulong)uStack_d8 & 0xffffffffffffff00);
    local_e0 = (Assembler *)((ulong)local_e0 & 0xffffffffffffff00);
    local_120 = 0;
    v8::internal::TurboAssembler::LogicalMacro
              ((TurboAssembler *)param_1,&local_128,&local_90,&local_e0,uVar8);
    goto LAB_017dfe54;
  case 0x86:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      uVar13 = *(uint *)(lVar17 + -8);
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar24 = 1L << (uVar5 & 0x3f);
      uVar5 = uVar5 & 0xff;
      uVar16 = uVar5;
      if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = 1L << (uVar16 & 0x3f);
        uVar16 = uVar16 & 0xff;
      }
      uVar4 = -uVar13;
      uVar13 = ~uVar13 & 0x3f;
LAB_017df180:
      local_e0 = (Assembler *)(uVar16 | 0x4000000000);
      uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
      local_120 = 0;
      local_128 = SUB81(uVar5,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x4000;
      v8::internal::Assembler::ubfm(param_1,(Register *)&local_e0,&local_128,uVar4 & 0x3f,uVar13);
    }
    else {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar16 = uVar6 & 0xff;
      if (((uVar24 & uVar15) != 0) &&
         (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_e0 = (Assembler *)(uVar16 | 0x4000000000);
      uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
      local_120 = 0;
      local_128 = SUB81(uVar6,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x4000;
      local_90 = SUB81(uVar5,0);
      uStack_8f = 0x40000000;
      uStack_8b = 0;
      local_88 = 0;
      v8::internal::Assembler::lslv(param_1,(Register *)&local_e0,&local_128,&local_90);
    }
    goto LAB_017dfe54;
  case 0x87:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      uVar4 = *(uint *)(lVar17 + -8);
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar24 = 1L << (uVar5 & 0x3f);
      uVar16 = uVar5;
      if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = 1L << (uVar16 & 0x3f);
      }
      uVar16 = uVar16 & 0xff;
      local_e0 = (Assembler *)(uVar16 | 0x4000000000);
      uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
      local_120 = 0;
      local_128 = SUB81(uVar5,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x4000;
      v8::internal::Assembler::sbfm(param_1,(Register *)&local_e0,&local_128,uVar4 & 0x3f,0x3f);
    }
    else {
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar20 = 1L << (uVar5 & 0x3f);
      uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                        ((LiftoffAssembler *)param_1,uVar20);
      uVar15 = *(ulong *)(param_1 + 0x240);
      uVar24 = 1L << (uVar6 & 0x3f);
      uVar16 = uVar6 & 0xff;
      if (((uVar24 & uVar15) != 0) &&
         (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)) {
        if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
          uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar16 = uVar24 & 0xff;
        uVar24 = 1L << (uVar24 & 0x3f);
      }
      local_e0 = (Assembler *)(uVar16 | 0x4000000000);
      uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
      local_120 = 0;
      local_128 = SUB81(uVar6,0);
      bStack_127 = 0;
      bStack_126 = 0;
      uStack_125 = 0x4000;
      local_90 = SUB81(uVar5,0);
      uStack_8f = 0x40000000;
      uStack_8b = 0;
      local_88 = 0;
      v8::internal::Assembler::asrv(param_1,(Register *)&local_e0,&local_128,&local_90);
    }
    goto LAB_017dfe54;
  case 0x88:
    lVar17 = *(long *)(param_1 + 0x1d0);
    if (*(char *)(lVar17 + -0xc) == '\x02') {
      uVar4 = *(uint *)(lVar17 + -8);
      *(long *)(param_1 + 0x1d0) = lVar17 + -0xc;
      uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
      uVar24 = 1L << (uVar5 & 0x3f);
      uVar5 = uVar5 & 0xff;
      uVar16 = uVar5;
      if ((uVar24 & *(ulong *)(param_1 + 0x240)) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
        if (uVar16 == 0x13f8ffff) {
          uVar16 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)param_1,0x13f8ffff,0);
        }
        else {
          uVar16 = uVar16 ^ 0x13f8ffff;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = 1L << (uVar16 & 0x3f);
        uVar16 = uVar16 & 0xff;
      }
      uVar13 = 0x3f;
      goto LAB_017df180;
    }
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x13f8ffff) == 0x13f8ffff) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar16 = uVar15 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    local_e0 = (Assembler *)(uVar16 | 0x4000000000);
    uStack_d8 = (Assembler *)((ulong)uStack_d8._4_4_ << 0x20);
    local_120 = 0;
    local_128 = SUB81(uVar6,0);
    bStack_127 = 0;
    bStack_126 = 0;
    uStack_125 = 0x4000;
    local_90 = SUB81(uVar5,0);
    uStack_8f = 0x40000000;
    uStack_8b = 0;
    local_88 = 0;
    v8::internal::Assembler::lsrv(param_1,(Register *)&local_e0,&local_128,&local_90);
LAB_017dfe54:
    pSVar1 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar24;
    *(int *)(pSVar1 + uVar16 * 4 + 0x80) = *(int *)(pSVar1 + uVar16 * 4 + 0x80) + 1;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          (pSVar1);
    }
    uVar18 = 0x201;
    goto LAB_017dfea0;
  case 0x89:
    uVar16 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar6 = 1L << (uVar16 & 0x3f);
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar6);
    uVar5 = *(ulong *)(param_1 + 0x240);
    if ((uVar5 >> (uVar24 & 0x3f) & 1) == 0) {
      uVar5 = uVar24 & 0xff;
    }
    else if ((uVar6 & uVar5) == 0) {
      uVar5 = uVar16 & 0xff;
    }
    else {
      if ((uVar5 & 0x13f8ffff) == 0x13f8ffff) {
        uVar5 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                          ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar5 = uVar5 & 0x13f8ffff ^ 0x13f8ffff;
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar5 = uVar5 & 0xff;
    }
    local_140 = CONCAT71(local_140._1_7_,(char)uVar5);
    local_90 = SUB81(uVar24,0);
    uStack_8f = CONCAT31(uStack_8f._1_3_,(char)uVar16);
    uVar8 = v8::internal::ExternalReference::wasm_word64_rol();
    goto LAB_017ddebc;
  case 0x8a:
    uVar16 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar6 = 1L << (uVar16 & 0x3f);
    uVar24 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar6);
    uVar5 = *(ulong *)(param_1 + 0x240);
    if ((uVar5 >> (uVar24 & 0x3f) & 1) == 0) {
      uVar5 = uVar24 & 0xff;
    }
    else if ((uVar6 & uVar5) == 0) {
      uVar5 = uVar16 & 0xff;
    }
    else {
      if ((uVar5 & 0x13f8ffff) == 0x13f8ffff) {
        uVar5 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                          ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar5 = uVar5 & 0x13f8ffff ^ 0x13f8ffff;
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar5 = uVar5 & 0xff;
    }
    local_140 = CONCAT71(local_140._1_7_,(char)uVar5);
    local_90 = SUB81(uVar24,0);
    uStack_8f = CONCAT31(uStack_8f._1_3_,(char)uVar16);
    uVar8 = v8::internal::ExternalReference::wasm_word64_ror();
LAB_017ddebc:
    local_d0 = &local_128;
    bStack_126 = 2;
    local_128 = (Register)0x2;
    bStack_127 = 2;
    uStack_d8 = (Assembler *)0x2;
    local_e0 = (Assembler *)0x0;
    v8::internal::wasm::LiftoffAssembler::SpillAllRegisters((LiftoffAssembler *)param_1);
    uVar4 = (byte)local_128 - 1;
    if ((((8 < uVar4) || ((0x17fU >> (ulong)(uVar4 & 0x1f) & 1) == 0)) ||
        (uVar13 = bStack_127 - 1, 8 < uVar13)) || ((0x17fU >> (ulong)(uVar13 & 0x1f) & 1) == 0))
    goto switchD_017dab14_caseD_50;
    iVar2 = (1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar13 * 4) & 0x1f)) +
            (1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar4 * 4) & 0x1f));
    iVar22 = 8;
    if (iVar2 < 9) {
      iVar2 = 8;
    }
    v8::internal::wasm::LiftoffAssembler::CallC
              ((LiftoffAssembler *)param_1,&local_e0,&local_90,&local_140,2,iVar2,uVar8);
    pSVar1 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar5 & 0x3f);
    *(int *)(pSVar1 + uVar5 * 4 + 0x80) = *(int *)(pSVar1 + uVar5 * 4 + 0x80) + 1;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 != *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          (pSVar1);
    }
    uVar18 = 0x201;
    *(char *)(puVar10 + 2) = (char)uVar5;
    goto LAB_017df7fc;
  case 0x92:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x2000;
    uStack_8f = uVar4 >> 8 | 0x20000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x2000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fadd(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    break;
  case 0x93:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x2000;
    uStack_8f = uVar4 >> 8 | 0x20000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x2000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fsub(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    break;
  case 0x94:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x2000;
    uStack_8f = uVar4 >> 8 | 0x20000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x2000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fmul(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    break;
  case 0x95:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x2000;
    uStack_8f = uVar4 >> 8 | 0x20000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x2000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fdiv(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    break;
  case 0x96:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x2000;
    uStack_8f = uVar4 >> 8 | 0x20000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x2000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fmin(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    break;
  case 0x97:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x2000;
    uStack_8f = uVar4 >> 8 | 0x20000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x2000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fmax(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    break;
  case 0x98:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    v8::internal::wasm::LiftoffAssembler::emit_f32_copysign
              (param_1,(ulong)((int)uVar16 - 0x1d) | 0x4000000000,0x100000001,
               (ulong)((int)(uVar6 & 0xff) - 0x1d) | 0x4000000000,0x100000001,
               (ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x4000000000,0x100000001);
    break;
  case 0xa0:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x4000;
    uStack_8f = uVar4 >> 8 | 0x40000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x4000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fadd(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    goto LAB_017deb5c;
  case 0xa1:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x4000;
    uStack_8f = uVar4 >> 8 | 0x40000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x4000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fsub(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    goto LAB_017deb5c;
  case 0xa2:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x4000;
    uStack_8f = uVar4 >> 8 | 0x40000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x4000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fmul(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    goto LAB_017deb5c;
  case 0xa3:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x4000;
    uStack_8f = uVar4 >> 8 | 0x40000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x4000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fdiv(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    goto LAB_017deb5c;
  case 0xa4:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x4000;
    uStack_8f = uVar4 >> 8 | 0x40000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x4000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fmin(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    goto LAB_017deb5c;
  case 0xa5:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    iVar22 = (int)uVar16 + -0x1d;
    uVar4 = (int)(uVar6 & 0xff) - 0x1d;
    uStack_125 = (uint5)(byte)((uint)iVar22 >> 0x18) | 0x4000;
    uStack_8f = uVar4 >> 8 | 0x40000000;
    local_e0 = (Assembler *)((ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x4000000000);
    local_128 = SUB41(iVar22,0);
    bStack_127 = (byte)((uint)iVar22 >> 8);
    bStack_126 = (byte)((uint)iVar22 >> 0x10);
    local_120 = 1;
    uStack_11c = 1;
    local_90 = SUB41(uVar4,0);
    uStack_8b = 0;
    local_88 = 1;
    uStack_84 = 1;
    uStack_d8 = (Assembler *)0x100000001;
    v8::internal::Assembler::fmax(param_1,&local_128,&local_90,(VRegister *)&local_e0);
    goto LAB_017deb5c;
  case 0xa6:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar20 = 1L << (uVar5 & 0x3f);
    uVar6 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar20);
    uVar15 = *(ulong *)(param_1 + 0x240);
    uVar24 = 1L << (uVar6 & 0x3f);
    uVar16 = uVar6 & 0xff;
    if (((uVar24 & uVar15) != 0) && (uVar16 = uVar5 & 0xff, uVar24 = uVar20, (uVar20 & uVar15) != 0)
       ) {
      if ((uVar15 & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
        uVar24 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar16 = uVar15 & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar16 & 0xffff0000ffff0000) >> 0x10;
        uVar24 = LZCOUNT((uVar24 | (uVar16 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar24 << 0x20);
      }
      uVar16 = uVar24 & 0xff;
      uVar24 = 1L << (uVar24 & 0x3f);
    }
    v8::internal::wasm::LiftoffAssembler::emit_f64_copysign
              (param_1,(ulong)((int)uVar16 - 0x1d) | 0x4000000000,0x100000001,
               (ulong)((int)(uVar6 & 0xff) - 0x1d) | 0x4000000000,0x100000001,
               (ulong)((int)(uVar5 & 0xff) - 0x1d) | 0x4000000000,0x100000001);
LAB_017deb5c:
    pSVar1 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar24;
    *(int *)(pSVar1 + uVar16 * 4 + 0x80) = *(int *)(pSVar1 + uVar16 * 4 + 0x80) + 1;
    puVar10 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar22 = 8;
    }
    else {
      iVar22 = *(int *)(puVar10 + -2) + 8;
    }
    if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar10 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          (pSVar1);
    }
    uVar18 = 0x401;
    goto LAB_017df7f8;
  }
  pSVar1 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
  *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar24;
  *(int *)(pSVar1 + uVar16 * 4 + 0x80) = *(int *)(pSVar1 + uVar16 * 4 + 0x80) + 1;
  puVar10 = *(undefined2 **)(param_1 + 0x1d0);
  if (puVar10 == *(undefined2 **)(param_1 + 0x1c8)) {
    iVar22 = 8;
  }
  else {
    iVar22 = *(int *)(puVar10 + -2) + 8;
  }
  if (puVar10 == *(undefined2 **)(param_1 + 0x1d8)) {
    puVar10 = (undefined2 *)
              v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                        (pSVar1);
  }
  uVar18 = 0x301;
LAB_017df7f8:
  *(char *)(puVar10 + 2) = (char)uVar16;
LAB_017df7fc:
  *(int *)(puVar10 + 4) = iVar22;
LAB_017df800:
  *puVar10 = uVar18;
  *(undefined2 **)(param_1 + 0x1d0) = puVar10 + 6;
LAB_017df80c:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

