
/* CanvasRenderingContext2DImpl::setTextAlign(CanvasTextAlign) */

void __thiscall
CanvasRenderingContext2DImpl::setTextAlign(CanvasRenderingContext2DImpl *this,int param_2)

{
  long lVar1;
  _jobject *p_Var2;
  basic_string local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined4 local_5f;
  undefined1 local_5b;
  undefined2 uStack_5a;
  void *local_58;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  p_Var2 = *(_jobject **)this;
  local_40 = operator_new(0x30);
  local_50[1] = 0x2d;
  local_50[0] = 0x31;
  uStack_5a = 0;
  local_68 = (basic_string)0x18;
  local_5f = 0x6e67696c;
  builtin_strncpy(local_40,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_58 = (void *)0x0;
  uStack_67 = 0x74786554746573;
  uStack_60 = 0x41;
  local_5b = 0;
  cocos2d::JniHelper::callObjectVoidMethod<int>(p_Var2,(basic_string *)local_50,&local_68,param_2);
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

