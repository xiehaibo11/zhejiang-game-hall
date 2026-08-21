
/* cocos2d::CSLoader::createNodeWithFlatBuffersFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long __thiscall
cocos2d::CSLoader::createNodeWithFlatBuffersFile(CSLoader *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Ref *this_00;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
  lVar2 = nodeWithFlatBuffersFile(this,param_1,(function *)alStack_70);
  if ((lVar2 != 0) &&
     (lVar3 = __dynamic_cast(lVar2,&Node::typeinfo,
                             &cocostudio::WidgetCallBackHandlerProtocol::typeinfo,0xfffffffffffffffe
                            ), lVar3 != 0)) {
    this_00 = *(Ref **)(*(long *)(this + 0x98) + -8);
    *(undefined8 **)(this + 0x98) = (undefined8 *)(*(long *)(this + 0x98) + -8);
    Ref::release(this_00);
    if (*(long *)(this + 0x90) == *(long *)(this + 0x98)) {
      *(undefined8 *)(this + 0x88) = 0;
    }
    else {
      *(undefined8 *)(this + 0x88) = *(undefined8 *)(*(long *)(this + 0x98) + -8);
    }
  }
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00cafea0;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00cafea0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

