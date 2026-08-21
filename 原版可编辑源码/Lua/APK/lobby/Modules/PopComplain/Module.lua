--问卷系统(我要吐槽)套用弹窗的逻辑
--只提取固定弹窗(我要吐槽)信息
--(最终根据筛选一个SortIndex最小值的信息)
local PopComplainModule = class("PopComplainModule", XH.ModuleBase)
local SinglePopInfo = require("lobby.Modules.PopSystem.SinglePopInfo")

function PopComplainModule:ctor()
    PopComplainModule.super.ctor(self)
end

function PopComplainModule:getReqConfig()
    return {
        ReqWebPopList = { reqPath = "app.Req.ReqWebPopList", callBack = self.onPopComplainCallBack },
    }
end

function PopComplainModule:reqComplainInfo()
    self:startReq("ReqWebPopList")
end

--问卷系统只请求一次
function PopComplainModule:isReqComplainData()
    return XH.playerData:getReqComplainData()
end

function PopComplainModule:onPopComplainCallBack(cell, reqType, data)
    if reqType == XH.Req.TYPE.SUCCESS then
        self:updatePopList(data)
        XH.playerData:setReqComplainData(false)
    end
end

function PopComplainModule:updatePopList(webConfData)
    self._popLayerList = {}
    local webListData = webConfData.list or {}
    for _, singleConf in pairs(webListData) do
        local popInfo = SinglePopInfo.createWithWebConfig(singleConf)
        table.insert(self._popLayerList, popInfo)
    end
    self:getFinalComplainInfos(self._popLayerList) 
end

function PopComplainModule:getFinalComplainInfos(webConfData)
    local webListData = webConfData or {}
    if not webListData then 
        return 
    end
    local complainTable = {}
    for _, singleConf in pairs(webListData) do
        if singleConf._viewName == "ComplainView" then 
            table.insert(complainTable,singleConf )
        end
    end
    local FianlcomplainInfo = self:getFinalFixPopInfos(complainTable)
    self:setComplainSystemData(FianlcomplainInfo)
end

--获取最终需要显示的固定弹窗
function PopComplainModule:getFinalFixPopInfos(fixInfos)
    if not fixInfos or #fixInfos == 0 then
        return
    end
    local smallIndex = 0
    local tempInfos = {}
    for _, info in pairs(fixInfos) do
        local tempIndex = info:getSortIndex()
        if tempIndex > 0 then
            if smallIndex == 0 then
                smallIndex = tempIndex
                table.insert(tempInfos, info)
            elseif tempIndex == smallIndex then
                table.insert(tempInfos, info)
            elseif tempIndex < smallIndex then
                tempInfos = {info}
                smallIndex = tempIndex
            end
        end
    end
    if #tempInfos == 1 then
        return tempInfos
    end
    local randomIndex = math.random(1, #tempInfos)
    return {fixInfos[randomIndex]}
end

function PopComplainModule:setComplainSystemData(info)
    if not info or #info == 0 then
        return
    end
    local allBtnsConf = info[1]._webViewConf.btns or {}
    for _, btnConf in pairs(allBtnsConf) do
        if btnConf.link then
            self:setComplainValue(btnConf.link)
        end
    end
end

function PopComplainModule:setComplainValue(value)
    local tmpData = {}
    local verList = string.split(value,",")
    if #verList > 1 then 
        tmpData.show = verList[2]            --是否展示
    end
    if #verList > 2 then
        tmpData.text = tostring(verList[3])  --气泡内容
    end
    if #verList > 3 then
        tmpData.url = verList[4]             --跳转链接
    end
    XH.playerData:setComplainData(tmpData)
end

return  PopComplainModule