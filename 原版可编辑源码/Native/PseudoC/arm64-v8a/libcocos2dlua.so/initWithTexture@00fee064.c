
/* cocos2d::TextureAtlas::initWithTexture(cocos2d::Texture2D*, long) */

void __thiscall
cocos2d::TextureAtlas::initWithTexture(TextureAtlas *this,Texture2D *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  void *__s_00;
  undefined8 uVar4;
  long lVar5;
  Configuration *this_00;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  TextureAtlas *local_78;
  undefined ***local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 0x40) = 0;
  *(long *)(this + 0x48) = param_2;
  *(Texture2D **)(this + 0x50) = param_1;
  if (param_1 != (Texture2D *)0x0) {
    Ref::retain((Ref *)param_1);
    param_2 = *(long *)(this + 0x48);
  }
  __s = malloc(param_2 * 0x60);
  *(void **)(this + 0x58) = __s;
  __s_00 = malloc(param_2 * 0xc);
  *(void **)(this + 0x28) = __s_00;
  if ((0 < param_2) && (__s == (void *)0x0 || __s_00 == (void *)0x0)) {
    if (__s != (void *)0x0) {
      free(__s);
      __s_00 = *(void **)(this + 0x28);
      *(undefined8 *)(this + 0x58) = 0;
    }
    if (__s_00 != (void *)0x0) {
      free(__s_00);
      *(undefined8 *)(this + 0x28) = 0;
    }
    uVar4 = 0;
    if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x50));
      uVar4 = 0;
      *(undefined8 *)(this + 0x50) = 0;
    }
    goto LAB_00fee284;
  }
  memset(__s,0,param_2 * 0x60);
  memset(__s_00,0,param_2 * 0xc);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"event_renderer_recreated");
  local_90 = &PTR_FUN_017244b0;
  uStack_80 = 0;
  local_88 = listenRendererRecreated;
  local_78 = this;
  local_70 = &local_90;
  uVar4 = EventListenerCustom::create((basic_string *)local_a8,(function *)&local_90);
  *(undefined8 *)(this + 0x60) = uVar4;
  if (&local_90 == local_70) {
    pcVar7 = (code *)(*local_70)[4];
LAB_00fee1c4:
    (*pcVar7)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_70)[5];
    goto LAB_00fee1c4;
  }
  if (((byte)local_a8[0] & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fee224 with catch @ 00fee1d0
                        */
    operator_delete(local_98);
  }
  lVar5 = Director::getInstance();
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar5 + 0xb0),*(EventListener **)(this + 0x60),-1);
  lVar5 = *(long *)(this + 0x48);
  if (0 < lVar5) {
    lVar10 = *(long *)(this + 0x28);
    lVar9 = 0;
    uVar11 = 5;
    do {
      iVar8 = (int)lVar9;
      *(short *)(lVar10 + (ulong)(uVar11 - 5) * 2) = (short)(iVar8 << 2);
                    /* try { // try from 00fee21c to 010ee223 has its CatchHandler @ 00fee398 */
      uVar1 = (ushort)(iVar8 << 2) | 1;
                    /* try { // try from 00fee224 to 010ee39b has its CatchHandler @ 00fee1d0 */
      *(ushort *)(lVar10 + (ulong)(uVar11 - 4) * 2) = uVar1;
      uVar2 = (ushort)(iVar8 << 2) | 2;
      *(ushort *)(lVar10 + (ulong)(uVar11 - 3) * 2) = uVar2;
      *(ushort *)(lVar10 + (ulong)(uVar11 - 2) * 2) = (ushort)(iVar8 << 2) | 3;
      lVar9 = lVar9 + 1;
      *(ushort *)(lVar10 + (ulong)(uVar11 - 1) * 2) = uVar2;
      *(ushort *)(lVar10 + (ulong)uVar11 * 2) = uVar1;
      uVar11 = uVar11 + 6;
    } while (lVar5 != lVar9);
  }
  this_00 = (Configuration *)Configuration::getInstance();
  uVar6 = Configuration::supportsShareableVAO(this_00);
  if ((uVar6 & 1) == 0) {
    setupVBO(this);
  }
  else {
    setupVBOandVAO(this);
  }
  uVar4 = 1;
  this[0x3c] = (TextureAtlas)0x1;
LAB_00fee284:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

