
int FUN_0105cffc(long param_1,undefined8 *param_2,char param_3,undefined4 param_4,int param_5,
                long param_6,undefined8 *param_7)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *__s;
  void *__s_00;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  size_t __n;
  
                    /* catch() { ... } // from try @ 0105cf5c with catch @ 0105d000 */
  lVar10 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
                    /* try { // try from 0105d024 to 0115d05b has its CatchHandler @ 0105d024
                       catch(type#1 @ 00000000) { ... } // from try @ 0105d024 with catch @ 0105d024
                       catch(type#1 @ 00000000) { ... } // from try @ 0105d098 with catch @ 0105d024
                        */
  __n = *(size_t *)(lVar1 + 0x48);
  if ((long)__n < 1) {
    if (__n != 0) {
      __s = (void *)0x0;
      __s_00 = (void *)0x0;
      iVar3 = 6;
                    /* try { // try from 0105d088 to 0115d097 has its CatchHandler @ 0105d0a8 */
      pcVar6 = *(code **)(lVar1 + 0x68);
      pvVar2 = __s;
      goto joined_r0x0105d324;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105d088 with catch @ 0105d0a8
                        */
    __s = (void *)0x0;
  }
  else {
    __s = (void *)(**(code **)(lVar10 + 8))(lVar10,__n);
                    /* try { // try from 0105d05c to 0115d05f has its CatchHandler @ 0105d06c */
    if (__s == (void *)0x0) {
      __s_00 = (void *)0x0;
                    /* try { // try from 0105d098 to 0115d0bb has its CatchHandler @ 0105d024 */
      iVar3 = 0x40;
      pcVar6 = *(code **)(lVar1 + 0x68);
      pvVar2 = __s;
      goto joined_r0x0105d324;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105d05c with catch @ 0105d06c
                        */
    memset(__s,0,__n);
  }
  *(long *)((long)__s + 0xb0) = param_1;
  *(long *)((long)__s + 0xb8) = lVar10;
  *(undefined8 *)((long)__s + 0xc0) = *param_2;
  if (param_3 != '\0') {
    *(ulong *)((long)__s + 0x10) = *(ulong *)((long)__s + 0x10) | 0x400;
  }
  __s_00 = (void *)(**(code **)(lVar10 + 8))(lVar10,0x70);
  if (__s_00 == (void *)0x0) {
    iVar3 = 0x40;
    if (__s == (void *)0x0) {
      __s_00 = (void *)0x0;
      pcVar6 = *(code **)(lVar1 + 0x68);
      pvVar2 = (void *)0x0;
      goto joined_r0x0105d324;
    }
    __s_00 = (void *)0x0;
  }
  else {
                    /* try { // try from 0105d0e4 to 0115d0f3 has its CatchHandler @ 0105d10c */
    memset(__s_00,0,0x70);
    *(void **)((long)__s + 0xf0) = __s_00;
    *(undefined8 *)((long)__s_00 + 0x60) = 0;
    if (0 < param_5) {
      lVar9 = *(long *)((long)__s_00 + 0x60);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105d0e4 with catch @ 0105d10c
                        */
      lVar4 = 0;
      plVar5 = (long *)(param_6 + 8);
      do {
        if (lVar9 != 0) break;
                    /* catch() { ... } // from try @ 0105d160 with catch @ 0105d120 */
        if (plVar5[-1] == 0x696e6372) {
          lVar9 = *plVar5;
          *(long *)((long)__s_00 + 0x60) = lVar9;
        }
        else {
          lVar9 = 0;
        }
        lVar4 = lVar4 + 1;
        plVar5 = plVar5 + 2;
      } while (lVar4 < param_5);
    }
    if (*(code **)(lVar1 + 0x60) == (code *)0x0) {
      *param_2 = *(undefined8 *)((long)__s + 0xc0);
      plVar5 = *(long **)((long)__s + 0x50);
joined_r0x0105d304:
                    /* try { // try from 0105d304 to 0115d423 has its CatchHandler @ 0105d304
                       catch() { ... } // from try @ 0105d304 with catch @ 0105d304
                       catch() { ... } // from try @ 0105d484 with catch @ 0105d304 */
      if (plVar5 == (long *)0x0) {
        *param_7 = __s;
        return 0;
      }
                    /* catch() { ... } // from try @ 0105d158 with catch @ 0105d194 */
      for (plVar8 = plVar5 + (long)*(int *)((long)__s + 0x48) + -1;
          plVar7 = plVar5 + (long)*(int *)((long)__s + 0x48) + -1, plVar5 <= plVar8;
          plVar8 = plVar8 + -1) {
        lVar10 = *plVar8;
        if (*(int *)(lVar10 + 8) == 0x756e6963) {
          if (*(short *)(lVar10 + 0xc) == 0) {
            if (*(short *)(lVar10 + 0xe) == 4) goto LAB_0105d32c;
          }
          else if ((*(short *)(lVar10 + 0xc) == 3) && (*(short *)(lVar10 + 0xe) == 10)) {
LAB_0105d32c:
            *(long *)((long)__s + 0xa8) = lVar10;
            goto LAB_0105d330;
          }
        }
      }
      do {
        if (plVar7 < plVar5) goto LAB_0105d330;
        lVar10 = *plVar7;
        plVar7 = plVar7 + -1;
      } while (*(int *)(lVar10 + 8) != 0x756e6963);
      *(long *)((long)__s + 0xa8) = lVar10;
LAB_0105d330:
      *param_7 = __s;
      return 0;
    }
                    /* try { // try from 0105d158 to 0115d15f has its CatchHandler @ 0105d194 */
                    /* try { // try from 0105d160 to 0115d1af has its CatchHandler @ 0105d120 */
    iVar3 = (**(code **)(lVar1 + 0x60))(*param_2,__s,param_4,param_5,param_6);
    *param_2 = *(undefined8 *)((long)__s + 0xc0);
    if (iVar3 == 0) {
      plVar5 = *(long **)((long)__s + 0x50);
      goto joined_r0x0105d304;
    }
  }
  if (0 < *(int *)((long)__s + 0x48)) {
    lVar4 = 0;
    do {
      plVar5 = *(long **)(*(long *)((long)__s + 0x50) + lVar4 * 8);
      lVar9 = *(long *)(*plVar5 + 0xb8);
      if (*(code **)(plVar5[2] + 0x10) != (code *)0x0) {
        (**(code **)(plVar5[2] + 0x10))(plVar5);
      }
                    /* catch() { ... } // from try @ 0105d294 with catch @ 0105d25c */
      (**(code **)(lVar9 + 0x10))(lVar9,plVar5);
      *(undefined8 *)(*(long *)((long)__s + 0x50) + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)__s + 0x48));
  }
  if (*(long *)((long)__s + 0x50) != 0) {
    (**(code **)(lVar10 + 0x10))(lVar10);
  }
                    /* try { // try from 0105d28c to 0115d293 has its CatchHandler @ 0105d2c8 */
  *(undefined8 *)((long)__s + 0x50) = 0;
                    /* try { // try from 0105d294 to 0115d2e3 has its CatchHandler @ 0105d25c */
  *(undefined4 *)((long)__s + 0x48) = 0;
  pcVar6 = *(code **)(lVar1 + 0x68);
  pvVar2 = __s;
joined_r0x0105d324:
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(pvVar2);
  }
  if (__s_00 != (void *)0x0) {
    (**(code **)(lVar10 + 0x10))(lVar10,__s_00);
  }
  if (__s != (void *)0x0) {
                    /* catch() { ... } // from try @ 0105d28c with catch @ 0105d2c8 */
    (**(code **)(lVar10 + 0x10))(lVar10,__s);
  }
  *param_7 = 0;
  return iVar3;
}

