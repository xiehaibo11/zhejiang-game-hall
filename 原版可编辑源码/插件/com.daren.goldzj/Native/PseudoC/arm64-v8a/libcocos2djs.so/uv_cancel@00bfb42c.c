
undefined8 uv_cancel(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = 0xffffffea;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 6:
    lVar5 = *(long *)(param_1 + 0x48);
    plVar4 = (long *)(param_1 + 0x150);
    break;
  case 7:
    lVar5 = *(long *)(param_1 + 0x40);
    plVar4 = (long *)(param_1 + 0x58);
    break;
  case 8:
  case 9:
    lVar5 = *(long *)(param_1 + 0x40);
    plVar4 = (long *)(param_1 + 0x48);
    break;
  default:
    goto switchD_00bfb468_default;
  }
  plVar1 = plVar4 + 3;
  uv_mutex_lock(&DAT_01d3bdb0);
  uv_mutex_lock(plVar4[2] + 0x88);
  if ((plVar1 == (long *)plVar4[3]) || (*plVar4 == 0)) {
    uv_mutex_unlock(plVar4[2] + 0x88);
    uv_mutex_unlock(&DAT_01d3bdb0);
    return 0xfffffff0;
  }
  *(long **)plVar4[4] = (long *)plVar4[3];
  *(long *)(plVar4[3] + 8) = plVar4[4];
  uv_mutex_unlock(plVar4[2] + 0x88);
  uv_mutex_unlock(&DAT_01d3bdb0);
  *plVar4 = (long)FUN_00bfafb8;
  uv_mutex_lock(lVar5 + 0x88);
  plVar4[3] = lVar5 + 0x78;
  plVar3 = *(long **)(lVar5 + 0x80);
  plVar4[4] = (long)plVar3;
  *plVar3 = (long)plVar1;
  *(long **)(lVar5 + 0x80) = plVar1;
  uv_async_send(lVar5 + 0xb0);
  uv_mutex_unlock(lVar5 + 0x88);
  uVar2 = 0;
switchD_00bfb468_default:
  return uVar2;
}

