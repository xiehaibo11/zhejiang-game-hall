
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseArray<0u, rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseArray<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          EncodedInputStream *param_1,GenericDocument *param_2)

{
  ulong __size;
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  void *__ptr;
  undefined8 *puVar12;
  
  plVar5 = *(long **)param_1;
  if (*plVar5 != plVar5[2]) {
    *plVar5 = *plVar5 + 1;
  }
  puVar12 = *(undefined8 **)(param_2 + 0x40);
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  puVar6 = puVar12 + 3;
  if (puVar1 < puVar6) {
    __ptr = *(void **)(param_2 + 0x38);
    if (__ptr == (void *)0x0) {
      if (*(long *)(param_2 + 0x28) == 0) {
        pvVar3 = operator_new(1);
        *(void **)(param_2 + 0x28) = pvVar3;
        *(void **)(param_2 + 0x30) = pvVar3;
      }
      uVar4 = *(ulong *)(param_2 + 0x50);
    }
    else {
      uVar4 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)puVar12 - (long)__ptr) + 0x18;
    if (__size <= uVar4) {
      __size = uVar4;
    }
    if (__size == 0) {
      free(__ptr);
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = realloc(__ptr,__size);
    }
    puVar12 = (undefined8 *)((long)pvVar3 + ((long)puVar12 - (long)__ptr));
    *(ulong *)(param_2 + 0x48) = (long)pvVar3 + __size;
    puVar6 = puVar12 + 3;
    *(void **)(param_2 + 0x38) = pvVar3;
    *(undefined8 **)(param_2 + 0x40) = puVar12;
  }
  *(undefined8 **)(param_2 + 0x40) = puVar6;
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  *(undefined2 *)((long)puVar12 + 0x16) = 4;
  plVar5 = *(long **)param_1;
  pbVar8 = (byte *)*plVar5;
  pbVar10 = (byte *)plVar5[2];
  pbVar9 = pbVar8;
  while (((pbVar8 != pbVar10 && (pbVar9 = pbVar8, *pbVar8 < 0x21)) &&
         ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) != 0))) {
    pbVar8 = pbVar8 + 1;
    *plVar5 = (long)pbVar8;
    pbVar9 = pbVar10;
  }
  if (*(int *)(this + 0x30) == 0) {
    if ((pbVar9 == pbVar10) || (*pbVar9 != 0x5d)) {
      ParseValue<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                (this,param_1,param_2);
      if (*(int *)(this + 0x30) == 0) {
        uVar11 = 0;
        do {
          plVar5 = *(long **)param_1;
          pbVar8 = (byte *)*plVar5;
          pbVar9 = (byte *)plVar5[2];
          if (pbVar8 != pbVar9) {
            while ((*pbVar8 < 0x21 && ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) != 0))) {
              pbVar8 = pbVar8 + 1;
              *plVar5 = (long)pbVar8;
              if (pbVar9 == pbVar8) goto LAB_00d3e264;
            }
          }
          if (pbVar8 == pbVar9) {
LAB_00d3e264:
            lVar7 = plVar5[1];
            *(undefined4 *)(this + 0x30) = 7;
            lVar7 = (long)pbVar8 - lVar7;
LAB_00d3e274:
            *(long *)(this + 0x38) = lVar7;
            return;
          }
          uVar11 = uVar11 + 1;
          if (*pbVar8 != 0x2c) {
            if (*pbVar8 == 0x5d) {
              *plVar5 = (long)(pbVar8 + 1);
              uVar4 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      ::EndArray((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                                  *)param_2,uVar11);
              if ((uVar4 & 1) != 0) {
                return;
              }
              lVar7 = **(long **)param_1;
              lVar2 = (*(long **)param_1)[1];
              *(undefined4 *)(this + 0x30) = 0x10;
              lVar7 = lVar7 - lVar2;
              goto LAB_00d3e274;
            }
            goto LAB_00d3e264;
          }
          pbVar8 = pbVar8 + 1;
          *plVar5 = (long)pbVar8;
          while (((pbVar8 != pbVar9 && (*pbVar8 < 0x21)) &&
                 ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) != 0))) {
            pbVar8 = pbVar8 + 1;
            *plVar5 = (long)pbVar8;
          }
          ParseValue<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                    (this,param_1,param_2);
        } while (*(int *)(this + 0x30) == 0);
      }
    }
    else {
      *plVar5 = (long)(pbVar9 + 1);
      lVar7 = *(long *)(param_2 + 0x40);
      *(undefined2 *)(lVar7 + -2) = 4;
      *(undefined8 *)(lVar7 + -0x18) = 0;
      *(undefined8 *)(lVar7 + -0x10) = 0;
    }
  }
  return;
}

