
/* v8::internal::compiler::LiveRangeBundle::TryMerge(v8::internal::compiler::LiveRangeBundle*, bool)
    */

undefined8 __thiscall
v8::internal::compiler::LiveRangeBundle::TryMerge
          (LiveRangeBundle *this,LiveRangeBundle *param_1,bool param_2)

{
  bool bVar1;
  LiveRangeBundle *pLVar2;
  LiveRangeBundle *pLVar3;
  long lVar4;
  LiveRangeBundle *pLVar5;
  LiveRangeBundle *pLVar6;
  undefined8 *puVar7;
  undefined8 local_48;
  
  if (param_1 != this) {
    pLVar5 = *(LiveRangeBundle **)(param_1 + 0x20);
    if (pLVar5 != param_1 + 0x28) {
      pLVar6 = *(LiveRangeBundle **)(this + 0x20);
      do {
        if (pLVar6 == this + 0x28) break;
        if (*(int *)(pLVar5 + 0x20) < (int)*(uint *)(pLVar6 + 0x1c)) {
          pLVar2 = *(LiveRangeBundle **)(pLVar5 + 8);
          if (*(LiveRangeBundle **)(pLVar5 + 8) == (LiveRangeBundle *)0x0) {
            pLVar2 = pLVar5 + 0x10;
            bVar1 = *(LiveRangeBundle **)*(LiveRangeBundle **)pLVar2 != pLVar5;
            pLVar5 = *(LiveRangeBundle **)pLVar2;
            if (bVar1) {
              do {
                lVar4 = *(long *)pLVar2;
                pLVar2 = (LiveRangeBundle *)(lVar4 + 0x10);
                pLVar5 = *(LiveRangeBundle **)pLVar2;
              } while (*(long *)pLVar5 != lVar4);
            }
          }
          else {
            do {
              pLVar5 = pLVar2;
              pLVar2 = *(LiveRangeBundle **)pLVar5;
            } while (*(LiveRangeBundle **)pLVar5 != (LiveRangeBundle *)0x0);
          }
        }
        else {
          if (*(int *)(pLVar5 + 0x1c) <= (int)*(uint *)(pLVar6 + 0x20)) {
            if (param_2) {
              PrintF("No merge %d:%d %d:%d\n",(ulong)*(uint *)(pLVar6 + 0x1c),
                     (ulong)*(uint *)(pLVar6 + 0x20));
            }
            return 0;
          }
          pLVar2 = *(LiveRangeBundle **)(pLVar6 + 8);
          if (*(LiveRangeBundle **)(pLVar6 + 8) == (LiveRangeBundle *)0x0) {
            pLVar2 = pLVar6 + 0x10;
            bVar1 = *(LiveRangeBundle **)*(LiveRangeBundle **)pLVar2 != pLVar6;
            pLVar6 = *(LiveRangeBundle **)pLVar2;
            if (bVar1) {
              do {
                lVar4 = *(long *)pLVar2;
                pLVar2 = (LiveRangeBundle *)(lVar4 + 0x10);
                pLVar6 = *(LiveRangeBundle **)pLVar2;
              } while (*(long *)pLVar6 != lVar4);
            }
          }
          else {
            do {
              pLVar6 = pLVar2;
              pLVar2 = *(LiveRangeBundle **)pLVar6;
            } while (*(LiveRangeBundle **)pLVar6 != (LiveRangeBundle *)0x0);
          }
        }
      } while (pLVar5 != param_1 + 0x28);
    }
    pLVar6 = param_1 + 8;
    pLVar5 = *(LiveRangeBundle **)param_1;
    if (pLVar5 != pLVar6) {
      do {
        *(LiveRangeBundle **)(*(long *)(pLVar5 + 0x20) + 0x50) = this;
        for (puVar7 = *(undefined8 **)(*(long *)(pLVar5 + 0x20) + 0x10); puVar7 != (undefined8 *)0x0
            ; puVar7 = (undefined8 *)puVar7[1]) {
          local_48 = *puVar7;
          std::__ndk1::
          __tree<v8::internal::compiler::LiveRangeBundle::Range,v8::internal::compiler::LiveRangeBundle::RangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRangeBundle::Range>>
          ::
          __emplace_unique_key_args<v8::internal::compiler::LiveRangeBundle::Range,v8::internal::compiler::LiveRangeBundle::Range>
                    ((__tree<v8::internal::compiler::LiveRangeBundle::Range,v8::internal::compiler::LiveRangeBundle::RangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRangeBundle::Range>>
                      *)(this + 0x20),(Range *)&local_48,(Range *)&local_48);
        }
        pLVar2 = *(LiveRangeBundle **)(pLVar5 + 8);
        if (*(LiveRangeBundle **)(pLVar5 + 8) == (LiveRangeBundle *)0x0) {
          pLVar2 = pLVar5 + 0x10;
          pLVar3 = *(LiveRangeBundle **)pLVar2;
          if (*(LiveRangeBundle **)pLVar3 != pLVar5) {
            do {
              lVar4 = *(long *)pLVar2;
              pLVar2 = (LiveRangeBundle *)(lVar4 + 0x10);
              pLVar3 = *(LiveRangeBundle **)pLVar2;
            } while (*(long *)pLVar3 != lVar4);
          }
        }
        else {
          do {
            pLVar3 = pLVar2;
            pLVar2 = *(LiveRangeBundle **)pLVar3;
          } while (*(LiveRangeBundle **)pLVar3 != (LiveRangeBundle *)0x0);
        }
        pLVar5 = pLVar3;
      } while (pLVar3 != pLVar6);
      pLVar5 = *(LiveRangeBundle **)param_1;
    }
    if (pLVar5 != pLVar6) {
      do {
        std::__ndk1::
        __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
        ::
        __emplace_hint_unique_key_args<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRange*const&>
                  ((__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                    *)this,this + 8,pLVar5 + 0x20,pLVar5 + 0x20);
        pLVar2 = *(LiveRangeBundle **)(pLVar5 + 8);
        if (*(LiveRangeBundle **)(pLVar5 + 8) == (LiveRangeBundle *)0x0) {
          pLVar2 = pLVar5 + 0x10;
          pLVar3 = *(LiveRangeBundle **)pLVar2;
          if (*(LiveRangeBundle **)pLVar3 != pLVar5) {
            do {
              lVar4 = *(long *)pLVar2;
              pLVar2 = (LiveRangeBundle *)(lVar4 + 0x10);
              pLVar3 = *(LiveRangeBundle **)pLVar2;
            } while (*(long *)pLVar3 != lVar4);
          }
        }
        else {
          do {
            pLVar3 = pLVar2;
            pLVar2 = *(LiveRangeBundle **)pLVar3;
          } while (*(LiveRangeBundle **)pLVar3 != (LiveRangeBundle *)0x0);
        }
        pLVar5 = pLVar3;
      } while (pLVar3 != pLVar6);
    }
    std::__ndk1::
    __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
    ::destroy((__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
               *)param_1,*(__tree_node **)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(LiveRangeBundle **)param_1 = pLVar6;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return 1;
}

