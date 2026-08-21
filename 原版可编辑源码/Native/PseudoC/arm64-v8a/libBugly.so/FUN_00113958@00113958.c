
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00113958(undefined8 *param_1,uint param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
    uVar2 = 1 << (ulong)(param_2 & 0x1f);
    if (param_4 != 0) {
      uVar1 = *(uint *)(param_1 + 10);
      uVar3 = 0;
      param_1[(long)(int)param_2 + 6] = *param_3;
      *(uint *)(param_1 + 10) = uVar1 | uVar2;
      goto LAB_001139a4;
    }
    if ((uVar2 & *(uint *)(param_1 + 10)) != 0) {
      *param_3 = param_1[(long)(int)param_2 + 6];
      uVar3 = 0;
      goto LAB_001139a4;
    }
    lVar4 = (long)(int)param_2 + 5;
    lVar5 = param_1[lVar4 * 2 + 1];
    lVar4 = param_1[lVar4 * 2 + 2];
LAB_00113a4c:
    if (lVar4 != 0 || lVar5 != 0) {
      if (((uint)lVar4 >> 1 & 1) == 0) {
        uVar3 = (**(code **)(param_1[1] + 0x18))(param_1[1],lVar5,param_3,0,*param_1);
      }
      else {
        uVar3 = (**(code **)(param_1[1] + 0x20))(param_1[1],lVar5,param_3,0,*param_1);
      }
      goto LAB_001139a4;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
    lVar4 = (long)(int)param_2 + 5;
    lVar5 = param_1[lVar4 * 2 + 1];
    lVar4 = param_1[lVar4 * 2 + 2];
    if (param_4 == 0) goto LAB_00113a4c;
    local_10 = *param_3;
    if (lVar4 != 0 || lVar5 != 0) {
      if (((uint)lVar4 >> 1 & 1) == 0) {
        uVar3 = (**(code **)(param_1[1] + 0x18))(param_1[1],lVar5,&local_10,1,*param_1);
      }
      else {
        uVar3 = (**(code **)(param_1[1] + 0x20))(param_1[1],lVar5,&local_10,1,*param_1);
      }
      goto LAB_001139a4;
    }
    break;
  case 0x1f:
    if (param_4 == 0) {
      uVar3 = 0;
      *param_3 = param_1[2];
    }
    else {
      uVar3 = 0xfffffffc;
    }
    goto LAB_001139a4;
  default:
    log2Console(3,"Bugly-libunwind","bad register number %u\n",param_2);
    uVar3 = 0xfffffffd;
    goto LAB_001139a4;
  }
  uVar3 = 0xfffffffd;
LAB_001139a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

