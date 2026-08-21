
/* v8::internal::GlobalHandles::IterateWeakRootsForPhantomHandles(bool (*)(v8::internal::Heap*,
   v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::GlobalHandles::IterateWeakRootsForPhantomHandles
          (GlobalHandles *this,_func_bool_Heap_ptr_FullObjectSlot *param_1)

{
  Node *this_00;
  TracedNode *this_01;
  uint uVar1;
  TracedNode TVar2;
  Node NVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  Node *pNVar7;
  TracedNode *pTVar8;
  
  lVar5 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar5 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        this_00 = (Node *)(lVar5 + uVar6 * 0x20);
        pNVar7 = this_00 + 0xb;
        uVar1 = (byte)*pNVar7 & 7;
        if (((uVar1 - 2 < 2) || ((uVar1 == 4 && (((byte)*pNVar7 & 0x30) == 0)))) &&
           (bVar4 = (*param_1)((Heap *)(*(long *)this + 0x8850),(char)this_00), bVar4)) {
          NVar3 = *pNVar7;
          if ((~(byte)NVar3 & 0x30) == 0) {
            *pNVar7 = (Node)((byte)NVar3 & 0xf8 | 3);
            **(undefined8 **)(lVar5 + uVar6 * 0x20 + 0x10) = 0;
            NodeSpace<v8::internal::GlobalHandles::Node>::Release(this_00);
            *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
          }
          else if ((byte)(((byte)NVar3 >> 4 & 3) - 1) < 2) {
            *pNVar7 = (Node)((byte)NVar3 & 0xf8 | 3);
            Node::CollectPhantomCallbackData(this_00,(vector *)(this + 0x58));
          }
        }
        uVar6 = uVar6 + 1;
        if (uVar6 < 0x100) break;
        lVar5 = *(long *)(lVar5 + 0x2018);
        uVar6 = 0;
        if (lVar5 == 0) goto LAB_00f66910;
      }
    } while (lVar5 != 0);
  }
LAB_00f66910:
  lVar5 = *(long *)(*(long *)(this + 0x28) + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uVar6 = 0;
  do {
    this_01 = (TracedNode *)(lVar5 + uVar6 * 0x20);
    pTVar8 = this_01 + 0xb;
    TVar2 = *pTVar8;
    if (((byte)TVar2 & 3) != 0) {
      if (((byte)TVar2 >> 5 & 1) == 0) {
        if ((((byte)TVar2 >> 4 & 1) != 0) || (*(long *)(lVar5 + uVar6 * 0x20 + 0x18) != 0))
        goto LAB_00f66994;
LAB_00f6692c:
        NodeSpace<v8::internal::GlobalHandles::TracedNode>::Release(this_01);
        *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
      }
      else {
        *pTVar8 = (TracedNode)((byte)TVar2 & 0xdf);
LAB_00f66994:
        bVar4 = (*param_1)((Heap *)(*(long *)this + 0x8850),(char)this_01);
        if (bVar4) {
          if (*(long *)(lVar5 + uVar6 * 0x20 + 0x18) == 0) {
            if (((byte)*pTVar8 >> 4 & 1) != 0) {
              **(undefined8 **)(lVar5 + uVar6 * 0x20 + 0x10) = 0;
            }
            goto LAB_00f6692c;
          }
          TracedNode::CollectPhantomCallbackData(this_01,(vector *)(this + 0x70));
        }
      }
    }
    uVar6 = uVar6 + 1;
    if (uVar6 < 0x100) {
      if (lVar5 == 0) {
        return;
      }
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x2018);
      uVar6 = 0;
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}

