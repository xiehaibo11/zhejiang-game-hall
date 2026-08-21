
/* void 
   v8::internal::MemoryChunk::RegisterObjectWithInvalidatedSlots<(v8::internal::RememberedSetType)0>(v8::internal::HeapObject)
    */

void __thiscall
v8::internal::MemoryChunk::RegisterObjectWithInvalidatedSlots<(v8::internal::RememberedSetType)0>
          (MemoryChunk *this,undefined8 param_2)

{
  __tree_node_base *p_Var1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (((byte)this[8] & 0x18) == 0) {
    plVar3 = *(long **)(this + 0x88);
    if (plVar3 == (long *)0x0) {
      plVar3 = operator_new(0x18);
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = (long)(plVar3 + 1);
      *(long **)(this + 0x88) = plVar3;
    }
    plVar4 = plVar3 + 1;
    plVar5 = (long *)*plVar4;
    plVar7 = plVar4;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar3 + 1;
      do {
        while( true ) {
          plVar6 = plVar5;
          plVar7 = plVar6;
          if (*(uint *)(plVar6 + 4) <= (uint)param_2) break;
          plVar4 = plVar6;
          plVar5 = (long *)*plVar6;
          if ((long *)*plVar6 == (long *)0x0) {
            lVar2 = *plVar6;
            goto joined_r0x01015c38;
          }
        }
        if ((uint)param_2 <= *(uint *)(plVar6 + 4)) break;
        plVar4 = plVar6 + 1;
        plVar5 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    lVar2 = *plVar4;
    plVar6 = plVar4;
joined_r0x01015c38:
    if (lVar2 == 0) {
      p_Var1 = operator_new(0x28);
      *(undefined8 *)(p_Var1 + 0x20) = param_2;
      *(undefined8 *)p_Var1 = 0;
      *(undefined8 *)(p_Var1 + 8) = 0;
      *(long **)(p_Var1 + 0x10) = plVar7;
      *plVar6 = (long)p_Var1;
      if (*(long *)*plVar3 != 0) {
        *plVar3 = *(long *)*plVar3;
        p_Var1 = (__tree_node_base *)*plVar6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)plVar3[1],p_Var1);
      plVar3[2] = plVar3[2] + 1;
    }
  }
  return;
}

