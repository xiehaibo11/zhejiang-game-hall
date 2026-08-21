
undefined8
custom_ext_add(long param_1,int param_2,undefined8 *param_3,long param_4,undefined8 param_5)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined1 *__dest;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong local_70;
  void *local_68;
  
  __dest = (undefined1 *)*param_3;
  plVar3 = (long *)(*(long *)(param_1 + 0x148) + 0x1a8);
  if (param_2 == 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x148) + 0x198);
  }
                    /* try { // try from 00ae9a84 to 00be9a8b has its CatchHandler @ 00aea12c */
                    /* try { // try from 00ae9a8c to 00be9aa7 has its CatchHandler @ 00ae9770 */
  if (plVar3[1] != 0) {
    if (param_2 == 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        local_70 = 0;
        local_68 = (void *)0x0;
        lVar9 = *plVar3;
                    /* try { // try from 00ae9bb8 to 00be9bc3 has its CatchHandler @ 00aea124 */
        puVar1 = (undefined2 *)(lVar9 + lVar6);
        if (*(code **)(puVar1 + 4) == (code *)0x0) {
LAB_00ae9c00:
                    /* try { // try from 00ae9c08 to 00be9e37 has its CatchHandler @ 00aea1a8 */
          if ((param_4 - (long)__dest < 4) || ((param_4 - (long)__dest) - 4U < local_70)) {
            return 0;
          }
          puVar2 = (undefined1 *)(lVar9 + lVar6);
          *__dest = puVar2[1];
          __dest[1] = *puVar2;
          __dest[2] = (char)(local_70 >> 8);
          __dest[3] = (char)local_70;
          __dest = __dest + 4;
          if (local_70 != 0) {
            memcpy(__dest,local_68,local_70);
            __dest = __dest + local_70;
          }
          if ((*(uint *)(puVar2 + 4) >> 1 & 1) != 0) {
LAB_00ae9cd4:
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: !(meth->ext_flags & SSL_EXT_FLAG_SENT)","ssl/t1_ext.c",
                        0x78);
          }
          *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) | 2;
          puVar1 = (undefined2 *)(lVar9 + lVar6);
          if (*(code **)(puVar1 + 8) != (code *)0x0) {
            (**(code **)(puVar1 + 8))(param_1,*puVar1,local_68,*(undefined8 *)(puVar1 + 0xc));
          }
        }
        else {
          iVar5 = (**(code **)(puVar1 + 4))
                            (param_1,*puVar1,&local_68,&local_70,param_5,
                             *(undefined8 *)(puVar1 + 0xc));
          iVar4 = (uint)(iVar5 == 0) << 2;
          if (iVar5 < 0) {
            iVar4 = 1;
          }
          if (iVar4 == 0) goto LAB_00ae9c00;
          if (iVar4 != 4) {
            return 0;
          }
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar7 < (ulong)plVar3[1]);
    }
    else {
      lVar6 = 0;
      uVar7 = 0;
      do {
        local_70 = 0;
        local_68 = (void *)0x0;
                    /* try { // try from 00ae9aa8 to 00be9aaf has its CatchHandler @ 00aea12c */
        lVar8 = *plVar3;
        lVar9 = lVar8 + lVar6;
                    /* try { // try from 00ae9ab0 to 00be9abb has its CatchHandler @ 00aea11c */
        if (((*(byte *)(lVar9 + 4) & 1) != 0) && (*(code **)(lVar9 + 8) != (code *)0x0)) {
          iVar5 = (**(code **)(lVar9 + 8))
                            (param_1,*(undefined2 *)(lVar8 + lVar6),&local_68,&local_70,param_5,
                             *(undefined8 *)((undefined2 *)(lVar8 + lVar6) + 0xc));
          iVar4 = (uint)(iVar5 == 0) << 2;
          if (iVar5 < 0) {
            iVar4 = 1;
          }
          if (iVar4 == 0) {
            if (param_4 - (long)__dest < 4) {
              return 0;
            }
            if ((param_4 - (long)__dest) - 4U < local_70) {
              return 0;
            }
            *__dest = ((undefined1 *)(lVar8 + lVar6))[1];
            __dest[1] = *(undefined1 *)(lVar8 + lVar6);
            __dest[2] = (char)(local_70 >> 8);
            __dest[3] = (char)local_70;
            __dest = __dest + 4;
            if (local_70 != 0) {
              memcpy(__dest,local_68,local_70);
              __dest = __dest + local_70;
            }
            if ((*(uint *)(lVar9 + 4) >> 1 & 1) != 0) goto LAB_00ae9cd4;
            *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) | 2;
            puVar1 = (undefined2 *)(lVar8 + lVar6);
            if (*(code **)(puVar1 + 8) != (code *)0x0) {
              (**(code **)(puVar1 + 8))(param_1,*puVar1,local_68,*(undefined8 *)(puVar1 + 0xc));
            }
          }
          else if (iVar4 != 4) {
            return 0;
          }
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x30;
                    /* try { // try from 00ae9ba0 to 00be9bab has its CatchHandler @ 00aea1a8 */
      } while (uVar7 < (ulong)plVar3[1]);
    }
  }
  *param_3 = __dest;
  return 1;
}

