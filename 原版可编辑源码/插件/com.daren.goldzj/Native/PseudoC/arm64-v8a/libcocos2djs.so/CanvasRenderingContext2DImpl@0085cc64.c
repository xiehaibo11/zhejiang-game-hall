
/* CanvasRenderingContext2DImpl::CanvasRenderingContext2DImpl() */

void __thiscall
CanvasRenderingContext2DImpl::CanvasRenderingContext2DImpl(CanvasRenderingContext2DImpl *this)

{
  long lVar1;
  _jobject *p_Var2;
  long *plVar3;
  undefined8 uVar4;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)this = 0;
  cocos2d::Data::Data((Data *)(this + 8));
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (CanvasRenderingContext2DImpl)0x1;
  local_40 = operator_new(0x30);
  builtin_strncpy(local_40,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_50[1] = 0x2d;
  local_50[0] = 0x31;
  p_Var2 = cocos2d::JniHelper::newObject<>((basic_string *)local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  plVar3 = (long *)cocos2d::JniHelper::getEnv();
  uVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3,p_Var2);
  *(undefined8 *)this = uVar4;
  plVar3 = (long *)cocos2d::JniHelper::getEnv();
  (**(code **)(*plVar3 + 0xb8))(plVar3,p_Var2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

