
int FUN_00a2bd24(char *param_1,char *param_2,addrinfo *param_3,long *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  void *__dest;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong __n;
  addrinfo *paVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  addrinfo *local_58;
  
  *param_4 = 0;
  iVar1 = getaddrinfo(param_1,param_2,param_3,&local_58);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_58 == (addrinfo *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    paVar6 = local_58;
    puVar8 = (undefined8 *)0x0;
LAB_00a2bd78:
    do {
      puVar5 = puVar7;
      if (paVar6->ai_family == 2) {
        __n = 0x10;
        pcVar4 = paVar6->ai_canonname;
joined_r0x00a2be34:
        if (((pcVar4 != (char *)0x0) && (paVar6->ai_addrlen != 0)) && (__n <= paVar6->ai_addrlen)) {
                    /* try { // try from 00a2bda8 to 00b2bdff has its CatchHandler @ 00a2bda8
                       catch() { ... } // from try @ 00a2bda8 with catch @ 00a2bda8
                       catch() { ... } // from try @ 00a2be04 with catch @ 00a2bda8 */
          puVar2 = (undefined8 *)(*(code *)PTR_malloc_017699f8)(0x30);
          if (puVar2 != (undefined8 *)0x0) {
            uVar10 = *(undefined8 *)&paVar6->ai_socktype;
            uVar9 = *(undefined8 *)paVar6;
            *(int *)(puVar2 + 2) = (int)__n;
            puVar2[1] = uVar10;
            *puVar2 = uVar9;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            __dest = (void *)(*(code *)PTR_malloc_017699f8)(__n);
            puVar2[4] = __dest;
            if (__dest != (void *)0x0) {
              memcpy(__dest,paVar6->ai_canonname,__n);
              if (paVar6->ai_addr != (sockaddr *)0x0) {
                    /* try { // try from 00a2be00 to 00b2be03 has its CatchHandler @ 00a2be44 */
                lVar3 = (*(code *)PTR_strdup_01769a10)();
                    /* try { // try from 00a2be04 to 00b2be5f has its CatchHandler @ 00a2bda8 */
                puVar2[3] = lVar3;
                if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 00a2beac with catch @ 00a2bee4 */
                  (*(code *)PTR_free_01769a00)(puVar2[4]);
                  goto LAB_00a2bef4;
                }
              }
              puVar5 = puVar2;
              if (puVar7 != (undefined8 *)0x0) {
                puVar5 = puVar7;
              }
              if (puVar8 != (undefined8 *)0x0) {
                puVar8[5] = puVar2;
              }
              paVar6 = paVar6->ai_next;
              puVar7 = puVar5;
              puVar8 = puVar2;
              if (paVar6 == (addrinfo *)0x0) break;
              goto LAB_00a2bd78;
            }
LAB_00a2bef4:
                    /* try { // try from 00a2bef8 to 00b2bfdf has its CatchHandler @ 00a2bef8
                       catch() { ... } // from try @ 00a2bef8 with catch @ 00a2bef8
                       catch() { ... } // from try @ 00a2c060 with catch @ 00a2bef8 */
            (*(code *)PTR_free_01769a00)(puVar2);
          }
          iVar1 = 6;
          goto joined_r0x00a2bf04;
        }
      }
      else if (paVar6->ai_family == 10) {
        __n = 0x1c;
        pcVar4 = paVar6->ai_canonname;
        goto joined_r0x00a2be34;
      }
      paVar6 = paVar6->ai_next;
    } while (paVar6 != (addrinfo *)0x0);
    iVar1 = 0;
                    /* catch() { ... } // from try @ 00a2be00 with catch @ 00a2be44 */
joined_r0x00a2bf04:
    if (local_58 != (addrinfo *)0x0) {
      freeaddrinfo(local_58);
    }
    if (iVar1 != 0) {
      if (puVar5 != (undefined8 *)0x0) {
        do {
                    /* try { // try from 00a2be60 to 00b2beab has its CatchHandler @ 00a2be60
                       catch() { ... } // from try @ 00a2be60 with catch @ 00a2be60
                       catch() { ... } // from try @ 00a2beb0 with catch @ 00a2be60 */
          (*(code *)PTR_free_01769a00)(puVar5[4]);
          (*(code *)PTR_free_01769a00)(puVar5[3]);
          puVar7 = (undefined8 *)puVar5[5];
          (*(code *)PTR_free_01769a00)(puVar5);
          puVar5 = puVar7;
        } while (puVar7 != (undefined8 *)0x0);
        puVar5 = (undefined8 *)0x0;
      }
      goto LAB_00a2bea8;
    }
    if (puVar5 != (undefined8 *)0x0) {
      iVar1 = 0;
      goto LAB_00a2bea8;
    }
  }
  iVar1 = 8;
LAB_00a2bea8:
  *param_4 = (long)puVar5;
                    /* try { // try from 00a2beac to 00b2beaf has its CatchHandler @ 00a2bee4 */
                    /* try { // try from 00a2beb0 to 00b2bef7 has its CatchHandler @ 00a2be60 */
  return iVar1;
}

