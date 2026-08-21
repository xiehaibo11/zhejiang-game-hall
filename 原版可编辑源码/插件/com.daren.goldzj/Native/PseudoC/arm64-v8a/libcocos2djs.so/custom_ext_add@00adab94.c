
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
  if (plVar3[1] != 0) {
    if (param_2 == 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        local_70 = 0;
        local_68 = (void *)0x0;
        lVar9 = *plVar3;
        puVar1 = (undefined2 *)(lVar9 + lVar6);
        if (*(code **)(puVar1 + 4) == (code *)0x0) {
LAB_00adad4c:
                    /* try { // try from 00adad58 to 00bdad6f has its CatchHandler @ 00adadd4 */
          if ((param_4 - (long)__dest < 4) || ((param_4 - (long)__dest) - 4U < local_70)) {
            return 0;
          }
          puVar2 = (undefined1 *)(lVar9 + lVar6);
          *__dest = puVar2[1];
                    /* try { // try from 00adad70 to 00bdadbb has its CatchHandler @ 00adac84 */
          __dest[1] = *puVar2;
          __dest[2] = (char)(local_70 >> 8);
          __dest[3] = (char)local_70;
          __dest = __dest + 4;
          if (local_70 != 0) {
            memcpy(__dest,local_68,local_70);
            __dest = __dest + local_70;
          }
          if ((*(uint *)(puVar2 + 4) >> 1 & 1) != 0) {
LAB_00adae20:
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: !(meth->ext_flags & SSL_EXT_FLAG_SENT)","ssl/t1_ext.c",
                        0x78);
          }
          *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) | 2;
                    /* try { // try from 00adadbc to 00bdadc3 has its CatchHandler @ 00adadc4 */
          puVar1 = (undefined2 *)(lVar9 + lVar6);
                    /* catch() { ... } // from try @ 00adad2c with catch @ 00adadc4
                       catch() { ... } // from try @ 00adadbc with catch @ 00adadc4
                       try { // try from 00adadc4 to 00bdae0f has its CatchHandler @ 00adac84 */
          if (*(code **)(puVar1 + 8) != (code *)0x0) {
                    /* catch() { ... } // from try @ 00adad58 with catch @ 00adadd4 */
            (**(code **)(puVar1 + 8))(param_1,*puVar1,local_68,*(undefined8 *)(puVar1 + 0xc));
          }
        }
        else {
          iVar5 = (**(code **)(puVar1 + 4))
                            (param_1,*puVar1,&local_68,&local_70,param_5,
                             *(undefined8 *)(puVar1 + 0xc));
                    /* try { // try from 00adad2c to 00bdad33 has its CatchHandler @ 00adadc4 */
                    /* try { // try from 00adad34 to 00bdad57 has its CatchHandler @ 00adac84 */
          iVar4 = (uint)(iVar5 == 0) << 2;
          if (iVar5 < 0) {
            iVar4 = 1;
          }
          if (iVar4 == 0) goto LAB_00adad4c;
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
        lVar8 = *plVar3;
                    /* try { // try from 00adabf8 to 00bdabff has its CatchHandler @ 00adac18 */
        lVar9 = lVar8 + lVar6;
                    /* try { // try from 00adac00 to 00bdac07 has its CatchHandler @ 00adac08 */
                    /* catch() { ... } // from try @ 00adab3c with catch @ 00adac08
                       catch() { ... } // from try @ 00adac00 with catch @ 00adac08
                       try { // try from 00adac08 to 00bdac7b has its CatchHandler @ 00adaa00 */
        if (((*(byte *)(lVar9 + 4) & 1) != 0) && (*(code **)(lVar9 + 8) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 00adaab4 with catch @ 00adac18
                       catch() { ... } // from try @ 00adabf8 with catch @ 00adac18 */
                    /* catch() { ... } // from try @ 00adab68 with catch @ 00adac28 */
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
                    /* catch() { ... } // from try @ 00adad34 with catch @ 00adac84
                       catch() { ... } // from try @ 00adad70 with catch @ 00adac84
                       catch() { ... } // from try @ 00adadc4 with catch @ 00adac84 */
            __dest[3] = (char)local_70;
            __dest = __dest + 4;
            if (local_70 != 0) {
              memcpy(__dest,local_68,local_70);
              __dest = __dest + local_70;
            }
            if ((*(uint *)(lVar9 + 4) >> 1 & 1) != 0) goto LAB_00adae20;
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
      } while (uVar7 < (ulong)plVar3[1]);
    }
  }
  *param_3 = __dest;
                    /* catch() { ... } // from try @ 00adb07c with catch @ 00adae18
                       catch() { ... } // from try @ 00adb16c with catch @ 00adae18
                       catch() { ... } // from try @ 00adb17c with catch @ 00adae18 */
  return 1;
}

