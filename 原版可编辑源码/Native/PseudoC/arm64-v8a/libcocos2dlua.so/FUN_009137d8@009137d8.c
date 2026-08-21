
undefined8 FUN_009137d8(undefined8 param_1)

{
  size_t sVar1;
  LuaMinXmlHttpRequest LVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  LuaMinXmlHttpRequest *this;
  char *pcVar6;
  LuaMinXmlHttpRequest *pLVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009137f8 to 00a13813 has its CatchHandler @ 00913b10 */
  local_50 = 0;
  this = (LuaMinXmlHttpRequest *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00913814 to 00a1395b has its CatchHandler @ 009136b4 */
  if (*(long *)(this + 0xe8) != 0) {
    puVar4 = *(void **)(this + 0xe0);
    while (puVar4 != (void *)0x0) {
      pvVar10 = (void *)*puVar4;
      if ((*(byte *)(puVar4 + 5) & 1) != 0) {
        operator_delete((void *)puVar4[7]);
      }
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        operator_delete((void *)puVar4[4]);
      }
      operator_delete(puVar4);
      puVar4 = pvVar10;
    }
    lVar8 = *(long *)(this + 0xd8);
    *(undefined8 *)(this + 0xe0) = 0;
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xd0) + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    *(undefined8 *)(this + 0xe8) = 0;
  }
  this[0x120] = (LuaMinXmlHttpRequest)0x0;
  iVar5 = lua_gettop(param_1);
  if ((iVar5 == 2) &&
     (pcVar6 = (char *)lua_tolstring(param_1,2,&local_50), lVar8 = local_50, local_50 != 0)) {
    LVar2 = this[0x40];
    if (((byte)LVar2 & 1) == 0) {
      uVar11 = (ulong)((byte)LVar2 >> 1);
      pLVar7 = this + 0x41;
    }
    else {
      uVar11 = *(ulong *)(this + 0x48);
      pLVar7 = *(LuaMinXmlHttpRequest **)(this + 0x50);
    }
    sVar1 = 4;
    if (uVar11 < 5) {
      sVar1 = uVar11;
    }
    if (((sVar1 != 0) && (iVar5 = memcmp(pLVar7,"post",sVar1), iVar5 != 0)) ||
       (4 < uVar11 == 3 < uVar11)) {
      if (((byte)LVar2 & 1) == 0) {
        uVar11 = (ulong)((byte)LVar2 >> 1);
        pLVar7 = this + 0x41;
      }
      else {
        uVar11 = *(ulong *)(this + 0x48);
        pLVar7 = *(LuaMinXmlHttpRequest **)(this + 0x50);
      }
      sVar1 = 4;
      if (uVar11 < 5) {
        sVar1 = uVar11;
      }
      if (((sVar1 != 0) && (iVar5 = memcmp(pLVar7,"POST",sVar1), iVar5 != 0)) ||
         (4 < uVar11 == 3 < uVar11)) {
        if (((byte)LVar2 & 1) == 0) {
          uVar11 = (ulong)((byte)LVar2 >> 1);
                    /* try { // try from 0091395c to 00a13963 has its CatchHandler @ 00913a34 */
          pLVar7 = this + 0x41;
        }
        else {
          uVar11 = *(ulong *)(this + 0x48);
          pLVar7 = *(LuaMinXmlHttpRequest **)(this + 0x50);
        }
                    /* try { // try from 0091396c to 00a13983 has its CatchHandler @ 00913a44 */
        sVar1 = 3;
        if (uVar11 < 4) {
          sVar1 = uVar11;
        }
                    /* try { // try from 00913984 to 00a139e7 has its CatchHandler @ 009136b4 */
        if (((sVar1 != 0) && (iVar5 = memcmp(pLVar7,"put",sVar1), iVar5 != 0)) ||
           (3 < uVar11 == 2 < uVar11)) {
          if (((byte)LVar2 & 1) == 0) {
            uVar11 = (ulong)((byte)LVar2 >> 1);
            pLVar7 = this + 0x41;
          }
          else {
            uVar11 = *(ulong *)(this + 0x48);
            pLVar7 = *(LuaMinXmlHttpRequest **)(this + 0x50);
          }
          sVar1 = 3;
          if (uVar11 < 4) {
            sVar1 = uVar11;
          }
                    /* try { // try from 009139e8 to 00a139f3 has its CatchHandler @ 00913ab4 */
          if (((sVar1 != 0) && (iVar5 = memcmp(pLVar7,"PUT",sVar1), iVar5 != 0)) ||
             (3 < uVar11 == 2 < uVar11)) goto LAB_00913a04;
        }
      }
    }
    if (*(long *)(this + 0xc0) != 0) {
                    /* try { // try from 009139f4 to 00a13bbb has its CatchHandler @ 009136b4 */
      std::__ndk1::vector<char,std::__ndk1::allocator<char>>::assign<char_const*>
                ((vector<char,std::__ndk1::allocator<char>> *)(*(long *)(this + 0xc0) + 0x40),pcVar6
                 ,pcVar6 + lVar8);
    }
  }
LAB_00913a04:
  LuaMinXmlHttpRequest::_setHttpRequestHeader(this);
  LuaMinXmlHttpRequest::_sendRequest(this);
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00913780 with catch @ 00913a34
                       catch() { ... } // from try @ 0091395c with catch @ 00913a34 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

