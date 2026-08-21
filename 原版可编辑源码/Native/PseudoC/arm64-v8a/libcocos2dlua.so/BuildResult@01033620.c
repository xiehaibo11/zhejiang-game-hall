
/* ClipperLib::Clipper::BuildResult(std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&) */

void __thiscall ClipperLib::Clipper::BuildResult(Clipper *this,vector *param_1)

{
  uint uVar1;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *this_00;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::
  vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
  ::reserve((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
             *)param_1,*(long *)(this + 0x10) - *(long *)(this + 8) >> 3);
  lVar5 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  if (lVar4 != lVar5) {
    uVar6 = 0;
    do {
      if (*(long *)(*(long *)(lVar5 + uVar6 * 8) + 0x18) != 0) {
        puStack_68 = (undefined8 *)0x0;
        local_60 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + uVar6 * 8) + 0x18) + 0x20);
        if (lVar5 != 0) {
          lVar4 = lVar5;
          uVar1 = 0;
          do {
            uVar3 = uVar1;
            lVar4 = *(long *)(lVar4 + 0x18);
            uVar1 = uVar3 + 1;
          } while (lVar4 != lVar5);
          if (1 < uVar1) {
            local_70 = operator_new((ulong)uVar1 << 4);
            local_60 = local_70 + (ulong)uVar1 * 2;
            puStack_68 = local_70;
            while( true ) {
              if (puStack_68 == local_60) {
                std::__ndk1::
                vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
                __push_back_slow_path<ClipperLib::IntPoint_const&>
                          ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                            *)&local_70,(IntPoint *)(lVar5 + 8));
              }
              else {
                uVar7 = *(undefined8 *)(lVar5 + 8);
                puStack_68[1] = *(undefined8 *)(lVar5 + 0x10);
                *puStack_68 = uVar7;
                puStack_68 = puStack_68 + 2;
              }
              if (uVar3 == 0) break;
              lVar5 = *(long *)(lVar5 + 0x20);
              uVar3 = uVar3 - 1;
            }
            this_00 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **
                       )(param_1 + 8);
            if (this_00 ==
                *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                 (param_1 + 0x10)) {
              std::__ndk1::
              vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
              ::
              __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                        ((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
                          *)param_1,(vector *)&local_70);
            }
            else {
              std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
              ::vector(this_00,(vector *)&local_70);
              *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
               (param_1 + 8) = this_00 + 0x18;
            }
          }
        }
        if (local_70 != (undefined8 *)0x0) {
          puStack_68 = local_70;
          operator_delete(local_70);
        }
        lVar5 = *(long *)(this + 8);
        lVar4 = *(long *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar4 - lVar5 >> 3));
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

