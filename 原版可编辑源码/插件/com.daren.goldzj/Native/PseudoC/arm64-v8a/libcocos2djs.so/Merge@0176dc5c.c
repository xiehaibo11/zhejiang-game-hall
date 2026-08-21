
/* v8::internal::compiler::LoadElimination::AbstractField::Merge(v8::internal::compiler::LoadElimination::AbstractField
   const*, v8::internal::Zone*) const */

AbstractField * __thiscall
v8::internal::compiler::LoadElimination::AbstractField::Merge
          (AbstractField *this,AbstractField *param_1,Zone *param_2)

{
  ulong uVar1;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *this_00;
  AbstractField *pAVar2;
  long *plVar3;
  AbstractField *pAVar4;
  long *plVar5;
  long lVar6;
  Node *pNVar7;
  uint uVar8;
  AbstractField *pAVar9;
  AbstractField *pAVar10;
  long *plVar11;
  AbstractField AStack_88;
  undefined8 uStack_78;
  Node *local_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  
  this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
             *)this;
  if (this != param_1) {
    if (*(long *)(this + 0x18) == *(long *)(param_1 + 0x18)) {
      if (*(AbstractField **)this != this + 8) {
        pAVar10 = *(AbstractField **)this;
        plVar11 = *(long **)param_1;
        do {
          if ((((*(long *)(pAVar10 + 0x20) != plVar11[4]) ||
               (*(long *)(pAVar10 + 0x28) != plVar11[5])) ||
              (pAVar10[0x30] != *(AbstractField *)(plVar11 + 6))) ||
             ((*(long *)(pAVar10 + 0x38) != plVar11[7] ||
              (uVar1 = compiler::operator==
                                 ((ConstFieldInfo *)(pAVar10 + 0x40),(ConstFieldInfo *)(plVar11 + 8)
                                 ), (uVar1 & 1) == 0)))) goto LAB_0176dda4;
          pAVar2 = *(AbstractField **)(pAVar10 + 8);
          if (*(AbstractField **)(pAVar10 + 8) == (AbstractField *)0x0) {
            pAVar2 = pAVar10 + 0x10;
            pAVar4 = *(AbstractField **)pAVar2;
            if (*(AbstractField **)pAVar4 != pAVar10) {
              do {
                lVar6 = *(long *)pAVar2;
                pAVar2 = (AbstractField *)(lVar6 + 0x10);
                pAVar4 = *(AbstractField **)pAVar2;
              } while (*(long *)pAVar4 != lVar6);
              goto LAB_0176dd50;
            }
            plVar3 = (long *)plVar11[1];
            if ((long *)plVar11[1] != (long *)0x0) goto LAB_0176dd58;
LAB_0176dd74:
            plVar3 = plVar11 + 2;
            plVar5 = (long *)*plVar3;
            if ((long *)*plVar5 != plVar11) {
              do {
                lVar6 = *plVar3;
                plVar3 = (long *)(lVar6 + 0x10);
                plVar5 = (long *)*plVar3;
              } while (*plVar5 != lVar6);
            }
          }
          else {
            do {
              pAVar4 = pAVar2;
              pAVar2 = *(AbstractField **)pAVar4;
            } while (*(AbstractField **)pAVar4 != (AbstractField *)0x0);
LAB_0176dd50:
            plVar3 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) goto LAB_0176dd74;
LAB_0176dd58:
            do {
              plVar5 = plVar3;
              plVar3 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
          pAVar10 = pAVar4;
          plVar11 = plVar5;
        } while (pAVar4 != this + 8);
      }
    }
    else {
LAB_0176dda4:
      this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                  **)(param_2 + 0x10);
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)this_00) < 0x20) {
        this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                   *)Zone::NewExpand(param_2,0x20);
      }
      else {
        *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
          **)(param_2 + 0x10) = this_00 + 0x20;
      }
      *(undefined8 *)(this_00 + 8) = 0;
      *(Zone **)(this_00 + 0x10) = param_2;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
        **)this_00 = this_00 + 8;
      if (*(AbstractField **)this != this + 8) {
        pAVar10 = param_1 + 8;
        pAVar2 = *(AbstractField **)this;
        do {
          lStack_68 = *(long *)(pAVar2 + 0x28);
          local_70 = *(Node **)(pAVar2 + 0x20);
          lStack_58 = *(long *)(pAVar2 + 0x38);
          uStack_60 = *(undefined8 *)(pAVar2 + 0x30);
          uStack_78 = *(undefined8 *)(pAVar2 + 0x40);
          uVar8 = (byte)local_70[0x17] & 0xf;
          pNVar7 = local_70 + 0x20;
          if (uVar8 == 0xf) {
            uVar8 = *(uint *)(*(long *)pNVar7 + 8);
            pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
          }
          if ((((int)uVar8 < 1) || (*(long *)pNVar7 != 0)) &&
             (pAVar9 = *(AbstractField **)pAVar10, pAVar4 = pAVar10, pAVar9 != (AbstractField *)0x0)
             ) {
            do {
              if (*(Node **)(pAVar9 + 0x20) >= local_70) {
                pAVar4 = pAVar9;
              }
              pAVar9 = *(AbstractField **)
                        (pAVar9 + (ulong)(*(Node **)(pAVar9 + 0x20) < local_70) * 8);
            } while (pAVar9 != (AbstractField *)0x0);
            if (((((pAVar4 != pAVar10) && (*(Node **)(pAVar4 + 0x20) <= local_70)) &&
                 (*(long *)(pAVar4 + 0x28) == lStack_68)) &&
                ((AStack_88 = SUB81(uStack_60,0), pAVar4[0x30] == AStack_88 &&
                 (*(long *)(pAVar4 + 0x38) == lStack_58)))) &&
               (local_50 = uStack_78,
               uVar1 = compiler::operator==
                                 ((ConstFieldInfo *)(pAVar4 + 0x40),(ConstFieldInfo *)&uStack_78),
               (uVar1 & 1) != 0)) {
              std::__ndk1::
              __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
              ::
              __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::pair<v8::internal::compiler::Node*const,v8::internal::compiler::LoadElimination::FieldInfo>const&>
                        (this_00,&local_70,(pair *)&local_70);
            }
          }
          pAVar4 = *(AbstractField **)(pAVar2 + 8);
          if (*(AbstractField **)(pAVar2 + 8) == (AbstractField *)0x0) {
            pAVar4 = pAVar2 + 0x10;
            pAVar9 = *(AbstractField **)pAVar4;
            if (*(AbstractField **)pAVar9 != pAVar2) {
              do {
                lVar6 = *(long *)pAVar4;
                pAVar4 = (AbstractField *)(lVar6 + 0x10);
                pAVar9 = *(AbstractField **)pAVar4;
              } while (*(long *)pAVar9 != lVar6);
            }
          }
          else {
            do {
              pAVar9 = pAVar4;
              pAVar4 = *(AbstractField **)pAVar9;
            } while (*(AbstractField **)pAVar9 != (AbstractField *)0x0);
          }
          pAVar2 = pAVar9;
        } while (pAVar9 != this + 8);
      }
    }
  }
  return (AbstractField *)this_00;
}

