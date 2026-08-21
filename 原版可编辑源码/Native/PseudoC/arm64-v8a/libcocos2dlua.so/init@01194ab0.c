
/* dtProximityGrid::init(int, float) */

undefined8 __thiscall dtProximityGrid::init(dtProximityGrid *this,int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_1 - 1U | param_1 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  iVar1 = (uVar2 | uVar2 >> 0x10) + 1;
  *(float *)this = param_2;
  *(float *)(this + 4) = 1.0 / param_2;
  *(int *)(this + 0x20) = iVar1;
  lVar3 = dtAlloc(iVar1 * 2,0);
  *(long *)(this + 0x18) = lVar3;
  uVar4 = 0;
  if (lVar3 != 0) {
    *(undefined4 *)(this + 0x10) = 0;
    *(int *)(this + 0x14) = param_1;
    lVar3 = dtAlloc(param_1 << 3,0);
    *(long *)(this + 8) = lVar3;
    uVar4 = 0;
    if (lVar3 != 0) {
      memset(*(void **)(this + 0x18),0xff,(long)*(int *)(this + 0x20) << 1);
      uVar4 = 1;
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x2c) = 0xffff0001ffff0001;
      *(undefined8 *)(this + 0x24) = 0xffff0000ffff;
    }
  }
  return uVar4;
}

