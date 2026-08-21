
void FUN_0108e630(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  double *pdVar5;
  double dVar6;
  
  uVar1 = *param_2;
  if ((uint)(*(int *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7)) + 3) >> 1) <
      param_5) {
    FUN_0108f294(param_2,param_5 & 0xffffffff);
    uVar1 = *param_2;
    if ((*(byte *)((uVar1 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar1 - 1)) & 0xf8) != 0x20)
    {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Subclass::kind() == receiver->GetElementsKind()");
    }
  }
  if (param_4 < param_5) {
    lVar2 = param_5 - param_4;
    uVar3 = (int)param_4 << 3 | 7;
    do {
      uVar4 = *param_3;
      uVar1 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7);
      if ((uVar4 & 1) == 0) {
        dVar6 = (double)((int)uVar4 >> 1);
        pdVar5 = (double *)(uVar1 + (long)(int)uVar3);
LAB_0108e6ec:
        *pdVar5 = dVar6;
      }
      else {
        dVar6 = *(double *)(uVar4 + 3);
        pdVar5 = (double *)(uVar1 + (long)(int)uVar3);
        if (!NAN(dVar6)) goto LAB_0108e6ec;
        *pdVar5 = NAN;
      }
      uVar1 = *param_2;
      lVar2 = lVar2 + -1;
      uVar3 = uVar3 + 8;
    } while (lVar2 != 0);
  }
  return;
}

