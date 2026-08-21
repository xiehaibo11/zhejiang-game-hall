
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
  undefined8 uVar11;
  ulong uVar12;
  _Unwind_Exception *p_Var13;
  long lVar14;
  ulong uVar15;
  byte *unaff_x22;
  byte *pbVar16;
  _Unwind_Exception *p_Var18;
  long unaff_x25;
  ulong uVar19;
  ulong uVar20;
  undefined **local_78;
  byte *local_70;
  _Unwind_Exception *local_68;
  byte *pbVar17;
  
  if (param_1 == (_Unwind_Exception *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01250c3c(0,0);
  }
  __cxa_begin_catch();
  uVar6 = __cxxabiv1::__isOurExceptionClass(param_1);
  if ((uVar6 & 1) == 0) {
    uVar7 = std::get_terminate();
    uVar11 = std::get_unexpected();
    p_Var18 = (_Unwind_Exception *)0x0;
  }
  else {
    unaff_x22 = *(byte **)(param_1 + -0x20);
    uVar11 = *(undefined8 *)(param_1 + -0x48);
    uVar7 = *(undefined8 *)(param_1 + -0x40);
    p_Var18 = param_1 + -0x60;
    unaff_x25 = (long)(int)~*(uint *)(param_1 + -0x2c);
    local_70 = unaff_x22;
  }
  FUN_012503d4(uVar11);
  __cxa_begin_catch();
  if ((uVar6 & 1) != 0) {
    local_70 = unaff_x22 + 1;
    FUN_01250fe4(&local_70,*unaff_x22);
    pbVar17 = local_70 + 1;
    bVar4 = *local_70;
    uVar6 = (ulong)bVar4;
    local_70 = pbVar17;
    if (uVar6 != 0xff) {
      uVar12 = 0;
      uVar19 = 0;
      do {
        pbVar16 = pbVar17 + 1;
        bVar3 = *pbVar17;
        uVar19 = ((ulong)bVar3 & 0x7f) << (uVar12 & 0x3f) | uVar19;
        uVar12 = uVar12 + 7;
        pbVar17 = pbVar16;
      } while ((char)bVar3 < '\0');
      local_70 = pbVar16;
      puVar8 = (undefined8 *)__cxa_get_globals_fast();
      p_Var13 = (_Unwind_Exception *)*puVar8;
      if (p_Var13 != (_Unwind_Exception *)0x0) {
        p_Var1 = p_Var13 + 0x60;
        uVar5 = __cxxabiv1::__isOurExceptionClass(p_Var1);
        p_Var2 = (_Unwind_Exception *)(pbVar16 + uVar19);
        if ((p_Var13 != p_Var18) && (((uVar5 ^ 1) & 1) == 0)) {
          lVar14 = *(long *)(p_Var13 + 8);
          lVar9 = __cxxabiv1::__getExceptionClass(p_Var1);
          if (lVar9 == 0x434c4e47432b2b01) {
            p_Var18 = *(_Unwind_Exception **)p_Var13;
          }
          else {
            p_Var18 = p_Var13 + 0x80;
          }
          uVar12 = 0;
          uVar15 = 0;
          uVar20 = uVar6 & 0xf;
          lVar9 = unaff_x25 + uVar19;
          while( true ) {
            for (; uVar15 = ((ulong)pbVar16[lVar9] & 0x7f) << (uVar12 & 0x3f) | uVar15,
                (char)pbVar16[lVar9] < '\0'; lVar9 = lVar9 + 1) {
              uVar12 = uVar12 + 7;
            }
            if (uVar15 == 0) break;
            if ((0xc < (uint)uVar20) || ((0x1c1dU >> uVar20 & 1) == 0)) goto LAB_01250f20;
            local_68 = p_Var2 + -(uVar15 << (*(ulong *)(&DAT_014a70d0 + uVar20 * 8) & 0x3f));
            plVar10 = (long *)FUN_01250fe4(&local_68,uVar6);
            local_68 = p_Var18;
            uVar12 = (**(code **)(*plVar10 + 0x20))(plVar10,lVar14,&local_68);
            if ((uVar12 & 1) != 0) {
              do {
                *(int *)(p_Var13 + 0x30) = -*(int *)(p_Var13 + 0x30);
                *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
                __cxa_end_catch();
                __cxa_end_catch();
                __cxa_begin_catch(p_Var1);
                __cxa_rethrow();
              } while( true );
            }
            uVar12 = 0;
            uVar15 = 0;
            lVar9 = lVar9 + 1;
          }
        }
        local_78 = &PTR__bad_exception_01735508;
        uVar15 = (ulong)(bVar4 + 6) & 0xf;
        lVar9 = unaff_x25 + uVar19;
        uVar12 = 0;
        uVar19 = 0;
LAB_01250eb0:
        for (; uVar19 = ((ulong)pbVar16[lVar9] & 0x7f) << (uVar12 & 0x3f) | uVar19,
            (char)pbVar16[lVar9] < '\0'; lVar9 = lVar9 + 1) {
          uVar12 = uVar12 + 7;
        }
        if (uVar19 == 0) {
          std::bad_exception::~bad_exception((bad_exception *)&local_78);
          goto LAB_01250f34;
        }
        if ((10 < (uint)uVar15) || ((0x747U >> uVar15 & 1) == 0)) {
LAB_01250f20:
          local_68 = p_Var2;
                    /* WARNING: Subroutine does not return */
          FUN_01250c3c(1,param_1);
        }
        local_68 = p_Var2 + -(uVar19 << (*(ulong *)(&DAT_014a7138 + uVar15 * 8) & 0x3f));
        plVar10 = (long *)FUN_01250fe4(&local_68,uVar6);
        local_68 = (_Unwind_Exception *)&local_78;
        uVar12 = (**(code **)(*plVar10 + 0x20))(plVar10,&std::bad_exception::typeinfo,&local_68);
        if ((uVar12 & 1) == 0) {
          uVar12 = 0;
          uVar19 = 0;
          lVar9 = lVar9 + 1;
          goto LAB_01250eb0;
        }
        goto LAB_01250f40;
      }
    }
    uVar11 = FUN_01250414(uVar7);
    std::bad_exception::~bad_exception((bad_exception *)&local_78);
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar11);
  }
LAB_01250f34:
  __cxa_end_catch();
  FUN_01250414(uVar7);
LAB_01250f40:
  __cxa_end_catch();
  puVar8 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar8 = &PTR__bad_exception_01735508;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar8,&std::bad_exception::typeinfo,std::bad_exception::~bad_exception);
}

