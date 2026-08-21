local TableInfoUI = CF.gameClass("TableInfoUI", "game.Mahjong.NingBoMahjong.NBMahjongBase.Modules.RoomInfo.TableInfoUI")

function TableInfoUI:getBindingInfo()
    local bindingInfo = TableInfoUI.super.getBindingInfo(self)
    bindingInfo["_KW_MAH_FAN_PANEL"] = { varName = "_panelfan" }
    return bindingInfo
end

function TableInfoUI:initUI()
    TableInfoUI.super.initUI(self)
    self._panelfan:setVisible(false)
end

function TableInfoUI:getProxyEvents()
    local eventList = TableInfoUI.super.getProxyEvents(self)
    eventList[#eventList + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_FAN", callBack = "onUpdateFan" }
    eventList[#eventList + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_SHOW_FAN", callBack = "onUpdateShowFan" }
    return eventList
end

function TableInfoUI:onUpdateFan(event)
    local fanNames = event.msg.fanNames or ""
    local isRemove = event.msg.isRemove or false

    self._panelfan:removeAllChildren()
    if isRemove then
        return
    end
    local fanTxt = cc.Label:createWithSystemFont(fanNames, "Arial", 30)
    fanTxt:setColor(cc.c3b(255, 255, 255))
    fanTxt:setAnchorPoint(0, 0.5)
    fanTxt:enableOutline(cc.c3b(0, 0, 0), 2);
    self._panelfan:addChild(fanTxt)
    self._panelfan:setVisible(CF.settingData:getHaveHu())
end

function TableInfoUI:onUpdateShowFan(event)
    local show = event.show or false
    self._panelfan:setVisible(show)
end

return TableInfoUI