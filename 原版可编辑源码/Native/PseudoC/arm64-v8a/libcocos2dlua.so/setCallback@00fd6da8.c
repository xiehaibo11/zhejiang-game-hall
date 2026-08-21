
/* cocos2d::VertexAttribValue::setCallback(std::__ndk1::function<void (cocos2d::VertexAttrib*)>
   const&) */

void __thiscall cocos2d::VertexAttribValue::setCallback(VertexAttribValue *this,function *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pvVar2 != (void *)0x0) {
    *(undefined8 *)((long)pvVar2 + 0x20) = 0;
  }
  *(void **)(this + 0x10) = pvVar2;
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar3) {
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00fda640(alStack_70,pvVar2);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00fd6e6c;
    pcVar4 = *(code **)(*local_50 + 0x28);
                    /* catch() { ... } // from try @ 00fd6ed0 with catch @ 00fd6e5c */
  }
  (*pcVar4)();
LAB_00fd6e6c:
  *(undefined2 *)(this + 8) = 0x101;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

