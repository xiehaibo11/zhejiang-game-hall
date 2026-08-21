
/* v8::internal::NewLargeObjectSpace::AllocateRaw(int) */

ulong __thiscall
v8::internal::NewLargeObjectSpace::AllocateRaw(NewLargeObjectSpace *this,int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *__s;
  Heap *this_00;
  undefined8 *puVar5;
  
  this_00 = *(Heap **)(this + 0x40);
  uVar2 = (**(code **)(*(long *)this + 0x50))();
  uVar2 = Heap::CanExpandOldGeneration(this_00,uVar2);
  if ((uVar2 & 1) != 0) {
    lVar3 = (**(code **)(*(long *)this + 0x50))(this);
    uVar2 = (ulong)param_1;
    if (((lVar3 == 0) || (uVar4 = (**(code **)(*(long *)this + 0x60))(this), uVar2 <= uVar4)) &&
       (lVar3 = MemoryAllocator::AllocateChunk
                          (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),uVar2,uVar2,0,this)
       , lVar3 != 0)) {
      *(undefined8 *)(lVar3 + 0xe0) = 0;
      *(undefined8 *)(lVar3 + 0xe8) = 0;
      *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) | 0x20;
      (**(code **)(*(long *)this + 0x88))(this,lVar3,uVar2);
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),*(undefined8 *)(lVar3 + 0x20),param_1,1,1);
      uVar4 = *(ulong *)(this + 0x88);
      uVar2 = (**(code **)(*(long *)this + 0x50))(this);
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
      *(ulong *)(this + 0x88) = uVar2;
      uVar4 = *(ulong *)(lVar3 + 0x20);
      uVar2 = *(ulong *)(lVar3 + 8) | 0x40006;
      if (*(int *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x58) < 2) {
        uVar2 = *(ulong *)(lVar3 + 8) & 0xfffffffffffbffe9 | 2;
      }
      *(ulong *)(lVar3 + 8) = uVar2 | 0x10;
      *(ulong *)(this + 0x80) = uVar4;
      if (FLAG_minor_mc != '\0') {
        __s = calloc(1,0x2000);
        *(void **)(lVar3 + 0x108) = __s;
        memset(__s,0,0x2000);
        *(undefined8 *)(lVar3 + 0x100) = 0;
      }
      DataMemoryBarrier(2,3);
      if ((this[0x38] == (NewLargeObjectSpace)0x0) &&
         (*(long *)(this + 8) != *(long *)(this + 0x10))) {
        *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
        Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),uVar4,param_1,1,1);
        puVar1 = *(undefined8 **)(this + 0x10);
        for (puVar5 = *(undefined8 **)(this + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
          AllocationObserver::AllocationStep((int)*puVar5,(ulong)(uint)param_1,uVar4);
        }
        *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
      }
      if ((uVar4 + 1 & 1) != 0) {
        return uVar4 + 1;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!object.IsSmi()");
    }
  }
  return (long)*(int *)(this + 0x48) << 1;
}

