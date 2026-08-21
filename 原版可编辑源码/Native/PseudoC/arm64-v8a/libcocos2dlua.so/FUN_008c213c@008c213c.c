
void FUN_008c213c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  int local_5c;
  undefined1 auStack_58 [16];
  long local_48;
  
                    /* catch() { ... } // from try @ 008c20f8 with catch @ 008c2140 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008c215c to 009c2197 has its CatchHandler @ 008c215c
                       catch() { ... } // from try @ 008c215c with catch @ 008c215c
                       catch() { ... } // from try @ 008c21a8 with catch @ 008c215c */
  iVar2 = tolua_isnumber(param_1,1,0,auStack_58);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_58), iVar2 == 0)) {
                    /* try { // try from 008c2210 to 009c222b has its CatchHandler @ 008c2210
                       catch() { ... } // from try @ 008c2210 with catch @ 008c2210
                       catch() { ... } // from try @ 008c2234 with catch @ 008c2210 */
    tolua_error(param_1,"#ferror in function \'glGetProgramInfoLog\'.",auStack_58);
    uVar4 = 0;
  }
  else {
                    /* try { // try from 008c2198 to 009c21a7 has its CatchHandler @ 008c21e0 */
    dVar6 = (double)tolua_tonumber(0,param_1,1);
                    /* try { // try from 008c21a8 to 009c21fb has its CatchHandler @ 008c215c */
    glGetProgramiv((int)dVar6,0x8b84,&local_5c);
    uVar5 = (ulong)local_5c;
    if ((long)uVar5 < 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    glGetProgramInfoLog((int)dVar6,local_5c,0,pvVar3);
                    /* catch() { ... } // from try @ 008c2198 with catch @ 008c21e0 */
    lua_pushstring(param_1,pvVar3);
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 008c222c to 009c2233 has its CatchHandler @ 008c224c */
                    /* try { // try from 008c2234 to 009c225f has its CatchHandler @ 008c2210 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

