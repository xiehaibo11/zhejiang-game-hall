
/* p2t::SweepContext::MeshClean(p2t::Triangle&) */

void __thiscall p2t::SweepContext::MeshClean(SweepContext *this,Triangle *param_1)

{
  Triangle TVar1;
  long lVar2;
  undefined8 *puVar3;
  Triangle *local_60;
  Triangle *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_58 = param_1;
  std::__ndk1::vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>>::
  __push_back_slow_path<p2t::Triangle*>
            ((vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)&local_50,&local_58);
                    /* catch() { ... } // from try @ 0102cfe4 with catch @ 0102d024 */
  if (local_50 != local_48) {
    puVar3 = local_50;
                    /* catch() { ... } // from try @ 0102cfbc with catch @ 0102d034 */
    do {
      local_48 = local_48 + -1;
      local_58 = (Triangle *)*local_48;
      if ((local_58 != (Triangle *)0x0) && (local_58[0x38] == (Triangle)0x0)) {
        local_58[0x38] = (Triangle)0x1;
        puVar3 = *(undefined8 **)(this + 0x58);
        if (puVar3 == *(undefined8 **)(this + 0x60)) {
          std::__ndk1::vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>>::
          __push_back_slow_path<p2t::Triangle*const&>
                    ((vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)(this + 0x50),
                     &local_58);
        }
        else {
          *puVar3 = local_58;
          *(undefined8 **)(this + 0x58) = puVar3 + 1;
        }
        if (*local_58 == (Triangle)0x0) {
          local_60 = *(Triangle **)(local_58 + 0x20);
          if (local_48 < puStack_40) {
            *local_48 = local_60;
            local_48 = local_48 + 1;
          }
          else {
            std::__ndk1::vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>>::
            __push_back_slow_path<p2t::Triangle*>
                      ((vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)&local_50,
                       &local_60);
          }
          if (local_58[1] == (Triangle)0x0) goto LAB_0102d0e8;
LAB_0102d0a4:
          TVar1 = local_58[2];
          puVar3 = local_50;
        }
        else {
          if (local_58[1] != (Triangle)0x0) goto LAB_0102d0a4;
LAB_0102d0e8:
          local_60 = *(Triangle **)(local_58 + 0x28);
          if (local_48 < puStack_40) {
            *local_48 = local_60;
            local_48 = local_48 + 1;
          }
          else {
            std::__ndk1::vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>>::
            __push_back_slow_path<p2t::Triangle*>
                      ((vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)&local_50,
                       &local_60);
          }
          TVar1 = local_58[2];
          puVar3 = local_50;
        }
        local_50 = puVar3;
        if (TVar1 == (Triangle)0x0) {
          local_60 = *(Triangle **)(local_58 + 0x30);
          if (local_48 < puStack_40) {
            *local_48 = local_60;
            local_48 = local_48 + 1;
          }
          else {
            std::__ndk1::vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>>::
            __push_back_slow_path<p2t::Triangle*>
                      ((vector<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)&local_50,
                       &local_60);
            puVar3 = local_50;
          }
        }
      }
    } while (puVar3 != local_48);
  }
  if (local_48 != (undefined8 *)0x0) {
    operator_delete(local_48);
  }
                    /* try { // try from 0102d150 to 0112d193 has its CatchHandler @ 0102d150
                       catch() { ... } // from try @ 0102d150 with catch @ 0102d150
                       catch() { ... } // from try @ 0102d1b0 with catch @ 0102d150 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

