
/* CanvasRenderingContext2DImpl::rect(float, float, float, float) */

void __thiscall
CanvasRenderingContext2DImpl::rect
          (CanvasRenderingContext2DImpl *this,float param_1,float param_2,float param_3,
          float param_4)

{
  long lVar1;
  _jobject *p_Var2;
  ulong local_88 [2];
  void *local_78;
  ulong local_70 [2];
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((1.0 <= *(float *)(this + 0x18)) && (1.0 <= *(float *)(this + 0x1c))) {
    p_Var2 = *(_jobject **)this;
    local_60 = operator_new(0x30);
    local_70[1] = 0x2d;
    local_70[0] = 0x31;
    local_88[1] = 0;
    builtin_strncpy(local_60,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
    local_78 = (void *)0x0;
    local_88[0] = 0x7463657208;
    cocos2d::JniHelper::callObjectVoidMethod<float,float,float,float>
              (p_Var2,(basic_string *)local_70,(basic_string *)local_88,param_1,param_2,param_3,
               param_4);
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    fillData(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

