
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x017af05c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::compiler::StateValuesCache::GetValuesNodeFromCache(v8::internal::compiler::Node**,
   unsigned long, v8::internal::compiler::SparseInputMask) */

long __thiscall
v8::internal::compiler::StateValuesCache::GetValuesNodeFromCache
          (StateValuesCache *this,Node **param_1,ulong param_2,undefined4 param_4)

{
  Graph *this_00;
  TemplateHashMapEntry *pTVar1;
  Operator *pOVar2;
  long *plVar3;
  uint uVar4;
  Node **ppNVar5;
  Zone *this_01;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *local_70;
  undefined8 local_68;
  ulong uStack_60;
  undefined4 local_58;
  Node **local_50;
  undefined1 auStack_48 [8];
  
  local_68 = 0;
  uVar4 = 0;
  ppNVar5 = param_1;
  uVar6 = param_2;
  uVar7 = param_2;
  if (param_2 != 0) {
    do {
      uVar8 = 0;
      if (*ppNVar5 != (Node *)0x0) {
        uVar8 = (ulong)(*(uint *)(*ppNVar5 + 0x14) & 0xffffff);
      }
      uVar7 = uVar7 * 0x17 + uVar8;
      uVar6 = uVar6 - 1;
      ppNVar5 = ppNVar5 + 1;
    } while (uVar6 != 0);
    uVar4 = (uint)uVar7 & 0x7fffffff;
  }
  local_70 = &local_68;
  uStack_60 = param_2;
  local_58 = param_4;
  local_50 = param_1;
  pTVar1 = base::
           TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::internal::ZoneAllocationPolicy)::_lambda()_1_>
                     ((TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
                       *)this,&local_70,uVar4,auStack_48,*(undefined8 *)**(undefined8 **)this);
  lVar9 = *(long *)(pTVar1 + 8);
  if (lVar9 == 0) {
    this_00 = (Graph *)**(undefined8 **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::StateValues
                       ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],param_2 & 0xffffffff,
                        param_4);
    lVar9 = Graph::NewNode(this_00,pOVar2,(int)param_2,param_1,false);
    this_01 = *(Zone **)**(undefined8 **)this;
    plVar3 = *(long **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)plVar3) < 8) {
      plVar3 = (long *)Zone::NewExpand(this_01,8);
    }
    else {
      *(long **)(this_01 + 0x10) = plVar3 + 1;
    }
    *plVar3 = lVar9;
    *(long **)pTVar1 = plVar3;
    *(long *)(pTVar1 + 8) = lVar9;
  }
  return lVar9;
}

