
/* v8::internal::SerializedCodeData::SerializedCodeData(std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> > const*, v8::internal::CodeSerializer const*) */

void __thiscall
v8::internal::SerializedCodeData::SerializedCodeData
          (SerializedCodeData *this,vector *param_1,CodeSerializer *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  int local_68;
  undefined4 uStack_64;
  long local_60;
  
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (SerializedCodeData)0x0;
  *(undefined ***)this = &PTR__SerializedData_01cbb8a0;
  *(undefined8 *)(this + 8) = 0;
  SerializerAllocator::EncodeReservations();
  uVar1 = (int)local_60 - local_68 & 0xfffffffc;
  uVar2 = uVar1 + 0x27 & 0xfffffff8;
  SerializedData::AllocateData
            ((SerializedData *)this,uVar2 + (*(int *)(param_1 + 8) - *(int *)param_1));
  memset(*(void **)(this + 8),0,(ulong)uVar2);
  **(undefined4 **)(this + 8) = 0xc0de0374;
  uVar5 = base::hash_value(Version::patch_);
  uVar5 = base::hash_combine(0,uVar5);
  uVar6 = base::hash_value(Version::build_);
  uVar5 = base::hash_combine(uVar5,uVar6);
  uVar6 = base::hash_value(Version::minor_);
  uVar5 = base::hash_combine(uVar5,uVar6);
  uVar6 = base::hash_value(Version::major_);
  uVar4 = base::hash_combine(uVar5,uVar6);
  *(undefined4 *)(*(long *)(this + 8) + 4) = uVar4;
  *(undefined4 *)(*(long *)(this + 8) + 8) = *(undefined4 *)(param_2 + 0x1c8);
  uVar4 = FlagList::Hash();
  *(undefined4 *)(*(long *)(this + 8) + 0xc) = uVar4;
  *(int *)(*(long *)(this + 8) + 0x10) =
       (int)((ulong)(local_60 - CONCAT44(uStack_64,local_68)) >> 2);
  *(int *)(*(long *)(this + 8) + 0x14) = *(int *)(param_1 + 8) - *(int *)param_1;
  *(undefined4 *)(*(long *)(this + 8) + 0x1c) = 0;
  if (uVar1 != 0) {
    if (uVar1 < 8) {
      lVar9 = -((ulong)(uint)((int)local_60 - local_68) & 0xfffffffc);
      puVar7 = (undefined1 *)(*(long *)(this + 8) + 0x20);
      puVar8 = (undefined1 *)CONCAT44(uStack_64,local_68);
      do {
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        *puVar7 = *puVar8;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (bVar3);
    }
    else {
      MemCopy((undefined1 *)(*(long *)(this + 8) + 0x20),(undefined1 *)CONCAT44(uStack_64,local_68),
              (ulong)uVar1);
    }
  }
  puVar7 = *(undefined1 **)param_1;
  uVar5 = *(long *)(param_1 + 8) - (long)puVar7;
  if (uVar5 != 0) {
    puVar8 = (undefined1 *)(*(long *)(this + 8) + (ulong)uVar2);
    if (uVar5 < 8) {
      lVar9 = (long)puVar7 - *(long *)(param_1 + 8);
      do {
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        *puVar8 = *puVar7;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (bVar3);
    }
    else {
      MemCopy(puVar8,puVar7,uVar5);
    }
  }
  uVar4 = Checksum((internal *)(*(long *)(this + 8) + 0x20),*(int *)(this + 0x10) + -0x20);
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = uVar4;
  if ((void *)CONCAT44(uStack_64,local_68) != (void *)0x0) {
    operator_delete((void *)CONCAT44(uStack_64,local_68));
  }
  return;
}

