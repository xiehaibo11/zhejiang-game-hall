
/* rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::AddMember(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>&) */

GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *
__thiscall
rapidjson::
GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
AddMember(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          *this,GenericValue *param_1,GenericValue *param_2,MemoryPoolAllocator *param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(uint *)this;
  uVar1 = *(uint *)(this + 4);
  if (uVar8 < uVar1) {
    lVar2 = *(long *)(this + 8);
    goto LAB_00c6c5f0;
  }
  if (uVar1 == 0) {
    *(undefined4 *)(this + 4) = 0x10;
    puVar9 = *(ulong **)param_3;
    if ((puVar9 == (ulong *)0x0) || (uVar6 = puVar9[1], puVar4 = puVar9, *puVar9 < uVar6 + 0x300)) {
      uVar5 = *(ulong *)(param_3 + 8);
      if (uVar5 < 0x301) {
        uVar5 = 0x300;
      }
      if (*(long *)(param_3 + 0x18) == 0) {
        pvVar3 = operator_new(1);
        *(void **)(param_3 + 0x18) = pvVar3;
        *(void **)(param_3 + 0x20) = pvVar3;
      }
      lVar2 = 0;
      if ((uVar5 + 0x18 == 0) || (puVar4 = malloc(uVar5 + 0x18), lVar2 = 0, puVar4 == (ulong *)0x0))
      goto LAB_00c6c5ec;
      uVar6 = 0;
      puVar4[2] = (ulong)puVar9;
      *puVar4 = uVar5;
      puVar4[1] = 0;
      *(ulong **)param_3 = puVar4;
    }
    lVar2 = (long)puVar4 + uVar6 + 0x18;
    puVar4[1] = uVar6 + 0x300;
  }
  else {
    uVar8 = uVar1 + (uVar1 + 1 >> 1);
    *(uint *)(this + 4) = uVar8;
    lVar2 = MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc
                      ((MemoryPoolAllocator<rapidjson::CrtAllocator> *)param_3,*(void **)(this + 8),
                       (ulong)uVar1 * 0x30,(ulong)uVar8 * 0x30);
    uVar8 = *(uint *)this;
  }
LAB_00c6c5ec:
  *(long *)(this + 8) = lVar2;
LAB_00c6c5f0:
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)param_1;
  puVar7 = (undefined8 *)(lVar2 + (ulong)uVar8 * 0x30);
  puVar7[2] = *(undefined8 *)(param_1 + 0x10);
  puVar7[1] = uVar11;
  *puVar7 = uVar10;
  *(undefined2 *)(param_1 + 0x16) = 0;
  uVar11 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)param_2;
  lVar2 = lVar2 + (ulong)*(uint *)this * 0x30;
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar2 + 0x20) = uVar11;
  *(undefined8 *)(lVar2 + 0x18) = uVar10;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(int *)this = *(int *)this + 1;
  return this;
}

