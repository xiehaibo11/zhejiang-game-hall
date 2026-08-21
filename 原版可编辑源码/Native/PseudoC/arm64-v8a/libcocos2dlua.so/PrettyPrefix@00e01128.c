
/* rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::PrettyPrefix(rapidjson::Type) */

void rapidjson::
     PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
     ::PrettyPrefix(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  size_t __n;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  
  lVar2 = param_1[4];
  if (lVar2 == param_1[3]) {
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
    return;
  }
  uVar9 = *(ulong *)(lVar2 + -0x10);
  if (*(char *)(lVar2 + -8) == '\0') {
    if (uVar9 == 0) {
LAB_00e0124c:
      plVar11 = (long *)*param_1;
      puVar6 = (undefined1 *)plVar11[3];
      puVar7 = (undefined1 *)plVar11[4];
      if (puVar7 < puVar6 + 1) {
        pvVar10 = (void *)plVar11[2];
        if (pvVar10 == (void *)0x0) {
          if (*plVar11 == 0) {
            pvVar5 = operator_new(1);
            *plVar11 = (long)pvVar5;
            plVar11[1] = (long)pvVar5;
          }
          puVar7 = (undefined1 *)plVar11[5];
        }
        else {
          puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
        }
        lVar12 = (long)puVar6 - (long)pvVar10;
        if (puVar7 < (undefined1 *)(lVar12 + 1U)) {
          puVar7 = (undefined1 *)(lVar12 + 1);
        }
        if (puVar7 == (undefined1 *)0x0) {
          free(pvVar10);
          pvVar10 = (void *)0x0;
        }
        else {
                    /* try { // try from 00e01554 to 00f0159b has its CatchHandler @ 00e02130 */
          pvVar10 = realloc(pvVar10,(size_t)puVar7);
        }
        puVar6 = (undefined1 *)((long)pvVar10 + lVar12);
        plVar11[2] = (long)pvVar10;
        plVar11[3] = (long)puVar6;
        plVar11[4] = (long)((long)pvVar10 + (long)puVar7);
      }
      uVar8 = 10;
    }
    else {
      plVar11 = (long *)*param_1;
      puVar6 = (undefined1 *)plVar11[3];
      puVar7 = (undefined1 *)plVar11[4];
      if ((uVar9 & 1) == 0) {
        if (puVar7 < puVar6 + 1) {
          pvVar10 = (void *)plVar11[2];
                    /* try { // try from 00e01418 to 00f0141b has its CatchHandler @ 00e02190 */
          if (pvVar10 == (void *)0x0) {
            if (*plVar11 == 0) {
              pvVar5 = operator_new(1);
              *plVar11 = (long)pvVar5;
              plVar11[1] = (long)pvVar5;
            }
            puVar7 = (undefined1 *)plVar11[5];
          }
          else {
            puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
          }
          lVar12 = (long)puVar6 - (long)pvVar10;
                    /* try { // try from 00e0165c to 00f016ab has its CatchHandler @ 00e02180 */
          if (puVar7 < (undefined1 *)(lVar12 + 1)) {
            puVar7 = (undefined1 *)(lVar12 + 1);
          }
          if (puVar7 == (undefined1 *)0x0) {
            free(pvVar10);
            pvVar10 = (void *)0x0;
          }
          else {
            pvVar10 = realloc(pvVar10,(size_t)puVar7);
          }
          puVar6 = (undefined1 *)((long)pvVar10 + lVar12);
          plVar11[2] = (long)pvVar10;
          plVar11[3] = (long)puVar6;
          plVar11[4] = (long)((long)pvVar10 + (long)puVar7);
        }
        plVar11[3] = (long)(puVar6 + 1);
        *puVar6 = 0x2c;
        goto LAB_00e0124c;
      }
      if (puVar7 < puVar6 + 1) {
        pvVar10 = (void *)plVar11[2];
        if (pvVar10 == (void *)0x0) {
          if (*plVar11 == 0) {
            pvVar5 = operator_new(1);
            *plVar11 = (long)pvVar5;
            plVar11[1] = (long)pvVar5;
          }
          puVar7 = (undefined1 *)plVar11[5];
        }
        else {
          puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
        }
        lVar12 = (long)puVar6 - (long)pvVar10;
        if (puVar7 < (undefined1 *)(lVar12 + 1)) {
          puVar7 = (undefined1 *)(lVar12 + 1);
        }
        if (puVar7 == (undefined1 *)0x0) {
          free(pvVar10);
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = realloc(pvVar10,(size_t)puVar7);
        }
        puVar6 = (undefined1 *)((long)pvVar10 + lVar12);
        plVar11[2] = (long)pvVar10;
        plVar11[3] = (long)puVar6;
                    /* try { // try from 00e01724 to 00f01773 has its CatchHandler @ 00e02178 */
        plVar11[4] = (long)((long)pvVar10 + (long)puVar7);
      }
      plVar11[3] = (long)(puVar6 + 1);
      *puVar6 = 0x3a;
      plVar11 = (long *)*param_1;
      puVar6 = (undefined1 *)plVar11[3];
      puVar7 = (undefined1 *)plVar11[4];
      if (puVar7 < puVar6 + 1) {
        pvVar10 = (void *)plVar11[2];
        if (pvVar10 == (void *)0x0) {
                    /* try { // try from 00e016b8 to 00f01703 has its CatchHandler @ 00e0217c */
          if (*plVar11 == 0) {
            pvVar5 = operator_new(1);
            *plVar11 = (long)pvVar5;
            plVar11[1] = (long)pvVar5;
          }
          puVar7 = (undefined1 *)plVar11[5];
        }
        else {
          puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
        }
        lVar12 = (long)puVar6 - (long)pvVar10;
        if (puVar7 < (undefined1 *)(lVar12 + 1U)) {
          puVar7 = (undefined1 *)(lVar12 + 1);
        }
        if (puVar7 == (undefined1 *)0x0) {
          free(pvVar10);
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = realloc(pvVar10,(size_t)puVar7);
        }
        puVar6 = (undefined1 *)((long)pvVar10 + lVar12);
        plVar11[2] = (long)pvVar10;
        plVar11[3] = (long)puVar6;
        plVar11[4] = (long)((long)pvVar10 + (long)puVar7);
      }
      uVar8 = 0x20;
    }
    plVar11[3] = (long)(puVar6 + 1);
    *puVar6 = uVar8;
    if ((*(byte *)(lVar2 + -0x10) & 1) != 0) goto LAB_00e012ec;
    plVar11 = (long *)*param_1;
    cVar3 = *(char *)((long)param_1 + 0x3d);
    pvVar10 = (void *)plVar11[3];
    pvVar5 = (void *)plVar11[4];
    __n = ((ulong)(param_1[4] - param_1[3]) >> 4) * (ulong)*(uint *)(param_1 + 8);
    if (pvVar5 < (void *)((long)pvVar10 + __n)) {
      pvVar4 = (void *)plVar11[2];
      if (pvVar4 == (void *)0x0) {
        if (*plVar11 == 0) {
          pvVar5 = operator_new(1);
          *plVar11 = (long)pvVar5;
          plVar11[1] = (long)pvVar5;
        }
        uVar9 = plVar11[5];
      }
      else {
                    /* try { // try from 00e013b4 to 00f013bb has its CatchHandler @ 00e021a0 */
        uVar9 = (long)pvVar5 + (((ulong)((long)pvVar5 + (1 - (long)pvVar4)) >> 1) - (long)pvVar4);
      }
      uVar1 = ((long)pvVar10 - (long)pvVar4) + __n;
                    /* try { // try from 00e01604 to 00f0164f has its CatchHandler @ 00e02184 */
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      if (uVar1 == 0) {
        free(pvVar4);
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = realloc(pvVar4,uVar1);
      }
      pvVar10 = (void *)((long)pvVar5 + ((long)pvVar10 - (long)pvVar4));
      plVar11[2] = (long)pvVar5;
      plVar11[3] = (long)pvVar10;
      plVar11[4] = (long)pvVar5 + uVar1;
    }
    plVar11[3] = (long)((long)pvVar10 + __n);
  }
  else {
    if (uVar9 != 0) {
      plVar11 = (long *)*param_1;
      puVar6 = (undefined1 *)plVar11[3];
      puVar7 = (undefined1 *)plVar11[4];
      if (puVar7 < puVar6 + 1) {
        pvVar10 = (void *)plVar11[2];
        if (pvVar10 == (void *)0x0) {
          if (*plVar11 == 0) {
            pvVar5 = operator_new(1);
            *plVar11 = (long)pvVar5;
            plVar11[1] = (long)pvVar5;
          }
          puVar7 = (undefined1 *)plVar11[5];
        }
        else {
          puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
        }
        lVar12 = (long)puVar6 - (long)pvVar10;
        if (puVar7 < (undefined1 *)(lVar12 + 1)) {
          puVar7 = (undefined1 *)(lVar12 + 1);
        }
        if (puVar7 == (undefined1 *)0x0) {
          free(pvVar10);
          pvVar10 = (void *)0x0;
        }
        else {
                    /* try { // try from 00e013f0 to 00f0140b has its CatchHandler @ 00e0219c */
          pvVar10 = realloc(pvVar10,(size_t)puVar7);
        }
        puVar6 = (undefined1 *)((long)pvVar10 + lVar12);
        plVar11[2] = (long)pvVar10;
        plVar11[3] = (long)puVar6;
        plVar11[4] = (long)((long)pvVar10 + (long)puVar7);
      }
      plVar11[3] = (long)(puVar6 + 1);
      *puVar6 = 0x2c;
      if ((*(byte *)((long)param_1 + 0x44) & 1) != 0) {
        plVar11 = (long *)*param_1;
        puVar6 = (undefined1 *)plVar11[3];
        puVar7 = (undefined1 *)plVar11[4];
        if (puVar7 < puVar6 + 1) {
          pvVar10 = (void *)plVar11[2];
          if (pvVar10 == (void *)0x0) {
            if (*plVar11 == 0) {
              pvVar5 = operator_new(1);
              *plVar11 = (long)pvVar5;
              plVar11[1] = (long)pvVar5;
            }
            puVar7 = (undefined1 *)plVar11[5];
          }
          else {
            puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
          }
          lVar12 = (long)puVar6 - (long)pvVar10;
          if (puVar7 < (undefined1 *)(lVar12 + 1)) {
            puVar7 = (undefined1 *)(lVar12 + 1);
          }
          if (puVar7 == (undefined1 *)0x0) {
            free(pvVar10);
            pvVar10 = (void *)0x0;
          }
          else {
                    /* try { // try from 00e015a8 to 00f015f7 has its CatchHandler @ 00e02188 */
            pvVar10 = realloc(pvVar10,(size_t)puVar7);
          }
          puVar6 = (undefined1 *)((long)pvVar10 + lVar12);
          plVar11[2] = (long)pvVar10;
          plVar11[3] = (long)puVar6;
          plVar11[4] = (long)((long)pvVar10 + (long)puVar7);
        }
        plVar11[3] = (long)(puVar6 + 1);
        *puVar6 = 0x20;
      }
    }
    if ((*(byte *)((long)param_1 + 0x44) & 1) != 0) goto LAB_00e012ec;
    plVar11 = (long *)*param_1;
    puVar6 = (undefined1 *)plVar11[3];
    puVar7 = (undefined1 *)plVar11[4];
    if (puVar7 < puVar6 + 1) {
      pvVar10 = (void *)plVar11[2];
      if (pvVar10 == (void *)0x0) {
                    /* try { // try from 00e0146c to 00f0146f has its CatchHandler @ 00e02194 */
        if (*plVar11 == 0) {
          pvVar5 = operator_new(1);
          *plVar11 = (long)pvVar5;
          plVar11[1] = (long)pvVar5;
        }
        puVar7 = (undefined1 *)plVar11[5];
      }
      else {
        puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
      }
      lVar12 = (long)puVar6 - (long)pvVar10;
      if (puVar7 < (undefined1 *)(lVar12 + 1)) {
        puVar7 = (undefined1 *)(lVar12 + 1);
      }
      if (puVar7 == (undefined1 *)0x0) {
        free(pvVar10);
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = realloc(pvVar10,(size_t)puVar7);
                    /* try { // try from 00e014a0 to 00f014ab has its CatchHandler @ 00e021a0 */
      }
      puVar6 = (undefined1 *)((long)pvVar10 + lVar12);
      plVar11[2] = (long)pvVar10;
      plVar11[3] = (long)puVar6;
      plVar11[4] = (long)((long)pvVar10 + (long)puVar7);
    }
    plVar11[3] = (long)(puVar6 + 1);
    *puVar6 = 10;
    plVar11 = (long *)*param_1;
    cVar3 = *(char *)((long)param_1 + 0x3d);
    pvVar10 = (void *)plVar11[3];
    pvVar5 = (void *)plVar11[4];
    __n = ((ulong)(param_1[4] - param_1[3]) >> 4) * (ulong)*(uint *)(param_1 + 8);
    if (pvVar5 < (void *)((long)pvVar10 + __n)) {
      pvVar4 = (void *)plVar11[2];
      if (pvVar4 == (void *)0x0) {
        if (*plVar11 == 0) {
          pvVar5 = operator_new(1);
          *plVar11 = (long)pvVar5;
          plVar11[1] = (long)pvVar5;
        }
                    /* try { // try from 00e014bc to 00f014fb has its CatchHandler @ 00e02198 */
        uVar9 = plVar11[5];
      }
      else {
        uVar9 = (long)pvVar5 + (((ulong)((long)pvVar5 + (1 - (long)pvVar4)) >> 1) - (long)pvVar4);
      }
      uVar1 = ((long)pvVar10 - (long)pvVar4) + __n;
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      if (uVar1 == 0) {
        free(pvVar4);
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = realloc(pvVar4,uVar1);
      }
      pvVar10 = (void *)((long)pvVar5 + ((long)pvVar10 - (long)pvVar4));
      plVar11[2] = (long)pvVar5;
      plVar11[3] = (long)pvVar10;
      plVar11[4] = (long)pvVar5 + uVar1;
    }
    plVar11[3] = (long)((long)pvVar10 + __n);
  }
  memset(pvVar10,(int)cVar3,__n);
LAB_00e012ec:
  *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x10) + 1;
                    /* try { // try from 00e01304 to 00f013b3 has its CatchHandler @ 00e01304
                       catch() { ... } // from try @ 00e01304 with catch @ 00e01304
                       catch() { ... } // from try @ 00e02088 with catch @ 00e01304 */
  return;
}

