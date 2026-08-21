
/* v8::internal::DescriptorArray::Append(v8::internal::Descriptor*) */

void __thiscall v8::internal::DescriptorArray::Append(DescriptorArray *this,Descriptor *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong local_68;
  
  sVar1 = *(short *)(*(long *)this + 5);
  *(short *)(*(long *)this + 5) = sVar1 + 1;
  puVar7 = *(ulong **)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0) {
    if (puVar7 == (ulong *)0x0) goto LAB_00f806b8;
    uVar5 = *puVar7 | 2;
  }
  else {
    if (puVar7 == (ulong *)0x0) {
LAB_00f806b8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr",**(undefined8 **)param_1);
    }
    uVar5 = *puVar7;
  }
  uVar2 = (uint)sVar1;
  uVar8 = (ulong)uVar2;
  Set(this,(long)sVar1,**(undefined8 **)param_1,uVar5,*(undefined4 *)(param_1 + 0x18));
  local_68 = **(long **)param_1;
  if ((*(uint *)(local_68 + 3) & 1) == 0) {
    uVar3 = *(uint *)(local_68 + 3) >> 3;
  }
  else {
    uVar3 = String::ComputeAndSetHash((String *)&local_68);
  }
  uVar10 = uVar2;
  if (0 < sVar1) {
    lVar11 = uVar8 * 0xc00000000 + 0x1000000000;
    lVar12 = (long)(int)uVar2 * 0xc00000000 + 0x400000000;
    do {
      uVar10 = (uint)uVar8;
      uVar5 = *(ulong *)this;
      uVar9 = lVar12 >> 0x20 | 3;
      local_68 = uVar5 & 0xffffffff00000000 |
                 (ulong)*(uint *)(uVar5 + (((ulong)(*(uint *)(uVar5 + uVar9) >> 10) & 0x3ff) *
                                           0xc00000000 + 0x1000000000 >> 0x20) + -1);
      if ((*(uint *)(local_68 + 3) & 1) == 0) {
        uVar4 = *(uint *)(local_68 + 3) >> 3;
      }
      else {
        uVar4 = String::ComputeAndSetHash((String *)&local_68);
      }
      if (uVar4 <= uVar3) goto LAB_00f8066c;
      lVar6 = *(long *)this;
      uVar5 = lVar11 >> 0x20 | 3;
      uVar8 = (ulong)(uVar10 - 1);
      lVar11 = lVar11 + -0xc00000000;
      lVar12 = lVar12 + -0xc00000000;
      *(uint *)(lVar6 + uVar5) =
           *(uint *)(lVar6 + uVar5) & 0xfff003fe | *(uint *)(lVar6 + uVar9) & 0xffc00;
    } while (0 < (int)(uVar10 - 1));
    uVar10 = 0;
  }
LAB_00f8066c:
  uVar5 = (long)(int)uVar10 * 0xc00000000 + 0x1000000000 >> 0x20 | 3;
  *(uint *)(*(long *)this + uVar5) = *(uint *)(*(long *)this + uVar5) & 0xfff003fe | uVar2 << 10;
  return;
}

