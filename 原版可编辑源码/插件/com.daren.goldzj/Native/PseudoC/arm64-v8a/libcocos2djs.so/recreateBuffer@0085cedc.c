
/* CanvasRenderingContext2DImpl::recreateBuffer(float, float) */

void __thiscall
CanvasRenderingContext2DImpl::recreateBuffer
          (CanvasRenderingContext2DImpl *this,float param_1,float param_2)

{
  long lVar1;
  _jobject *p_Var2;
  basic_string local_78;
  undefined6 uStack_77;
  undefined2 local_71;
  undefined6 uStack_6f;
  undefined1 local_69;
  void *local_68;
  ulong local_60 [2];
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x18) = param_1;
  *(float *)(this + 0x1c) = param_2;
  if ((1.0 <= param_1) && (1.0 <= param_2)) {
    p_Var2 = *(_jobject **)this;
    local_50 = operator_new(0x30);
    builtin_strncpy(local_50,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
    local_78 = (basic_string)0x1c;
    local_60[1] = 0x2d;
    local_60[0] = 0x31;
    local_68 = (void *)0x0;
    uStack_6f = 0x726566667542;
    uStack_77 = 0x616572636572;
    local_71 = 0x6574;
    local_69 = 0;
    cocos2d::JniHelper::callObjectVoidMethod<float,float>
              (p_Var2,(basic_string *)local_60,&local_78,param_1,param_2);
    if (((byte)local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    fillData(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

