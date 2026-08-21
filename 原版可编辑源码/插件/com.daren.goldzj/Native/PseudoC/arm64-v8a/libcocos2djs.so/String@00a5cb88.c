
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>::String(char
   const*, unsigned int, bool) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::String(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
         *this,char *param_1,uint param_2,bool param_3)

{
  ulong uVar1;
  uint *puVar2;
  void *pvVar3;
  ulong *puVar4;
  void *pvVar5;
  uint *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  
                    /* try { // try from 00a5cb98 to 00b5cbd3 has its CatchHandler @ 00a5ccb0 */
  puVar2 = *(uint **)(this + 0x40);
  puVar6 = *(uint **)(this + 0x48);
  if (puVar6 < puVar2 + 6) {
    pvVar3 = *(void **)(this + 0x38);
    if (pvVar3 == (void *)0x0) {
      if (*(long *)(this + 0x28) == 0) {
        pvVar5 = operator_new(1);
        *(void **)(this + 0x28) = pvVar5;
        *(void **)(this + 0x30) = pvVar5;
      }
      uVar9 = *(ulong *)(this + 0x50);
    }
    else {
      uVar9 = (long)puVar6 + (((ulong)((long)puVar6 + (1 - (long)pvVar3)) >> 1) - (long)pvVar3);
    }
    uVar1 = ((long)puVar2 - (long)pvVar3) + 0x18;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
                    /* try { // try from 00a5cd08 to 00b5cd5b has its CatchHandler @ 00a5cd08
                       catch() { ... } // from try @ 00a5cd08 with catch @ 00a5cd08
                       catch() { ... } // from try @ 00a5d060 with catch @ 00a5cd08 */
    if (uVar1 == 0) {
      free(pvVar3);
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = realloc(pvVar3,uVar1);
    }
    puVar2 = (uint *)((long)pvVar5 + ((long)puVar2 - (long)pvVar3));
    *(ulong *)(this + 0x48) = (long)pvVar5 + uVar1;
    *(void **)(this + 0x38) = pvVar5;
    *(uint **)(this + 0x40) = puVar2;
    *(uint **)(this + 0x40) = puVar2 + 6;
  }
  else {
    *(uint **)(this + 0x40) = puVar2 + 6;
  }
  if (!param_3) {
    *(char **)(puVar2 + 2) = param_1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[0] = 0;
    puVar2[1] = 0;
    *(undefined2 *)((long)puVar2 + 0x16) = 0x405;
    *puVar2 = param_2;
    return 1;
  }
  puVar8 = *(undefined8 **)(this + 0x18);
  puVar2[0] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
                    /* try { // try from 00a5cbd4 to 00b5cd07 has its CatchHandler @ 00a5c87c */
  puVar2[4] = 0;
  puVar2[5] = 0;
  if (param_2 < 0x16) {
    *(undefined2 *)((long)puVar2 + 0x16) = 0x1c05;
    *(char *)((long)puVar2 + 0x15) = '\x15' - (char)param_2;
    puVar6 = puVar2;
    goto LAB_00a5cca0;
  }
  *(undefined2 *)((long)puVar2 + 0x16) = 0xc05;
  *puVar2 = param_2;
  if (param_2 + 1 == 0) {
LAB_00a5cc94:
    puVar6 = (uint *)0x0;
  }
  else {
    puVar10 = (ulong *)*puVar8;
    uVar9 = (ulong)(param_2 + 1) + 7 & 0x1fffffff8;
    if (puVar10 == (ulong *)0x0) {
LAB_00a5cc34:
      uVar1 = puVar8[1];
      if ((ulong)puVar8[1] <= uVar9) {
        uVar1 = uVar9;
      }
      if (puVar8[3] == 0) {
                    /* catch() { ... } // from try @ 00a5ca04 with catch @ 00a5cc48 */
                    /* catch() { ... } // from try @ 00a5c9fc with catch @ 00a5cc4c */
        pvVar3 = operator_new(1);
                    /* catch() { ... } // from try @ 00a5c9dc with catch @ 00a5cc50 */
        puVar8[3] = pvVar3;
        puVar8[4] = pvVar3;
      }
                    /* catch() { ... } // from try @ 00a5c9d4 with catch @ 00a5cc54 */
                    /* catch() { ... } // from try @ 00a5c9b4 with catch @ 00a5cc58 */
      if (uVar1 + 0x18 == 0) goto LAB_00a5cc94;
      puVar4 = malloc(uVar1 + 0x18);
      puVar6 = (uint *)0x0;
      if (puVar4 != (ulong *)0x0) {
                    /* catch() { ... } // from try @ 00a5c9ac with catch @ 00a5cc68 */
                    /* catch() { ... } // from try @ 00a5c9a0 with catch @ 00a5cc6c
                       catch() { ... } // from try @ 00a5ca20 with catch @ 00a5cc6c */
        *puVar4 = uVar1;
        puVar7 = puVar4 + 1;
                    /* catch() { ... } // from try @ 00a5c97c with catch @ 00a5cc70
                       catch() { ... } // from try @ 00a5cb44 with catch @ 00a5cc70 */
        *puVar7 = 0;
                    /* catch() { ... } // from try @ 00a5c964 with catch @ 00a5cc74
                       catch() { ... } // from try @ 00a5cafc with catch @ 00a5cc74 */
        puVar4[2] = (ulong)puVar10;
                    /* catch() { ... } // from try @ 00a5c93c with catch @ 00a5cc78 */
        *puVar8 = puVar4;
        goto LAB_00a5cc80;
      }
    }
    else {
      puVar7 = puVar10 + 1;
      puVar6 = (uint *)*puVar7;
      puVar4 = puVar10;
      if (*puVar10 < (long)puVar6 + uVar9) goto LAB_00a5cc34;
LAB_00a5cc80:
                    /* catch() { ... } // from try @ 00a5c94c with catch @ 00a5cc80
                       catch() { ... } // from try @ 00a5cab4 with catch @ 00a5cc80 */
      uVar9 = (long)puVar6 + uVar9;
      puVar6 = (uint *)((long)puVar4 + (long)puVar6 + 0x18);
      *puVar7 = uVar9;
    }
  }
                    /* catch() { ... } // from try @ 00a5c8fc with catch @ 00a5cc98 */
  *(uint **)(puVar2 + 2) = puVar6;
                    /* catch() { ... } // from try @ 00a5c8f0 with catch @ 00a5cc9c */
LAB_00a5cca0:
                    /* catch() { ... } // from try @ 00a5c8d0 with catch @ 00a5cca0 */
                    /* catch() { ... } // from try @ 00a5c908 with catch @ 00a5ccb0
                       catch() { ... } // from try @ 00a5ca48 with catch @ 00a5ccb0
                       catch() { ... } // from try @ 00a5cb98 with catch @ 00a5ccb0 */
  memcpy(puVar6,param_1,(ulong)param_2);
  *(undefined1 *)((long)puVar6 + (ulong)param_2) = 0;
                    /* try { // try from 00a5cd5c to 00b5cd73 has its CatchHandler @ 00a5d12c */
  return 1;
}

