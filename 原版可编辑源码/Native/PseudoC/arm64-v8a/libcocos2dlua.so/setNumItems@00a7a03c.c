
/* fairygui::GList::setNumItems(int) */

void __thiscall fairygui::GList::setNumItems(GList *this,int param_1)

{
  uint uVar1;
  basic_string *pbVar2;
  void *pvVar3;
  long *plVar4;
  GObject *pGVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  void *__src;
  size_t __n;
  undefined8 uVar16;
  ulong uVar17;
  int local_84;
  basic_string local_80;
  undefined4 uStack_7f;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  uint3 uStack_73;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (this[0x338] == (GList)0x0) {
    uVar13 = (ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3;
    iVar15 = (int)uVar13;
    if (iVar15 < param_1) {
      plVar4 = *(long **)(this + 0x2d0);
      if (plVar4 != (long *)0x0) goto LAB_00a7a21c;
      do {
        uVar17 = (ulong)(cocos2d::STD_STRING_EMPTY >> 1);
        if ((cocos2d::STD_STRING_EMPTY & 1) != 0) {
          uVar17 = DAT_01792420;
        }
        pbVar2 = (basic_string *)(this + 0x308);
        if (uVar17 != 0) {
          pbVar2 = (basic_string *)&cocos2d::STD_STRING_EMPTY;
        }
        pGVar5 = (GObject *)GObjectPool::getObject(*(GObjectPool **)(this + 0x328),pbVar2);
        if (pGVar5 != (GObject *)0x0) {
          GObject::setVisible(pGVar5,true);
        }
        GComponent::addChild((GComponent *)this,pGVar5);
        while( true ) {
          uVar1 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar1;
          if (param_1 == uVar1) goto LAB_00a7a3d4;
          plVar4 = *(long **)(this + 0x2d0);
          if (plVar4 == (long *)0x0) break;
LAB_00a7a21c:
          local_84 = (int)uVar13;
          (**(code **)(*plVar4 + 0x30))(&local_80,plVar4,&local_84);
          uVar17 = (ulong)((byte)local_80 >> 1);
          if (((byte)local_80 & 1) != 0) {
            uVar17 = CONCAT35(uStack_73,uStack_78);
          }
          if (uVar17 == 0) {
            pGVar5 = (GObject *)
                     GObjectPool::getObject
                               (*(GObjectPool **)(this + 0x328),(basic_string *)(this + 0x308));
          }
          else {
            pGVar5 = (GObject *)GObjectPool::getObject(*(GObjectPool **)(this + 0x328),&local_80);
          }
          if (pGVar5 != (GObject *)0x0) {
            GObject::setVisible(pGVar5,true);
          }
          GComponent::addChild((GComponent *)this,pGVar5);
          if (((byte)local_80 & 1) != 0) {
            operator_delete(local_70);
          }
        }
      } while( true );
    }
    if ((iVar15 < 0) || (*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0) >> 3 <= (long)iVar15)) {
      uVar13 = (ulong)(iVar15 - 1);
    }
    if (param_1 <= (int)uVar13) {
      do {
        iVar15 = (int)uVar13;
        pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar15);
        GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar5);
        (**(code **)(*(long *)this + 0xb8))(this,uVar13 & 0xffffffff);
        uVar13 = (ulong)(iVar15 - 1);
      } while (param_1 < iVar15);
    }
LAB_00a7a3d4:
    if ((*(long *)(this + 0x2a0) != 0) && (0 < param_1)) {
      iVar15 = 0;
      do {
        uVar16 = GComponent::getChildAt((GComponent *)this,iVar15);
        local_80 = SUB81(uVar16,0);
        uStack_7f = (undefined4)((ulong)uVar16 >> 8);
        uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
        plVar4 = *(long **)(this + 0x2a0);
        local_84 = iVar15;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_84,&local_80);
        iVar15 = iVar15 + 1;
      } while (param_1 != iVar15);
    }
    lVar8 = *(long *)(lVar8 + 0x28);
    goto LAB_00a7a428;
  }
  puVar11 = *(undefined8 **)(this + 0x370);
  lVar9 = *(long *)(this + 0x368);
  iVar15 = param_1;
  if (this[0x339] != (GList)0x0) {
    iVar15 = param_1 * 6;
  }
  iVar6 = (int)((long)puVar11 - lVar9 >> 3) * -0x55555555;
  *(int *)(this + 0x33c) = param_1;
  *(int *)(this + 0x340) = iVar15;
  if (iVar6 < iVar15) {
    do {
      iVar6 = iVar6 + 1;
      uStack_78 = 0;
      local_80 = (basic_string)0x0;
      uStack_7f = 0;
      uStack_7b = 0;
      uVar16 = *(undefined8 *)(this + 0x350);
      if (puVar11 == *(undefined8 **)(this + 0x378)) {
        __src = *(void **)(this + 0x368);
        __n = (long)puVar11 - (long)__src;
        uVar13 = ((long)__n >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = (long)*(undefined8 **)(this + 0x378) - (long)__src >> 3;
        uVar17 = 0xaaaaaaaaaaaaaaa;
        if ((ulong)(lVar9 * -0x5555555555555555) < 0x555555555555555) {
          uVar10 = lVar9 * 0x5555555555555556;
          uVar17 = uVar13;
          if (uVar13 <= uVar10) {
            uVar17 = uVar10;
          }
          if (uVar17 != 0) goto LAB_00a7a154;
          pvVar3 = (void *)0x0;
        }
        else {
LAB_00a7a154:
          pvVar3 = operator_new(uVar17 * 0x18);
        }
        puVar11 = (undefined8 *)((long)pvVar3 + ((long)__n >> 3) * 8);
        *puVar11 = uVar16;
        puVar11[2] = CONCAT35(uStack_73,uStack_78);
        puVar11[1] = CONCAT35(uStack_7b,CONCAT41(uStack_7f,local_80));
        if (0 < (long)__n) {
          memcpy((void *)((long)puVar11 - __n),__src,__n);
        }
        *(void **)(this + 0x368) = (void *)((long)puVar11 - __n);
        *(undefined8 **)(this + 0x370) = puVar11 + 3;
        *(void **)(this + 0x378) = (void *)((long)pvVar3 + uVar17 * 0x18);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar11 = uVar16;
        puVar11[2] = (ulong)uStack_73 << 0x28;
        puVar11[1] = 0;
        *(undefined8 **)(this + 0x370) = puVar11 + 3;
      }
      if (*(int *)(this + 0x340) <= iVar6) goto LAB_00a7a340;
      puVar11 = *(undefined8 **)(this + 0x370);
    } while( true );
  }
  if (iVar15 < iVar6) {
    lVar14 = (long)iVar15;
    uVar13 = iVar6 - lVar14;
    lVar12 = lVar14;
    if (1 < uVar13) {
      uVar10 = uVar13 & 0xfffffffffffffffe;
      lVar12 = uVar10 + lVar14;
      puVar7 = (undefined1 *)(lVar9 + lVar14 * 0x18 + 0x2c);
      uVar17 = uVar10;
      do {
        puVar7[-0x18] = 0;
        *puVar7 = 0;
        uVar17 = uVar17 - 2;
        puVar7 = puVar7 + 0x30;
      } while (uVar17 != 0);
      if (uVar13 == uVar10) goto LAB_00a7a340;
    }
    lVar14 = iVar6 - lVar12;
    puVar7 = (undefined1 *)(lVar9 + lVar12 * 0x18 + 0x14);
    do {
      lVar14 = lVar14 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 0x18;
    } while (lVar14 != 0);
  }
LAB_00a7a340:
  if (*(int *)(this + 0x358) != 0) {
    lVar9 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::unschedule
              (*(_func_void_float **)(lVar9 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
  }
  doRefreshVirtualList(this);
  lVar8 = *(long *)(lVar8 + 0x28);
LAB_00a7a428:
  if (lVar8 != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

