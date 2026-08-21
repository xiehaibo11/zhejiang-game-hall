
long FUN_0012df28(int *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013a508);
  plVar1 = &DAT_0013a530;
  for (lVar2 = DAT_0013a530; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0012dfb8;
    plVar1 = (long *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_0013a538;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0012dfb8;
    }
    else if ((int *)**(undefined8 **)(lVar2 + 0x18) == param_1) {
      *plVar1 = *(long *)(lVar2 + 0x28);
      free(*(void **)(lVar2 + 0x18));
      break;
    }
    plVar1 = (long *)(lVar2 + 0x28);
  }
LAB_0012dff8:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013a508);
  if (lVar2 != 0) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0012dfb8:
  *plVar1 = *(long *)(lVar2 + 0x28);
  goto LAB_0012dff8;
}

