local CommonActView = class("CommonActView", XH.ViewBase)
local LuckyTaskDefine = require("lobby.Modules.LuckyTask.Define")

function CommonActView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/CommonActView.csb"
end

function CommonActView:getBindingInfo()
    return {["_KW_IMG_BG"] = {varName = "_imgBg", onTouchEnded = "onTouchEventGo"}}
end

function CommonActView:ctor(param)
    param = param or {}
    CommonActView.super.ctor(self, param)
    self.csbNode = self
    self.width = param.width or 1342
    self.height = param.height or 870
    self:setContentSize(self.width, self.height)
    -- self:setName(self.KW_NAME_LUCKY_TURN_TABLE)
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_3, nil, {area_id = XH.areaData:getAreaID()})
end

function CommonActView:updateWithWebCfg(data)
    local url = {
        ["LUCKYTASK"] = "https://palmastatic.wenzhoushuke.com/materials/images/20241212/15390399252.jpeg",
        ["ANTI_HACK"] = "https://palmastatic.wenzhoushuke.com/materials/images/20241217/14370073765.png",
    }
    if data and data.icon_code and url[data.icon_code] then
        local remoteImage = XH.UITool.seekNodeByName(self._imgBg, "KW_IMG")
        if remoteImage == nil then
            local size = self._imgBg:getContentSize()
            remoteImage = XH.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width, size.height)
            :setName("KW_IMG")
            :addTo(self._imgBg)
        end
        remoteImage:setUrl(url[data.icon_code]) 
    end
    self._actCode = data and data.icon_code or ""
end

function CommonActView:getProxyEvents()
    return {}
end

function CommonActView:onTouchEventGo(send, eventType)
    if self._actCode == "LUCKYTASK" then
        XH.viewManager:openView("LuckyTaskView", nil, LuckyTaskDefine.POP_FROM.LOBBY_ACT)
    end
end

return CommonActView
�