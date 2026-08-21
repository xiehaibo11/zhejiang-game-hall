
ulong FUN_00a54e00(undefined4 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  bool bVar1;
  char *__dest;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  void *__dest_00;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  size_t __n;
  char *__dest_01;
  long local_68;
  
  plVar8 = (long *)param_2[0xb];
  lVar7 = *plVar8;
  *param_3 = 0;
  *param_4 = 0;
  uVar6 = param_2[2];
  uVar4 = 0;
  if (uVar6 >> 0xe == 0) {
    __dest = (char *)(lVar7 + 0xb08);
    lVar10 = (long)(__dest + uVar6) - param_2[3];
    __dest_01 = __dest + uVar6;
    do {
      while( true ) {
        if ((void *)*param_2 == (void *)0x0) {
          uVar3 = FUN_00a393e0(plVar8,param_1,__dest_01,0x4000 - uVar6,&local_68);
          if (uVar3 == 0x51) {
            return 0;
          }
          uVar2 = 0;
          if (local_68 < 1 || uVar3 != 0) {
            uVar2 = uVar3;
          }
          uVar4 = (ulong)uVar2;
          lVar5 = local_68;
          if (uVar2 != 0) goto LAB_00a5509c;
        }
        else {
          memcpy(__dest_01,(void *)*param_2,param_2[1]);
          local_68 = param_2[1];
          (*(code *)PTR_free_01769a00)(*param_2);
          *param_2 = 0;
          param_2[1] = 0;
          lVar5 = local_68;
        }
        local_68 = lVar5;
        if (lVar5 < 1) {
          FUN_00a38a08(lVar7,"response reading failed");
          uVar4 = 0x38;
          goto LAB_00a5509c;
        }
        *(long *)(lVar7 + 0xa8) = *(long *)(lVar7 + 0xa8) + lVar5;
        param_2[2] = param_2[2] + lVar5;
        lVar9 = 1;
        do {
          lVar10 = lVar10 + 1;
          if (*__dest_01 == '\n') {
            if (*(char *)(lVar7 + 0x628) != '\0') {
              FUN_00a38860(lVar7,1,param_2[3],lVar10,plVar8);
            }
            uVar4 = FUN_00a391f0(plVar8,2,param_2[3],lVar10);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = (*(code *)param_2[0xd])(plVar8,param_2[3],lVar10,param_3);
            if ((uVar4 & 1) != 0) {
              __n = (long)__dest_01 - (long)param_2[3];
              memmove(__dest,(void *)param_2[3],__n);
              *(undefined1 *)(lVar7 + __n + 0xb08) = 0;
              param_2[3] = __dest_01 + 1;
              *param_4 = param_2[2];
              param_2[2] = 0;
              lVar10 = local_68 - lVar9;
              if (lVar10 == 0) {
                uVar4 = 0;
                param_2[2] = 0;
                param_2[3] = __dest;
                goto LAB_00a5509c;
              }
              bVar1 = false;
              if (lVar10 != 0) goto LAB_00a5500c;
              lVar10 = 0;
              goto LAB_00a5503c;
            }
            param_2[3] = __dest_01 + 1;
            lVar10 = 0;
            lVar5 = local_68;
          }
          __dest_01 = __dest_01 + 1;
          bVar1 = lVar9 < lVar5;
          lVar9 = lVar9 + 1;
        } while (bVar1);
        if ((lVar10 != lVar5) || (lVar5 < 0x2001)) break;
        FUN_00a38740(lVar7,"Excessive server response line length received, %zd bytes. Stripping\n")
        ;
        bVar1 = true;
        lVar10 = 0x28;
LAB_00a5500c:
        param_2[1] = lVar10;
        __dest_00 = (void *)(*(code *)PTR_malloc_017699f8)(lVar10);
        *param_2 = __dest_00;
        if (__dest_00 == (void *)0x0) {
          return 0x1b;
        }
        memcpy(__dest_00,(void *)param_2[3],param_2[1]);
        lVar10 = 0;
LAB_00a5503c:
        uVar6 = 0;
        param_2[2] = 0;
        param_2[3] = __dest;
        __dest_01 = __dest;
        if (!bVar1) {
          uVar4 = 0;
          goto LAB_00a5509c;
        }
      }
      if (0x2000 < (ulong)param_2[2]) {
        bVar1 = true;
        if (lVar10 != 0) goto LAB_00a5500c;
        goto LAB_00a5503c;
      }
      uVar6 = param_2[2];
      uVar4 = 0;
    } while (uVar6 < 0x4000);
  }
LAB_00a5509c:
  *(undefined1 *)(param_2 + 4) = 0;
  return uVar4;
}

