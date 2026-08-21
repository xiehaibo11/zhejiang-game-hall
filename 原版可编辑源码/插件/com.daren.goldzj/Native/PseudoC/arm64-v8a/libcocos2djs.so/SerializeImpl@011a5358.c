
/* v8::internal::HeapSnapshotJSONSerializer::SerializeImpl() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeImpl(HeapSnapshotJSONSerializer *this)

{
  ulong uVar1;
  int iVar2;
  OutputStreamWriter *this_00;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  HeapEntry *pHVar6;
  HeapEntry *pHVar7;
  ulong uVar8;
  long *plVar9;
  
  puVar5 = *(undefined8 **)(this + 0x28);
  iVar2 = *(int *)(puVar5 + 4);
  *(int *)(puVar5 + 4) = iVar2 + 1;
  *(undefined1 *)(puVar5[2] + (long)iVar2) = 0x7b;
  if ((*(int *)(puVar5 + 4) == *(int *)(puVar5 + 1)) && (*(char *)((long)puVar5 + 0x24) == '\0')) {
    iVar2 = (**(code **)(*(long *)*puVar5 + 0x20))((long *)*puVar5,puVar5[2]);
    if (iVar2 == 1) {
      *(undefined1 *)((long)puVar5 + 0x24) = 1;
    }
    *(undefined4 *)(puVar5 + 4) = 0;
  }
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"snapshot\":{");
  SerializeSnapshot(this);
  if ((*(OutputStreamWriter **)(this + 0x28))[0x24] == (OutputStreamWriter)0x0) {
    OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"},\n");
    OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"nodes\":[");
    lVar4 = *(long *)this;
    lVar3 = *(long *)(lVar4 + 0xd8);
    if (*(long *)(lVar4 + 0xe0) != lVar3) {
      uVar1 = *(ulong *)(lVar4 + 0xf0);
      uVar8 = *(long *)(lVar4 + 0xf8) + uVar1;
      pHVar6 = (HeapEntry *)(*(long *)(lVar3 + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28);
      pHVar7 = (HeapEntry *)(*(long *)(lVar3 + (uVar8 / 0x66) * 8) + (uVar8 % 0x66) * 0x28);
      if (pHVar7 != pHVar6) {
        plVar9 = (long *)(lVar3 + (uVar1 / 0x66) * 8);
        do {
          SerializeNode(this,pHVar6);
          if (*(char *)(*(long *)(this + 0x28) + 0x24) != '\0') break;
          pHVar6 = pHVar6 + 0x28;
          if ((long)pHVar6 - *plVar9 == 0xff0) {
            plVar9 = plVar9 + 1;
            pHVar6 = (HeapEntry *)*plVar9;
          }
        } while (pHVar7 != pHVar6);
      }
    }
    if ((*(OutputStreamWriter **)(this + 0x28))[0x24] == (OutputStreamWriter)0x0) {
      OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"],\n");
      OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"edges\":[");
      lVar4 = *(long *)this;
      lVar3 = *(long *)(lVar4 + 0x130);
      if (*(long *)(lVar4 + 0x138) == lVar3) {
        this_00 = *(OutputStreamWriter **)(this + 0x28);
        if (this_00[0x24] != (OutputStreamWriter)0x0) {
          return;
        }
      }
      else {
        uVar8 = 0;
        do {
          SerializeEdge(this,*(HeapGraphEdge **)(lVar3 + uVar8 * 8),uVar8 == 0);
          this_00 = *(OutputStreamWriter **)(this + 0x28);
          if (this_00[0x24] != (OutputStreamWriter)0x0) {
            return;
          }
          lVar3 = *(long *)(lVar4 + 0x130);
          uVar8 = uVar8 + 1;
        } while (uVar8 < (ulong)(*(long *)(lVar4 + 0x138) - lVar3 >> 3));
      }
      OutputStreamWriter::AddString(this_00,"],\n");
      OutputStreamWriter::AddString
                (*(OutputStreamWriter **)(this + 0x28),"\"trace_function_infos\":[");
      SerializeTraceNodeInfos(this);
      if ((*(OutputStreamWriter **)(this + 0x28))[0x24] == (OutputStreamWriter)0x0) {
        OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"],\n");
        OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"trace_tree\":[");
        if (*(long *)(**(long **)this + 0x30) != 0) {
          SerializeTraceNode(this,(AllocationTraceNode *)(*(long *)(**(long **)this + 0x30) + 0x18))
          ;
        }
        if ((*(OutputStreamWriter **)(this + 0x28))[0x24] == (OutputStreamWriter)0x0) {
          OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"],\n");
          OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"samples\":[");
          SerializeSamples(this);
          if ((*(OutputStreamWriter **)(this + 0x28))[0x24] == (OutputStreamWriter)0x0) {
            OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"],\n");
            OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"locations\":[");
            SerializeLocations(this);
            if ((*(OutputStreamWriter **)(this + 0x28))[0x24] == (OutputStreamWriter)0x0) {
              OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"],\n");
              OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"strings\":[");
              SerializeStrings(this);
              puVar5 = *(undefined8 **)(this + 0x28);
              if (*(char *)((long)puVar5 + 0x24) == '\0') {
                iVar2 = *(int *)(puVar5 + 4);
                *(int *)(puVar5 + 4) = iVar2 + 1;
                *(undefined1 *)(puVar5[2] + (long)iVar2) = 0x5d;
                if ((*(int *)(puVar5 + 4) == *(int *)(puVar5 + 1)) &&
                   (*(char *)((long)puVar5 + 0x24) == '\0')) {
                  iVar2 = (**(code **)(*(long *)*puVar5 + 0x20))((long *)*puVar5,puVar5[2]);
                  if (iVar2 == 1) {
                    *(undefined1 *)((long)puVar5 + 0x24) = 1;
                  }
                  *(undefined4 *)(puVar5 + 4) = 0;
                }
                puVar5 = *(undefined8 **)(this + 0x28);
                iVar2 = *(int *)(puVar5 + 4);
                *(int *)(puVar5 + 4) = iVar2 + 1;
                *(undefined1 *)(puVar5[2] + (long)iVar2) = 0x7d;
                if ((*(int *)(puVar5 + 4) == *(int *)(puVar5 + 1)) &&
                   (*(char *)((long)puVar5 + 0x24) == '\0')) {
                  iVar2 = (**(code **)(*(long *)*puVar5 + 0x20))((long *)*puVar5,puVar5[2]);
                  if (iVar2 == 1) {
                    *(undefined1 *)((long)puVar5 + 0x24) = 1;
                  }
                  *(undefined4 *)(puVar5 + 4) = 0;
                }
                puVar5 = *(undefined8 **)(this + 0x28);
                if (*(char *)((long)puVar5 + 0x24) == '\0') {
                  if (*(int *)(puVar5 + 4) != 0) {
                    iVar2 = (**(code **)(*(long *)*puVar5 + 0x20))((long *)*puVar5,puVar5[2]);
                    if (iVar2 == 1) {
                      *(undefined1 *)((long)puVar5 + 0x24) = 1;
                    }
                    *(undefined4 *)(puVar5 + 4) = 0;
                  }
                    /* WARNING: Could not recover jumptable at 0x011a5748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*(long *)*puVar5 + 0x10))();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

