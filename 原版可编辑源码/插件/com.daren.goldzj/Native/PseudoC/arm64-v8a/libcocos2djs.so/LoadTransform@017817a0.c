
/* v8::internal::compiler::MachineOperatorBuilder::LoadTransform(v8::internal::compiler::LoadKind,
   v8::internal::compiler::LoadTransformation) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::LoadTransform
          (MachineOperatorBuilder *this,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0 && param_2 == 0) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x48f0;
  }
  else if ((param_2 == 1) && (param_3 == 0)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4928;
  }
  else if ((param_2 == 2) && (param_3 == 0)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4960;
  }
  else if ((param_2 == 0) && (param_3 == 1)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4998;
  }
  else if ((param_2 == 1) && (param_3 == 1)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x49d0;
  }
  else if ((param_2 == 2) && (param_3 == 1)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4a08;
  }
  else if ((param_2 == 0) && (param_3 == 2)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4a40;
  }
  else if ((param_2 == 1) && (param_3 == 2)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4a78;
  }
  else if ((param_2 == 2) && (param_3 == 2)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4ab0;
  }
  else if ((param_2 == 0) && (param_3 == 3)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4ae8;
  }
  else if ((param_2 == 1) && (param_3 == 3)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4b20;
  }
  else if ((param_2 == 2) && (param_3 == 3)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4b58;
  }
  else if ((param_2 == 0) && (param_3 == 4)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4b90;
  }
  else if ((param_2 == 1) && (param_3 == 4)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4bc8;
  }
  else if ((param_2 == 2) && (param_3 == 4)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4c00;
  }
  else if ((param_2 == 0) && (param_3 == 5)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4c38;
  }
  else if ((param_2 == 1) && (param_3 == 5)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4c70;
  }
  else if ((param_2 == 2) && (param_3 == 5)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4ca8;
  }
  else if ((param_2 == 0) && (param_3 == 6)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4ce0;
  }
  else if ((param_2 == 1) && (param_3 == 6)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4d18;
  }
  else if ((param_2 == 2) && (param_3 == 6)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4d50;
  }
  else if ((param_2 == 0) && (param_3 == 7)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4d88;
  }
  else if ((param_2 == 1) && (param_3 == 7)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4dc0;
  }
  else if ((param_2 == 2) && (param_3 == 7)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4df8;
  }
  else if ((param_2 == 0) && (param_3 == 8)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4e30;
  }
  else if ((param_2 == 1) && (param_3 == 8)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4e68;
  }
  else if ((param_2 == 2) && (param_3 == 8)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4ea0;
  }
  else if ((param_2 == 0) && (param_3 == 9)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4ed8;
  }
  else if ((param_2 == 1) && (param_3 == 9)) {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4f10;
  }
  else {
    if ((param_2 != 2) || (param_3 != 9)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x4f48;
  }
  return lVar1 + lVar2;
}

