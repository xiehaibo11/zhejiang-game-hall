
/* cocos2d::Animate::stop() */

void __thiscall cocos2d::Animate::stop(Animate *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(*(long *)(this + 0x78) + 0x58) != '\0') && (*(long **)(this + 0x38) != (long *)0x0)
     ) {
    puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x38) + 0x5e8))();
    local_30 = *puVar2;
    (**(code **)(**(long **)(this + 0x38) + 0x598))
              (*(long **)(this + 0x38),*(undefined8 *)(this + 0x68));
    (**(code **)(**(long **)(this + 0x38) + 0x5e0))(*(long **)(this + 0x38),&local_30);
  }
  Action::stop((Action *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

