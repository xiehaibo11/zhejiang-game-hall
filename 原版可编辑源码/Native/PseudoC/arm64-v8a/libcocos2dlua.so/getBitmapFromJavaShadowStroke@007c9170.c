
/* cocos2d::BitmapDC::getBitmapFromJavaShadowStroke(char const*, int, int,
   cocos2d::Device::TextAlign, cocos2d::FontDefinition const&) */

bool __thiscall
cocos2d::BitmapDC::getBitmapFromJavaShadowStroke
          (undefined8 param_1_00,char *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5,ulong *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *__src;
  undefined1 *puVar12;
  ulong uVar13;
  ulong local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined1 *local_90;
  _jclass *local_88;
  _jmethodID *p_Stack_80;
  undefined8 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar6 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_88,"org.cocos2dx.lib.Cocos2dxBitmap",
                     "createTextBitmapShadowStroke","([BLjava/lang/String;IIIIIIIIFZFFFFZIIIIFZI)Z")
  ;
  if ((uVar6 & 1) == 0) {
    bVar3 = false;
    goto LAB_007c9534;
  }
  uStack_98 = 0;
  local_90 = (undefined1 *)0x0;
  local_a0 = 0;
  if ((*param_6 & 1) == 0) {
    local_90 = (undefined1 *)param_6[2];
    uStack_98 = param_6[1];
    local_a0 = *param_6;
  }
  else {
    uVar6 = param_6[1];
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = (void *)param_6[2];
    if (uVar6 < 0x17) {
      puVar12 = (undefined1 *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_007c9250;
    }
    else {
      uVar13 = uVar6 + 0x10 & 0xfffffffffffffff0;
      puVar12 = operator_new(uVar13);
      local_a0 = uVar13 | 1;
      uStack_98 = uVar6;
      local_90 = puVar12;
LAB_007c9250:
      memcpy(puVar12,__src,uVar6);
    }
    puVar12[uVar6] = 0;
  }
  plVar7 = (long *)FileUtils::getInstance();
  uVar6 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_a0);
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar7 + 0x50))(&local_b8,plVar7,param_6);
    if ((local_a0 & 1) != 0) {
      *local_90 = 0;
      uStack_98 = 0;
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    local_90 = local_a8;
    puVar12 = (undefined1 *)((ulong)&local_a0 | 1);
    uVar6 = local_b8 >> 1 & 0x7f;
    if ((local_b8 & 1) != 0) {
      puVar12 = local_a8;
      uVar6 = uStack_b0;
    }
    if (6 < (long)uVar6) {
      puVar1 = puVar12 + uVar6;
      puVar8 = puVar12;
      do {
        if ((uVar6 - 6 == 0) ||
           (puVar8 = memchr(puVar8,0x61,uVar6 - 6), puVar8 == (undefined1 *)0x0)) break;
        iVar5 = memcmp(puVar8,"assets/",7);
        if (iVar5 == 0) {
          if ((puVar8 != puVar1) && (puVar8 == puVar12)) {
            uVar6 = __strlen_chk("assets/",8);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)&local_b8,(ulong)&local_a0,uVar6,
                         (allocator *)0xffffffffffffffff);
            if ((local_a0 & 1) != 0) {
              *local_90 = 0;
              uStack_98 = 0;
              if ((local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
            }
            uStack_98 = uStack_b0;
            local_a0 = local_b8;
            local_90 = local_a8;
          }
          break;
        }
        puVar8 = puVar8 + 1;
        uVar6 = (long)puVar1 - (long)puVar8;
      } while (6 < (long)uVar6);
    }
  }
  sVar9 = strlen(param_1);
  uVar10 = (**(code **)(*(long *)local_88 + 0x580))(local_88,sVar9 & 0xffffffff);
  (**(code **)(*(long *)local_88 + 0x680))(local_88,uVar10,0,sVar9 & 0xffffffff,param_1);
  puVar12 = (undefined1 *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    puVar12 = local_90;
  }
  uVar11 = (**(code **)(*(long *)local_88 + 0x538))(local_88,puVar12);
  cVar4 = _JNIEnv::CallStaticBooleanMethod
                    (local_88,p_Stack_80,(double)*(float *)((long)param_6 + 0x24),
                     (double)*(float *)(param_6 + 7),(double)-*(float *)((long)param_6 + 0x3c),
                     (double)*(float *)(param_6 + 8),(double)*(float *)((long)param_6 + 0x44),
                     (double)*(float *)(param_6 + 10),local_78,uVar10,uVar11,(ulong)(uint)param_6[3]
                     ,(ulong)(byte)param_6[6],(ulong)*(byte *)((long)param_6 + 0x31),
                     (uint)*(byte *)((long)param_6 + 0x32),(uint)*(byte *)((long)param_6 + 0x33),
                     param_5,param_2,param_3,(uint)*(byte *)((long)param_6 + 0x34),
                     (uint)(byte)param_6[9],(uint)*(byte *)((long)param_6 + 0x49),
                     (uint)*(byte *)((long)param_6 + 0x4a),(uint)*(byte *)((long)param_6 + 0x4b),
                     (uint)*(byte *)((long)param_6 + 0x4c),(uint)*(byte *)((long)param_6 + 0x54),
                     (int)param_6[0xb]);
  bVar3 = cVar4 != '\0';
  if (bVar3) {
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,uVar10);
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,uVar11);
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,p_Stack_80);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_007c9534:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

