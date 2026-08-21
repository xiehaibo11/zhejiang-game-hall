
/* CanvasRenderingContext2DImpl::lineTo(float, float) */

void __thiscall
CanvasRenderingContext2DImpl::lineTo(CanvasRenderingContext2DImpl *this,float param_1,float param_2)

{
  long lVar1;
  _jobject *p_Var2;
  basic_string local_68;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  undefined8 local_60;
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
  local_68 = (basic_string)0xc;
  local_63 = 0x6f54;
  builtin_strncpy(local_40,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_60 = 0;
  local_58 = (void *)0x0;
  local_67 = 0x656e696c;
  local_61 = 0;
  cocos2d::JniHelper::callObjectVoidMethod<float,float>
            (p_Var2,(basic_string *)local_50,&local_68,param_1,param_2);
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

