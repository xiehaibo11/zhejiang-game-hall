
/* void v8::internal::BodyDescriptorApply<v8::internal::CallIterateBody, void, v8::internal::Map,
   v8::internal::HeapObject, int,
   v8::internal::RecordMigratedSlotVisitor*>(v8::internal::InstanceType, v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::RecordMigratedSlotVisitor*) */

void v8::internal::
     BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
               (ushort param_1,long param_2,long param_3,int param_4,long *param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  RelocIterator aRStack_90 [64];
  
  uVar1 = (uint)param_1;
  if (uVar1 < 0x40) {
    switch(param_1 & 7) {
    case 0:
    case 2:
      return;
    case 1:
      for (puVar5 = (uint *)(param_3 + 0xb); puVar5 < (uint *)(param_3 + 0x13U); puVar5 = puVar5 + 1
          ) {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      return;
    case 3:
      for (puVar5 = (uint *)(param_3 + 0xb); puVar5 < (uint *)(param_3 + 0x13U); puVar5 = puVar5 + 1
          ) {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      return;
    case 5:
      for (puVar5 = (uint *)(param_3 + 0xb); puVar5 < (uint *)(param_3 + 0xfU); puVar5 = puVar5 + 1)
      {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      return;
    }
switchD_00fdcaf0_caseD_4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  switch(uVar1) {
  case 0x40:
    for (puVar5 = (uint *)(param_3 + 0xb); puVar5 < (uint *)(param_3 + 0xfU); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x41:
  case 0x42:
  case 0x46:
  case 0x85:
  case 0x87:
  case 0x9e:
  case 0xa0:
  case 0xa1:
    break;
  case 0x43:
    for (puVar5 = (uint *)(param_3 + 0xb); puVar5 < (uint *)(param_3 + 0x1bU); puVar5 = puVar5 + 1)
    {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x44:
    puVar4 = (uint *)(param_3 + 0x17);
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < puVar4; puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    for (; puVar4 < (uint *)(param_3 + 0x47U); puVar4 = puVar4 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar4 & 0xffffffff00000000 | (ulong)*puVar4,puVar4);
    }
    break;
  case 0x45:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0x17U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    for (puVar5 = (uint *)(param_3 + 0x1b); puVar5 < (uint *)(param_3 + 0x23U); puVar5 = puVar5 + 1)
    {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
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
      for (puVar5 = (uint *)(param_3 + 0xb); puVar5 < (uint *)(param_3 + param_4 + -1);
          puVar5 = puVar5 + 1) {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
    }
    else if (param_1 == 100) {
      puVar4 = (uint *)(param_3 + 0x13);
      for (puVar5 = (uint *)(param_3 + 3); puVar5 < puVar4; puVar5 = puVar5 + 1) {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,
                 (ulong)puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0x13),puVar4);
      for (puVar5 = (uint *)(param_3 + 0x17); puVar5 < (uint *)(param_3 + -1 + (long)param_4);
          puVar5 = puVar5 + 1) {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
    }
    else if (param_1 == 0x74) {
      for (puVar5 = (uint *)(param_3 + 0x17); puVar5 < (uint *)(param_3 + -1 + (long)param_4);
          puVar5 = puVar5 + 1) {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
    }
    else {
      for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + -1 + (long)param_4);
          puVar5 = puVar5 + 1) {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
    }
    break;
  case 0x4c:
  case 0x4d:
    puVar4 = (uint *)(param_3 + 0xb);
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < puVar4; puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    for (; puVar4 < (uint *)(param_3 + -1 + (long)param_4); puVar4 = puVar4 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar4 & 0xffffffff00000000 | (ulong)*puVar4,puVar4);
    }
    break;
  case 0x55:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0xfU); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    if (param_4 != 0x1c) {
      return;
    }
    lVar8 = *param_5;
    puVar5 = (uint *)(param_3 + 0x17);
    puVar4 = (uint *)(param_3 + 0x1b);
    goto LAB_00fdd694;
  case 0x59:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x5d:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 7U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
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
    for (puVar5 = (uint *)(param_3 + 7); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x78:
    for (puVar5 = (uint *)(param_3 + 7); puVar5 < (uint *)(param_3 + 0x13U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    uVar1 = *(uint *)(param_3 + 0xf);
    if ((int)uVar1 >> 1 != 0) {
      uVar6 = 0;
      iVar3 = 0x18;
      do {
        (**(code **)(*param_5 + 0x40))
                  (param_5,param_3,uVar6 & 0xffffffff,param_3 + -1 + (long)(iVar3 + -4),
                   param_3 + -1 + (long)iVar3);
        uVar6 = uVar6 + 1;
        iVar3 = iVar3 + 8;
      } while ((long)((ulong)uVar1 << 0x20) >> 0x21 != uVar6);
    }
    break;
  case 0x86:
    (**(code **)(*param_5 + 0x88))
              (param_5,param_3,
               (ulong)(param_3 + 7) & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 7));
    (**(code **)(*param_5 + 0x88))
              (param_5,param_3,
               (ulong)(param_3 + 0xb) & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb));
    puVar4 = (uint *)(param_3 + 0xf);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_5 + 0x88);
    puVar5 = (uint *)((ulong)puVar4 & 0xffffffff00000000 | (ulong)*puVar4);
    goto LAB_00fdda80;
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x90:
  case 0x91:
    for (puVar5 = (uint *)(param_3 + 7); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x8f:
    puVar5 = (uint *)(param_3 + 0x417);
    for (puVar4 = (uint *)(param_3 + 3); puVar4 < puVar5; puVar4 = puVar4 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar4 & 0xffffffff00000000 | (ulong)*puVar4);
    }
    puVar4 = (uint *)(param_3 + 0x423);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_5 + 0x20);
    goto LAB_00fdda80;
  case 0x92:
    bVar2 = *(byte *)(param_3 + 5);
    for (puVar5 = (uint *)(param_3 + 7); puVar5 < (uint *)(param_3 + ((ulong)bVar2 << 4 | 8) + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x93:
    puVar5 = (uint *)(param_3 + 7);
    puVar4 = puVar5 + (ulong)*(byte *)(param_3 + 5) * 2;
    for (; puVar5 < puVar4; puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x94:
    puVar5 = (uint *)(param_3 + 0xb);
    puVar4 = puVar5 + (ulong)*(byte *)(param_3 + 9) * 6;
    for (; puVar5 < puVar4; puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x95:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 7U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    for (puVar5 = (uint *)(param_3 + 0xf); puVar5 < (uint *)(param_3 + 0x13U); puVar5 = puVar5 + 1)
    {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x96:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 7U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x97:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x98:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x99:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 7U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x9a:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0x13U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    RelocIterator::RelocIterator(aRStack_90,param_3,1999);
    (**(code **)(*param_5 + 0x80))(param_5,aRStack_90);
    break;
  case 0x9b:
    lVar8 = *param_5;
    puVar5 = (uint *)(param_3 + 3);
    puVar4 = (uint *)(param_3 + 7);
LAB_00fdd694:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x20);
    goto LAB_00fdda80;
  case 0x9c:
    for (puVar5 = (uint *)(param_3 + 0xb); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x9d:
    if (8 < param_4) {
      lVar8 = 7;
      do {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,
                   (ulong)(param_3 + lVar8) & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + lVar8)
                  );
        lVar8 = lVar8 + 8;
      } while ((int)lVar8 + 1 < param_4);
    }
    break;
  case 0x9f:
    (**(code **)(*param_5 + 0x88))
              (param_5,param_3,
               (ulong)(param_3 + 3) & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 3));
    (**(code **)(*param_5 + 0x88))
              (param_5,param_3,
               (ulong)(param_3 + 7) & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 7));
    (**(code **)(*param_5 + 0x88))
              (param_5,param_3,
               (ulong)(param_3 + 0xb) & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb));
    for (puVar5 = (uint *)(param_3 + 0x1f); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0xa2:
    puVar4 = (uint *)(param_3 + 0x23);
    for (puVar5 = (uint *)(param_3 + 0xf); puVar5 < puVar4; puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_5 + 0x88);
    puVar5 = (uint *)((ulong)puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0x23));
LAB_00fdda80:
                    /* WARNING: Could not recover jumptable at 0x00fdda98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_5,param_3,puVar5,puVar4);
    return;
  case 0xa3:
    iVar3 = *(int *)(param_3 + 7);
    uVar1 = *(int *)(param_3 + 3) + 0xfU & 0xfffffffc;
    for (puVar5 = (uint *)(param_3 + -1 + (long)(int)uVar1);
        puVar5 < (uint *)(param_3 + -1 + (long)(int)(uVar1 + iVar3 * 4)); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0xa4:
    for (puVar5 = (uint *)(param_3 + 7); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0xa5:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0x13U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0xa6:
    (**(code **)(*param_5 + 0x38))(param_5,param_3,param_3 + 3);
    for (puVar5 = (uint *)(param_3 + 7); puVar5 < (uint *)(param_3 + 0x13U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0xa7:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + param_4 + -1);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0xa8:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 7U); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    (**(code **)(*param_5 + 0x38))(param_5,param_3,(uint *)(param_3 + 7U));
    for (puVar5 = (uint *)(param_3 + 0xb); puVar5 < (uint *)(param_3 + -1 + (long)param_4);
        puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0xa9:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0xfU); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
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
  case 0x439:
    CallIterateBody::
    apply<v8::internal::JSObject::BodyDescriptor,v8::internal::RecordMigratedSlotVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  default:
    PrintF("Unknown type: %d\n",(ulong)uVar1);
    goto switchD_00fdcaf0_caseD_4;
  case 0x41a:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0xfU); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    lVar7 = param_3 + -1;
    lVar8 = (ulong)*(byte *)(param_2 + 4) * 4;
    if (iVar3 < (int)lVar8) {
      lVar9 = (long)iVar3;
      for (puVar5 = (uint *)(param_3 + 0x27); puVar5 < (uint *)(lVar7 + lVar9); puVar5 = puVar5 + 1)
      {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      do {
        puVar5 = (uint *)(param_3 + lVar9 + -1);
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
        lVar9 = lVar9 + 8;
      } while (lVar9 < lVar8);
    }
    else {
      lVar8 = 0x28;
    }
    for (puVar5 = (uint *)(lVar7 + lVar8); puVar5 < (uint *)(lVar7 + param_4); puVar5 = puVar5 + 1)
    {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x41b:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0xfU); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    (**(code **)(*param_5 + 0x88))
              (param_5,param_3,
               (ulong)(param_3 + 0x2f) & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0x2f));
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    lVar7 = param_3 + -1;
    lVar8 = (ulong)*(byte *)(param_2 + 4) * 4;
    if (iVar3 < (int)lVar8) {
      lVar9 = (long)iVar3;
      for (puVar5 = (uint *)(param_3 + 0x33); puVar5 < (uint *)(lVar7 + lVar9); puVar5 = puVar5 + 1)
      {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      do {
        puVar5 = (uint *)(param_3 + lVar9 + -1);
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
        lVar9 = lVar9 + 8;
      } while (lVar9 < lVar8);
    }
    else {
      lVar8 = 0x34;
    }
    for (puVar5 = (uint *)(lVar7 + lVar8); puVar5 < (uint *)(lVar7 + param_4); puVar5 = puVar5 + 1)
    {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x41e:
  case 0x41f:
    CallIterateBody::
    apply<v8::internal::JSWeakCollection::BodyDescriptorImpl,v8::internal::RecordMigratedSlotVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x424:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0xbU); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    lVar7 = param_3 + -1;
    lVar8 = (ulong)*(byte *)(param_2 + 4) * 4;
    if (iVar3 < (int)lVar8) {
      lVar9 = (long)iVar3;
      for (puVar5 = (uint *)(param_3 + 0x1f); puVar5 < (uint *)(lVar7 + lVar9); puVar5 = puVar5 + 1)
      {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      do {
        puVar5 = (uint *)(param_3 + lVar9 + -1);
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
        lVar9 = lVar9 + 8;
      } while (lVar9 < lVar8);
    }
    else {
      lVar8 = 0x20;
    }
    for (puVar5 = (uint *)(lVar7 + lVar8); puVar5 < (uint *)(lVar7 + param_4); puVar5 = puVar5 + 1)
    {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x431:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0xbU); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    (**(code **)(*param_5 + 0x38))(param_5,param_3,(uint *)(param_3 + 0xbU));
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    lVar7 = param_3 + -1;
    lVar8 = (ulong)*(byte *)(param_2 + 4) * 4;
    if (iVar3 < (int)lVar8) {
      lVar9 = (long)iVar3;
      for (puVar5 = (uint *)(param_3 + 0xf); puVar5 < (uint *)(lVar7 + lVar9); puVar5 = puVar5 + 1)
      {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      do {
        puVar5 = (uint *)(param_3 + lVar9 + -1);
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
        lVar9 = lVar9 + 8;
      } while (lVar9 < lVar8);
    }
    else {
      lVar8 = 0x10;
    }
    for (puVar5 = (uint *)(lVar7 + lVar8); puVar5 < (uint *)(lVar7 + param_4); puVar5 = puVar5 + 1)
    {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    break;
  case 0x434:
    for (puVar5 = (uint *)(param_3 + 3); puVar5 < (uint *)(param_3 + 0xbU); puVar5 = puVar5 + 1) {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
    lVar8 = 0;
    lVar7 = param_3 + -1;
    do {
      puVar5 = (uint *)(lVar7 + (ulong)*(ushort *)
                                        ((long)&WasmInstanceObject::kTaggedFieldOffsets + lVar8));
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0x1e);
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    lVar8 = (ulong)*(byte *)(param_2 + 4) * 4;
    if (iVar3 < (int)lVar8) {
      lVar9 = (long)iVar3;
      for (puVar5 = (uint *)(param_3 + 0xc3); puVar5 < (uint *)(lVar7 + lVar9); puVar5 = puVar5 + 1)
      {
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
      }
      do {
        puVar5 = (uint *)(param_3 + lVar9 + -1);
        (**(code **)(*param_5 + 0x88))
                  (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
        lVar9 = lVar9 + 8;
      } while (lVar9 < lVar8);
    }
    else {
      lVar8 = 0xc4;
    }
    for (puVar5 = (uint *)(lVar7 + lVar8); puVar5 < (uint *)(lVar7 + param_4); puVar5 = puVar5 + 1)
    {
      (**(code **)(*param_5 + 0x88))
                (param_5,param_3,(ulong)puVar5 & 0xffffffff00000000 | (ulong)*puVar5);
    }
  }
  return;
}

