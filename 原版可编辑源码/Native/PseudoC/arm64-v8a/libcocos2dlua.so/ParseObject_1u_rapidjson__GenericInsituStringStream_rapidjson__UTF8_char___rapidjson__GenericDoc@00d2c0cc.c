
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseObject<1u,
   rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseObject<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericInsituStringStream *param_1,GenericDocument *param_2)

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
  GenericInsituStringStream *pGVar13;
  undefined8 *puVar14;
  
  *(long *)param_1 = *(long *)param_1 + 1;
  puVar14 = *(undefined8 **)(param_2 + 0x40);
  puVar2 = *(undefined8 **)(param_2 + 0x48);
  if (puVar2 < puVar14 + 3) {
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
    uVar7 = ((long)puVar14 - (long)pvVar10) + 0x18;
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
    puVar14 = (undefined8 *)((long)pvVar3 + ((long)puVar14 - (long)pvVar10));
    *(void **)(param_2 + 0x38) = pvVar3;
    *(undefined8 **)(param_2 + 0x40) = puVar14;
    *(ulong *)(param_2 + 0x48) = (long)pvVar3 + uVar7;
  }
  *(undefined8 **)(param_2 + 0x40) = puVar14 + 3;
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0x3000000000000;
  pGVar13 = param_1 + 8;
  pbVar5 = *(byte **)param_1;
  while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
    pbVar5 = pbVar5 + 1;
  }
  *(byte **)param_1 = pbVar5;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)pGVar13 = *(undefined8 *)pGVar13;
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
          ParseString<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                    (this,param_1,param_2,true);
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          pbVar5 = *(byte **)param_1;
          while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
            pbVar5 = pbVar5 + 1;
          }
          *(byte **)param_1 = pbVar5;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)pGVar13 = *(undefined8 *)pGVar13;
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          if (*pbVar5 != 0x3a) {
            lVar6 = *(long *)(param_1 + 0x10);
            uVar8 = 5;
            goto LAB_00d2c418;
          }
          pbVar5 = pbVar5 + 1;
          *(byte **)param_1 = pbVar5;
          while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
            pbVar5 = pbVar5 + 1;
          }
          *(byte **)param_1 = pbVar5;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)pGVar13 = *(undefined8 *)pGVar13;
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          ParseValue<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                    (this,param_1,param_2);
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          pbVar5 = *(byte **)param_1;
          while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
            pbVar5 = pbVar5 + 1;
          }
          *(byte **)param_1 = pbVar5;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)pGVar13 = *(undefined8 *)pGVar13;
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
          uVar12 = uVar12 + 1;
          if (*pbVar5 != 0x2c) {
            if (*pbVar5 == 0x7d) {
              *(byte **)param_1 = pbVar5 + 1;
              puVar14 = *(undefined8 **)(param_2 + 0x18);
              pvVar10 = (void *)(*(long *)(param_2 + 0x40) + (ulong)uVar12 * -0x30);
              *(void **)(param_2 + 0x40) = pvVar10;
              *(undefined2 *)((long)pvVar10 + -2) = 3;
              if (uVar12 == 0) {
                *(undefined8 *)((long)pvVar10 + -0x10) = 0;
                goto LAB_00d2c48c;
              }
              puVar11 = (ulong *)*puVar14;
              uVar9 = (ulong)uVar12 * 0x30;
              if ((puVar11 == (ulong *)0x0) ||
                 (uVar7 = puVar11[1], puVar4 = puVar11, *puVar11 < uVar7 + uVar9)) {
                uVar1 = puVar14[1];
                if ((ulong)puVar14[1] <= uVar9) {
                  uVar1 = uVar9;
                }
                if (puVar14[3] == 0) {
                  pvVar3 = operator_new(1);
                  puVar14[3] = pvVar3;
                  puVar14[4] = pvVar3;
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
                    *puVar14 = puVar4;
                    goto LAB_00d2c3ec;
                  }
                }
              }
              else {
LAB_00d2c3ec:
                pvVar3 = (void *)((long)puVar4 + uVar7 + 0x18);
                puVar4[1] = uVar7 + uVar9;
              }
              *(void **)((long)pvVar10 + -0x10) = pvVar3;
              memcpy(pvVar3,pvVar10,uVar9);
LAB_00d2c48c:
              *(uint *)((long)pvVar10 + -0x18) = uVar12;
              *(uint *)((long)pvVar10 + -0x14) = uVar12;
              return;
            }
            lVar6 = *(long *)(param_1 + 0x10);
            uVar8 = 6;
            goto LAB_00d2c418;
          }
          pbVar5 = pbVar5 + 1;
          *(byte **)param_1 = pbVar5;
          while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
            pbVar5 = pbVar5 + 1;
          }
          *(byte **)param_1 = pbVar5;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)pGVar13 = *(undefined8 *)pGVar13;
          if (*(int *)(this + 0x30) != 0) {
            return;
          }
        } while (*pbVar5 == 0x22);
      }
      lVar6 = *(long *)(param_1 + 0x10);
      uVar8 = 4;
LAB_00d2c418:
      *(undefined4 *)(this + 0x30) = uVar8;
      *(long *)(this + 0x38) = (long)pbVar5 - lVar6;
    }
  }
  return;
}

