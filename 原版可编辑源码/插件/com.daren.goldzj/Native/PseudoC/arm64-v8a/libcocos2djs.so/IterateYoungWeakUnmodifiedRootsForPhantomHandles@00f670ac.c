
/* v8::internal::GlobalHandles::IterateYoungWeakUnmodifiedRootsForPhantomHandles(v8::internal::RootVisitor*,
   bool (*)(v8::internal::Heap*, v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::GlobalHandles::IterateYoungWeakUnmodifiedRootsForPhantomHandles
          (GlobalHandles *this,RootVisitor *param_1,_func_bool_Heap_ptr_FullObjectSlot *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  Node NVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  Node *this_00;
  TracedNode *this_01;
  undefined8 *puVar7;
  long lVar8;
  TracedNode *local_48;
  
  puVar7 = *(undefined8 **)(this + 0x10);
  puVar2 = *(undefined8 **)(this + 0x18);
  if (puVar7 != puVar2) {
    do {
      this_00 = (Node *)*puVar7;
      bVar1 = (byte)this_00[0xb] & 7;
      if ((bVar1 == 2) || ((bVar1 == 4 && (((byte)this_00[0xb] & 0x30) == 0)))) {
        bVar4 = (*param_2)((Heap *)(*(long *)this + 0x8850),(char)this_00);
        NVar3 = this_00[0xb];
        if (bVar4) {
          if ((~(byte)NVar3 & 0x30) == 0) {
            this_00[0xb] = (Node)((byte)NVar3 & 0xf8 | 3);
            **(undefined8 **)(this_00 + 0x10) = 0;
            NodeSpace<v8::internal::GlobalHandles::Node>::Release(this_00);
            *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
          }
          else {
            if (1 < (byte)(((byte)NVar3 >> 4 & 3) - 1)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            this_00[0xb] = (Node)((byte)NVar3 & 0xf8 | 3);
            Node::CollectPhantomCallbackData(this_00,(vector *)(this + 0x58));
          }
        }
        else {
          if (((byte)NVar3 & 7) == 1) {
            uVar6 = *(undefined8 *)(this_00 + 0x10);
          }
          else {
            uVar6 = 0;
          }
          (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,uVar6,this_00);
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar2 != puVar7);
  }
  puVar7 = *(undefined8 **)(this + 0x30);
  puVar2 = *(undefined8 **)(this + 0x38);
  if (puVar7 != puVar2) {
    lVar8 = *(long *)(*(long *)this + 0x90c0);
    do {
      this_01 = (TracedNode *)*puVar7;
      if (((byte)this_01[0xb] & 3) != 0) {
        bVar4 = (*param_2)((Heap *)(*(long *)this + 0x8850),(char)this_01);
        if (bVar4) {
          if (*(long *)(this_01 + 0x18) == 0) {
            if (((byte)this_01[0xb] >> 4 & 1) == 0) {
              plVar5 = *(long **)(lVar8 + 8);
              local_48 = this_01;
              (**(code **)(*plVar5 + 0x50))(plVar5,&local_48);
            }
            else {
              **(undefined8 **)(this_01 + 0x10) = 0;
              NodeSpace<v8::internal::GlobalHandles::TracedNode>::Release(this_01);
            }
            *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
          }
          else {
            TracedNode::CollectPhantomCallbackData(this_01,(vector *)(this + 0x70));
          }
        }
        else if (((byte)this_01[0xb] >> 3 & 1) == 0) {
          this_01[0xb] = (TracedNode)((byte)this_01[0xb] | 8);
          (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,0,this_01);
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar2 != puVar7);
  }
  return;
}

