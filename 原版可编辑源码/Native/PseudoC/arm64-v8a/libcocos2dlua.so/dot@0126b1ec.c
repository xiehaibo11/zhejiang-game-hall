
/* btConvexHullInternal::Vertex::dot(btConvexHullInternal::Point64 const&) const */

void btConvexHullInternal::Vertex::dot(Point64 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ulong *in_x1;
  long *in_x8;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  if (-1 < *(int *)(param_1 + 0x74)) {
    lVar5 = in_x1[1] * (long)(int)*(undefined8 *)(param_1 + 0x6c) +
            *in_x1 * (long)*(int *)(param_1 + 0x68) +
            in_x1[2] * (long)(int)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20);
    if (lVar5 < 1) {
      if (lVar5 < 0) {
        lVar5 = -lVar5;
        *(undefined4 *)(in_x8 + 4) = 0xffffffff;
        lVar7 = lVar5 >> 0x3f;
      }
      else {
        lVar5 = 0;
        lVar7 = 0;
        *(undefined4 *)(in_x8 + 4) = 0;
      }
    }
    else {
      lVar7 = 0;
      *(undefined4 *)(in_x8 + 4) = 1;
    }
    *in_x8 = lVar5;
    in_x8[1] = lVar7;
    *(undefined1 *)((long)in_x8 + 0x24) = 1;
    in_x8[3] = 0;
    in_x8[2] = 1;
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(ulong *)(param_1 + 0x30);
  uVar4 = *in_x1;
  uVar14 = uVar12;
  if ((long)uVar12 < 0) {
    bVar3 = uVar6 == 0;
    uVar6 = -uVar6;
    uVar14 = ~uVar12;
    if (bVar3) {
      uVar14 = ~uVar12 + 1;
    }
  }
  uVar11 = -uVar4;
  if ((long)uVar4 >= 0) {
    uVar11 = uVar4;
  }
  uVar10 = (uVar6 & 0xffffffff) * (uVar11 & 0xffffffff);
  uVar13 = (uVar6 & 0xffffffff) * (uVar11 >> 0x20);
  uVar16 = (uVar6 >> 0x20) * (uVar11 & 0xffffffff);
  uVar2 = (uVar13 & 0xffffffff) + (uVar16 & 0xffffffff);
  uVar1 = uVar2 << 0x20;
  uVar8 = uVar10 + uVar1;
  uVar6 = uVar14 * uVar11 + (uVar6 >> 0x20) * (uVar11 >> 0x20) + (uVar13 >> 0x20) + (uVar16 >> 0x20)
          + (uVar2 >> 0x20);
  if (CARRY8(uVar10,uVar1)) {
    uVar6 = uVar6 + 1;
  }
  if ((long)uVar4 < 0 != (long)uVar12 < 0) {
    bVar3 = uVar8 == 0;
    uVar6 = ~uVar6;
    uVar8 = -uVar8;
    if (bVar3) {
      uVar6 = uVar6 + 1;
    }
  }
  uVar12 = *(ulong *)(param_1 + 0x38);
  uVar14 = *(ulong *)(param_1 + 0x40);
  uVar11 = in_x1[1];
  uVar4 = uVar14;
  if ((long)uVar14 < 0) {
    bVar3 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar4 = ~uVar14;
    if (bVar3) {
      uVar4 = ~uVar14 + 1;
    }
  }
  uVar1 = -uVar11;
  if ((long)uVar11 >= 0) {
    uVar1 = uVar11;
  }
  uVar16 = (uVar12 & 0xffffffff) * (uVar1 & 0xffffffff);
  uVar15 = (uVar12 & 0xffffffff) * (uVar1 >> 0x20);
  uVar17 = (uVar12 >> 0x20) * (uVar1 & 0xffffffff);
  uVar10 = (uVar15 & 0xffffffff) + (uVar17 & 0xffffffff);
  uVar2 = uVar10 << 0x20;
  uVar13 = uVar16 + uVar2;
  uVar12 = uVar4 * uVar1 + (uVar12 >> 0x20) * (uVar1 >> 0x20) + (uVar15 >> 0x20) + (uVar17 >> 0x20)
           + (uVar10 >> 0x20);
  if (CARRY8(uVar16,uVar2)) {
    uVar12 = uVar12 + 1;
  }
  if ((long)uVar11 < 0 != (long)uVar14 < 0) {
    bVar3 = uVar13 == 0;
    uVar12 = ~uVar12;
    uVar13 = -uVar13;
    if (bVar3) {
      uVar12 = uVar12 + 1;
    }
  }
  uVar14 = *(ulong *)(param_1 + 0x48);
  uVar4 = *(ulong *)(param_1 + 0x50);
  uVar11 = in_x1[2];
  lVar5 = uVar12 + uVar6;
  if (CARRY8(uVar13,uVar8)) {
    lVar5 = lVar5 + 1;
  }
  uVar6 = uVar4;
  if ((long)uVar4 < 0) {
    bVar3 = uVar14 == 0;
    uVar14 = -uVar14;
    uVar6 = ~uVar4;
    if (bVar3) {
      uVar6 = ~uVar4 + 1;
    }
  }
  uVar12 = -uVar11;
  if ((long)uVar11 >= 0) {
    uVar12 = uVar11;
  }
  uVar16 = (uVar14 & 0xffffffff) * (uVar12 & 0xffffffff);
  uVar15 = (uVar14 & 0xffffffff) * (uVar12 >> 0x20);
  uVar17 = (uVar14 >> 0x20) * (uVar12 & 0xffffffff);
  uVar2 = (uVar15 & 0xffffffff) + (uVar17 & 0xffffffff);
  uVar1 = uVar2 << 0x20;
  uVar10 = uVar16 + uVar1;
  uVar6 = uVar6 * uVar12 + (uVar14 >> 0x20) * (uVar12 >> 0x20) + (uVar15 >> 0x20) + (uVar17 >> 0x20)
          + (uVar2 >> 0x20);
  if (CARRY8(uVar16,uVar1)) {
    uVar6 = uVar6 + 1;
  }
  if ((long)uVar11 < 0 != (long)uVar4 < 0) {
    bVar3 = uVar10 == 0;
    uVar6 = ~uVar6;
    uVar10 = -uVar10;
    if (bVar3) {
      uVar6 = uVar6 + 1;
    }
  }
  lVar7 = uVar10 + uVar13 + uVar8;
  uVar6 = lVar5 + uVar6;
  if (CARRY8(uVar10,uVar13 + uVar8)) {
    uVar6 = uVar6 + 1;
  }
  if ((long)uVar6 < 0) {
    bVar3 = lVar7 == 0;
    uVar6 = ~uVar6;
    uVar9 = 0xffffffff;
    lVar7 = -lVar7;
    if (bVar3) {
      uVar6 = uVar6 + 1;
    }
  }
  else {
    uVar9 = (uint)(uVar6 != 0 || lVar7 != 0);
  }
  *(uint *)(in_x8 + 4) = uVar9;
  *in_x8 = lVar7;
  in_x8[1] = uVar6;
  uVar6 = *(ulong *)(param_1 + 0x60);
  if ((long)uVar6 < 0) {
    *(uint *)(in_x8 + 4) = -uVar9;
    lVar5 = *(long *)(param_1 + 0x58);
    uVar6 = ~uVar6;
    *(undefined1 *)((long)in_x8 + 0x24) = 0;
    if (lVar5 == 0) {
      uVar6 = uVar6 + 1;
    }
    in_x8[2] = -lVar5;
    in_x8[3] = uVar6;
    return;
  }
  lVar5 = *(long *)(param_1 + 0x58);
  in_x8[3] = *(long *)(param_1 + 0x60);
  in_x8[2] = lVar5;
  *(undefined1 *)((long)in_x8 + 0x24) = 0;
  return;
}

