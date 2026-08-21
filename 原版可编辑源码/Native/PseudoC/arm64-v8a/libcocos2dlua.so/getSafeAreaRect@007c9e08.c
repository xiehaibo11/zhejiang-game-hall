
/* cocos2d::GLViewImpl::getSafeAreaRect() const */

void cocos2d::GLViewImpl::getSafeAreaRect(void)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  GLView *in_x0;
  int *piVar5;
  float *in_x8;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  basic_string local_98;
  undefined5 uStack_97;
  undefined2 uStack_92;
  undefined4 local_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  GLView::getSafeAreaRect(in_x0);
  fVar6 = in_x8[2];
  fVar7 = in_x8[3];
  if (fVar7 <= fVar6) {
    fVar7 = fVar6 / fVar7;
  }
  else {
    fVar7 = fVar7 / fVar6;
  }
  fVar11 = *(float *)(in_x0 + 0x60);
  fVar6 = *(float *)(in_x0 + 100);
  local_70 = operator_new(0x20);
  uStack_89 = 0;
  local_98 = (basic_string)0x1a;
  builtin_strncpy(local_70,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  local_88 = (void *)0x0;
  uStack_78 = 0x1f;
  local_80 = 0x21;
  uStack_97 = 0x7263537369;
  uStack_92 = 0x6565;
  local_90 = 0x756f526e;
  uStack_8c = 0x6e;
  uStack_8b = 100;
  uStack_8a = 0;
  bVar2 = JniHelper::callStaticBooleanMethod<>((basic_string *)&local_80,&local_98);
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  local_70 = operator_new(0x20);
  builtin_strncpy(local_70,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  uStack_8b = 0;
  uStack_8a = 0;
  uStack_89 = 0;
  local_98 = (basic_string)0x16;
  local_88 = (void *)0x0;
  uStack_78 = 0x1f;
  local_80 = 0x21;
  uStack_97 = 0x6f53736168;
  uStack_92 = 0x7466;
  local_90 = 0x7379654b;
  uStack_8c = 0;
  bVar3 = JniHelper::callStaticBooleanMethod<>((basic_string *)&local_80,&local_98);
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  local_70 = operator_new(0x20);
  uStack_78 = 0x1f;
  local_80 = 0x21;
  local_98 = (basic_string)0x1e;
  builtin_strncpy(local_70,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  uStack_8c = 0x62;
  uStack_8b = 0x6c;
  uStack_8a = 0x65;
  uStack_89 = 100;
  local_88 = (void *)0x0;
  uStack_97 = 0x7475437369;
  uStack_92 = 0x756f;
  local_90 = 0x616e4574;
  bVar4 = JniHelper::callStaticBooleanMethod<>((basic_string *)&local_80,&local_98);
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  fVar6 = 30.0 / fVar6;
  if (bVar2) {
    fVar7 = in_x8[3];
    if (in_x8[2] < fVar7) {
      fVar11 = 30.0 / fVar11;
      in_x8[2] = in_x8[2] - (fVar11 + fVar11);
      in_x8[3] = fVar7 - (fVar6 + fVar6);
      *(ulong *)in_x8 =
           CONCAT44(fVar6 + fVar6 + (float)((ulong)*(undefined8 *)in_x8 >> 0x20),
                    fVar11 + (float)*(undefined8 *)in_x8);
    }
    else {
      in_x8[3] = fVar7 - (fVar6 + fVar6);
      in_x8[1] = fVar6 + in_x8[1];
    }
  }
  else if (fVar7 < 2.0) {
    if ((bVar3) && (in_x8[2] < in_x8[3])) {
      in_x8[3] = in_x8[3] - (fVar6 + fVar6);
      in_x8[1] = fVar6 + fVar6 + in_x8[1];
    }
  }
  else {
    fVar11 = fVar6 + fVar6;
    fVar7 = fVar11;
    if (!bVar3) {
      fVar7 = 0.0;
    }
    if (in_x8[3] <= in_x8[2]) {
      in_x8[1] = fVar6 + in_x8[1];
    }
    else {
      in_x8[1] = fVar7 + in_x8[1];
      fVar11 = fVar6 + fVar7;
    }
    in_x8[3] = in_x8[3] - fVar11;
  }
  if (bVar4) {
    if (((DAT_01781ae8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01781ae8), iVar8 != 0)) {
      local_70 = operator_new(0x20);
      uStack_78 = 0x1f;
      local_80 = 0x21;
      uStack_89 = 0;
      local_98 = (basic_string)0x1a;
      builtin_strncpy(local_70,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
      local_88 = (void *)0x0;
      uStack_97 = 0x6153746567;
      uStack_92 = 0x6566;
      local_90 = 0x65736e49;
      uStack_8c = 0x74;
      uStack_8b = 0x73;
      uStack_8a = 0;
      piVar5 = JniHelper::callStaticIntArrayMethod<>((basic_string *)&local_80,&local_98);
      if (((byte)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      DAT_01781ae0 = piVar5;
      __cxa_guard_release(&DAT_01781ae8);
    }
    if (DAT_01781ae0 != (int *)0x0) {
      fVar11 = *(float *)(in_x0 + 0x60);
      fVar6 = *(float *)(in_x0 + 100);
      iVar10 = DAT_01781ae0[2];
      iVar8 = DAT_01781ae0[3];
      fVar9 = (float)*DAT_01781ae0 / fVar6;
      fVar7 = (float)DAT_01781ae0[1] / fVar11;
      if (0.0 < fVar9) {
        in_x8[1] = fVar9 + in_x8[1];
        in_x8[3] = in_x8[3] - fVar9;
      }
      fVar11 = (float)iVar10 / fVar11;
      if (0.0 < fVar7) {
        *in_x8 = fVar7 + *in_x8;
        in_x8[2] = in_x8[2] - fVar7;
      }
      fVar6 = (float)iVar8 / fVar6;
      if (0.0 < fVar11) {
        in_x8[2] = in_x8[2] - fVar11;
      }
      if (0.0 < fVar6) {
        in_x8[3] = in_x8[3] - fVar6;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

