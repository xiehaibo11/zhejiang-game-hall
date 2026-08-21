
/* v8::internal::Scavenger::Process(v8::internal::OneshotBarrier*) */

void __thiscall v8::internal::Scavenger::Process(Scavenger *this,OneshotBarrier *param_1)

{
  Mutex *this_00;
  uint *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  code *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint *puVar17;
  int *piVar18;
  Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256> *this_01;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  undefined **local_e0;
  Scavenger *local_d8;
  undefined **local_d0;
  ulong local_c8;
  uint local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  Scavenger *local_a0;
  undefined1 local_98;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this_00 = (Mutex *)(param_1 + 0x30);
  uVar22 = 0;
  local_e0 = &PTR__ObjectVisitor_01ca92b0;
  local_d8 = this;
LAB_010012e4:
  local_b8 = (undefined **)0x0;
  local_b0 = 0;
  plVar13 = (long *)(*(long *)(this + 0x20) + (long)*(int *)(this + 0x28) * 0x50);
  if (((ulong)(*(long *)(plVar13[0x57] + 8) + *(long *)(*plVar13 + 8)) < 0x80) &&
     (uVar10 = Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Pop
                         (*(Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256> **)
                           (this + 0x30),*(int *)(this + 0x38),(pair *)&local_b8), (uVar10 & 1) != 0
     )) {
    do {
      ppuVar6 = local_b8;
      uVar10 = (ulong)local_b8 & 0xffffffff00000000 | (ulong)*(uint *)((long)local_b8 - 1);
      switch(*(undefined1 *)(uVar10 + 6)) {
      case 0:
      case 1:
      case 3:
        goto joined_r0x01001c94;
      case 2:
        goto joined_r0x01001c94;
      case 4:
      case 5:
        goto joined_r0x01001c94;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 7:
        cVar2 = *(char *)(uVar10 + 3);
        puVar17 = (uint *)((long)local_b8 + 0xf);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        if (cVar2 != '\a') break;
        lVar19 = (long)ppuVar6 + 0x17;
        lVar21 = (long)ppuVar6 + 0x1b;
        goto LAB_01001c78;
      case 9:
        puVar17 = (uint *)((long)local_b8 + 7);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 10:
        puVar1 = (uint *)((long)local_b8 + 0x13);
        for (puVar17 = (uint *)((long)local_b8 + 3); puVar17 < puVar1; puVar17 = puVar17 + 1) {
          if (((*puVar17 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar17 & 0xffffffff00000000 | (ulong)*puVar17 & 0xfffffffffffc0000
                         ) + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar17);
          }
        }
        RelocIterator::RelocIterator((RelocIterator *)&local_a8,ppuVar6,1999);
        ObjectVisitor::VisitRelocInfo((ObjectVisitor *)&local_e0,(RelocIterator *)&local_a8);
        goto joined_r0x01001c94;
      case 0xb:
        lVar19 = (long)local_b8 + 3;
        lVar21 = (long)local_b8 + 7;
LAB_01001c78:
        (*(code *)local_e0[2])(&local_e0,ppuVar6,lVar19,lVar21);
        goto joined_r0x01001c94;
      case 0xc:
        puVar17 = (uint *)((long)local_b8 + 0x13);
        for (puVar1 = (uint *)((long)local_b8 + 0xb); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0xd:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 7);
            puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0xe:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        puVar17 = (uint *)((long)ppuVar6 + 0xb);
        for (puVar1 = (uint *)((long)ppuVar6 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        for (; puVar17 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar17 = puVar17 + 1) {
          uVar4 = *puVar17;
          if (((uVar4 != 3) && ((uVar4 & 1) != 0)) &&
             ((*(byte *)(((ulong)uVar4 & 0xfffc0000 | (ulong)puVar17 & 0xffffffff00000000) + 8) &
              0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar17);
          }
        }
        break;
      case 0xf:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 0xb);
            puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          uVar4 = *puVar1;
          if (((uVar4 != 3) && ((uVar4 & 1) != 0)) &&
             ((*(byte *)(((ulong)uVar4 & 0xfffc0000 | (ulong)puVar1 & 0xffffffff00000000) + 8) &
              0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x10:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        if (8 < iVar9) {
          lVar19 = 0;
          do {
            (*(code *)local_e0[2])
                      (&local_e0,ppuVar6,(long)ppuVar6 + lVar19 + 7,(long)ppuVar6 + lVar19 + 0xb);
            lVar19 = lVar19 + 8;
          } while ((int)lVar19 + 8 < iVar9);
        }
        break;
      case 0x11:
        local_a8 = local_b8;
        lVar21 = *(long *)(local_d8 + 0x40);
        puVar15 = (undefined8 *)(lVar21 + (long)*(int *)(local_d8 + 0x48) * 0x50);
        puVar20 = (undefined8 *)*puVar15;
        lVar19 = puVar20[1];
        if (lVar19 == 0x80) {
          base::Mutex::Lock((Mutex *)(lVar21 + 0x280));
          *puVar20 = *(undefined8 *)(lVar21 + 0x2a8);
          *(undefined8 **)(lVar21 + 0x2a8) = puVar20;
          base::Mutex::Unlock((Mutex *)(lVar21 + 0x280));
          puVar11 = operator_new(0x410);
          memset(puVar11 + 3,0,0x3f8);
          *puVar15 = puVar11;
          puVar11[1] = 1;
        }
        else {
          puVar11 = puVar20 + lVar19;
          puVar20[1] = lVar19 + 1;
        }
        ppuVar7 = local_a8;
        puVar11[2] = ppuVar6;
        if ((int)*(uint *)((long)local_a8 + 0xf) >> 1 != 0) {
          lVar19 = (long)((ulong)*(uint *)((long)local_a8 + 0xf) << 0x20) >> 0x21;
          iVar9 = 0x17;
          do {
            lVar21 = (long)ppuVar7 + (long)iVar9;
            (*(code *)local_e0[2])(&local_e0,ppuVar7,lVar21,lVar21 + 4);
            lVar19 = lVar19 + -1;
            iVar9 = iVar9 + 8;
          } while (lVar19 != 0);
        }
        HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        break;
      case 0x12:
        puVar17 = (uint *)((long)local_b8 + 7);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x13:
        piVar18 = (int *)((long)local_b8 + 0xf);
        iVar9 = *piVar18;
        lVar19 = (long)local_b8 + 7;
        (*(code *)local_e0[2])(&local_e0,local_b8,(long)local_b8 + 3,lVar19);
        (*(code *)local_e0[3])(&local_e0,ppuVar6,lVar19,(long)ppuVar6 + 0xbU);
        (*(code *)local_e0[2])(&local_e0,ppuVar6,(long)ppuVar6 + 0xbU,piVar18);
        for (puVar1 = (uint *)((long)ppuVar6 + 0x1f);
            puVar1 < (uint *)((long)ppuVar6 + (long)(iVar9 * 4 + 0x20) + -1); puVar1 = puVar1 + 1) {
          uVar4 = *puVar1;
          if (((uVar4 != 3) && ((uVar4 & 1) != 0)) &&
             ((*(byte *)(((ulong)uVar4 & 0xfffc0000 | (ulong)puVar1 & 0xffffffff00000000) + 8) &
              0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x14:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 7);
            puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x15:
        break;
      case 0x16:
      case 0x19:
      case 0x1a:
      case 0x1e:
        bVar3 = *(byte *)(uVar10 + 3);
        uVar12 = 4;
        goto LAB_01001384;
      case 0x17:
        puVar17 = (uint *)((long)local_b8 + 0xb);
        iVar9 = (uint)*(byte *)(uVar10 + 3) << 2;
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        uVar12 = 0x20;
        goto LAB_01002194;
      case 0x18:
        puVar17 = (uint *)((long)local_b8 + 0xf);
        iVar9 = (uint)*(byte *)(uVar10 + 3) << 2;
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        uVar12 = 0x28;
        goto LAB_01002194;
      case 0x1b:
        puVar1 = (uint *)((long)local_b8 + (ulong)*(byte *)(uVar10 + 3) * 4 + -1);
        for (puVar17 = (uint *)((long)local_b8 + 3); puVar17 < puVar1; puVar17 = puVar17 + 1) {
          if (((*puVar17 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar17 & 0xffffffff00000000 | (ulong)*puVar17 & 0xfffffffffffc0000
                         ) + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar17);
          }
        }
        break;
      case 0x1c:
        puVar17 = (uint *)((long)local_b8 + 0xf);
        iVar9 = (uint)*(byte *)(uVar10 + 3) << 2;
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        (*(code *)local_e0[2])(&local_e0,ppuVar6,(long)ppuVar6 + 0x2f,(long)ppuVar6 + 0x33);
        uVar12 = 0x34;
        goto LAB_01002194;
      case 0x1d:
        puVar17 = (uint *)((long)local_b8 + 0xb);
        iVar9 = (uint)*(byte *)(uVar10 + 3) << 2;
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        (*(code *)local_e0[4])(&local_e0,ppuVar6,puVar17,(long)ppuVar6 + 0xf);
        uVar12 = 0x10;
LAB_01002194:
        BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::ScavengeVisitor>
                  (uVar10,ppuVar6,uVar12,iVar9,&local_e0);
        goto joined_r0x01001c94;
      case 0x1f:
        puVar17 = (uint *)((long)local_b8 + 0x23);
        for (puVar1 = (uint *)((long)local_b8 + 0xf); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        lVar19 = (long)ppuVar6 + 0x27;
        pcVar14 = (code *)local_e0[3];
        goto LAB_01001c54;
      case 0x20:
        puVar17 = (uint *)((long)local_b8 + 0x417);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        lVar19 = (long)ppuVar6 + 0x423;
        pcVar14 = (code *)local_e0[2];
LAB_01001c54:
        (*pcVar14)(&local_e0,ppuVar6,puVar17,lVar19);
        goto joined_r0x01001c94;
      case 0x21:
        puVar17 = (uint *)((long)local_b8 + 0x1b);
        for (puVar1 = (uint *)((long)local_b8 + 0xb); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x22:
        uVar4 = *(int *)((long)local_b8 + 3) + 0xfU & 0xfffffffc;
        puVar17 = (uint *)((long)local_b8 +
                          (long)(int)(uVar4 + *(int *)((long)local_b8 + 7) * 4) + -1);
        for (puVar1 = (uint *)((long)local_b8 + (long)(int)uVar4 + -1); puVar1 < puVar17;
            puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x23:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 7);
            puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x24:
        puVar17 = (uint *)((long)local_b8 + 0x13);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x25:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 3); puVar1 < (uint *)((long)ppuVar6 + 0x13U);
            puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        puVar1 = (uint *)((long)ppuVar6 + 0x17);
        (*(code *)local_e0[3])(&local_e0,ppuVar6,(uint *)((long)ppuVar6 + 0x13U),puVar1);
        for (; puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x27:
        puVar17 = (uint *)((long)local_b8 + 0x13);
        for (puVar1 = (uint *)((long)local_b8 + 0xb); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x28:
        puVar17 = (uint *)((long)local_b8 + 0x13);
        for (puVar1 = (uint *)((long)local_b8 + 0xb); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x29:
        puVar17 = (uint *)((long)local_b8 + (((ulong)*(byte *)((long)local_b8 + 5) << 4 | 8) - 1));
        for (puVar1 = (uint *)((long)local_b8 + 7); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x2a:
        puVar1 = (uint *)((long)local_b8 + 7);
        puVar17 = puVar1 + (ulong)*(byte *)((long)local_b8 + 5) * 2;
        for (; puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x2b:
        puVar1 = (uint *)((long)local_b8 + 0xb);
        puVar17 = puVar1 + (ulong)*(byte *)((long)local_b8 + 9) * 6;
        for (; puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x2c:
        puVar17 = (uint *)((long)local_b8 + 0x17);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        for (; puVar17 < (uint *)((long)ppuVar6 + 0x47U); puVar17 = puVar17 + 1) {
          if (((*puVar17 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar17 & 0xffffffff00000000 | (ulong)*puVar17 & 0xfffffffffffc0000
                         ) + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar17);
          }
        }
        break;
      case 0x2d:
        puVar1 = (uint *)((long)local_b8 + (ulong)*(byte *)(uVar10 + 3) * 4 + -1);
        for (puVar17 = (uint *)((long)local_b8 + 3); puVar17 < puVar1; puVar17 = puVar17 + 1) {
          if (((*puVar17 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar17 & 0xffffffff00000000 | (ulong)*puVar17 & 0xfffffffffffc0000
                         ) + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar17);
          }
        }
        break;
      case 0x2e:
        puVar17 = (uint *)((long)local_b8 + 0xf);
        for (puVar1 = (uint *)((long)local_b8 + 0xb); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x2f:
        puVar17 = (uint *)((long)local_b8 + 0x17);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        for (puVar1 = (uint *)((long)ppuVar6 + 0x1b); puVar1 < (uint *)((long)ppuVar6 + 0x23U);
            puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x30:
        puVar17 = (uint *)((long)local_b8 + 0xf);
        for (puVar1 = (uint *)((long)local_b8 + 0xb); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x31:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 3);
            puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          uVar4 = *puVar1;
          if (((uVar4 != 3) && ((uVar4 & 1) != 0)) &&
             ((*(byte *)(((ulong)uVar4 & 0xfffc0000 | (ulong)puVar1 & 0xffffffff00000000) + 8) &
              0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x32:
        puVar17 = (uint *)((long)local_b8 + 7);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x33:
        puVar17 = (uint *)((long)local_b8 + 7);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        for (puVar1 = (uint *)((long)ppuVar6 + 0xf); puVar1 < (uint *)((long)ppuVar6 + 0x13U);
            puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x34:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 0xb);
            puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x35:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 0x17);
            puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        break;
      case 0x36:
        bVar3 = *(byte *)(uVar10 + 3);
        puVar17 = (uint *)((long)local_b8 + 0xb);
        for (puVar1 = (uint *)((long)local_b8 + 3); puVar1 < puVar17; puVar1 = puVar1 + 1) {
          if (((*puVar1 & 1) != 0) &&
             ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000)
                        + 8) & 0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
        lVar19 = 0;
        do {
          lVar21 = (long)ppuVar6 +
                   ((ulong)*(ushort *)((long)&WasmInstanceObject::kTaggedFieldOffsets + lVar19) - 1)
          ;
          (*(code *)local_e0[2])(&local_e0,ppuVar6,lVar21,lVar21 + 4);
          lVar19 = lVar19 + 2;
        } while (lVar19 != 0x1e);
        uVar12 = 0xc4;
LAB_01001384:
        BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::ScavengeVisitor>
                  (uVar10,ppuVar6,uVar12,(uint)bVar3 << 2,&local_e0);
        goto joined_r0x01001c94;
      case 0x37:
        local_a8 = local_b8;
        iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_a8,uVar10);
        for (puVar1 = (uint *)((long)ppuVar6 + 3);
            puVar1 < (uint *)((long)ppuVar6 + (long)iVar9 + -1); puVar1 = puVar1 + 1) {
          uVar4 = *puVar1;
          if (((uVar4 != 3) && ((uVar4 & 1) != 0)) &&
             ((*(byte *)(((ulong)uVar4 & 0xfffc0000 | (ulong)puVar1 & 0xffffffff00000000) + 8) &
              0x18) != 0)) {
            ScavengeObject<v8::internal::CompressedHeapObjectSlot>(local_d8,puVar1);
          }
        }
      }
joined_r0x01001c94:
      if (((param_1 != (OneshotBarrier *)0x0) && (uVar22 = uVar22 + 1, (uVar22 & 0x7f) == 0)) &&
         (*(long *)(*(long *)(this + 0x30) + 0x2a8) != 0)) {
        base::Mutex::Lock(this_00);
        if (0 < *(int *)(param_1 + 100)) {
          base::ConditionVariable::NotifyAll((ConditionVariable *)param_1);
        }
        base::Mutex::Unlock(this_00);
      }
      plVar13 = (long *)(*(long *)(this + 0x20) + (long)*(int *)(this + 0x28) * 0x50);
    } while (((ulong)(*(long *)(plVar13[0x57] + 8) + *(long *)(*plVar13 + 8)) < 0x80) &&
            (uVar10 = Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Pop
                                (*(Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256> **)
                                  (this + 0x30),*(int *)(this + 0x38),(pair *)&local_b8),
            (uVar10 & 1) != 0));
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  local_d0 = (undefined **)0x0;
  local_c8 = 0;
LAB_010026bc:
  this_01 = *(Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256> **)(this + 0x20);
  iVar9 = *(int *)(this + 0x28);
  local_a8 = (undefined **)0x0;
  local_a0 = (Scavenger *)((ulong)local_a0 & 0xffffffff00000000);
  uVar10 = Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Pop
                     (this_01,iVar9,(pair *)&local_a8);
  if ((uVar10 & 1) == 0) {
    uVar10 = Worklist<v8::internal::Scavenger::PromotionListEntry,4>::Pop
                       ((Worklist<v8::internal::Scavenger::PromotionListEntry,4> *)(this_01 + 0x2b8)
                        ,iVar9,(PromotionListEntry *)&local_d0);
    if ((uVar10 & 1) == 0) goto LAB_010012e0;
    uVar10 = (ulong)local_c0;
    local_98 = false;
    if (this[0x2e2] != (Scavenger)0x0) goto LAB_01002730;
  }
  else {
    local_d0 = local_a8;
    local_c0 = (uint)local_a0;
    uVar10 = (ulong)local_a0 & 0xffffffff;
    local_c8 = (ulong)local_a8 & 0xffffffff00000000 | (ulong)*(uint *)((long)local_a8 - 1);
    if (this[0x2e2] == (Scavenger)0x0) {
      local_98 = false;
    }
    else {
LAB_01002730:
      uVar16 = (long)local_d0 - ((ulong)local_d0 & 0xfffffffffffc0000);
      puVar1 = (uint *)(*(long *)(((ulong)local_d0 & 0xfffffffffffc0000) + 0x10) +
                       (uVar16 >> 7 & 0x1ffffff) * 4);
      uVar4 = 1 << (ulong)((uint)(uVar16 >> 2) & 0x1f);
      if ((*puVar1 & uVar4) == 0) {
        local_98 = false;
      }
      else {
        uVar4 = uVar4 << 1;
        bVar8 = uVar4 == 0;
        if (bVar8) {
          uVar4 = 1;
        }
        local_98 = (puVar1[bVar8] & uVar4) != 0;
      }
    }
  }
  local_a8 = &PTR__ObjectVisitor_01ca93a8;
  local_a0 = this;
  BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::IterateAndScavengePromotedObjectsVisitor*>
            (*(undefined2 *)(local_c8 + 7),local_c8,local_d0,uVar10,&local_a8);
  bVar8 = false;
  if (param_1 != (OneshotBarrier *)0x0) {
    uVar22 = uVar22 + 1;
    bVar8 = false;
    if (((uVar22 & 0x7f) == 0) &&
       ((*(long *)(*(long *)(this + 0x20) + 0x2a8) != 0 ||
        (bVar8 = false, *(long *)(*(long *)(this + 0x20) + 0x560) != 0)))) {
      base::Mutex::Lock(this_00);
      if (0 < *(int *)(param_1 + 100)) {
        base::ConditionVariable::NotifyAll((ConditionVariable *)param_1);
      }
      base::Mutex::Unlock(this_00);
      bVar8 = false;
    }
  }
  goto LAB_010026bc;
LAB_010012e0:
  if (bVar8) {
    if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_010012e4;
}

