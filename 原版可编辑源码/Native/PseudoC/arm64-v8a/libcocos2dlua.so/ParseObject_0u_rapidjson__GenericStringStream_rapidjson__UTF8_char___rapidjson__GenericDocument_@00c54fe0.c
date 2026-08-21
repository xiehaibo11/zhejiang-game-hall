
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseObject<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericStringStream *param_1,GenericDocument *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong *puVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  void *pvVar10;
  ulong *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  
  *(long *)param_1 = *(long *)param_1 + 1;
  puVar13 = *(undefined8 **)(param_2 + 0x40);
  puVar2 = *(undefined8 **)(param_2 + 0x48);
  if (puVar2 < puVar13 + 3) {
    pvVar10 = *(void **)(param_2 + 0x38);
    if (pvVar10 == (void *)0x0) {
      if (*(long *)(param_2 + 0x28) == 0) {
        pvVar3 = operator_new(1);
        *(void **)(param_2 + 0x28) = pvVar3;
        *(void **)(param_2 + 0x30) = pvVar3;
      }
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    else {
      uVar9 = (long)puVar2 + (((ulong)((long)puVar2 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
    }
    uVar7 = ((long)puVar13 - (long)pvVar10) + 0x18;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      free(pvVar10);
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = realloc(pvVar10,uVar7);
    }
    puVar13 = (undefined8 *)((long)pvVar3 + ((long)puVar13 - (long)pvVar10));
    *(void **)(param_2 + 0x38) = pvVar3;
    *(undefined8 **)(param_2 + 0x40) = puVar13;
    *(ulong *)(param_2 + 0x48) = (long)pvVar3 + uVar7;
  }
  *(undefined8 **)(param_2 + 0x40) = puVar13 + 3;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0x3000000000000;
  pbVar5 = *(byte **)param_1;
  while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
    pbVar5 = pbVar5 + 1;
  }
  *(byte **)param_1 = pbVar5;
  if (*(int *)(this + 0x30) == 0) {
    if (*pbVar5 == 0x7d) {
      *(byte **)param_1 = pbVar5 + 1;
      lVar6 = *(long *)(param_2 + 0x40);
      *(undefined2 *)(lVar6 + -2) = 3;
      *(undefined8 *)(lVar6 + -0x18) = 0;
      *(undefined8 *)(lVar6 + -0x10) = 0;
    }
    else {
      if (*pbVar5 == 0x22) {
        uVar12 = 0;
        do {
          ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                    (this,param_1,param_2,true);
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          pbVar5 = *(byte **)param_1;
          while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
            pbVar5 = pbVar5 + 1;
          }
          *(byte **)param_1 = pbVar5;
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          if (*pbVar5 != 0x3a) {
            lVar6 = *(long *)(param_1 + 8);
            uVar8 = 5;
            goto LAB_00c552c8;
          }
          pbVar5 = pbVar5 + 1;
          *(byte **)param_1 = pbVar5;
          while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
            pbVar5 = pbVar5 + 1;
          }
          *(byte **)param_1 = pbVar5;
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          ParseValue<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                    (this,param_1,param_2);
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          pbVar5 = *(byte **)param_1;
          while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
            pbVar5 = pbVar5 + 1;
          }
          *(byte **)param_1 = pbVar5;
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          uVar12 = uVar12 + 1;
          if (*pbVar5 != 0x2c) {
            if (*pbVar5 == 0x7d) {
              *(byte **)param_1 = pbVar5 + 1;
              puVar13 = *(undefined8 **)(param_2 + 0x18);
              pvVar10 = (void *)(*(long *)(param_2 + 0x40) + (ulong)uVar12 * -0x30);
              *(void **)(param_2 + 0x40) = pvVar10;
              *(undefined2 *)((long)pvVar10 + -2) = 3;
              if (uVar12 == 0) {
                *(undefined8 *)((long)pvVar10 + -0x10) = 0;
                goto LAB_00c5533c;
              }
              puVar11 = (ulong *)*puVar13;
              uVar9 = (ulong)uVar12 * 0x30;
              if ((puVar11 == (ulong *)0x0) ||
                 (uVar7 = puVar11[1], puVar4 = puVar11, *puVar11 < uVar7 + uVar9)) {
                uVar1 = puVar13[1];
                if ((ulong)puVar13[1] <= uVar9) {
                  uVar1 = uVar9;
                }
                if (puVar13[3] == 0) {
                  pvVar3 = operator_new(1);
                  puVar13[3] = pvVar3;
                  puVar13[4] = pvVar3;
                }
                pvVar3 = (void *)0x0;
                if (uVar1 + 0x18 != 0) {
                  puVar4 = malloc(uVar1 + 0x18);
                  pvVar3 = (void *)0x0;
                  if (puVar4 != (ulong *)0x0) {
                    uVar7 = 0;
                    puVar4[2] = (ulong)puVar11;
                    *puVar4 = uVar1;
                    puVar4[1] = 0;
                    *puVar13 = puVar4;
                    goto LAB_00c5529c;
                  }
                }
              }
              else {
LAB_00c5529c:
                pvVar3 = (void *)((long)puVar4 + uVar7 + 0x18);
                puVar4[1] = uVar7 + uVar9;
              }
              *(void **)((long)pvVar10 + -0x10) = pvVar3;
              memcpy(pvVar3,pvVar10,uVar9);
LAB_00c5533c:
              *(uint *)((long)pvVar10 + -0x18) = uVar12;
              *(uint *)((long)pvVar10 + -0x14) = uVar12;
              return;
            }
            lVar6 = *(long *)(param_1 + 8);
            uVar8 = 6;
            goto LAB_00c552c8;
          }
          pbVar5 = pbVar5 + 1;
          *(byte **)param_1 = pbVar5;
          while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
            pbVar5 = pbVar5 + 1;
          }
          *(byte **)param_1 = pbVar5;
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
        } while (*pbVar5 == 0x22);
      }
      lVar6 = *(long *)(param_1 + 8);
      uVar8 = 4;
LAB_00c552c8:
      *(undefined4 *)(this + 0x30) = uVar8;
      *(long *)(this + 0x38) = (long)pbVar5 - lVar6;
    }
  }
  return;
}

