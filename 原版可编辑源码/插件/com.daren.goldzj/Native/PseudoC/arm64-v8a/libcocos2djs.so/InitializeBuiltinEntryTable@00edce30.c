
/* v8::internal::Builtins::InitializeBuiltinEntryTable(v8::internal::Isolate*) */

void v8::internal::Builtins::InitializeBuiltinEntryTable(Isolate *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar1 = Isolate::CurrentEmbeddedBlob();
  uStack_38 = Isolate::CurrentEmbeddedBlobSize();
  uStack_38 = uStack_38 & 0xffffffff;
  lVar3 = 0;
  local_40 = uVar1;
  do {
    lVar2 = Heap::builtin((Heap *)(param_1 + 0x8850),(int)lVar3);
    if (0x5bb < *(uint *)(lVar2 + 0x27)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Builtins::IsBuiltinId(isolate->heap()->builtin(i).builtin_index())");
    }
    uVar1 = EmbeddedData::InstructionStartOfBuiltin((EmbeddedData *)&local_40,(int)lVar3);
    *(undefined8 *)(param_1 + lVar3 * 8 + 0x2c78) = uVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x5bc);
  return;
}

