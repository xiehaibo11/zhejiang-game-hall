
/* WARNING: Removing unreachable block (ram,0x00e9ab60) */
/* cocos2d::network::HttpClient::clearResponseAndRequestQueue() */

void __thiscall cocos2d::network::HttpClient::clearResponseAndRequestQueue(HttpClient *this)

{
  size_t sVar1;
  long lVar2;
  long *plVar3;
  HttpClient *pHVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_88;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock((mutex *)(this + 0xd8));
  puVar7 = *(undefined8 **)(this + 0xc0);
  if (*(undefined8 **)(this + 200) != puVar7) {
    do {
      while (plVar3 = *(long **)(this + 0x330), plVar3 == (long *)0x0) {
LAB_00e9ab98:
        Ref::release((Ref *)*puVar7);
        Ref::release((Ref *)*puVar7);
        sVar1 = *(long *)(this + 200) - (long)(puVar7 + 1);
        if (sVar1 != 0) {
          memmove(puVar7,puVar7 + 1,sVar1);
        }
        *(undefined8 **)(this + 200) = puVar7 + ((long)sVar1 >> 3);
        if (puVar7 + ((long)sVar1 >> 3) == puVar7) goto LAB_00e9abd8;
      }
      local_88 = *puVar7;
      uVar5 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
      if ((uVar5 & 1) != 0) goto LAB_00e9ab98;
      puVar7 = puVar7 + 1;
    } while (*(undefined8 **)(this + 200) != puVar7);
  }
LAB_00e9abd8:
  std::__ndk1::mutex::unlock((mutex *)(this + 0xd8));
  std::__ndk1::mutex::lock((mutex *)(this + 0x118));
  pHVar4 = *(HttpClient **)(this + 0x360);
  if (pHVar4 == (HttpClient *)0x0) {
    puVar7 = *(undefined8 **)(this + 0x100);
    puVar10 = *(undefined8 **)(this + 0x108);
    if (puVar7 != puVar10) {
      do {
        puVar9 = puVar7 + 1;
        Ref::release((Ref *)*puVar7);
        puVar7 = puVar9;
      } while (puVar10 != puVar9);
      puVar7 = *(undefined8 **)(this + 0x100);
    }
    *(undefined8 **)(this + 0x108) = puVar7;
    goto LAB_00e9ad68;
  }
  puVar7 = *(undefined8 **)(this + 0x100);
  puVar10 = *(undefined8 **)(this + 0x108);
  if (this + 0x340 == pHVar4) {
    local_60 = alStack_80;
    (**(code **)(*(long *)pHVar4 + 0x18))(pHVar4,alStack_80);
    if (puVar7 != puVar10) goto LAB_00e9ac68;
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pHVar4 + 0x10))();
    if (puVar7 == puVar10) {
      FUN_00e9aca0();
      return;
    }
LAB_00e9ac68:
    while( true ) {
      local_88 = *puVar7;
      if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar5 = (**(code **)(*local_60 + 0x30))(local_60,&local_88);
      if ((uVar5 & 1) != 0) break;
      puVar7 = puVar7 + 1;
      if (puVar10 == puVar7) {
        FUN_00e9acf4();
        return;
      }
    }
  }
  if (puVar7 != puVar10) {
    puVar9 = puVar7 + 1;
    puVar8 = puVar7;
    if (puVar9 == puVar10) {
      FUN_00e9acf4();
      return;
    }
    do {
      local_88 = *puVar9;
      if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar5 = (**(code **)(*local_60 + 0x30))(local_60,&local_88);
      puVar7 = puVar8;
      if ((uVar5 & 1) == 0) {
        puVar7 = puVar8 + 1;
        *puVar8 = *puVar9;
      }
      puVar9 = puVar9 + 1;
      puVar8 = puVar7;
    } while (puVar10 != puVar9);
  }
  puVar9 = *(undefined8 **)(this + 0x108);
  puVar10 = puVar7;
  if (puVar7 != puVar9) {
    do {
      Ref::release((Ref *)*puVar10);
      puVar10 = puVar10 + 1;
    } while (puVar9 != puVar10);
    sVar1 = *(long *)(this + 0x108) - (long)puVar9;
    if (sVar1 != 0) {
      memmove(puVar7,puVar9,sVar1);
    }
    *(undefined8 **)(this + 0x108) = puVar7 + ((long)sVar1 >> 3);
  }
  if (alStack_80 == local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00e9ad68;
    pcVar6 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar6)();
LAB_00e9ad68:
  std::__ndk1::mutex::unlock((mutex *)(this + 0x118));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

