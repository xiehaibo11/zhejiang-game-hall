
/* v8::internal::compiler::LoadElimination::AbstractMaps::Merge(v8::internal::compiler::LoadElimination::AbstractMaps
   const*, v8::internal::Zone*) const */

AbstractMaps * __thiscall
v8::internal::compiler::LoadElimination::AbstractMaps::Merge
          (AbstractMaps *this,AbstractMaps *param_1,Zone *param_2)

{
  AbstractMaps *pAVar1;
  ulong uVar2;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
  *this_00;
  AbstractMaps *pAVar3;
  long lVar4;
  AbstractMaps *pAVar5;
  ulong uVar6;
  ulong uVar7;
  AbstractMaps *pAVar8;
  Node *local_40;
  ulong uStack_38;
  
  this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
             *)this;
  if ((this != param_1) &&
     ((*(long *)(this + 0x18) != *(long *)(param_1 + 0x18) ||
      (uVar2 = FUN_01770340(*(undefined8 *)this,this + 8,*(undefined8 *)param_1), (uVar2 & 1) == 0))
     )) {
    this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
                **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
                 *)Zone::NewExpand(param_2,0x20);
    }
    else {
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
        **)(param_2 + 0x10) = this_00 + 0x20;
    }
    *(undefined8 *)(this_00 + 8) = 0;
    *(Zone **)(this_00 + 0x10) = param_2;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
      **)this_00 = this_00 + 8;
    if (*(AbstractMaps **)this != this + 8) {
      pAVar1 = param_1 + 8;
      pAVar8 = *(AbstractMaps **)this;
      do {
        uStack_38 = *(ulong *)(pAVar8 + 0x28);
        local_40 = *(Node **)(pAVar8 + 0x20);
        pAVar5 = *(AbstractMaps **)pAVar1;
        pAVar3 = pAVar1;
        if (pAVar5 != (AbstractMaps *)0x0) {
          do {
            if (*(Node **)(pAVar5 + 0x20) >= local_40) {
              pAVar3 = pAVar5;
            }
            pAVar5 = *(AbstractMaps **)(pAVar5 + (ulong)(*(Node **)(pAVar5 + 0x20) < local_40) * 8);
          } while (pAVar5 != (AbstractMaps *)0x0);
          if ((pAVar3 != pAVar1) && (*(Node **)(pAVar3 + 0x20) <= local_40)) {
            uVar2 = *(ulong *)(pAVar3 + 0x28);
            if (uVar2 == uStack_38) {
LAB_0176d478:
              std::__ndk1::
              __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
              ::
              __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::pair<v8::internal::compiler::Node*const,v8::internal::ZoneHandleSet<v8::internal::Map>>const&>
                        (this_00,&local_40,(pair *)&local_40);
            }
            else if (((uStack_38 & 3) == 2) && ((uVar2 & 3) == 2)) {
              lVar4 = *(long *)(uVar2 + 6) - *(long *)(uVar2 - 2);
              uVar6 = lVar4 >> 3;
              if (uVar6 == *(long *)(uStack_38 + 6) - *(long *)(uStack_38 - 2) >> 3) {
                if (lVar4 != 0) {
                  uVar7 = 0;
                  do {
                    if (uVar6 == uVar7) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    if (*(long *)(*(long *)(uVar2 - 2) + uVar7 * 8) !=
                        *(long *)(*(long *)(uStack_38 - 2) + uVar7 * 8)) goto LAB_0176d488;
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < uVar6);
                }
                goto LAB_0176d478;
              }
            }
          }
        }
LAB_0176d488:
        pAVar3 = *(AbstractMaps **)(pAVar8 + 8);
        if (*(AbstractMaps **)(pAVar8 + 8) == (AbstractMaps *)0x0) {
          pAVar3 = pAVar8 + 0x10;
          pAVar5 = *(AbstractMaps **)pAVar3;
          if (*(AbstractMaps **)pAVar5 != pAVar8) {
            do {
              lVar4 = *(long *)pAVar3;
              pAVar3 = (AbstractMaps *)(lVar4 + 0x10);
              pAVar5 = *(AbstractMaps **)pAVar3;
            } while (*(long *)pAVar5 != lVar4);
          }
        }
        else {
          do {
            pAVar5 = pAVar3;
            pAVar3 = *(AbstractMaps **)pAVar5;
          } while (*(AbstractMaps **)pAVar5 != (AbstractMaps *)0x0);
        }
        pAVar8 = pAVar5;
      } while (pAVar5 != this + 8);
    }
  }
  return (AbstractMaps *)this_00;
}

