
/* v8::internal::AccessCheckInfo::Get(v8::internal::Isolate const*,
   v8::internal::Handle<v8::internal::JSObject>) */

ulong v8::internal::AccessCheckInfo::Get(long param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar4 | *(uint *)(*param_2 - 1)) + 0x13);
  uVar3 = uVar4 | uVar2;
  if ((uVar2 & 1) != 0) {
    do {
      if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar3 + 0x13);
      uVar3 = uVar4 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar4 = uVar3 & 0xffffffff00000000;
  uVar5 = uVar4 | 7;
  if (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) == 0x4e) {
    uVar2 = *(uint *)(uVar3 + 0x23);
    uVar5 = *(ulong *)(uVar4 + 0xa0);
    if (uVar2 == (uint)uVar5) goto LAB_0111c064;
  }
  else {
    if (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) != 0x439) {
      return 0;
    }
    uVar2 = *(uint *)((uVar4 | *(uint *)(uVar3 + 0xb)) + 3);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(short *)(uVar5 + *(uint *)((uVar4 | uVar2) - 1)) != 0x4e) {
      return 0;
    }
    uVar5 = *(ulong *)(uVar4 + 0xa0);
    uVar2 = *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar3 + 0xb)) + 3)) + 0x23);
    if (uVar2 == (uint)uVar5) goto LAB_0111c064;
  }
  uVar5 = uVar4 | *(uint *)((uVar4 | uVar2) + 0x1f);
LAB_0111c064:
  if (((uVar5 & 1) != 0) && ((int)uVar5 == *(int *)(param_1 + 0xa0))) {
    return 0;
  }
  return uVar5;
}

