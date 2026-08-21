
/* v8::internal::interpreter::JumpTableTargetOffsets::end() const */

void v8::internal::interpreter::JumpTableTargetOffsets::end(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *in_x0;
  undefined8 *in_x8;
  
  iVar2 = *(int *)((long)in_x0 + 0xc);
  iVar3 = *(int *)(in_x0 + 2);
  iVar1 = *(int *)(in_x0 + 1) + iVar2;
  *in_x8 = *in_x0;
  in_x8[1] = 0;
  *(int *)(in_x8 + 2) = iVar2 + iVar3;
  *(int *)((long)in_x8 + 0x14) = iVar1;
  *(int *)(in_x8 + 3) = iVar1;
  return;
}

