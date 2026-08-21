
/* cocosbuilder::ScrollViewLoader::onHandlePropTypeCheck(cocos2d::Node*, cocos2d::Node*, char
   const*, bool, cocosbuilder::CCBReader*) */

void cocosbuilder::ScrollViewLoader::onHandlePropTypeCheck
               (Node *param_1,Node *param_2,char *param_3,bool param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)(ulong)param_4,"clipsToBounds");
  if (iVar1 == 0) {
    param_2[0x35d] = (Node)((byte)param_5 & 1);
  }
  else {
    iVar1 = strcmp((char *)(ulong)param_4,"bounces");
    if (iVar1 != 0) {
      NodeLoader::onHandlePropTypeCheck
                (param_1,param_2,param_3,param_4,(CCBReader *)(ulong)((uint)param_5 & 1));
      return;
    }
    param_2[0x35c] = (Node)((byte)param_5 & 1);
  }
  return;
}

