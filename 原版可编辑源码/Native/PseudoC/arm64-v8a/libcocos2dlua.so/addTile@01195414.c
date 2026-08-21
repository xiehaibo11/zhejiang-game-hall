
/* dtTileCache::addTile(unsigned char*, int, unsigned char, unsigned int*) */

undefined4 __thiscall
dtTileCache::addTile(dtTileCache *this,uchar *param_1,int param_2,uchar param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)param_1 != 0x44544c52) {
    return 0x80000001;
  }
  uVar2 = 0x80000002;
  if (*(int *)(param_1 + 4) == 1) {
    lVar3 = *(long *)(this + 8);
    uVar1 = *(uint *)(this + 4) &
            *(int *)(param_1 + 8) * -0x72594cbd + *(int *)(param_1 + 0xc) * -0x27e9c7bf;
    lVar5 = *(long *)(lVar3 + (long)(int)uVar1 * 8);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 8);
      while( true ) {
        if ((((lVar6 != 0) && (*(int *)(lVar6 + 8) == *(int *)(param_1 + 8))) &&
            (*(int *)(lVar6 + 0xc) == *(int *)(param_1 + 0xc))) &&
           (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x10))) {
          return 0x80000000;
        }
        lVar5 = *(long *)(lVar5 + 0x30);
        if (lVar5 == 0) break;
        lVar6 = *(long *)(lVar5 + 8);
      }
    }
    piVar4 = *(int **)(this + 0x10);
    if (piVar4 == (int *)0x0) {
      return 0x80000004;
    }
    lVar5 = (long)(int)uVar1 * 8;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(piVar4 + 0xc);
    piVar4[0xc] = 0;
    piVar4[0xd] = 0;
    *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(lVar3 + lVar5);
    *(int **)(lVar3 + lVar5) = piVar4;
    *(uchar **)(piVar4 + 8) = param_1;
    *(uchar **)(piVar4 + 2) = param_1;
    *(uchar **)(piVar4 + 4) = param_1 + 0x38;
    piVar4[6] = param_2 + -0x38;
    piVar4[10] = param_2;
    piVar4[0xb] = (uint)param_3;
    if (param_4 != (uint *)0x0) {
      *param_4 = *piVar4 << (ulong)(*(uint *)(this + 0x24) & 0x1f) |
                 (int)((ulong)((long)piVar4 - *(long *)(this + 0x18)) >> 3) * -0x49249249;
    }
    uVar2 = 0x40000000;
  }
  return uVar2;
}

