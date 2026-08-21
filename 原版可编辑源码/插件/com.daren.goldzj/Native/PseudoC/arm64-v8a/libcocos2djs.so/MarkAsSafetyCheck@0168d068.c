
/* v8::internal::compiler::CommonOperatorBuilder::MarkAsSafetyCheck(v8::internal::compiler::Operator
   const*, v8::internal::compiler::IsSafetyCheck) */

long __thiscall
v8::internal::compiler::CommonOperatorBuilder::MarkAsSafetyCheck
          (CommonOperatorBuilder *this,long param_1,char param_3)

{
  char cVar1;
  short sVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  sVar2 = *(short *)(param_1 + 0x10);
  if (sVar2 == 2) {
    if (*(char *)(param_1 + 0x2d) != param_3) {
      cVar1 = *(char *)(param_1 + 0x2c);
      if (cVar1 == '\0' && param_3 == '\0') {
        param_1 = *(long *)this + 0x570;
      }
      else if ((param_3 == '\0') && (cVar1 == '\x01')) {
        param_1 = *(long *)this + 0x5a0;
      }
      else if ((param_3 == '\0') && (cVar1 == '\x02')) {
        param_1 = *(long *)this + 0x5d0;
      }
      else if ((param_3 == '\x01') && (cVar1 == '\0')) {
        param_1 = *(long *)this + 0x600;
      }
      else if ((param_3 == '\x01') && (cVar1 == '\x01')) {
        param_1 = *(long *)this + 0x630;
      }
      else if ((param_3 == '\x01') && (cVar1 == '\x02')) {
        param_1 = *(long *)this + 0x660;
      }
      else if ((param_3 == '\x02') && (cVar1 == '\0')) {
        param_1 = *(long *)this + 0x690;
      }
      else if ((param_3 == '\x02') && (cVar1 == '\x01')) {
        param_1 = *(long *)this + 0x6c0;
      }
      else {
        if ((param_3 != '\x02') || (cVar1 != '\x02')) goto LAB_0168d21c;
        param_1 = *(long *)this + 0x6f0;
      }
    }
  }
  else {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(ulong *)(param_1 + 0x30);
    local_38 = *(undefined8 *)(param_1 + 0x48);
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    local_50 = uVar5;
    if ((char)local_38 != param_3) {
      local_50._1_1_ = (undefined1)(uVar5 >> 8);
      uVar4 = local_50._1_1_;
      if (sVar2 == 0xd) {
        param_1 = DeoptimizeUnless(this,uVar5 & 0xff,uVar4,(ulong)&local_50 | 8);
      }
      else {
        if (sVar2 != 0xc) {
LAB_0168d21c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        param_1 = DeoptimizeIf(this,uVar5 & 0xff,uVar4,(ulong)&local_50 | 8);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

