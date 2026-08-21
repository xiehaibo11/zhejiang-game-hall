
void Poly1305_Final(void *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  code *pcVar8;
  
  lVar5 = *(long *)((long)param_1 + 0xe0);
  pcVar8 = *(code **)((long)param_1 + 0xf0);
  if (lVar5 == 0) goto LAB_00b45ef8;
  pcVar1 = *(code **)((long)param_1 + 0xe8);
  uVar2 = lVar5 + 1;
  *(undefined1 *)((long)param_1 + lVar5 + 0xd0) = 1;
  if (uVar2 < 0x10) {
    uVar3 = 0xf - lVar5;
    if ((0x1f < uVar3) && (uVar4 = uVar3 & 0xffffffffffffffe0, uVar4 != 0)) {
      puVar6 = (undefined8 *)((long)param_1 + lVar5 + 0xe1);
      uVar7 = uVar4;
      do {
        puVar6[-1] = 0;
        puVar6[-2] = 0;
        puVar6[1] = 0;
        *puVar6 = 0;
        uVar7 = uVar7 - 0x20;
        puVar6 = puVar6 + 4;
      } while (uVar7 != 0);
      uVar2 = uVar2 + uVar4;
      if (uVar3 == uVar4) goto LAB_00b45ee4;
    }
    do {
      uVar3 = uVar2 + 1;
      *(undefined1 *)((long)param_1 + uVar2 + 0xd0) = 0;
      uVar2 = uVar3;
    } while (uVar3 < 0x10);
  }
LAB_00b45ee4:
  (*pcVar1)(param_1,(long)param_1 + 0xd0,0x10,0);
LAB_00b45ef8:
  (*pcVar8)(param_1,param_2,(long)param_1 + 0xc0);
  OPENSSL_cleanse(param_1,0xf8);
  return;
}

