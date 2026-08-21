
/* int 
   v8::internal::TypedSlotSet::Iterate<v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,
   unsigned long, unsigned long, std::__ndk1::set<unsigned long, std::__ndk1::less<unsigned long>,
   std::__ndk1::allocator<unsigned long> >*,
   std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType, unsigned long>,
   std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType, unsigned long> >,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType, unsigned long> >
   >*)::{lambda(v8::internal::SlotType, unsigned
   long)#1}>(v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,
   unsigned long, unsigned long, std::__ndk1::set<unsigned long, std::__ndk1::less<unsigned long>,
   std::__ndk1::allocator<unsigned long> >*,
   std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType, unsigned long>,
   std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType, unsigned long> >,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType, unsigned long> >
   >*)::{lambda(v8::internal::SlotType, unsigned long)#1},
   v8::internal::TypedSlotSet::IterationMode) */

int __thiscall
v8::internal::TypedSlotSet::
Iterate<v8::internal::CollectSlots<(v8::internal::RememberedSetType)0>(v8::internal::MemoryChunk*,unsigned_long,unsigned_long,std::__ndk1::set<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>*,std::__ndk1::set<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>*)::_lambda(v8::internal::SlotType,unsigned_long)_1_>
          (TypedSlotSet *this,ulong *param_2,int param_3)

{
  ulong uVar1;
  TypedSlotSet *pTVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  __tree_node_base *p_Var7;
  void *pvVar8;
  long lVar9;
  TypedSlotSet *pTVar10;
  TypedSlotSet *pTVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  TypedSlotSet *local_78;
  
  pTVar10 = *(TypedSlotSet **)(this + 8);
  if (pTVar10 == (TypedSlotSet *)0x0) {
    return 0;
  }
  iVar12 = 0;
  local_78 = (TypedSlotSet *)0x0;
  do {
    pTVar11 = pTVar10;
    puVar4 = *(uint **)(pTVar11 + 0x10);
    bVar6 = true;
    for (puVar3 = *(uint **)(pTVar11 + 8); puVar3 != puVar4; puVar3 = puVar3 + 1) {
      uVar5 = *puVar3 >> 0x1d;
      if (uVar5 != 5) {
        uVar1 = *(long *)(this + 0x18) + ((ulong)*puVar3 & 0x1fffffff);
        if ((*param_2 <= uVar1) && (uVar1 < param_2[1])) {
          plVar13 = (long *)param_2[2];
          plVar14 = plVar13 + 1;
          plVar15 = (long *)*plVar14;
          plVar16 = plVar14;
          if (plVar15 != (long *)0x0) {
            plVar14 = plVar13 + 1;
            do {
              while (plVar16 = plVar15, (int)uVar5 < (int)plVar16[4]) {
LAB_00fa4564:
                plVar14 = plVar16;
                plVar15 = (long *)*plVar16;
                if ((long *)*plVar16 == (long *)0x0) {
                  lVar9 = *plVar16;
                  goto joined_r0x00fa45c0;
                }
              }
              if ((int)uVar5 <= (int)plVar16[4]) {
                if (uVar1 < (ulong)plVar16[5]) goto LAB_00fa4564;
                if (uVar1 <= (ulong)plVar16[5]) break;
              }
              plVar14 = plVar16 + 1;
              plVar15 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
          lVar9 = *plVar14;
joined_r0x00fa45c0:
          if (lVar9 == 0) {
            p_Var7 = operator_new(0x30);
            *(ulong *)(p_Var7 + 0x20) = (ulong)uVar5;
            *(ulong *)(p_Var7 + 0x28) = uVar1;
            *(undefined8 *)p_Var7 = 0;
            *(undefined8 *)(p_Var7 + 8) = 0;
            *(long **)(p_Var7 + 0x10) = plVar16;
            *plVar14 = (long)p_Var7;
            if (*(long *)*plVar13 != 0) {
              *plVar13 = *(long *)*plVar13;
              p_Var7 = (__tree_node_base *)*plVar14;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)plVar13[1],p_Var7);
            plVar13[2] = plVar13[2] + 1;
          }
        }
        bVar6 = false;
        iVar12 = iVar12 + 1;
      }
    }
    pTVar10 = *(TypedSlotSet **)pTVar11;
    if (param_3 == 0) {
      if (bVar6) {
        pTVar2 = this + 8;
        if (local_78 != (TypedSlotSet *)0x0) {
          pTVar2 = local_78;
        }
        *(TypedSlotSet **)pTVar2 = pTVar10;
        pvVar8 = *(void **)(pTVar11 + 8);
        if (pvVar8 != (void *)0x0) {
          *(void **)(pTVar11 + 0x10) = pvVar8;
          operator_delete(pvVar8);
        }
        operator_delete(pTVar11);
        pTVar11 = local_78;
      }
      local_78 = pTVar11;
      if (pTVar10 == (TypedSlotSet *)0x0) {
        return iVar12;
      }
    }
    else {
      local_78 = pTVar11;
      if (pTVar10 == (TypedSlotSet *)0x0) {
        return iVar12;
      }
    }
  } while( true );
}

