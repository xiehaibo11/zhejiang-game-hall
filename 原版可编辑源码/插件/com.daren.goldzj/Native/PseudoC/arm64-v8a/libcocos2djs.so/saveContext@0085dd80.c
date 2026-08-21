
/* CanvasRenderingContext2DImpl::saveContext() */

void __thiscall CanvasRenderingContext2DImpl::saveContext(CanvasRenderingContext2DImpl *this)

{
  long lVar1;
  _jobject *p_Var2;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined4 local_4f;
  undefined3 uStack_4b;
  void *local_48;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  p_Var2 = *(_jobject **)this;
  local_30 = operator_new(0x30);
  local_40[1] = 0x2d;
  local_40[0] = 0x31;
  uStack_4b = 0;
  local_58 = (basic_string)0x16;
  local_4f = 0x747865;
  builtin_strncpy(local_30,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_48 = (void *)0x0;
  uStack_57 = 0x6e6f4365766173;
  uStack_50 = 0x74;
  cocos2d::JniHelper::callObjectVoidMethod<>(p_Var2,(basic_string *)local_40,&local_58);
  if (((byte)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

