
/* v8::internal::Logger::LogAccessorCallbacks() */

void __thiscall v8::internal::Logger::LogAccessorCallbacks(Logger *this)

{
  Mutex *pMVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  HeapObjectIterator aHStack_78 [40];
  
  HeapObjectIterator::HeapObjectIterator(aHStack_78,*(long *)(this + 8) + 0x8850,0);
  uVar2 = HeapObjectIterator::Next(aHStack_78);
  iVar4 = (int)uVar2;
  while (iVar4 != 0) {
    uVar6 = uVar2 & 0xffffffff00000000;
    if ((*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x51) &&
       (uVar3 = uVar6 | *(uint *)(uVar2 + 3),
       *(ushort *)((uVar6 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x41)) {
      if ((*(uint *)(uVar2 + 0x13) != 0) &&
         (lVar5 = *(long *)((uVar6 | *(uint *)(uVar2 + 0x13)) + 3), lVar5 != 0)) {
        lVar7 = *(long *)(*(long *)(this + 8) + 0xb6d8);
        pMVar1 = (Mutex *)(lVar7 + 0x28);
        base::Mutex::Lock(pMVar1);
        for (plVar8 = *(long **)(lVar7 + 0x10); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          (**(code **)(*(long *)plVar8[2] + 0x40))((long *)plVar8[2],uVar3,lVar5);
        }
        base::Mutex::Unlock(pMVar1);
      }
      if ((*(uint *)(uVar2 + 0xf) != 0) &&
         (lVar5 = *(long *)((uVar6 | *(uint *)(uVar2 + 0xf)) + 3), lVar5 != 0)) {
        lVar7 = *(long *)(*(long *)(this + 8) + 0xb6d8);
        pMVar1 = (Mutex *)(lVar7 + 0x28);
        base::Mutex::Lock(pMVar1);
        for (plVar8 = *(long **)(lVar7 + 0x10); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          (**(code **)(*(long *)plVar8[2] + 0x48))((long *)plVar8[2],uVar3,lVar5);
        }
        base::Mutex::Unlock(pMVar1);
      }
    }
    uVar2 = HeapObjectIterator::Next(aHStack_78);
    iVar4 = (int)uVar2;
  }
  HeapObjectIterator::~HeapObjectIterator(aHStack_78);
  return;
}

