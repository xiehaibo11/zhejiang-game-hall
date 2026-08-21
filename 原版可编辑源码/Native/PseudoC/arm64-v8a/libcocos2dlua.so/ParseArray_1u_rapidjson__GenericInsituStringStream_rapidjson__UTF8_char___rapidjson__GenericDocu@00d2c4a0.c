
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseArray<1u,
   rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseArray<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
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
  ulong uVar8;
  void *pvVar9;
  ulong *puVar10;
  uint uVar11;
  GenericInsituStringStream *pGVar12;
  undefined8 *puVar13;
  
  *(long *)param_1 = *(long *)param_1 + 1;
  puVar13 = *(undefined8 **)(param_2 + 0x40);
  puVar2 = *(undefined8 **)(param_2 + 0x48);
  if (puVar2 < puVar13 + 3) {
    pvVar9 = *(void **)(param_2 + 0x38);
    if (pvVar9 == (void *)0x0) {
      if (*(long *)(param_2 + 0x28) == 0) {
        pvVar3 = operator_new(1);
        *(void **)(param_2 + 0x28) = pvVar3;
        *(void **)(param_2 + 0x30) = pvVar3;
      }
      uVar8 = *(ulong *)(param_2 + 0x50);
    }
    else {
      uVar8 = (long)puVar2 + (((ulong)((long)puVar2 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
    }
    uVar7 = ((long)puVar13 - (long)pvVar9) + 0x18;
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      free(pvVar9);
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = realloc(pvVar9,uVar7);
    }
    puVar13 = (undefined8 *)((long)pvVar3 + ((long)puVar13 - (long)pvVar9));
    *(void **)(param_2 + 0x38) = pvVar3;
    *(undefined8 **)(param_2 + 0x40) = puVar13;
    *(ulong *)(param_2 + 0x48) = (long)pvVar3 + uVar7;
  }
  *(undefined8 **)(param_2 + 0x40) = puVar13 + 3;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0x4000000000000;
  pGVar12 = param_1 + 8;
  pbVar5 = *(byte **)param_1;
  while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
    pbVar5 = pbVar5 + 1;
  }
  *(byte **)param_1 = pbVar5;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)pGVar12 = *(undefined8 *)pGVar12;
  if (*(int *)(this + 0x30) == 0) {
    if (*pbVar5 == 0x5d) {
      *(byte **)param_1 = pbVar5 + 1;
      lVar6 = *(long *)(param_2 + 0x40);
      *(undefined2 *)(lVar6 + -2) = 4;
      *(undefined8 *)(lVar6 + -0x18) = 0;
      *(undefined8 *)(lVar6 + -0x10) = 0;
    }
    else {
      uVar11 = 0;
      while (ParseValue<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                       (this,param_1,param_2), *(int *)(this + 0x30) == 0) {
        pbVar5 = *(byte **)param_1;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *(byte **)param_1 = pbVar5;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)pGVar12 = *(undefined8 *)pGVar12;
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
        uVar11 = uVar11 + 1;
        if (*pbVar5 != 0x2c) {
          if (*pbVar5 != 0x5d) {
            lVar6 = *(long *)(param_1 + 0x10);
            *(undefined4 *)(this + 0x30) = 7;
            *(long *)(this + 0x38) = (long)pbVar5 - lVar6;
            return;
          }
          *(byte **)param_1 = pbVar5 + 1;
          puVar13 = *(undefined8 **)(param_2 + 0x18);
          pvVar9 = (void *)(*(long *)(param_2 + 0x40) + (ulong)uVar11 * -0x18);
          *(void **)(param_2 + 0x40) = pvVar9;
          *(undefined2 *)((long)pvVar9 + -2) = 4;
          if (uVar11 == 0) {
            *(undefined8 *)((long)pvVar9 + -0x10) = 0;
            goto LAB_00d2c780;
          }
          puVar10 = (ulong *)*puVar13;
          uVar8 = (ulong)uVar11 * 0x18;
          if ((puVar10 == (ulong *)0x0) ||
             (uVar7 = puVar10[1], puVar4 = puVar10, *puVar10 < uVar7 + uVar8)) {
            uVar1 = puVar13[1];
            if ((ulong)puVar13[1] <= uVar8) {
              uVar1 = uVar8;
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
                puVar4[2] = (ulong)puVar10;
                *puVar4 = uVar1;
                puVar4[1] = 0;
                *puVar13 = puVar4;
                goto LAB_00d2c758;
              }
            }
          }
          else {
LAB_00d2c758:
            pvVar3 = (void *)((long)puVar4 + uVar7 + 0x18);
            puVar4[1] = uVar7 + uVar8;
          }
          *(void **)((long)pvVar9 + -0x10) = pvVar3;
          memcpy(pvVar3,pvVar9,uVar8);
LAB_00d2c780:
          *(uint *)((long)pvVar9 + -0x18) = uVar11;
          *(uint *)((long)pvVar9 + -0x14) = uVar11;
          return;
        }
        pbVar5 = pbVar5 + 1;
        *(byte **)param_1 = pbVar5;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *(byte **)param_1 = pbVar5;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)pGVar12 = *(undefined8 *)pGVar12;
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
      }
    }
  }
  return;
}

