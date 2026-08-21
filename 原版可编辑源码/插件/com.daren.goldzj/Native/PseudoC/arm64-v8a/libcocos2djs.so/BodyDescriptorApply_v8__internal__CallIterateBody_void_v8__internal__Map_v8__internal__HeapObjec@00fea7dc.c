
/* void v8::internal::BodyDescriptorApply<v8::internal::CallIterateBody, void, v8::internal::Map,
   v8::internal::HeapObject, int,
   v8::internal::PointersUpdatingVisitor*>(v8::internal::InstanceType, v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::PointersUpdatingVisitor*) */

void v8::internal::
     BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::PointersUpdatingVisitor*>
               (ushort param_1,long param_2,long param_3,int param_4,long *param_5)

{
  uint *puVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  RelocIterator aRStack_80 [64];
  
  uVar5 = (uint)param_1;
  if (uVar5 < 0x40) {
    switch(param_1 & 7) {
    case 0:
    case 2:
      goto switchD_00fea828_caseD_0;
    case 1:
    case 3:
      lVar3 = *param_5;
      lVar7 = param_3 + 0xb;
      goto LAB_00fea8dc;
    default:
      goto switchD_00fea828_caseD_4;
    case 5:
      goto switchD_00fea828_caseD_5;
    }
  }
  switch(uVar5) {
  case 0x40:
    goto switchD_00fea828_caseD_5;
  case 0x41:
  case 0x42:
  case 0x85:
  case 0x87:
  case 0x9e:
  case 0xa0:
  case 0xa1:
switchD_00fea828_caseD_0:
    return;
  case 0x43:
    lVar7 = param_3 + 0xb;
    lVar3 = param_3 + 0x1b;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    break;
  case 0x44:
    lVar7 = param_3 + 0x17;
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,lVar7);
    lVar3 = param_3 + 0x47;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    break;
  case 0x45:
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + 0x17);
    lVar7 = param_3 + 0x1b;
    lVar3 = param_3 + 0x23;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    break;
  case 0x46:
    lVar7 = param_3 + 3;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x68);
    goto LAB_00feb194;
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
      lVar3 = *param_5;
      lVar7 = param_3 + 0xb;
      goto LAB_00fea9a8;
    }
    if (param_1 != 100) {
      if (param_1 == 0x74) {
        lVar4 = *param_5;
        lVar7 = param_3 + 0x17;
      }
      else {
        lVar4 = *param_5;
        lVar7 = param_3 + 3;
      }
      lVar3 = param_3 + -1 + (long)param_4;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x10);
      break;
    }
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + 0x13);
    (**(code **)(*param_5 + 0x30))(param_5,param_3,param_3 + 0x13);
    lVar4 = *param_5;
    lVar7 = param_3 + 0x17;
    goto LAB_00fea8c8;
  case 0x4c:
  case 0x4d:
    puVar1 = (uint *)(param_3 + 0xb);
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,puVar1);
    do {
      if ((uint *)(param_3 + param_4 + -1) <= puVar1) {
        return;
      }
      uVar6 = (ulong)*puVar1;
      if ((*puVar1 == 3) || ((uVar6 & 3) != 3)) {
        if (((uVar6 & 3) == 1) &&
           (uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6) - 1), (uVar5 & 1) == 0))
        {
          uVar5 = uVar5 + 1;
          goto LAB_00feaa44;
        }
      }
      else {
        uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6 & 0xfffffffffffffffd) - 1);
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar5 + 1 | 2;
LAB_00feaa44:
          *puVar1 = uVar5;
        }
      }
      puVar1 = puVar1 + 1;
    } while( true );
  case 0x55:
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + 0xf);
    if (param_4 != 0x1c) {
      return;
    }
    lVar7 = param_3 + 0x17;
    lVar3 = param_3 + 0x1b;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x20);
    break;
  case 0x59:
    lVar3 = *param_5;
    lVar7 = param_3 + 3;
LAB_00fea9a8:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar3 + 0x10);
    lVar3 = param_3 + param_4 + -1;
    break;
  case 0x5d:
  case 0x96:
  case 0x99:
    lVar7 = param_3 + 3;
    lVar3 = param_3 + 7;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    break;
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
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    uVar6 = (ulong)param_4;
    goto LAB_00fea91c;
  case 0x78:
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 7,param_3 + 0x13);
    uVar5 = *(uint *)(param_3 + 0xf);
    if ((int)uVar5 >> 1 != 0) {
      uVar6 = 0;
      iVar2 = 0x18;
      do {
        (**(code **)(*param_5 + 0x40))
                  (param_5,param_3,uVar6 & 0xffffffff,param_3 + -1 + (long)(iVar2 + -4),
                   param_3 + -1 + (long)iVar2);
        uVar6 = uVar6 + 1;
        iVar2 = iVar2 + 8;
      } while ((long)((ulong)uVar5 << 0x20) >> 0x21 != uVar6);
      return;
    }
    return;
  case 0x86:
    (**(code **)(*param_5 + 0x28))(param_5,param_3,param_3 + 7);
    (**(code **)(*param_5 + 0x28))(param_5,param_3,param_3 + 0xb);
    lVar7 = param_3 + 0xf;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x28);
    goto LAB_00feb194;
  case 0x8f:
    lVar7 = param_3 + 0x417;
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,lVar7);
    lVar4 = *param_5;
    lVar3 = param_3 + 0x423;
    goto LAB_00feafb0;
  case 0x92:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    uVar6 = (ulong)*(byte *)(param_3 + 5) << 4 | 8;
LAB_00fea91c:
    lVar7 = param_3 + 7;
    lVar3 = param_3 + uVar6 + -1;
    break;
  case 0x93:
    lVar7 = param_3 + 7;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    lVar3 = lVar7 + (ulong)*(byte *)(param_3 + 5) * 8;
    break;
  case 0x94:
    lVar7 = param_3 + 0xb;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    lVar3 = lVar7 + (ulong)*(byte *)(param_3 + 9) * 0x18;
    break;
  case 0x95:
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + 7);
    lVar3 = *param_5;
    lVar7 = param_3 + 0xf;
    goto LAB_00fea8dc;
  case 0x97:
    puVar1 = (uint *)(param_3 + 3);
    do {
      if ((uint *)(param_3 + param_4 + -1) <= puVar1) {
        return;
      }
      uVar6 = (ulong)*puVar1;
      if ((*puVar1 == 3) || ((uVar6 & 3) != 3)) {
        if (((uVar6 & 3) == 1) &&
           (uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6) - 1), (uVar5 & 1) == 0))
        {
          uVar5 = uVar5 + 1;
          goto LAB_00feaee4;
        }
      }
      else {
        uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6 & 0xfffffffffffffffd) - 1);
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar5 + 1 | 2;
LAB_00feaee4:
          *puVar1 = uVar5;
        }
      }
      puVar1 = puVar1 + 1;
    } while( true );
  case 0x98:
    puVar1 = (uint *)(param_3 + 3);
    do {
      if ((uint *)(param_3 + param_4 + -1) <= puVar1) {
        return;
      }
      uVar6 = (ulong)*puVar1;
      if ((*puVar1 == 3) || ((uVar6 & 3) != 3)) {
        if (((uVar6 & 3) == 1) &&
           (uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6) - 1), (uVar5 & 1) == 0))
        {
          uVar5 = uVar5 + 1;
          goto LAB_00feab98;
        }
      }
      else {
        uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6 & 0xfffffffffffffffd) - 1);
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar5 + 1 | 2;
LAB_00feab98:
          *puVar1 = uVar5;
        }
      }
      puVar1 = puVar1 + 1;
    } while( true );
  case 0x9a:
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + 0x13);
    RelocIterator::RelocIterator(aRStack_80,param_3,1999);
    (**(code **)(*param_5 + 0x80))(param_5,aRStack_80);
    return;
  case 0x9b:
    lVar7 = param_3 + 3;
    (**(code **)(*param_5 + 0x10))(param_5,param_3,lVar7,lVar7);
    lVar4 = *param_5;
    lVar3 = param_3 + 7;
LAB_00feafb0:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x20);
    break;
  case 0x9c:
    puVar1 = (uint *)(param_3 + 0xb);
    do {
      if ((uint *)(param_3 + param_4 + -1) <= puVar1) {
        return;
      }
      uVar6 = (ulong)*puVar1;
      if ((*puVar1 == 3) || ((uVar6 & 3) != 3)) {
        if (((uVar6 & 3) == 1) &&
           (uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6) - 1), (uVar5 & 1) == 0))
        {
          uVar5 = uVar5 + 1;
          goto LAB_00feac10;
        }
      }
      else {
        uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6 & 0xfffffffffffffffd) - 1);
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar5 + 1 | 2;
LAB_00feac10:
          *puVar1 = uVar5;
        }
      }
      puVar1 = puVar1 + 1;
    } while( true );
  case 0x9d:
    if (8 < param_4) {
      lVar7 = 7;
      do {
        (**(code **)(*param_5 + 0x28))(param_5,param_3,param_3 + lVar7);
        lVar7 = lVar7 + 8;
      } while ((int)lVar7 + 1 < param_4);
      return;
    }
    return;
  case 0x9f:
    CallIterateBody::
    apply<v8::internal::FeedbackVector::BodyDescriptor,v8::internal::PointersUpdatingVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xa2:
    lVar7 = param_3 + 0x23;
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 0xf,lVar7);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x30);
LAB_00feb194:
                    /* WARNING: Could not recover jumptable at 0x00feb1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_5,param_3,lVar7);
    return;
  case 0xa3:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
    uVar5 = *(int *)(param_3 + 3) + 0xfU & 0xfffffffc;
    lVar7 = param_3 + -1 + (long)(int)uVar5;
    lVar3 = param_3 + -1 + (long)(int)(uVar5 + *(int *)(param_3 + 7) * 4);
    break;
  case 0xa5:
    lVar3 = *param_5;
    lVar7 = param_3 + 3;
    goto LAB_00fea8dc;
  case 0xa6:
    (**(code **)(*param_5 + 0x38))(param_5,param_3,param_3 + 3);
    lVar3 = *param_5;
    lVar7 = param_3 + 7;
LAB_00fea8dc:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar3 + 0x10);
    lVar3 = param_3 + 0x13;
    break;
  case 0xa7:
    puVar1 = (uint *)(param_3 + 3);
    do {
      if ((uint *)(param_3 + param_4 + -1) <= puVar1) {
        return;
      }
      uVar6 = (ulong)*puVar1;
      if ((*puVar1 == 3) || ((uVar6 & 3) != 3)) {
        if (((uVar6 & 3) == 1) &&
           (uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6) - 1), (uVar5 & 1) == 0))
        {
          uVar5 = uVar5 + 1;
          goto LAB_00feb010;
        }
      }
      else {
        uVar5 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar6 & 0xfffffffffffffffd) - 1);
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar5 + 1 | 2;
LAB_00feb010:
          *puVar1 = uVar5;
        }
      }
      puVar1 = puVar1 + 1;
    } while( true );
  case 0xa8:
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + 7);
    (**(code **)(*param_5 + 0x38))(param_5,param_3,param_3 + 7);
    lVar4 = *param_5;
    lVar7 = param_3 + 0xb;
LAB_00fea8c8:
    lVar3 = param_3 + param_4 + -1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x10);
    break;
  case 0xa9:
    lVar4 = *param_5;
    lVar7 = param_3 + 3;
    goto LAB_00fea904;
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
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    lVar7 = (ulong)*(byte *)(param_2 + 4) * 4;
    if (iVar2 < (int)lVar7) {
      lVar3 = (long)iVar2;
      (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + -1 + lVar3);
      do {
        (**(code **)(*param_5 + 0x28))(param_5,param_3,param_3 + lVar3 + -1);
        lVar3 = lVar3 + 8;
      } while (lVar3 < lVar7);
    }
    else {
LAB_00feb250:
      lVar7 = 4;
    }
    goto LAB_00feb254;
  default:
    PrintF("Unknown type: %d\n",(ulong)uVar5);
switchD_00fea828_caseD_4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x41a:
    CallIterateBody::
    apply<v8::internal::JSDataView::BodyDescriptor,v8::internal::PointersUpdatingVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x41b:
    CallIterateBody::
    apply<v8::internal::JSTypedArray::BodyDescriptor,v8::internal::PointersUpdatingVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x41e:
  case 0x41f:
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    lVar7 = (ulong)*(byte *)(param_2 + 4) * 4;
    if ((int)lVar7 <= iVar2) goto LAB_00feb250;
    lVar3 = (long)iVar2;
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + -1 + lVar3);
    do {
      (**(code **)(*param_5 + 0x28))(param_5,param_3,param_3 + lVar3 + -1);
      lVar3 = lVar3 + 8;
    } while (lVar3 < lVar7);
    goto LAB_00feb254;
  case 0x424:
    CallIterateBody::
    apply<v8::internal::JSArrayBuffer::BodyDescriptor,v8::internal::PointersUpdatingVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x431:
    CallIterateBody::
    apply<v8::internal::JSWeakRef::BodyDescriptor,v8::internal::PointersUpdatingVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x434:
    WasmInstanceObject::BodyDescriptor::IterateBody<v8::internal::PointersUpdatingVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x439:
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    lVar7 = (ulong)*(byte *)(param_2 + 4) * 4;
    if ((int)lVar7 <= iVar2) goto LAB_00feb250;
    lVar3 = (long)iVar2;
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + -1 + lVar3);
    do {
      (**(code **)(*param_5 + 0x28))(param_5,param_3,param_3 + lVar3 + -1);
      lVar3 = lVar3 + 8;
    } while (lVar3 < lVar7);
LAB_00feb254:
    lVar7 = lVar7 + param_3 + -1;
    lVar3 = param_3 + -1 + (long)param_4;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_5 + 0x10);
  }
LAB_00feb26c:
                    /* WARNING: Could not recover jumptable at 0x00feb280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_5,param_3,lVar7,lVar3);
  return;
switchD_00fea828_caseD_5:
  lVar4 = *param_5;
  lVar7 = param_3 + 0xb;
LAB_00fea904:
  lVar3 = param_3 + 0xf;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar4 + 0x10);
  goto LAB_00feb26c;
}

