
/* CocosDenshion::android::getFullPathWithoutAssetsPrefix(char const*) */

void __thiscall CocosDenshion::android::getFullPathWithoutAssetsPrefix(android *this,char *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  size_t __n;
  byte *pbVar6;
  ulong *in_x8;
  ulong uVar7;
  void *__dest;
  ulong local_70;
  size_t sStack_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)cocos2d::FileUtils::getInstance();
  sStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  __n = strlen((char *)this);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00df68ec to 00ef68ef has its CatchHandler @ 00df6b48 */
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00df693c;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_70 = uVar7 | 1;
    sStack_68 = __n;
    local_60 = __dest;
  }
                    /* try { // try from 00df692c to 00ef692f has its CatchHandler @ 00df6b44 */
  memcpy(__dest,this,__n);
LAB_00df693c:
  *(undefined1 *)((long)__dest + __n) = 0;
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
                    /* try { // try from 00df696c to 00ef696f has its CatchHandler @ 00df6b40 */
  uVar7 = in_x8[1];
  pbVar2 = (byte *)in_x8[2];
                    /* try { // try from 00df6970 to 00ef6b6f has its CatchHandler @ 00df66fc */
  if (((byte)*in_x8 & 1) == 0) {
    pbVar2 = (byte *)((long)in_x8 + 1);
    uVar7 = (ulong)(byte)((byte)*in_x8 >> 1);
  }
  if (6 < (long)uVar7) {
    pbVar1 = pbVar2 + uVar7;
    pbVar6 = pbVar2;
    do {
      if ((uVar7 - 6 == 0) || (pbVar6 = memchr(pbVar6,0x61,uVar7 - 6), pbVar6 == (byte *)0x0))
      break;
      iVar4 = memcmp(pbVar6,"assets/",7);
      if (iVar4 == 0) {
        if ((pbVar6 != pbVar1) && (pbVar6 == pbVar2)) {
          uVar7 = __strlen_chk("assets/",8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_70,(ulong)in_x8,uVar7,(allocator *)0xffffffffffffffff)
          ;
          if ((*in_x8 & 1) == 0) {
            *(undefined2 *)in_x8 = 0;
          }
          else {
            *(undefined1 *)in_x8[2] = 0;
            in_x8[1] = 0;
            if ((*in_x8 & 1) != 0) {
              operator_delete((void *)in_x8[2]);
              *in_x8 = 0;
            }
          }
          in_x8[2] = (ulong)local_60;
          in_x8[1] = sStack_68;
          *in_x8 = local_70;
        }
        break;
      }
      pbVar6 = pbVar6 + 1;
      uVar7 = (long)pbVar1 - (long)pbVar6;
    } while (6 < (long)uVar7);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

