
/* v8::WasmModuleObject::GetCompiledModule() */

void v8::WasmModuleObject::GetCompiledModule(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong *in_x0;
  long *in_x8;
  long *plVar5;
  
  plVar5 = *(long **)(*(long *)((*in_x0 & 0xffffffff00000000 | (ulong)*(uint *)(*in_x0 + 0xb)) + 3)
                     + 0x18);
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  if (lVar2 != 0) {
    plVar5 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *in_x8 = lVar1;
  in_x8[1] = lVar2;
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(native_module_) != nullptr");
}

