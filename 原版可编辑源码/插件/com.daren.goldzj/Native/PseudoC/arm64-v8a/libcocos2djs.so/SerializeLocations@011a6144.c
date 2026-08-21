
/* v8::internal::HeapSnapshotJSONSerializer::SerializeLocations() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeLocations(HeapSnapshotJSONSerializer *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar2 = *(long *)this;
  if (*(long *)(lVar2 + 0x178) != *(long *)(lVar2 + 0x170)) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      if (uVar4 != 0) {
        puVar5 = *(undefined8 **)(this + 0x28);
        iVar1 = *(int *)(puVar5 + 4);
        *(int *)(puVar5 + 4) = iVar1 + 1;
        *(undefined1 *)(puVar5[2] + (long)iVar1) = 0x2c;
        if ((*(int *)(puVar5 + 4) == *(int *)(puVar5 + 1)) &&
           (*(char *)((long)puVar5 + 0x24) == '\0')) {
          iVar1 = (**(code **)(*(long *)*puVar5 + 0x20))((long *)*puVar5,puVar5[2]);
          if (iVar1 == 1) {
            *(undefined1 *)((long)puVar5 + 0x24) = 1;
          }
          *(undefined4 *)(puVar5 + 4) = 0;
        }
      }
      SerializeLocation(this,(SourceLocation *)(*(long *)(lVar2 + 0x170) + lVar3));
      if (*(char *)(*(long *)(this + 0x28) + 0x24) != '\0') {
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < (ulong)(*(long *)(lVar2 + 0x178) - *(long *)(lVar2 + 0x170) >> 4));
  }
  return;
}

