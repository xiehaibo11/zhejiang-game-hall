
undefined1 * FUN_017d0a08(long param_1,undefined1 param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *__src;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  Zone *this;
  undefined1 *puVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar6 = *(undefined1 **)(param_1 + 0x4d8);
  puVar14 = *(undefined1 **)(param_1 + 0x4e0);
  if (puVar6 == puVar14) {
    bVar2 = false;
  }
  else {
    bVar2 = puVar14[-0x1d0] != '\0';
  }
  uVar15 = (undefined4)((ulong)(*(long *)(param_1 + 0x4c0) - *(long *)(param_1 + 0x4b8)) >> 4);
  if (puVar14 < *(undefined1 **)(param_1 + 0x4e8)) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *puVar14 = param_2;
    *(undefined4 *)(puVar14 + 4) = uVar15;
    puVar14[0x10] = bVar2;
    *(undefined4 *)(puVar14 + 0x18) = 0;
    *(undefined8 *)(puVar14 + 0x20) = 0;
    *(undefined4 *)(puVar14 + 0x38) = 0;
    *(undefined8 *)(puVar14 + 0x40) = 0;
    puVar14[0x50] = 0;
    puVar14[0x30] = bVar2 ^ 1;
    *(undefined8 *)(puVar14 + 0x58) = 0;
    *(undefined1 **)(puVar14 + 0x60) = puVar14 + 0x78;
    *(undefined1 **)(puVar14 + 0x68) = puVar14 + 0x78;
    *(undefined8 *)(puVar14 + 8) = uVar7;
    *(undefined8 *)(puVar14 + 0xe0) = 0;
    *(undefined8 *)(puVar14 + 0xd8) = 0;
    *(undefined8 *)(puVar14 + 0x1d0) = 0;
    *(undefined1 **)(puVar14 + 0x70) = puVar14 + 0xd8;
    *(undefined8 *)(puVar14 + 0x110) = 0;
    *(undefined8 *)(puVar14 + 0x108) = 0;
    *(undefined8 *)(puVar14 + 0x120) = 0;
    *(undefined8 *)(puVar14 + 0x118) = 0;
    *(undefined8 *)(puVar14 + 0x130) = 0;
    *(undefined8 *)(puVar14 + 0x128) = 0;
    *(undefined8 *)(puVar14 + 0xf0) = 0;
    *(undefined8 *)(puVar14 + 0xe8) = 0;
    *(undefined8 *)(puVar14 + 0x100) = 0;
    *(undefined8 *)(puVar14 + 0xf8) = 0;
    *(undefined8 *)(puVar14 + 0x140) = 0;
    *(undefined8 *)(puVar14 + 0x138) = 0;
    *(undefined8 *)(puVar14 + 0x150) = 0;
    *(undefined8 *)(puVar14 + 0x148) = 0;
    *(undefined8 *)(puVar14 + 0x160) = 0;
    *(undefined8 *)(puVar14 + 0x158) = 0;
    *(undefined8 *)(puVar14 + 0x170) = 0;
    *(undefined8 *)(puVar14 + 0x168) = 0;
    *(undefined8 *)(puVar14 + 0x180) = 0;
    *(undefined8 *)(puVar14 + 0x178) = 0;
    *(undefined8 *)(puVar14 + 400) = 0;
    *(undefined8 *)(puVar14 + 0x188) = 0;
    *(undefined8 *)(puVar14 + 0x1a0) = 0;
    *(undefined8 *)(puVar14 + 0x198) = 0;
    *(undefined8 *)(puVar14 + 0x1b0) = 0;
    *(undefined8 *)(puVar14 + 0x1a8) = 0;
    *(undefined8 *)(puVar14 + 0x1c0) = 0;
    *(undefined8 *)(puVar14 + 0x1b8) = 0;
    *(undefined4 *)(puVar14 + 0x1c8) = 0;
    puVar3 = operator_new(8);
    *puVar3 = 0;
    *(undefined8 **)(puVar14 + 0x1d8) = puVar3;
    puVar6 = (undefined1 *)(*(long *)(param_1 + 0x4e0) + 0x1e0);
    *(undefined1 **)(param_1 + 0x4e0) = puVar6;
  }
  else {
    lVar12 = (long)puVar14 - (long)puVar6 >> 5;
    pcVar1 = (char *)(lVar12 * -0x1111111111111111 + 1);
    if ("_ZN2v88internal20ArrayBufferCollector15FreeAllocationsEv" < pcVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = (long)*(undefined1 **)(param_1 + 0x4e8) - (long)puVar6 >> 5;
    pcVar11 = (char *)(lVar8 * -0x2222222222222222);
    if (pcVar1 <= pcVar11) {
      pcVar1 = pcVar11;
    }
    if (0x222221 < (ulong)(lVar8 * -0x1111111111111111)) {
      pcVar1 = "_ZN2v88internal20ArrayBufferCollector15FreeAllocationsEv";
    }
    if (pcVar1 == (char *)0x0) {
      lVar8 = 0;
    }
    else {
      this = *(Zone **)(param_1 + 0x4f0);
      uVar5 = (long)pcVar1 * 0x1e0;
      lVar8 = *(long *)(this + 0x10);
      if (uVar5 < (ulong)(*(long *)(this + 0x18) - lVar8) ||
          uVar5 - (*(long *)(this + 0x18) - lVar8) == 0) {
        *(ulong *)(this + 0x10) = lVar8 + uVar5;
      }
      else {
        lVar8 = v8::internal::Zone::NewExpand(this,uVar5);
      }
    }
    puVar14 = (undefined1 *)(lVar8 + lVar12 * 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    puVar14[0x30] = bVar2 ^ 1;
    *puVar14 = param_2;
    *(undefined4 *)(puVar14 + 4) = uVar15;
    puVar14[0x10] = bVar2;
    *(undefined4 *)(puVar14 + 0x18) = 0;
    *(undefined8 *)(puVar14 + 0x20) = 0;
    *(undefined4 *)(puVar14 + 0x38) = 0;
    *(undefined8 *)(puVar14 + 0x40) = 0;
    puVar14[0x50] = 0;
    *(undefined8 *)(puVar14 + 0x58) = 0;
    *(undefined1 **)(puVar14 + 0x60) = puVar14 + 0x78;
    *(undefined1 **)(puVar14 + 0x68) = puVar14 + 0x78;
    *(undefined8 *)(puVar14 + 8) = uVar7;
    *(undefined8 *)(puVar14 + 0xe0) = 0;
    *(undefined8 *)(puVar14 + 0xd8) = 0;
    *(undefined8 *)(puVar14 + 0x1d0) = 0;
    *(undefined1 **)(puVar14 + 0x70) = puVar14 + 0xd8;
    *(undefined8 *)(puVar14 + 0x110) = 0;
    *(undefined8 *)(puVar14 + 0x108) = 0;
    *(undefined8 *)(puVar14 + 0x120) = 0;
    *(undefined8 *)(puVar14 + 0x118) = 0;
    *(undefined8 *)(puVar14 + 0xf0) = 0;
    *(undefined8 *)(puVar14 + 0xe8) = 0;
    *(undefined8 *)(puVar14 + 0x100) = 0;
    *(undefined8 *)(puVar14 + 0xf8) = 0;
    *(undefined8 *)(puVar14 + 0x130) = 0;
    *(undefined8 *)(puVar14 + 0x128) = 0;
    *(undefined8 *)(puVar14 + 0x140) = 0;
    *(undefined8 *)(puVar14 + 0x138) = 0;
    *(undefined8 *)(puVar14 + 0x150) = 0;
    *(undefined8 *)(puVar14 + 0x148) = 0;
    *(undefined8 *)(puVar14 + 0x160) = 0;
    *(undefined8 *)(puVar14 + 0x158) = 0;
    *(undefined8 *)(puVar14 + 0x170) = 0;
    *(undefined8 *)(puVar14 + 0x168) = 0;
    *(undefined8 *)(puVar14 + 0x180) = 0;
    *(undefined8 *)(puVar14 + 0x178) = 0;
    *(undefined8 *)(puVar14 + 400) = 0;
    *(undefined8 *)(puVar14 + 0x188) = 0;
    *(undefined8 *)(puVar14 + 0x1a0) = 0;
    *(undefined8 *)(puVar14 + 0x198) = 0;
    *(undefined8 *)(puVar14 + 0x1b0) = 0;
    *(undefined8 *)(puVar14 + 0x1a8) = 0;
    *(undefined8 *)(puVar14 + 0x1c0) = 0;
    *(undefined8 *)(puVar14 + 0x1b8) = 0;
    *(undefined4 *)(puVar14 + 0x1c8) = 0;
    puVar3 = operator_new(8);
    *puVar3 = 0;
    *(undefined8 **)(puVar14 + 0x1d8) = puVar3;
    puVar13 = *(undefined1 **)(param_1 + 0x4d8);
    puVar16 = *(undefined1 **)(param_1 + 0x4e0);
    puVar6 = puVar14 + 0x1e0;
    puVar4 = puVar13;
    if (puVar16 != puVar13) {
      lVar12 = 0;
      do {
        uVar7 = *(undefined8 *)(puVar16 + lVar12 + -0x1e0);
        uVar18 = *(undefined8 *)(puVar16 + lVar12 + -0x1c8);
        uVar17 = *(undefined8 *)(puVar16 + lVar12 + -0x1d0);
        *(undefined8 *)(puVar14 + lVar12 + -0x1d8) = *(undefined8 *)(puVar16 + lVar12 + -0x1d8);
        *(undefined8 *)(puVar14 + lVar12 + -0x1e0) = uVar7;
        *(undefined8 *)(puVar14 + lVar12 + -0x1c8) = uVar18;
        *(undefined8 *)(puVar14 + lVar12 + -0x1d0) = uVar17;
        uVar21 = *(undefined8 *)(puVar16 + lVar12 + -0x1b0);
        uVar18 = *(undefined8 *)(puVar16 + lVar12 + -0x198);
        uVar17 = *(undefined8 *)(puVar16 + lVar12 + -0x1a0);
        uVar7 = *(undefined8 *)(puVar16 + lVar12 + -400);
        uVar20 = *(undefined8 *)(puVar16 + lVar12 + -0x1b8);
        uVar19 = *(undefined8 *)(puVar16 + lVar12 + -0x1c0);
        *(undefined8 *)(puVar14 + lVar12 + -0x1a8) = *(undefined8 *)(puVar16 + lVar12 + -0x1a8);
        *(undefined8 *)(puVar14 + lVar12 + -0x1b0) = uVar21;
        *(undefined8 *)(puVar14 + lVar12 + -0x198) = uVar18;
        *(undefined8 *)(puVar14 + lVar12 + -0x1a0) = uVar17;
        *(undefined8 *)(puVar14 + lVar12 + -400) = uVar7;
        *(undefined8 *)(puVar14 + lVar12 + -0x1b8) = uVar20;
        *(undefined8 *)(puVar14 + lVar12 + -0x1c0) = uVar19;
        uVar7 = *(undefined8 *)(puVar16 + lVar12 + -0x188);
        puVar4 = puVar14 + lVar12 + -0x168;
        *(undefined8 *)(puVar16 + lVar12 + -0x188) = 0;
        *(undefined8 *)(puVar14 + lVar12 + -0x188) = uVar7;
        *(undefined1 **)(puVar14 + lVar12 + -0x180) = puVar4;
        *(undefined1 **)(puVar14 + lVar12 + -0x178) = puVar4;
        *(undefined1 **)(puVar14 + lVar12 + -0x170) = puVar14 + lVar12 + -0x108;
        if (puVar16 != puVar14) {
          __src = *(undefined1 **)(puVar16 + lVar12 + -0x180);
          puVar9 = puVar16 + lVar12 + -0x168;
          if (puVar9 == __src) {
            lVar10 = *(long *)(puVar16 + lVar12 + -0x178);
            memcpy(puVar4,__src,lVar10 - (long)__src);
            *(long *)(puVar14 + lVar12 + -0x178) =
                 *(long *)(puVar14 + lVar12 + -0x180) + (lVar10 - (long)__src);
          }
          else {
            *(undefined1 **)(puVar14 + lVar12 + -0x180) = __src;
            *(undefined8 *)(puVar14 + lVar12 + -0x178) = *(undefined8 *)(puVar16 + lVar12 + -0x178);
            *(undefined8 *)(puVar14 + lVar12 + -0x170) = *(undefined8 *)(puVar16 + lVar12 + -0x170);
            *(undefined1 **)(puVar16 + lVar12 + -0x180) = puVar9;
            *(undefined1 **)(puVar16 + lVar12 + -0x178) = puVar9;
            *(undefined1 **)(puVar16 + lVar12 + -0x170) = puVar16 + lVar12 + -0x108;
          }
        }
        uVar7 = *(undefined8 *)(puVar16 + lVar12 + -0x98);
        uVar18 = *(undefined8 *)(puVar16 + lVar12 + -0xa0);
        uVar17 = *(undefined8 *)(puVar16 + lVar12 + -0xa8);
        uVar20 = *(undefined8 *)(puVar16 + lVar12 + -0xb0);
        uVar19 = *(undefined8 *)(puVar16 + lVar12 + -0xb8);
        uVar22 = *(undefined8 *)(puVar16 + lVar12 + -0xc0);
        uVar21 = *(undefined8 *)(puVar16 + lVar12 + -200);
        *(undefined8 *)(puVar14 + lVar12 + -0x90) = *(undefined8 *)(puVar16 + lVar12 + -0x90);
        *(undefined8 *)(puVar14 + lVar12 + -0x98) = uVar7;
        *(undefined8 *)(puVar14 + lVar12 + -0xa0) = uVar18;
        *(undefined8 *)(puVar14 + lVar12 + -0xa8) = uVar17;
        *(undefined8 *)(puVar14 + lVar12 + -0xb0) = uVar20;
        *(undefined8 *)(puVar14 + lVar12 + -0xb8) = uVar19;
        *(undefined8 *)(puVar14 + lVar12 + -0xc0) = uVar22;
        *(undefined8 *)(puVar14 + lVar12 + -200) = uVar21;
        uVar7 = *(undefined8 *)(puVar16 + lVar12 + -0x58);
        uVar18 = *(undefined8 *)(puVar16 + lVar12 + -0x60);
        uVar17 = *(undefined8 *)(puVar16 + lVar12 + -0x68);
        uVar20 = *(undefined8 *)(puVar16 + lVar12 + -0x70);
        uVar19 = *(undefined8 *)(puVar16 + lVar12 + -0x78);
        uVar22 = *(undefined8 *)(puVar16 + lVar12 + -0x80);
        uVar21 = *(undefined8 *)(puVar16 + lVar12 + -0x88);
        *(undefined8 *)(puVar14 + lVar12 + -0x50) = *(undefined8 *)(puVar16 + lVar12 + -0x50);
        *(undefined8 *)(puVar14 + lVar12 + -0x58) = uVar7;
        *(undefined8 *)(puVar14 + lVar12 + -0x60) = uVar18;
        *(undefined8 *)(puVar14 + lVar12 + -0x68) = uVar17;
        *(undefined8 *)(puVar14 + lVar12 + -0x70) = uVar20;
        *(undefined8 *)(puVar14 + lVar12 + -0x78) = uVar19;
        *(undefined8 *)(puVar14 + lVar12 + -0x80) = uVar22;
        *(undefined8 *)(puVar14 + lVar12 + -0x88) = uVar21;
        uVar7 = *(undefined8 *)(puVar16 + lVar12 + -0x18);
        uVar18 = *(undefined8 *)(puVar16 + lVar12 + -0x20);
        uVar17 = *(undefined8 *)(puVar16 + lVar12 + -0x28);
        uVar20 = *(undefined8 *)(puVar16 + lVar12 + -0x30);
        uVar19 = *(undefined8 *)(puVar16 + lVar12 + -0x38);
        uVar22 = *(undefined8 *)(puVar16 + lVar12 + -0x40);
        uVar21 = *(undefined8 *)(puVar16 + lVar12 + -0x48);
        *(undefined8 *)(puVar14 + lVar12 + -0x10) = *(undefined8 *)(puVar16 + lVar12 + -0x10);
        *(undefined8 *)(puVar14 + lVar12 + -0x18) = uVar7;
        *(undefined8 *)(puVar14 + lVar12 + -0x20) = uVar18;
        *(undefined8 *)(puVar14 + lVar12 + -0x28) = uVar17;
        *(undefined8 *)(puVar14 + lVar12 + -0x30) = uVar20;
        *(undefined8 *)(puVar14 + lVar12 + -0x38) = uVar19;
        *(undefined8 *)(puVar14 + lVar12 + -0x40) = uVar22;
        *(undefined8 *)(puVar14 + lVar12 + -0x48) = uVar21;
        uVar7 = *(undefined8 *)(puVar16 + lVar12 + -0xd8);
        uVar18 = *(undefined8 *)(puVar16 + lVar12 + -0xe0);
        uVar17 = *(undefined8 *)(puVar16 + lVar12 + -0xe8);
        uVar20 = *(undefined8 *)(puVar16 + lVar12 + -0xf0);
        uVar19 = *(undefined8 *)(puVar16 + lVar12 + -0xf8);
        uVar22 = *(undefined8 *)(puVar16 + lVar12 + -0x100);
        uVar21 = *(undefined8 *)(puVar16 + lVar12 + -0x108);
        *(undefined8 *)(puVar14 + lVar12 + -0xd0) = *(undefined8 *)(puVar16 + lVar12 + -0xd0);
        *(undefined8 *)(puVar14 + lVar12 + -0xd8) = uVar7;
        *(undefined8 *)(puVar14 + lVar12 + -0xe0) = uVar18;
        *(undefined8 *)(puVar14 + lVar12 + -0xe8) = uVar17;
        *(undefined8 *)(puVar14 + lVar12 + -0xf0) = uVar20;
        *(undefined8 *)(puVar14 + lVar12 + -0xf8) = uVar19;
        *(undefined8 *)(puVar14 + lVar12 + -0x100) = uVar22;
        *(undefined8 *)(puVar14 + lVar12 + -0x108) = uVar21;
        uVar7 = *(undefined8 *)(puVar16 + lVar12 + -8);
        lVar10 = lVar12 + -0x1e0;
        *(undefined8 *)(puVar16 + lVar12 + -8) = 0;
        *(undefined8 *)(puVar14 + lVar12 + -8) = uVar7;
        lVar12 = lVar10;
      } while ((long)puVar13 - (long)puVar16 != lVar10);
      puVar14 = puVar14 + lVar10;
      puVar13 = *(undefined1 **)(param_1 + 0x4e0);
      puVar4 = *(undefined1 **)(param_1 + 0x4d8);
    }
    *(undefined1 **)(param_1 + 0x4d8) = puVar14;
    *(undefined1 **)(param_1 + 0x4e0) = puVar6;
    *(long *)(param_1 + 0x4e8) = lVar8 + (long)pcVar1 * 0x1e0;
    if (puVar13 != puVar4) {
      do {
        puVar13 = puVar13 + -0x1e0;
        FUN_017c3e78(puVar13);
      } while (puVar4 != puVar13);
      puVar6 = *(undefined1 **)(param_1 + 0x4e0);
    }
  }
  return puVar6 + -0x1e0;
}

