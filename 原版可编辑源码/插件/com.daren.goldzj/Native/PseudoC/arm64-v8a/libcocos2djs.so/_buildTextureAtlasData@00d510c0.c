
/* dragonBones::CCFactory::_buildTextureAtlasData(dragonBones::TextureAtlasData*, void*) const */

CCTextureAtlasData * __thiscall
dragonBones::CCFactory::_buildTextureAtlasData
          (CCFactory *this,TextureAtlasData *param_1,void *param_2)

{
  CCFactory *pCVar1;
  basic_string *pbVar2;
  CCFactory CVar3;
  long lVar4;
  basic_string *pbVar5;
  void *__dest;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  basic_string *local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_1 == (TextureAtlasData *)0x0) {
    param_1 = (TextureAtlasData *)BaseObject::borrowObject<dragonBones::CCTextureAtlasData>();
    goto LAB_00d51238;
  }
  CVar3 = this[0x58];
  if (((byte)CVar3 & 1) == 0) {
    pCVar1 = this + 0x59;
    pbVar2 = (basic_string *)(ulong)((byte)CVar3 >> 1);
  }
  else {
    pCVar1 = *(CCFactory **)(this + 0x68);
    pbVar2 = *(basic_string **)(this + 0x60);
  }
  do {
    pbVar5 = pbVar2;
    if (pbVar5 == (basic_string *)0x0) goto LAB_00d51228;
    pbVar2 = pbVar5 + -1;
  } while ((pCVar1 + (long)pbVar5)[-1] != (CCFactory)0x2f);
  if (pbVar5 + -1 != (basic_string *)0xffffffffffffffff) {
    local_70 = 0;
    local_68 = (basic_string *)0x0;
    local_60 = (void *)0x0;
    pbVar2 = *(basic_string **)(this + 0x60);
    pCVar1 = *(CCFactory **)(this + 0x68);
    if (((byte)CVar3 & 1) == 0) {
      pCVar1 = this + 0x59;
      pbVar2 = (basic_string *)(ulong)((byte)CVar3 >> 1);
    }
    if (pbVar5 <= pbVar2) {
      pbVar2 = pbVar5;
    }
    if ((basic_string *)0xffffffffffffffef < pbVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (pbVar2 < (basic_string *)0x17) {
      __dest = (void *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)pbVar2 << 1);
      pbVar5 = param_2;
      if (pbVar2 != (basic_string *)0x0) goto LAB_00d511b0;
    }
    else {
      __dest = operator_new((ulong)(pbVar2 + 0x10) & 0xfffffffffffffff0);
      local_70 = (ulong)(pbVar2 + 0x10) & 0xfffffffffffffff0 | 1;
      local_68 = pbVar2;
      local_60 = __dest;
LAB_00d511b0:
      pbVar5 = pbVar2;
      memcpy(__dest,pCVar1,(size_t)pbVar2);
    }
    *(basic_string *)((long)__dest + (long)pbVar2) = (basic_string)0x0;
    pbVar2 = (basic_string *)(param_1 + 0x38);
    std::__ndk1::operator+((__ndk1 *)&local_70,pbVar2,pbVar5);
    if (((byte)param_1[0x38] & 1) == 0) {
      *(undefined2 *)pbVar2 = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (((byte)param_1[0x38] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x48) = local_78;
    *(undefined8 *)(param_1 + 0x40) = uStack_80;
    *(undefined8 *)pbVar2 = local_88;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
LAB_00d51228:
  if (param_2 != (void *)0x0) {
    CCTextureAtlasData::setRenderTexture((CCTextureAtlasData *)param_1,param_2);
  }
LAB_00d51238:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return (CCTextureAtlasData *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

