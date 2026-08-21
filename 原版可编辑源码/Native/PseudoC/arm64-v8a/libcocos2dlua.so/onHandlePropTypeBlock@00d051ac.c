
/* cocosbuilder::NodeLoader::onHandlePropTypeBlock(cocos2d::Node*, cocos2d::Node*, char const*,
   cocosbuilder::BlockData*, cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::onHandlePropTypeBlock
               (Node *param_1,Node *param_2,char *param_3,BlockData *param_4,CCBReader *param_5)

{
  cocos2d::log("Unexpected property: \'%s\'!\n",param_4);
  return;
}

