
/* v8::internal::compiler::RepresentationChanger::MakeTruncatedInt32Constant(double) */

void __thiscall
v8::internal::compiler::RepresentationChanger::MakeTruncatedInt32Constant
          (RepresentationChanger *this,double param_1)

{
  uint uVar1;
  ulong uVar2;
  MachineGraph *this_00;
  int iVar3;
  int iVar4;
  
  this_00 = *(MachineGraph **)(this + 8);
  if ((((param_1 < -2147483648.0) || (2147483647.0 < param_1)) || (ABS(param_1) == INFINITY)) ||
     ((NAN(ABS(param_1)) || (iVar3 = (int)param_1, (double)(int)param_1 != param_1)))) {
    uVar1 = 0xfffffbce;
    if (((ulong)param_1 & 0x7ff0000000000000) != 0) {
      uVar1 = ((uint)((ulong)param_1 >> 0x34) & 0x7ff) - 0x433;
    }
    if ((int)uVar1 < 0) {
      if ((int)uVar1 < -0x34) {
        MachineGraph::Int32Constant(this_00,0);
        return;
      }
      uVar2 = (ulong)param_1 & 0xfffffffffffff;
      if (((ulong)param_1 & 0x7ff0000000000000) != 0) {
        uVar2 = (ulong)param_1 & 0xfffffffffffff | 0x10000000000000;
      }
      iVar4 = (int)(uVar2 >> ((ulong)-uVar1 & 0x3f));
    }
    else {
      if (0x1f < (int)uVar1) {
        MachineGraph::Int32Constant(this_00,0);
        return;
      }
      uVar2 = (ulong)param_1 & 0xfffffffffffff;
      if (((ulong)param_1 & 0x7ff0000000000000) != 0) {
        uVar2 = (ulong)param_1 & 0xfffffffffffff | 0x10000000000000;
      }
      iVar4 = (int)(uVar2 << ((ulong)uVar1 & 0x3f));
    }
    iVar3 = -iVar4;
    if (-1 < (long)param_1) {
      iVar3 = iVar4;
    }
  }
  MachineGraph::Int32Constant(this_00,iVar3);
  return;
}

