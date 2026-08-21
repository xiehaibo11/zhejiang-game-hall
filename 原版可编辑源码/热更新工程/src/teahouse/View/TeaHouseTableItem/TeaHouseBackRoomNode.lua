---@class TeaHouseBackRoomNode : View
local TeaHouseBackRoomNode = class("TeaHouseBackRoomNode", TeaHouse.View)

TeaHouseBackRoomNode.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseTableItem/TeaHouseBackRoomNode.csb",
    binding = {
        ["_KW_IMG_BACK_ROOM_BG"] = { tag = "_KW_IMG_BACK_ROOM_BG", name = "_imgBg", class = "img" },
        ["_KW_TEXT_ROOM_ID"] = { tag = "_KW_TEXT_ROOM_ID", name = "_textRoomID", class = "text" },
        ["_KW_TEXT_ROOM_STATE"] = { tag = "_KW_TEXT_ROOM_STATE", name = "_textRoomState", class = "text" },
        ["_KW_TEXT_PLAYER_COUNT"] = { tag = "_KW_TEXT_PLAYER_COUNT", name = "_textPlayerCount", class = "text" },
        ["_KW_BTN_BACK_ROOM"] = { tag = "_KW_BTN_BACK_ROOM", name = "_btnBackRoom", class = "btn", events = "onBtnEventBackRoom" },
    }
}

function TeaHouseBackRoomNode:ctor()
    TeaHouseBackRoomNode.super.ctor(self)

    self:initView()
end

function TeaHouseBackRoomNode:initView()
    self:showInfo(false)
end

function TeaHouseBackRoomNode:onEnter()
    self:onUpdateTableInfo()
    self:initEvents()
end

function TeaHouseBackRoomNode:initEvents()
    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_TABLE_LIST_UPATE, handler(self, self.onTableListUpdate))
    :addEventListener(teahouseMain.EVENT_TABLE_LIST_REMOVE, handler(self, self.onTableListRemove))
    :addEventListener(teahouseMain.EVENT_PLAYER_LIST_CHANGED, handler(self, self.onUpdateTableInfo))
end

function TeaHouseBackRoomNode:showInfo(bShow)
    if self._imgBg then
        self._imgBg:setVisible(bShow)
    end
end

function TeaHouseBackRoomNode:setRoomID(roomID)
    if not self._textRoomID then
        return
    end
    self._textRoomID:setString("房号：" .. string.format("%06d", roomID))
end

function TeaHouseBackRoomNode:setRoomState(bStart)
    if not self._textRoomState then
        return
    end
    self._textRoomState:setString(bStart and "已开局" or "未开局")
end

function TeaHouseBackRoomNode:setPlayerCount(curCount, totalCount)
    if not self._textPlayerCount or not curCount or not totalCount then
        return
    end
    self._textPlayerCount:setString("已有人数：" .. curCount .. "/" .. totalCount)
end

function TeaHouseBackRoomNode:onBtnEventBackRoom(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMain:checkSelfInTable()
end

function TeaHouseBackRoomNode:onTableListUpdate(event)
    local info = event.msg.info
    local tableInfo = self:updateTableInfo()
    if tableInfo and info.tableid == tableInfo.tableid and
    tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME and tableInfo.finish == 0 then
        TeaHouse.TipTool.showTip({
            type = TeaHouse.TipTool.TIP_TYPE.OK,
            funcOK = function()
                TeaHouse.manager.teahouseMain:checkSelfInTable()
            end
        }, "亲，您所在的房间已经开局，请先返回房间吧！")
    end
end

function TeaHouseBackRoomNode:onTableListRemove(event)
    self:updateTableInfo()
    TeaHouse.manager.teahouseGeneral:checkPlayerTable(event.msg.info)
end

function TeaHouseBackRoomNode:onUpdateTableInfo(event)
    self:updateTableInfo()
end

function TeaHouseBackRoomNode:updateTableInfo()
    local teahouseData = TeaHouse.manager.teahouseData
    local areaID = TeaHouse.BridgeData.getBrandID()
    local numID = TeaHouse.BridgeData.getNumberID()
    local playerInfo = teahouseData:getPlayerInfo(areaID, numID)
    if playerInfo == nil or playerInfo.tableid <= 0 or playerInfo.seat < 0 then
        self:showInfo(false)
        return
    end
    local tableInfo = teahouseData:getTableInfoByID(playerInfo.tableid)
    if tableInfo == nil or not teahouseData:checkTableState(tableInfo) then
        self:showInfo(false)
        return
    end
    self:setRoomID(tableInfo.tableid)
    self:setRoomState(tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME)
    self:setPlayerCount(tableInfo.nPlayerCount, tableInfo.size)
    self:showInfo(true)
    return tableInfo
end

return TeaHouseBackRoomNode