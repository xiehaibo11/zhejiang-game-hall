
/* WARNING: Removing unreachable block (ram,0x010d3cd0) */
/* v8::internal::JSObject::IsUnmodifiedApiObject(v8::internal::FullObjectSlot) */

bool v8::internal::JSObject::IsUnmodifiedApiObject(ulong *param_1)

{
  uint uVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    return false;
  }
  uVar4 = uVar3 & 0xffffffff00000000;
  uVar6 = uVar4 | 7;
  if (*(ushort *)(uVar6 + *(uint *)(uVar3 - 1)) < 0xaa) {
    return false;
  }
  sVar2 = *(short *)((uVar4 | *(uint *)(uVar3 - 1)) + 7);
  if ((sVar2 != 0x420) && (sVar2 != 0x410)) {
    return false;
  }
  uVar5 = uVar4 | *(uint *)(uVar3 - 1);
  do {
    uVar1 = *(uint *)(uVar5 + 0x13);
    uVar5 = uVar4 | uVar1;
    if ((uVar1 & 1) == 0) break;
  } while (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) == 0xa2);
  if ((uVar1 & 1) == 0) {
    return false;
  }
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x439) {
    return false;
  }
  if (1 < *(uint *)((uVar4 | *(uint *)(uVar3 + 7)) + 3)) {
    return false;
  }
  uVar1 = *(uint *)(uVar3 + 3);
  if ((uVar1 & 1) == 0) {
    uVar1 = (int)uVar1 >> 1;
  }
  else {
    uVar7 = uVar4 | uVar1;
    if (*(short *)(uVar6 + *(uint *)(uVar7 - 1)) == 0xa4) {
      uVar1 = *(uint *)(uVar7 + 3) >> 0xb & 0xfffff;
    }
    else {
      if ((*(short *)(uVar6 + *(uint *)(uVar7 - 1)) != 0x7a) &&
         (*(short *)(uVar6 + *(uint *)(uVar7 - 1)) != 0x79)) goto LAB_010d3cd4;
      uVar1 = *(int *)(uVar7 + 0x17) >> 1;
    }
  }
  if (uVar1 != 0) {
    return false;
  }
LAB_010d3cd4:
  uVar4 = *(ulong *)(uVar4 + 0xa0);
  if (((uVar4 & 1) != 0) && ((int)uVar4 == *(int *)((uVar4 & 0xffffffff00000000) + 0xa0))) {
    return *(int *)(uVar5 + 0x1b) == *(int *)(uVar3 - 1);
  }
  return false;
}

