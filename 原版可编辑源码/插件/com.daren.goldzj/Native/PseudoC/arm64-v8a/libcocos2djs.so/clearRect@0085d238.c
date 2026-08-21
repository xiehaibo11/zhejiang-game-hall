
/* CanvasRenderingContext2DImpl::clearRect(float, float, float, float) */

void __thiscall
CanvasRenderingContext2DImpl::clearRect
          (CanvasRenderingContext2DImpl *this,float param_1,float param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  _jobject *p_Var3;
  float fVar4;
  float fVar5;
  basic_string local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined2 local_7f;
  undefined5 uStack_7d;
  void *local_78;
  ulong local_70 [2];
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(this + 0x18);
  if ((((1.0 <= fVar5) && (fVar4 = *(float *)(this + 0x1c), param_2 < fVar4)) && (param_1 < fVar5))
     && (1.0 <= fVar4)) {
    p_Var3 = *(_jobject **)this;
    fVar2 = fVar5 - param_1;
    if (param_1 + param_3 <= fVar5) {
      fVar2 = param_3;
    }
    fVar5 = fVar4 - param_2;
    if (param_2 + param_4 <= fVar4) {
      fVar5 = param_4;
    }
    local_60 = operator_new(0x30);
    local_70[1] = 0x2d;
    local_70[0] = 0x31;
    uStack_7d = 0;
    local_88 = (basic_string)0x12;
    local_7f = 0x74;
    builtin_strncpy(local_60,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
    local_78 = (void *)0x0;
    uStack_87 = 0x65527261656c63;
    uStack_80 = 99;
    cocos2d::JniHelper::callObjectVoidMethod<float,float,float,float>
              (p_Var3,(basic_string *)local_70,&local_88,param_1,param_2,fVar2,fVar5);
    if (((byte)local_88 & 1) != 0) {
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

