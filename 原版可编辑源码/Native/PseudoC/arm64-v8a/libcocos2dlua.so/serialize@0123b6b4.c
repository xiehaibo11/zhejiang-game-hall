
/* btQuantizedBvh::serialize(void*, unsigned int, bool) const */

undefined8 __thiscall
btQuantizedBvh::serialize(btQuantizedBvh *this,void *param_1,uint param_2,bool param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  ushort *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  long *plVar18;
  char *pcVar19;
  long *plVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  char *pcVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xd4);
  *(undefined ***)param_1 = &PTR__btQuantizedBvh_01734088;
  *(undefined4 *)((long)param_1 + 0x38) = 0x11a;
  *(undefined1 *)((long)param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x60) = 1;
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x50) = 0;
  pcVar19 = (char *)((long)param_1 + 0x80);
  *pcVar19 = '\x01';
  plVar20 = (long *)((long)param_1 + 0x78);
  *plVar20 = 0;
  puVar17 = (uint *)((long)param_1 + 0x6c);
  *puVar17 = 0;
  puVar22 = (uint *)((long)param_1 + 0x70);
  *puVar22 = 0;
  *(undefined1 *)((long)param_1 + 0xa0) = 1;
  *(undefined8 *)((long)param_1 + 0x98) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)((long)param_1 + 0x90) = 0;
  pcVar24 = (char *)((long)param_1 + 0xc0);
  *pcVar24 = '\x01';
  plVar18 = (long *)((long)param_1 + 0xb8);
  *plVar18 = 0;
  puVar23 = (uint *)((long)param_1 + 0xac);
  *puVar23 = 0;
  puVar21 = (uint *)((long)param_1 + 0xb0);
  *puVar21 = 0;
  *(undefined8 *)((long)param_1 + 8) = 0xff7fffffff7fffff;
  *(undefined8 *)((long)param_1 + 0x18) = 0x7f7fffff7f7fffff;
  *(undefined1 *)((long)param_1 + 0xe8) = 1;
  *(undefined4 *)((long)param_1 + 200) = 0;
  *(undefined8 *)((long)param_1 + 0xe0) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)((long)param_1 + 0xd8) = 0;
  *(undefined4 *)((long)param_1 + 0xf0) = 0;
  *(undefined8 *)((long)param_1 + 0x10) = 0xff7fffff;
  *(undefined8 *)((long)param_1 + 0x20) = 0x7f7fffff;
  uVar11 = *(uint *)(this + 0x3c);
  if (param_3) {
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    *(uint *)((long)param_1 + 0x3c) = uVar11 >> 0x10 | uVar11 << 0x10;
    *(btQuantizedBvh *)((long)param_1 + 8) = this[0xb];
    *(btQuantizedBvh *)((long)param_1 + 9) = this[10];
    *(btQuantizedBvh *)((long)param_1 + 10) = this[9];
    *(btQuantizedBvh *)((long)param_1 + 0xb) = this[8];
    *(btQuantizedBvh *)((long)param_1 + 0xc) = this[0xf];
    *(btQuantizedBvh *)((long)param_1 + 0xd) = this[0xe];
    *(btQuantizedBvh *)((long)param_1 + 0xe) = this[0xd];
    *(btQuantizedBvh *)((long)param_1 + 0xf) = this[0xc];
    *(btQuantizedBvh *)((long)param_1 + 0x10) = this[0x13];
    *(btQuantizedBvh *)((long)param_1 + 0x11) = this[0x12];
    *(btQuantizedBvh *)((long)param_1 + 0x12) = this[0x11];
    *(btQuantizedBvh *)((long)param_1 + 0x13) = this[0x10];
    *(btQuantizedBvh *)((long)param_1 + 0x14) = this[0x17];
    *(btQuantizedBvh *)((long)param_1 + 0x15) = this[0x16];
    *(btQuantizedBvh *)((long)param_1 + 0x16) = this[0x15];
    *(btQuantizedBvh *)((long)param_1 + 0x17) = this[0x14];
    *(btQuantizedBvh *)((long)param_1 + 0x18) = this[0x1b];
    *(btQuantizedBvh *)((long)param_1 + 0x19) = this[0x1a];
    *(btQuantizedBvh *)((long)param_1 + 0x1a) = this[0x19];
    *(btQuantizedBvh *)((long)param_1 + 0x1b) = this[0x18];
    *(btQuantizedBvh *)((long)param_1 + 0x1c) = this[0x1f];
    *(btQuantizedBvh *)((long)param_1 + 0x1d) = this[0x1e];
    *(btQuantizedBvh *)((long)param_1 + 0x1e) = this[0x1d];
    *(btQuantizedBvh *)((long)param_1 + 0x1f) = this[0x1c];
    *(btQuantizedBvh *)((long)param_1 + 0x20) = this[0x23];
    *(btQuantizedBvh *)((long)param_1 + 0x21) = this[0x22];
    *(btQuantizedBvh *)((long)param_1 + 0x22) = this[0x21];
    *(btQuantizedBvh *)((long)param_1 + 0x23) = this[0x20];
    *(btQuantizedBvh *)((long)param_1 + 0x24) = this[0x27];
    *(btQuantizedBvh *)((long)param_1 + 0x25) = this[0x26];
    *(btQuantizedBvh *)((long)param_1 + 0x26) = this[0x25];
    *(btQuantizedBvh *)((long)param_1 + 0x27) = this[0x24];
    *(btQuantizedBvh *)((long)param_1 + 0x28) = this[0x2b];
    *(btQuantizedBvh *)((long)param_1 + 0x29) = this[0x2a];
    *(btQuantizedBvh *)((long)param_1 + 0x2a) = this[0x29];
    *(btQuantizedBvh *)((long)param_1 + 0x2b) = this[0x28];
    *(btQuantizedBvh *)((long)param_1 + 0x2c) = this[0x2f];
    *(btQuantizedBvh *)((long)param_1 + 0x2d) = this[0x2e];
    *(btQuantizedBvh *)((long)param_1 + 0x2e) = this[0x2d];
    *(btQuantizedBvh *)((long)param_1 + 0x2f) = this[0x2c];
    *(btQuantizedBvh *)((long)param_1 + 0x30) = this[0x33];
    *(btQuantizedBvh *)((long)param_1 + 0x31) = this[0x32];
    *(btQuantizedBvh *)((long)param_1 + 0x32) = this[0x31];
    *(btQuantizedBvh *)((long)param_1 + 0x33) = this[0x30];
    *(btQuantizedBvh *)((long)param_1 + 0x34) = this[0x37];
    *(btQuantizedBvh *)((long)param_1 + 0x35) = this[0x36];
    *(btQuantizedBvh *)((long)param_1 + 0x36) = this[0x35];
    *(btQuantizedBvh *)((long)param_1 + 0x37) = this[0x34];
    uVar11 = (*(uint *)(this + 200) & 0xff00ff00) >> 8 | (*(uint *)(this + 200) & 0xff00ff) << 8;
    *(uint *)((long)param_1 + 200) = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = (*(uint *)(this + 0xf0) & 0xff00ff00) >> 8 | (*(uint *)(this + 0xf0) & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  }
  else {
    *(uint *)((long)param_1 + 0x3c) = uVar11;
    uVar27 = *(undefined8 *)(this + 8);
    *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)((long)param_1 + 8) = uVar27;
    uVar27 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)((long)param_1 + 0x20) = *(undefined8 *)(this + 0x20);
    *(undefined8 *)((long)param_1 + 0x18) = uVar27;
    uVar27 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)(this + 0x30);
    *(undefined8 *)((long)param_1 + 0x28) = uVar27;
    *(undefined4 *)((long)param_1 + 200) = *(undefined4 *)(this + 200);
    uVar11 = *(uint *)(this + 0xf0);
  }
  *(uint *)((long)param_1 + 0xf0) = uVar11;
  pvVar2 = (void *)((long)param_1 + 0xf8);
  *(btQuantizedBvh *)((long)param_1 + 0x40) = this[0x40];
  uVar11 = *(uint *)(this + 0x3c);
  uVar25 = (ulong)uVar11;
  if (this[0x40] == (btQuantizedBvh)0x0) {
    if ((void *)*plVar20 != (void *)0x0) {
      if (*pcVar19 != '\0') {
        btAlignedFreeInternal((void *)*plVar20);
      }
      *plVar20 = 0;
    }
    *pcVar19 = '\0';
    *plVar20 = (long)pvVar2;
    *puVar17 = uVar11;
    *puVar22 = uVar11;
    pvVar10 = pvVar2;
    if (param_3) {
      if (0 < (int)uVar11) {
        lVar13 = *(long *)(this + 0x78);
        lVar26 = 0;
        do {
          puVar3 = (undefined1 *)(lVar13 + lVar26);
          puVar4 = (undefined1 *)((long)pvVar10 + lVar26);
          uVar25 = uVar25 - 1;
          *puVar4 = puVar3[3];
          puVar4[1] = puVar3[2];
          puVar4[2] = puVar3[1];
          puVar4[3] = *puVar3;
          puVar4[4] = puVar3[7];
          puVar4[5] = puVar3[6];
          puVar4[6] = puVar3[5];
          puVar4[7] = puVar3[4];
          puVar4[8] = puVar3[0xb];
          puVar4[9] = puVar3[10];
          puVar4[10] = puVar3[9];
          puVar4[0xb] = puVar3[8];
          puVar4[0xc] = puVar3[0xf];
          puVar4[0xd] = puVar3[0xe];
          puVar4[0xe] = puVar3[0xd];
          puVar4[0xf] = puVar3[0xc];
          lVar13 = *(long *)(this + 0x78) + lVar26;
          lVar5 = *plVar20 + lVar26;
          *(undefined1 *)(lVar5 + 0x10) = *(undefined1 *)(lVar13 + 0x13);
          *(undefined1 *)(lVar5 + 0x11) = *(undefined1 *)(lVar13 + 0x12);
          *(undefined1 *)(lVar5 + 0x12) = *(undefined1 *)(lVar13 + 0x11);
          *(undefined1 *)(lVar5 + 0x13) = *(undefined1 *)(lVar13 + 0x10);
          *(undefined1 *)(lVar5 + 0x14) = *(undefined1 *)(lVar13 + 0x17);
          *(undefined1 *)(lVar5 + 0x15) = *(undefined1 *)(lVar13 + 0x16);
          *(undefined1 *)(lVar5 + 0x16) = *(undefined1 *)(lVar13 + 0x15);
          *(undefined1 *)(lVar5 + 0x17) = *(undefined1 *)(lVar13 + 0x14);
          *(undefined1 *)(lVar5 + 0x18) = *(undefined1 *)(lVar13 + 0x1b);
          *(undefined1 *)(lVar5 + 0x19) = *(undefined1 *)(lVar13 + 0x1a);
          *(undefined1 *)(lVar5 + 0x1a) = *(undefined1 *)(lVar13 + 0x19);
          *(undefined1 *)(lVar5 + 0x1b) = *(undefined1 *)(lVar13 + 0x18);
          *(undefined1 *)(lVar5 + 0x1c) = *(undefined1 *)(lVar13 + 0x1f);
          *(undefined1 *)(lVar5 + 0x1d) = *(undefined1 *)(lVar13 + 0x1e);
          *(undefined1 *)(lVar5 + 0x1e) = *(undefined1 *)(lVar13 + 0x1d);
          *(undefined1 *)(lVar5 + 0x1f) = *(undefined1 *)(lVar13 + 0x1c);
          lVar13 = *(long *)(this + 0x78);
          pvVar10 = (void *)*plVar20;
          lVar5 = lVar13 + lVar26;
          uVar9 = (*(uint *)(lVar5 + 0x20) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar5 + 0x20) & 0xff00ff) << 8;
          *(uint *)((long)pvVar10 + lVar26 + 0x20) = uVar9 >> 0x10 | uVar9 << 0x10;
          uVar9 = (*(uint *)(lVar5 + 0x24) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar5 + 0x24) & 0xff00ff) << 8;
          *(uint *)((long)pvVar10 + lVar26 + 0x24) = uVar9 >> 0x10 | uVar9 << 0x10;
          uVar9 = (*(uint *)(lVar5 + 0x28) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar5 + 0x28) & 0xff00ff) << 8;
          *(uint *)((long)pvVar10 + lVar26 + 0x28) = uVar9 >> 0x10 | uVar9 << 0x10;
          lVar26 = lVar26 + 0x40;
        } while (uVar25 != 0);
      }
    }
    else if (0 < (int)uVar11) {
      lVar13 = *(long *)(this + 0x78);
      lVar26 = 0;
      do {
        uVar27 = *(undefined8 *)(lVar13 + lVar26);
        uVar25 = uVar25 - 1;
        ((undefined8 *)((long)pvVar10 + lVar26))[1] = ((undefined8 *)(lVar13 + lVar26))[1];
        *(undefined8 *)((long)pvVar10 + lVar26) = uVar27;
        lVar13 = *plVar20;
        uVar27 = *(undefined8 *)(*(long *)(this + 0x78) + lVar26 + 0x10);
        *(undefined8 *)(lVar13 + lVar26 + 0x18) =
             *(undefined8 *)(*(long *)(this + 0x78) + lVar26 + 0x18);
        *(undefined8 *)(lVar13 + lVar26 + 0x10) = uVar27;
        lVar13 = *(long *)(this + 0x78);
        pvVar10 = (void *)*plVar20;
        lVar5 = lVar13 + lVar26;
        *(undefined4 *)((long)pvVar10 + lVar26 + 0x20) = *(undefined4 *)(lVar5 + 0x20);
        *(undefined4 *)((long)pvVar10 + lVar26 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
        *(undefined4 *)((long)pvVar10 + lVar26 + 0x28) = *(undefined4 *)(lVar5 + 0x28);
        lVar26 = lVar26 + 0x40;
      } while (uVar25 != 0);
    }
    if (pvVar10 != (void *)0x0) {
      if (*pcVar19 != '\0') {
        btAlignedFreeInternal(pvVar10);
      }
      *plVar20 = 0;
    }
    lVar26 = (long)(int)uVar11 << 6;
  }
  else {
    if ((void *)*plVar18 != (void *)0x0) {
      if (*pcVar24 != '\0') {
        btAlignedFreeInternal((void *)*plVar18);
      }
      *plVar18 = 0;
    }
    *pcVar24 = '\0';
    *plVar18 = (long)pvVar2;
    *puVar23 = uVar11;
    *puVar21 = uVar11;
    if (param_3) {
      if (0 < (int)uVar11) {
        puVar14 = (ushort *)(*(long *)(this + 0xb8) + 6);
        puVar22 = (uint *)((long)param_1 + 0x104);
        do {
          uVar25 = uVar25 - 1;
          *(ushort *)(puVar22 + -3) = puVar14[-3] >> 8 | puVar14[-3] << 8;
          *(ushort *)((long)puVar22 + -10) = puVar14[-2] >> 8 | puVar14[-2] << 8;
          *(ushort *)(puVar22 + -2) = puVar14[-1] >> 8 | puVar14[-1] << 8;
          *(ushort *)((long)puVar22 + -6) = *puVar14 >> 8 | *puVar14 << 8;
          *(ushort *)(puVar22 + -1) = puVar14[1] >> 8 | puVar14[1] << 8;
          *(ushort *)((long)puVar22 + -2) = puVar14[2] >> 8 | puVar14[2] << 8;
          puVar17 = (uint *)(puVar14 + 3);
          puVar14 = puVar14 + 8;
          uVar9 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
          *puVar22 = uVar9 >> 0x10 | uVar9 << 0x10;
          puVar22 = puVar22 + 4;
        } while (uVar25 != 0);
      }
    }
    else if (0 < (int)uVar11) {
      puVar15 = (undefined2 *)(*(long *)(this + 0xb8) + 6);
      puVar12 = (undefined4 *)((long)param_1 + 0x104);
      do {
        uVar25 = uVar25 - 1;
        *(undefined2 *)(puVar12 + -3) = puVar15[-3];
        *(undefined2 *)((long)puVar12 + -10) = puVar15[-2];
        *(undefined2 *)(puVar12 + -2) = puVar15[-1];
        *(undefined2 *)((long)puVar12 + -6) = *puVar15;
        *(undefined2 *)(puVar12 + -1) = puVar15[1];
        *(undefined2 *)((long)puVar12 + -2) = puVar15[2];
        puVar1 = (undefined4 *)(puVar15 + 3);
        puVar15 = puVar15 + 8;
        *puVar12 = *puVar1;
        puVar12 = puVar12 + 4;
      } while (uVar25 != 0);
    }
    lVar26 = (long)(int)uVar11 << 4;
    *plVar18 = 0;
    plVar20 = plVar18;
    puVar22 = puVar21;
    puVar17 = puVar23;
    pcVar19 = pcVar24;
  }
  *pcVar19 = '\0';
  *plVar20 = 0;
  *puVar17 = 0;
  *puVar22 = 0;
  iVar6 = *(int *)(this + 0xf0);
  puVar15 = (undefined2 *)((long)pvVar2 + lVar26);
  iVar7 = iVar6;
  if (*(void **)((long)param_1 + 0xe0) != (void *)0x0) {
    if (*(char *)((long)param_1 + 0xe8) != '\0') {
      btAlignedFreeInternal(*(void **)((long)param_1 + 0xe0));
      iVar7 = *(int *)(this + 0xf0);
    }
    *(undefined8 *)((long)param_1 + 0xe0) = 0;
  }
  *(undefined1 *)((long)param_1 + 0xe8) = 0;
  *(undefined2 **)((long)param_1 + 0xe0) = puVar15;
  *(int *)((long)param_1 + 0xd4) = iVar6;
  *(int *)((long)param_1 + 0xd8) = iVar6;
  if (param_3) {
    if (0 < iVar7) {
      lVar13 = 0;
      puVar14 = (ushort *)(*(long *)(this + 0xe0) + 8);
      puVar22 = (uint *)((long)param_1 + lVar26 + 0x108);
      do {
        lVar13 = lVar13 + 1;
        *(ushort *)(puVar22 + -4) = puVar14[-4] >> 8 | puVar14[-4] << 8;
        *(ushort *)((long)puVar22 + -0xe) = puVar14[-3] >> 8 | puVar14[-3] << 8;
        *(ushort *)(puVar22 + -3) = puVar14[-2] >> 8 | puVar14[-2] << 8;
        *(ushort *)((long)puVar22 + -10) = puVar14[-1] >> 8 | puVar14[-1] << 8;
        *(ushort *)(puVar22 + -2) = *puVar14 >> 8 | *puVar14 << 8;
        *(ushort *)((long)puVar22 + -6) = puVar14[1] >> 8 | puVar14[1] << 8;
        uVar11 = (*(uint *)(puVar14 + 2) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar14 + 2) & 0xff00ff) << 8;
        puVar22[-1] = uVar11 >> 0x10 | uVar11 << 0x10;
        puVar17 = (uint *)(puVar14 + 4);
        puVar14 = puVar14 + 0x10;
        uVar11 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
        *puVar22 = uVar11 >> 0x10 | uVar11 << 0x10;
        puVar22 = puVar22 + 8;
      } while (lVar13 < iVar7);
    }
  }
  else if (0 < iVar7) {
    lVar26 = 0;
    puVar16 = (undefined2 *)(*(long *)(this + 0xe0) + 8);
    do {
      lVar26 = lVar26 + 1;
      *puVar15 = puVar16[-4];
      puVar15[1] = puVar16[-3];
      puVar15[2] = puVar16[-2];
      puVar15[3] = puVar16[-1];
      puVar15[4] = *puVar16;
      puVar15[5] = puVar16[1];
      *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(puVar16 + 2);
      uVar8 = *(undefined4 *)(puVar16 + 4);
      *(undefined8 *)(puVar15 + 10) = 0;
      *(undefined4 *)(puVar15 + 0xe) = 0;
      puVar16 = puVar16 + 0x10;
      *(undefined4 *)(puVar15 + 8) = uVar8;
      puVar15 = puVar15 + 0x10;
    } while (lVar26 < *(int *)(this + 0xf0));
  }
  *(undefined1 *)((long)param_1 + 0xe8) = 0;
  *(undefined8 *)((long)param_1 + 0xe0) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)param_1 = 0;
  return 1;
}

