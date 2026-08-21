
/* CanvasRenderingContext2DImpl::fillData() */

void __thiscall CanvasRenderingContext2DImpl::fillData(CanvasRenderingContext2DImpl *this)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  _jbyteArray *p_Var4;
  long *plVar5;
  uchar *puVar6;
  long lVar7;
  _jobject *p_Var8;
  size_t __size;
  float fVar9;
  float fVar10;
  float fVar11;
  basic_string local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined2 local_6f;
  undefined1 local_6d;
  undefined4 uStack_6c;
  void *local_68;
  ulong local_60 [2];
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  p_Var8 = *(_jobject **)this;
  local_50 = operator_new(0x30);
  local_60[1] = 0x2d;
  local_60[0] = 0x31;
  uStack_6c = 0;
  local_78 = (basic_string)0x14;
  local_6f = 0x6665;
  builtin_strncpy(local_50,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_68 = (void *)0x0;
  uStack_77 = 0x61746144746567;
  uStack_70 = 0x52;
  local_6d = 0;
  p_Var4 = cocos2d::JniHelper::callObjectByteArrayMethod<>
                     (p_Var8,(basic_string *)local_60,&local_78);
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  plVar5 = (long *)cocos2d::JniHelper::getEnv();
  iVar3 = (**(code **)(*plVar5 + 0x558))(plVar5,p_Var4);
  __size = (size_t)iVar3;
  puVar6 = malloc(__size);
  plVar5 = (long *)cocos2d::JniHelper::getEnv();
  (**(code **)(*plVar5 + 0x640))(plVar5,p_Var4,0,iVar3,puVar6);
  if ((0 < iVar3) && (this[0x20] == (CanvasRenderingContext2DImpl)0x0)) {
    lVar7 = 0;
    do {
      pbVar1 = puVar6 + lVar7;
      if (pbVar1[3] != 0) {
        fVar11 = (float)pbVar1[3];
        fVar9 = (float)NEON_ucvtf((uint)*pbVar1);
        fVar10 = (float)NEON_ucvtf((uint)pbVar1[1]);
        iVar3 = (int)((fVar9 / fVar11) * 255.0);
        if (0xfe < iVar3) {
          iVar3 = 0xff;
        }
        fVar9 = (float)NEON_ucvtf((uint)pbVar1[2]);
        *pbVar1 = (byte)iVar3;
        iVar3 = (int)((fVar10 / fVar11) * 255.0);
        if (0xfe < iVar3) {
          iVar3 = 0xff;
        }
        pbVar1[1] = (byte)iVar3;
        iVar3 = (int)((fVar9 / fVar11) * 255.0);
        if (0xfe < iVar3) {
          iVar3 = 0xff;
        }
        pbVar1[2] = (byte)iVar3;
      }
      lVar7 = lVar7 + 4;
    } while (lVar7 < (long)__size);
  }
  cocos2d::Data::fastSet((Data *)(this + 8),puVar6,__size);
  plVar5 = (long *)cocos2d::JniHelper::getEnv();
  (**(code **)(*plVar5 + 0xb8))(plVar5,p_Var4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

