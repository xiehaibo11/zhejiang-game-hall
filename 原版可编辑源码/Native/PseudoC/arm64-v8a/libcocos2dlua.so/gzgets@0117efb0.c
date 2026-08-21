
undefined1 * gzgets(uint *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  undefined1 *__dest;
  ulong uVar6;
  void *__s;
  uint uVar7;
  
  if (((((param_1 != (uint *)0x0) && (param_2 != (undefined1 *)0x0)) &&
       (uVar7 = param_3 - 1, 0 < param_3)) && (param_1[6] == 0x1c4f)) &&
     ((param_1[0x1b] == 0 || (param_1[0x1b] == 0xfffffffb)))) {
    if (param_1[0x1a] != 0) {
      lVar5 = *(long *)(param_1 + 0x18);
      param_1[0x1a] = 0;
      for (; lVar5 != 0; lVar5 = lVar5 - uVar6) {
        while( true ) {
          uVar4 = *param_1;
          if (uVar4 != 0) break;
          if ((param_1[0x14] != 0) && (param_1[0x20] == 0)) goto LAB_0117f06c;
          iVar2 = FUN_0117ea3c(param_1);
          if (iVar2 == -1) {
            return (undefined1 *)0x0;
          }
        }
        uVar1 = (uint)lVar5;
        if ((long)(ulong)uVar4 <= lVar5) {
          uVar1 = uVar4;
        }
        uVar6 = (ulong)uVar1;
        *param_1 = uVar4 - uVar1;
        *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + uVar6;
        *(ulong *)(param_1 + 4) = *(long *)(param_1 + 4) + uVar6;
      }
    }
LAB_0117f06c:
    if (uVar7 != 0) {
      uVar4 = *param_1;
      __dest = param_2;
      do {
        if (uVar4 == 0) {
          iVar2 = FUN_0117ea3c(param_1);
          if (iVar2 == -1) {
            return (undefined1 *)0x0;
          }
          uVar4 = *param_1;
          if (uVar4 == 0) {
            param_1[0x15] = 1;
LAB_0117f108:
            if (__dest == param_2) {
              return (undefined1 *)0x0;
            }
            *__dest = 0;
            return param_2;
          }
        }
        __s = *(void **)(param_1 + 2);
        uVar1 = uVar7;
        if (uVar4 <= uVar7) {
          uVar1 = uVar4;
        }
        pvVar3 = memchr(__s,10,(ulong)uVar1);
        if (pvVar3 != (void *)0x0) {
          uVar1 = ((int)pvVar3 - (int)__s) + 1;
        }
        uVar6 = (ulong)uVar1;
        memcpy(__dest,__s,uVar6);
        __dest = __dest + uVar6;
        uVar4 = *param_1 - uVar1;
        *param_1 = uVar4;
        *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + uVar6;
        *(ulong *)(param_1 + 4) = *(long *)(param_1 + 4) + uVar6;
        if ((pvVar3 != (void *)0x0) || (uVar7 = uVar7 - uVar1, uVar7 == 0)) goto LAB_0117f108;
      } while( true );
    }
  }
  return (undefined1 *)0x0;
}

