
/* void 
   v8::internal::ProfileTree::TraverseDepthFirst<v8::internal::DeleteNodesCallback>(v8::internal::DeleteNodesCallback*)
    */

void v8::internal::ProfileTree::TraverseDepthFirst<v8::internal::DeleteNodesCallback>
               (DeleteNodesCallback *param_1)

{
  int iVar1;
  ulong uVar2;
  ProfileNode *this;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ProfileNode *local_8;
  
  local_30 = (undefined8 *)0x0;
  local_28 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  std::__ndk1::vector<v8::internal::Position,std::__ndk1::allocator<v8::internal::Position>>::
  __emplace_back_slow_path<v8::internal::ProfileNode*&>
            ((vector<v8::internal::Position,std::__ndk1::allocator<v8::internal::Position>> *)
             &local_38,(ProfileNode **)(param_1 + 0x20));
  while( true ) {
    while( true ) {
      if (local_30 == local_38) {
        if (local_38 != (undefined8 *)0x0) {
          local_30 = local_38;
          operator_delete(local_38);
        }
        return;
      }
      this = (ProfileNode *)local_30[-2];
      iVar1 = *(int *)(local_30 + -1);
      uVar2 = *(long *)(this + 0x50) - *(long *)(this + 0x48);
      if (iVar1 < (int)(uVar2 >> 3)) break;
      if (this != (ProfileNode *)0x0) {
        ProfileNode::~ProfileNode(this);
        operator_delete(this);
      }
      uVar2 = (long)local_30 - (long)local_38 >> 4;
      if (1 < uVar2) {
        *(int *)(local_38 + uVar2 * 2 + -3) = *(int *)(local_38 + uVar2 * 2 + -3) + 1;
      }
      local_30 = local_30 + -2;
    }
    if ((ulong)((long)uVar2 >> 3) <= (ulong)(long)iVar1) break;
    local_8 = *(ProfileNode **)(*(long *)(this + 0x48) + (long)iVar1 * 8);
    if (local_30 < local_28) {
      *local_30 = local_8;
      *(undefined4 *)(local_30 + 1) = 0;
      local_30 = local_30 + 2;
    }
    else {
      std::__ndk1::vector<v8::internal::Position,std::__ndk1::allocator<v8::internal::Position>>::
      __emplace_back_slow_path<v8::internal::ProfileNode*>
                ((vector<v8::internal::Position,std::__ndk1::allocator<v8::internal::Position>> *)
                 &local_38,&local_8);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

