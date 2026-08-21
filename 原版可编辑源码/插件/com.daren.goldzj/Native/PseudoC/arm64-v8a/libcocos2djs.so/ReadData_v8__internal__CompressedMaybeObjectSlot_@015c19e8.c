
/* WARNING: Type propagation algorithm not settling */
/* bool 
   v8::internal::Deserializer::ReadData<v8::internal::CompressedMaybeObjectSlot>(v8::internal::CompressedMaybeObjectSlot,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::SnapshotSpace, unsigned long) */

bool __thiscall
v8::internal::Deserializer::ReadData<v8::internal::CompressedMaybeObjectSlot>
          (Deserializer *this,uint *param_2,uint *param_3,uint param_4,uint *param_5)

{
  long lVar1;
  long lVar2;
  __shared_weak_count *p_Var3;
  undefined8 *puVar4;
  Deserializer DVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  __shared_weak_count *this_00;
  BackingStore *pBVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  uint *puVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  size_t __n;
  undefined8 *local_78;
  __shared_weak_count *local_70;
  BackingStore *local_68;
  
  if (param_2 < param_3) {
    bVar11 = (param_4 | 2) != 3 && param_5 != (uint *)0x0;
    bVar13 = (param_4 | 2) != 3;
    lVar28 = *(long *)(this + 0x50);
    bVar14 = param_5 != (uint *)0x0;
    uVar27 = (long)param_5 + 1;
    pbVar23 = (byte *)(uVar27 & 0xfffffffffffc0000 | 8);
LAB_015c1ac0:
    do {
      iVar18 = *(int *)(this + 0x7c);
      lVar24 = (long)iVar18;
      lVar19 = *(long *)(this + 0x70);
      lVar22 = lVar24 + 1;
      iVar17 = (int)lVar22;
      *(int *)(this + 0x7c) = iVar17;
      bVar9 = *(byte *)(lVar19 + lVar24);
      uVar29 = (ulong)bVar9;
      if (0x97 < bVar9) goto switchD_015c1ae8_caseD_6;
      uVar16 = (uint)bVar9;
      switch(uVar29) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
        DVar5 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        uVar29 = ReadObject(this,uVar16);
        if (DVar5 != (Deserializer)0x0) {
          uVar29 = uVar29 | 2;
        }
        *param_2 = (uint)uVar29;
        if ((((uVar16 == 1 && (bVar13 && bVar14)) && ((uint)uVar29 != 3)) && ((uVar29 & 1) != 0)) &&
           (((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar23 & 0x18) == 0))
           )) {
          Heap_GenerationalBarrierSlow(uVar27,param_2,uVar29 & 0xfffffffffffffffd);
        }
        goto joined_r0x015c1f7c;
      case 1:
        DVar5 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        uVar29 = ReadObject(this,1);
        if (DVar5 != (Deserializer)0x0) {
          uVar29 = uVar29 | 2;
        }
        *param_2 = (uint)uVar29;
        if (((bVar11) && ((uint)uVar29 != 3)) &&
           (((uVar29 & 1) != 0 &&
            (((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar23 & 0x18) == 0)
             ))))) {
          Heap_GenerationalBarrierSlow(uVar27,param_2,uVar29 & 0xfffffffffffffffd);
        }
        goto joined_r0x015c1f7c;
      default:
        goto switchD_015c1ae8_caseD_6;
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        DVar5 = this[0x20c];
        uVar16 = bVar9 & 7;
        this[0x20c] = (Deserializer)0x0;
        uVar29 = GetBackReferencedObject(this,uVar16);
        if (DVar5 != (Deserializer)0x0) {
          uVar29 = uVar29 | 2;
        }
        *param_2 = (uint)uVar29;
        if ((((uVar16 == 1 && (bVar13 && bVar14)) && ((uint)uVar29 != 3)) && ((uVar29 & 1) != 0)) &&
           (((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar23 & 0x18) == 0))
           )) {
          Heap_GenerationalBarrierSlow(uVar27,param_2,uVar29 & 0xfffffffffffffffd);
        }
        goto joined_r0x015c1f7c;
      case 9:
        DVar5 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        uVar29 = GetBackReferencedObject(this,1);
        if (DVar5 != (Deserializer)0x0) {
          uVar29 = uVar29 | 2;
        }
        *param_2 = (uint)uVar29;
        if (((bVar11) && ((uint)uVar29 != 3)) &&
           (((uVar29 & 1) != 0 &&
            (((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar23 & 0x18) == 0)
             ))))) {
          Heap_GenerationalBarrierSlow(uVar27,param_2,uVar29 & 0xfffffffffffffffd);
        }
joined_r0x015c1f7c:
        param_2 = param_2 + 1;
        if (param_3 <= param_2) goto LAB_015c2498;
        goto LAB_015c1ac0;
      case 0x10:
        param_2 = (uint *)ReadDataCase<v8::internal::CompressedMaybeObjectSlot,(v8::internal::SerializerDeserializer::Bytecode)16,(v8::internal::SnapshotSpace)0>
                                    (this,lVar28,param_2,param_5,0x10,bVar11);
        break;
      case 0x11:
        DVar5 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        bVar9 = *(byte *)(lVar19 + lVar22);
        uVar6 = *(undefined1 *)(lVar24 + lVar19 + 2);
        uVar7 = *(undefined1 *)(lVar24 + lVar19 + 3);
        lVar22 = ((ulong)bVar9 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar22 + iVar17;
        uVar29 = *(ulong *)(lVar28 + (ulong)(ushort)(((uint)(0xffffffffL >>
                                                            (lVar22 * -8 + 0x20U & 0x3f)) &
                                                     (uint)CONCAT12(uVar7,CONCAT11(uVar6,bVar9))) >>
                                                    2) * 8 + 0x80);
        uVar21 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
        *(ulong *)(this + (long)*(int *)(this + 0x48) * 8 + 8) = uVar29;
        if (DVar5 != (Deserializer)0x0) {
          uVar29 = uVar29 | 2;
        }
        *(uint *)(this + 0x48) = *(int *)(this + 0x48) + 1U & 7;
        *param_2 = (uint)uVar29;
        if (((((uVar21 & 0x18) != 0 && (bVar13 && bVar14)) && ((uint)uVar29 != 3)) &&
            ((uVar29 & 1) != 0)) &&
           (((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar23 & 0x18) == 0))
           )) {
          Heap_GenerationalBarrierSlow(uVar27,param_2,uVar29 & 0xfffffffffffffffd);
        }
        param_2 = param_2 + 1;
        break;
      case 0x12:
        DVar5 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        lVar24 = lVar24 + lVar19;
        bVar9 = *(byte *)(lVar19 + lVar22);
        uVar6 = *(undefined1 *)(lVar24 + 2);
        uVar7 = *(undefined1 *)(lVar24 + 3);
        uVar8 = *(undefined1 *)(lVar24 + 4);
        lVar22 = ((ulong)bVar9 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar22 + iVar17;
        uVar29 = **(ulong **)
                   (*(long *)(this + 0x58) +
                   ((ulong)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,bVar9))) &
                    0xffffffffUL >> (lVar22 * -8 + 0x20U & 0x3f) & 0x7ffffffffffffffc) * 2);
        uVar21 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
        if (DVar5 != (Deserializer)0x0) {
          uVar29 = uVar29 | 2;
        }
        *param_2 = (uint)uVar29;
        if ((((uVar21 & 0x18) != 0 && (bVar13 && bVar14)) && ((uint)uVar29 != 3)) &&
           (((uVar29 & 1) != 0 &&
            (((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) != 0 && ((*pbVar23 & 0x18) == 0)
             ))))) {
          Heap_GenerationalBarrierSlow(uVar27,param_2,uVar29 & 0xfffffffffffffffd);
        }
        goto joined_r0x015c22bc;
      case 0x13:
        DVar5 = this[0x20c];
        this[0x20c] = (Deserializer)0x0;
        lVar24 = lVar24 + lVar19;
        bVar9 = *(byte *)(lVar19 + lVar22);
        uVar6 = *(undefined1 *)(lVar24 + 2);
        uVar7 = *(undefined1 *)(lVar24 + 3);
        uVar8 = *(undefined1 *)(lVar24 + 4);
        lVar22 = ((ulong)bVar9 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar22 + iVar17;
        uVar16 = ReadOnlyHeap::cached_read_only_object
                           (*(ReadOnlyHeap **)(lVar28 + 0x9478),
                            ((ulong)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,bVar9))) &
                            0xffffffffUL >> (lVar22 * -8 + 0x20U & 0x3f)) >> 2);
        if (DVar5 != (Deserializer)0x0) {
          uVar16 = uVar16 | 2;
        }
        *param_2 = uVar16;
joined_r0x015c22bc:
        param_2 = param_2 + 1;
        break;
      case 0x15:
        *(int *)(this + 0x7c) = iVar18 + 2;
        DeserializerAllocator::MoveToNextChunk
                  ((DeserializerAllocator *)(this + 0x148),*(undefined1 *)(lVar19 + lVar22));
        break;
      case 0x16:
        if (*(short *)((uVar27 & 0xffffffff00000000 | 7) + (ulong)*param_5) != 0xa2) {
          return false;
        }
        *(undefined2 *)(param_5 + 2) = 0xa0;
        return false;
      case 0x17:
      case 0x18:
      case 0x19:
        *(uint *)(this + 0x208) = bVar9 - 0x16;
        break;
      case 0x1a:
      case 0x22:
      case 0x25:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 0x1b:
        bVar9 = *(byte *)(lVar19 + lVar22);
        lVar24 = lVar24 + lVar19;
        uVar6 = *(undefined1 *)(lVar24 + 2);
        uVar7 = *(undefined1 *)(lVar24 + 3);
        uVar8 = *(undefined1 *)(lVar24 + 4);
        lVar22 = ((ulong)bVar9 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar22 + iVar17;
        local_78 = (undefined8 *)0x0;
        bVar15 = ReadData<v8::internal::FullMaybeObjectSlot>(this,&local_78,&local_70,1,0);
        if (!bVar15) {
LAB_015c259c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","filled");
        }
        uVar20 = ((ulong)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,bVar9))) &
                 0xffffffffUL >> (lVar22 * -8 + 0x20U & 0x3f)) >> 2;
        uVar29 = uVar20 + 0x12;
        uVar26 = uVar29 & 0x7ffffffe;
        puVar25 = param_2 + uVar26;
        uVar21 = uVar26;
        do {
          *param_2 = (uint)local_78;
          param_2[1] = (uint)local_78;
          uVar21 = uVar21 - 2;
          param_2 = param_2 + 2;
        } while (uVar21 != 0);
        param_2 = puVar25;
        if (uVar26 != uVar29) {
          iVar18 = ((int)uVar20 - (int)uVar26) + 0x12;
          do {
            iVar18 = iVar18 + -1;
            param_2 = puVar25 + 1;
            *puVar25 = (uint)local_78;
            puVar25 = param_2;
          } while (iVar18 != 0);
          goto switchD_015c1ae8_caseD_6;
        }
        break;
      case 0x1c:
        bVar9 = *(byte *)(lVar19 + lVar22);
        lVar24 = lVar24 + lVar19;
        uVar6 = *(undefined1 *)(lVar24 + 2);
        uVar7 = *(undefined1 *)(lVar24 + 3);
        uVar8 = *(undefined1 *)(lVar24 + 4);
        lVar22 = ((ulong)bVar9 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar22 + iVar17;
        uVar29 = ((ulong)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,bVar9))) &
                 0xffffffffUL >> (lVar22 * -8 + 0x20U & 0x3f)) >> 2;
        BackingStore::Allocate((BackingStore *)&local_68,lVar28,uVar29,0,0);
        if (local_68 == (BackingStore *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(backing_store) != nullptr");
        }
        memcpy(*(void **)local_68,(void *)(*(long *)(this + 0x70) + (long)*(int *)(this + 0x7c)),
               uVar29);
        pBVar12 = local_68;
        *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + (int)uVar29;
        local_78 = (undefined8 *)local_68;
        if (local_68 == (BackingStore *)0x0) {
          local_70 = (__shared_weak_count *)0x0;
        }
        else {
          local_70 = operator_new(0x20);
          *(undefined8 *)(local_70 + 0x10) = 0;
          *(BackingStore **)(local_70 + 0x18) = pBVar12;
          *(undefined ***)local_70 = &PTR____shared_weak_count_01c98518;
          *(undefined8 *)(local_70 + 8) = 0;
        }
        local_68 = (BackingStore *)0x0;
        puVar4 = *(undefined8 **)(this + 0x138);
        if (puVar4 < *(undefined8 **)(this + 0x140)) {
          *puVar4 = pBVar12;
          puVar4[1] = local_70;
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
              lVar22 = *(long *)p_Var3;
              cVar10 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
              if (bVar15) {
                *(long *)p_Var3 = lVar22 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*(long *)local_70 + 0x10))(local_70);
              std::__ndk1::__shared_weak_count::__release_weak(this_00);
            }
          }
        }
        pBVar12 = local_68;
        local_68 = (BackingStore *)0x0;
        if (pBVar12 == (BackingStore *)0x0) goto switchD_015c1ae8_caseD_6;
        BackingStore::~BackingStore(pBVar12);
        operator_delete(pBVar12);
        break;
      case 0x1e:
        lVar24 = lVar24 + lVar19;
        lVar1 = ((ulong)*(byte *)(lVar19 + lVar22) & 3) + 1;
        lVar28 = lVar1 + iVar17;
        uVar27 = ((ulong)CONCAT13(*(undefined1 *)(lVar24 + 4),
                                  CONCAT12(*(undefined1 *)(lVar24 + 3),
                                           CONCAT11(*(undefined1 *)(lVar24 + 2),
                                                    *(byte *)(lVar19 + lVar22)))) &
                 0xffffffffUL >> (lVar1 * -8 + 0x20U & 0x3f)) >> 2;
        *(int *)(this + 0x7c) = (int)lVar28;
        memcpy(param_5 + 5,(void *)(lVar19 + lVar28),uVar27);
        *(int *)(this + 0x7c) = (int)uVar27 + *(int *)(this + 0x7c);
        ReadCodeObjectBody(this,param_4,param_5);
        if ((uint *)((long)param_2 + uVar27 + 0x10) == param_3) {
          return true;
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","current == limit");
      case 0x1f:
        lVar24 = lVar24 + lVar19;
        lVar2 = ((ulong)*(byte *)(lVar19 + lVar22) & 3) + 1;
        lVar1 = lVar2 + iVar17;
        uVar29 = ((ulong)CONCAT13(*(undefined1 *)(lVar24 + 4),
                                  CONCAT12(*(undefined1 *)(lVar24 + 3),
                                           CONCAT11(*(undefined1 *)(lVar24 + 2),
                                                    *(byte *)(lVar19 + lVar22)))) &
                 0xffffffffUL >> (lVar2 * -8 + 0x20U & 0x3f)) >> 2;
        *(int *)(this + 0x7c) = (int)lVar1;
        memcpy(param_2,(void *)(lVar19 + lVar1),uVar29);
        *(int *)(this + 0x7c) = (int)uVar29 + *(int *)(this + 0x7c);
        param_2 = (uint *)((long)param_2 + uVar29);
        break;
      case 0x20:
        bVar9 = *(byte *)(lVar19 + lVar22);
        lVar24 = lVar24 + lVar19;
        uVar6 = *(undefined1 *)(lVar24 + 2);
        uVar7 = *(undefined1 *)(lVar24 + 3);
        lVar22 = ((ulong)bVar9 & 3) + 1;
        uVar8 = *(undefined1 *)(lVar24 + 4);
        *(int *)(this + 0x7c) = (int)lVar22 + iVar17;
        if (*(long *)(lVar28 + 0xb7a8) == 0) {
          *(code **)param_2 = FUN_015c39bc;
        }
        else {
          *(undefined8 *)param_2 =
               *(undefined8 *)
                (*(long *)(lVar28 + 0xb7a8) +
                ((ulong)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,bVar9))) &
                 0xffffffffUL >> (lVar22 * -8 + 0x20U & 0x3f) & 0x7ffffffffffffffc) * 2);
        }
        param_2 = param_2 + 2;
        break;
      case 0x21:
        bVar9 = *(byte *)(lVar19 + lVar22);
        lVar24 = lVar24 + lVar19;
        uVar6 = *(undefined1 *)(lVar24 + 2);
        uVar7 = *(undefined1 *)(lVar24 + 3);
        uVar8 = *(undefined1 *)(lVar24 + 4);
        lVar22 = ((ulong)bVar9 & 3) + 1;
        *(int *)(this + 0x7c) = (int)lVar22 + iVar17;
        *(undefined8 *)param_2 =
             *(undefined8 *)
              (*(long *)(this + 0x50) +
               ((ulong)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,bVar9))) &
                0xffffffffUL >> (lVar22 * -8 + 0x20U & 0x3f) & 0x7ffffffffffffffc) * 2 + 0x1010);
        param_2 = param_2 + 2;
        break;
      case 0x23:
        *param_2 = *(uint *)(this + 0x50) | 3;
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
        *param_2 = (uint)*(undefined8 *)(lVar28 + (uVar29 & 0x1f) * 8 + 0x80);
        param_2 = param_2 + 1;
        goto switchD_015c1ae8_caseD_6;
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
        __n = uVar29 * 4 - 0x17c;
        memcpy(param_2,(void *)(lVar19 + iVar17),__n);
        param_2 = param_2 + (uVar29 - 0x5f);
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
        bVar15 = ReadData<v8::internal::FullMaybeObjectSlot>(this,&local_78,&local_70,1,0);
        if (!bVar15) goto LAB_015c259c;
        uVar29 = (ulong)(uVar16 - 0x7f) + 1;
        if (uVar29 < 2) {
          uVar20 = 0;
          puVar25 = param_2;
        }
        else {
          uVar20 = uVar29 & 0x1fffffffe;
          puVar25 = param_2 + uVar20;
          uVar21 = uVar20;
          do {
            *param_2 = (uint)local_78;
            param_2[1] = (uint)local_78;
            uVar21 = uVar21 - 2;
            param_2 = param_2 + 2;
          } while (uVar21 != 0);
          param_2 = puVar25;
          if (uVar29 == uVar20) goto switchD_015c1ae8_caseD_6;
        }
        iVar18 = (uVar16 - (int)uVar20) + -0x7e;
        do {
          iVar18 = iVar18 + -1;
          param_2 = puVar25 + 1;
          *puVar25 = (uint)local_78;
          puVar25 = param_2;
        } while (iVar18 != 0);
switchD_015c1ae8_caseD_6:
        break;
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
        DVar5 = this[0x20c];
        uVar21 = *(ulong *)(this + (uVar29 & 7) * 8 + 8);
        this[0x20c] = (Deserializer)0x0;
        uVar29 = uVar21;
        if (DVar5 != (Deserializer)0x0) {
          uVar29 = uVar21 | 2;
        }
        *param_2 = (uint)uVar29;
        if (((((uVar21 & 1) != 0 && (bVar13 && bVar14)) &&
             ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) && ((uint)uVar29 != 3))
           && ((((uVar29 & 1) != 0 && ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) != 0))
               && ((*pbVar23 & 0x18) == 0)))) {
          Heap_GenerationalBarrierSlow(uVar27,param_2,uVar29 & 0xfffffffffffffffd);
        }
        param_2 = param_2 + 1;
      }
    } while (param_2 < param_3);
  }
LAB_015c2498:
  if (param_2 == param_3) {
    return true;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","limit == current");
}

