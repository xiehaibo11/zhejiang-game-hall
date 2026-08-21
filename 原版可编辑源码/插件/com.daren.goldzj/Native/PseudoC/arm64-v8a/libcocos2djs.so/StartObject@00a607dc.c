
/* rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::StartObject() */

undefined8 __thiscall
rapidjson::
PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::StartObject(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              *this)

{
  ulong __size;
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  
  PrettyPrefix(this,3);
  puVar9 = *(undefined8 **)(this + 0x20);
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar3 = puVar9 + 2;
  if (puVar1 < puVar3) {
    pvVar8 = *(void **)(this + 0x18);
                    /* try { // try from 00a6084c to 00b6091b has its CatchHandler @ 00a60530 */
    if (pvVar8 == (void *)0x0) {
      if (*(long *)(this + 8) == 0) {
        pvVar2 = operator_new(1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a60638 with catch @ 00a6088c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a60624 with catch @ 00a60890
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a605f8 with catch @ 00a60894
                       catch(type#1 @ 00000000) { ... } // from try @ 00a60710 with catch @ 00a60894
                        */
        *(void **)(this + 8) = pvVar2;
        *(void **)(this + 0x10) = pvVar2;
      }
      uVar5 = *(ulong *)(this + 0x30);
    }
    else {
      uVar5 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)pvVar8)) >> 1) - (long)pvVar8);
    }
    __size = ((long)puVar9 - (long)pvVar8) + 0x10;
    if (__size <= uVar5) {
      __size = uVar5;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a605b4 with catch @ 00a608ac
                        */
    if (__size == 0) {
      free(pvVar8);
      pvVar2 = (void *)0x0;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a605a8 with catch @ 00a608b0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a60588 with catch @ 00a608b4
                        */
      pvVar2 = realloc(pvVar8,__size);
    }
    puVar9 = (undefined8 *)((long)pvVar2 + ((long)puVar9 - (long)pvVar8));
    *(ulong *)(this + 0x28) = (long)pvVar2 + __size;
    puVar3 = puVar9 + 2;
    *(void **)(this + 0x18) = pvVar2;
    *(undefined8 **)(this + 0x20) = puVar9;
                    /* try { // try from 00a6091c to 00b60977 has its CatchHandler @ 00a6091c
                       catch() { ... } // from try @ 00a6091c with catch @ 00a6091c
                       catch() { ... } // from try @ 00a60ba0 with catch @ 00a6091c */
  }
  *(undefined8 **)(this + 0x20) = puVar3;
  *puVar9 = 0;
  *(undefined1 *)(puVar9 + 1) = 0;
  plVar10 = *(long **)this;
  puVar4 = (undefined1 *)plVar10[3];
  puVar7 = (undefined1 *)plVar10[4];
                    /* try { // try from 00a6081c to 00b60833 has its CatchHandler @ 00a60870 */
  puVar6 = puVar4 + 1;
  if (puVar7 < puVar6) {
    pvVar8 = (void *)plVar10[2];
    if (pvVar8 == (void *)0x0) {
      if (*plVar10 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a605c0 with catch @ 00a608c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a606a4 with catch @ 00a608c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a6076c with catch @ 00a608c4
                        */
        pvVar2 = operator_new(1);
        *plVar10 = (long)pvVar2;
        plVar10[1] = (long)pvVar2;
      }
      puVar7 = (undefined1 *)plVar10[5];
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a60674 with catch @ 00a60868
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a60838 with catch @ 00a6086c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a6081c with catch @ 00a60870
                        */
      puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)pvVar8)) >> 1) - (long)pvVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a6065c with catch @ 00a60874
                        */
    }
    lVar11 = (long)puVar4 - (long)pvVar8;
    if (puVar7 < (undefined1 *)(lVar11 + 1)) {
      puVar7 = (undefined1 *)(lVar11 + 1);
    }
    if (puVar7 == (undefined1 *)0x0) {
      free(pvVar8);
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = realloc(pvVar8,(size_t)puVar7);
    }
    puVar4 = (undefined1 *)((long)pvVar8 + lVar11);
    plVar10[4] = (long)((long)pvVar8 + (long)puVar7);
    puVar6 = puVar4 + 1;
    plVar10[2] = (long)pvVar8;
    plVar10[3] = (long)puVar4;
  }
  plVar10[3] = (long)puVar6;
  *puVar4 = 0x7b;
                    /* try { // try from 00a60838 to 00b6084b has its CatchHandler @ 00a6086c */
  return 1;
}

