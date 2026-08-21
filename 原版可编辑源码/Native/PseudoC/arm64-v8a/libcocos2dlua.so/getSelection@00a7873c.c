
/* fairygui::GList::getSelection(std::__ndk1::vector<int, std::__ndk1::allocator<int> >&) const */

void __thiscall fairygui::GList::getSelection(GList *this,vector *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_1;
  if (this[0x338] == (GList)0x0) {
    local_6c = 0;
    iVar8 = (int)((ulong)(*(long *)(this + 0x1e8) - (long)*(long **)(this + 0x1e0)) >> 3);
    if (0 < iVar8) {
      lVar9 = **(long **)(this + 0x1e0);
      iVar3 = local_6c;
      while( true ) {
        local_6c = iVar3;
        if (((lVar9 != 0) &&
            (lVar9 = __dynamic_cast(lVar9,&GObject::typeinfo,&GButton::typeinfo,0), lVar9 != 0)) &&
           (*(char *)(lVar9 + 0x33c) != '\0')) {
          piVar6 = *(int **)(param_1 + 8);
          if (piVar6 == *(int **)(param_1 + 0x10)) {
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                      ((vector<int,std::__ndk1::allocator<int>> *)param_1,&local_6c);
          }
          else {
            *piVar6 = iVar3;
            *(int **)(param_1 + 8) = piVar6 + 1;
          }
        }
        local_6c = local_6c + 1;
        if (iVar8 <= local_6c) break;
        lVar9 = *(long *)(*(long *)(this + 0x1e0) + (long)local_6c * 8);
        iVar3 = local_6c;
      }
    }
  }
  else {
    uVar1 = *(uint *)(this + 0x340);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        lVar9 = *(long *)(*(long *)(this + 0x368) + uVar10 * 0x18 + 8);
        if (lVar9 == 0) {
          cVar2 = *(char *)(*(long *)(this + 0x368) + uVar10 * 0x18 + 0x14);
joined_r0x00a787fc:
          if (cVar2 != '\0') {
            local_6c = (int)uVar10;
            if (this[0x339] == (GList)0x0) {
              piVar6 = *(int **)(param_1 + 8);
            }
            else {
              iVar8 = *(int *)(this + 0x33c);
              iVar3 = 0;
              if (iVar8 != 0) {
                iVar3 = local_6c / iVar8;
              }
              local_6c = local_6c - iVar3 * iVar8;
              piVar7 = *(int **)param_1;
              piVar6 = *(int **)(param_1 + 8);
              if (piVar7 != piVar6) {
                iVar8 = *piVar7;
                while (iVar8 != local_6c) {
                  piVar7 = piVar7 + 1;
                  if (piVar6 == piVar7) goto LAB_00a78864;
                  iVar8 = *piVar7;
                }
              }
              if (piVar7 != piVar6) goto LAB_00a787b0;
            }
LAB_00a78864:
            if (piVar6 == *(int **)(param_1 + 0x10)) {
              std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
              __push_back_slow_path<int_const&>
                        ((vector<int,std::__ndk1::allocator<int>> *)param_1,&local_6c);
            }
            else {
              *piVar6 = local_6c;
              *(int **)(param_1 + 8) = piVar6 + 1;
            }
          }
        }
        else {
          lVar5 = __dynamic_cast(lVar9,&GObject::typeinfo,&GButton::typeinfo,0);
          if (lVar5 != 0) {
            cVar2 = *(char *)(lVar9 + 0x33c);
            goto joined_r0x00a787fc;
          }
        }
LAB_00a787b0:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar1);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

