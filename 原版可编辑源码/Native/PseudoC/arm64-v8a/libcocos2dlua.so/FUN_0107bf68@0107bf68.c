
void FUN_0107bf68(long param_1,long param_2)

{
  void *__dest;
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  size_t __n;
  long lVar4;
  long *plVar5;
  long local_b0 [12];
  int local_48;
  int local_44;
  
                    /* try { // try from 0107bf74 to 0117bf83 has its CatchHandler @ 0107c0c4 */
                    /* try { // try from 0107bf84 to 0117c227 has its CatchHandler @ 0107be40 */
  local_48 = 0;
  (**(code **)(param_2 + 0x78))(param_2,local_b0,4,&local_44);
  if (local_44 < 0) {
    local_48 = 0xa2;
  }
  else if ((local_44 == 0) || (4 < local_44)) {
LAB_0107c068:
    local_48 = 3;
  }
  else {
    local_48 = FUN_0107c1f0(param_1,0);
    if (local_48 == 0) {
      if (local_44 < 1) {
        local_48 = 0;
      }
      else {
        lVar1 = *(long *)(param_1 + 0x348);
        uVar3 = *(undefined8 *)(param_1 + 0xb8);
        lVar4 = 0;
        plVar5 = local_b0;
        do {
          pcVar2 = (char *)*plVar5;
          if (*pcVar2 == '/') {
            pcVar2 = pcVar2 + 1;
            *plVar5 = (long)pcVar2;
          }
          __n = plVar5[1] - (long)pcVar2;
          if (__n == 0) goto LAB_0107c068;
          __dest = (void *)ft_mem_alloc(uVar3,__n + 1,&local_48);
          *(void **)(lVar1 + 8 + lVar4 * 8) = __dest;
          if (local_48 != 0) break;
          memcpy(__dest,(void *)*plVar5,__n);
          *(undefined1 *)((long)__dest + __n) = 0;
          lVar4 = lVar4 + 1;
          plVar5 = plVar5 + 3;
        } while (lVar4 < local_44);
      }
    }
  }
  *(int *)(param_2 + 0x18) = local_48;
  return;
}

