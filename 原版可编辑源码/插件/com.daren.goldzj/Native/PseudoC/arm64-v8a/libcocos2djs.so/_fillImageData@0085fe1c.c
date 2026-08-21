
/* CanvasRenderingContext2DImpl::_fillImageData(cocos2d::Data const&, float, float, float, float) */

void __thiscall
CanvasRenderingContext2DImpl::_fillImageData
          (CanvasRenderingContext2DImpl *this,Data *param_1,float param_2,float param_3,
          float param_4,float param_5)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  _jbyteArray *p_Var5;
  _jobject *p_Var6;
  basic_string local_98;
  undefined6 uStack_97;
  undefined2 local_91;
  undefined6 uStack_8f;
  undefined1 local_89;
  void *local_88;
  ulong local_80 [2];
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((1.0 <= *(float *)(this + 0x18)) && (1.0 <= *(float *)(this + 0x1c))) {
    plVar3 = (long *)cocos2d::JniHelper::getEnv();
    uVar4 = cocos2d::Data::getSize(param_1);
    p_Var5 = (_jbyteArray *)(**(code **)(*plVar3 + 0x580))(plVar3,uVar4);
    plVar3 = (long *)cocos2d::JniHelper::getEnv();
    uVar2 = cocos2d::Data::getSize(param_1);
    uVar4 = cocos2d::Data::getBytes(param_1);
    (**(code **)(*plVar3 + 0x680))(plVar3,p_Var5,0,uVar2,uVar4);
    p_Var6 = *(_jobject **)this;
    local_70 = operator_new(0x30);
    builtin_strncpy(local_70,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
    local_98 = (basic_string)0x1c;
    local_80[1] = 0x2d;
    local_80[0] = 0x31;
    local_88 = (void *)0x0;
    uStack_8f = 0x617461446567;
    uStack_97 = 0x496c6c69665f;
    local_91 = 0x616d;
    local_89 = 0;
    cocos2d::JniHelper::callObjectVoidMethod<_jbyteArray*,float,float,float,float>
              (p_Var6,(basic_string *)local_80,&local_98,p_Var5,param_2,param_3,param_4,param_5);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    plVar3 = (long *)cocos2d::JniHelper::getEnv();
    (**(code **)(*plVar3 + 0xb8))(plVar3,p_Var5);
    fillData(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

