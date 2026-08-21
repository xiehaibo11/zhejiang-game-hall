local GameCenterAdNode = class("GameCenterAdNode", XH.ViewBase)

function GameCenterAdNode:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TabsActivity/TabGameCenterAd.csb"
end

function GameCenterAdNode:getBindingInfo()
    return {
        ["_KW_UI_ROOT_LAYER"] = {varName = "_panelBg", onTouchEnded = "onTouchEventBG"},
        ["_KW_IMAGE_BG"] = {varName = "_imgBg"},
        ["_KW_IMAGE_BG_INSERT"] = {varName = "_imgBgInsert"}
    }
end

function GameCenterAdNode:ctor()
    GameCenterAdNode.super.ctor(self)
    self._imgBg:setVisible(true)
    self._imgBgInsert:setVisible(false)
end

function GameCenterAdNode:onTouchEventBG(send, event)
    XH.viewManager:openView("GameCenterView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_GAME_CENTER_AD)
end

function GameCenterAdNode:setInsertMode(scene)
    self._imgBg:setVisible(scene ~= "GoldLobby")
    self._imgBgInsert:setVisible(scene == "GoldLobby")
end

return GameCenterAdNode
�