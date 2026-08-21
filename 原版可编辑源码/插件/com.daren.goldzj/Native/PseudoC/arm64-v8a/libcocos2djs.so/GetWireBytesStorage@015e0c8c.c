
/* v8::internal::wasm::CompilationState::GetWireBytesStorage() const */

void v8::internal::wasm::CompilationState::GetWireBytesStorage(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long in_x0;
  undefined8 *in_x8;
  long lVar4;
  
  base::Mutex::Lock((Mutex *)(in_x0 + 0x100));
  *in_x8 = *(undefined8 *)(in_x0 + 0x148);
  lVar4 = *(long *)(in_x0 + 0x150);
  in_x8[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  base::Mutex::Unlock((Mutex *)(in_x0 + 0x100));
  return;
}

