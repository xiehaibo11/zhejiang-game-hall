
/* cocos2d::PUMaterialCache::addMaterial(cocos2d::PUMaterial*) */

void __thiscall cocos2d::PUMaterialCache::addMaterial(PUMaterialCache *this,PUMaterial *param_1)

{
  size_t __n;
  size_t sVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  PUMaterial PVar5;
  long lVar6;
  int iVar7;
  PUMaterial *__s2;
  ulong uVar8;
  PUMaterial *pPVar9;
  long lVar10;
  void *__s1;
  long *plVar11;
  PUMaterial *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00e402e4 to 00f402eb has its CatchHandler @ 00e40398 */
                    /* try { // try from 00e402ec to 00f4032b has its CatchHandler @ 00e401a8 */
  plVar11 = *(long **)this;
  plVar3 = *(long **)(this + 8);
  local_60 = param_1;
  if (plVar11 != plVar3) {
    PVar5 = param_1[0x40];
    __n = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x48);
    }
    do {
      lVar10 = *plVar11;
      bVar4 = *(byte *)(lVar10 + 0x40);
                    /* try { // try from 00e4032c to 00f4034b has its CatchHandler @ 00e403b8 */
      uVar8 = (ulong)(bVar4 >> 1);
      sVar1 = uVar8;
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(lVar10 + 0x48);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar10 + 0x50);
                    /* try { // try from 00e4034c to 00f403cb has its CatchHandler @ 00e401a8 */
        if ((bVar4 & 1) == 0) {
          __s1 = (void *)(lVar10 + 0x41);
        }
        __s2 = param_1 + 0x41;
        if (((byte)PVar5 & 1) != 0) {
          __s2 = *(PUMaterial **)(param_1 + 0x50);
        }
        if ((bVar4 & 1) == 0) {
          if (__n == 0) goto LAB_00e403cc;
          pPVar9 = (PUMaterial *)(lVar10 + 0x41);
          while (*pPVar9 == *__s2) {
            uVar8 = uVar8 - 1;
            pPVar9 = pPVar9 + 1;
            __s2 = __s2 + 1;
            if (uVar8 == 0) goto LAB_00e403cc;
          }
        }
        else {
                    /* catch() { ... } // from try @ 00e402e4 with catch @ 00e40398 */
          if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) goto LAB_00e403cc;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
  }
  Ref::retain((Ref *)param_1);
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 == *(undefined8 **)(this + 0x10)) {
    std::__ndk1::vector<cocos2d::PUMaterial*,std::__ndk1::allocator<cocos2d::PUMaterial*>>::
    __push_back_slow_path<cocos2d::PUMaterial*const&>
              ((vector<cocos2d::PUMaterial*,std::__ndk1::allocator<cocos2d::PUMaterial*>> *)this,
               &local_60);
  }
  else {
    *puVar2 = param_1;
                    /* catch() { ... } // from try @ 00e4032c with catch @ 00e403b8 */
    *(undefined8 **)(this + 8) = puVar2 + 1;
  }
LAB_00e403cc:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

