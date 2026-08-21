
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashMap,
   2>::FindEntry(v8::internal::Isolate*, v8::internal::Object) */

int __thiscall
v8::internal::OrderedHashTable<v8::internal::OrderedHashMap,2>::FindEntry
          (OrderedHashTable<v8::internal::OrderedHashMap,2> *this,Isolate *param_1,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  int unaff_w22;
  ulong local_58;
  
  if ((param_3 & 1) == 0) {
    uVar5 = (int)param_3 >> 1;
    uVar5 = ~uVar5 + uVar5 * 0x8000;
    uVar5 = (uVar5 ^ uVar5 >> 0xc) * 5;
    uVar5 = (uVar5 ^ uVar5 >> 4) * 0x809;
    unaff_w22 = *(int *)(*(long *)this +
                         (long)(int)(((*(uint *)(*(long *)this + 0xf) >> 1) - 1 &
                                     (uVar5 ^ uVar5 >> 0x10)) * 4 + 0xc) + 7) >> 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x95a0);
    lVar3 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    uVar5 = Object::GetSimpleHash(param_3);
    if ((((uVar5 & 1) == 0) ||
        (local_58 = param_3, uVar5 = JSReceiver::GetIdentityHash((JSReceiver *)&local_58),
        (uVar5 & 1) == 0)) || (uVar5 != *(uint *)(param_1 + 0xa0))) {
      bVar4 = true;
      unaff_w22 = *(int *)(*(long *)this +
                           (long)(int)(((*(uint *)(*(long *)this + 0xf) >> 1) - 1 & uVar5 >> 1) * 4
                                      + 0xc) + 7) >> 1;
    }
    else {
      bVar4 = false;
    }
    *(undefined8 *)(param_1 + 0x95a0) = uVar2;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar3) {
      *(long *)(param_1 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_1);
    }
    if (!bVar4) {
      return -1;
    }
  }
  if (unaff_w22 != -1) {
    uVar6 = *(ulong *)this;
    do {
      iVar1 = unaff_w22 * 3 + 3;
      local_58 = uVar6 & 0xffffffff00000000 |
                 (ulong)*(uint *)(uVar6 + (long)(int)((iVar1 + (*(uint *)(uVar6 + 0xf) >> 1)) * 4) +
                                 7);
      uVar6 = Object::SameValueZero((Object *)&local_58,param_3);
      if ((uVar6 & 1) != 0) {
        return unaff_w22;
      }
      uVar6 = *(ulong *)this;
      unaff_w22 = *(int *)(uVar6 + (long)(int)((iVar1 + (*(uint *)(uVar6 + 0xf) >> 1)) * 4 + 8) + 7)
                  >> 1;
    } while (unaff_w22 != -1);
  }
  return unaff_w22;
}

