
/* v8::internal::JSObject::TestIntegrityLevel(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::PropertyAttributes) */

undefined2 v8::internal::JSObject::TestIntegrityLevel(ulong *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar12 = *param_1;
  uVar7 = uVar12 & 0xffffffff00000000;
  if ((*(ushort *)((uVar7 | *(uint *)(uVar12 - 1)) + 7) < 0x412) ||
     ((byte)((*(byte *)((uVar7 | 10) + (ulong)*(uint *)(uVar12 - 1)) >> 3) - 0xd) < 2)) {
    uVar4 = FUN_010cf908(param_1,param_2);
    return uVar4;
  }
  if ((*(uint *)((uVar7 | *(uint *)(uVar12 - 1)) + 0xb) >> 0x1b & 1) != 0) {
    return 1;
  }
  bVar2 = *(byte *)((uVar7 | 10) + (ulong)*(uint *)(uVar12 - 1));
  bVar3 = bVar2 >> 3;
  if (bVar3 == 0xc) {
    uVar9 = uVar7 | *(uint *)(uVar12 + 7);
    uVar1 = *(uint *)(uVar9 + 0xf);
    if ((int)uVar1 >> 1 != 0) {
      lVar8 = (long)((ulong)uVar1 << 0x20) >> 0x21;
      lVar6 = uVar9 + 7;
      lVar10 = 0x1800000000;
      lVar11 = 0x1000000000;
      do {
        uVar1 = *(uint *)((lVar11 >> 0x20) + lVar6);
        if (((uVar1 != *(uint *)(uVar7 + 0xa8)) && (uVar1 != *(uint *)(uVar7 + 0xa0))) &&
           (((uVar1 & 1) == 0 ||
            ((*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar1) - 1)) != 0x40 ||
             ((*(byte *)((uVar7 | uVar1) + 7) & 1) == 0)))))) {
          uVar1 = *(uint *)((lVar10 >> 0x20) + lVar6);
          if ((uVar1 >> 6 & 1) == 0) {
            return 1;
          }
          if ((param_2 == 5) && ((uVar1 & 0x12) == 0)) {
            return 1;
          }
        }
        lVar8 = lVar8 + -1;
        lVar10 = lVar10 + 0xc00000000;
        lVar11 = lVar11 + 0xc00000000;
      } while (lVar8 != 0);
    }
  }
  else {
    bVar2 = bVar2 >> 3;
    if ((byte)(bVar2 - 0x11) < 0xb) {
      if (((param_2 == 5) && (*(long *)(uVar12 + 0x17) != 0)) ||
         (uVar7 = FUN_010de314(uVar12,param_2), (uVar7 & 1) == 0)) {
        return 1;
      }
    }
    else {
      bVar2 = bVar2 & 0x1e;
      if ((((bVar2 != 10) && ((param_2 == 5 || (bVar2 != 8)))) && ((param_2 != 0 || (bVar2 != 6))))
         && (plVar5 = *(long **)(ElementsAccessor::elements_accessors_ + (ulong)bVar3 * 8),
            lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5,uVar12), lVar6 != 0)) {
        return 1;
      }
    }
  }
  uVar7 = FUN_010de314(uVar12,param_2);
  uVar4 = 0x101;
  if ((uVar7 & 1) == 0) {
    uVar4 = 1;
  }
  return uVar4;
}

