
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::Prefix(rapidjson::Type) */

void rapidjson::
     Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
     ::Prefix(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  long *plVar8;
  long lVar9;
  
                    /* catch() { ... } // from try @ 009e7138 with catch @ 009e7474 */
                    /* catch() { ... } // from try @ 009e715c with catch @ 009e7478 */
                    /* catch() { ... } // from try @ 009e71a8 with catch @ 009e7480 */
  lVar1 = param_1[4];
  if (lVar1 == param_1[3]) {
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  else {
    if (*(ulong *)(lVar1 + -0x10) != 0) {
      plVar8 = (long *)*param_1;
      if (*(char *)(lVar1 + -8) == '\0') {
        puVar6 = (undefined1 *)plVar8[3];
        puVar5 = (undefined1 *)plVar8[4];
        uVar7 = 0x2c;
        if ((*(ulong *)(lVar1 + -0x10) & 1) != 0) {
          uVar7 = 0x3a;
        }
        puVar4 = puVar6 + 1;
                    /* catch() { ... } // from try @ 009e70e0 with catch @ 009e74e0 */
        if (puVar5 < puVar4) {
          pvVar2 = (void *)plVar8[2];
          if (pvVar2 == (void *)0x0) {
            if (*plVar8 == 0) {
                    /* try { // try from 009e75c4 to 00ae75cf has its CatchHandler @ 009e778c */
              pvVar3 = operator_new(1);
              *plVar8 = (long)pvVar3;
              plVar8[1] = (long)pvVar3;
            }
                    /* try { // try from 009e75d0 to 00ae75db has its CatchHandler @ 009e7788 */
            puVar5 = (undefined1 *)plVar8[5];
          }
          else {
            puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
          }
          lVar9 = (long)puVar6 - (long)pvVar2;
                    /* try { // try from 009e75dc to 00ae7713 has its CatchHandler @ 009e77a0 */
          if (puVar5 < (undefined1 *)(lVar9 + 1U)) {
            puVar5 = (undefined1 *)(lVar9 + 1);
          }
          if (puVar5 == (undefined1 *)0x0) {
            free(pvVar2);
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = realloc(pvVar2,(size_t)puVar5);
          }
          puVar6 = (undefined1 *)((long)pvVar2 + lVar9);
          plVar8[2] = (long)pvVar2;
          plVar8[3] = (long)puVar6;
          plVar8[4] = (long)((long)pvVar2 + (long)puVar5);
          puVar4 = puVar6 + 1;
        }
                    /* catch() { ... } // from try @ 009e70d4 with catch @ 009e74e4 */
        plVar8[3] = (long)puVar4;
                    /* catch() { ... } // from try @ 009e70b4 with catch @ 009e74e8 */
        *puVar6 = uVar7;
      }
      else {
        puVar4 = (undefined1 *)plVar8[3];
        puVar6 = (undefined1 *)plVar8[4];
                    /* catch() { ... } // from try @ 009e712c with catch @ 009e74a8
                       catch() { ... } // from try @ 009e73dc with catch @ 009e74a8 */
        puVar5 = puVar4 + 1;
        if (puVar6 < puVar5) {
          pvVar2 = (void *)plVar8[2];
          if (pvVar2 == (void *)0x0) {
                    /* try { // try from 009e7550 to 00ae75a3 has its CatchHandler @ 009e7550
                       catch() { ... } // from try @ 009e7550 with catch @ 009e7550
                       catch() { ... } // from try @ 009e7714 with catch @ 009e7550 */
            if (*plVar8 == 0) {
              pvVar3 = operator_new(1);
              *plVar8 = (long)pvVar3;
              plVar8[1] = (long)pvVar3;
            }
            puVar6 = (undefined1 *)plVar8[5];
          }
          else {
            puVar6 = puVar6 + (((ulong)(puVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
          }
          lVar9 = (long)puVar4 - (long)pvVar2;
          if (puVar6 < (undefined1 *)(lVar9 + 1)) {
            puVar6 = (undefined1 *)(lVar9 + 1);
          }
          if (puVar6 == (undefined1 *)0x0) {
            free(pvVar2);
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = realloc(pvVar2,(size_t)puVar6);
          }
          puVar4 = (undefined1 *)((long)pvVar2 + lVar9);
                    /* try { // try from 009e75a4 to 00ae75bb has its CatchHandler @ 009e7790 */
          plVar8[4] = (long)((long)pvVar2 + (long)puVar6);
          puVar5 = puVar4 + 1;
          plVar8[2] = (long)pvVar2;
          plVar8[3] = (long)puVar4;
        }
        plVar8[3] = (long)puVar5;
        *puVar4 = 0x2c;
      }
    }
    *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x10) + 1;
  }
                    /* catch() { ... } // from try @ 009e70ec with catch @ 009e74f8
                       catch() { ... } // from try @ 009e7248 with catch @ 009e74f8 */
  return;
}

