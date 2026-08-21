
/* v8::internal::Operand::EmbeddedNumber(double) */

void __thiscall v8::internal::Operand::EmbeddedNumber(Operand *this,double param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *in_x8;
  undefined7 uStack_6f;
  HeapObjectRequest HStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((param_1 <= 1073741823.0) && (-1073741824.0 <= param_1)) && (param_1 != -0.0)) {
    uVar2 = (uint)param_1;
    if ((double)(int)uVar2 == param_1) {
      *(undefined1 *)in_x8 = 0;
      *(undefined1 *)(in_x8 + 1) = 0;
      in_x8[4] = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      in_x8[5] = 0x13;
      *(undefined4 *)(in_x8 + 7) = 2;
      in_x8[6] = 0xffffffff;
      goto LAB_01261e78;
    }
  }
  HStack_68 = (HeapObjectRequest)0x0;
  local_50 = 0;
  uStack_48 = 3;
  local_40 = 0xffffffff;
  local_38 = 2;
  this = (Operand *)HeapObjectRequest::HeapObjectRequest(&HStack_68,param_1,-1);
  in_x8[7] = CONCAT44(uStack_34,local_38);
  in_x8[6] = local_40;
  in_x8[8] = local_30;
  in_x8[3] = uStack_58;
  in_x8[2] = uStack_60;
  in_x8[5] = CONCAT71(uStack_47,uStack_48);
  in_x8[4] = local_50;
  in_x8[1] = CONCAT71(uStack_67,HStack_68);
  *in_x8 = CONCAT71(uStack_6f,1);
LAB_01261e78:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

