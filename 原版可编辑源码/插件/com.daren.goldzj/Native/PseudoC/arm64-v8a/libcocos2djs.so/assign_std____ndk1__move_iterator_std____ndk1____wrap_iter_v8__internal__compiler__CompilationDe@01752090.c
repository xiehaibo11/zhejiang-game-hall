
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::CompilationDependency
   const**> > >::value&&is_constructible<v8::internal::compiler::CompilationDependency const*,
   std::__ndk1::iterator_traits<std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::CompilationDependency
   const**> > >::reference>::value, void>::type
   std::__ndk1::vector<v8::internal::compiler::CompilationDependency const*,
   v8::internal::ZoneAllocator<v8::internal::compiler::CompilationDependency const*>
   >::assign<std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::CompilationDependency
   const**> >
   >(std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::CompilationDependency
   const**> >,
   std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::CompilationDependency
   const**> >) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::CompilationDependency_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CompilationDependency_const*>>
::
assign<std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::CompilationDependency_const**>>>
          (vector<v8::internal::compiler::CompilationDependency_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CompilationDependency_const*>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  Zone *this_00;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar5 = *(long *)(this + 0x10);
  puVar9 = *(undefined8 **)this;
  uVar4 = (long)param_3 - (long)param_2 >> 3;
  if ((ulong)(lVar5 - (long)puVar9 >> 3) < uVar4) {
    if (puVar9 != (undefined8 *)0x0) {
      lVar5 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar4 >> 0x1c == 0) {
      if (uVar4 <= (ulong)(lVar5 >> 2)) {
        uVar4 = lVar5 >> 2;
      }
      if (0x7fffffe < (ulong)(lVar5 >> 3)) {
        uVar4 = 0xfffffff;
      }
      if (uVar4 >> 0x1c == 0) {
        this_00 = *(Zone **)(this + 0x18);
        uVar3 = uVar4 * 8;
        puVar9 = *(undefined8 **)(this_00 + 0x10);
        if (uVar3 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar9) ||
            uVar3 - (*(long *)(this_00 + 0x18) - (long)puVar9) == 0) {
          *(undefined8 **)(this_00 + 0x10) = puVar9 + uVar4;
        }
        else {
          puVar9 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar3);
        }
        *(undefined8 **)this = puVar9;
        *(undefined8 **)(this + 8) = puVar9;
        *(undefined8 **)(this + 0x10) = puVar9 + uVar4;
        for (; param_2 != param_3; param_2 = param_2 + 1) {
          *puVar9 = *param_2;
          puVar9 = (undefined8 *)(*(long *)(this + 8) + 8);
          *(undefined8 **)(this + 8) = puVar9;
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(long *)(this + 8) - (long)puVar9 >> 3;
  puVar6 = (undefined8 *)((long)param_2 + (*(long *)(this + 8) - (long)puVar9));
  if (uVar4 <= uVar3) {
    puVar6 = param_3;
  }
  puVar8 = puVar9;
  if (param_2 != puVar6) {
    uVar7 = (long)puVar6 + (-8 - (long)param_2);
    uVar1 = (uVar7 >> 3) + 1;
    if ((3 < uVar1) &&
       ((lVar5 = (uVar7 & 0xfffffffffffffff8) + 8, (undefined8 *)((long)param_2 + lVar5) <= puVar9
        || ((undefined8 *)((long)puVar9 + lVar5) <= param_2)))) {
      uVar10 = uVar1 & 0x3ffffffffffffffc;
      puVar11 = param_2 + 2;
      puVar8 = puVar9 + uVar10;
      param_2 = param_2 + uVar10;
      puVar9 = puVar9 + 2;
      uVar7 = uVar10;
      do {
        puVar2 = puVar11 + -1;
        uVar12 = puVar11[-2];
        uVar14 = puVar11[1];
        uVar13 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar7 = uVar7 - 4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar7 != 0);
      puVar9 = puVar8;
      if (uVar1 == uVar10) goto joined_r0x017521a0;
    }
    do {
      puVar11 = param_2 + 1;
      puVar8 = puVar9 + 1;
      *puVar9 = *param_2;
      puVar9 = puVar8;
      param_2 = puVar11;
    } while (puVar6 != puVar11);
  }
joined_r0x017521a0:
  if (uVar3 < uVar4) {
    if (puVar6 != param_3) {
      puVar9 = *(undefined8 **)(this + 8);
      do {
        puVar8 = puVar6 + 1;
        *puVar9 = *puVar6;
        puVar9 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar9;
        puVar6 = puVar8;
      } while (param_3 != puVar8);
    }
  }
  else {
    *(undefined8 **)(this + 8) = puVar8;
  }
  return;
}

