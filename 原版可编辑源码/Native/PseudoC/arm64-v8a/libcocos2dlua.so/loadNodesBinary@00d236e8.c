
/* cocos2d::Bundle3D::loadNodesBinary(cocos2d::NodeDatas&) */

void __thiscall cocos2d::Bundle3D::loadNodesBinary(Bundle3D *this,NodeDatas *param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *this_00;
  uint uVar5;
  bool local_68 [4];
  uint local_64;
  NodeData *local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_60,"");
  lVar3 = seekToFirstType(this,2,(basic_string *)local_60);
  if (((ulong)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    local_64 = 0;
    lVar3 = BundleReader::read((BundleReader *)(this + 0xe0),&local_64,4,1);
    uVar4 = 0;
    if (lVar3 == 1) {
      if (local_64 != 0) {
        uVar5 = 0;
        do {
          local_68[0] = false;
          local_60[0] = (NodeData *)parseNodesRecursivelyBinary(this,local_68,local_64 == 1);
          if (local_68[0] == false) {
            puVar1 = *(ulong **)(param_1 + 0x28);
            this_00 = (vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
                      (param_1 + 0x20);
            if (puVar1 == *(ulong **)(param_1 + 0x30)) goto LAB_00d237fc;
            *puVar1 = (ulong)local_60[0];
            *(ulong **)(param_1 + 0x28) = puVar1 + 1;
          }
          else {
            puVar1 = *(ulong **)(param_1 + 0x10);
            this_00 = (vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
                      (param_1 + 8);
            if (puVar1 == *(ulong **)(param_1 + 0x18)) {
LAB_00d237fc:
              std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
              __push_back_slow_path<cocos2d::NodeData*const&>(this_00,local_60);
            }
            else {
              *puVar1 = (ulong)local_60[0];
              *(ulong **)(param_1 + 0x10) = puVar1 + 1;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_64);
      }
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

