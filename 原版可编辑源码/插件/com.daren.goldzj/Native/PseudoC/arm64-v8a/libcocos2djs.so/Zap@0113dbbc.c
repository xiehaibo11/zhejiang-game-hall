
/* v8::internal::TransitionArray::Zap(v8::internal::Isolate*) */

void __thiscall v8::internal::TransitionArray::Zap(TransitionArray *this,Isolate *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  lVar5 = *(long *)this;
  uVar1 = (int)*(uint *)(lVar5 + 3) >> 1;
  if (uVar1 == 0) goto LAB_0113dc28;
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  uVar3 = (long)((ulong)*(uint *)(lVar5 + 3) << 0x20) >> 0x21;
  if (uVar1 < 8) {
    uVar7 = 0;
LAB_0113dc10:
    lVar4 = uVar3 - uVar7;
    puVar6 = (undefined4 *)(lVar5 + 7 + uVar7 * 4);
    do {
      lVar4 = lVar4 + -1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  else {
    uVar7 = uVar3 & 0xfffffffffffffff8;
    puVar8 = (undefined8 *)(lVar5 + 0x17);
    uVar9 = uVar7;
    do {
      puVar8[-1] = CONCAT44(uVar2,uVar2);
      puVar8[-2] = CONCAT44(uVar2,uVar2);
      puVar8[1] = CONCAT44(uVar2,uVar2);
      *puVar8 = CONCAT44(uVar2,uVar2);
      uVar9 = uVar9 - 8;
      puVar8 = puVar8 + 4;
    } while (uVar9 != 0);
    if (uVar7 != uVar3) goto LAB_0113dc10;
  }
  lVar5 = *(long *)this;
LAB_0113dc28:
  *(undefined4 *)(lVar5 + 0xb) = 0;
  return;
}

