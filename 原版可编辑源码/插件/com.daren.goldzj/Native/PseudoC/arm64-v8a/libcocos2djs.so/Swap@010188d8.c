
/* v8::internal::SemiSpace::Swap(v8::internal::SemiSpace*, v8::internal::SemiSpace*) */

void v8::internal::SemiSpace::Swap(SemiSpace *param_1,SemiSpace *param_2)

{
  SemiSpace SVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x90) + 8);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = uVar4;
  SVar1 = param_1[0x88];
  param_1[0x88] = param_2[0x88];
  param_2[0x88] = SVar1;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_2 + 0x28) = uVar7;
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  if (lVar3 != 0) {
    uVar2 = uVar2 & 0x40006;
    do {
      while( true ) {
        *(SemiSpace **)(lVar3 + 0x58) = param_2;
        uVar5 = *(ulong *)(lVar3 + 8);
        *(ulong *)(lVar3 + 8) = uVar5 & 0xfffffffffffbfff9 | uVar2;
        if (*(int *)(param_2 + 0x8c) != 1) break;
        *(ulong *)(lVar3 + 8) = uVar5 & 0xfffffffffff3ffe1 | uVar2 | 0x10;
        *(undefined8 *)(lVar3 + 0x68) = 0;
        lVar3 = *(long *)(lVar3 + 0xe0);
        if (lVar3 == 0) goto LAB_010189e0;
      }
      *(ulong *)(lVar3 + 8) = uVar5 & 0xfffffffffffbffe1 | uVar2 | 8;
      lVar3 = *(long *)(lVar3 + 0xe0);
    } while (lVar3 != 0);
  }
LAB_010189e0:
  lVar3 = *(long *)(param_1 + 0x20);
  do {
    if (lVar3 == 0) {
      return;
    }
    while( true ) {
      *(SemiSpace **)(lVar3 + 0x58) = param_1;
      if (*(int *)(param_1 + 0x8c) != 1) break;
      *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) & 0xfffffffffff7ffe7 | 0x10;
      *(undefined8 *)(lVar3 + 0x68) = 0;
      lVar3 = *(long *)(lVar3 + 0xe0);
      if (lVar3 == 0) {
        return;
      }
    }
    *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) & 0xffffffffffffffe7 | 8;
    lVar3 = *(long *)(lVar3 + 0xe0);
  } while( true );
}

