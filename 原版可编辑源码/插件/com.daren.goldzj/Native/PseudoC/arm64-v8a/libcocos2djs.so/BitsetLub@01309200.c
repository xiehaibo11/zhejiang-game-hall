
/* v8::internal::compiler::Type::BitsetLub() const */

uint __thiscall v8::internal::compiler::Type::BitsetLub(Type *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 local_38;
  
  puVar4 = *(undefined4 **)this;
  if (((ulong)puVar4 & 1) == 0) {
    uVar2 = 0x10;
    switch(*puVar4) {
    case 0:
    case 4:
      uVar2 = puVar4[1];
      break;
    case 1:
      break;
    case 2:
      uVar2 = 0x1000000;
      break;
    case 3:
      local_38 = **(undefined8 **)(puVar4 + 2);
      uVar2 = BitsetLub((Type *)&local_38);
      uVar1 = *(uint *)(*(long *)this + 4);
      if (0 < (int)uVar1) {
        local_38 = **(undefined8 **)(*(long *)this + 8);
        uVar3 = BitsetLub((Type *)&local_38);
        uVar2 = uVar3 | uVar2;
        if (uVar1 != 1) {
          uVar5 = 1;
          do {
            local_38 = *(undefined8 *)(*(long *)(*(long *)this + 8) + uVar5 * 8);
            uVar3 = BitsetLub((Type *)&local_38);
            uVar5 = uVar5 + 1;
            uVar2 = uVar3 | uVar2;
          } while (uVar1 != uVar5);
        }
      }
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  else {
    uVar2 = (uint)puVar4 ^ 1;
  }
  return uVar2;
}

