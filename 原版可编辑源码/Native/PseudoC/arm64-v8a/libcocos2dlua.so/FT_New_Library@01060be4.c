
undefined8 FT_New_Library(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  void *__s;
  
  uVar1 = 6;
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
                    /* catch() { ... } // from try @ 01060b9c with catch @ 01060c08 */
    plVar2 = (long *)(**(code **)(param_1 + 8))(param_1,0x170);
    if (plVar2 != (long *)0x0) {
      memset(plVar2 + 1,0,0x168);
      *plVar2 = param_1;
      plVar2[0x28] = 0x4000;
      __s = (void *)(**(code **)(param_1 + 8))(param_1,0x4000);
      if (__s != (void *)0x0) {
        memset(__s,0,0x4000);
        plVar2[0x27] = (long)__s;
        plVar2[1] = 0x500000002;
        *(undefined4 *)(plVar2 + 2) = 5;
        *(undefined4 *)(plVar2 + 0x2d) = 1;
        *param_2 = plVar2;
        return 0;
      }
      plVar2[0x27] = 0;
      (**(code **)(param_1 + 0x10))(param_1,plVar2);
    }
    uVar1 = 0x40;
  }
  return uVar1;
}

