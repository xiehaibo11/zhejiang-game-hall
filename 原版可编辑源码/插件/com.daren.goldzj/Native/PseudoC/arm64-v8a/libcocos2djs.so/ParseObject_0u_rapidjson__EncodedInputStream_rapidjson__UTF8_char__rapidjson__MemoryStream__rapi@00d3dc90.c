
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseObject<0u, rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseObject<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          EncodedInputStream *param_1,GenericDocument *param_2)

{
  ulong __size;
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  void *__ptr;
  undefined8 *puVar13;
  
  plVar4 = *(long **)param_1;
  if (*plVar4 != plVar4[2]) {
    *plVar4 = *plVar4 + 1;
  }
  puVar13 = *(undefined8 **)(param_2 + 0x40);
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  puVar5 = puVar13 + 3;
  if (puVar1 < puVar5) {
    __ptr = *(void **)(param_2 + 0x38);
    if (__ptr == (void *)0x0) {
      if (*(long *)(param_2 + 0x28) == 0) {
        pvVar3 = operator_new(1);
        *(void **)(param_2 + 0x28) = pvVar3;
        *(void **)(param_2 + 0x30) = pvVar3;
      }
      uVar2 = *(ulong *)(param_2 + 0x50);
    }
    else {
      uVar2 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)puVar13 - (long)__ptr) + 0x18;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    if (__size == 0) {
      free(__ptr);
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = realloc(__ptr,__size);
    }
    puVar13 = (undefined8 *)((long)pvVar3 + ((long)puVar13 - (long)__ptr));
    *(ulong *)(param_2 + 0x48) = (long)pvVar3 + __size;
    puVar5 = puVar13 + 3;
    *(void **)(param_2 + 0x38) = pvVar3;
    *(undefined8 **)(param_2 + 0x40) = puVar13;
  }
  *(undefined8 **)(param_2 + 0x40) = puVar5;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  *(undefined2 *)((long)puVar13 + 0x16) = 3;
  plVar4 = *(long **)param_1;
  pbVar8 = (byte *)*plVar4;
  pbVar11 = (byte *)plVar4[2];
  pbVar9 = pbVar8;
  while (((pbVar8 != pbVar11 && (pbVar9 = pbVar8, *pbVar8 < 0x21)) &&
         ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) != 0))) {
    pbVar8 = pbVar8 + 1;
    *plVar4 = (long)pbVar8;
    pbVar9 = pbVar11;
  }
  if (*(int *)(this + 0x30) == 0) {
    if (pbVar9 != pbVar11) {
      if (*pbVar9 == 0x7d) {
        *plVar4 = (long)(pbVar9 + 1);
        lVar6 = *(long *)(param_2 + 0x40);
        *(undefined2 *)(lVar6 + -2) = 3;
        *(undefined8 *)(lVar6 + -0x18) = 0;
        *(undefined8 *)(lVar6 + -0x10) = 0;
        return;
      }
      if (*pbVar9 == 0x22) {
        uVar12 = 0;
        do {
          ParseString<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                    ((EncodedInputStream *)this,(GenericDocument *)param_1,SUB81(param_2,0));
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          plVar4 = *(long **)param_1;
          pbVar8 = (byte *)*plVar4;
          pbVar9 = (byte *)plVar4[2];
          if (pbVar8 != pbVar9) {
            while ((*pbVar8 < 0x21 && ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) != 0))) {
              pbVar8 = pbVar8 + 1;
              *plVar4 = (long)pbVar8;
              if (pbVar9 == pbVar8) goto LAB_00d3df74;
            }
          }
          if ((pbVar8 == pbVar9) || (*pbVar8 != 0x3a)) {
LAB_00d3df74:
            lVar6 = plVar4[1];
            uVar10 = 5;
            goto LAB_00d3df7c;
          }
          pbVar8 = pbVar8 + 1;
          *plVar4 = (long)pbVar8;
          while (((pbVar8 != pbVar9 && (*pbVar8 < 0x21)) &&
                 ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) != 0))) {
            pbVar8 = pbVar8 + 1;
            *plVar4 = (long)pbVar8;
          }
          ParseValue<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                    (this,param_1,param_2);
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          plVar4 = *(long **)param_1;
          pbVar8 = (byte *)*plVar4;
          pbVar9 = (byte *)plVar4[2];
          if (pbVar8 != pbVar9) {
            while ((*pbVar8 < 0x21 && ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) != 0))) {
              pbVar8 = pbVar8 + 1;
              *plVar4 = (long)pbVar8;
              if (pbVar9 == pbVar8) goto LAB_00d3df68;
            }
          }
          if (pbVar8 == pbVar9) {
LAB_00d3df68:
            lVar6 = plVar4[1];
            uVar10 = 6;
LAB_00d3df7c:
            *(undefined4 *)(this + 0x30) = uVar10;
            *(long *)(this + 0x38) = (long)pbVar8 - lVar6;
            return;
          }
          uVar12 = uVar12 + 1;
          if (*pbVar8 != 0x2c) {
            if (*pbVar8 != 0x7d) goto LAB_00d3df68;
            *plVar4 = (long)(pbVar8 + 1);
            uVar2 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                    ::EndObject((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                                 *)param_2,uVar12);
            if ((uVar2 & 1) != 0) {
              return;
            }
            uVar10 = 0x10;
            lVar6 = **(long **)param_1;
            lVar7 = (*(long **)param_1)[1];
            goto LAB_00d3df10;
          }
          pbVar8 = pbVar8 + 1;
          *plVar4 = (long)pbVar8;
          while( true ) {
            if (pbVar8 == pbVar9) goto LAB_00d3df08;
            if ((0x20 < *pbVar8) || ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) == 0)) break;
            pbVar8 = pbVar8 + 1;
            *plVar4 = (long)pbVar8;
          }
        } while ((pbVar9 != pbVar8) && (*pbVar8 == 0x22));
      }
    }
LAB_00d3df08:
    lVar6 = *plVar4;
    lVar7 = plVar4[1];
    uVar10 = 4;
LAB_00d3df10:
    *(undefined4 *)(this + 0x30) = uVar10;
    *(long *)(this + 0x38) = lVar6 - lVar7;
  }
  return;
}

