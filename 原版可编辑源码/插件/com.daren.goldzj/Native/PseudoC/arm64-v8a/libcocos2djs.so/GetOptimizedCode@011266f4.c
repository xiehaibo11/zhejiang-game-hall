
/* v8::internal::OSROptimizedCodeCache::GetOptimizedCode(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::BailoutId, v8::internal::Isolate*) */

ulong __thiscall
v8::internal::OSROptimizedCodeCache::GetOptimizedCode
          (OSROptimizedCodeCache *this,uint *param_2,int param_3,Isolate *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar7 = *(ulong *)this;
  if (1 < (int)*(uint *)(uVar7 + 3)) {
    lVar8 = 0;
    uVar5 = 0;
    lVar1 = uVar7 + 7;
    iVar6 = 4;
    do {
      uVar4 = *(uint *)((lVar8 >> 0x20) + lVar1);
      uVar2 = uVar4 & 0xfffffffd;
      if ((uVar4 & uVar4 != 3) == 0) {
        uVar2 = 0;
      }
      if (uVar2 == *param_2) {
        uVar2 = *(uint *)(lVar1 + (iVar6 + 4));
        iVar3 = (int)uVar2 >> 1;
        if ((uVar2 & 1) != 0) {
          iVar3 = 0;
        }
        if (iVar3 == param_3) {
          if ((int)uVar5 == -1) {
            return 0;
          }
          uVar2 = *(uint *)(lVar1 + iVar6);
          uVar9 = 0;
          if ((uVar2 != 3) && ((uVar2 & 1) != 0)) {
            uVar9 = 0;
            if ((uVar2 & 0xfffffffd) != 0) {
              uVar9 = (ulong)uVar2 & 0xfffffffffffffffd | uVar7 & 0xffffffff00000000;
            }
            if ((int)uVar9 != 0) {
              return uVar9;
            }
          }
          ClearEntry(this,(int)uVar5,param_4);
          return uVar9;
        }
      }
      uVar5 = uVar5 + 3;
      iVar6 = iVar6 + 0xc;
      lVar8 = lVar8 + 0xc00000000;
    } while (uVar5 < *(uint *)(uVar7 + 3) >> 1);
  }
  return 0;
}

