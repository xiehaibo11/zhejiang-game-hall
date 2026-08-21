
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseNull<0u, rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseNull<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          EncodedInputStream *param_1,GenericDocument *param_2)

{
  ulong __size;
  undefined8 *puVar1;
  void *__ptr;
  void *pvVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  
  plVar3 = *(long **)param_1;
  pcVar6 = (char *)*plVar3;
  pcVar10 = (char *)plVar3[2];
  if (pcVar6 != pcVar10) {
    pcVar6 = pcVar6 + 1;
    *plVar3 = (long)pcVar6;
  }
  pcVar8 = pcVar6;
  if ((pcVar6 != pcVar10) && (*pcVar6 == 'u')) {
    pcVar8 = pcVar6 + 1;
    *plVar3 = (long)pcVar8;
    if ((pcVar8 != pcVar10) && (*pcVar8 == 'l')) {
      pcVar8 = pcVar6 + 2;
      *plVar3 = (long)pcVar8;
      if ((pcVar8 != pcVar10) && (*pcVar8 == 'l')) {
        *plVar3 = (long)(pcVar6 + 3);
        puVar4 = *(undefined8 **)(param_2 + 0x40);
        puVar1 = *(undefined8 **)(param_2 + 0x48);
        puVar7 = puVar4 + 3;
        if (puVar1 < puVar7) {
          __ptr = *(void **)(param_2 + 0x38);
          if (__ptr == (void *)0x0) {
            if (*(long *)(param_2 + 0x28) == 0) {
              pvVar2 = operator_new(1);
              *(void **)(param_2 + 0x28) = pvVar2;
              *(void **)(param_2 + 0x30) = pvVar2;
            }
            uVar9 = *(ulong *)(param_2 + 0x50);
          }
          else {
            uVar9 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
          }
          __size = ((long)puVar4 - (long)__ptr) + 0x18;
          if (__size <= uVar9) {
            __size = uVar9;
          }
          if (__size == 0) {
            free(__ptr);
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = realloc(__ptr,__size);
          }
          puVar4 = (undefined8 *)((long)pvVar2 + ((long)puVar4 - (long)__ptr));
          *(ulong *)(param_2 + 0x48) = (long)pvVar2 + __size;
          puVar7 = puVar4 + 3;
          *(void **)(param_2 + 0x38) = pvVar2;
          *(undefined8 **)(param_2 + 0x40) = puVar4;
        }
        *(undefined8 **)(param_2 + 0x40) = puVar7;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        return;
      }
    }
  }
  lVar5 = plVar3[1];
  *(undefined4 *)(this + 0x30) = 3;
  *(long *)(this + 0x38) = (long)pcVar8 - lVar5;
  return;
}

