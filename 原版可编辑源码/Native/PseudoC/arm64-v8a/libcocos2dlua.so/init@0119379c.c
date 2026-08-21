
/* dtPathCorridor::init(int) */

bool __thiscall dtPathCorridor::init(dtPathCorridor *this,int param_1)

{
  long lVar1;
  
  lVar1 = dtAlloc(param_1 << 2,0);
  *(long *)(this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(undefined4 *)(this + 0x20) = 0;
    *(int *)(this + 0x24) = param_1;
  }
  return lVar1 != 0;
}

