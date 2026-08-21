
/* cocos2d::CSLoader::bindCallback(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget*,
   cocos2d::Node*) */

void __thiscall
cocos2d::CSLoader::bindCallback
          (CSLoader *this,basic_string *param_1,basic_string *param_2,Widget *param_3,Node *param_4)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  basic_string *__s1;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = 0;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (((param_4 == (Node *)0x0) || (uVar1 == 0)) ||
     (plVar6 = (long *)__dynamic_cast(param_4,&Node::typeinfo,
                                      &cocostudio::WidgetCallBackHandlerProtocol::typeinfo,
                                      0xfffffffffffffffe), uVar5 = 0, plVar6 == (long *)0x0))
  goto LAB_00cb3634;
  bVar2 = *param_2;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 5) {
    __s1 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    iVar4 = memcmp(__s1,"Click",5);
    if (iVar4 != 0) {
      iVar4 = memcmp(__s1,"Touch",5);
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(alStack_80,plVar6,param_1);
        if (local_60 == (long *)0x0) goto LAB_00cb361c;
        cocos2d::ui::Widget::addTouchEventListener(param_3,(function *)alStack_80);
      }
      else {
        iVar4 = memcmp(__s1,"Event",5);
        if ((iVar4 != 0) ||
           ((**(code **)(*plVar6 + 0x20))(alStack_80,plVar6,param_1), local_60 == (long *)0x0))
        goto LAB_00cb361c;
        (**(code **)(*(long *)param_3 + 0x590))(param_3,alStack_80);
      }
LAB_00cb3600:
      if (alStack_80 == local_60) {
        pcVar7 = *(code **)(*local_60 + 0x20);
LAB_00cb362c:
        (*pcVar7)();
      }
      else if (local_60 != (long *)0x0) {
        pcVar7 = *(code **)(*local_60 + 0x28);
        goto LAB_00cb362c;
      }
      uVar5 = 1;
      goto LAB_00cb3634;
    }
    (**(code **)(*plVar6 + 0x18))(alStack_80,plVar6,param_1);
    if (local_60 != (long *)0x0) {
      cocos2d::ui::Widget::addClickEventListener(param_3,(function *)alStack_80);
      goto LAB_00cb3600;
    }
  }
LAB_00cb361c:
  uVar5 = 0;
LAB_00cb3634:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

