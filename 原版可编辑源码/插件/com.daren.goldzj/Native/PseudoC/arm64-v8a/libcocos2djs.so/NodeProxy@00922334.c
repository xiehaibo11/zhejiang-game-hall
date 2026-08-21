
/* cocos2d::renderer::NodeProxy::NodeProxy(unsigned long, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::renderer::NodeProxy::NodeProxy
          (NodeProxy *this,ulong param_1,ulong param_2,basic_string *param_3,basic_string *param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  NodeMemPool *this_00;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_02;
  undefined **local_a0;
  code *local_98;
  long *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__NodeProxy_01c694b8;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x40) = 0xff000101;
  this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x48);
  *(undefined8 *)this_01 = 0;
  this_02 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x60);
  *(undefined8 *)this_02 = 0;
  this[0x49] = (NodeProxy)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x61] = (NodeProxy)0x0;
  *(undefined8 *)(this + 0x10c) = 0;
  *(undefined8 *)(this + 0x104) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  local_a0 = &PTR_FUN_01c694f0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  local_98 = render;
  local_80 = (long *)&local_a0;
  FUN_00923dac(&local_a0,this + 0x10);
  if (&local_a0 == (undefined ***)local_80) {
    pcVar6 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00922444;
    pcVar6 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar6)();
LAB_00922444:
  if (this_01 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_01,(char *)pbVar2,uVar1);
  }
  *(ulong *)(this + 0xd0) = param_1;
  *(ulong *)(this + 0xd8) = param_2;
  if (this_02 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar2 = *(basic_string **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar1 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_02,(char *)pbVar2,uVar1);
  }
  this_00 = NodeMemPool::_instance;
  lVar4 = NodeMemPool::getUnit(NodeMemPool::_instance,param_1);
  lVar5 = MemPool::getCommonUnit((MemPool *)this_00,param_1);
  *(long *)(this + 0xe0) = *(long *)(lVar5 + 0x30) + *(long *)(this + 0xd8) * 4;
  lVar5 = *(long *)(lVar4 + 0x18);
  lVar7 = param_2 * 4;
  *(long *)(this + 0x80) = lVar5 + lVar7;
  *(uint *)(lVar5 + lVar7) = *(uint *)(lVar5 + lVar7) & 0xefffffff;
  *(ulong *)(this + 0x88) = *(long *)(lVar4 + 0x30) + param_2 * 0x28;
  *(ulong *)(this + 0x90) = *(long *)(lVar4 + 0x48) + param_2 * 0x40;
  *(ulong *)(this + 0x98) = *(long *)(lVar4 + 0x60) + param_2 * 0x40;
  lVar5 = *(long *)(lVar4 + 0x78);
  lVar8 = param_2 * 8;
  *(long *)(this + 0xa0) = lVar5 + lVar8;
  *(undefined8 *)(lVar5 + lVar8) = 0xffffffffffffffff;
  *(long *)(this + 0xa8) = *(long *)(lVar4 + 0x90) + lVar7;
  *(long *)(this + 0xb0) = *(long *)(lVar4 + 0xa8) + lVar7;
  *(ulong *)(this + 0xb8) = *(long *)(lVar4 + 0xc0) + param_2;
  *(ulong *)(this + 0xc0) = *(long *)(lVar4 + 0xd8) + param_2;
  *(long *)(this + 200) = *(long *)(lVar4 + 0x108) + lVar8;
  *(NodeProxy **)(*(long *)(lVar4 + 0xf0) + lVar8) = this;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

