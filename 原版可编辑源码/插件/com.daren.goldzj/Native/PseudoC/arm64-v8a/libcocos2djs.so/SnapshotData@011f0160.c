
/* v8::internal::SnapshotData::SnapshotData(v8::internal::Serializer const*) */

void __thiscall v8::internal::SnapshotData::SnapshotData(SnapshotData *this,Serializer *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  int local_58;
  undefined4 uStack_54;
  long local_50;
  
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (SnapshotData)0x0;
  *(undefined ***)this = &PTR__SerializedData_01cbbb60;
  *(undefined8 *)(this + 8) = 0;
  SerializerAllocator::EncodeReservations();
  uVar1 = (int)local_50 - local_58 & 0xfffffffc;
  uVar2 = uVar1 + 0x13 & 0xfffffff8;
  SerializedData::AllocateData
            ((SerializedData *)this,uVar2 + (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)));
  memset(*(void **)(this + 8),0,(ulong)uVar2);
  **(undefined4 **)(this + 8) = 0xc0de0374;
  *(int *)(*(long *)(this + 8) + 4) = (int)((ulong)(local_50 - CONCAT44(uStack_54,local_58)) >> 2);
  *(int *)(*(long *)(this + 8) + 8) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50);
  if (uVar1 != 0) {
    if (uVar1 < 8) {
      lVar7 = -((ulong)(uint)((int)local_50 - local_58) & 0xfffffffc);
      puVar5 = (undefined1 *)(*(long *)(this + 8) + 0xc);
      puVar6 = (undefined1 *)CONCAT44(uStack_54,local_58);
      do {
        bVar4 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        *puVar5 = *puVar6;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (bVar4);
    }
    else {
      MemCopy((undefined1 *)(*(long *)(this + 8) + 0xc),(undefined1 *)CONCAT44(uStack_54,local_58),
              (ulong)uVar1);
    }
  }
  puVar5 = *(undefined1 **)(param_1 + 0x50);
  uVar3 = *(long *)(param_1 + 0x58) - (long)puVar5;
  if (uVar3 != 0) {
    puVar6 = (undefined1 *)(*(long *)(this + 8) + (ulong)uVar2);
    if (uVar3 < 8) {
      lVar7 = (long)puVar5 - *(long *)(param_1 + 0x58);
      do {
        bVar4 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        *puVar6 = *puVar5;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (bVar4);
    }
    else {
      MemCopy(puVar6,puVar5,uVar3);
    }
  }
  if (CONCAT44(uStack_54,local_58) != 0) {
    operator_delete((void *)CONCAT44(uStack_54,local_58));
  }
  return;
}

