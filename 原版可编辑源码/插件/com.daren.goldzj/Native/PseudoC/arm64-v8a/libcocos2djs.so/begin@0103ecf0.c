
/* v8::internal::interpreter::JumpTableTargetOffsets::begin() const */

void v8::internal::interpreter::JumpTableTargetOffsets::begin(void)

{
  int iVar1;
  int iVar2;
  undefined8 *in_x0;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *in_x8;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  iVar5 = *(int *)(in_x0 + 1);
  iVar2 = *(int *)((long)in_x0 + 0xc);
  puVar6 = (undefined8 *)*in_x0;
  iVar7 = *(int *)(in_x0 + 2);
  iVar1 = iVar2 + iVar5;
  *in_x8 = puVar6;
  in_x8[1] = 0;
  *(int *)(in_x8 + 2) = iVar7;
  *(int *)((long)in_x8 + 0x14) = iVar5;
  *(int *)(in_x8 + 3) = iVar1;
  if (0 < iVar2) {
    do {
      iVar7 = iVar7 + 1;
      uVar3 = (**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,iVar5);
      if ((uVar3 & 1) != 0) break;
      iVar5 = iVar5 + 1;
      *(int *)(in_x8 + 2) = iVar7;
      *(int *)((long)in_x8 + 0x14) = iVar5;
    } while (iVar5 < iVar1);
  }
  if (iVar5 < iVar1) {
    uVar4 = (**(code **)(*(long *)*puVar6 + 0x38))((long *)*puVar6,iVar5);
    in_x8[1] = uVar4;
  }
  return;
}

