
void FUN_018144dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar1 = param_1 + 2;
  puVar3 = param_1 + 0x22;
  *param_1 = &PTR_FUN_01cdb9e0;
  param_1[1] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[3] = puVar3;
  param_1[4] = puVar3;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  param_1[2] = param_1 + 6;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  if (param_1 != param_2) {
    FUN_01828350(puVar1,param_2[2],param_2[3]);
    puVar3 = (undefined8 *)param_1[3];
  }
  puVar4 = (undefined8 *)*puVar1;
  if (puVar3 != puVar4) {
    uVar5 = 0;
    uVar6 = 1;
    do {
      if ((__shared_count *)puVar4[uVar5] != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared((__shared_count *)puVar4[uVar5]);
        puVar3 = (undefined8 *)param_1[3];
        puVar4 = (undefined8 *)*puVar1;
      }
      bVar2 = uVar6 < (ulong)((long)puVar3 - (long)puVar4 >> 3);
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar2);
  }
  if ((param_4 >> 3 & 1) != 0) {
    FUN_018147fc(param_1,param_3);
    FUN_01814968(param_1,param_3);
  }
  if ((param_4 & 1) != 0) {
    FUN_01814ad4(param_1,param_3);
    FUN_01814c40(param_1,param_3);
    FUN_01814dac(param_1,param_3);
    FUN_01814f18(param_1,param_3);
    FUN_01815084(param_1,param_3);
    FUN_018151f0(param_1,param_3);
  }
  if ((param_4 >> 4 & 1) != 0) {
    FUN_0181535c(param_1,param_3);
    FUN_018154c8(param_1,param_3);
    FUN_01815634(param_1,param_3);
    FUN_018157a0(param_1,param_3);
    FUN_0181590c(param_1,param_3);
    FUN_01815a78(param_1,param_3);
    FUN_01815be4(param_1,param_3);
    FUN_01815d50(param_1,param_3);
  }
  if ((param_4 >> 1 & 1) != 0) {
    FUN_01815ebc(param_1,param_3);
    FUN_01817028(param_1,param_3);
    FUN_01817194(param_1,param_3);
    FUN_01817300(param_1,param_3);
    FUN_0181746c(param_1,param_3);
    FUN_018175d8(param_1,param_3);
  }
  if ((param_4 >> 2 & 1) != 0) {
    FUN_01817744(param_1,param_3);
    FUN_018178b0(param_1,param_3);
    FUN_01817a1c(param_1,param_3);
    FUN_01817b88(param_1,param_3);
  }
  if ((param_4 >> 5 & 1) != 0) {
    FUN_01817cf4(param_1,param_3);
    FUN_01817e60(param_1,param_3);
  }
  return;
}

