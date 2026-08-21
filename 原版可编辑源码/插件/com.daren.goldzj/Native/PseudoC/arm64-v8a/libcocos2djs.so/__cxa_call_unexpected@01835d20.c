
void __cxa_call_unexpected(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Var1;
  _Unwind_Exception *p_Var2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  _Unwind_Exception *p_Var14;
  ulong uVar15;
  byte *pbVar16;
  byte *unaff_x22;
  byte *pbVar17;
  _Unwind_Exception *p_Var18;
  long lVar19;
  ulong uVar20;
  long unaff_x27;
  ulong uVar21;
  byte *pbVar22;
  byte *local_98;
  undefined **local_78;
  byte *local_70;
  _Unwind_Exception *local_68;
  
  if (param_1 == (_Unwind_Exception *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01835cf4(0,0);
  }
  __cxa_begin_catch();
  uVar6 = __cxxabiv1::__isOurExceptionClass(param_1);
  if ((uVar6 & 1) == 0) {
    uVar7 = std::get_terminate();
    uVar12 = std::get_unexpected();
    p_Var18 = (_Unwind_Exception *)0x0;
  }
  else {
    unaff_x22 = *(byte **)(param_1 + -0x20);
    uVar12 = *(undefined8 *)(param_1 + -0x48);
    uVar7 = *(undefined8 *)(param_1 + -0x40);
    p_Var18 = param_1 + -0x60;
    unaff_x27 = (long)(int)~*(uint *)(param_1 + -0x2c);
    local_70 = unaff_x22;
  }
  FUN_01835478(uVar12);
  __cxa_begin_catch();
  if ((uVar6 & 1) != 0) {
    local_70 = unaff_x22 + 1;
    FUN_01836094(&local_70,*unaff_x22);
    pbVar22 = local_70 + 1;
    bVar4 = *local_70;
    uVar6 = (ulong)bVar4;
    local_70 = pbVar22;
    if (uVar6 == 0xff) goto LAB_01836054;
    uVar13 = 0;
    uVar20 = 0;
    do {
      pbVar17 = pbVar22 + 1;
      bVar3 = *pbVar22;
      uVar20 = ((ulong)bVar3 & 0x7f) << (uVar13 & 0x3f) | uVar20;
      uVar13 = uVar13 + 7;
      pbVar22 = pbVar17;
    } while ((char)bVar3 < '\0');
    local_70 = pbVar17;
    puVar8 = (undefined8 *)__cxa_get_globals_fast();
    p_Var14 = (_Unwind_Exception *)*puVar8;
    if (p_Var14 == (_Unwind_Exception *)0x0) goto LAB_01836054;
    p_Var1 = p_Var14 + 0x60;
    uVar5 = __cxxabiv1::__isOurExceptionClass(p_Var1);
    p_Var2 = (_Unwind_Exception *)(pbVar17 + uVar20);
    if ((p_Var14 != p_Var18) && (((uVar5 ^ 1) & 1) == 0)) {
      lVar19 = *(long *)(p_Var14 + 8);
      lVar9 = __cxxabiv1::__getExceptionClass(p_Var1);
      if (lVar9 == 0x434c4e47432b2b01) {
        p_Var18 = *(_Unwind_Exception **)p_Var14;
      }
      else {
        p_Var18 = p_Var14 + 0x80;
      }
      local_98 = pbVar17 + uVar20 + unaff_x27;
      uVar13 = 0;
      uVar21 = uVar6 & 0xf;
      uVar15 = 0;
      pbVar22 = local_98;
      do {
        do {
          pbVar16 = pbVar22 + 1;
          bVar3 = *pbVar22;
          uVar15 = ((ulong)bVar3 & 0x7f) << (uVar13 & 0x3f) | uVar15;
          uVar13 = uVar13 + 7;
          pbVar22 = pbVar16;
        } while ((char)bVar3 < '\0');
        if (uVar15 == 0) goto LAB_01835f4c;
        local_68 = p_Var2;
        if ((0xc < (uint)uVar21) || ((0x1c1dU >> uVar21 & 1) == 0)) goto LAB_01836034;
        local_68 = (_Unwind_Exception *)
                   (pbVar17 + (uVar20 - (uVar15 << (*(ulong *)(&DAT_01a67798 + uVar21 * 8) & 0x3f)))
                   );
        plVar10 = (long *)FUN_01836094(&local_68,uVar6);
        local_68 = p_Var18;
        uVar11 = (**(code **)(*plVar10 + 0x20))(plVar10,lVar19,&local_68);
        uVar13 = 0;
        uVar15 = 0;
      } while ((uVar11 & 1) == 0);
      *(int *)(p_Var14 + 0x30) = -*(int *)(p_Var14 + 0x30);
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      __cxa_end_catch();
      __cxa_end_catch();
      __cxa_begin_catch(p_Var1);
      __cxa_rethrow();
LAB_01836034:
                    /* WARNING: Subroutine does not return */
      FUN_01835cf4(1,param_1);
    }
    local_98 = pbVar17 + uVar20 + unaff_x27;
LAB_01835f4c:
    local_78 = &PTR__bad_exception_01cdf6e0;
    uVar21 = (ulong)(bVar4 + 6) & 0xf;
    uVar13 = 0;
    uVar15 = 0;
    while( true ) {
      do {
        pbVar22 = local_98 + 1;
        bVar4 = *local_98;
        uVar15 = ((ulong)bVar4 & 0x7f) << (uVar13 & 0x3f) | uVar15;
        uVar13 = uVar13 + 7;
        local_98 = pbVar22;
      } while ((char)bVar4 < '\0');
      if (uVar15 == 0) break;
      local_68 = p_Var2;
      if ((10 < (uint)uVar21) || ((0x747U >> uVar21 & 1) == 0)) goto LAB_01836034;
      local_68 = (_Unwind_Exception *)
                 (pbVar17 + (uVar20 - (uVar15 << (*(ulong *)(&DAT_01a67800 + uVar21 * 8) & 0x3f))));
      plVar10 = (long *)FUN_01836094(&local_68,uVar6);
      local_68 = (_Unwind_Exception *)&local_78;
      uVar11 = (**(code **)(*plVar10 + 0x20))(plVar10,&std::bad_exception::typeinfo,&local_68);
      uVar13 = 0;
      uVar15 = 0;
      if ((uVar11 & 1) != 0) {
        __cxa_end_catch();
        puVar8 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar8 = &PTR__bad_exception_01cdf6e0;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&std::bad_exception::typeinfo,std::bad_exception::~bad_exception);
      }
    }
    std::bad_exception::~bad_exception((bad_exception *)&local_78);
  }
  __cxa_end_catch();
  FUN_018354b8(uVar7);
LAB_01836054:
  uVar12 = FUN_018354b8(uVar7);
  std::bad_exception::~bad_exception((bad_exception *)&local_78);
  __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar12);
}

