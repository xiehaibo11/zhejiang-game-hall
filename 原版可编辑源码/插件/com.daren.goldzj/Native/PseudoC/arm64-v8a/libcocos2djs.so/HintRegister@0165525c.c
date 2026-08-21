
/* v8::internal::compiler::UsePosition::HintRegister(int*) const */

undefined8 __thiscall
v8::internal::compiler::UsePosition::HintRegister(UsePosition *this,int *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    switch(*(uint *)(this + 0x1c) >> 2 & 7) {
    case 0:
    case 4:
      return 0;
    case 1:
      *param_1 = (int)((long)*puVar2 >> 0x23);
      return 1;
    case 2:
      uVar1 = *(uint *)((long)puVar2 + 0x1c) >> 6 & 0x3f;
      break;
    case 3:
      uVar1 = *(uint *)(puVar2 + 6);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (uVar1 != 0x20) {
      *param_1 = uVar1;
      return 1;
    }
  }
  return 0;
}

