
/* v8::internal::CodeSerializer::SerializeObject(v8::internal::HeapObject) */

void __thiscall v8::internal::CodeSerializer::SerializeObject(CodeSerializer *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  ulong local_a0;
  ulong local_98;
  undefined **local_90;
  CodeSerializer *pCStack_88;
  ulong local_80;
  CodeSerializer *pCStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_98 = param_2;
  uVar4 = Serializer::SerializeHotObject();
  if (((((uVar4 & 1) == 0) &&
       (uVar4 = Serializer::SerializeRoot((Serializer *)this,param_2), (uVar4 & 1) == 0)) &&
      (uVar4 = Serializer::SerializeBackReference((Serializer *)this,param_2), (uVar4 & 1) == 0)) &&
     (uVar4 = SerializeReadOnlyObject(this,param_2), (uVar4 & 1) == 0)) {
    uVar4 = param_2 & 0xffffffff00000000;
    uVar10 = uVar4 | 7;
    if (*(short *)(uVar10 + *(uint *)(param_2 - 1)) == 0x9a) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!obj.IsCode()");
    }
    lVar11 = *(long *)(this + 0x68);
    uVar5 = (**(code **)(*(long *)this + 0x38))(this,param_2);
    if ((uVar5 & 1) == 0) {
      puVar6 = (uint *)(param_2 - 1);
      pCStack_88 = this;
      if (*(short *)(uVar10 + *puVar6) == 0x65) {
        puVar6 = (uint *)(param_2 + 0x13);
        uVar1 = *puVar6;
        uVar10 = *(ulong *)(lVar11 + 0xa0);
        if (((uVar1 != (uint)uVar10) && (uVar1 != *(uint *)(lVar11 + 0xc08))) &&
           (*puVar6 = (uint)uVar10, (uVar10 & 1) != 0)) {
          uVar5 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar5 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_2,puVar6,uVar10);
            uVar5 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar5 & 0x18) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(param_2,puVar6,uVar10);
          }
        }
        puVar9 = (uint *)(param_2 + 0x3b);
        uVar2 = *puVar9;
        uVar10 = *(ulong *)(lVar11 + 0x168);
        *puVar9 = (uint)uVar10;
        if ((uVar10 & 1) != 0) {
          uVar5 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar5 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_2,puVar9,uVar10);
            uVar5 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar5 & 0x18) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(param_2,puVar9,uVar10);
          }
        }
        pCStack_78 = this + 0x50;
        local_80 = local_98;
        local_90 = &PTR__ObjectVisitor_01cbba18;
        local_70 = 0;
        Serializer::ObjectSerializer::Serialize((ObjectSerializer *)&local_90);
        *puVar9 = uVar2;
        if ((uVar2 & 1) != 0) {
          uVar7 = uVar4 | uVar2;
          uVar5 = uVar4 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar5 + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_2,puVar9,uVar7);
            uVar10 = *(ulong *)(uVar5 | 8);
          }
          if (((uVar10 & 0x18) != 0) &&
             ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_2,puVar9,uVar7);
          }
        }
        *puVar6 = uVar1;
        if ((uVar1 & 1) != 0) {
          uVar5 = uVar4 | uVar1;
          uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar4 + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_2,puVar6,uVar5);
            uVar10 = *(ulong *)(uVar4 | 8);
          }
          if (((uVar10 & 0x18) != 0) &&
             ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_2,puVar6,uVar5);
          }
        }
      }
      else if (*(short *)(uVar10 + *puVar6) == 0xa6) {
        puVar6 = (uint *)(param_2 + 0xf);
        uVar5 = uVar4 | *puVar6;
        local_a0 = param_2;
        if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) == 0x5b) {
          uVar7 = uVar4 | *(uint *)(uVar5 + 0x13);
          if (*(short *)(uVar10 + *(uint *)(uVar7 - 1)) == 0x86) {
            SharedFunctionInfo::SetDebugBytecodeArray
                      ((SharedFunctionInfo *)&local_a0,uVar4 | *(uint *)(uVar5 + 0xf));
            puVar6 = (uint *)(local_a0 + 0xf);
          }
          else {
            uVar7 = 0;
          }
          uVar1 = *(uint *)(uVar5 + 0xb);
          *puVar6 = uVar1;
          if ((uVar1 & 1) != 0) {
            uVar8 = uVar4 | uVar1;
            uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
            uVar10 = *(ulong *)(uVar4 + 8);
            lVar11 = local_a0 + 0xf;
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(local_a0,lVar11,uVar8);
              uVar10 = *(ulong *)(uVar4 | 8);
              lVar11 = local_a0 + 0xf;
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((local_a0 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(local_a0,lVar11,uVar8);
            }
          }
        }
        else {
          uVar7 = 0;
          uVar5 = 0;
        }
        pCStack_78 = this + 0x50;
        local_80 = local_98;
        local_90 = &PTR__ObjectVisitor_01cbba18;
        local_70 = 0;
        Serializer::ObjectSerializer::Serialize((ObjectSerializer *)&local_90);
        if ((int)uVar5 != 0) {
          *(int *)(local_a0 + 0xf) = (int)uVar5;
          if ((uVar5 & 1) != 0) {
            uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
            lVar11 = local_a0 + 0xf;
            if (((uint)uVar4 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(local_a0,lVar11,uVar5);
              uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
              lVar11 = local_a0 + 0xf;
            }
            if (((uVar4 & 0x18) != 0) &&
               ((*(byte *)((local_a0 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(local_a0,lVar11,uVar5);
            }
          }
          if ((int)uVar7 != 0) {
            SharedFunctionInfo::SetDebugBytecodeArray((SharedFunctionInfo *)&local_a0,uVar7);
          }
        }
      }
      else {
        if ((FLAG_interpreted_frames_native_stack != '\0') && (*(short *)(uVar10 + *puVar6) == 0x61)
           ) {
          param_2 = uVar4 | *(uint *)(param_2 + 3);
          puVar6 = (uint *)(param_2 - 1);
          local_98 = param_2;
        }
        if (*(short *)((uVar4 | 7) + (ulong)*puVar6) == 0x86) {
          puVar6 = (uint *)(param_2 + 0xf);
          uVar1 = *puVar6;
          if (((uVar1 & 1) == 0) ||
             (((uVar1 != *(uint *)(uVar4 + 0xa0) &&
               (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) != 0x85)) &&
              (uVar1 != *(uint *)(uVar4 + 0x180))))) {
            uVar1 = *(uint *)((uVar4 | uVar1) + 3);
            *puVar6 = uVar1;
            if ((uVar1 & 1) != 0) {
              uVar5 = uVar4 | uVar1;
              uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
              uVar10 = *(ulong *)(uVar4 + 8);
              if (((uint)uVar10 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(param_2,puVar6,uVar5);
                uVar10 = *(ulong *)(uVar4 | 8);
              }
              if (((uVar10 & 0x18) != 0) &&
                 ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(param_2,puVar6,uVar5);
              }
            }
          }
        }
        uVar4 = local_98 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar4 + *(uint *)(local_98 - 1)) == 0xa2) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!obj.IsMap()");
        }
        if ((*(short *)(uVar4 + *(uint *)(local_98 - 1)) == 0xab) ||
           (*(short *)(uVar4 + *(uint *)(local_98 - 1)) == 0xaa)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!obj.IsJSGlobalProxy() && !obj.IsJSGlobalObject()");
        }
        uVar4 = HeapObject::NeedsRehashing((HeapObject *)&local_98);
        if (((uVar4 & 1) != 0) &&
           (uVar4 = HeapObject::CanBeRehashed((HeapObject *)&local_98), (uVar4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","obj.NeedsRehashing() implies obj.CanBeRehashed()");
        }
        uVar4 = local_98 & 0xffffffff00000000 | 7;
        if ((*(short *)(uVar4 + *(uint *)(local_98 - 1)) == 0x439) ||
           (*(ushort *)(uVar4 + *(uint *)(local_98 - 1)) - 0x88 < 10)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!obj.IsJSFunction() && !obj.IsContext()");
        }
        pCStack_78 = this + 0x50;
        local_80 = local_98;
        local_90 = &PTR__ObjectVisitor_01cbba18;
        local_70 = 0;
        Serializer::ObjectSerializer::Serialize((ObjectSerializer *)&local_90);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x28))(this,*(undefined8 *)(lVar11 + 0xa0));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

