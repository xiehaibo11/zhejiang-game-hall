
/* cocos2d::VertexAttribValue::apply() */

void __thiscall cocos2d::VertexAttribValue::apply(VertexAttribValue *this)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[9] != (VertexAttribValue)0x0) {
    if (this[8] == (VertexAttribValue)0x0) {
      glVertexAttribPointer
                (**(undefined4 **)this,*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14),
                 this[0x18],*(undefined4 *)(this + 0x1c),*(undefined8 *)(this + 0x20));
    }
    else {
      local_30 = *(undefined8 *)this;
      plVar2 = *(long **)(*(long *)(this + 0x10) + 0x20);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

