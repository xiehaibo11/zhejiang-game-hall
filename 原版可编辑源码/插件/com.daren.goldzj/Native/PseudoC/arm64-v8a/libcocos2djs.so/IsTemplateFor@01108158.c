
/* v8::internal::FunctionTemplateInfo::IsTemplateFor(v8::internal::Map) */

undefined8 __thiscall
v8::internal::FunctionTemplateInfo::IsTemplateFor(FunctionTemplateInfo *this,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (0xa9 < *(ushort *)(param_2 + 7)) {
    uVar4 = param_2 & 0xffffffff00000000;
    uVar3 = uVar4 | *(uint *)(param_2 + 0x13);
    if ((*(uint *)(param_2 + 0x13) & 1) != 0) {
      do {
        if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar3 + 0x13);
        uVar3 = uVar4 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar4 = uVar3 & 0xffffffff00000000;
      if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439) {
        uVar2 = *(uint *)((uVar4 | *(uint *)(uVar3 + 0xb)) + 3);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        uVar3 = uVar4 | uVar2;
      }
      else if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x4e) {
        return 0;
      }
      do {
        uVar4 = uVar3 & 0xffffffff00000000;
        if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x4e) {
          return 0;
        }
        if ((int)uVar3 == *(int *)this) {
          return 1;
        }
        puVar1 = (uint *)(uVar3 + 0x23);
        uVar3 = *(ulong *)(uVar4 + 0xa0);
        if (*puVar1 != (uint)uVar3) {
          uVar3 = uVar4 | *(uint *)((uVar4 | *puVar1) + 0xb);
        }
      } while ((uVar3 & 1) != 0);
    }
  }
  return 0;
}

