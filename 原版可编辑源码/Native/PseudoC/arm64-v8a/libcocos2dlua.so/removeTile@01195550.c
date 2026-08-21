
/* dtTileCache::removeTile(unsigned int, unsigned char**, int*) */

undefined8 __thiscall
dtTileCache::removeTile(dtTileCache *this,uint param_1,uchar **param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar3 = 0x80000008;
  if (param_1 != 0) {
    uVar1 = param_1 & (-1 << (ulong)(*(uint *)(this + 0x24) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar1 < *(int *)(this + 0x54)) {
      lVar8 = *(long *)(this + 0x18);
      puVar7 = (uint *)(lVar8 + (ulong)uVar1 * 0x38);
      if (*puVar7 ==
          (param_1 >> (ulong)(*(uint *)(this + 0x24) & 0x1f) &
          (-1 << (ulong)(*(uint *)(this + 0x20) & 0x1f) ^ 0xffffffffU))) {
        uVar9 = (ulong)uVar1;
        lVar10 = lVar8 + uVar9 * 0x38;
        lVar4 = *(long *)(lVar10 + 8);
        uVar1 = *(int *)(lVar4 + 8) * -0x72594cbd + *(int *)(lVar4 + 0xc) * -0x27e9c7bf &
                *(uint *)(this + 4);
        puVar5 = *(uint **)(*(long *)(this + 8) + (long)(int)uVar1 * 8);
        if (puVar5 != (uint *)0x0) {
          if (puVar5 == puVar7) {
            puVar6 = (uint *)0x0;
          }
          else {
            do {
              puVar6 = puVar5;
              puVar5 = *(uint **)(puVar6 + 0xc);
              if (puVar5 == (uint *)0x0) goto LAB_0119564c;
            } while (puVar5 != puVar7);
          }
          uVar3 = *(undefined8 *)(lVar8 + uVar9 * 0x38 + 0x30);
          if (puVar6 == (uint *)0x0) {
            *(undefined8 *)(*(long *)(this + 8) + (long)(int)uVar1 * 8) = uVar3;
          }
          else {
            *(undefined8 *)(puVar6 + 0xc) = uVar3;
          }
        }
LAB_0119564c:
        if ((*(byte *)(lVar8 + uVar9 * 0x38 + 0x2c) & 1) == 0) {
          if (param_2 != (uchar **)0x0) {
            *param_2 = *(uchar **)(lVar8 + uVar9 * 0x38 + 0x20);
          }
          if (param_3 != (int *)0x0) {
            *param_3 = *(int *)(lVar8 + uVar9 * 0x38 + 0x28);
          }
        }
        else {
          lVar4 = lVar8 + uVar9 * 0x38;
          dtFree(*(void **)(lVar4 + 0x20));
          *(undefined8 *)(lVar4 + 0x20) = 0;
          *(undefined4 *)(lVar4 + 0x28) = 0;
          if (param_2 != (uchar **)0x0) {
            *param_2 = (uchar *)0x0;
          }
          if (param_3 != (int *)0x0) {
            *param_3 = 0;
          }
        }
        lVar8 = lVar8 + uVar9 * 0x38;
        *(long *)(lVar10 + 8) = 0;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        uVar3 = 0x40000000;
        uVar2 = -1 << (ulong)(*(uint *)(this + 0x20) & 0x1f);
        uVar1 = *puVar7 + 1 & (uVar2 ^ 0xffffffff);
        if ((*puVar7 + 1 & (uVar2 ^ 0xffffffff)) == 0) {
          uVar1 = 1;
        }
        *puVar7 = uVar1;
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(this + 0x10);
        *(uint **)(this + 0x10) = puVar7;
      }
    }
  }
  return uVar3;
}

