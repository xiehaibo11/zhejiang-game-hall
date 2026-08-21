
/* v8::Object::PreviewEntries(bool*) */

undefined8 __thiscall v8::Object::PreviewEntries(Object *this,bool *param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  Isolate *pIVar8;
  undefined8 local_38;
  
  uVar4 = *(ulong *)this;
  pIVar8 = (Isolate *)(uVar4 & 0xffffffff00000000);
  if ((uVar4 & 1) != 0) {
    if (*(short *)(((ulong)pIVar8 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x41c) {
      *param_1 = true;
      uVar3 = Map::AsArray((Map *)this);
      return uVar3;
    }
    if (*(short *)(((ulong)pIVar8 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x41d) {
      *param_1 = false;
      uVar3 = v8::Set::AsArray((Set *)this);
      return uVar3;
    }
  }
  uVar1 = *(undefined4 *)(pIVar8 + 0x2c60);
  *(undefined4 *)(pIVar8 + 0x2c60) = 5;
  uVar5 = *(ulong *)this;
  uVar4 = uVar5 & 0xffffffff00000000;
  uVar6 = uVar4 | 7;
  uVar7 = (uint)*(ushort *)(uVar6 + *(uint *)(uVar5 - 1));
  if ((*(ushort *)(uVar6 + *(uint *)(uVar5 - 1)) & 0xfffe) == 0x41e) {
    *param_1 = uVar7 == 0x41e;
    uVar3 = internal::JSWeakCollection::GetEntries(this,0);
    goto LAB_00ed203c;
  }
  if (uVar7 - 0x412 < 3) {
    sVar2 = *(short *)((uVar4 | *(uint *)(uVar5 - 1)) + 7);
    *param_1 = sVar2 == 0x413;
    local_38 = *(undefined8 *)this;
    uVar4 = internal::
            OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap>::
            HasMore((OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap>
                     *)&local_38);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)this;
      uVar3 = FUN_00ec5fa8(pIVar8,uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb),
                           *(int *)(uVar4 + 0xf) >> 1,sVar2);
      goto LAB_00ed203c;
    }
  }
  else {
    if (1 < *(ushort *)(uVar6 + *(uint *)(uVar5 - 1)) - 0x415) {
      uVar3 = 0;
      goto LAB_00ed203c;
    }
    sVar2 = *(short *)((uVar4 | *(uint *)(uVar5 - 1)) + 7);
    *param_1 = sVar2 == 0x415;
    local_38 = *(undefined8 *)this;
    uVar4 = internal::
            OrderedHashTableIterator<v8::internal::JSSetIterator,v8::internal::OrderedHashSet>::
            HasMore((OrderedHashTableIterator<v8::internal::JSSetIterator,v8::internal::OrderedHashSet>
                     *)&local_38);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)this;
      uVar3 = FUN_00ec6e64(pIVar8,uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb),
                           *(int *)(uVar4 + 0xf) >> 1,sVar2);
      goto LAB_00ed203c;
    }
  }
  uVar3 = Array::New(pIVar8,0);
LAB_00ed203c:
  *(undefined4 *)(pIVar8 + 0x2c60) = uVar1;
  return uVar3;
}

