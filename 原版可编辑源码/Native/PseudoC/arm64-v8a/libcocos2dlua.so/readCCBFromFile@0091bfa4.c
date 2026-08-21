
/* CCBProxy::readCCBFromFile(char const*, cocosbuilder::CCBReader*, bool) */

undefined8 __thiscall
CCBProxy::readCCBFromFile(CCBProxy *this,char *param_1,CCBReader *param_2,bool param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (((param_1 != (char *)0x0) && (param_2 != (CCBReader *)0x0)) &&
     (sVar1 = strlen(param_1), sVar1 != 0)) {
    if (param_3) {
                    /* try { // try from 0091bff0 to 00a1c03b has its CatchHandler @ 0091bff0
                       catch() { ... } // from try @ 0091bff0 with catch @ 0091bff0
                       catch() { ... } // from try @ 0091c040 with catch @ 0091bff0 */
      uVar2 = cocosbuilder::CCBReader::readNodeGraphFromFile(param_2,param_1,(Ref *)this);
      return uVar2;
    }
    uVar2 = cocosbuilder::CCBReader::readNodeGraphFromFile(param_2,param_1);
    return uVar2;
  }
  return 0;
}

