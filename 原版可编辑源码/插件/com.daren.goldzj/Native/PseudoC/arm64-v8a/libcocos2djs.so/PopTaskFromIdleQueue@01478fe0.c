
/* v8::platform::DefaultForegroundTaskRunner::PopTaskFromIdleQueue() */

void v8::platform::DefaultForegroundTaskRunner::PopTaskFromIdleQueue(void)

{
  long in_x0;
  long *plVar1;
  undefined8 *in_x8;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  base::Mutex::Lock((Mutex *)(in_x0 + 0xc));
  if (*(long *)(in_x0 + 200) == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(in_x0 + 0xa8) + (*(ulong *)(in_x0 + 0xc0) >> 6 & 0x3fffffffffffff8))
    ;
    lVar2 = (*(ulong *)(in_x0 + 0xc0) & 0x1ff) * 8;
    uVar4 = *(undefined8 *)(lVar3 + lVar2);
    *(undefined8 *)(lVar3 + lVar2) = 0;
    lVar3 = *(long *)(*(long *)(in_x0 + 0xa8) + (*(ulong *)(in_x0 + 0xc0) >> 6 & 0x3fffffffffffff8))
    ;
    lVar2 = (*(ulong *)(in_x0 + 0xc0) & 0x1ff) * 8;
    plVar1 = *(long **)(lVar3 + lVar2);
    *(undefined8 *)(lVar3 + lVar2) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    uVar5 = *(long *)(in_x0 + 0xc0) + 1;
    *(long *)(in_x0 + 200) = *(long *)(in_x0 + 200) + -1;
    *(ulong *)(in_x0 + 0xc0) = uVar5;
    if (0x3ff < uVar5) {
      operator_delete((void *)**(undefined8 **)(in_x0 + 0xa8));
      *(long *)(in_x0 + 0xa8) = *(long *)(in_x0 + 0xa8) + 8;
      *(long *)(in_x0 + 0xc0) = *(long *)(in_x0 + 0xc0) + -0x200;
    }
  }
  *in_x8 = uVar4;
  base::Mutex::Unlock((Mutex *)(in_x0 + 0xc));
  return;
}

