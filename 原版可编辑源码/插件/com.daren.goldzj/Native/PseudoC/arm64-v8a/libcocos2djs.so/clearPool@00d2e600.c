
/* dragonBones::BaseObject::clearPool(unsigned long) */

void dragonBones::BaseObject::clearPool(ulong param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (param_1 == 0) {
    plVar6 = _poolsMap;
    if ((undefined8 **)_poolsMap != &DAT_01d3dfd8) {
      do {
        while( true ) {
          plVar1 = (long *)plVar6[5];
          plVar3 = (long *)plVar6[6];
          if (plVar1 != plVar3) {
            do {
              if ((long *)*plVar1 != (long *)0x0) {
                (**(code **)(*(long *)*plVar1 + 8))();
              }
              plVar1 = plVar1 + 1;
            } while (plVar3 != plVar1);
            plVar6[6] = plVar6[5];
          }
          plVar1 = (long *)plVar6[1];
          if ((long *)plVar6[1] == (long *)0x0) break;
          do {
            plVar6 = plVar1;
            plVar1 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
LAB_00d2e71c:
          if ((undefined8 **)plVar6 == &DAT_01d3dfd8) {
            return;
          }
        }
        plVar1 = plVar6 + 2;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar3 != plVar6) {
          do {
            lVar4 = *plVar1;
            plVar1 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar1;
          } while (*plVar6 != lVar4);
          goto LAB_00d2e71c;
        }
        plVar6 = plVar3;
      } while ((undefined8 **)plVar3 != &DAT_01d3dfd8);
    }
  }
  else if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar5 = &DAT_01d3dfd8;
    puVar2 = DAT_01d3dfd8;
    do {
      if ((ulong)puVar2[4] >= param_1) {
        puVar5 = puVar2;
      }
      puVar2 = (undefined8 *)puVar2[(ulong)puVar2[4] < param_1];
    } while (puVar2 != (undefined8 *)0x0);
    if (((undefined8 **)puVar5 != &DAT_01d3dfd8) && ((ulong)puVar5[4] <= param_1)) {
      plVar6 = (long *)puVar5[5];
      plVar1 = (long *)puVar5[6];
      if (plVar6 != plVar1) {
        do {
          if ((long *)*plVar6 != (long *)0x0) {
            (**(code **)(*(long *)*plVar6 + 8))();
          }
          plVar6 = plVar6 + 1;
        } while (plVar1 != plVar6);
        puVar5[6] = puVar5[5];
      }
    }
  }
  return;
}

