
/* v8::internal::Heap::OnMoveEvent(v8::internal::HeapObject, v8::internal::HeapObject, int) */

void __thiscall v8::internal::Heap::OnMoveEvent(Heap *this,ulong param_2,long param_3,int param_4)

{
  Mutex *this_00;
  ulong uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  
  if ((*(HeapProfiler **)(*(long *)(this + 0x30) + 0xb6d0))[0x38] != (HeapProfiler)0x0) {
    HeapProfiler::ObjectMoveEvent
              (*(HeapProfiler **)(*(long *)(this + 0x30) + 0xb6d0),param_3 - 1,param_2 - 1,param_4);
  }
  puVar7 = *(undefined8 **)(this + 0xc10);
  if (*(undefined8 **)(this + 0xc08) != puVar7) {
    puVar5 = *(undefined8 **)(this + 0xc08);
    do {
      puVar6 = puVar5 + 1;
      (**(code **)(*(long *)*puVar5 + 8))((long *)*puVar5,param_3 + -1,param_2 - 1,param_4);
      puVar5 = puVar6;
    } while (puVar7 != puVar6);
  }
  puVar2 = (uint *)(param_2 - 1);
  uVar1 = param_2 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar1 + *puVar2) == 0xa6) {
    plVar3 = *(long **)(*(long *)(this + 0x30) + 0x9558);
    uVar1 = (**(code **)(*plVar3 + 0x88))(plVar3);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_3 + -1,puVar2);
    }
  }
  else if (*(short *)(uVar1 + *puVar2) == 0x8f) {
    lVar4 = *(long *)(*(long *)(this + 0x30) + 0xb6d8);
    this_00 = (Mutex *)(lVar4 + 0x28);
    base::Mutex::Lock(this_00);
    plVar3 = *(long **)(lVar4 + 0x10);
    if (plVar3 != (long *)0x0) {
      do {
        (**(code **)(*(long *)plVar3[2] + 0x68))((long *)plVar3[2],param_3 + -1,puVar2);
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
    base::Mutex::Unlock(this_00);
  }
  if (FLAG_fuzzer_gc_analysis != '\0') {
    *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
  }
  return;
}

