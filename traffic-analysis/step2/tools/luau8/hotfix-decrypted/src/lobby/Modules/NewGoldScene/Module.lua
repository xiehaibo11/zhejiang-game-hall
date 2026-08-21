local NewGoldSceneModule = class("NewGoldSceneModule", XH.ModuleBase)
local NewGoldSceneDefine = require("lobby.Modules.NewGoldScene.Define")

-- 连炸斗地主外部逻辑入口
function NewGoldSceneModule:ctor()
    NewGoldSceneModule.super.ctor(self)
    self._isShowRight = false -- 右侧是否显示
    self._isShowPanel = false -- 中间是否显示
end

-- 判断是否有连炸斗地主
function NewGoldSceneModule:getIconVisible()
    return self._isShowRight or self._isShowPanel
end

-- 设置连炸斗地主
function NewGoldSceneModule:setIconVisible(type, isShow)
    if type == NewGoldSceneDefine.SHOW_SCENE.PANEL then
        self._isShowPanel = isShow
    elseif type == NewGoldSceneDefine.SHOW_SCENE.RIGHT then
        self._isShowRight = isShow
    end
end

return NewGoldSceneModule<