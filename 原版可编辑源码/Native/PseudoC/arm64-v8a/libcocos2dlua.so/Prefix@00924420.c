
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
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  
  lVar1 = param_1[4];
                    /* try { // try from 0092443c to 00a24487 has its CatchHandler @ 0092443c
                       catch() { ... } // from try @ 0092443c with catch @ 0092443c
                       catch() { ... } // from try @ 0092448c with catch @ 0092443c */
  if (lVar1 == param_1[3]) {
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  else {
    if (*(ulong *)(lVar1 + -0x10) != 0) {
      plVar7 = (long *)*param_1;
      if (*(char *)(lVar1 + -8) == '\0') {
        puVar4 = (undefined1 *)plVar7[3];
        puVar5 = (undefined1 *)plVar7[4];
        uVar6 = 0x2c;
        if ((*(ulong *)(lVar1 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
                    /* try { // try from 00924488 to 00a2448b has its CatchHandler @ 009244e0 */
                    /* try { // try from 0092448c to 00a244f3 has its CatchHandler @ 0092443c */
        if (puVar5 < puVar4 + 1) {
                    /* catch() { ... } // from try @ 00924488 with catch @ 009244e0 */
          pvVar2 = (void *)plVar7[2];
          if (pvVar2 == (void *)0x0) {
            if (*plVar7 == 0) {
              pvVar3 = operator_new(1);
              *plVar7 = (long)pvVar3;
              plVar7[1] = (long)pvVar3;
            }
            puVar5 = (undefined1 *)plVar7[5];
          }
          else {
                    /* try { // try from 009244f4 to 00a245ab has its CatchHandler @ 009244f4
                       catch() { ... } // from try @ 009244f4 with catch @ 009244f4
                       catch() { ... } // from try @ 0092462c with catch @ 009244f4 */
            puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
          }
          lVar8 = (long)puVar4 - (long)pvVar2;
          if (puVar5 < (undefined1 *)(lVar8 + 1U)) {
            puVar5 = (undefined1 *)(lVar8 + 1);
          }
          if (puVar5 == (undefined1 *)0x0) {
            free(pvVar2);
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = realloc(pvVar2,(size_t)puVar5);
          }
                    /* try { // try from 009245ac to 00a245df has its CatchHandler @ 009246ac */
          puVar4 = (undefined1 *)((long)pvVar2 + lVar8);
          plVar7[2] = (long)pvVar2;
          plVar7[3] = (long)puVar4;
          plVar7[4] = (long)((long)pvVar2 + (long)puVar5);
        }
      }
      else {
        puVar4 = (undefined1 *)plVar7[3];
        puVar5 = (undefined1 *)plVar7[4];
        if (puVar5 < puVar4 + 1) {
          pvVar2 = (void *)plVar7[2];
          if (pvVar2 == (void *)0x0) {
            if (*plVar7 == 0) {
              pvVar3 = operator_new(1);
              *plVar7 = (long)pvVar3;
              plVar7[1] = (long)pvVar3;
            }
            puVar5 = (undefined1 *)plVar7[5];
          }
          else {
            puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
          }
          lVar8 = (long)puVar4 - (long)pvVar2;
          if (puVar5 < (undefined1 *)(lVar8 + 1U)) {
            puVar5 = (undefined1 *)(lVar8 + 1);
          }
          if (puVar5 == (undefined1 *)0x0) {
            free(pvVar2);
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = realloc(pvVar2,(size_t)puVar5);
          }
          puVar4 = (undefined1 *)((long)pvVar2 + lVar8);
          plVar7[2] = (long)pvVar2;
          plVar7[3] = (long)puVar4;
          plVar7[4] = (long)((long)pvVar2 + (long)puVar5);
        }
        uVar6 = 0x2c;
      }
      plVar7[3] = (long)(puVar4 + 1);
      *puVar4 = uVar6;
    }
    *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x10) + 1;
  }
  return;
}

