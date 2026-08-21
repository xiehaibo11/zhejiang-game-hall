
undefined8 FUN_009ce4bc(undefined8 param_1)

{
  FUN_009ce128();
  lua_pushcclosure(param_1,FUN_009ce4bc,0);
                    /* try { // try from 009ce4f0 to 00ace667 has its CatchHandler @ 009ce4f0
                       catch() { ... } // from try @ 009ce4f0 with catch @ 009ce4f0
                       catch() { ... } // from try @ 009ce6e8 with catch @ 009ce4f0 */
  lua_setfield(param_1,0xfffffffe,"new");
  lua_getfield(param_1,0xffffffff,"decode");
  lua_pushcclosure(param_1,FUN_009d03d4,1);
  lua_setfield(param_1,0xfffffffe,"decode");
  lua_getfield(param_1,0xffffffff,"encode");
  lua_pushcclosure(param_1,FUN_009d03d4,1);
  lua_setfield(param_1,0xfffffffe,"encode");
  return 1;
}

