
/* v8::internal::JSObject::EnsureCanContainElements(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::FixedArrayBase>, unsigned int,
   v8::internal::EnsureElementsMode) */

void v8::internal::JSObject::EnsureCanContainElements
               (ulong *param_1,long *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = *param_1;
  lVar6 = *param_2;
  uVar8 = uVar5 & 0xffffffff00000000;
  bVar1 = *(byte *)((uVar8 | 10) + (ulong)*(uint *)(uVar5 - 1));
  uVar9 = (uint)bVar1;
  if (*(int *)(lVar6 + -1) == *(int *)(uVar8 + 0x1e8)) {
    if ((uVar9 & 0xf8) == 8) {
LAB_010df3a0:
      TransitionElementsKind(param_1,5);
      return;
    }
    if (*(byte *)((uVar8 | 10) + (ulong)*(uint *)(uVar5 - 1)) < 8) {
      if (param_3 != 0) {
        iVar4 = 7;
        do {
          if (*(long *)(lVar6 + iVar4) == -0x8000000080001) goto LAB_010df3a0;
          param_3 = param_3 + -1;
          iVar4 = iVar4 + 8;
        } while (param_3 != 0);
      }
      TransitionElementsKind(param_1,4);
      return;
    }
  }
  else if (param_3 != 0) {
    uVar2 = (uint)(bVar1 >> 3);
    if (uVar2 != 3) {
      uVar9 = (uint)(uVar9 < 0x30) & (uVar9 & 8) >> 3;
      puVar7 = (uint *)(lVar6 + 7);
      uVar5 = (ulong)uVar2;
      do {
        uVar10 = *puVar7;
        uVar3 = (uint)uVar5;
        if (uVar10 == *(uint *)(uVar8 + 0xa8)) {
          if (((uVar3 & 0xff) < 7) && ((0x55U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
            uVar5 = 0x7010501030101 >> ((uVar5 & 7) << 3);
          }
          uVar9 = 1;
        }
        else if ((uVar10 & 1) != 0) {
          if ((param_4 == 2) &&
             (*(short *)(((ulong)puVar7 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)(((ulong)puVar7 & 0xffffffff00000000 | (ulong)uVar10) - 1))
              == 0x42)) {
            uVar10 = 4;
            if (uVar9 != 0) {
              uVar10 = 5;
            }
            if (1 < (uVar3 & 0xff)) {
              uVar10 = uVar3;
            }
            uVar5 = (ulong)uVar10;
          }
          else {
            if (uVar9 != 0) {
              uVar10 = 3;
              break;
            }
            uVar9 = 0;
            uVar5 = 2;
          }
        }
        uVar10 = (uint)uVar5;
        param_3 = param_3 + -1;
        puVar7 = puVar7 + 1;
      } while (param_3 != 0);
      if (uVar2 != (uVar10 & 0xff)) {
        TransitionElementsKind();
        return;
      }
    }
  }
  return;
}

