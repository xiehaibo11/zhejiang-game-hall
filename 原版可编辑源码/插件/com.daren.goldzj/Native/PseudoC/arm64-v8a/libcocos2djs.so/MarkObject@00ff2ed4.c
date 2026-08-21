
/* v8::internal::YoungGenerationMarkingTask::MarkObject(v8::internal::Object) */

void __thiscall
v8::internal::YoungGenerationMarkingTask::MarkObject(YoungGenerationMarkingTask *this,ulong param_2)

{
  YoungGenerationMarkingTask *pYVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong local_78 [2];
  ulong *local_68;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  uVar17 = param_2 & 0xfffffffffffc0000;
  if ((*(byte *)(uVar17 + 8) & 0x18) == 0) {
    return;
  }
  puVar2 = (uint *)(*(long *)(uVar17 + 0x108) + (param_2 - uVar17 >> 7 & 0x1ffffff) * 4);
  do {
    uVar7 = *puVar2;
    uVar11 = (uint)(1L << (param_2 - uVar17 >> 2 & 0x1f));
    if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) {
      return;
    }
    while (*puVar2 == uVar7) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = uVar7 | uVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        uVar16 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1);
        if (0x39 < *(byte *)(uVar16 + 6)) {
switchD_00ff2f9c_caseD_6:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        lVar18 = param_2 - 1;
        pYVar1 = this + 0x70;
        local_68 = (ulong *)param_2;
        switch(*(byte *)(uVar16 + 6)) {
        case 0:
        case 3:
          uVar8 = (ulong)((*(uint *)(param_2 + 3) & 0x3ffffffe) * 4 + 8);
          goto LAB_00ff5018;
        case 1:
          uVar7 = (*(int *)(param_2 + 3) >> 1) + 0xb;
          goto LAB_00ff303c;
        case 2:
          uVar8 = (ulong)*(byte *)(uVar16 + 3) << 2;
          goto LAB_00ff5018;
        case 4:
          iVar12 = *(int *)(param_2 + 7);
          goto LAB_00ff3038;
        case 5:
          iVar12 = *(int *)(param_2 + 7) << 1;
LAB_00ff3038:
          uVar7 = iVar12 + 0xf;
LAB_00ff303c:
          uVar8 = (ulong)(uVar7 & 0xfffffffc);
          goto LAB_00ff5018;
        default:
          goto switchD_00ff2f9c_caseD_6;
        case 7:
          bVar4 = *(byte *)(uVar16 + 3);
          puVar2 = (uint *)(param_2 + 3);
          uVar8 = (ulong)bVar4 << 2;
          if ((uint *)(param_2 + 0xf) <= puVar2) goto LAB_00ff42f4;
          uVar7 = *puVar2;
          goto joined_r0x00ff3074;
        case 9:
          puVar2 = (uint *)(param_2 + 3);
          if (puVar2 < (uint *)(param_2 + 7)) {
            uVar7 = *puVar2;
            goto joined_r0x00ff31ec;
          }
          uVar8 = 8;
          goto LAB_00ff5018;
        case 10:
          iVar12 = *(int *)(param_2 + 0x13);
          if ((*(byte *)(param_2 + 0x17) & 1) != 0) {
            uVar8 = (long)(iVar12 + 0x47) & 0xfffffffffffffff8;
            iVar12 = (int)uVar8 + *(int *)(lVar18 + uVar8) + -0x38;
          }
          uVar8 = (ulong)((iVar12 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0);
          Code::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,pYVar1);
          goto LAB_00ff5018;
        case 0xb:
          (**(code **)(*(long *)pYVar1 + 0x10))(pYVar1,param_2,param_2 + 3,param_2 + 7);
          uVar8 = 0xc;
          goto LAB_00ff5018;
        case 0xc:
          puVar2 = (uint *)(param_2 + 0xb);
          if (puVar2 < (uint *)(param_2 + 0x13)) {
            uVar7 = *puVar2;
            goto joined_r0x00ff33cc;
          }
          break;
        case 0xd:
          uVar7 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          puVar2 = (uint *)(param_2 + 7);
          uVar8 = (ulong)uVar7;
          if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
          uVar11 = *puVar2;
          goto joined_r0x00ff355c;
        case 0xe:
          uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          uVar8 = uVar8 & 0xffffffff;
          DataHandler::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0xf:
          uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          uVar10 = 0xc;
          goto LAB_00ff36f8;
        case 0x10:
          uVar16 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          uVar8 = uVar16 & 0xffffffff;
          if (8 < (int)uVar16) {
            lVar14 = 8;
            do {
              uVar7 = *(uint *)(lVar14 + lVar18);
              if ((uVar7 & 1) != 0) {
                uVar23 = (ulong)(lVar14 + lVar18) & 0xffffffff00000000;
                uVar22 = uVar23 | uVar7;
                uVar23 = uVar23 | (ulong)uVar7 & 0xfffffffffffc0000;
                if ((*(byte *)(uVar23 + 8) & 0x18) != 0) {
                  puVar2 = (uint *)(*(long *)(uVar23 + 0x108) +
                                   (uVar22 - uVar23 >> 7 & 0x1ffffff) * 4);
                  while( true ) {
                    uVar7 = *puVar2;
                    uVar11 = (uint)(1L << (uVar22 - uVar23 >> 2 & 0x1f));
                    if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
                    while (*puVar2 == uVar7) {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                      if (bVar6) {
                        *puVar2 = uVar7 | uVar11;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') {
                        lVar19 = *(long *)(this + 0x78);
                        puVar21 = (undefined8 *)(lVar19 + (long)*(int *)(this + 0x80) * 0x50);
                        puVar15 = (undefined8 *)*puVar21;
                        lVar20 = puVar15[1];
                        if (lVar20 == 0x40) {
                          base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
                          *puVar15 = *(undefined8 *)(lVar19 + 0x2a8);
                          *(undefined8 **)(lVar19 + 0x2a8) = puVar15;
                          base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
                          pvVar9 = operator_new(0x210);
                          *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                          *(undefined8 *)((long)pvVar9 + 200) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                          *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                          *(undefined8 *)((long)pvVar9 + 400) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                          *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                          *puVar21 = pvVar9;
                          *(undefined8 *)((long)pvVar9 + 8) = 1;
                          *(ulong *)((long)pvVar9 + 0x10) = uVar22;
                        }
                        else {
                          puVar15[1] = lVar20 + 1;
                          puVar15[lVar20 + 2] = uVar22;
                        }
                        goto LAB_00ff43f4;
                      }
                    }
                    ClearExclusiveLocal();
                  }
                }
              }
LAB_00ff43f4:
              lVar14 = lVar14 + 8;
            } while ((int)lVar14 < (int)uVar16);
          }
          goto LAB_00ff5018;
        case 0x11:
          uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          uVar8 = uVar8 & 0xffffffff;
          EphemeronHashTable::BodyDescriptor::
          IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x12:
          puVar2 = (uint *)(param_2 + 3);
          if (puVar2 < (uint *)(param_2 + 7)) {
            uVar7 = *puVar2;
            goto joined_r0x00ff3758;
          }
          uVar8 = 0xc;
          goto LAB_00ff5018;
        case 0x13:
          uVar8 = (ulong)(*(int *)(param_2 + 0xf) * 4 + 0x20);
          FeedbackVector::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x14:
          uVar7 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          puVar2 = (uint *)(param_2 + 7);
          uVar8 = (ulong)uVar7;
          if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
          uVar11 = *puVar2;
          goto joined_r0x00ff44fc;
        case 0x15:
          uVar8 = (ulong)(uint)(*(int *)(param_2 + 3) >> 1);
          goto LAB_00ff5018;
        case 0x16:
        case 0x19:
        case 0x1a:
        case 0x1e:
          uVar8 = (ulong)*(byte *)(uVar16 + 3) << 2;
          BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,4,uVar8);
          goto LAB_00ff5018;
        case 0x17:
          uVar8 = (ulong)*(byte *)(uVar16 + 3) << 2;
          JSArrayBuffer::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x18:
          uVar8 = (ulong)*(byte *)(uVar16 + 3) << 2;
          JSDataView::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x1b:
          puVar2 = (uint *)(param_2 + 3);
          uVar8 = (ulong)*(byte *)(uVar16 + 3) * 4;
          if ((uint *)(lVar18 + uVar8) <= puVar2) goto LAB_00ff5018;
          uVar7 = *puVar2;
          goto joined_r0x00ff3908;
        case 0x1c:
          uVar8 = (ulong)*(byte *)(uVar16 + 3) << 2;
          JSTypedArray::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x1d:
          uVar8 = (ulong)*(byte *)(uVar16 + 3) << 2;
          JSWeakRef::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x1f:
          uVar8 = 0x28;
          Map::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,0x28,pYVar1);
          goto LAB_00ff5018;
        case 0x20:
          uVar8 = 0x42c;
          NativeContext::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,0x42c,pYVar1);
          goto LAB_00ff5018;
        case 0x21:
          puVar2 = (uint *)(param_2 + 0xb);
          if (puVar2 < (uint *)(param_2 + 0x1b)) {
            uVar7 = *puVar2;
            goto joined_r0x00ff3ad8;
          }
          uVar8 = 0x1c;
          goto LAB_00ff5018;
        case 0x22:
          uVar7 = *(int *)(param_2 + 3) + 0xfU & 0xfffffffc;
          uVar8 = (ulong)(uVar7 + *(int *)(param_2 + 7) * 4);
          BodyDescriptorBase::IteratePointers<v8::internal::YoungGenerationMarkingVisitor>
                    (param_2,uVar7,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x23:
          uVar7 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          puVar2 = (uint *)(param_2 + 7);
          uVar8 = (ulong)uVar7;
          if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
          uVar11 = *puVar2;
          goto joined_r0x00ff3c90;
        case 0x24:
          puVar2 = (uint *)(param_2 + 3);
          if (puVar2 < (uint *)(param_2 + 0x13)) {
            uVar7 = *puVar2;
            goto joined_r0x00ff46b0;
          }
          break;
        case 0x25:
          uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          uVar8 = uVar8 & 0xffffffff;
          PrototypeInfo::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                    (uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x27:
          puVar2 = (uint *)(param_2 + 0xb);
          if (puVar2 < (uint *)(param_2 + 0x13)) {
            uVar7 = *puVar2;
            goto joined_r0x00ff4854;
          }
          break;
        case 0x28:
          puVar2 = (uint *)(param_2 + 0xb);
          if (puVar2 < (uint *)(param_2 + 0x13)) {
            uVar7 = *puVar2;
            goto joined_r0x00ff49c8;
          }
          break;
        case 0x29:
          uVar8 = (ulong)((uint)*(byte *)(param_2 + 5) * 0x13 + 0xb & 0x3ffc);
          SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::BodyDescriptor::
          IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x2a:
          uVar8 = (ulong)((uint)*(byte *)(param_2 + 5) * 0xb + 0xb & 0x1ffc);
          SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::BodyDescriptor::
          IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x2b:
          uVar8 = (ulong)((uint)*(byte *)(param_2 + 9) * 0x1b + 0xf & 0x3ffc);
          SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::BodyDescriptor::
          IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x2c:
          uVar8 = 0x48;
          SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<24,72,72>>
          ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar16,param_2,0x48,pYVar1);
          goto LAB_00ff5018;
        case 0x2d:
          puVar2 = (uint *)(param_2 + 3);
          uVar8 = (ulong)*(byte *)(uVar16 + 3) * 4;
          if ((uint *)(lVar18 + uVar8) <= puVar2) goto LAB_00ff5018;
          uVar7 = *puVar2;
          goto joined_r0x00ff3e7c;
        case 0x2e:
          puVar2 = (uint *)(param_2 + 0xb);
          if ((uint *)(param_2 + 0xf) <= puVar2) goto LAB_00ff4cc8;
          uVar7 = *puVar2;
          goto joined_r0x00ff4b70;
        case 0x2f:
          uVar8 = 0x24;
          SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<28,36,36>>
          ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar16,param_2,0x24,pYVar1);
          goto LAB_00ff5018;
        case 0x30:
          puVar2 = (uint *)(param_2 + 0xb);
          if ((uint *)(param_2 + 0xf) <= puVar2) goto LAB_00ff4cc8;
          uVar7 = *puVar2;
          goto joined_r0x00ff400c;
        case 0x31:
        case 0x37:
          uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          uVar10 = 4;
LAB_00ff36f8:
          uVar8 = uVar8 & 0xffffffff;
          BodyDescriptorBase::IterateMaybeWeakPointers<v8::internal::YoungGenerationMarkingVisitor>
                    (param_2,uVar10,uVar8,pYVar1);
          goto LAB_00ff5018;
        case 0x32:
          puVar2 = (uint *)(param_2 + 3);
          if (puVar2 < (uint *)(param_2 + 7)) {
            uVar7 = *puVar2;
            goto joined_r0x00ff4180;
          }
LAB_00ff4cc8:
          uVar8 = 0x10;
          goto LAB_00ff5018;
        case 0x33:
          uVar8 = 0x14;
          SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,8,16>,v8::internal::FixedBodyDescriptor<16,20,20>>
          ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar16,param_2,0x14,pYVar1);
          goto LAB_00ff5018;
        case 0x34:
          uVar7 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          puVar2 = (uint *)(param_2 + 0xb);
          uVar8 = (ulong)uVar7;
          if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
          uVar11 = *puVar2;
          goto joined_r0x00ff4d08;
        case 0x35:
          uVar7 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar16);
          puVar2 = (uint *)(param_2 + 0x17);
          uVar8 = (ulong)uVar7;
          if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
          uVar11 = *puVar2;
          goto joined_r0x00ff4e90;
        case 0x36:
          uVar8 = (ulong)*(byte *)(uVar16 + 3) << 2;
          WasmInstanceObject::BodyDescriptor::
          IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar16,param_2,uVar8,pYVar1);
          goto LAB_00ff5018;
        }
        uVar8 = 0x14;
        goto LAB_00ff5018;
      }
    }
    ClearExclusiveLocal();
  } while( true );
joined_r0x00ff4e90:
  if ((uVar11 & 1) != 0) {
    uVar23 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar23 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar11 = *puVar3;
        uVar13 = (uint)(1L << (uVar23 - uVar16 >> 2 & 0x1f));
        if ((uVar13 & (uVar11 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar11 | uVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar20 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar20 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar14 = puVar15[1];
            if (lVar14 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
              *puVar15 = *(undefined8 *)(lVar20 + 0x2a8);
              *(undefined8 **)(lVar20 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar23;
            }
            else {
              puVar15[1] = lVar14 + 1;
              puVar15[lVar14 + 2] = uVar23;
            }
            goto LAB_00ff4f38;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff4f38:
  puVar2 = puVar2 + 1;
  if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
  uVar11 = *puVar2;
  goto joined_r0x00ff4e90;
joined_r0x00ff4d08:
  if ((uVar11 & 1) != 0) {
    uVar23 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar23 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar11 = *puVar3;
        uVar13 = (uint)(1L << (uVar23 - uVar16 >> 2 & 0x1f));
        if ((uVar13 & (uVar11 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar11 | uVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar20 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar20 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar14 = puVar15[1];
            if (lVar14 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
              *puVar15 = *(undefined8 *)(lVar20 + 0x2a8);
              *(undefined8 **)(lVar20 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar23;
            }
            else {
              puVar15[1] = lVar14 + 1;
              puVar15[lVar14 + 2] = uVar23;
            }
            goto LAB_00ff4db0;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff4db0:
  puVar2 = puVar2 + 1;
  if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
  uVar11 = *puVar2;
  goto joined_r0x00ff4d08;
joined_r0x00ff4180:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff422c;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff422c:
  puVar2 = puVar2 + 1;
  uVar8 = 0x10;
  if ((uint *)(param_2 + 7) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff4180;
joined_r0x00ff400c:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff40b8;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff40b8:
  puVar2 = puVar2 + 1;
  uVar8 = 0x10;
  if ((uint *)(param_2 + 0xf) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff400c;
joined_r0x00ff4b70:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff4c1c;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff4c1c:
  puVar2 = puVar2 + 1;
  uVar8 = 0x10;
  if ((uint *)(param_2 + 0xf) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff4b70;
joined_r0x00ff3e7c:
  if ((uVar7 & 1) != 0) {
    uVar23 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar23 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar23 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar20 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar20 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar14 = puVar15[1];
            if (lVar14 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
              *puVar15 = *(undefined8 *)(lVar20 + 0x2a8);
              *(undefined8 **)(lVar20 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar23;
            }
            else {
              puVar15[1] = lVar14 + 1;
              puVar15[lVar14 + 2] = uVar23;
            }
            goto LAB_00ff3f2c;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff3f2c:
  puVar2 = puVar2 + 1;
  if ((uint *)(lVar18 + uVar8) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff3e7c;
joined_r0x00ff49c8:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff4a74;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff4a74:
  puVar2 = puVar2 + 1;
  uVar8 = 0x14;
  if ((uint *)(param_2 + 0x13) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff49c8;
joined_r0x00ff4854:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff4900;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff4900:
  puVar2 = puVar2 + 1;
  uVar8 = 0x14;
  if ((uint *)(param_2 + 0x13) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff4854;
joined_r0x00ff46b0:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff475c;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff475c:
  puVar2 = puVar2 + 1;
  uVar8 = 0x14;
  if ((uint *)(param_2 + 0x13) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff46b0;
joined_r0x00ff3c90:
  if ((uVar11 & 1) != 0) {
    uVar23 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar23 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar11 = *puVar3;
        uVar13 = (uint)(1L << (uVar23 - uVar16 >> 2 & 0x1f));
        if ((uVar13 & (uVar11 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar11 | uVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar20 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar20 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar14 = puVar15[1];
            if (lVar14 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
              *puVar15 = *(undefined8 *)(lVar20 + 0x2a8);
              *(undefined8 **)(lVar20 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar23;
            }
            else {
              puVar15[1] = lVar14 + 1;
              puVar15[lVar14 + 2] = uVar23;
            }
            goto LAB_00ff3d38;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff3d38:
  puVar2 = puVar2 + 1;
  if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
  uVar11 = *puVar2;
  goto joined_r0x00ff3c90;
joined_r0x00ff3ad8:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff3b84;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff3b84:
  puVar2 = puVar2 + 1;
  uVar8 = 0x1c;
  if ((uint *)(param_2 + 0x1b) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff3ad8;
joined_r0x00ff3908:
  if ((uVar7 & 1) != 0) {
    uVar23 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar23 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar23 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar20 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar20 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar14 = puVar15[1];
            if (lVar14 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
              *puVar15 = *(undefined8 *)(lVar20 + 0x2a8);
              *(undefined8 **)(lVar20 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar23;
            }
            else {
              puVar15[1] = lVar14 + 1;
              puVar15[lVar14 + 2] = uVar23;
            }
            goto LAB_00ff39b8;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff39b8:
  puVar2 = puVar2 + 1;
  if ((uint *)(lVar18 + uVar8) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff3908;
joined_r0x00ff44fc:
  if ((uVar11 & 1) != 0) {
    uVar23 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar23 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar11 = *puVar3;
        uVar13 = (uint)(1L << (uVar23 - uVar16 >> 2 & 0x1f));
        if ((uVar13 & (uVar11 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar11 | uVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar20 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar20 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar14 = puVar15[1];
            if (lVar14 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
              *puVar15 = *(undefined8 *)(lVar20 + 0x2a8);
              *(undefined8 **)(lVar20 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar23;
            }
            else {
              puVar15[1] = lVar14 + 1;
              puVar15[lVar14 + 2] = uVar23;
            }
            goto LAB_00ff45a4;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff45a4:
  puVar2 = puVar2 + 1;
  if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
  uVar11 = *puVar2;
  goto joined_r0x00ff44fc;
joined_r0x00ff3758:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff3804;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff3804:
  puVar2 = puVar2 + 1;
  uVar8 = 0xc;
  if ((uint *)(param_2 + 7) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff3758;
joined_r0x00ff355c:
  if ((uVar11 & 1) != 0) {
    uVar23 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar11 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar23 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar11 = *puVar3;
        uVar13 = (uint)(1L << (uVar23 - uVar16 >> 2 & 0x1f));
        if ((uVar13 & (uVar11 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar11 | uVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar20 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar20 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar14 = puVar15[1];
            if (lVar14 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
              *puVar15 = *(undefined8 *)(lVar20 + 0x2a8);
              *(undefined8 **)(lVar20 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar23;
            }
            else {
              puVar15[1] = lVar14 + 1;
              puVar15[lVar14 + 2] = uVar23;
            }
            goto LAB_00ff3604;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff3604:
  puVar2 = puVar2 + 1;
  if ((uint *)(lVar18 + (int)uVar7) <= puVar2) goto LAB_00ff5018;
  uVar11 = *puVar2;
  goto joined_r0x00ff355c;
joined_r0x00ff33cc:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff3478;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff3478:
  puVar2 = puVar2 + 1;
  uVar8 = 0x14;
  if ((uint *)(param_2 + 0x13) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff33cc;
joined_r0x00ff31ec:
  if ((uVar7 & 1) != 0) {
    uVar8 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar8 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar8 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar8;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar8;
            }
            goto LAB_00ff3298;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff3298:
  puVar2 = puVar2 + 1;
  uVar8 = 8;
  if ((uint *)(param_2 + 7) <= puVar2) goto LAB_00ff5018;
  uVar7 = *puVar2;
  goto joined_r0x00ff31ec;
joined_r0x00ff3074:
  if ((uVar7 & 1) != 0) {
    uVar23 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7;
    uVar16 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar16 + 8) & 0x18) != 0) {
      puVar3 = (uint *)(*(long *)(uVar16 + 0x108) + (uVar23 - uVar16 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar7 = *puVar3;
        uVar11 = (uint)(1L << (uVar23 - uVar16 >> 2 & 0x1f));
        if ((uVar11 & (uVar7 ^ 0xffffffff)) == 0) break;
        while (*puVar3 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar7 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = *(long *)(this + 0x78);
            puVar21 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
            puVar15 = (undefined8 *)*puVar21;
            lVar18 = puVar15[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
              *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
              base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
              pvVar9 = operator_new(0x210);
              *(undefined8 *)((long)pvVar9 + 0x20) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = 0;
              *(undefined8 *)((long)pvVar9 + 0x30) = 0;
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              *(undefined8 *)((long)pvVar9 + 0x40) = 0;
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              *(undefined8 *)((long)pvVar9 + 0x50) = 0;
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x60) = 0;
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              *(undefined8 *)((long)pvVar9 + 0x70) = 0;
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              *(undefined8 *)((long)pvVar9 + 0x80) = 0;
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              *(undefined8 *)((long)pvVar9 + 0x90) = 0;
              *(undefined8 *)((long)pvVar9 + 0x88) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x98) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar9 + 200) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x100) = 0;
              *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x110) = 0;
              *(undefined8 *)((long)pvVar9 + 0x108) = 0;
              *(undefined8 *)((long)pvVar9 + 0x120) = 0;
              *(undefined8 *)((long)pvVar9 + 0x118) = 0;
              *(undefined8 *)((long)pvVar9 + 0x130) = 0;
              *(undefined8 *)((long)pvVar9 + 0x128) = 0;
              *(undefined8 *)((long)pvVar9 + 0x140) = 0;
              *(undefined8 *)((long)pvVar9 + 0x138) = 0;
              *(undefined8 *)((long)pvVar9 + 0x150) = 0;
              *(undefined8 *)((long)pvVar9 + 0x148) = 0;
              *(undefined8 *)((long)pvVar9 + 0x160) = 0;
              *(undefined8 *)((long)pvVar9 + 0x158) = 0;
              *(undefined8 *)((long)pvVar9 + 0x170) = 0;
              *(undefined8 *)((long)pvVar9 + 0x168) = 0;
              *(undefined8 *)((long)pvVar9 + 0x180) = 0;
              *(undefined8 *)((long)pvVar9 + 0x178) = 0;
              *(undefined8 *)((long)pvVar9 + 400) = 0;
              *(undefined8 *)((long)pvVar9 + 0x188) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x198) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x200) = 0;
              *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar9 + 0x208) = 0;
              *puVar21 = pvVar9;
              *(undefined8 *)((long)pvVar9 + 8) = 1;
              *(ulong *)((long)pvVar9 + 0x10) = uVar23;
            }
            else {
              puVar15[1] = lVar18 + 1;
              puVar15[lVar18 + 2] = uVar23;
            }
            goto LAB_00ff3128;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff3128:
  puVar2 = puVar2 + 1;
  if ((uint *)(param_2 + 0xf) <= puVar2) {
LAB_00ff42f4:
    if (bVar4 == 7) {
      (**(code **)(*(long *)pYVar1 + 0x10))(pYVar1,param_2,param_2 + 0x17,param_2 + 0x1b);
    }
LAB_00ff5018:
    local_68 = local_78;
    local_78[0] = uVar17;
    lVar18 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::__unordered_map_hasher<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::equal_to<v8::internal::Page*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Page*,long>>>
             ::
             __emplace_unique_key_args<v8::internal::Page*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Page*&&>,std::__ndk1::tuple<>>
                       ((Page **)(this + 0x90),(piecewise_construct_t *)local_78,
                        (tuple *)&DAT_019c5885,(tuple *)&local_68);
    *(long *)(lVar18 + 0x18) = *(long *)(lVar18 + 0x18) + (long)(int)uVar8;
    return;
  }
  uVar7 = *puVar2;
  goto joined_r0x00ff3074;
}

