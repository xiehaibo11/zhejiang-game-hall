
/* std::__ndk1::vector<std::__ndk1::pair<int, int>,
   v8::internal::ZoneAllocator<std::__ndk1::pair<int, int> > >::assign(unsigned long,
   std::__ndk1::pair<int, int> const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<int,int>,v8::internal::ZoneAllocator<std::__ndk1::pair<int,int>>>::assign
          (vector<std::__ndk1::pair<int,int>,v8::internal::ZoneAllocator<std::__ndk1::pair<int,int>>>
           *this,ulong param_1,pair *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  Zone *this_00;
  ulong uVar7;
  pair *ppVar8;
  pair *ppVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar6 = *(long *)(this + 0x10);
  ppVar8 = *(pair **)this;
  if ((ulong)(lVar6 - (long)ppVar8 >> 3) < param_1) {
    if (ppVar8 != (pair *)0x0) {
      lVar6 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (param_1 >> 0x1c == 0) {
      uVar7 = param_1;
      if (param_1 <= (ulong)(lVar6 >> 2)) {
        uVar7 = lVar6 >> 2;
      }
      if (0x7fffffe < (ulong)(lVar6 >> 3)) {
        uVar7 = 0xfffffff;
      }
      if (uVar7 >> 0x1c == 0) {
        this_00 = *(Zone **)(this + 0x18);
        uVar5 = uVar7 * 8;
        puVar4 = *(undefined8 **)(this_00 + 0x10);
        if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) ||
            uVar5 - (*(long *)(this_00 + 0x18) - (long)puVar4) == 0) {
          *(undefined8 **)(this_00 + 0x10) = puVar4 + uVar7;
        }
        else {
          puVar4 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar5);
        }
        *(undefined8 **)this = puVar4;
        *(undefined8 **)(this + 8) = puVar4;
        *(undefined8 **)(this + 0x10) = puVar4 + uVar7;
        do {
          param_1 = param_1 - 1;
          *puVar4 = *(undefined8 *)param_2;
          puVar4 = (undefined8 *)(*(long *)(this + 8) + 8);
          *(undefined8 **)(this + 8) = puVar4;
        } while (param_1 != 0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = *(long *)(this + 8) - (long)ppVar8 >> 3;
  uVar7 = uVar5;
  if (param_1 <= uVar5) {
    uVar7 = param_1;
  }
  if (uVar7 != 0) {
    if ((7 < uVar7) && ((param_2 + 5 <= ppVar8 || (ppVar8 + uVar7 * 8 <= param_2 + 4)))) {
      uVar10 = uVar7 & 0xfffffffffffffff8;
      ppVar9 = ppVar8 + 0x20;
      uVar11 = uVar10;
      do {
        uVar1 = *(undefined4 *)param_2;
        uVar11 = uVar11 - 8;
        uVar2 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(ppVar9 + -0x20) = uVar1;
        *(undefined4 *)(ppVar9 + -0x1c) = uVar2;
        *(undefined4 *)(ppVar9 + -0x18) = uVar1;
        *(undefined4 *)(ppVar9 + -0x14) = uVar2;
        *(undefined4 *)(ppVar9 + -0x10) = uVar1;
        *(undefined4 *)(ppVar9 + -0xc) = uVar2;
        *(undefined4 *)(ppVar9 + -8) = uVar1;
        *(undefined4 *)(ppVar9 + -4) = uVar2;
        *(undefined4 *)ppVar9 = uVar1;
        *(undefined4 *)(ppVar9 + 4) = uVar2;
        *(undefined4 *)(ppVar9 + 8) = uVar1;
        *(undefined4 *)(ppVar9 + 0xc) = uVar2;
        *(undefined4 *)(ppVar9 + 0x10) = uVar1;
        *(undefined4 *)(ppVar9 + 0x14) = uVar2;
        *(undefined4 *)(ppVar9 + 0x18) = uVar1;
        *(undefined4 *)(ppVar9 + 0x1c) = uVar2;
        ppVar9 = ppVar9 + 0x40;
      } while (uVar11 != 0);
      bVar3 = uVar7 == uVar10;
      uVar7 = uVar7 - uVar10;
      ppVar8 = ppVar8 + uVar10 * 8;
      if (bVar3) goto LAB_01632868;
    }
    do {
      uVar7 = uVar7 - 1;
      *(undefined4 *)ppVar8 = *(undefined4 *)param_2;
      *(undefined4 *)(ppVar8 + 4) = *(undefined4 *)(param_2 + 4);
      ppVar8 = ppVar8 + 8;
    } while (uVar7 != 0);
  }
LAB_01632868:
  lVar6 = uVar5 - param_1;
  if (uVar5 < param_1) {
    puVar4 = *(undefined8 **)(this + 8);
    do {
      bVar3 = lVar6 != -1;
      lVar6 = lVar6 + 1;
      *puVar4 = *(undefined8 *)param_2;
      puVar4 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar4;
    } while (bVar3);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 8;
  }
  return;
}

