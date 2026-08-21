
/* CanvasRenderingContext2DImpl::setFillStyle(float, float, float, float) */

void __thiscall
CanvasRenderingContext2DImpl::setFillStyle
          (CanvasRenderingContext2DImpl *this,float param_1,float param_2,float param_3,
          float param_4)

{
  long lVar1;
  _jobject *p_Var2;
  basic_string local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined4 local_6f;
  undefined1 local_6b;
  undefined2 uStack_6a;
  void *local_68;
  ulong local_60 [2];
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  p_Var2 = *(_jobject **)this;
  local_50 = operator_new(0x30);
  local_60[1] = 0x2d;
  local_60[0] = 0x31;
  uStack_6a = 0;
  local_78 = (basic_string)0x18;
  local_6f = 0x656c7974;
  builtin_strncpy(local_50,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_68 = (void *)0x0;
  uStack_77 = 0x6c6c6946746573;
  uStack_70 = 0x53;
  local_6b = 0;
  cocos2d::JniHelper::callObjectVoidMethod<float,float,float,float>
            (p_Var2,(basic_string *)local_60,&local_78,param_1,param_2,param_3,param_4);
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

