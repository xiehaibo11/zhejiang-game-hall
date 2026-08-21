
/* cocos2d::Texture2D::initWithString(char const*, cocos2d::FontDefinition const&) */

uint __thiscall
cocos2d::Texture2D::initWithString(Texture2D *this,char *param_1,FontDefinition *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  long local_100;
  void *pvStack_f8;
  Size aSStack_f0 [8];
  Device aDStack_e8 [20];
  Texture2D local_d4 [4];
  int local_d0;
  int iStack_cc;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float local_9c;
  undefined4 local_98;
  FontDefinition local_94;
  Size aSStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  void *local_68;
  int local_60;
  long local_58;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fec470 with catch @ 00fec4ac
                        */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (char *)0x0) || (sVar4 = strlen(param_1), sVar4 == 0)) {
LAB_00fec518:
    uVar3 = 0;
  }
  else {
    VolatileTextureMgr::addStringTexture(this,param_1,param_2);
    uVar3 = DAT_017928c8;
    iVar10 = *(int *)(param_2 + 0x20);
    if (iVar10 == 2) {
      iVar9 = *(int *)(param_2 + 0x1c);
      iVar10 = 0x21;
      iVar11 = 0x23;
    }
    else if (iVar10 == 1) {
      iVar9 = *(int *)(param_2 + 0x1c);
      iVar10 = 0x31;
                    /* catch() { ... } // from try @ 00fec5b8 with catch @ 00fec564 */
      iVar11 = 0x33;
    }
    else {
                    /* try { // try from 00fec504 to 010ec507 has its CatchHandler @ 00fec548 */
      if (iVar10 != 0) goto LAB_00fec518;
      iVar9 = *(int *)(param_2 + 0x1c);
      iVar10 = 0x11;
      iVar11 = 0x13;
    }
    if (iVar9 != 0) {
      iVar10 = iVar10 + 1;
    }
    if (iVar9 != 1) {
      iVar11 = iVar10;
    }
    local_100 = 0;
    pvStack_f8 = (void *)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_c8,(basic_string *)param_2);
    local_b0 = *(undefined8 *)(param_2 + 0x18);
    uStack_a8 = (undefined4)*(undefined8 *)(param_2 + 0x20);
    fStack_a4 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
                    /* try { // try from 00fec5a4 to 010ec5b7 has its CatchHandler @ 00fec674 */
    Size::Size((Size *)&fStack_a0,(Size *)(param_2 + 0x28));
    local_98 = *(undefined4 *)(param_2 + 0x30);
                    /* try { // try from 00fec5b8 to 010ec6cb has its CatchHandler @ 00fec564 */
    local_94 = param_2[0x34];
    Size::Size(aSStack_90,(Size *)(param_2 + 0x38));
    local_88 = *(undefined8 *)(param_2 + 0x40);
    local_70 = *(undefined4 *)(param_2 + 0x58);
    uStack_78 = *(undefined8 *)(param_2 + 0x50);
    local_80 = *(undefined8 *)(param_2 + 0x48);
    lVar5 = Director::getInstance();
    fVar12 = *(float *)(lVar5 + 0x1a0);
    fStack_a4 = fStack_a4 * fVar12;
    fStack_a0 = fStack_a0 * fVar12;
    local_9c = fVar12 * local_9c;
    uStack_78 = CONCAT44(uStack_78._4_4_,fVar12 * (float)uStack_78);
    local_b0 = CONCAT44(local_b0._4_4_,(int)(fVar12 * (float)(int)local_b0));
    local_94 = (FontDefinition)0x0;
    Device::getTextureDataForText(aDStack_e8,param_1,local_c8,iVar11,&iStack_cc,&local_d0,local_d4);
    uVar6 = Data::isNull((Data *)aDStack_e8);
    if ((uVar6 & 1) == 0) {
      Size::Size(aSStack_f0,(float)iStack_cc,(float)local_d0);
      pvVar7 = (void *)Data::getBytes((Data *)aDStack_e8);
                    /* catch() { ... } // from try @ 00fec5a4 with catch @ 00fec674 */
      local_60 = iStack_cc * local_d0 * 4;
      if ((uVar3 | 2) == 2) {
        uVar2 = 2;
        local_100 = (long)local_60;
        pvStack_f8 = pvVar7;
      }
      else {
        uVar2 = convertRGBA8888ToFormat(pvVar7,(long)local_60,uVar3,&pvStack_f8,&local_100);
        local_60 = (int)local_100;
      }
      pvVar7 = pvStack_f8;
      local_68 = pvStack_f8;
      uVar3 = initWithMipmaps(this,&local_68,1,uVar2,iStack_cc,local_d0);
      if ((pvVar7 != (void *)0x0) &&
         (pvVar8 = (void *)Data::getBytes((Data *)aDStack_e8), pvVar7 != pvVar8)) {
        free(pvVar7);
      }
      this[0x44] = local_d4[0];
    }
    else {
      uVar3 = 0;
    }
    Data::~Data((Data *)aDStack_e8);
    if (((byte)local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fec504 with catch @ 00fec548
                        */
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

