local EditGame = class("EditGame", XH.Bridge.ViewBase)
local LobbyConfig = XH.Bridge:require("lobby.Modules.Lobby.Config")
local ConfigurationDefine = XH.Bridge:require("lobby.Modules.Configuration.Define")
local LocalConfig = import("..Configs.LocalConfig")
local RemoteConfig = import("..Configs.RemoteConfig")
local Utils = import("..Tool.Utils")
local POP_UI_PATH = LocalConfig.IMG_PATH.POP

function EditGame:getCSBPath()
    return XH.Bridge:getCCSResPath("EditGame.csb")
end

function EditGame:getBindingInfo()
    return {
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "close"},
        ["_itemArea"] = {varName = "_itemArea"},
        ["_itemGame"] = {varName = "_itemGame"},
        ["_itemGameLine"] = {varName = "_itemGameLine"},
        ["_listGame"] = {varName = "_listGame"},
        ["_listArea"] = {varName = "_listArea"}
    }
end

function EditGame:getProxyEvents()
    return {{module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_SAVE_INFO", callBack = "onSaveInfo"}}
end

function EditGame:ctor(param)
    EditGame.super.ctor(self, param)
    self._roomInfo = RemoteConfig:getAllGoldRoomInfo(true)
    self._areaConfig = RemoteConfig:getAllAreaConfig()
    self._itemArea:setVisible(false)
    self._itemGame:setVisible(false)
    self._itemGameLine:setVisible(false)
    self._listArea:setScrollBarEnabled(false)
    self._listGame:setScrollBarEnabled(false)
    self:updateUI()
end

function EditGame:onEnter()
end

function EditGame:isFullScreen()
    return true
end

function EditGame:onSaveInfo(event)
    -- self:updateGameList(self._areaId)
    local mainAreaGames = RemoteConfig:getGoldRoomLeisureIDs(XH.areaData:getAreaID())
    local saveInfo = event.info
    for i = 1, #self._gameItems do
        local itemGame = self._gameItems[i]
        local idxInMain = Utils:findIdx(mainAreaGames, function(v)
            return v == itemGame.info.LeisureID
        end)
        local idx = Utils:findIdx(saveInfo, function(v)
            return v == itemGame.info.LeisureID
        end)
        local isAdded = idx ~= -1
        local isCurAreaGame = idxInMain > 0 or self._areaId == XH.areaData:getAreaID()
        itemGame.isLock = isCurAreaGame
        itemGame.isAdded = isAdded
        self:updateItemImage(itemGame, nil, (itemGame.isAdded or isCurAreaGame) and "Btn_tc_xzdi1.png" or "Btn_tc_xzdi2.png")
        self:updateItemImage(itemGame, "_imgState", itemGame.isLock and "Img_tc_suo.png" or isAdded and "Img_tc_dui.png" or "Img_tc_add.png")

        -- local itemAdd = itemGame:getChildByName("_btnAdd")
        -- local itemRemove = itemGame:getChildByName("_btnRemove")
        -- itemAdd:setVisible(not isCurAreaGame and not isAdded)
        -- itemRemove:setVisible(not isCurAreaGame and isAdded)
    end
end

function EditGame:updateItemImage(item, childName, imgName)
    if item then
        if childName then
            XH.UITool.loadTexture(item, childName, POP_UI_PATH .. imgName, ccui.TextureResType.plistType)
        else
            if tolua.type(item) == "ccui.Layout" then
                item:setBackGroundImage(POP_UI_PATH .. imgName, ccui.TextureResType.plistType)
            else
                item:loadTexture(POP_UI_PATH .. imgName, ccui.TextureResType.plistType)
            end
        end
    end
end

function EditGame:updateUI()
    self._listArea:removeAllChildren()
    if #self._areaConfig == 0 then
        return
    end
    local curAreaIdx = Utils:findIdx(self._areaConfig, function(v)
        return v.areaId == XH.areaData:getAreaID()
    end)
    if curAreaIdx <= 0 then
        curAreaIdx = 1
    end
    local createItem = function(info)
        local item = self._itemArea:clone()
        item:setVisible(true)
        self._listArea:pushBackCustomItem(item)
        XH.UITool.setText(item, "_txtName", info.areaName)
        XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:updateGameList(info.areaId)
            self:updateGameAreaState(item)
        end)
        return item
    end
    local selectItem = createItem(self._areaConfig[curAreaIdx])

    for i = 1, #self._areaConfig do
        if i ~= curAreaIdx and self._areaConfig[i].areaId ~= 0 then
            createItem(self._areaConfig[i])
        end
    end
    self:updateGameList(self._areaConfig[curAreaIdx].areaId)
    self:updateGameAreaState(selectItem)
end

function EditGame:updateGameAreaState(selectItem)
    for _, v in ipairs(self._listArea:getChildren()) do
        local isSelected = selectItem == v
        v:setTouchEnabled(not isSelected)
        self:updateItemImage(v, "_imgBg", isSelected and "Btn_tc_xz_di1.png" or "Btn_tc_xz_di2.png")
        XH.UITool.setTextColor(v, "_txtName", isSelected and cc.c3b(0x9d, 0x46, 0) or cc.c3b(0x99, 0x83, 0x6e))
    end
end

function EditGame:updateGameList(areaId)
    self._areaId = areaId
    local cfg = RemoteConfig:getAreaConfig(areaId)
    if cfg == nil then
        return
    end

    local leisureIDs = RemoteConfig:getGoldRoomLeisureIDs(areaId)
    local gameInfos = {}

    for i = #leisureIDs, 1, -1 do
        local idx = Utils:findIdx(self._roomInfo, function(v)
            return v.LeisureID == leisureIDs[i]
        end)
        if idx > 0 then
            table.insert(gameInfos, {LeisureID = leisureIDs[i], info = self._roomInfo[idx]})
        end
    end

    self._listGame:removeAllChildren()
    self._gameItems = {}
    local saveInfo = XH.Bridge:getModule("GoldNew"):getSaveGameInfo()
    local mainAreaGames = RemoteConfig:getGoldRoomLeisureIDs(XH.areaData:getAreaID())
    for i = 1, #gameInfos, 3 do
        local item = self._itemGameLine:clone()
        item:setVisible(true)
        self._listGame:pushBackCustomItem(item)
        for j = 0, 2 do
            if gameInfos[i + j] then
                local info = gameInfos[i + j].info
                local itemGame = self._itemGame:clone()
                itemGame:setVisible(true)
                itemGame:setPosition(j * 420, 0)
                item:addChild(itemGame)
                itemGame.info = info
                table.insert(self._gameItems, itemGame)

                local idxInMain = Utils:findIdx(mainAreaGames, function(v)
                    return v == info.LeisureID
                end)
                local idx = Utils:findIdx(saveInfo, function(v)
                    return v.LeisureID == info.LeisureID
                end)
                local isAdded = idx ~= -1
                local isCurAreaGame = idxInMain > 0 or areaId == XH.areaData:getAreaID()

                itemGame.isLock = isCurAreaGame
                itemGame.isAdded = isAdded
                XH.UIButton.create(itemGame, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                    self:onGameItemClick(itemGame, info)
                end)
                itemGame:setTouchEnabled(not itemGame.isLock)
                self:updateItemImage(itemGame, nil, (itemGame.isAdded or isCurAreaGame) and "Btn_tc_xzdi1.png" or "Btn_tc_xzdi2.png")
                self:updateItemImage(itemGame, "_imgState", itemGame.isLock and "Img_tc_suo.png" or isAdded and "Img_tc_dui.png" or "Img_tc_add.png")
                XH.UITool.setText(itemGame, "_txtName", info.GameTitle)
            end
        end
    end
end

function EditGame:onGameItemClick(item, info)
    XH.Bridge:throwData("xjb25022812", {game_id = self._areaId .. "_" .. info.GameID, oldsr = XH.playerData:getSR() or 0})
    if item.isAdded then
        self:removeGame(item, info)
    else
        self:addGame(item, info)
    end
end

function EditGame:addGame(item, info)
    local saveInfo = XH.Bridge:getModule("GoldNew"):getSaveInfo()
    local idx = Utils:findIdx(saveInfo, function(v)
        return v == info.LeisureID
    end)
    if idx == -1 then
        table.insert(saveInfo, info.LeisureID)
    end
    XH.Bridge:getModule("GoldNew"):reqSaveInfo(saveInfo)
end

function EditGame:removeGame(item, info)
    local saveInfo = XH.Bridge:getModule("GoldNew"):getSaveInfo()
    local idx = Utils:findIdx(saveInfo, function(v)
        return v == info.LeisureID
    end)
    table.remove(saveInfo, idx)
    XH.Bridge:getModule("GoldNew"):reqSaveInfo(saveInfo)
end

return EditGame
