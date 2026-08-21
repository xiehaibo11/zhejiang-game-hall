
/* v8::internal::compiler::InstructionScheduler::GetInstructionFlags(v8::internal::compiler::Instruction
   const*) const */

undefined8 __thiscall
v8::internal::compiler::InstructionScheduler::GetInstructionFlags
          (InstructionScheduler *this,Instruction *param_1)

{
  undefined8 uVar1;
  
  if (0x183 < (*(uint *)param_1 & 0x1ff) - 0x60) {
    uVar1 = 0;
    switch(*(uint *)param_1 & 0x1ff) {
    case 0:
    case 3:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xc:
    case 0x13:
      return 8;
    case 1:
    case 2:
    case 4:
    case 5:
    case 9:
    case 0xb:
    case 0x12:
    case 0x1b:
    case 0x1d:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
      return 1;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1f:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
      goto switchD_017e99f4_caseD_d;
    case 0x1e:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
      uVar1 = 2;
switchD_017e99f4_caseD_d:
      return uVar1;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  uVar1 = GetTargetInstructionFlags(this,param_1);
  return uVar1;
}

