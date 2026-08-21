
void FUN_00d92638(long *param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  void *__s;
  undefined8 *puVar4;
  undefined8 uVar5;
  size_t __n;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = param_1[0x52];
  puVar7 = *(undefined8 **)(lVar6 + 0x30);
  bVar1 = (int)param_1[0xe] != 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xe) = 2;
  }
  if (param_2 != 0) {
    *(code **)(lVar6 + 8) = FUN_00d92bbc;
    *(code **)(lVar6 + 0x10) = FUN_00d92c3c;
    *(undefined4 *)(lVar6 + 0x38) = 1;
    iVar3 = *(int *)(lVar6 + 0x38);
    goto joined_r0x00d92758;
  }
  pcVar2 = FUN_00d93204;
  if (!bVar1) {
    pcVar2 = FUN_00d93510;
  }
  *(code **)(lVar6 + 8) = pcVar2;
  *(code **)(lVar6 + 0x10) = FUN_00d935ec;
  if (*(int *)((long)param_1 + 0x9c) < 1) {
    puVar4 = (undefined8 *)*param_1;
    uVar5 = 0x10000003a;
LAB_00d926e4:
    puVar4[5] = uVar5;
    (*(code *)*puVar4)(param_1);
  }
  else if (0x100 < *(int *)((long)param_1 + 0x9c)) {
    puVar4 = (undefined8 *)*param_1;
    uVar5 = 0x1000000003b;
    goto LAB_00d926e4;
  }
  if ((int)param_1[0xe] == 2) {
    __s = *(void **)(lVar6 + 0x40);
    __n = (ulong)((int)param_1[0x11] + 2) * 6;
    if (__s == (void *)0x0) {
      __s = (void *)(**(code **)(param_1[1] + 8))(param_1,1,__n);
      *(void **)(lVar6 + 0x40) = __s;
    }
    memset(__s,0,__n);
    if (*(long *)(lVar6 + 0x50) == 0) {
      FUN_00d92980(param_1);
    }
    *(undefined4 *)(lVar6 + 0x48) = 0;
  }
  iVar3 = *(int *)(lVar6 + 0x38);
joined_r0x00d92758:
  if (iVar3 != 0) {
    memset((void *)*puVar7,0,0x1000);
    memset((void *)puVar7[1],0,0x1000);
    memset((void *)puVar7[2],0,0x1000);
    memset((void *)puVar7[3],0,0x1000);
    memset((void *)puVar7[4],0,0x1000);
    memset((void *)puVar7[5],0,0x1000);
    memset((void *)puVar7[6],0,0x1000);
    memset((void *)puVar7[7],0,0x1000);
    memset((void *)puVar7[8],0,0x1000);
    memset((void *)puVar7[9],0,0x1000);
    memset((void *)puVar7[10],0,0x1000);
    memset((void *)puVar7[0xb],0,0x1000);
    memset((void *)puVar7[0xc],0,0x1000);
    memset((void *)puVar7[0xd],0,0x1000);
    memset((void *)puVar7[0xe],0,0x1000);
    memset((void *)puVar7[0xf],0,0x1000);
    memset((void *)puVar7[0x10],0,0x1000);
    memset((void *)puVar7[0x11],0,0x1000);
    memset((void *)puVar7[0x12],0,0x1000);
    memset((void *)puVar7[0x13],0,0x1000);
    memset((void *)puVar7[0x14],0,0x1000);
    memset((void *)puVar7[0x15],0,0x1000);
    memset((void *)puVar7[0x16],0,0x1000);
    memset((void *)puVar7[0x17],0,0x1000);
    memset((void *)puVar7[0x18],0,0x1000);
    memset((void *)puVar7[0x19],0,0x1000);
    memset((void *)puVar7[0x1a],0,0x1000);
    memset((void *)puVar7[0x1b],0,0x1000);
    memset((void *)puVar7[0x1c],0,0x1000);
    memset((void *)puVar7[0x1d],0,0x1000);
    memset((void *)puVar7[0x1e],0,0x1000);
    memset((void *)puVar7[0x1f],0,0x1000);
    *(undefined4 *)(lVar6 + 0x38) = 0;
  }
  return;
}

