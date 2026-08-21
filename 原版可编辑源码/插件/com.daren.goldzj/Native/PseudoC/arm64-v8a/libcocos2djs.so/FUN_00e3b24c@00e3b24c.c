
void FUN_00e3b24c(long param_1,long param_2)

{
  long lVar1;
  void *__dest;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong __n;
  long lVar6;
  long *plVar7;
  long local_b0 [12];
  int local_48;
  int local_44;
  
  local_48 = 0;
  (**(code **)(param_2 + 0x78))(param_2,local_b0,4,&local_44);
  if (local_44 < 0) {
    local_48 = 0xa2;
  }
  else if ((local_44 == 0) || (4 < local_44)) {
LAB_00e3b360:
    local_48 = 3;
  }
  else {
    local_48 = FUN_00e3b4e8(param_1,0);
    if (local_48 == 0) {
      if (local_44 < 1) {
        local_48 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0xb8);
        lVar6 = 0;
        lVar1 = *(long *)(param_1 + 0x350) + 8;
        plVar7 = local_b0;
        do {
          pcVar2 = (char *)*plVar7;
          if (*pcVar2 == '/') {
            pcVar2 = pcVar2 + 1;
            *plVar7 = (long)pcVar2;
          }
          lVar3 = plVar7[1];
          iVar5 = (int)(lVar3 - (long)pcVar2);
          if (iVar5 == 0) goto LAB_00e3b360;
          if (*(long *)(lVar1 + lVar6 * 8) != 0) {
            FUN_00e139fc(uVar4);
          }
          __dest = (void *)FUN_00e1388c(uVar4,iVar5 + 1,&local_48);
          *(void **)(lVar1 + lVar6 * 8) = __dest;
          if (local_48 != 0) break;
          __n = lVar3 - (long)pcVar2 & 0xffffffff;
          memcpy(__dest,(void *)*plVar7,__n);
          *(undefined1 *)((long)__dest + __n) = 0;
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 3;
        } while (lVar6 < local_44);
      }
    }
  }
  *(int *)(param_2 + 0x18) = local_48;
  return;
}

