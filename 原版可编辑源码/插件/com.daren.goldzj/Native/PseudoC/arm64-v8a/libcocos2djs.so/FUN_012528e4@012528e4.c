
void FUN_012528e4(ulong *param_1,long *param_2)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long local_48;
  ulong local_40;
  __shared_weak_count *p_Stack_38;
  
  uVar5 = *param_1 & 0xffffffff00000000;
  lVar6 = **(long **)(*(long *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*param_1 + 0x6f)) + 0xb)) + 3)
                     + 0x18);
  if (*(char *)(*(long *)(lVar6 + 200) + 0x178) == '\0' && *(char *)(lVar6 + 0x184) != '\0') {
    local_48 = *param_2;
    v8::internal::JSArrayBuffer::GetBackingStore((JSArrayBuffer *)&local_48);
    bVar2 = *(byte *)(local_40 + 0x28);
    if (p_Stack_38 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Stack_38 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)p_Stack_38 + 0x10))(p_Stack_38);
        std::__ndk1::__shared_weak_count::__release_weak(p_Stack_38);
      }
    }
    if ((bVar2 >> 4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "is_wasm_module && use_trap_handler implies buffer->GetBackingStore()->has_guard_regions()"
              );
    }
  }
  local_40 = *param_1;
  v8::internal::WasmInstanceObject::SetRawMemory
            ((WasmInstanceObject *)&local_40,*(uchar **)(*param_2 + 0x13),*(ulong *)(*param_2 + 0xb)
            );
  return;
}

