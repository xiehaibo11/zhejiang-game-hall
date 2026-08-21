
/* v8::internal::JSObject::WriteToField(v8::internal::InternalIndex, v8::internal::PropertyDetails,
   v8::internal::Object) */

void __thiscall
v8::internal::JSObject::WriteToField(JSObject *this,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  double dVar11;
  Representation local_18 [8];
  
  uVar6 = *(ulong *)this;
  uVar4 = uVar6 & 0xffffffff00000000;
  uVar7 = uVar4 | *(uint *)(uVar6 - 1);
  uVar5 = *(int *)(uVar4 + (param_2 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U) +
                  (ulong)*(uint *)(uVar7 + 0x17)) >> 1;
  uVar2 = uVar5 >> 0x13 & 0x3ff;
  iVar1 = (uint)*(byte *)(uVar7 + 3) - (uint)*(byte *)(uVar7 + 4);
  if ((int)uVar2 < iVar1) {
    uVar8 = (ulong)*(byte *)(uVar7 + 4) << 0x1c;
    iVar10 = (uVar2 + *(byte *)(uVar7 + 4)) * 4;
  }
  else {
    iVar10 = (uVar2 - iVar1) * 4 + 8;
    uVar8 = 0x20000000;
  }
  uVar5 = uVar5 >> 6 & 7;
  local_18[0] = SUB41(uVar5,0);
  if (uVar5 < 5) {
    uVar7 = (ulong)iVar10;
    uVar9 = (ulong)((int)uVar2 < iVar1) << 0xd | (long)iVar1 << 0x10 | uVar7;
    uVar8 = uVar9 | uVar8;
    if ((param_3 & 0x1c0) == 0x80) {
      if ((param_4 & 1) == 0) {
        dVar11 = (double)((int)param_4 >> 1);
      }
      else if ((int)param_4 == *(int *)((param_4 & 0xffffffff00000000) + 0x98)) {
        dVar11 = -NAN;
      }
      else {
        dVar11 = *(double *)(param_4 + 3);
      }
      if (((uint)uVar9 >> 0xd & 1) == 0) {
        uVar5 = *(uint *)(uVar6 + 3);
        if (((uVar5 & 1) == 0) || (uVar5 == *(uint *)(uVar4 + 0x168))) {
          uVar6 = *(ulong *)(uVar4 + 0x3b8);
        }
        else {
          uVar6 = uVar4 | uVar5;
        }
        uVar5 = *(uint *)(((uVar7 & 0x1ffc) - (uVar8 >> 0x1a & 0x7c)) + uVar6 + 7);
      }
      else {
        uVar5 = *(uint *)((uVar7 & 0x1fff) + uVar6 + -1);
      }
      *(double *)((uVar4 | uVar5) + 3) = dVar11;
      return;
    }
    RawFastPropertyAtPut(this,*(ulong *)(&DAT_019d78d8 + (ulong)uVar5 * 8) | uVar8,param_4,4);
    return;
  }
  uVar3 = Representation::Mnemonic(local_18);
  PrintF("%s\n",uVar3);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

