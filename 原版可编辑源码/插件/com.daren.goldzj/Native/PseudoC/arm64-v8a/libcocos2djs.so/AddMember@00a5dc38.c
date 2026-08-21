
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
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
                    /* try { // try from 00a5dc54 to 00b5dcf7 has its CatchHandler @ 00a5ddbc */
  uVar13 = *(uint *)this;
  uVar2 = *(uint *)(this + 4);
  uVar7 = (ulong)uVar2;
  if (uVar13 < uVar2) {
    pvVar11 = *(void **)(this + 8);
    goto LAB_00a5de88;
  }
  if (uVar2 == 0) {
    *(undefined4 *)(this + 4) = 0x10;
    puVar12 = *(ulong **)param_3;
    if (puVar12 == (ulong *)0x0) {
LAB_00a5dd00:
      uVar14 = *(ulong *)(param_3 + 8);
      if (uVar14 < 0x301) {
        uVar14 = 0x300;
      }
      if (*(long *)(param_3 + 0x18) == 0) {
        pvVar11 = operator_new(1);
        *(void **)(param_3 + 0x18) = pvVar11;
        *(void **)(param_3 + 0x20) = pvVar11;
      }
      if ((uVar14 == 0xffffffffffffffe8) || (puVar3 = malloc(uVar14 + 0x18), puVar3 == (ulong *)0x0)
         ) goto LAB_00a5de80;
      uVar7 = 0;
      *puVar3 = uVar14;
      puVar15 = puVar3 + 1;
      *puVar15 = 0;
      puVar3[2] = (ulong)puVar12;
      *(ulong **)param_3 = puVar3;
    }
    else {
      puVar15 = puVar12 + 1;
      uVar7 = *puVar15;
                    /* try { // try from 00a5dcf8 to 00b5de13 has its CatchHandler @ 00a5dae4 */
      puVar3 = puVar12;
      if (*puVar12 < uVar7 + 0x300) goto LAB_00a5dd00;
    }
    lVar8 = (long)puVar3 + uVar7;
    uVar7 = uVar7 + 0x300;
LAB_00a5ddc8:
    pvVar11 = (void *)(lVar8 + 0x18);
    *puVar15 = uVar7;
  }
  else {
    pvVar11 = *(void **)(this + 8);
    uVar2 = uVar2 + (uVar2 + 1 >> 1);
    uVar14 = (ulong)uVar2 * 0x30;
    *(uint *)(this + 4) = uVar2;
    if (pvVar11 == (void *)0x0) {
      if (uVar2 == 0) goto LAB_00a5de80;
      puVar12 = *(ulong **)param_3;
      if (puVar12 == (ulong *)0x0) {
LAB_00a5dd74:
                    /* catch() { ... } // from try @ 00a5dbf0 with catch @ 00a5dd74 */
                    /* catch() { ... } // from try @ 00a5dbe8 with catch @ 00a5dd78 */
                    /* catch() { ... } // from try @ 00a5dbc8 with catch @ 00a5dd7c */
        uVar6 = *(ulong *)(param_3 + 8);
        if (*(ulong *)(param_3 + 8) <= uVar14) {
          uVar6 = uVar14;
        }
        if (*(long *)(param_3 + 0x18) == 0) {
                    /* catch() { ... } // from try @ 00a5dbc0 with catch @ 00a5dd8c */
          pvVar11 = operator_new(1);
                    /* catch() { ... } // from try @ 00a5dba4 with catch @ 00a5dd90 */
          *(void **)(param_3 + 0x18) = pvVar11;
          *(void **)(param_3 + 0x20) = pvVar11;
        }
                    /* catch() { ... } // from try @ 00a5dbb4 with catch @ 00a5dd94
                       catch() { ... } // from try @ 00a5dc34 with catch @ 00a5dd94 */
        if ((uVar6 + 0x18 == 0) || (puVar3 = malloc(uVar6 + 0x18), puVar3 == (ulong *)0x0))
        goto LAB_00a5de80;
                    /* catch() { ... } // from try @ 00a5db64 with catch @ 00a5dda4 */
                    /* catch() { ... } // from try @ 00a5db58 with catch @ 00a5dda8 */
        uVar7 = 0;
                    /* catch() { ... } // from try @ 00a5db38 with catch @ 00a5ddac */
        *puVar3 = uVar6;
        puVar15 = puVar3 + 1;
        *puVar15 = 0;
        puVar3[2] = (ulong)puVar12;
                    /* catch() { ... } // from try @ 00a5db70 with catch @ 00a5ddbc
                       catch() { ... } // from try @ 00a5dc54 with catch @ 00a5ddbc */
        *(ulong **)param_3 = puVar3;
      }
      else {
        puVar15 = puVar12 + 1;
        uVar7 = *puVar15;
                    /* catch() { ... } // from try @ 00a5dc18 with catch @ 00a5dd6c */
                    /* catch() { ... } // from try @ 00a5dc10 with catch @ 00a5dd70 */
        puVar3 = puVar12;
        if (*puVar12 < uVar7 + uVar14) goto LAB_00a5dd74;
      }
      lVar8 = (long)puVar3 + uVar7;
      uVar7 = uVar7 + uVar14;
      goto LAB_00a5ddc8;
    }
    if (uVar2 == 0) {
LAB_00a5de80:
      pvVar11 = (void *)0x0;
    }
    else {
      lVar8 = uVar14 + uVar7 * -0x30;
      if (uVar7 * 0x30 <= uVar14 && lVar8 != 0) {
        puVar15 = *(ulong **)param_3;
        puVar3 = puVar15 + 1;
        uVar6 = *puVar3;
        puVar12 = puVar15 + 3;
        if ((void *)((long)puVar12 + uVar7 * -0x30 + uVar6) == pvVar11) {
          uVar10 = *puVar15;
          uVar1 = uVar6 + lVar8;
          if (uVar10 < uVar1) goto LAB_00a5ddfc;
          *puVar3 = uVar1;
                    /* try { // try from 00a5def0 to 00b5def7 has its CatchHandler @ 00a5e0bc */
        }
        else {
          if (puVar15 == (ulong *)0x0) {
LAB_00a5de08:
                    /* try { // try from 00a5de14 to 00b5de67 has its CatchHandler @ 00a5de14
                       catch() { ... } // from try @ 00a5de14 with catch @ 00a5de14
                       catch() { ... } // from try @ 00a5e028 with catch @ 00a5de14 */
            uVar1 = *(ulong *)(param_3 + 8);
            if (*(ulong *)(param_3 + 8) <= uVar14) {
              uVar1 = uVar14;
            }
            if (*(long *)(param_3 + 0x18) == 0) {
              pvVar4 = operator_new(1);
              *(void **)(param_3 + 0x18) = pvVar4;
              *(void **)(param_3 + 0x20) = pvVar4;
            }
            if ((uVar1 + 0x18 == 0) || (puVar5 = malloc(uVar1 + 0x18), puVar5 == (ulong *)0x0))
            goto LAB_00a5de80;
            uVar6 = 0;
            *puVar5 = uVar1;
            puVar3 = puVar5 + 1;
            *puVar3 = 0;
            puVar12 = puVar5 + 3;
            puVar5[2] = (ulong)puVar15;
            *(ulong **)param_3 = puVar5;
          }
          else {
            uVar10 = *puVar15;
LAB_00a5ddfc:
            if (uVar10 < uVar6 + uVar14) goto LAB_00a5de08;
          }
          pvVar4 = (void *)((long)puVar12 + uVar6);
          *puVar3 = uVar6 + uVar14;
          if (pvVar4 == (void *)0x0) goto LAB_00a5de80;
                    /* try { // try from 00a5de68 to 00b5de7f has its CatchHandler @ 00a5e0dc */
          memcpy(pvVar4,pvVar11,uVar7 * 0x30);
          uVar13 = *(uint *)this;
          pvVar11 = pvVar4;
        }
      }
    }
  }
  *(void **)(this + 8) = pvVar11;
LAB_00a5de88:
                    /* try { // try from 00a5de88 to 00b5de93 has its CatchHandler @ 00a5e0d8 */
  uVar17 = *(undefined8 *)(param_1 + 8);
  uVar16 = *(undefined8 *)param_1;
                    /* try { // try from 00a5de94 to 00b5de9f has its CatchHandler @ 00a5e0d4 */
  puVar9 = (undefined8 *)((long)pvVar11 + (ulong)uVar13 * 0x30);
  puVar9[2] = *(undefined8 *)(param_1 + 0x10);
  puVar9[1] = uVar17;
  *puVar9 = uVar16;
                    /* try { // try from 00a5dea0 to 00b5ded3 has its CatchHandler @ 00a5e0ec */
  *(undefined2 *)(param_1 + 0x16) = 0;
  uVar2 = *(uint *)this;
  uVar17 = *(undefined8 *)(param_2 + 8);
  uVar16 = *(undefined8 *)param_2;
  *(undefined8 *)((long)pvVar11 + (ulong)uVar2 * 0x30 + 0x28) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)((long)pvVar11 + (ulong)uVar2 * 0x30 + 0x20) = uVar17;
  *(undefined8 *)((long)pvVar11 + (ulong)uVar2 * 0x30 + 0x18) = uVar16;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(int *)this = *(int *)this + 1;
                    /* try { // try from 00a5ded4 to 00b5dedf has its CatchHandler @ 00a5e0c0 */
                    /* try { // try from 00a5dee4 to 00b5dee7 has its CatchHandler @ 00a5e0c4 */
  return this;
}

