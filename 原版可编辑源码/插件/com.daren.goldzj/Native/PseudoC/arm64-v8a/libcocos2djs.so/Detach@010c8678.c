
/* v8::internal::JSArrayBuffer::Detach(bool) */

void __thiscall v8::internal::JSArrayBuffer::Detach(JSArrayBuffer *this,bool param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  Isolate *pIVar6;
  long local_40;
  __shared_weak_count *local_38;
  
  uVar4 = *(ulong *)this;
  if (((*(uint *)(uVar4 + 0x1b) >> 2 & 1) == 0) &&
     ((param_1 || ((*(uint *)(uVar4 + 0x1b) >> 1 & 1) != 0)))) {
    pIVar6 = (Isolate *)(uVar4 & 0xffffffff00000000);
    if (*(long *)(uVar4 + 0x13) != 0) {
      Heap::UnregisterBackingStore(&local_40,pIVar6 + 0x8850,uVar4);
      if ((param_1) && ((*(byte *)(local_40 + 0x28) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","force_for_wasm_memory implies backing_store->is_wasm_memory()"
                );
      }
      if (local_38 != (__shared_weak_count *)0x0) {
        p_Var1 = local_38 + 8;
        do {
          lVar5 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*(long *)local_38 + 0x10))(local_38);
          std::__ndk1::__shared_weak_count::__release_weak(local_38);
        }
      }
    }
    if (*(int *)(*(long *)(pIVar6 + 0xee0) + 0xb) == 2) {
      Protectors::InvalidateArrayBufferDetaching(pIVar6);
    }
    *(undefined8 *)(*(long *)this + 0x13) = 0;
    *(undefined8 *)(*(long *)this + 0xb) = 0;
    *(uint *)(*(long *)this + 0x1b) = *(uint *)(*(long *)this + 0x1b) | 4;
  }
  return;
}

