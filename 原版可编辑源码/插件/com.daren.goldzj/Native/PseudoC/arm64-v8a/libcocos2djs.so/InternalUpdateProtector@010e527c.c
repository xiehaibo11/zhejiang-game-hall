
/* v8::internal::LookupIterator::InternalUpdateProtector(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Name>) */

void v8::internal::LookupIterator::InternalUpdateProtector
               (Isolate *param_1,ulong *param_2,int *param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  Isolate *pIVar6;
  ulong local_48;
  
  if (*(int *)(*(long *)(param_1 + 0x9508) + 8) != 0) {
    return;
  }
  if ((*param_2 & 1) == 0) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  iVar1 = *param_3;
  if (iVar1 == *(int *)(param_1 + 0x5d0)) {
    uVar4 = *param_2;
    if (0xa8 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1))) {
      local_48 = uVar4;
      puVar2 = (ulong *)JSReceiver::GetCreationContext((JSReceiver *)&local_48);
    }
    if ((((*(int *)(*(long *)(param_1 + 0xeb8) + 0xb) != 2) &&
         (*(int *)(*(long *)(param_1 + 0xec8) + 0xb) != 2)) &&
        (*(int *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0x2a7)) + 0xb) != 2))
       && (*(int *)(*(long *)(param_1 + 0xec0) + 0xb) != 2)) {
      return;
    }
    uVar4 = *param_2;
    uVar5 = (ulong)param_1 | 7;
    if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x423) {
      if (*(int *)(*(long *)(param_1 + 0xeb8) + 0xb) != 2) {
        return;
      }
      uVar3 = 0x1c;
    }
    else {
      if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x42d) {
LAB_010e5514:
        if (*(int *)(*(long *)(param_1 + 0xec8) + 0xb) != 2) {
          return;
        }
        Protectors::InvalidatePromiseSpeciesLookupChain(param_1);
        return;
      }
      if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x42e) {
LAB_010e5578:
        if (*(int *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0x2a7)) + 0xb) != 2)
        {
          return;
        }
        Protectors::InvalidateRegExpSpeciesLookupChainProtector(param_1,puVar2);
        return;
      }
      if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x41b) goto LAB_010e5800;
      if ((*(uint *)(((ulong)param_1 | 0xb) + (ulong)*(uint *)(uVar4 - 1)) >> 0x14 & 1) == 0) {
        return;
      }
      uVar4 = Isolate::IsInAnyContext(param_1,uVar4,0x38);
      if ((uVar4 & 1) == 0) {
        uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0x8d);
        if ((uVar4 & 1) != 0) goto LAB_010e5514;
        uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0x93);
        if ((uVar4 & 1) != 0) goto LAB_010e5578;
        uVar3 = 0xcd;
        pIVar6 = param_1 + *(uint *)(((ulong)param_1 | 0xf) + (ulong)*(uint *)(*param_2 - 1));
        goto LAB_010e59b8;
      }
      if (*(int *)(*(long *)(param_1 + 0xeb8) + 0xb) != 2) {
        return;
      }
      uVar3 = 0x1a;
    }
LAB_010e53d8:
    Isolate::CountUsage(param_1,uVar3);
    Protectors::InvalidateArraySpeciesLookupChain(param_1);
  }
  else {
    if (iVar1 == *(int *)(param_1 + 0x848)) {
      uVar4 = *param_2;
      if ((*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x425) &&
         (uVar4 = Isolate::IsInAnyContext(param_1,uVar4,0x37), (uVar4 & 1) == 0)) {
        uVar4 = *param_2;
        if ((*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) - 0x412 < 3
            ) || (uVar4 = Isolate::IsInAnyContext(param_1,uVar4,0x3d), (uVar4 & 1) != 0)) {
LAB_010e55d8:
          if (*(int *)(*(long *)(param_1 + 0xef8) + 0xb) != 2) {
            return;
          }
          Protectors::InvalidateMapIteratorLookupChain(param_1);
          return;
        }
        uVar4 = *param_2;
        if ((*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) - 0x415 < 2
            ) || (uVar4 = Isolate::IsInAnyContext(param_1,uVar4,0x40), (uVar4 & 1) != 0))
        goto LAB_010e58d4;
        uVar4 = *param_2;
        if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x430)
        goto LAB_010e59f0;
        uVar3 = 0x44;
LAB_010e59e4:
        uVar4 = Isolate::IsInAnyContext(param_1,uVar4,uVar3);
        if ((uVar4 & 1) == 0) {
          return;
        }
LAB_010e59f0:
        if (*(int *)(*(long *)(param_1 + 0xf10) + 0xb) != 2) {
          return;
        }
        Protectors::InvalidateStringIteratorLookupChain(param_1);
        return;
      }
    }
    else {
      if (iVar1 == *(int *)(param_1 + 0xc48)) {
        uVar4 = *param_2;
        if (0xa8 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1))) {
          local_48 = uVar4;
          puVar2 = (ulong *)JSReceiver::GetCreationContext((JSReceiver *)&local_48);
        }
        if ((((*(int *)(*(long *)(param_1 + 0xeb8) + 0xb) != 2) &&
             (*(int *)(*(long *)(param_1 + 0xec8) + 0xb) != 2)) &&
            (*(int *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0x2a7)) + 0xb) != 2
            )) && (*(int *)(*(long *)(param_1 + 0xec0) + 0xb) != 2)) {
          return;
        }
        uVar4 = Isolate::IsInAnyContext(param_1,*param_2,10);
        if ((uVar4 & 1) == 0) {
          uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0xe3);
          if ((uVar4 & 1) != 0) goto LAB_010e5514;
          uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0x8f);
          if ((uVar4 & 1) != 0) goto LAB_010e5578;
          pIVar6 = (Isolate *)*param_2;
          if (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(pIVar6 + -1)) != 0x439) {
            return;
          }
          uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0xd0);
          if (((((((uVar4 & 1) != 0) ||
                 (uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0x4a), (uVar4 & 1) != 0)) ||
                ((uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0xce), (uVar4 & 1) != 0 ||
                 ((uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0x48), (uVar4 & 1) != 0 ||
                  (uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0xcf), (uVar4 & 1) != 0)))))) ||
               (uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0x49), (uVar4 & 1) != 0)) ||
              (((uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0x30), (uVar4 & 1) != 0 ||
                (uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0x31), (uVar4 & 1) != 0)) ||
               (uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0xd1), (uVar4 & 1) != 0)))) ||
             (uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,0x1c), (uVar4 & 1) != 0))
          goto LAB_010e5800;
          uVar3 = 0x1b;
LAB_010e59b8:
          uVar4 = Isolate::IsInAnyContext(param_1,pIVar6,uVar3);
          if ((uVar4 & 1) == 0) {
            return;
          }
LAB_010e5800:
          if (*(int *)(*(long *)(param_1 + 0xec0) + 0xb) != 2) {
            return;
          }
          Protectors::InvalidateTypedArraySpeciesLookupChain(param_1);
          return;
        }
        if (*(int *)(*(long *)(param_1 + 0xeb8) + 0xb) != 2) {
          return;
        }
        uVar3 = 0x19;
        goto LAB_010e53d8;
      }
      if (iVar1 == *(int *)(param_1 + 0xc70)) {
        if (*(int *)(*(long *)(param_1 + 0xeb0) + 0xb) != 2) {
          return;
        }
        Protectors::InvalidateIsConcatSpreadableLookupChain(param_1);
        return;
      }
      if (iVar1 != *(int *)(param_1 + 0xc18)) {
        if (iVar1 != *(int *)(param_1 + 0x960)) {
          if (iVar1 != *(int *)(param_1 + 0xa38)) {
            return;
          }
          if (*(int *)(*(long *)(param_1 + 0xf00) + 0xb) != 2) {
            return;
          }
          if (((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x42d) &&
              (uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0x3f), (uVar4 & 1) == 0)) &&
             (uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0x8d), (uVar4 & 1) == 0)) {
            return;
          }
          Protectors::InvalidatePromiseThenLookupChain(param_1);
          return;
        }
        if (*(int *)(*(long *)(param_1 + 0xef0) + 0xb) != 2) {
          return;
        }
        uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0xe3);
        if ((uVar4 & 1) == 0) {
          return;
        }
        Protectors::InvalidatePromiseResolveLookupChain(param_1);
        return;
      }
      uVar4 = *param_2;
      if (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x423) {
        if (((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x41d) ||
            (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) - 0x415 < 2
            )) || ((uVar4 = Isolate::IsInAnyContext(param_1,uVar4,0x40), (uVar4 & 1) != 0 ||
                   (uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0x41), (uVar4 & 1) != 0)))) {
LAB_010e58d4:
          if (*(int *)(*(long *)(param_1 + 0xf08) + 0xb) != 2) {
            return;
          }
          Protectors::InvalidateSetIteratorLookupChain(param_1);
          return;
        }
        uVar4 = *param_2;
        if ((*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) - 0x412 < 3
            ) || (uVar4 = Isolate::IsInAnyContext(param_1,uVar4,0x3d), (uVar4 & 1) != 0))
        goto LAB_010e55d8;
        uVar4 = Isolate::IsInAnyContext(param_1,*param_2,0x3c);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)(param_1 + 0xef8) + 0xb) == 2) {
            Protectors::InvalidateMapIteratorLookupChain(param_1);
          }
          goto LAB_010e58d4;
        }
        uVar4 = *param_2;
        uVar3 = 0x45;
        goto LAB_010e59e4;
      }
    }
    if (*(int *)(*(long *)(param_1 + 0xed8) + 0xb) == 2) {
      Protectors::InvalidateArrayIteratorLookupChain(param_1);
      return;
    }
  }
  return;
}

