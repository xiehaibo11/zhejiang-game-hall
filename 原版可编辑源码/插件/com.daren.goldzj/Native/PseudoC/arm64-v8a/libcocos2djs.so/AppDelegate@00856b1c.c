
/* AppDelegate::AppDelegate(int, int) */

void __thiscall AppDelegate::AppDelegate(AppDelegate *this,int param_1,int param_2)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 uStack_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0;
  local_40 = (basic_string)0x14;
  local_30 = (void *)0x0;
  local_37 = 0x656d;
  uStack_3f = 0x4720736f636f43;
  uStack_38 = 0x61;
  local_35 = 0;
  cocos2d::Application::Application((Application *)this,&local_40,param_1,param_2);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined ***)this = &PTR__AppDelegate_01c65c80;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

