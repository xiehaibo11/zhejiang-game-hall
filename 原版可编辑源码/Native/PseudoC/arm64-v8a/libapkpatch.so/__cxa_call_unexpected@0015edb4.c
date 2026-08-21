
void __cxa_call_unexpected(long param_1)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  char *extraout_x9;
  char *pcVar7;
  long unaff_x21;
  undefined *unaff_x23;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  undefined **local_70;
  char *local_68;
  byte *pbVar13;
  
  if (param_1 == 0) {
    __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  __cxa_begin_catch();
  uVar3 = FUN_001488a4(param_1);
  if ((uVar3 & 1) == 0) {
    uVar4 = std::get_terminate();
    uVar10 = std::get_unexpected();
    lVar9 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + -0x40);
    uVar4 = *(undefined8 *)(param_1 + -0x38);
    unaff_x21 = (long)*(int *)(param_1 + -0x24);
    unaff_x23 = *(undefined **)(param_1 + -0x18);
    lVar9 = param_1 + -0x60;
  }
  FUN_0014910c(uVar10);
  __cxa_begin_catch();
  if ((uVar3 & 1) != 0) {
    local_68 = unaff_x23 + 1;
    FUN_0015efc0(&local_68,*unaff_x23);
    cVar2 = *local_68;
    pcVar7 = local_68;
    if (cVar2 != -1) goto LAB_0015ee54;
    do {
      FUN_00149158(uVar4);
      pcVar7 = extraout_x9;
LAB_0015ee54:
      uVar3 = 0;
      uVar8 = 0;
      pbVar13 = (byte *)(pcVar7 + 1);
      do {
        pbVar12 = pbVar13 + 1;
        bVar1 = *pbVar13;
        uVar8 = ((ulong)bVar1 & 0x7f) << (uVar3 & 0x3f) | uVar8;
        uVar3 = uVar3 + 7;
        pbVar13 = pbVar12;
      } while ((char)bVar1 < '\0');
      plVar5 = (long *)__cxa_get_globals_fast();
      lVar11 = *plVar5;
    } while (lVar11 == 0);
    uVar3 = FUN_001488a4(lVar11 + 0x60);
    if (((uVar3 & 1) != 0) && (lVar11 != lVar9)) {
      uVar10 = *(undefined8 *)(lVar11 + 0x10);
      lVar9 = FUN_00148898(lVar11 + 0x60);
      if (lVar9 == 0x434c4e47432b2b01) {
        lVar9 = *(long *)(lVar11 + 8);
      }
      else {
        lVar9 = lVar11 + 0x80;
      }
      uVar3 = FUN_0015f134(unaff_x21,pbVar12 + uVar8,cVar2,uVar10,lVar9,param_1);
      if ((uVar3 & 1) == 0) {
        *(int *)(lVar11 + 0x38) = -*(int *)(lVar11 + 0x38);
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar11 + 0x60);
        uVar10 = __cxa_rethrow();
        std::bad_alloc::~bad_alloc((bad_alloc *)&local_70);
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_001614e4(uVar10);
      }
    }
    unaff_x23 = &std::bad_exception::vtable;
    local_70 = &PTR__bad_alloc_00169df0;
    uVar3 = FUN_0015f134(unaff_x21,pbVar12 + uVar8,cVar2,&std::bad_exception::typeinfo,&local_70,
                         param_1);
    if ((uVar3 & 1) == 0) goto LAB_0015ef38;
    std::bad_alloc::~bad_alloc((bad_alloc *)&local_70);
  }
  __cxa_end_catch();
  FUN_00149158(uVar4);
LAB_0015ef38:
  __cxa_end_catch();
  puVar6 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar6 = unaff_x23 + 0x10;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar6,&std::bad_exception::typeinfo,std::bad_alloc::~bad_alloc);
}

