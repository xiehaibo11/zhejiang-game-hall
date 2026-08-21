
/* std::__ndk1::vector<v8::internal::compiler::RpoNumber,
   v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber> >::assign(unsigned long,
   v8::internal::compiler::RpoNumber const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
::assign(vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
         *this,ulong param_1,RpoNumber *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  Zone *this_00;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0x10);
  puVar6 = *(undefined4 **)this;
  if ((ulong)(lVar4 - (long)puVar6 >> 2) < param_1) {
    if (puVar6 != (undefined4 *)0x0) {
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (param_1 >> 0x1d == 0) {
      uVar5 = param_1;
      if (param_1 <= (ulong)(lVar4 >> 1)) {
        uVar5 = lVar4 >> 1;
      }
      if (0xffffffe < (ulong)(lVar4 >> 2)) {
        uVar5 = 0x1fffffff;
      }
      if (uVar5 >> 0x1d == 0) {
        this_00 = *(Zone **)(this + 0x18);
        uVar3 = uVar5 * 4 + 7 & 0xfffffffffffffff8;
        puVar6 = *(undefined4 **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar6) < uVar3) {
          puVar6 = (undefined4 *)v8::internal::Zone::NewExpand(this_00,uVar3);
        }
        else {
          *(ulong *)(this_00 + 0x10) = (long)puVar6 + uVar3;
        }
        *(undefined4 **)this = puVar6;
        *(undefined4 **)(this + 8) = puVar6;
        *(undefined4 **)(this + 0x10) = puVar6 + uVar5;
        do {
          param_1 = param_1 - 1;
          *puVar6 = *(undefined4 *)param_2;
          puVar6 = (undefined4 *)(*(long *)(this + 8) + 4);
          *(undefined4 **)(this + 8) = puVar6;
        } while (param_1 != 0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(long *)(this + 8) - (long)puVar6 >> 2;
  uVar5 = uVar3;
  if (param_1 <= uVar3) {
    uVar5 = param_1;
  }
  if (uVar5 != 0) {
    if ((7 < uVar5) && ((param_2 + 1 <= puVar6 || (puVar6 + uVar5 <= param_2)))) {
      uVar1 = *(undefined4 *)param_2;
      uVar8 = uVar5 & 0xfffffffffffffff8;
      puVar7 = (undefined8 *)(puVar6 + 4);
      uVar9 = uVar8;
      do {
        puVar7[-1] = CONCAT44(uVar1,uVar1);
        puVar7[-2] = CONCAT44(uVar1,uVar1);
        puVar7[1] = CONCAT44(uVar1,uVar1);
        *puVar7 = CONCAT44(uVar1,uVar1);
        uVar9 = uVar9 - 8;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      bVar2 = uVar5 == uVar8;
      uVar5 = uVar5 - uVar8;
      puVar6 = puVar6 + uVar8;
      if (bVar2) goto LAB_0164bde8;
    }
    do {
      uVar5 = uVar5 - 1;
      *puVar6 = *(undefined4 *)param_2;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
LAB_0164bde8:
  lVar4 = uVar3 - param_1;
  if (uVar3 < param_1) {
    puVar6 = *(undefined4 **)(this + 8);
    do {
      bVar2 = lVar4 != -1;
      lVar4 = lVar4 + 1;
      *puVar6 = *(undefined4 *)param_2;
      puVar6 = (undefined4 *)(*(long *)(this + 8) + 4);
      *(undefined4 **)(this + 8) = puVar6;
    } while (bVar2);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 4;
  }
  return;
}

