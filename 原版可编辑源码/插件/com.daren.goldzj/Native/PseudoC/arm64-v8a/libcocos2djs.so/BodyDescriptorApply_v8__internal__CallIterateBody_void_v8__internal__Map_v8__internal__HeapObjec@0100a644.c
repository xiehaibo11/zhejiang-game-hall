
/* void v8::internal::BodyDescriptorApply<v8::internal::CallIterateBody, void, v8::internal::Map,
   v8::internal::HeapObject, int,
   v8::internal::IterateAndScavengePromotedObjectsVisitor*>(v8::internal::InstanceType,
   v8::internal::Map, v8::internal::HeapObject, int,
   v8::internal::IterateAndScavengePromotedObjectsVisitor*) */

void v8::internal::
     BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::IterateAndScavengePromotedObjectsVisitor*>
               (ushort param_1,undefined8 param_2,ulong param_3,int param_4,long *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  long lVar8;
  MemoryChunk *pMVar9;
  
  uVar2 = (uint)param_1;
  if (uVar2 < 0x40) {
    switch(param_1 & 7) {
    case 0:
    case 2:
      goto switchD_0100a698_caseD_0;
    case 1:
    case 3:
      CallIterateBody::
      apply<v8::internal::FixedBodyDescriptor<12,20,20>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
                (param_2,param_3,param_4,param_5);
      return;
    default:
      goto switchD_0100a698_caseD_4;
    case 5:
      goto switchD_0100a698_caseD_5;
    }
  }
  switch(uVar2) {
  case 0x40:
    goto switchD_0100a698_caseD_5;
  case 0x41:
  case 0x42:
  case 0x46:
  case 0x85:
  case 0x87:
  case 0x9e:
  case 0xa0:
  case 0xa1:
switchD_0100a698_caseD_0:
    return;
  case 0x43:
    CallIterateBody::
    apply<v8::internal::FixedBodyDescriptor<12,28,28>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x44:
    SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<24,72,72>>
    ::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x45:
    SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<28,36,36>>
    ::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
    if (param_1 == 0x70) {
      CallIterateBody::
      apply<v8::internal::FlexibleBodyDescriptor<12>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
                (param_2,param_3,param_4,param_5);
      return;
    }
    if (param_1 == 100) {
      PrototypeInfo::BodyDescriptor::
      IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
                (param_2,param_3,param_4,param_5);
      return;
    }
    if (param_1 == 0x74) {
      CallIterateBody::
      apply<v8::internal::FlexibleBodyDescriptor<24>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
                (param_2,param_3,param_4,param_5);
      return;
    }
  case 0x59:
    CallIterateBody::
    apply<v8::internal::FlexibleBodyDescriptor<4>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x4c:
  case 0x4d:
    DataHandler::BodyDescriptor::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x55:
    puVar1 = (uint *)(param_3 + 3);
    if (puVar1 < (uint *)(param_3 + 0xf)) {
      pMVar9 = (MemoryChunk *)(param_3 & 0xfffffffffffc0000);
      uVar2 = *puVar1;
      while( true ) {
        if ((uVar2 & 1) != 0) {
          uVar7 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar7 + 8) >> 3 & 1) == 0) {
            if (((char)param_5[2] != '\0') && ((*(byte *)(uVar7 + 8) >> 6 & 1) != 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        (pMVar9,(ulong)puVar1);
            }
          }
          else {
            iVar3 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                              ((Scavenger *)param_5[1],puVar1);
            if (iVar3 == 0) {
              if (*(long *)(pMVar9 + 0x70) == 0) {
                RememberedSet<(v8::internal::RememberedSetType)0>::
                Insert<(v8::internal::AccessMode)0>(pMVar9,(ulong)puVar1);
              }
              else {
                RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar9,(ulong)puVar1);
              }
            }
          }
        }
        puVar1 = puVar1 + 1;
        if ((uint *)(param_3 + 0xf) <= puVar1) break;
        uVar2 = *puVar1;
      }
    }
    if (param_4 != 0x1c) {
      return;
    }
    lVar6 = *param_5;
    lVar8 = param_3 + 0x17;
    lVar5 = param_3 + 0x1b;
    break;
  case 0x5d:
    CallIterateBody::
    apply<v8::internal::FixedBodyDescriptor<4,8,12>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x76:
  case 0x77:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x90:
  case 0x91:
  case 0xa4:
    CallIterateBody::
    apply<v8::internal::FlexibleBodyDescriptor<8>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x78:
    EphemeronHashTable::BodyDescriptor::
    IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x86:
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 7,param_3 + 0xb);
    lVar8 = param_3 + 0xf;
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 0xb,lVar8);
    lVar5 = param_3 + 0x13;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_5 + 0x10);
    goto LAB_0100add8;
  case 0x8f:
    CallIterateBody::
    apply<v8::internal::NativeContext::BodyDescriptor,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x92:
    CallIterateBody::
    apply<v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::BodyDescriptor,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x93:
    CallIterateBody::
    apply<v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::BodyDescriptor,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x94:
    CallIterateBody::
    apply<v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::BodyDescriptor,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x95:
    SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,8,16>,v8::internal::FixedBodyDescriptor<16,20,20>>
    ::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x96:
    CallIterateBody::
    apply<v8::internal::FixedBodyDescriptor<4,8,16>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x97:
  case 0x98:
  case 0xa7:
    CallIterateBody::
    apply<v8::internal::FlexibleWeakBodyDescriptor<4>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x99:
    CallIterateBody::
    apply<v8::internal::FixedBodyDescriptor<4,8,8>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x9a:
    Code::BodyDescriptor::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_5);
    return;
  case 0x9b:
    lVar6 = *param_5;
    lVar8 = param_3 + 3;
    lVar5 = param_3 + 7;
    break;
  case 0x9c:
    CallIterateBody::
    apply<v8::internal::FlexibleWeakBodyDescriptor<12>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x9d:
    if (param_4 < 9) {
      return;
    }
    lVar8 = 0;
    do {
      (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + lVar8 + 7,param_3 + lVar8 + 0xb);
      lVar8 = lVar8 + 8;
    } while ((int)lVar8 + 8 < param_4);
    return;
  case 0x9f:
    FeedbackVector::BodyDescriptor::
    IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xa2:
    CallIterateBody::
    apply<v8::internal::Map::BodyDescriptor,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xa3:
    PreparseData::BodyDescriptor::
    IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xa5:
    CallIterateBody::
    apply<v8::internal::FixedBodyDescriptor<4,20,20>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xa6:
    CallIterateBody::
    apply<v8::internal::SharedFunctionInfo::BodyDescriptor,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xa8:
    WeakCell::BodyDescriptor::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xa9:
    CallIterateBody::
    apply<v8::internal::FixedBodyDescriptor<4,16,16>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0x410:
  case 0x411:
  case 0x412:
  case 0x413:
  case 0x414:
  case 0x415:
  case 0x416:
  case 0x417:
  case 0x418:
  case 0x419:
  case 0x41c:
  case 0x41d:
  case 0x41e:
  case 0x41f:
  case 0x420:
  case 0x421:
  case 0x422:
  case 0x423:
  case 0x425:
  case 0x426:
  case 0x427:
  case 0x428:
  case 0x429:
  case 0x42a:
  case 0x42b:
  case 0x42c:
  case 0x42d:
  case 0x42e:
  case 0x42f:
  case 0x430:
  case 0x432:
  case 0x433:
  case 0x435:
  case 0x436:
  case 0x437:
  case 0x438:
  case 0x439:
    uVar4 = 4;
    goto LAB_0100a740;
  default:
    PrintF("Unknown type: %d\n",(ulong)uVar2);
switchD_0100a698_caseD_4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x41a:
    JSDataView::BodyDescriptor::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x41b:
    JSTypedArray::BodyDescriptor::
    IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x424:
    JSArrayBuffer::BodyDescriptor::
    IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x431:
    JSWeakRef::BodyDescriptor::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x434:
    puVar1 = (uint *)(param_3 + 3);
    if (puVar1 < (uint *)(param_3 + 0xb)) {
      pMVar9 = (MemoryChunk *)(param_3 & 0xfffffffffffc0000);
      uVar2 = *puVar1;
      while( true ) {
        if ((uVar2 & 1) != 0) {
          uVar7 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar7 + 8) >> 3 & 1) == 0) {
            if (((char)param_5[2] != '\0') && ((*(byte *)(uVar7 + 8) >> 6 & 1) != 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        (pMVar9,(ulong)puVar1);
            }
          }
          else {
            iVar3 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                              ((Scavenger *)param_5[1],puVar1);
            if (iVar3 == 0) {
              if (*(long *)(pMVar9 + 0x70) == 0) {
                RememberedSet<(v8::internal::RememberedSetType)0>::
                Insert<(v8::internal::AccessMode)0>(pMVar9,(ulong)puVar1);
              }
              else {
                RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar9,(ulong)puVar1);
              }
            }
          }
        }
        puVar1 = puVar1 + 1;
        if ((uint *)(param_3 + 0xb) <= puVar1) break;
        uVar2 = *puVar1;
      }
    }
    lVar8 = 0;
    do {
      lVar5 = (param_3 - 1) +
              (ulong)*(ushort *)((long)&WasmInstanceObject::kTaggedFieldOffsets + lVar8);
      (**(code **)(*param_5 + 0x10))(param_5,param_3,lVar5,lVar5 + 4);
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0x1e);
    uVar4 = 0xc4;
LAB_0100a740:
    BodyDescriptorBase::
    IterateJSObjectBodyImpl<v8::internal::IterateAndScavengePromotedObjectsVisitor>
              (param_2,param_3,uVar4,param_4,param_5);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x10);
LAB_0100add8:
                    /* WARNING: Could not recover jumptable at 0x0100adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_5,param_3,lVar8,lVar5);
  return;
switchD_0100a698_caseD_5:
  CallIterateBody::
  apply<v8::internal::FixedBodyDescriptor<12,16,16>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
            (param_2,param_3,param_4,param_5);
  return;
}

