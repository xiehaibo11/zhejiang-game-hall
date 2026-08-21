
/* v8::internal::OptimizingCompileDispatcher::FlushOutputQueue(bool) */

void __thiscall
v8::internal::OptimizingCompileDispatcher::FlushOutputQueue
          (OptimizingCompileDispatcher *this,bool param_1)

{
  Mutex *this_00;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  this_00 = (Mutex *)(this + 0x78);
  base::Mutex::Lock(this_00);
  lVar1 = *(long *)(this + 0x70);
  while (lVar1 != 0) {
    uVar2 = *(ulong *)(this + 0x68);
    uVar3 = *(undefined8 *)
             (*(long *)((long)*(undefined8 **)(this + 0x50) + (uVar2 >> 6 & 0x3fffffffffffff8)) +
             (uVar2 & 0x1ff) * 8);
    *(ulong *)(this + 0x68) = uVar2 + 1;
    *(long *)(this + 0x70) = lVar1 + -1;
    if (0x3ff < uVar2 + 1) {
      operator_delete((void *)**(undefined8 **)(this + 0x50));
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
      *(long *)(this + 0x68) = *(long *)(this + 0x68) + -0x200;
    }
    base::Mutex::Unlock(this_00);
    FUN_00ef7b88(uVar3,param_1);
    base::Mutex::Lock(this_00);
    lVar1 = *(long *)(this + 0x70);
  }
  base::Mutex::Unlock(this_00);
  return;
}

