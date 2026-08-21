
/* v8::internal::compiler::LiveRangeBundle::TryAddRange(v8::internal::compiler::LiveRange*) */

undefined8 __thiscall
v8::internal::compiler::LiveRangeBundle::TryAddRange(LiveRangeBundle *this,LiveRange *param_1)

{
  bool bVar1;
  int *piVar2;
  LiveRangeBundle *pLVar3;
  LiveRangeBundle *pLVar4;
  long lVar5;
  undefined8 *puVar6;
  LiveRange *local_30;
  undefined8 local_28;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    pLVar3 = *(LiveRangeBundle **)(this + 0x20);
    if (pLVar3 != this + 0x28) {
      do {
        if (*piVar2 < *(int *)(pLVar3 + 0x20)) {
          if (*(int *)(pLVar3 + 0x1c) < piVar2[1]) {
            return 0;
          }
          piVar2 = *(int **)(piVar2 + 2);
        }
        else {
          pLVar4 = *(LiveRangeBundle **)(pLVar3 + 8);
          if (*(LiveRangeBundle **)(pLVar3 + 8) == (LiveRangeBundle *)0x0) {
            pLVar4 = pLVar3 + 0x10;
            bVar1 = *(LiveRangeBundle **)*(LiveRangeBundle **)pLVar4 != pLVar3;
            pLVar3 = *(LiveRangeBundle **)pLVar4;
            if (bVar1) {
              do {
                lVar5 = *(long *)pLVar4;
                pLVar4 = (LiveRangeBundle *)(lVar5 + 0x10);
                pLVar3 = *(LiveRangeBundle **)pLVar4;
              } while (*(long *)pLVar3 != lVar5);
            }
          }
          else {
            do {
              pLVar3 = pLVar4;
              pLVar4 = *(LiveRangeBundle **)pLVar3;
            } while (*(LiveRangeBundle **)pLVar3 != (LiveRangeBundle *)0x0);
          }
        }
      } while ((pLVar3 != this + 0x28) && (piVar2 != (int *)0x0));
    }
  }
  local_30 = param_1;
  std::__ndk1::
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  ::
  __emplace_unique_key_args<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRange*const&>
            ((__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
              *)this,&local_30,&local_30);
  puVar6 = *(undefined8 **)(local_30 + 0x10);
  *(LiveRangeBundle **)(local_30 + 0x50) = this;
  if (puVar6 != (undefined8 *)0x0) {
    do {
      local_28 = *puVar6;
      std::__ndk1::
      __tree<v8::internal::compiler::LiveRangeBundle::Range,v8::internal::compiler::LiveRangeBundle::RangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRangeBundle::Range>>
      ::
      __emplace_unique_key_args<v8::internal::compiler::LiveRangeBundle::Range,v8::internal::compiler::LiveRangeBundle::Range>
                ((__tree<v8::internal::compiler::LiveRangeBundle::Range,v8::internal::compiler::LiveRangeBundle::RangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRangeBundle::Range>>
                  *)(this + 0x20),(Range *)&local_28,(Range *)&local_28);
      puVar6 = (undefined8 *)puVar6[1];
    } while (puVar6 != (undefined8 *)0x0);
  }
  return 1;
}

