
/* v8::internal::JSObject::EnsureCanContainElements(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Arguments*, unsigned int, unsigned int, v8::internal::EnsureElementsMode) */

void v8::internal::JSObject::EnsureCanContainElements
               (ulong *param_1,long param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  if (param_4 != 0) {
    uVar5 = *param_1 & 0xffffffff00000000;
    bVar1 = *(byte *)((uVar5 | 10) + (ulong)*(uint *)(*param_1 - 1));
    bVar2 = bVar1 >> 3;
    uVar4 = (ulong)bVar2;
    if (bVar2 != 3) {
      uVar8 = (uint)(bVar1 < 0x30) & (bVar1 & 8) >> 3;
      puVar6 = (ulong *)(*(long *)(param_2 + 8) - (long)((param_4 + param_3) * 8 + -8));
      do {
        uVar9 = *puVar6;
        uVar3 = (uint)uVar4;
        if ((int)uVar9 == *(int *)(uVar5 + 0xa8)) {
          if (((uVar3 & 0xff) < 7) && ((0x55U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
            uVar4 = 0x7010501030101 >> ((uVar4 & 7) << 3);
          }
          uVar8 = 1;
        }
        else if ((uVar9 & 1) != 0) {
          if ((param_5 == 2) &&
             (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x42)) {
            uVar7 = 4;
            if (uVar8 != 0) {
              uVar7 = 5;
            }
            if (1 < (uVar3 & 0xff)) {
              uVar7 = uVar3;
            }
            uVar4 = (ulong)uVar7;
          }
          else {
            if (uVar8 != 0) {
              uVar3 = 3;
              break;
            }
            uVar8 = 0;
            uVar4 = 2;
          }
        }
        uVar3 = (uint)uVar4;
        param_4 = param_4 + -1;
        puVar6 = puVar6 + 1;
      } while (param_4 != 0);
      if ((uint)bVar2 != (uVar3 & 0xff)) {
        TransitionElementsKind();
        return;
      }
    }
  }
  return;
}

