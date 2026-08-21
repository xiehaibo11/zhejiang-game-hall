
/* WARNING: Type propagation algorithm not settling */
/* bool 
   v8::internal::Deserializer::ReadData<v8::internal::FullMaybeObjectSlot>(v8::internal::FullMaybeObjectSlot,
   v8::internal::FullMaybeObjectSlot, v8::internal::SnapshotSpace, unsigned long) */

bool __thiscall
v8::internal::Deserializer::ReadData<v8::internal::FullMaybeObjectSlot>
          (Deserializer *this,ulong *param_2,ulong *param_3,uint param_4,uint *param_5)

{
  long lVar1;
  long lVar2;
  __shared_weak_count *p_Var3;
  Deserializer DVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  __shared_weak_count *this_00;
  BackingStore *pBVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  size_t __n;
  undefined8 *local_78;
  __shared_weak_count *local_70;
  BackingStore *local_68;
  
  if (param_2 < param_3) {
    bVar10 = (param_4 | 2) != 3 && param_5 != (uint *)0x0;
    bVar12 = (param_4 | 2) != 3;
    lVar26 = *(long *)(this + 0x50);
    bVar13 = param_5 != (uint *)0x0;
    uVar25 = (long)param_5 + 1;
    pbVar21 = (byte *)(uVar25 & 0xfffffffffffc0000 | 8);
LAB_015c0a9c:
    do {
      iVar16 = *(int *)(this + 0x7c);
      lVar22 = (long)iVar16;
      lVar17 = *(long *)(this + 0x70);
      lVar20 = lVar22 + 1;
      iVar15 = (int)lVar20;
      *(int *)(this + 0x7c) = iVar15;
      bVar8 = *(byte *)(lVar17 + lVar22);
      uVar28 = (ulong)bVar8;
      if (0x97 < bVar8) goto switchD_015c0ac4_caseD_6;
      uVar27 = (uint)bVar8;
      switch(uVar28) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
        DVar4 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        uVar28 = ReadObject(this,uVar27);
        if (DVar4 != (Deserializer)0x0) {
          uVar28 = uVar28 | 2;
        }
        *param_2 = uVar28;
        if ((((uVar27 == 1 && (bVar12 && bVar13)) && ((int)uVar28 != 3)) && ((uVar28 & 1) != 0)) &&
           (((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar21 & 0x18) == 0))
           )) {
          Heap_GenerationalBarrierSlow(uVar25,param_2,uVar28 & 0xfffffffffffffffd);
        }
        goto joined_r0x015c0f58;
      case 1:
        DVar4 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        uVar28 = ReadObject(this,1);
        if (DVar4 != (Deserializer)0x0) {
          uVar28 = uVar28 | 2;
        }
        *param_2 = uVar28;
        if (((bVar10) && ((int)uVar28 != 3)) &&
           (((uVar28 & 1) != 0 &&
            (((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar21 & 0x18) == 0)
             ))))) {
          Heap_GenerationalBarrierSlow(uVar25,param_2,uVar28 & 0xfffffffffffffffd);
        }
        goto joined_r0x015c0f58;
      default:
        goto switchD_015c0ac4_caseD_6;
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        DVar4 = this[0x20c];
        uVar27 = bVar8 & 7;
        this[0x20c] = (Deserializer)0x0;
        uVar28 = GetBackReferencedObject(this,uVar27);
        if (DVar4 != (Deserializer)0x0) {
          uVar28 = uVar28 | 2;
        }
        *param_2 = uVar28;
        if ((((uVar27 == 1 && (bVar12 && bVar13)) && ((int)uVar28 != 3)) && ((uVar28 & 1) != 0)) &&
           (((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar21 & 0x18) == 0))
           )) {
          Heap_GenerationalBarrierSlow(uVar25,param_2,uVar28 & 0xfffffffffffffffd);
        }
        goto joined_r0x015c0f58;
      case 9:
        DVar4 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        uVar28 = GetBackReferencedObject(this,1);
        if (DVar4 != (Deserializer)0x0) {
          uVar28 = uVar28 | 2;
        }
        *param_2 = uVar28;
        if (((bVar10) && ((int)uVar28 != 3)) &&
           (((uVar28 & 1) != 0 &&
            (((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar21 & 0x18) == 0)
             ))))) {
          Heap_GenerationalBarrierSlow(uVar25,param_2,uVar28 & 0xfffffffffffffffd);
        }
joined_r0x015c0f58:
        param_2 = param_2 + 1;
        if (param_3 <= param_2) goto LAB_015c1474;
        goto LAB_015c0a9c;
      case 0x10:
        param_2 = (ulong *)ReadDataCase<v8::internal::FullMaybeObjectSlot,(v8::internal::SerializerDeserializer::Bytecode)16,(v8::internal::SnapshotSpace)0>
                                     (this,lVar26,param_2,param_5,0x10,bVar10);
        break;
      case 0x11:
        DVar4 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        bVar8 = *(byte *)(lVar17 + lVar20);
        uVar5 = *(undefined1 *)(lVar22 + lVar17 + 2);
        uVar6 = *(undefined1 *)(lVar22 + lVar17 + 3);
        lVar20 = ((ulong)bVar8 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar20 + iVar15;
        uVar28 = *(ulong *)(lVar26 + (ulong)(ushort)(((uint)(0xffffffffL >>
                                                            (lVar20 * -8 + 0x20U & 0x3f)) &
                                                     (uint)CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) >>
                                                    2) * 8 + 0x80);
        uVar19 = *(ulong *)((uVar28 & 0xfffffffffffc0000) + 8);
        *(ulong *)(this + (long)*(int *)(this + 0x48) * 8 + 8) = uVar28;
        if (DVar4 != (Deserializer)0x0) {
          uVar28 = uVar28 | 2;
        }
        *(uint *)(this + 0x48) = *(int *)(this + 0x48) + 1U & 7;
        *param_2 = uVar28;
        if (((((uVar19 & 0x18) != 0 && (bVar12 && bVar13)) && ((int)uVar28 != 3)) &&
            ((uVar28 & 1) != 0)) &&
           (((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar21 & 0x18) == 0))
           )) {
          Heap_GenerationalBarrierSlow(uVar25,param_2,uVar28 & 0xfffffffffffffffd);
        }
        param_2 = param_2 + 1;
        break;
      case 0x12:
        DVar4 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        lVar22 = lVar22 + lVar17;
        bVar8 = *(byte *)(lVar17 + lVar20);
        uVar5 = *(undefined1 *)(lVar22 + 2);
        uVar6 = *(undefined1 *)(lVar22 + 3);
        uVar7 = *(undefined1 *)(lVar22 + 4);
        lVar20 = ((ulong)bVar8 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar20 + iVar15;
        uVar28 = **(ulong **)
                   (*(long *)(this + 0x58) +
                   ((ulong)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) &
                    0xffffffffUL >> (lVar20 * -8 + 0x20U & 0x3f) & 0x7ffffffffffffffc) * 2);
        uVar19 = *(ulong *)((uVar28 & 0xfffffffffffc0000) + 8);
        if (DVar4 != (Deserializer)0x0) {
          uVar28 = uVar28 | 2;
        }
        *param_2 = uVar28;
        if ((((uVar19 & 0x18) != 0 && (bVar12 && bVar13)) && ((int)uVar28 != 3)) &&
           (((uVar28 & 1) != 0 &&
            (((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar21 & 0x18) == 0)
             ))))) {
          Heap_GenerationalBarrierSlow(uVar25,param_2,uVar28 & 0xfffffffffffffffd);
        }
        goto joined_r0x015c1298;
      case 0x13:
        DVar4 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        lVar22 = lVar22 + lVar17;
        bVar8 = *(byte *)(lVar17 + lVar20);
        uVar5 = *(undefined1 *)(lVar22 + 2);
        uVar6 = *(undefined1 *)(lVar22 + 3);
        uVar7 = *(undefined1 *)(lVar22 + 4);
        lVar20 = ((ulong)bVar8 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar20 + iVar15;
        uVar28 = ReadOnlyHeap::cached_read_only_object
                           (*(ReadOnlyHeap **)(lVar26 + 0x9478),
                            ((ulong)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) &
                            0xffffffffUL >> (lVar20 * -8 + 0x20U & 0x3f)) >> 2);
        if (DVar4 != (Deserializer)0x0) {
          uVar28 = uVar28 | 2;
        }
        *param_2 = uVar28;
joined_r0x015c1298:
        param_2 = param_2 + 1;
        break;
      case 0x15:
        *(int *)(this + 0x7c) = iVar16 + 2;
        DeserializerAllocator::MoveToNextChunk
                  ((DeserializerAllocator *)(this + 0x148),*(undefined1 *)(lVar17 + lVar20));
        break;
      case 0x16:
        if (*(short *)((uVar25 & 0xffffffff00000000 | 7) + (ulong)*param_5) != 0xa2) {
          return false;
        }
        *(undefined2 *)(param_5 + 2) = 0xa0;
        return false;
      case 0x17:
      case 0x18:
      case 0x19:
        *(uint *)(this + 0x208) = bVar8 - 0x16;
        break;
      case 0x1a:
      case 0x22:
      case 0x25:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 0x1b:
        bVar8 = *(byte *)(lVar17 + lVar20);
        lVar22 = lVar22 + lVar17;
        uVar5 = *(undefined1 *)(lVar22 + 2);
        uVar6 = *(undefined1 *)(lVar22 + 3);
        uVar7 = *(undefined1 *)(lVar22 + 4);
        lVar20 = ((ulong)bVar8 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar20 + iVar15;
        local_78 = (undefined8 *)0x0;
        bVar14 = ReadData<v8::internal::FullMaybeObjectSlot>(this,&local_78,&local_70,1,0);
        if (!bVar14) {
LAB_015c1578:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","filled");
        }
        uVar18 = ((ulong)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) &
                 0xffffffffUL >> (lVar20 * -8 + 0x20U & 0x3f)) >> 2;
        uVar28 = uVar18 + 0x12;
        uVar24 = uVar28 & 0x7ffffffe;
        puVar23 = param_2 + uVar24;
        uVar19 = uVar24;
        do {
          *param_2 = (ulong)local_78;
          param_2[1] = (ulong)local_78;
          uVar19 = uVar19 - 2;
          param_2 = param_2 + 2;
        } while (uVar19 != 0);
        param_2 = puVar23;
        if (uVar24 != uVar28) {
          iVar16 = ((int)uVar18 - (int)uVar24) + 0x12;
          do {
            iVar16 = iVar16 + -1;
            param_2 = puVar23 + 1;
            *puVar23 = (ulong)local_78;
            puVar23 = param_2;
          } while (iVar16 != 0);
          goto switchD_015c0ac4_caseD_6;
        }
        break;
      case 0x1c:
        bVar8 = *(byte *)(lVar17 + lVar20);
        lVar22 = lVar22 + lVar17;
        uVar5 = *(undefined1 *)(lVar22 + 2);
        uVar6 = *(undefined1 *)(lVar22 + 3);
        uVar7 = *(undefined1 *)(lVar22 + 4);
        lVar20 = ((ulong)bVar8 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar20 + iVar15;
        uVar28 = ((ulong)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) &
                 0xffffffffUL >> (lVar20 * -8 + 0x20U & 0x3f)) >> 2;
        BackingStore::Allocate((BackingStore *)&local_68,lVar26,uVar28,0,0);
        if (local_68 == (BackingStore *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(backing_store) != nullptr");
        }
        memcpy(*(void **)local_68,(void *)(*(long *)(this + 0x70) + (long)*(int *)(this + 0x7c)),
               uVar28);
        pBVar11 = local_68;
        *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + (int)uVar28;
        local_78 = (undefined8 *)local_68;
        if (local_68 == (BackingStore *)0x0) {
          local_70 = (__shared_weak_count *)0x0;
        }
        else {
          local_70 = operator_new(0x20);
          *(undefined8 *)(local_70 + 0x10) = 0;
          *(BackingStore **)(local_70 + 0x18) = pBVar11;
          *(undefined ***)local_70 = &PTR____shared_weak_count_01c98518;
          *(undefined8 *)(local_70 + 8) = 0;
        }
        local_68 = (BackingStore *)0x0;
        puVar23 = *(ulong **)(this + 0x138);
        if (puVar23 < *(ulong **)(this + 0x140)) {
          *puVar23 = (ulong)pBVar11;
          puVar23[1] = (ulong)local_70;
          local_78 = (undefined8 *)0x0;
          local_70 = (__shared_weak_count *)0x0;
          *(long *)(this + 0x138) = *(long *)(this + 0x138) + 0x10;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
          ::__push_back_slow_path<std::__ndk1::shared_ptr<v8::internal::BackingStore>>
                    ((vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
                      *)(this + 0x130),(shared_ptr *)&local_78);
          this_00 = local_70;
          if (local_70 != (__shared_weak_count *)0x0) {
            p_Var3 = local_70 + 8;
            do {
              lVar20 = *(long *)p_Var3;
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
              if (bVar14) {
                *(long *)p_Var3 = lVar20 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*(long *)local_70 + 0x10))(local_70);
              std::__ndk1::__shared_weak_count::__release_weak(this_00);
            }
          }
        }
        pBVar11 = local_68;
        local_68 = (BackingStore *)0x0;
        if (pBVar11 == (BackingStore *)0x0) goto switchD_015c0ac4_caseD_6;
        BackingStore::~BackingStore(pBVar11);
        operator_delete(pBVar11);
        break;
      case 0x1e:
        lVar22 = lVar22 + lVar17;
        lVar1 = ((ulong)*(byte *)(lVar17 + lVar20) & 3) + 1;
        lVar26 = lVar1 + iVar15;
        uVar25 = ((ulong)CONCAT13(*(undefined1 *)(lVar22 + 4),
                                  CONCAT12(*(undefined1 *)(lVar22 + 3),
                                           CONCAT11(*(undefined1 *)(lVar22 + 2),
                                                    *(byte *)(lVar17 + lVar20)))) &
                 0xffffffffUL >> (lVar1 * -8 + 0x20U & 0x3f)) >> 2;
        *(int *)(this + 0x7c) = (int)lVar26;
        memcpy(param_5 + 5,(void *)(lVar17 + lVar26),uVar25);
        *(int *)(this + 0x7c) = (int)uVar25 + *(int *)(this + 0x7c);
        ReadCodeObjectBody(this,param_4,param_5);
        if ((ulong *)((long)param_2 + uVar25 + 0x10) == param_3) {
          return true;
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","current == limit");
      case 0x1f:
        lVar22 = lVar22 + lVar17;
        lVar2 = ((ulong)*(byte *)(lVar17 + lVar20) & 3) + 1;
        lVar1 = lVar2 + iVar15;
        uVar28 = ((ulong)CONCAT13(*(undefined1 *)(lVar22 + 4),
                                  CONCAT12(*(undefined1 *)(lVar22 + 3),
                                           CONCAT11(*(undefined1 *)(lVar22 + 2),
                                                    *(byte *)(lVar17 + lVar20)))) &
                 0xffffffffUL >> (lVar2 * -8 + 0x20U & 0x3f)) >> 2;
        *(int *)(this + 0x7c) = (int)lVar1;
        memcpy(param_2,(void *)(lVar17 + lVar1),uVar28);
        *(int *)(this + 0x7c) = (int)uVar28 + *(int *)(this + 0x7c);
        param_2 = (ulong *)((long)param_2 + uVar28);
        break;
      case 0x20:
        bVar8 = *(byte *)(lVar17 + lVar20);
        lVar22 = lVar22 + lVar17;
        uVar5 = *(undefined1 *)(lVar22 + 2);
        uVar6 = *(undefined1 *)(lVar22 + 3);
        lVar20 = ((ulong)bVar8 & 3) + 1;
        uVar7 = *(undefined1 *)(lVar22 + 4);
        *(int *)(this + 0x7c) = (int)lVar20 + iVar15;
        if (*(long *)(lVar26 + 0xb7a8) == 0) {
          *param_2 = (ulong)FUN_015c39bc;
        }
        else {
          *param_2 = *(ulong *)(*(long *)(lVar26 + 0xb7a8) +
                               ((ulong)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) &
                                0xffffffffUL >> (lVar20 * -8 + 0x20U & 0x3f) & 0x7ffffffffffffffc) *
                               2);
        }
        goto joined_r0x015c0f70;
      case 0x21:
        bVar8 = *(byte *)(lVar17 + lVar20);
        lVar22 = lVar22 + lVar17;
        uVar5 = *(undefined1 *)(lVar22 + 2);
        uVar6 = *(undefined1 *)(lVar22 + 3);
        uVar7 = *(undefined1 *)(lVar22 + 4);
        lVar20 = ((ulong)bVar8 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar20 + iVar15;
        *param_2 = *(ulong *)(*(long *)(this + 0x50) +
                              ((ulong)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) &
                               0xffffffffUL >> (lVar20 * -8 + 0x20U & 0x3f) & 0x7ffffffffffffffc) *
                              2 + 0x1010);
        goto joined_r0x015c0f70;
      case 0x23:
        *param_2 = *(ulong *)(this + 0x50) | 3;
joined_r0x015c0f70:
        param_2 = param_2 + 1;
        break;
      case 0x24:
        this[0x20c] = (Deserializer)0x1;
        break;
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
        *param_2 = *(ulong *)(lVar26 + (uVar28 & 0x1f) * 8 + 0x80);
        param_2 = param_2 + 1;
        goto switchD_015c0ac4_caseD_6;
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
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
        __n = (uVar28 - 0x5f) * 4;
        memcpy(param_2,(void *)(lVar17 + iVar15),__n);
        param_2 = param_2 + (uVar28 - 0x5f);
        *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + (int)__n;
        break;
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        local_78 = (undefined8 *)0x0;
        bVar14 = ReadData<v8::internal::FullMaybeObjectSlot>(this,&local_78,&local_70,1,0);
        if (!bVar14) goto LAB_015c1578;
        uVar28 = (ulong)(uVar27 - 0x7f) + 1;
        if (uVar28 < 2) {
          uVar18 = 0;
          puVar23 = param_2;
        }
        else {
          uVar18 = uVar28 & 0x1fffffffe;
          puVar23 = param_2 + uVar18;
          uVar19 = uVar18;
          do {
            *param_2 = (ulong)local_78;
            param_2[1] = (ulong)local_78;
            uVar19 = uVar19 - 2;
            param_2 = param_2 + 2;
          } while (uVar19 != 0);
          param_2 = puVar23;
          if (uVar28 == uVar18) goto switchD_015c0ac4_caseD_6;
        }
        iVar16 = (uVar27 - (int)uVar18) + -0x7e;
        do {
          iVar16 = iVar16 + -1;
          param_2 = puVar23 + 1;
          *puVar23 = (ulong)local_78;
          puVar23 = param_2;
        } while (iVar16 != 0);
switchD_015c0ac4_caseD_6:
        break;
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
        DVar4 = this[0x20c];
        uVar19 = *(ulong *)(this + (uVar28 & 7) * 8 + 8);
        this[0x20c] = (Deserializer)0x0;
        uVar28 = uVar19;
        if (DVar4 != (Deserializer)0x0) {
          uVar28 = uVar19 | 2;
        }
        *param_2 = uVar28;
        if (((((uVar19 & 1) != 0 && (bVar12 && bVar13)) &&
             ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) && ((int)uVar28 != 3)) &&
           ((((uVar28 & 1) != 0 && ((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
            ((*pbVar21 & 0x18) == 0)))) {
          Heap_GenerationalBarrierSlow(uVar25,param_2,uVar28 & 0xfffffffffffffffd);
        }
        param_2 = param_2 + 1;
      }
    } while (param_2 < param_3);
  }
LAB_015c1474:
  if (param_2 == param_3) {
    return true;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","limit == current");
}

