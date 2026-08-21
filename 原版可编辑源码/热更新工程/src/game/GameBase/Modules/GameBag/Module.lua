local GameBagModule = CF.gameClass("GameBagModule", CF.ModuleBase)

local SxVipConfig = require('lobby.Modules.Sxvip.Config')

-- 道具标签（道具服配置的）
local KW_PROP_HEAD_FRAME_TAG_ID     = "head_frame"      --头像框
local KW_PROP_MAH_BACK_TAG_ID       = "mahback"         --牌背
local KW_PROP_CARD_HOLDER_TAG_ID    = "card_holder"     --压牌器
local KW_PROP_TABLE_TAG_ID          = "table_bg"        --桌布
local KW_PROP_ENTER_ANI_TAG_ID      = "prop_rqdh"       --入场动画
local KW_PROP_TITLE_TAG_ID      = "title"               --称号

GameBagModule.EVENT_IS_VIP_CHANGED = "EVENT_IS_VIP_CHANGED"

function GameBagModule:ctor()
    GameBagModule.super.ctor(self)
    self._numidList = {}
    self._isVip = {}
    self._isEquipVip = {}
end

function GameBagModule:getProxyEvents()
    return {
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"},
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_PLAYER_ENTER", callBack = "onPlayerEnter"},
        {module = CF.game, eventKeyName = "EVENT_START_SIGNAL_SEND", callBack = "onStartSignalSend"},
        {module = CF.getLobbyModule("BagSysNew"), eventKeyName = "EVENT_PLAYER_BAG_DATA", callBack = "onPlayerBagData"}
    }
end

function GameBagModule:onMatchStatusEvent(event)
end

--玩家进入游戏未开始前会发一次signalSend
--处理金币场显示不出道具的问题
function GameBagModule:onStartSignalSend(event)
    if CF.roomData:isGoldRoom() then
        local numid = CF.selfPlayerData:getNumberID()
        self:reqPlayerBagData(numid)
    end
end

function GameBagModule:onPlayerEnter(event)
    --请求背包:压牌器和头像框
    if event.msg and event.msg.numid then
        self:reqPlayerBagData(event.msg.numid)
    end
end

--请求新背包数据
function GameBagModule:reqPlayerBagData(numid)
    if not numid then
        return
    end
    local bagModule = CF.getLobbyModule("BagSysNew")
    if bagModule and bagModule.reqBagPackData then
        local pcnt = 1
        local areaids = {CF.areaData:getAreaID()}
        local numids = {numid}
        local propsids = {}
        bagModule:reqBagPackData(pcnt, areaids, numids, propsids)
    end
end

--新背包数据处理
function GameBagModule:onPlayerBagData(event)
    event.data = event.data or {}
    local numid = event.data.numid

    local bagSysDataObj = CF.getLobbyModule("BagSysNew"):getBagData()
    if not bagSysDataObj then
        return
    end

    local playerBagData = bagSysDataObj:getPlayerBagData(numid) or {}
    local devideCategoryData = bagSysDataObj:getDevideCategoryData(playerBagData) or {}

    for propTag, propsData in pairs(devideCategoryData) do
        local imgData, propsid = self:analyInBodyPropsData(propsData)
        if propTag == KW_PROP_HEAD_FRAME_TAG_ID then --头像框
            self:refreshHeadFrameData(numid, imgData, propsid)
        elseif propTag == KW_PROP_CARD_HOLDER_TAG_ID then --压牌器
            self:refreshCardHolderData(numid, propsid, imgData)
        elseif propTag == KW_PROP_MAH_BACK_TAG_ID then --牌背
            self:refreshMahbackData(numid, imgData)
        elseif propTag == KW_PROP_TABLE_TAG_ID then --桌布
            self:refreshTablgBgData(numid, imgData)
        elseif propTag == KW_PROP_ENTER_ANI_TAG_ID then --入场动画
            self:refreshEnterAniData(numid, imgData, propsid)
        -- elseif propTag == KW_PROP_TITLE_TAG_ID then --称号
        --     self:refreshTitleData(numid, imgData, propsid)
        end
    end

    local timePropInfo = playerBagData.time_prop_info or {}
    for _, timeProp in pairs(timePropInfo) do
        if timeProp.propsid and timeProp.propsid == SxVipConfig.PROP_ID then
            self:setIsVip(numid, true)
            self:setIsEquipVip(numid, timeProp.props_state == 0)
        end
    end
end

function GameBagModule:setIsVip(numid, isVip)
    self._isVip[numid] = isVip
    self:dispatchEvent({name = self.EVENT_IS_VIP_CHANGED })
end

function GameBagModule:getIsVip(numid)
    return self._isVip[numid] or false
end

-- 获取是否是VIP状态（是否主动隐藏）
function GameBagModule:setIsEquipVip(numid, isEquip)
    self._isEquipVip[numid] = isEquip
    self:dispatchEvent({name = self.EVENT_IS_VIP_CHANGED })
end

function GameBagModule:getIsVipWithTag(numid)
    return self._isEquipVip[numid] or false
end

function GameBagModule:analyInBodyPropsData(propsData)
    local devideBaseConfig = CF.getLobbyModule("BagSysNew"):getBagData():getDevideBagConfigData() or {}
    for _, prop in pairs(propsData) do
        if prop.props_state == CF.BagSysProtocol.PROPS_STATE.PS_IN_BODY and (prop.propscnt == 0 or CF.getLobbyModule("BagSysNew"):judgeForeverProp(prop.propsid) )then --已经穿戴,且都转成了时效道具,才显示
            local configPropData = devideBaseConfig[prop.propsid]
            if configPropData then
                local props_img = configPropData.props_img or {}
                for _, av in pairs(props_img) do
                    -- package_id == 2表示浙江包
                    if tonumber(av.package_id) == 2 then
                        return av.img, prop.propsid
                    end
                end
            end
        end
    end
    return nil
end

--派发头像框数据
function GameBagModule:refreshHeadFrameData(numid, imgArray, propsid)
    imgArray = imgArray or {}
    local imgValue = imgArray[#imgArray] or {}
    local headFrameData = {["frame_url"] = imgValue.img_url, ["img_tag"] = imgValue.img_tag, ["propid"] = propsid }
    CF.roomData:setHeadFrameData(numid, headFrameData)
end

--派发压牌器数据
function GameBagModule:refreshCardHolderData(numid, propsid, imgArray)
    if not imgArray or #imgArray <= 0 then
        return
    end
    if not CF.roomData:getSelfPlayerData() or CF.roomData:getSelfPlayerData():getNumberID() ~= numid then
        return
    end

    local imgValue = imgArray[#imgArray]
    local ypqData = {["nid"] = numid, ["ypq_url"] = imgValue.img_url, ["ypq"] = propsid, ["img_tag"] = imgValue.img_tag}
    CF.roomData:setCardHolderData(numid, ypqData)
end

--派发牌背数据
function GameBagModule:refreshMahbackData(numid, imgArray)
    if not imgArray or #imgArray <= 0 then
        return
    end
    if not CF.roomData:getSelfPlayerData() or CF.roomData:getSelfPlayerData():getNumberID() ~= numid then
        return
    end

    local mahUrlTable = {}
    for _, bv in pairs(imgArray) do
        table.insert(mahUrlTable, bv.img_url)
    end

    local mahBackData = {{["state"] = 1, ["type"] = "PB", ["url"] = mahUrlTable}}
    CF.roomData:setMahBackData(numid, mahBackData)
end

function GameBagModule:refreshTablgBgData(numid, imgArray)
    if not imgArray or #imgArray <= 0 then
        return
    end
    if CF.roomData:getSelfPlayerData() and CF.roomData:getSelfPlayerData():getNumberID() ~= numid then
        return
    end
    CF.roomData:setTableBgData(numid, imgArray)
end

function GameBagModule:refreshEnterAniData(numid, imgArray, propsid)
    if not imgArray or #imgArray <= 0 then
        return
    end
    local enterAni = {numid = numid, propsid = propsid, data = imgArray}
    CF.roomData:setEnterAniData(numid, enterAni)
end

function GameBagModule:refreshTitleData(numid, imgArray, propsid)
    if not imgArray or #imgArray <= 0 then
        return
    end
    local enterAni = {numid = numid, propsid = propsid, data = imgArray}
    CF.roomData:setUserTitleData(numid, enterAni)
end

return GameBagModule