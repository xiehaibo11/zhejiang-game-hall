
/* cocos2d::RenderTexture::saveToFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Image::Format,
   bool, std::__ndk1::function<void (cocos2d::RenderTexture*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)>) */

undefined8 __thiscall
cocos2d::RenderTexture::saveToFile
          (RenderTexture *this,byte *param_1,undefined8 param_3,byte param_4,long *param_5)

{
  ulong uVar1;
  void *__src;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  undefined5 uVar5;
  byte *pbVar6;
  void *__dest;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  undefined1 local_a5;
  undefined3 uStack_a4;
  code *local_a0;
  undefined8 uStack_98;
  RenderTexture *local_90;
  undefined8 local_88;
  code **local_80;
  void *local_78;
  byte local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar8 = (long *)param_5[4];
  if (plVar8 == (long *)0x0) {
    local_80 = (code **)0x0;
  }
  else if (param_5 == plVar8) {
    local_80 = &local_a0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_a0);
  }
  else {
    local_80 = (code **)(**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_00f3c3c0(&local_a0,this + 0x590);
  if (&local_a0 == local_80) {
                    /* try { // try from 00f3b768 to 0103b76f has its CatchHandler @ 00f3bc48 */
    pcVar9 = *(code **)(*local_80 + 0x20);
LAB_00f3b76c:
    (*pcVar9)();
  }
  else if (local_80 != (code **)0x0) {
    pcVar9 = *(code **)(*local_80 + 0x28);
    goto LAB_00f3b76c;
  }
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0xa0))(&local_a0);
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
    uVar1 = (ulong)(*param_1 >> 1);
  }
  pbVar6 = (byte *)std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)&local_a0,(char *)pbVar6,uVar1);
  uVar2 = *(undefined4 *)(pbVar6 + 1);
  bVar3 = *pbVar6;
  uVar5 = *(undefined5 *)pbVar6;
  uStack_a4 = (undefined3)((uint)*(undefined4 *)(pbVar6 + 4) >> 8);
  uVar1 = *(ulong *)(pbVar6 + 8);
  __src = *(void **)(pbVar6 + 0x10);
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0;
  pbVar6[8] = 0;
  pbVar6[9] = 0;
  pbVar6[10] = 0;
  pbVar6[0xb] = 0;
  pbVar6[0xc] = 0;
  pbVar6[0xd] = 0;
  pbVar6[0xe] = 0;
  pbVar6[0xf] = 0;
  pbVar6[0x10] = 0;
  pbVar6[0x11] = 0;
  pbVar6[0x12] = 0;
  pbVar6[0x13] = 0;
  pbVar6[0x14] = 0;
  pbVar6[0x15] = 0;
  pbVar6[0x16] = 0;
  pbVar6[0x17] = 0;
  if (((byte)local_a0._0_1_ & 1) != 0) {
    operator_delete(local_90);
  }
  CustomCommand::init((CustomCommand *)(this + 0x540),*(float *)(this + 0x170));
  local_88 = 0;
  local_80 = (code **)0x0;
  local_78 = (void *)0x0;
  uStack_98 = 0;
  local_a0 = onSaveToFile;
  local_90 = this;
  if ((bVar3 & 1) == 0) {
    local_a5 = (undefined1)((uint)uVar2 >> 0x18);
    local_88 = CONCAT44(CONCAT31(uStack_a4,local_a5),(int)uVar5);
    local_80 = (code **)uVar1;
    local_78 = __src;
    goto LAB_00f3b884;
  }
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar1 < 0x17) {
    __dest = (void *)((long)&local_88 + 1);
    local_88 = (ulong)(byte)((int)uVar1 << 1);
    if (uVar1 != 0) goto LAB_00f3b870;
  }
  else {
    uVar10 = uVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar10);
    local_88 = uVar10 | 1;
    local_80 = (code **)uVar1;
    local_78 = __dest;
LAB_00f3b870:
    memcpy(__dest,__src,uVar1);
  }
  *(undefined1 *)((long)__dest + uVar1) = 0;
LAB_00f3b884:
  local_70 = param_4 & 1;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x560),(__bind *)&local_a0);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  lVar7 = Director::getInstance();
  Renderer::addCommand(*(Renderer **)(lVar7 + 0x1b0),(RenderCommand *)(this + 0x540));
  if ((bVar3 & 1) != 0) {
    operator_delete(__src);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

