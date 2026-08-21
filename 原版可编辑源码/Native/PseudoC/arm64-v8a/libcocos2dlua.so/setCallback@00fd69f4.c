
/* cocos2d::UniformValue::setCallback(std::__ndk1::function<void (cocos2d::GLProgram*,
   cocos2d::Uniform*)> const&) */

void __thiscall cocos2d::UniformValue::setCallback(UniformValue *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  code *pcVar4;
  long *plVar5;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x10) == 2) && (plVar5 = *(long **)(this + 0x18), plVar5 != (long *)0x0)) {
    plVar2 = (long *)plVar5[4];
    if (plVar5 == plVar2) {
      pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_00fd6a54:
      (*pcVar4)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x28);
      goto LAB_00fd6a54;
    }
    operator_delete(plVar5);
  }
  pvVar3 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00fd69c8 with catch @ 00fd6a74 */
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)((long)pvVar3 + 0x20) = 0;
  }
  *(void **)(this + 0x18) = pvVar3;
  plVar5 = *(long **)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 00fd69a0 with catch @ 00fd6a84 */
  if (plVar5 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar5) {
    local_50 = alStack_70;
    (**(code **)(*plVar5 + 0x18))(plVar5,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  FUN_00fda4d8(alStack_70,pvVar3);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00fd6afc;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00fd6afc:
  *(undefined4 *)(this + 0x10) = 2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

