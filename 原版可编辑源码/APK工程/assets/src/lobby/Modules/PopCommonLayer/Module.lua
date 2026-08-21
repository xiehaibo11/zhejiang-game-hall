local PopCommonLayerModule = class("PopCommonLayerModule", XH.ModuleBase)
local SinglePopInfo = require("lobby.Modules.PopSystem.SinglePopInfo")
local PopConfig = require("lobby.Modules.PopSystem.PopConfig")

function PopCommonLayerModule:ctor()
    PopCommonLayerModule.super.ctor(self)
    self._popLayerList = nil
    self._needPopLayer = nil
end

function PopCommonLayerModule:getReqConfig()
    return {
        ReqWebPopList = { reqPath = "app.Req.ReqWebPopList", callBack = self.onPopLayerInfoCallBack },
    }
end

function PopCommonLayerModule:reqPopLayerInfo()
    self:startReq("ReqWebPopList")
end

function PopCommonLayerModule:onPopLayerInfoCallBack(cell, reqType, data)
    if reqType == XH.Req.TYPE.SUCCESS then
        self:updatePopList(data)
    end
end

function PopCommonLayerModule:updatePopList(webConfData)
    self._popLayerList = {}
    self._randomLimitCount = webConfData.pop_limit
    local webListData = webConfData.list or {}
    for _, singleConf in pairs(webListData) do
        local popInfo = SinglePopInfo.createWithWebConfig(singleConf)
        self:addPopInfo(popInfo)
    end

    for _, singleConf in pairs(PopConfig.ClientPopList) do
        local popInfo = SinglePopInfo.createWithClientConfig(singleConf)
        self:addPopInfo(popInfo)
    end
    
    if self._needPopLayer then
        self:openPopLayerView(self._needPopLayer)
        self._needPopLayer = nil
    end
end

function PopCommonLayerModule:addPopInfo(popInfo)
    if not popInfo then
        return
    end

    local popScenes = popInfo:getPopScenes()
    for _, popScene in pairs(popScenes) do
        self._popLayerList[popScene] = self._popLayerList[popScene] or {}
        table.insert(self._popLayerList[popScene], popInfo)
    end
end

function PopCommonLayerModule:openPopLayerView(viewName)
    if self._popLayerList == nil then
        self:reqPopLayerInfo()
        self._needPopLayer = viewName
        return
    end
    if viewName and viewName ~= "" then
        for _, popLayers in pairs(self._popLayerList) do
            for _, popInfo in pairs(popLayers) do
                if popInfo._viewNameText == viewName then
                    XH.viewManager:openView( "PopCommonLayerView", nil, popInfo:getWebViewConf())
                    self:reqPopLayerInfo()
                    return
                end
            end
        end
    end
end

function PopCommonLayerModule:havePopLayerView(viewName)
    if viewName and viewName ~= "" then
        if self._popLayerList then
            for _, popLayers in pairs(self._popLayerList) do
                for _, popInfo in pairs(popLayers) do
                    if popInfo._viewNameText == viewName then
                        return true
                    end
                end
            end
        end
    end
    return false
end

return PopCommonLayerModule