
/* cocos2d::Scene::onEnter() */

void __thiscall cocos2d::Scene::onEnter(Scene *this)

{
                    /* try { // try from 00f3c9a4 to 0103c9ab has its CatchHandler @ 00f3c9d8 */
  Node::onEnter((Node *)this);
                    /* try { // try from 00f3c9ac to 0103c9f3 has its CatchHandler @ 00f3c980 */
  DataManager::onSceneLoaderEnd();
  return;
}

