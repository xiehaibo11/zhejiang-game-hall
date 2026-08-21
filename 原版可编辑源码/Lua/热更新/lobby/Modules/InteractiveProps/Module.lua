-- 互动道具模块
local InteractivePropsModule = class("InteractivePropsModule", XH.ModuleBase)
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

function InteractivePropsModule:ctor()
    InteractivePropsModule.super.ctor(self)
    self:setPropsConfig()
end

function InteractivePropsModule:setPropsConfig()
    self:resetPropsConfig()
    if XH.isEmbeddedApp and XH.isEmbeddedApp() then
        local params = XH.PluginModule.getStartParams()
        if params.zjbGoldPropType ~= 0 then
            self:reqExchangeProductsInfo(params.zjbGoldPropType)
        end
        return
    end
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        if configJsonData.Emoji and configJsonData.Emoji.prop_type then
            local propType = configJsonData.Emoji.prop_type[tostring(XH.areaData:getAreaID())]
            if propType then
                self:reqExchangeProductsInfo(propType)
            end
        end
    end
end

function InteractivePropsModule:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration"}
    }
end

function InteractivePropsModule:onGetConfiguration(event)
    local key = event.data.key
    if key and key == ConfigurationDefine.Config.ALL then
        self:setPropsConfig()
    end
end

function InteractivePropsModule:getReqConfig()
    return {
        ReqExchangeProductList = {reqPath = "lobby.Req.Shop.ReqExchangeProductList", callBack = self.respProductsInfo}
    }
end

function InteractivePropsModule:reqExchangeProductsInfo(propType)
    local numId = XH.playerData:getNumberID()
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local areaId = XH.playerData:getBrandID()
    self:startReq("ReqExchangeProductList", numId, userId, areaId, XH.areaData:getAreaWindID(), 0, XH.KW_CONFIG_LOGIC_TIME_OUT, "", propType)
end

function InteractivePropsModule:dealPropData(data)
    -- local x = {
    --     {
    --         prop_count = 1, -- 需要道具数量（表示几连发）
    --         price_config = {{type = "prop150105", name = "大房卡", value = "1"}, {type = "prop150107", name = "钻石", value = "30"}},
    --         value = "150287", -- 道具id
    --         sort = 50,

    --         id = 12404, -- 后台道具编号
    --         corner_tag = 0,
    --         image = "https://img1-cdn.bianfeng.com/uploads/materials/images/202507/B7022306296152AP.png",
    --         needPropId = 0,
    --         wid = 1043,
    --         goods_act = "",
    --         des = "",
    --         price = 0,
    --         display_price = 0,
    --         goods_day_limit = 0,
    --         day_limit = 0,
    --         inner_game_sort = 50,
    --         offline_at = 2067004799,
    --         name = "鸡蛋单发",
    --         all_limit = 0,
    --         tags = {{sort = 0, key = "prop", name = "包厢"}},
    --         type = "prop",
    --         count = 4294967295,
    --         online_at = 1751385600,
    --         mark = ""
    --     }
    -- }
    data = data or {}
    local newPropData = {}
    newPropData.priceConfig = {diamond = {}, roomCard = {}}
    if data.price_config then
        for i = 1, #data.price_config do
            if data.price_config[i].type == "prop" .. (XH.areaData:getPropSmallRoomCardID() or "") then
                table.insert(newPropData.priceConfig.roomCard, {propid = XH.areaData:getPropRoomCardID(), propCnt = tonumber(data.price_config[i].value) / XH.areaData:getPropSmallRoomCardRatio()})
            elseif data.price_config[i].type == "prop" .. XH.areaData:getPropRoomCardID() then
                table.insert(newPropData.priceConfig.roomCard, {propid = XH.areaData:getPropRoomCardID(), propCnt = tonumber(data.price_config[i].value)})
            elseif data.price_config[i].type == "prop" .. XH.areaData:getPropList().propDiamndID then
                table.insert(newPropData.priceConfig.diamond, {propid = XH.areaData:getPropList().propDiamndID, propCnt = tonumber(data.price_config[i].value)})
            end
        end
    end
    newPropData.propID = tonumber(data.value) or 0
    newPropData.propCnt = data.prop_count or 0
    newPropData.sort = data.sort or 0
    newPropData.tags = data.tags or {}
    newPropData.image = data.image or ""
    return newPropData
end

function InteractivePropsModule:respProductsInfo(req, type, data)
    self._isRequestShopList = false
    if type == XH.Req.TYPE.SUCCESS then
        self:resetPropsConfig()
        for i = 1, #data do
            data[i] = self:dealPropData(data[i])
        end
        for i = 1, #data do
            local info = data[i]
            if info.tags and #(info.tags) > 0 then
                for j = 1, #(info.tags) do
                    if info.tags[j].key == "prop" then
                        if info.propCnt == 1 then
                            table.insert(self._boxEmojipropsConfig.single, info)
                        elseif info.propCnt > 1 then
                            table.insert(self._boxEmojipropsConfig.mult, info)
                        end
                    elseif info.tags[j].key == "gold" then
                        local info2 = clone(info)
                        info2.priceConfig = info2.priceConfig or {}
                        info2.priceConfig.roomCard = {} -- 本来要后台配置的，但是太多了，所以客户端直接写死了
                        if info2.propCnt == 1 then
                            table.insert(self._goldEmojipropsConfig.single, info2)
                        elseif info2.propCnt > 1 then
                            table.insert(self._goldEmojipropsConfig.mult, info2)
                        end
                    end
                end
            end
        end
    end
end

function InteractivePropsModule:resetPropsConfig()
    self._boxEmojipropsConfig = {single = {}, mult = {}}
    self._goldEmojipropsConfig = {single = {}, mult = {}}
end

function InteractivePropsModule:getboxEmojiPropsConfig()
    return self._boxEmojipropsConfig
end

function InteractivePropsModule:getgoldEmojiPropsConfig()
    return self._goldEmojipropsConfig
end

return InteractivePropsModule
