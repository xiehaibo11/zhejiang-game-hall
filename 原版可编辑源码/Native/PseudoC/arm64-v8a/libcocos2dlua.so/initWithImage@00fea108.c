
/* cocos2d::Texture2D::initWithImage(cocos2d::Image*, cocos2d::Texture2D::PixelFormat) */

void __thiscall cocos2d::Texture2D::initWithImage(Texture2D *this,Image *param_1,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__ptr;
  int iVar5;
  undefined4 uVar6;
  Configuration *this_00;
  undefined8 uVar7;
  ulong uVar8;
  Image *pIVar9;
  int iVar10;
  Texture2D *pTVar11;
  void *pvVar12;
  undefined8 local_98;
  void *pvStack_90;
  Size aSStack_88 [8];
  void *local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 == (Image *)0x0) {
    uVar7 = 0;
    goto LAB_00fea240;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x3c);
                    /* catch() { ... } // from try @ 00fea0e4 with catch @ 00fea150 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,(basic_string *)(param_1 + 0x158));
  pTVar11 = this + 0x68;
  if (((byte)*pTVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 00fea0bc with catch @ 00fea160 */
    *(undefined2 *)pTVar11 = 0;
  }
  else {
    **(undefined1 **)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    if (((byte)this[0x68] & 1) != 0) {
      operator_delete(*(void **)(this + 0x78));
      *(undefined8 *)(this + 0x68) = 0;
    }
  }
  *(undefined8 *)(this + 0x78) = local_70;
  *(ulong *)(this + 0x70) = CONCAT44(uStack_74,uStack_78);
  *(void **)pTVar11 = local_80;
  this_00 = (Configuration *)Configuration::getInstance();
  iVar5 = Configuration::getMaxTextureSize(this_00);
  uVar7 = 0;
                    /* catch() { ... } // from try @ 00fea21c with catch @ 00fea1b8 */
  if ((iVar5 < iVar1) || (iVar5 < iVar2)) goto LAB_00fea240;
  pvVar12 = *(void **)(param_1 + 0x28);
  Size::Size(aSStack_88,(float)iVar1,(float)iVar2);
  iVar3 = *(int *)(param_1 + 0x48);
  iVar10 = *(int *)(param_1 + 0x150);
  iVar5 = iVar3;
  if (1 < param_3 + 1U) {
    iVar5 = param_3;
  }
  if (iVar10 < 2) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = Image::isCompressed(param_1);
    if ((uVar8 & 1) != 0) {
      iVar3 = *(int *)(param_1 + 0x48);
                    /* try { // try from 00fea218 to 010ea21b has its CatchHandler @ 00fea288 */
      uStack_78 = (undefined4)uVar7;
                    /* try { // try from 00fea21c to 010ea2b3 has its CatchHandler @ 00fea1b8 */
      pIVar9 = (Image *)&local_80;
      iVar10 = 1;
      local_80 = pvVar12;
      goto LAB_00fea228;
    }
                    /* catch() { ... } // from try @ 00fea218 with catch @ 00fea288 */
    local_98 = 0;
    pvStack_90 = (void *)0x0;
    uVar6 = convertDataToFormat(pvVar12,uVar7,iVar3,iVar5,&pvStack_90,&local_98);
    __ptr = pvStack_90;
                    /* catch() { ... } // from try @ 00fea1f0 with catch @ 00fea298 */
    local_80 = pvStack_90;
    uStack_78 = (undefined4)local_98;
    initWithMipmaps(this,&local_80,1,uVar6,iVar1,iVar2);
    if ((__ptr != (void *)0x0) && (__ptr != pvVar12)) {
      free(__ptr);
    }
  }
  else {
                    /* try { // try from 00fea1f0 to 010ea1f7 has its CatchHandler @ 00fea298 */
    pIVar9 = param_1 + 0x50;
LAB_00fea228:
    initWithMipmaps(this,pIVar9,iVar10,iVar3,iVar1,iVar2);
  }
  uVar7 = 1;
  this[0x44] = *(Texture2D *)(param_1 + 0x154);
LAB_00fea240:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

