
/* CanvasRenderingContext2DImpl::fill() */

void __thiscall CanvasRenderingContext2DImpl::fill(CanvasRenderingContext2DImpl *this)

{
  long lVar1;
  _jobject *p_Var2;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((1.0 <= *(float *)(this + 0x18)) && (1.0 <= *(float *)(this + 0x1c))) {
    p_Var2 = *(_jobject **)this;
    local_40 = operator_new(0x30);
    local_50[1] = 0x2d;
    local_50[0] = 0x31;
    local_68[1] = 0;
    builtin_strncpy(local_40,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
    local_58 = (void *)0x0;
    local_68[0] = 0x6c6c696608;
    cocos2d::JniHelper::callObjectVoidMethod<>
              (p_Var2,(basic_string *)local_50,(basic_string *)local_68);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    fillData(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

