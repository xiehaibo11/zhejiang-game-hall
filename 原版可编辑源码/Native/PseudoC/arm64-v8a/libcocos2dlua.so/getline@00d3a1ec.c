
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::getline(char*, long, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  ios_base *this_00;
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3a0a0 with catch @ 00d3a1f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3a0d8 with catch @ 00d3a1f4
                        */
                    /* try { // try from 00d3a208 to 00e3a20b has its CatchHandler @ 00d3a230 */
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00d3a20c to 00e3a263 has its CatchHandler @ 00d39fec */
  lVar4 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar4);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_00d3a230;
    }
    while( true ) {
      plVar3 = *(long **)(this + lVar4 + 0x28);
      if ((byte *)plVar3[3] == (byte *)plVar3[4]) {
        uVar2 = (**(code **)(*plVar3 + 0x48))();
        if (uVar2 == 0xffffffff) {
          uVar2 = 2;
          goto joined_r0x00d3a3ac;
        }
      }
      else {
        uVar2 = (uint)*(byte *)plVar3[3];
      }
      if ((uVar2 & 0xff) == (uint)(byte)param_3) {
        plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
                    /* try { // try from 00d3a358 to 00e3a397 has its CatchHandler @ 00d3a358
                       catch() { ... } // from try @ 00d3a358 with catch @ 00d3a358
                       catch() { ... } // from try @ 00d3a3a8 with catch @ 00d3a358 */
        if (plVar3[3] == plVar3[4]) {
          (**(code **)(*plVar3 + 0x50))();
        }
        else {
          plVar3[3] = plVar3[3] + 1;
        }
                    /* try { // try from 00d3a398 to 00e3a3a7 has its CatchHandler @ 00d3a3d8 */
        uVar2 = 0;
        *(long *)(this + 8) = *(long *)(this + 8) + 1;
                    /* try { // try from 00d3a3a8 to 00e3a3eb has its CatchHandler @ 00d3a358 */
        goto joined_r0x00d3a3ac;
      }
      if (param_2 + -1 <= *(long *)(this + 8)) break;
      *param_1 = (char)uVar2;
      lVar4 = *(long *)this;
      plVar3 = *(long **)(this + *(long *)(lVar4 + -0x18) + 0x28);
      if (plVar3[3] == plVar3[4]) {
        (**(code **)(*plVar3 + 0x50))();
        lVar4 = *(long *)this;
      }
      else {
        plVar3[3] = plVar3[3] + 1;
      }
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      lVar4 = *(long *)(lVar4 + -0x18);
      param_1 = param_1 + 1;
    }
    uVar2 = 4;
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
LAB_00d3a230:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3a208 with catch @ 00d3a230
                        */
    uVar2 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3a0b8 with catch @ 00d3a234
                        */
  }
joined_r0x00d3a3ac:
  if (0 < param_2) {
    *param_1 = '\0';
  }
  uVar1 = uVar2 | 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3a10c with catch @ 00d3a250
                        */
  if (*(long *)(this + 8) != 0) {
    uVar1 = uVar2;
  }
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar1);
  return this;
}

