
void lws_set_timeout(long param_1,int param_2,int param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  if (param_3 == -2) {
    plVar2 = *(long **)(param_1 + 0x268);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_1 + 0x260);
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x268) = plVar2;
        plVar2 = *(long **)(param_1 + 0x268);
      }
      *plVar2 = lVar3;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
    }
    FUN_010417b8(param_1,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x220);
    bVar1 = *(byte *)(param_1 + 0x304);
    time(&local_38);
    if (param_2 == 0) {
      plVar2 = *(long **)(param_1 + 0x268);
      *(undefined1 *)(param_1 + 0x303) = 0;
      *(long *)(param_1 + 0x218) = local_38 + param_3;
      if (plVar2 != (long *)0x0) {
        lVar3 = *(long *)(param_1 + 0x260);
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x268) = plVar2;
          plVar2 = *(long **)(param_1 + 0x268);
        }
        *plVar2 = lVar3;
        *(undefined8 *)(param_1 + 0x260) = 0;
        *(undefined8 *)(param_1 + 0x268) = 0;
      }
    }
    else {
      if (*(long *)(param_1 + 0x268) == 0) {
        plVar2 = (long *)(lVar3 + (ulong)bVar1 * 0x6f8 + 0xf8);
        lVar3 = *plVar2;
        *(long *)(param_1 + 0x260) = lVar3;
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x268) = param_1 + 0x260;
        }
        *(long **)(param_1 + 0x268) = plVar2;
        *plVar2 = param_1;
      }
      *(char *)(param_1 + 0x303) = (char)param_2;
      *(long *)(param_1 + 0x218) = local_38 + param_3;
    }
  }
  return;
}

