
void _INIT_18(void)

{
  long lVar1;
  undefined *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  void *pvVar7;
  ulong local_68;
  ulong local_60;
  void *local_58;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_50 [8];
  long local_48;
  
  puVar2 = cocos2d::renderer::ATTRIB_NAME_POSITION;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_POSITION);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850950;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850950:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_NORMAL;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_POSITION_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_NORMAL);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850a18;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850a18:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_TANGENT;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_NORMAL_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_TANGENT);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850ae0;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850ae0:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_BITANGENT;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_TANGENT_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_BITANGENT);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850ba8;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850ba8:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_WEIGHTS;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_BITANGENT_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_WEIGHTS);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850c70;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850c70:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_JOINTS;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_WEIGHTS_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_JOINTS);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850d38;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850d38:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_COLOR;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_JOINTS_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_COLOR);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850e00;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850e00:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_COLOR0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_COLOR_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_COLOR0);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850ec8;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850ec8:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_COLOR1;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_COLOR0_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_COLOR1);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00850f90;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00850f90:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_COLOR1_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00851058;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00851058:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_UV_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV0);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00851120;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00851120:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV1;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_UV0_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV1);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_008511e8;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_008511e8:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV2;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_UV1_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV2);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_008512b0;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_008512b0:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV3;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_UV2_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV3);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00851378;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00851378:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV4;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_UV3_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV4);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00851440;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00851440:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV5;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_UV4_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV5);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_00851508;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_00851508:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV6;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_UV5_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV6);
  if (0xffffffffffffffef < sVar3) goto LAB_00851720;
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 != 0) goto LAB_008515d0;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
LAB_008515d0:
    memcpy(pvVar5,puVar2,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = cocos2d::renderer::ATTRIB_NAME_UV7;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  cocos2d::renderer::ATTRIB_NAME_UV6_HASH = uVar4;
  sVar3 = strlen(cocos2d::renderer::ATTRIB_NAME_UV7);
  if (0xffffffffffffffef < sVar3) {
LAB_00851720:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = pvVar5;
    if (sVar3 == 0) goto LAB_008516a8;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_68 = uVar6 | 1;
    pvVar7 = (void *)((ulong)&local_68 | 1);
    local_60 = sVar3;
    local_58 = pvVar5;
  }
  memcpy(pvVar5,puVar2,sVar3);
LAB_008516a8:
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  uVar6 = local_68 >> 1 & 0x7f;
  if ((local_68 & 1) != 0) {
    uVar6 = local_60;
    pvVar7 = local_58;
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_50,pvVar7,uVar6);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  cocos2d::renderer::ATTRIB_NAME_UV7_HASH = uVar4;
  cocos2d::renderer::Rect::ZERO = 0;
  DAT_01d37380 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

