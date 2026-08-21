
/* rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::PrettyPrefix(rapidjson::Type) */

void rapidjson::
     PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
     ::PrettyPrefix(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                    *param_1)

{
  long lVar1;
  PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  PVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == *(long *)(param_1 + 0x18)) {
    param_1[0x3c] =
         (PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
          )0x1;
    return;
  }
  uVar8 = *(ulong *)(lVar1 + -0x10);
  if (*(char *)(lVar1 + -8) == '\0') {
    if (uVar8 == 0) {
LAB_00a60f84:
      plVar10 = *(long **)param_1;
      puVar4 = (undefined1 *)plVar10[3];
      puVar5 = (undefined1 *)plVar10[4];
      puVar7 = puVar4 + 1;
      if (puVar5 < puVar7) {
        pvVar9 = (void *)plVar10[2];
        if (pvVar9 == (void *)0x0) {
          if (*plVar10 == 0) {
            pvVar3 = operator_new(1);
            *plVar10 = (long)pvVar3;
            plVar10[1] = (long)pvVar3;
          }
                    /* catch() { ... } // from try @ 00a60f30 with catch @ 00a61204 */
          puVar5 = (undefined1 *)plVar10[5];
        }
        else {
          puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
        }
                    /* catch() { ... } // from try @ 00a60f24 with catch @ 00a61208 */
        lVar11 = (long)puVar4 - (long)pvVar9;
                    /* catch() { ... } // from try @ 00a60f04 with catch @ 00a6120c */
        if (puVar5 < (undefined1 *)(lVar11 + 1U)) {
          puVar5 = (undefined1 *)(lVar11 + 1);
        }
                    /* catch() { ... } // from try @ 00a60f3c with catch @ 00a6121c */
        if (puVar5 == (undefined1 *)0x0) {
          free(pvVar9);
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,(size_t)puVar5);
        }
        puVar4 = (undefined1 *)((long)pvVar9 + lVar11);
        plVar10[4] = (long)((long)pvVar9 + (long)puVar5);
        puVar7 = puVar4 + 1;
        plVar10[2] = (long)pvVar9;
        plVar10[3] = (long)puVar4;
      }
      plVar10[3] = (long)puVar7;
      uVar6 = 10;
    }
    else {
      plVar10 = *(long **)param_1;
      puVar4 = (undefined1 *)plVar10[3];
      puVar5 = (undefined1 *)plVar10[4];
      puVar7 = puVar4 + 1;
      if ((uVar8 & 1) == 0) {
        if (puVar5 < puVar7) {
          pvVar9 = (void *)plVar10[2];
          if (pvVar9 == (void *)0x0) {
            if (*plVar10 == 0) {
                    /* try { // try from 00a612cc to 00b612d3 has its CatchHandler @ 00a614ec */
              pvVar3 = operator_new(1);
                    /* try { // try from 00a612d8 to 00b612df has its CatchHandler @ 00a614e4 */
              *plVar10 = (long)pvVar3;
              plVar10[1] = (long)pvVar3;
            }
                    /* try { // try from 00a612e0 to 00b612ef has its CatchHandler @ 00a614dc */
            puVar5 = (undefined1 *)plVar10[5];
          }
          else {
            puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
          }
          lVar11 = (long)puVar4 - (long)pvVar9;
          if (puVar5 < (undefined1 *)(lVar11 + 1)) {
            puVar5 = (undefined1 *)(lVar11 + 1);
          }
                    /* try { // try from 00a612f8 to 00b61333 has its CatchHandler @ 00a614f4 */
          if (puVar5 == (undefined1 *)0x0) {
            free(pvVar9);
            pvVar9 = (void *)0x0;
          }
          else {
            pvVar9 = realloc(pvVar9,(size_t)puVar5);
          }
          puVar4 = (undefined1 *)((long)pvVar9 + lVar11);
          plVar10[4] = (long)((long)pvVar9 + (long)puVar5);
          puVar7 = puVar4 + 1;
                    /* try { // try from 00a613b4 to 00b61447 has its CatchHandler @ 00a61504 */
          plVar10[2] = (long)pvVar9;
          plVar10[3] = (long)puVar4;
        }
        plVar10[3] = (long)puVar7;
        *puVar4 = 0x2c;
        goto LAB_00a60f84;
      }
      if (puVar5 < puVar7) {
        pvVar9 = (void *)plVar10[2];
        if (pvVar9 == (void *)0x0) {
          if (*plVar10 == 0) {
            pvVar3 = operator_new(1);
            *plVar10 = (long)pvVar3;
            plVar10[1] = (long)pvVar3;
          }
          puVar5 = (undefined1 *)plVar10[5];
        }
        else {
          puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
        }
        lVar11 = (long)puVar4 - (long)pvVar9;
                    /* try { // try from 00a61334 to 00b61343 has its CatchHandler @ 00a614d8 */
        if (puVar5 < (undefined1 *)(lVar11 + 1)) {
          puVar5 = (undefined1 *)(lVar11 + 1);
        }
        if (puVar5 == (undefined1 *)0x0) {
          free(pvVar9);
          pvVar9 = (void *)0x0;
        }
        else {
                    /* try { // try from 00a61344 to 00b61377 has its CatchHandler @ 00a61504 */
          pvVar9 = realloc(pvVar9,(size_t)puVar5);
        }
        puVar4 = (undefined1 *)((long)pvVar9 + lVar11);
        plVar10[4] = (long)((long)pvVar9 + (long)puVar5);
        puVar7 = puVar4 + 1;
        plVar10[2] = (long)pvVar9;
        plVar10[3] = (long)puVar4;
      }
      plVar10[3] = (long)puVar7;
      *puVar4 = 0x3a;
      plVar10 = *(long **)param_1;
      puVar4 = (undefined1 *)plVar10[3];
      puVar5 = (undefined1 *)plVar10[4];
      puVar7 = puVar4 + 1;
      if (puVar5 < puVar7) {
        pvVar9 = (void *)plVar10[2];
        if (pvVar9 == (void *)0x0) {
          if (*plVar10 == 0) {
            pvVar3 = operator_new(1);
            *plVar10 = (long)pvVar3;
            plVar10[1] = (long)pvVar3;
          }
          puVar5 = (undefined1 *)plVar10[5];
        }
        else {
          puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
        }
        lVar11 = (long)puVar4 - (long)pvVar9;
                    /* try { // try from 00a6137c to 00b6138f has its CatchHandler @ 00a614c4 */
        if (puVar5 < (undefined1 *)(lVar11 + 1U)) {
          puVar5 = (undefined1 *)(lVar11 + 1);
        }
        if (puVar5 == (undefined1 *)0x0) {
          free(pvVar9);
          pvVar9 = (void *)0x0;
        }
        else {
                    /* try { // try from 00a61390 to 00b613a7 has its CatchHandler @ 00a614c8 */
          pvVar9 = realloc(pvVar9,(size_t)puVar5);
        }
        puVar4 = (undefined1 *)((long)pvVar9 + lVar11);
        plVar10[4] = (long)((long)pvVar9 + (long)puVar5);
        puVar7 = puVar4 + 1;
        plVar10[2] = (long)pvVar9;
        plVar10[3] = (long)puVar4;
      }
      plVar10[3] = (long)puVar7;
      uVar6 = 0x20;
    }
    *puVar4 = uVar6;
    if ((*(byte *)(lVar1 + -0x10) & 1) != 0) goto LAB_00a61014;
  }
  else {
    if (uVar8 == 0) {
      PVar2 = param_1[0x44];
    }
    else {
                    /* try { // try from 00a60f04 to 00b60f1b has its CatchHandler @ 00a6120c */
      plVar10 = *(long **)param_1;
      puVar4 = (undefined1 *)plVar10[3];
      puVar5 = (undefined1 *)plVar10[4];
      puVar7 = puVar4 + 1;
      if (puVar5 < puVar7) {
        pvVar9 = (void *)plVar10[2];
        if (pvVar9 == (void *)0x0) {
          if (*plVar10 == 0) {
            pvVar3 = operator_new(1);
            *plVar10 = (long)pvVar3;
            plVar10[1] = (long)pvVar3;
          }
          puVar5 = (undefined1 *)plVar10[5];
        }
        else {
          puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
        }
        lVar11 = (long)puVar4 - (long)pvVar9;
        if (puVar5 < (undefined1 *)(lVar11 + 1)) {
          puVar5 = (undefined1 *)(lVar11 + 1);
        }
        if (puVar5 == (undefined1 *)0x0) {
          free(pvVar9);
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,(size_t)puVar5);
        }
        puVar4 = (undefined1 *)((long)pvVar9 + lVar11);
        plVar10[4] = (long)((long)pvVar9 + (long)puVar5);
        puVar7 = puVar4 + 1;
        plVar10[2] = (long)pvVar9;
        plVar10[3] = (long)puVar4;
      }
      plVar10[3] = (long)puVar7;
      *puVar4 = 0x2c;
                    /* try { // try from 00a60f24 to 00b60f2f has its CatchHandler @ 00a61208 */
      if (((byte)param_1[0x44] & 1) != 0) {
                    /* try { // try from 00a60f30 to 00b60f3b has its CatchHandler @ 00a61204 */
        plVar10 = *(long **)param_1;
        puVar4 = (undefined1 *)plVar10[3];
        puVar5 = (undefined1 *)plVar10[4];
        puVar7 = puVar4 + 1;
                    /* try { // try from 00a60f3c to 00b6118f has its CatchHandler @ 00a6121c */
        if (puVar5 < puVar7) {
          pvVar9 = (void *)plVar10[2];
          if (pvVar9 == (void *)0x0) {
            if (*plVar10 == 0) {
              pvVar3 = operator_new(1);
              *plVar10 = (long)pvVar3;
              plVar10[1] = (long)pvVar3;
            }
            puVar5 = (undefined1 *)plVar10[5];
          }
          else {
            puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
          }
                    /* try { // try from 00a61274 to 00b612cb has its CatchHandler @ 00a61274
                       catch() { ... } // from try @ 00a61274 with catch @ 00a61274
                       catch() { ... } // from try @ 00a61448 with catch @ 00a61274 */
          lVar11 = (long)puVar4 - (long)pvVar9;
          if (puVar5 < (undefined1 *)(lVar11 + 1)) {
            puVar5 = (undefined1 *)(lVar11 + 1);
          }
          if (puVar5 == (undefined1 *)0x0) {
            free(pvVar9);
            pvVar9 = (void *)0x0;
          }
          else {
            pvVar9 = realloc(pvVar9,(size_t)puVar5);
          }
          puVar4 = (undefined1 *)((long)pvVar9 + lVar11);
          puVar7 = puVar4 + 1;
          plVar10[2] = (long)pvVar9;
          plVar10[3] = (long)puVar4;
          plVar10[4] = (long)((long)pvVar9 + (long)puVar5);
        }
        plVar10[3] = (long)puVar7;
        *puVar4 = 0x20;
      }
      PVar2 = param_1[0x44];
    }
    if (((byte)PVar2 & 1) != 0) goto LAB_00a61014;
    plVar10 = *(long **)param_1;
    puVar4 = (undefined1 *)plVar10[3];
    puVar5 = (undefined1 *)plVar10[4];
    puVar7 = puVar4 + 1;
    if (puVar5 < puVar7) {
      pvVar9 = (void *)plVar10[2];
      if (pvVar9 == (void *)0x0) {
        if (*plVar10 == 0) {
          pvVar3 = operator_new(1);
                    /* try { // try from 00a61190 to 00b61273 has its CatchHandler @ 00a60eb0 */
          *plVar10 = (long)pvVar3;
          plVar10[1] = (long)pvVar3;
        }
        puVar5 = (undefined1 *)plVar10[5];
      }
      else {
        puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
      }
      lVar11 = (long)puVar4 - (long)pvVar9;
      if (puVar5 < (undefined1 *)(lVar11 + 1)) {
        puVar5 = (undefined1 *)(lVar11 + 1);
      }
      if (puVar5 == (undefined1 *)0x0) {
        free(pvVar9);
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = realloc(pvVar9,(size_t)puVar5);
      }
      puVar4 = (undefined1 *)((long)pvVar9 + lVar11);
      plVar10[4] = (long)((long)pvVar9 + (long)puVar5);
      puVar7 = puVar4 + 1;
      plVar10[2] = (long)pvVar9;
      plVar10[3] = (long)puVar4;
    }
    plVar10[3] = (long)puVar7;
    *puVar4 = 10;
  }
  WriteIndent(param_1);
LAB_00a61014:
  *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x10) + 1;
  return;
}

