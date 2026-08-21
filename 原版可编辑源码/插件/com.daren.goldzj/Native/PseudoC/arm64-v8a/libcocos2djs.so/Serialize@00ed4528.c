
/* v8::HeapSnapshot::Serialize(v8::OutputStream*, v8::HeapSnapshot::SerializationFormat) const */

void __thiscall v8::HeapSnapshot::Serialize(HeapSnapshot *this,OutputStream *param_1,int param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  HeapSnapshot *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_3 != 0) {
    lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar2 == 0) {
LAB_00ed4684:
      base::OS::PrintError
                ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::HeapSnapshot::Serialize",
                 "Unknown serialization format");
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
    if (*(code **)(lVar2 + 0xb738) == (code *)0x0) goto LAB_00ed4684;
    (**(code **)(lVar2 + 0xb738))("v8::HeapSnapshot::Serialize","Unknown serialization format");
    *(undefined1 *)(lVar2 + 0xb6b9) = 1;
  }
  iVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (0 < iVar1) {
LAB_00ed45e0:
    local_48 = internal::HeapSnapshotJSONSerializer::StringsMatch;
    local_60 = this;
    local_58 = malloc(0xc0);
    if (local_58 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Out of memory: HashMap::Initialize");
    }
    local_50 = 8;
    *local_58 = 0;
    local_58[3] = 0;
    local_58[6] = 0;
    local_58[9] = 0;
    local_58[0xc] = 0;
    uVar3 = 5;
    lVar2 = 0x78;
    do {
      uVar3 = uVar3 + 1;
      *(undefined8 *)((long)local_58 + lVar2) = 0;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < 8);
    local_4c = 0;
    local_40 = 0x100000001;
    local_38 = 0;
    internal::HeapSnapshotJSONSerializer::Serialize((HeapSnapshotJSONSerializer *)&local_60,param_1)
    ;
    free(local_58);
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))("v8::HeapSnapshot::Serialize","Invalid stream chunk size");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      goto LAB_00ed45e0;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::HeapSnapshot::Serialize",
             "Invalid stream chunk size");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

