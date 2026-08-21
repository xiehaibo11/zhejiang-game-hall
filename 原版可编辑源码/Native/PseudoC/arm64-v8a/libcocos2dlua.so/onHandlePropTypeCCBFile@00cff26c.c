
/* cocosbuilder::CCBFileLoader::onHandlePropTypeCCBFile(cocos2d::Node*, cocos2d::Node*, char const*,
   cocos2d::Node*, cocosbuilder::CCBReader*) */

void cocosbuilder::CCBFileLoader::onHandlePropTypeCCBFile
               (Node *param_1,Node *param_2,char *param_3,Node *param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_4,"ccbFile");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeCCBFile(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  CCBFile::setCCBFileNode((CCBFile *)param_2,(Node *)param_5);
  return;
}

