
/* rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(char const*,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::
GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
GenericValue(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             *this,char *param_1,MemoryPoolAllocator *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  void *pvVar3;
  char *pcVar4;
  ulong uVar5;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *__dest;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  pcVar4 = param_1 + -1;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  uVar7 = (long)pcVar4 - (long)param_1;
  uVar6 = (uint)uVar7;
  if (uVar6 < 0x16) {
    *(undefined2 *)(this + 0x16) = 0x1c05;
    this[0x15] = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  )('\x15' - (char)uVar7);
    __dest = this;
    goto LAB_00c6b4dc;
  }
  *(undefined2 *)(this + 0x16) = 0xc05;
  *(uint *)this = uVar6;
  if (uVar6 + 1 == 0) {
LAB_00c6b4d4:
    __dest = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)0x0;
  }
  else {
    puVar9 = *(ulong **)param_2;
    uVar8 = (ulong)(uVar6 + 1) + 7 & 0x1fffffff8;
    if ((puVar9 == (ulong *)0x0) || (uVar5 = puVar9[1], puVar2 = puVar9, *puVar9 < uVar5 + uVar8)) {
      uVar1 = *(ulong *)(param_2 + 8);
      if (*(ulong *)(param_2 + 8) <= uVar8) {
        uVar1 = uVar8;
      }
      if (*(long *)(param_2 + 0x18) == 0) {
        pvVar3 = operator_new(1);
        *(void **)(param_2 + 0x18) = pvVar3;
        *(void **)(param_2 + 0x20) = pvVar3;
      }
      if ((uVar1 == 0xffffffffffffffe8) || (puVar2 = malloc(uVar1 + 0x18), puVar2 == (ulong *)0x0))
      goto LAB_00c6b4d4;
      uVar5 = 0;
      puVar2[2] = (ulong)puVar9;
      *puVar2 = uVar1;
      puVar2[1] = 0;
      *(ulong **)param_2 = puVar2;
    }
    __dest = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)((long)puVar2 + uVar5 + 0x18);
    puVar2[1] = uVar5 + uVar8;
  }
  *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> **)
   (this + 8) = __dest;
LAB_00c6b4dc:
  memcpy(__dest,param_1,uVar7 & 0xffffffff);
  __dest[uVar7 & 0xffffffff] =
       (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>)
       0x0;
  return;
}

