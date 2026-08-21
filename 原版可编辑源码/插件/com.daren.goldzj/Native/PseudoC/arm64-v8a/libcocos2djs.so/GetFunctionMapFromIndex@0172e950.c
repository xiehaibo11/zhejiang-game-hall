
/* v8::internal::compiler::NativeContextRef::GetFunctionMapFromIndex(int) const */

undefined1  [16] __thiscall
v8::internal::compiler::NativeContextRef::GetFunctionMapFromIndex
          (NativeContextRef *this,int param_1)

{
  short sVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  char local_48 [8];
  ObjectRef aOStack_40 [16];
  long local_30;
  undefined8 uStack_28;
  
  if (*(int *)(*(long *)this + 8) == 2) {
    ContextRef::get(local_48,this,param_1,0);
    if (local_48[0] != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    auVar6 = ObjectRef::AsMap(aOStack_40);
  }
  else {
    uVar5 = *(undefined8 *)(this + 8);
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x8f) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsNativeContext()");
    }
    if (*(char *)(lVar2 + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","serialized_");
    }
    if ((ulong)(*(long *)(lVar2 + 0x1b8) - *(long *)(lVar2 + 0x1b0) >> 3) <=
        (ulong)(long)(param_1 + -0xa9)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x1b0) + (long)(param_1 + -0xa9) * 8);
    local_30 = lVar2;
    uStack_28 = uVar5;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
    puVar3 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_30);
    if (*(int *)(puVar3 + 1) == 2) {
      uVar4 = *(ulong *)*puVar3;
      if ((uVar4 & 1) == 0) goto LAB_0172ea68;
      sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
    }
    else {
      if (*(int *)(puVar3 + 1) == 0) goto LAB_0172ea68;
      sVar1 = *(short *)(puVar3[2] + 0x18);
    }
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = lVar2;
    if (sVar1 != 0xa2) {
LAB_0172ea68:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
  }
  return auVar6;
}

