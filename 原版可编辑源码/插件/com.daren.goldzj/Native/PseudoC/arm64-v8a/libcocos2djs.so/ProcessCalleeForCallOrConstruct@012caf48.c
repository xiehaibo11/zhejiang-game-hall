
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCalleeForCallOrConstruct(v8::internal::Handle<v8::internal::Object>,
   v8::base::Optional<v8::internal::compiler::Hints>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&, v8::internal::SpeculationMode,
   v8::internal::compiler::MissingArgumentsPolicy, v8::internal::compiler::Hints*) */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCalleeForCallOrConstruct
               (undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
               long *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  Zone *this;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 local_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ObjectRef aOStack_d0 [16];
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70 [2];
  
  lStack_a8 = param_1[4];
  if (lStack_a8 == 0) {
    lStack_a8 = ZoneStats::NewEmptyZone((ZoneStats *)param_1[3],(char *)param_1[2]);
    param_1[4] = lStack_a8;
  }
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x438) {
      ObjectRef::ObjectRef(aOStack_d0,*param_1,param_2,0);
      uVar5 = ObjectRef::IsJSBoundFunction(aOStack_d0);
      if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSBoundFunction()");
      }
      JSBoundFunctionRef::Serialize((JSBoundFunctionRef *)aOStack_d0);
      this = (Zone *)param_1[4];
      if (this == (Zone *)0x0) {
        this = (Zone *)ZoneStats::NewEmptyZone((ZoneStats *)param_1[3],(char *)param_1[2]);
        param_1[4] = this;
      }
      local_f8 = ObjectRef::AsJSReceiver(aOStack_d0);
      uVar5 = ObjectRef::IsJSBoundFunction((ObjectRef *)local_f8);
      if ((uVar5 & 1) == 0) {
        puVar11 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
        puVar8 = (undefined8 *)0x0;
        do {
          auVar12 = ObjectRef::AsJSBoundFunction((ObjectRef *)local_f8);
          local_90 = auVar12;
          auVar12 = JSBoundFunctionRef::bound_arguments((JSBoundFunctionRef *)local_90);
          local_80 = auVar12;
          iVar2 = FixedArrayBaseRef::length((FixedArrayBaseRef *)local_80);
          puVar1 = puVar10;
          while (0 < iVar2) {
            iVar2 = iVar2 + -1;
            auVar12 = ObjectRef::AsJSBoundFunction((ObjectRef *)local_f8);
            local_a0 = auVar12;
            auVar12 = JSBoundFunctionRef::bound_arguments((JSBoundFunctionRef *)local_a0);
            local_90 = auVar12;
            auVar12 = FixedArrayRef::get((FixedArrayRef *)local_90,iVar2);
            local_80 = auVar12;
            uVar3 = ObjectRef::object((ObjectRef *)local_80);
            local_70[0] = 0;
            Hints::AddConstant((Hints *)local_70,uVar3,this);
            uVar3 = local_70[0];
            if (puVar11 == puVar8) {
              lVar9 = (long)puVar11 - (long)puVar1 >> 3;
              uVar5 = lVar9 + 1;
              if (uVar5 >> 0x1c != 0) goto LAB_012cb380;
              uVar7 = (long)puVar8 - (long)puVar1 >> 2;
              if (uVar5 <= uVar7) {
                uVar5 = uVar7;
              }
              if (0x7fffffe < (ulong)((long)puVar8 - (long)puVar1 >> 3)) {
                uVar5 = 0xfffffff;
              }
              if (uVar5 == 0) {
                lVar4 = 0;
              }
              else {
                lVar4 = *(long *)(this + 0x10);
                uVar7 = uVar5 * 8;
                if (uVar7 < (ulong)(*(long *)(this + 0x18) - lVar4) ||
                    uVar7 - (*(long *)(this + 0x18) - lVar4) == 0) {
                  *(ulong *)(this + 0x10) = lVar4 + uVar7;
                }
                else {
                  lVar4 = Zone::NewExpand(this,uVar7);
                }
              }
              puVar10 = (undefined8 *)(lVar4 + lVar9 * 8);
              puVar8 = (undefined8 *)(lVar4 + uVar5 * 8);
              *puVar10 = uVar3;
              puVar6 = puVar10;
              while (puVar11 != puVar1) {
                puVar11 = puVar11 + -1;
                puVar6 = puVar6 + -1;
                *puVar6 = *puVar11;
              }
            }
            else {
              *puVar11 = local_70[0];
              puVar10 = puVar11;
              puVar6 = puVar1;
            }
            puVar11 = puVar10 + 1;
            puVar1 = puVar6;
          }
          auVar12 = ObjectRef::AsJSBoundFunction((ObjectRef *)local_f8);
          local_90 = auVar12;
          auVar12 = JSBoundFunctionRef::bound_this((JSBoundFunctionRef *)local_90);
          local_80 = auVar12;
          uVar3 = ObjectRef::object((ObjectRef *)local_80);
          local_a0._0_8_ = 0;
          Hints::AddConstant((Hints *)local_a0,uVar3,this);
          uVar3 = local_a0._0_8_;
          if (puVar11 == puVar8) {
            lVar9 = (long)puVar11 - (long)puVar1 >> 3;
            uVar5 = lVar9 + 1;
            if (uVar5 >> 0x1c != 0) {
LAB_012cb380:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar7 = (long)puVar8 - (long)puVar1 >> 2;
            if (uVar5 <= uVar7) {
              uVar5 = uVar7;
            }
            if (0x7fffffe < (ulong)((long)puVar8 - (long)puVar1 >> 3)) {
              uVar5 = 0xfffffff;
            }
            if (uVar5 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = *(long *)(this + 0x10);
              uVar7 = uVar5 * 8;
              if (uVar7 < (ulong)(*(long *)(this + 0x18) - lVar4) ||
                  uVar7 - (*(long *)(this + 0x18) - lVar4) == 0) {
                *(ulong *)(this + 0x10) = lVar4 + uVar7;
              }
              else {
                lVar4 = Zone::NewExpand(this,uVar7);
              }
            }
            puVar6 = (undefined8 *)(lVar4 + lVar9 * 8);
            puVar8 = (undefined8 *)(lVar4 + uVar5 * 8);
            *puVar6 = uVar3;
            puVar10 = puVar6;
            while (puVar11 != puVar1) {
              puVar11 = puVar11 + -1;
              puVar10 = puVar10 + -1;
              *puVar10 = *puVar11;
            }
          }
          else {
            *puVar11 = local_a0._0_8_;
            puVar6 = puVar11;
            puVar10 = puVar1;
          }
          puVar11 = puVar6 + 1;
          auVar12 = ObjectRef::AsJSBoundFunction((ObjectRef *)local_f8);
          local_80 = auVar12;
          auVar12 = JSBoundFunctionRef::bound_target_function((JSBoundFunctionRef *)local_80);
          local_f8 = auVar12;
          uVar5 = ObjectRef::IsJSBoundFunction((ObjectRef *)local_f8);
        } while ((uVar5 & 1) != 0);
      }
      std::__ndk1::
      vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
      ::
      insert<std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints*>>>
                (&local_c0,local_b8,puVar11,puVar11,puVar10,puVar10);
      std::__ndk1::
      vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
      ::insert<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints_const*>>
                ((vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
                  *)&local_c0,local_b8,*param_5,param_5[1]);
      param_2 = (ulong *)JSReceiverRef::object((JSReceiverRef *)local_f8);
      uVar5 = *param_2;
      if ((uVar5 & 1) == 0) {
        return;
      }
      param_5 = &local_c0;
    }
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439) {
      ObjectRef::ObjectRef((ObjectRef *)local_80,*param_1,param_2,0);
      uVar5 = ObjectRef::IsJSFunction((ObjectRef *)local_80);
      if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSFunction()");
      }
      JSFunctionRef::Serialize((JSFunctionRef *)local_80);
      uVar3 = JSFunctionRef::object((JSFunctionRef *)local_80);
      uStack_e8 = 0;
      local_f8._8_8_ = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      local_f8._0_8_ = uVar3;
      ProcessCalleeForCallOrConstruct
                (param_1,local_f8,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  return;
}

