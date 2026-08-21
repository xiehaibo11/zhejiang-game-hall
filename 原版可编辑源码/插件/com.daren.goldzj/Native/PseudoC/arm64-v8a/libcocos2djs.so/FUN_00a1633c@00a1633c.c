
int FUN_00a1633c(char *param_1,char *param_2,addrinfo *param_3,long *param_4)

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
LAB_00a16390:
    do {
      puVar5 = puVar7;
      if (paVar6->ai_family == 2) {
        __n = 0x10;
        pcVar4 = paVar6->ai_canonname;
joined_r0x00a1644c:
        if (((pcVar4 != (char *)0x0) && (paVar6->ai_addrlen != 0)) && (__n <= paVar6->ai_addrlen)) {
          puVar2 = (undefined8 *)(*(code *)PTR_malloc_01d1b740)(0x30);
          if (puVar2 != (undefined8 *)0x0) {
            uVar10 = *(undefined8 *)&paVar6->ai_socktype;
            uVar9 = *(undefined8 *)paVar6;
            *(int *)(puVar2 + 2) = (int)__n;
            puVar2[1] = uVar10;
            *puVar2 = uVar9;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            __dest = (void *)(*(code *)PTR_malloc_01d1b740)(__n);
            puVar2[4] = __dest;
            if (__dest != (void *)0x0) {
              memcpy(__dest,paVar6->ai_canonname,__n);
              if (paVar6->ai_addr != (sockaddr *)0x0) {
                lVar3 = (*(code *)PTR_strdup_01d1b758)();
                puVar2[3] = lVar3;
                if (lVar3 == 0) {
                  (*(code *)PTR_free_01d1b748)(puVar2[4]);
                  goto LAB_00a1650c;
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
              goto LAB_00a16390;
            }
LAB_00a1650c:
            (*(code *)PTR_free_01d1b748)(puVar2);
          }
          iVar1 = 6;
          goto joined_r0x00a1651c;
        }
      }
      else if (paVar6->ai_family == 10) {
        __n = 0x1c;
        pcVar4 = paVar6->ai_canonname;
        goto joined_r0x00a1644c;
      }
      paVar6 = paVar6->ai_next;
    } while (paVar6 != (addrinfo *)0x0);
    iVar1 = 0;
joined_r0x00a1651c:
    if (local_58 != (addrinfo *)0x0) {
      freeaddrinfo(local_58);
    }
    if (iVar1 != 0) {
      if (puVar5 != (undefined8 *)0x0) {
        do {
          (*(code *)PTR_free_01d1b748)(puVar5[4]);
          (*(code *)PTR_free_01d1b748)(puVar5[3]);
          puVar7 = (undefined8 *)puVar5[5];
          (*(code *)PTR_free_01d1b748)(puVar5);
          puVar5 = puVar7;
        } while (puVar7 != (undefined8 *)0x0);
        puVar5 = (undefined8 *)0x0;
      }
      goto LAB_00a164c0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      iVar1 = 0;
      goto LAB_00a164c0;
    }
  }
  iVar1 = 8;
LAB_00a164c0:
  *param_4 = (long)puVar5;
  return iVar1;
}

