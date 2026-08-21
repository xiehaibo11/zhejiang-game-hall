
/* v8::internal::WasmCompiledFrame::function_index() const */

undefined4 __thiscall v8::internal::WasmCompiledFrame::function_index(WasmCompiledFrame *this)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  void *local_38;
  void *local_30;
  undefined8 uStack_28;
  
  local_30 = (void *)0x0;
  uStack_28 = 0;
  local_38 = (void *)0x0;
  (**(code **)(*(long *)this + 0x88))(this,&local_38);
  uVar2 = *(uint *)((long)local_38 + 8);
  lVar4 = *(long *)((long)local_38 + 0x20);
  pvVar3 = local_30;
  if (local_38 == (void *)0x0) {
LAB_00f48338:
    if (uVar2 < 3) {
      return *(undefined4 *)(lVar4 + 0x38);
    }
  }
  else {
    do {
      if (local_38 == pvVar3) {
        local_30 = local_38;
        operator_delete(local_38);
        goto LAB_00f48338;
      }
      puVar1 = (uint *)((long)pvVar3 + -0x30);
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    } while (*puVar1 < 3);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

