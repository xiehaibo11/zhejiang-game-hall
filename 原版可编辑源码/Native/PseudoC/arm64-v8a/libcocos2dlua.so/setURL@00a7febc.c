
/* fairygui::GLoader3D::setURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GLoader3D::setURL(GLoader3D *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  size_t __n;
  basic_string *__s2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  int iVar2;
  GLoader3D *pGVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  __s2 = *(basic_string **)(param_1 + 0x10);
  bVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x1d8);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x1d8);
  if (((byte)*param_1 & 1) == 0) {
    __s2 = param_1 + 1;
    uVar4 = (ulong)((byte)*param_1 >> 1);
  }
  if (((byte)bVar1 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar1 >> 1);
    pGVar3 = this + 0x1d9;
  }
  else {
    uVar5 = *(ulong *)(this + 0x1e0);
    pGVar3 = *(GLoader3D **)(this + 0x1e8);
  }
  __n = uVar4;
  if (uVar5 <= uVar4) {
    __n = uVar5;
  }
  if (((__n == 0) || (iVar2 = memcmp(pGVar3,__s2,__n), iVar2 == 0)) && (uVar5 == uVar4)) {
    return;
  }
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)__s2,uVar4);
    bVar1 = *this_00;
  }
  uVar4 = (ulong)((byte)bVar1 >> 1);
  *(undefined8 *)(this + 0x208) = 0;
  if (((byte)bVar1 & 1) == 0) {
    if ((byte)bVar1 >> 1 == 0) goto LAB_00a7ffe4;
  }
  else if (*(long *)(this + 0x1e0) == 0) goto LAB_00a7ffe4;
  if (((byte)bVar1 & 1) == 0) {
                    /* try { // try from 00a7ff7c to 00b7ffc3 has its CatchHandler @ 00a7ff7c
                       catch() { ... } // from try @ 00a7ff7c with catch @ 00a7ff7c
                       catch() { ... } // from try @ 00a800cc with catch @ 00a7ff7c
                       catch() { ... } // from try @ 00a801f4 with catch @ 00a7ff7c */
    pGVar3 = this + 0x1d9;
    if (9 < (byte)bVar1) goto LAB_00a7ff88;
LAB_00a7ffa8:
    if (uVar4 != 0) goto LAB_00a7ffac;
  }
  else {
    uVar4 = *(ulong *)(this + 0x1e0);
    pGVar3 = *(GLoader3D **)(this + 0x1e8);
    if (uVar4 < 5) goto LAB_00a7ffa8;
LAB_00a7ff88:
    uVar4 = 5;
LAB_00a7ffac:
    iVar2 = memcmp(pGVar3,"ui://",uVar4);
                    /* try { // try from 00a7ffc4 to 00b7ffdb has its CatchHandler @ 00a8024c */
    if ((4 < uVar4) && (iVar2 == 0)) {
      loadFromPackage(this);
      goto LAB_00a7ffe4;
    }
  }
  (**(code **)(*(long *)this + 0xb0))(this);
LAB_00a7ffe4:
                    /* try { // try from 00a7ffe8 to 00b7ffff has its CatchHandler @ 00a80214 */
  GObject::updateGear((GObject *)this,7);
  return;
}

