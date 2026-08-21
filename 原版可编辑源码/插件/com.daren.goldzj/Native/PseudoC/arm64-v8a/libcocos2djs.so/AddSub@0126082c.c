
/* v8::internal::Assembler::AddSub(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Operand const&, v8::internal::FlagsUpdate, v8::internal::AddSubOp) */

void v8::internal::Assembler::AddSub
               (Assembler *param_1,ulong *param_2,uint *param_3,char *param_4,int param_5,
               uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(int *)(param_4 + 0x30) == -1) {
    if (((*(int *)(param_4 + 0x34) == 0) && (*(int *)(param_4 + 0x38) == 2)) && (*param_4 == '\0'))
    {
      uVar3 = *param_2;
      uVar5 = uVar3 >> 0x20;
      if (param_5 == 1) {
        uVar4 = 0x20000000;
      }
      else {
        if (param_5 != 0) goto LAB_01260a60;
        uVar4 = 0;
        uVar3 = (ulong)((uint)uVar3 & 0x1f);
      }
      uVar2 = (uint)*(undefined8 *)(param_4 + 0x20);
      uVar1 = uVar2 << 10;
      if (0xfff < uVar2) {
        uVar1 = ((int)uVar2 >> 0xc) << 10 | 0x400000;
      }
      uVar4 = uVar1 | param_6 | (uint)(uVar5 == 0x40) << 0x1f | (uint)uVar3 | uVar4 |
              (*param_3 & 0x1f) << 5;
      uVar1 = 0x11000000;
      goto LAB_01260998;
    }
LAB_012608d0:
    uVar3 = *param_2;
    uVar5 = uVar3 >> 0x20;
    if (param_5 == 1) {
      uVar4 = 0x20000000;
    }
    else {
      if (param_5 != 0) {
LAB_01260a60:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar4 = 0;
      uVar3 = (ulong)((uint)uVar3 & 0x1f);
    }
    uVar4 = (uint)(uVar5 == 0x40) << 0x1f | param_6 | (uint)uVar3 | uVar4 |
            *(int *)(param_4 + 0x30) << 0x10 | *(int *)(param_4 + 0x40) << 0xd |
            *(int *)(param_4 + 0x44) << 10 | (*param_3 & 0x1f) << 5;
  }
  else {
    if (*(int *)(param_4 + 0x3c) == -1) goto LAB_012608d0;
    if (((param_3[2] != 0) || (*param_3 != 0x3f)) &&
       (((int)param_2[1] != 0 || ((int)*param_2 != 0x3f)))) {
      if (param_5 == 1) {
        uVar4 = 0x20000000;
      }
      else {
        if (param_5 != 0) goto LAB_01260a60;
        uVar4 = 0;
      }
      uVar4 = (uint)*param_2 | param_6 | (uint)(*param_2 >> 0x20 == 0x40) << 0x1f | uVar4 |
              *(int *)(param_4 + 0x3c) << 0x16 | *(int *)(param_4 + 0x44) << 10 |
              *(int *)(param_4 + 0x30) << 0x10 | *param_3 << 5;
      uVar1 = 0xb000000;
      goto LAB_01260998;
    }
    uVar3 = *param_2;
    uVar4 = 0x6000;
    if (*(int *)(param_4 + 0x34) != 0x40) {
      uVar4 = 0x4000;
    }
    uVar5 = uVar3 >> 0x20;
    if (param_5 == 1) {
      uVar1 = 0x20000000;
    }
    else {
      if (param_5 != 0) goto LAB_01260a60;
      uVar1 = 0;
      uVar3 = (ulong)((uint)uVar3 & 0x1f);
    }
    uVar4 = param_6 | (int)*(undefined8 *)(param_4 + 0x30) << 0x10 | uVar4 |
            *(int *)(param_4 + 0x44) << 10 | (uint)(uVar5 == 0x40) << 0x1f | (uint)uVar3 | uVar1 |
            (*param_3 & 0x1f) << 5;
  }
  uVar1 = 0xb200000;
LAB_01260998:
  Emit(param_1,uVar4 | uVar1);
  return;
}

