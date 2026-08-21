
/* cocos2d::renderer::BaseRenderer::setProperty(cocos2d::renderer::Technique::Parameter const*) */

void __thiscall cocos2d::renderer::BaseRenderer::setProperty(BaseRenderer *this,Parameter *param_1)

{
  Parameter PVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  Parameter *pPVar5;
  int *piVar6;
  long lVar7;
  Parameter *pPVar8;
  ulong uVar9;
  DeviceGraphics *pDVar10;
  Texture *pTVar11;
  uint uVar12;
  int local_b8;
  undefined4 uStack_b4;
  void *local_b0;
  int *local_a0;
  int *piStack_98;
  int *local_90;
  Parameter aPStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  PVar1 = param_1[0x31];
  if (PVar1 == (Parameter)0x0) {
    __android_log_print(5,"renderer"," (209): Failed to set technique property, type unknown\n");
  }
  else {
    lVar7 = 0x38;
    uVar9 = *(ulong *)(param_1 + 0x28);
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      lVar7 = 0;
    }
    if (*(long *)(param_1 + lVar7) == 0) {
      pPVar5 = (Parameter *)&local_a0;
      Technique::Parameter::Parameter((Parameter *)&local_a0,param_1 + 0x10,PVar1);
      if (PVar1 == (Parameter)0x1d) {
        Technique::Parameter::setTexture((Parameter *)&local_a0,*(Texture **)(this + 0x28));
      }
      Technique::Parameter::~Parameter((Parameter *)&local_a0);
      pPVar8 = aPStack_68;
      piVar6 = piStack_98;
    }
    else {
      pPVar8 = param_1 + 0x38;
      piVar6 = *(int **)(param_1 + 8);
      pPVar5 = param_1;
    }
    if (piVar6 != (int *)0x0) {
      pPVar8 = pPVar5;
    }
    pTVar11 = *(Texture **)pPVar8;
    if (pTVar11 == (Texture *)0x0) {
      if (((byte)param_1[0x10] & 1) == 0) {
        pPVar5 = param_1 + 0x11;
                    /* catch() { ... } // from try @ 009bbd98 with catch @ 009bc064 */
      }
      else {
        pPVar5 = *(Parameter **)(param_1 + 0x20);
      }
                    /* try { // try from 009bc0bc to 00abc113 has its CatchHandler @ 009bc0bc
                       catch() { ... } // from try @ 009bc0bc with catch @ 009bc0bc
                       catch() { ... } // from try @ 009bc524 with catch @ 009bc0bc */
      __android_log_print(5,"renderer",
                          " (225): Failed to set technique property %s, value not found\n",pPVar5);
    }
    else if (((byte)PVar1 | 2) == 0x1f) {
      if (pPVar5[0x30] != (Parameter)0x0) {
        if (pPVar5[0x30] == (Parameter)0x1) {
          pDVar10 = *(DeviceGraphics **)(this + 0x10);
          iVar4 = *(int *)(this + 0xc);
          if (*(int *)(pDVar10 + 0x3c) <= iVar4) {
            __android_log_print(5,"renderer",
                                " (376): Trying to use %d texture uints while this GPU only supports %d\n"
                               );
            iVar4 = *(int *)(this + 0xc);
          }
                    /* try { // try from 009bc044 to 00abc0bb has its CatchHandler @ 009bbd08 */
                    /* catch() { ... } // from try @ 009bbd8c with catch @ 009bc04c */
          *(int *)(this + 0xc) = iVar4 + 1;
                    /* catch() { ... } // from try @ 009bbd80 with catch @ 009bc050 */
          DeviceGraphics::setTexture(pDVar10,uVar9,pTVar11,iVar4);
                    /* catch() { ... } // from try @ 009bbd60 with catch @ 009bc054 */
        }
        else {
          local_a0 = (int *)0x0;
          piStack_98 = (int *)0x0;
          local_90 = (int *)0x0;
          piStack_98 = operator_new(0x28);
          uVar12 = 0;
                    /* try { // try from 009bc114 to 00abc12b has its CatchHandler @ 009bc534 */
          local_a0 = piStack_98;
          local_90 = piStack_98 + 10;
          do {
            iVar4 = *(int *)(this + 0xc);
            if (*(int *)(*(long *)(this + 0x10) + 0x3c) <= iVar4) {
                    /* try { // try from 009bc134 to 00abc13f has its CatchHandler @ 009bc530 */
                    /* try { // try from 009bc140 to 00abc14b has its CatchHandler @ 009bc52c */
              __android_log_print(5,"renderer",
                                  " (376): Trying to use %d texture uints while this GPU only supports %d\n"
                                 );
              iVar4 = *(int *)(this + 0xc);
            }
                    /* try { // try from 009bc14c to 00abc523 has its CatchHandler @ 009bc544 */
            *(int *)(this + 0xc) = iVar4 + 1;
            local_b8 = iVar4;
            if (piStack_98 < local_90) {
              *piStack_98 = iVar4;
              piStack_98 = piStack_98 + 1;
            }
            else {
              std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                        ((vector<int,std::__ndk1::allocator<int>> *)&local_a0,&local_b8);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < (byte)pPVar5[0x30]);
          pDVar10 = *(DeviceGraphics **)(this + 0x10);
          Technique::Parameter::getTextureArray();
          DeviceGraphics::setTextureArray(pDVar10,uVar9,(vector *)&local_b8,(vector *)&local_a0);
          pvVar3 = (void *)CONCAT44(uStack_b4,local_b8);
          if (pvVar3 != (void *)0x0) {
            local_b0 = pvVar3;
            operator_delete(pvVar3);
          }
          if (local_a0 != (int *)0x0) {
            piStack_98 = local_a0;
            operator_delete(local_a0);
          }
        }
      }
    }
    else if (((byte)PVar1 < 9) && ((1 << (ulong)((byte)PVar1 & 0x1f) & 0x160U) != 0)) {
      DeviceGraphics::setUniformiv
                (*(DeviceGraphics **)(this + 0x10),uVar9,(ulong)(*(ushort *)(pPVar5 + 0x40) >> 2),
                 (int *)pTVar11,(ulong)(byte)pPVar5[0x30]);
    }
    else {
      DeviceGraphics::setUniformfv
                (*(DeviceGraphics **)(this + 0x10),uVar9,(ulong)(*(ushort *)(pPVar5 + 0x40) >> 2),
                 (float *)pTVar11,(ulong)(byte)pPVar5[0x30]);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

