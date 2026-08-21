
/* se::Class::cleanup() */

void se::Class::cleanup(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ScriptEngine *this;
  code *pcVar4;
  long lVar5;
  undefined **local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = DAT_01d37188;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  for (plVar2 = DAT_01d37180; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar5 = *plVar2;
    if (*(RefCounter **)(lVar5 + 0x18) != (RefCounter *)0x0) {
      RefCounter::decRef(*(RefCounter **)(lVar5 + 0x18));
      *(undefined8 *)(lVar5 + 0x18) = 0;
    }
    if (*(RefCounter **)(lVar5 + 0x28) != (RefCounter *)0x0) {
      RefCounter::decRef(*(RefCounter **)(lVar5 + 0x28));
      *(undefined8 *)(lVar5 + 0x28) = 0;
    }
    if (*(RefCounter **)(lVar5 + 0x20) != (RefCounter *)0x0) {
      RefCounter::decRef(*(RefCounter **)(lVar5 + 0x20));
      *(undefined8 *)(lVar5 + 0x20) = 0;
    }
    if (*(ulong **)(lVar5 + 0x38) != (ulong *)0x0) {
      v8::V8::DisposeGlobal(*(ulong **)(lVar5 + 0x38));
      *(undefined8 *)(lVar5 + 0x38) = 0;
    }
  }
  this = (ScriptEngine *)ScriptEngine::getInstance();
  local_70[0] = &PTR_FUN_01c68a18;
  local_50 = (long *)local_70;
  ScriptEngine::addAfterCleanupHook(this,(function *)local_70);
  if (local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_009055e8;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_009055e8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

