
int FUN_00e3e9fc(long param_1,ushort *param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;
  byte *pbVar5;
  ushort *puVar6;
  byte *__haystack;
  long lVar7;
  int local_34;
  
  lVar7 = *(long *)(param_1 + 0x490);
  local_34 = 0;
  if (lVar7 == 0) {
    return 0;
  }
  puVar6 = *(ushort **)(lVar7 + 0x13b8);
  if (puVar6 != (ushort *)0x0) {
    local_34 = 0;
    goto LAB_00e3ea2c;
  }
  puVar6 = (ushort *)FUN_00e1388c(*(undefined8 *)(param_1 + 0xb8),2,&local_34);
  if (local_34 != 0) {
    return local_34;
  }
  *puVar6 = 0;
  uVar1 = *(uint *)(lVar7 + 0x748);
  if (uVar1 != 0xffff) {
    if (uVar1 < 0x187) {
      if (*(long *)(lVar7 + 0x1360) != 0) {
        pcVar4 = (char *)(**(code **)(*(long *)(lVar7 + 0x1360) + 0x28))();
        goto joined_r0x00e3eac8;
      }
    }
    else if (uVar1 - 0x187 < *(uint *)(lVar7 + 0x648)) {
      pcVar4 = *(char **)(*(long *)(lVar7 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
joined_r0x00e3eac8:
      if ((pcVar4 != (char *)0x0) && (pcVar4 = strstr(pcVar4,"/FSType"), pcVar4 != (char *)0x0)) {
        __haystack = (byte *)(pcVar4 + 7);
        pbVar5 = (byte *)strstr((char *)__haystack,"def");
        if (pbVar5 != (byte *)0x0) {
          for (; __haystack != pbVar5; __haystack = __haystack + 1) {
            while( true ) {
              bVar2 = *__haystack;
              if (9 < bVar2 - 0x30) break;
              if (0x332 < *puVar6 >> 3) goto LAB_00e3eb78;
              uVar3 = *puVar6 * 10;
              *puVar6 = uVar3;
              *puVar6 = (uVar3 + *__haystack) - 0x30;
              __haystack = __haystack + 1;
              if (pbVar5 == __haystack) goto LAB_00e3ea88;
            }
            if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002400U) == 0)) {
LAB_00e3eb78:
              *puVar6 = 0;
              break;
            }
          }
        }
      }
    }
  }
LAB_00e3ea88:
  *(ushort **)(lVar7 + 0x13b8) = puVar6;
LAB_00e3ea2c:
  *param_2 = *puVar6;
  return local_34;
}

