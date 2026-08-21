
/* v8::internal::NewSpace::Verify(v8::internal::Isolate*) */

void __thiscall v8::internal::NewSpace::Verify(NewSpace *this,Isolate *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  ulong local_38;
  
  puVar11 = *(uint **)(*(long *)(this + 0xf0) + 0x20);
  local_60 = 0;
  local_58 = 0;
  puVar7 = *(uint **)(this + 0x68);
  if (puVar11 != puVar7) {
    do {
      uVar9 = (ulong)(puVar11 + -1) & 0xfffffffffffc0000;
      if (((ulong)puVar11 & 0x3ffff) == 0) {
        puVar11 = *(uint **)(*(long *)(uVar9 + 0xe0) + 0x20);
      }
      else {
        if (((*(uint **)(uVar9 + 0x20) <= puVar7) && (puVar7 <= puVar11)) &&
           (puVar7 <= *(uint **)(uVar9 + 0x28))) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "!Page::FromAllocationAreaAddress(current)->ContainsLimit(top()) || current < top()"
                  );
        }
        local_38 = (long)puVar11 + 1;
        uVar1 = *puVar11;
        uVar9 = local_38 & 0xffffffff00000000;
        uVar10 = uVar9 | uVar1;
        if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","map.IsMap()");
        }
        uVar5 = ReadOnlyHeap::Contains(uVar10);
        if (((uVar5 & 1) == 0) &&
           (((uVar1 & 1) == 0 ||
            (*(long *)(*(long *)(this + 0x40) + 0x100) !=
             *(long *)(uVar9 | (ulong)uVar1 & 0xfffffffffffc0000 | 0x58))))) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "ReadOnlyHeap::Contains(map) || heap()->map_space()->Contains(map)");
        }
        uVar9 = local_38 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar9 + *(uint *)(local_38 - 1)) == 0xa2) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!object.IsMap()");
        }
        if ((*(short *)(uVar9 + *(uint *)(local_38 - 1)) == 0x86) ||
           (*(short *)(uVar9 + *(uint *)(local_38 - 1)) == 0x9a)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!object.IsAbstractCode()");
        }
        Object::ObjectVerify((Object *)&local_38,param_1);
        local_68 = *(undefined8 *)(this + 0x40);
        local_78 = &PTR__VerifyPointersVisitor_01ca7620;
        ppuStack_70 = &PTR__VerifyPointersVisitor_01ca76c8;
        iVar4 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_38,
                           local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 - 1));
        HeapObject::IterateBody((HeapObject *)&local_38,uVar10,iVar4,&local_78);
        uVar9 = local_38;
        uVar10 = local_38 & 0xffffffff00000000 | 7;
        if ((*(ushort *)(uVar10 + *(uint *)(local_38 - 1)) < 0x40) &&
           ((*(ushort *)(uVar10 + *(uint *)(local_38 - 1)) & 7) == 2)) {
          local_80 = local_38;
          iVar3 = ExternalString::ExternalPayloadSize((ExternalString *)&local_80);
          local_58 = local_58 + iVar3;
        }
        else if ((*(short *)(uVar10 + *(uint *)(local_38 - 1)) == 0x424) &&
                (uVar10 = ArrayBufferTracker::IsTracked(local_38), (uVar10 & 1) != 0)) {
          if ((*(uint *)(uVar9 + 0x1b) >> 4 & 1) == 0) {
            lVar8 = *(long *)(uVar9 + 0xb);
          }
          else {
            lVar8 = 0;
          }
          local_60 = local_60 + lVar8;
        }
        puVar7 = *(uint **)(this + 0x68);
        puVar11 = (uint *)((long)puVar11 + (long)iVar4);
      }
    } while (puVar11 != puVar7);
  }
  lVar8 = local_60;
  lVar6 = (**(code **)(*(long *)this + 0x78))(this,0);
  lVar2 = local_58;
  if ((lVar8 != lVar6) || (lVar8 = (**(code **)(*(long *)this + 0x78))(this,1), lVar2 != lVar8)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","external_space_bytes[t] == ExternalBackingStoreBytes(t)");
  }
  if (*(int *)(this + 0x1fc) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","from_space_.id() == kFromSpace");
  }
  if (*(int *)(this + 0x15c) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","to_space_.id() == kToSpace");
  }
  SemiSpace::Verify((SemiSpace *)(this + 0x170));
  SemiSpace::Verify((SemiSpace *)(this + 0xd0));
  return;
}

