
/* v8::internal::CompiledReplacement::Apply(v8::internal::ReplacementStringBuilder*, int, int, int*)
    */

void __thiscall
v8::internal::CompiledReplacement::Apply
          (CompiledReplacement *this,ReplacementStringBuilder *param_1,int param_2,int param_3,
          int *param_4)

{
  FixedArrayBuilder *pFVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  
  puVar10 = *(uint **)(this + 0x10);
  puVar11 = *(uint **)(this + 0x18);
  if (puVar11 == (uint *)0x0) {
    uVar12 = 0;
    puVar11 = puVar10;
  }
  else {
    uVar12 = (ulong)puVar11[1];
    if (puVar11[1] == *puVar11) {
      puVar11 = *(uint **)(puVar11 + 2);
      uVar12 = 0;
    }
    if (puVar11 != puVar10) goto LAB_0157c844;
  }
  if (uVar12 == 0) {
    return;
  }
LAB_0157c844:
  pFVar1 = (FixedArrayBuilder *)(param_1 + 8);
  uVar9 = 0;
  do {
    switch(puVar10[uVar9 * 2 + 6]) {
    case 1:
      if (0 < param_2) {
        ReplacementStringBuilder::EnsureCapacity(param_1,2);
        lVar4 = (ulong)(uint)param_2 << 1;
        if (0x7ff < (uint)param_2) {
          FixedArrayBuilder::Add
                    (pFVar1,-(ulong)((uint)-param_2 >> 0x1f) & 0xfffffffe00000000 |
                            (ulong)(uint)-param_2 << 1);
          lVar4 = 0;
        }
        FixedArrayBuilder::Add(pFVar1,lVar4);
        iVar6 = 0x7fffffff;
        if (*(int *)(param_1 + 0x20) <= 0xffffff0 - param_2) {
          iVar6 = *(int *)(param_1 + 0x20) + param_2;
        }
LAB_0157ca44:
        *(int *)(param_1 + 0x20) = iVar6;
      }
      break;
    case 2:
      uVar3 = puVar10[uVar9 * 2 + 7] - param_3;
      if (uVar3 != 0 && param_3 <= (int)puVar10[uVar9 * 2 + 7]) {
        ReplacementStringBuilder::EnsureCapacity(param_1,2);
        if (((uint)param_3 >> 0x13 == 0) && (uVar3 < 0x800)) {
          uVar2 = uVar3 | param_3 << 0xb;
        }
        else {
          FixedArrayBuilder::Add
                    (pFVar1,-(ulong)(-uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar3 << 1);
          uVar2 = param_3;
        }
        FixedArrayBuilder::Add
                  (pFVar1,-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
        iVar5 = *(int *)(param_1 + 0x20);
        iVar7 = iVar5 + uVar3;
LAB_0157ca38:
        iVar6 = 0x7fffffff;
        if (iVar5 <= (int)(0xffffff0 - uVar3)) {
          iVar6 = iVar7;
        }
        goto LAB_0157ca44;
      }
      break;
    case 3:
      uVar2 = param_4[(long)(int)puVar10[uVar9 * 2 + 7] * 2];
      uVar8 = (ulong)uVar2;
      if ((-1 < (int)uVar2) &&
         (iVar7 = param_4[(int)(puVar10[uVar9 * 2 + 7] << 1 | 1)], (int)uVar2 < iVar7)) {
        ReplacementStringBuilder::EnsureCapacity(param_1,2);
        uVar3 = iVar7 - uVar2;
        if ((uVar2 >> 0x13 == 0) && (uVar3 < 0x800)) {
          uVar8 = (ulong)(int)(uVar3 | uVar2 << 0xb);
        }
        else {
          FixedArrayBuilder::Add
                    (pFVar1,-(ulong)(-uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar3 << 1);
        }
        FixedArrayBuilder::Add(pFVar1,uVar8 << 1);
        iVar5 = *(int *)(param_1 + 0x20);
        iVar7 = iVar5 + uVar3;
        goto LAB_0157ca38;
      }
      break;
    case 4:
    case 5:
      ReplacementStringBuilder::AddString
                (param_1,*(undefined8 *)
                          (*(long *)(this + 0x20) + (long)(int)puVar10[uVar9 * 2 + 7] * 8));
      break;
    case 6:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar9 = uVar9 + 1;
    if (*puVar10 <= uVar9) {
      puVar10 = *(uint **)(puVar10 + 2);
      uVar9 = 0;
    }
    if ((puVar11 == puVar10) && (uVar12 == uVar9)) {
      return;
    }
  } while( true );
}

