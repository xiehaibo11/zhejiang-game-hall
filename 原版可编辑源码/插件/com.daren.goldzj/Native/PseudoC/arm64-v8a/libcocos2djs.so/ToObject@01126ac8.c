
/* v8::internal::PropertyDescriptor::ToObject(v8::internal::Isolate*) */

ulong * __thiscall
v8::internal::PropertyDescriptor::ToObject(PropertyDescriptor *this,Isolate *param_1)

{
  undefined4 *puVar1;
  Isolate *pIVar2;
  long lVar3;
  PropertyDescriptor PVar4;
  byte bVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  PVar4 = *this;
  pIVar2 = param_1 + 0x95a0;
  if ((((byte)PVar4 ^ 0xff) & 10) == 0) {
    if ((((((byte)PVar4 >> 5 & 1) == 0) && (*(long *)(this + 8) == 0)) &&
        (*(long *)(this + 0x10) != 0)) && (*(long *)(this + 0x18) != 0)) {
      uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x1b);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar2;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar6 + 1;
        *puVar6 = uVar8;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
      }
      puVar6 = (ulong *)Factory::NewJSObjectFromMap(param_1,puVar6,0,0);
      uVar10 = *puVar6;
      uVar8 = **(ulong **)(this + 0x10);
      puVar1 = (undefined4 *)
               ((uVar10 - 1) +
               (ulong)*(byte *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 4) *
               4);
      *puVar1 = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar10,puVar1,uVar8);
          uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar8);
        }
      }
      uVar10 = *puVar6;
      uVar8 = **(ulong **)(this + 0x18);
      bVar5 = *(byte *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 4);
      *(int *)(uVar10 + (ulong)bVar5 * 4 + 3) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        lVar3 = ((ulong)bVar5 << 2 | 3) + uVar10;
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar10,lVar3,uVar8);
          uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar10,lVar3,uVar8);
        }
      }
      uVar8 = *puVar6;
      lVar3 = 0xc0;
      if (((byte)*this & 1) != 0) {
        lVar3 = 0xb8;
      }
      uVar10 = *(ulong *)(param_1 + lVar3);
      lVar3 = uVar8 + (ulong)*(byte *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) +
                                      4) * 4;
      *(int *)(lVar3 + 7) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        lVar3 = lVar3 + 7;
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,lVar3,uVar10);
          uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,lVar3,uVar10);
        }
      }
      uVar8 = *puVar6;
      lVar3 = 0xc0;
      if (((byte)*this & 4) != 0) {
        lVar3 = 0xb8;
      }
      uVar10 = *(ulong *)(param_1 + lVar3);
    }
    else {
      if (((((byte)PVar4 >> 5 & 1) == 0) || (*(long *)(this + 8) == 0)) ||
         ((*(long *)(this + 0x10) != 0 || (*(long *)(this + 0x18) != 0)))) goto LAB_01126b6c;
      uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x9f);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar2;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar6 + 1;
        *puVar6 = uVar8;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
      }
      puVar6 = (ulong *)Factory::NewJSObjectFromMap(param_1,puVar6,0,0);
      uVar10 = *puVar6;
      uVar8 = **(ulong **)(this + 8);
      puVar1 = (undefined4 *)
               ((uVar10 - 1) +
               (ulong)*(byte *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 4) *
               4);
      *puVar1 = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar10,puVar1,uVar8);
          uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar8);
        }
      }
      uVar8 = *puVar6;
      lVar3 = 0xc0;
      if (((byte)*this & 0x10) != 0) {
        lVar3 = 0xb8;
      }
      uVar10 = *(ulong *)(param_1 + lVar3);
      bVar5 = *(byte *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 4);
      *(int *)(uVar8 + (ulong)bVar5 * 4 + 3) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        lVar3 = ((ulong)bVar5 << 2 | 3) + uVar8;
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,lVar3,uVar10);
          uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,lVar3,uVar10);
        }
      }
      uVar8 = *puVar6;
      pIVar2 = param_1 + 0xc0;
      if (((byte)*this & 1) != 0) {
        pIVar2 = param_1 + 0xb8;
      }
      uVar10 = *(ulong *)pIVar2;
      lVar3 = uVar8 + (ulong)*(byte *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) +
                                      4) * 4;
      *(int *)(lVar3 + 7) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        lVar3 = lVar3 + 7;
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,lVar3,uVar10);
          uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,lVar3,uVar10);
        }
      }
      uVar8 = *puVar6;
      pIVar2 = param_1 + 0xc0;
      if (((byte)*this & 4) != 0) {
        pIVar2 = param_1 + 0xb8;
      }
      uVar10 = *(ulong *)pIVar2;
    }
    lVar3 = uVar8 + (ulong)*(byte *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 4)
                    * 4;
    *(int *)(lVar3 + 0xb) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      lVar3 = lVar3 + 0xb;
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,lVar3,uVar10);
        uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,lVar3,uVar10);
      }
    }
  }
  else {
LAB_01126b6c:
    uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar2;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar6 + 1;
      *puVar6 = uVar8;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
    }
    puVar6 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar6,0);
    if (*(long *)(this + 8) != 0) {
      FUN_01127110(puVar6,param_1 + 0xac8);
    }
    if (((byte)*this >> 5 & 1) != 0) {
      uVar7 = Factory::ToBoolean((Factory *)param_1,(bool)((byte)*this >> 4 & 1));
      FUN_01127110(puVar6,param_1 + 0xb00,uVar7);
    }
    if (*(long *)(this + 0x10) != 0) {
      FUN_01127110(puVar6,param_1 + 0x700);
    }
    if (*(long *)(this + 0x18) != 0) {
      FUN_01127110(puVar6,param_1 + 0x9b0);
    }
    PVar4 = *this;
    if (((byte)PVar4 >> 1 & 1) != 0) {
      uVar7 = Factory::ToBoolean((Factory *)param_1,(bool)((byte)PVar4 & 1));
      FUN_01127110(puVar6,param_1 + 0x670,uVar7);
      PVar4 = *this;
    }
    if (((byte)PVar4 >> 3 & 1) != 0) {
      uVar7 = Factory::ToBoolean((Factory *)param_1,(bool)((byte)PVar4 >> 2 & 1));
      FUN_01127110(puVar6,param_1 + 0x5b8,uVar7);
    }
  }
  return puVar6;
}

