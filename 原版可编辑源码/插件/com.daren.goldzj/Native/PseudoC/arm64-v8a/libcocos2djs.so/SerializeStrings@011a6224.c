
/* v8::internal::HeapSnapshotJSONSerializer::SerializeStrings() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeStrings(HeapSnapshotJSONSerializer *this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar1 = *(int *)(this + 0x14) + 1;
  uVar9 = (ulong)uVar1 << 3;
  puVar4 = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
  if (puVar4 == (undefined8 *)0x0) {
    plVar5 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    puVar4 = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  plVar6 = *(long **)(this + 8) + (ulong)*(uint *)(this + 0x10) * 3;
  plVar5 = *(long **)(this + 8);
  do {
    if (plVar6 <= plVar5) {
LAB_011a62d0:
      OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"<dummy>\"");
      if ((int)uVar1 < 2) {
        if (puVar4 == (undefined8 *)0x0) {
          return;
        }
      }
      else {
        puVar11 = *(undefined8 **)(this + 0x28);
        lVar8 = (ulong)uVar1 - 2;
        puVar10 = puVar4;
        do {
          puVar10 = puVar10 + 1;
          iVar3 = *(int *)(puVar11 + 4);
          *(int *)(puVar11 + 4) = iVar3 + 1;
          *(undefined1 *)(puVar11[2] + (long)iVar3) = 0x2c;
          if ((*(int *)(puVar11 + 4) == *(int *)(puVar11 + 1)) &&
             (*(char *)((long)puVar11 + 0x24) == '\0')) {
            iVar3 = (**(code **)(*(long *)*puVar11 + 0x20))((long *)*puVar11,puVar11[2]);
            if (iVar3 == 1) {
              *(undefined1 *)((long)puVar11 + 0x24) = 1;
            }
            *(undefined4 *)(puVar11 + 4) = 0;
          }
          SerializeString(this,(uchar *)*puVar10);
          puVar11 = *(undefined8 **)(this + 0x28);
        } while ((*(char *)((long)puVar11 + 0x24) == '\0') &&
                (bVar2 = lVar8 != 0, lVar8 = lVar8 + -1, bVar2));
      }
      operator_delete__(puVar4);
      return;
    }
    plVar7 = plVar5 + 3;
    lVar8 = *plVar5;
    plVar5 = plVar7;
  } while (lVar8 == 0);
  do {
    *(long *)((long)puVar4 +
             (-((ulong)plVar7[-2] >> 0x1f & 1) & 0xfffffff800000000 |
             (plVar7[-2] & 0xffffffffU) << 3)) = plVar7[-3];
    plVar5 = plVar7;
    do {
      if (plVar6 <= plVar5) goto LAB_011a62d0;
      plVar7 = plVar5 + 3;
      lVar8 = *plVar5;
      plVar5 = plVar7;
    } while (lVar8 == 0);
  } while( true );
}

