
undefined8 uv_cancel(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 6:
    plVar2 = (long *)(param_1 + 0x48);
    plVar4 = (long *)(param_1 + 0x150);
    break;
  case 7:
    plVar2 = (long *)(param_1 + 0x40);
    plVar4 = (long *)(param_1 + 0x58);
    break;
  case 8:
  case 9:
    plVar2 = (long *)(param_1 + 0x40);
    plVar4 = (long *)(param_1 + 0x48);
    break;
  default:
    return 0xffffffea;
  }
  lVar5 = *plVar2;
  uv_mutex_lock(&DAT_01793278);
  uv_mutex_lock(plVar4[2] + 0x88);
  plVar2 = plVar4 + 3;
  if ((plVar2 == (long *)*plVar2) || (*plVar4 == 0)) {
    uv_mutex_unlock(plVar4[2] + 0x88);
    uv_mutex_unlock(&DAT_01793278);
    uVar1 = 0xfffffff0;
  }
  else {
    *(long **)plVar4[4] = (long *)*plVar2;
    *(long *)(plVar4[3] + 8) = plVar4[4];
    uv_mutex_unlock(plVar4[2] + 0x88);
    uv_mutex_unlock(&DAT_01793278);
    *plVar4 = (long)FUN_0119e7dc;
    uv_mutex_lock(lVar5 + 0x88);
    plVar4[3] = lVar5 + 0x78;
    puVar3 = *(undefined8 **)(lVar5 + 0x80);
    plVar4[4] = (long)puVar3;
    *puVar3 = plVar2;
    *(long **)(lVar5 + 0x80) = plVar2;
    uv_async_send(lVar5 + 0xb0);
    uv_mutex_unlock(lVar5 + 0x88);
    uVar1 = 0;
  }
  return uVar1;
}

