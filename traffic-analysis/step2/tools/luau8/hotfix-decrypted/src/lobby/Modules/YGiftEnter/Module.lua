local YGiftEnterModule = class("YGiftEnterModule", XH.ModuleBase)
-- local YGiftBankruptcyDefine = require("lobby.Modules.YGiftBankruptcy.Define")

YGiftEnterModule.FLUSH_ACT_INFO = "FLUSH_ACT_INFO"

-- 进房礼包
function YGiftEnterModule:ctor()
    YGiftEnterModule.super.ctor(self)
    self._rmbPropsAdd = {} -- 所有付费商品
    self._actInfo = {} -- 基础活动信息
    self._playerInfo = {} -- 具体玩家活动信息
    self._aid = {} -- 活动id
    self._gameID = 0
    self._createType = 0
end

function YGiftEnterModule:getReqConfig()
    return {
        ReqActDetail = { reqPath = "lobby.Req.LuckTask.ReqActDetail", callBack = self.respActDetail },
        ReqJoinRoomGift = { reqPath = "lobby.Req.LuckTask.ReqJoinRoomGift", callBack = self.respPlayerInfo },
    }
end

function YGiftEnterModule:setActivityId(aid)
    self._aid[XH.areaData:getSrsGroupID()] = aid
    self:reqActDetail()
end

function YGiftEnterModule:getActivityId()
    return self._aid[XH.areaData:getSrsGroupID()]
end

function YGiftEnterModule:setPlayerActInfo(info)
    self._playerInfo[XH.areaData:getSrsGroupID()] = info
end

function YGiftEnterModule:getPlayerActInfo()
    return self._playerInfo[XH.areaData:getSrsGroupID()]
end

function YGiftEnterModule:setActInfo(info)
    self._actInfo[XH.areaData:getSrsGroupID()] = info
end

function YGiftEnterModule:getActInfo()
    return self._actInfo[XH.areaData:getSrsGroupID()]
end

function YGiftEnterModule:setInfo(info)
    self._info[XH.areaData:getSrsGroupID()] = info
end

function YGiftEnterModule:getInfo()
    return self._info[XH.areaData:getSrsGroupID()]
end

-- 获取详细任务
function YGiftEnterModule:reqActDetail()
    if self:getActivityId() == nil then
        return
    end
    if self:getActInfo() ~= nil then
        return
    end
    self:startReq("ReqActDetail", self:getActivityId(), 10)
end

function YGiftEnterModule:respActDetail(req, type, data)
    self:setActInfo(nil)
    if type == XH.Req.TYPE.SUCCESS then
        if data and data.res and data.res.special then
            local ok, res_tab = pcall(cjson.decode, data.res.special)
            if ok and res_tab and res_tab.sessions then
                self:setActInfo(res_tab.sessions)
            end
        end
    end
end

-- 获取服务下发的Gift数据
function YGiftEnterModule:getGiftInfoByLevel()
    local info = self:getPlayerActInfo()
    if info == nil then
        return nil
    end
    local gifts = {}
    if info.gifts and #info.gifts > 0 then
        gifts = info.gifts
        for i = 1, #gifts do
            gifts[i].goods_id = gifts[i].goodsId
        end
        return gifts
    end
    return nil
end

-- 获取玩家活动信息
function YGiftEnterModule:reqPlayerInfo(session_id, gameID)
    if self:getActivityId() == nil then
        return
    end
    XH.TipTool.showLoading()
    self._roomLevel = session_id
    self._gameID = gameID
    self:setPlayerActInfo(nil)
    self:startReq("ReqJoinRoomGift", self:getActivityId(), session_id, 10, gameID)
end

function YGiftEnterModule:respPlayerInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:setPlayerActInfo(data)
        self._createType = data.createType or 0
        self:dispatchEvent({ name = self.FLUSH_ACT_INFO })
        -- 如果有对应配置就弹
        local info = self:getGiftInfoByLevel(self._roomLevel, data.isRecharged, self._gameID)
        if info then
            XH.viewManager:openView("YGiftEnterView", nil, { level = self._roomLevel, info = info, gameID = self._gameID })
            return
        end
    end
    XH.TipTool.showTip({
        type = XH.TIP_LAYER_TYPE.OK,
        funcOK = function()
            local ShopConfig = require("lobby.Modules.Shop.Config")
            XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.GOLD})
        end
    }, "您的金币不足，请进行充值")
end

function YGiftEnterModule:getCreateType()
    return self._createType
end

return YGiftEnterModulei