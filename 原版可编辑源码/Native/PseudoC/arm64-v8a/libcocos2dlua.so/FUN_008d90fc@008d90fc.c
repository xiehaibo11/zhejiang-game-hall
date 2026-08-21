
undefined8 FUN_008d90fc(lua_State *param_1)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 008d8f44 with catch @ 008d90fc */
                    /* catch() { ... } // from try @ 008d8fac with catch @ 008d9100 */
                    /* catch() { ... } // from try @ 008d8d50 with catch @ 008d9104 */
                    /* catch() { ... } // from try @ 008d8d44 with catch @ 008d9108 */
  lVar1 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008d8ec8 with catch @ 008d9118 */
                    /* catch() { ... } // from try @ 008d9068 with catch @ 008d911c */
                    /* catch() { ... } // from try @ 008d904c with catch @ 008d9120 */
  size_to_luaval(param_1,(Size *)(lVar1 + 0x80));
                    /* catch() { ... } // from try @ 008d8f50 with catch @ 008d9124 */
                    /* catch() { ... } // from try @ 008d8e24 with catch @ 008d9128 */
                    /* catch() { ... } // from try @ 008d8fbc with catch @ 008d912c */
  return 1;
}

