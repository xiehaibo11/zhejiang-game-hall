--[[
    desc:针对个别玩家引导创建比赛场活动
    author:{xiezhihan}
    time:2022-02-10 14:40:29
]]
local CreateTeaHouseActModule = class("CreateTeaHouseActModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local CreateTeaHouseActConfig = require("lobby.Modules.CreateTeaHouseAct.Config")
local SinglePopInfo = require("lobby.Modules.PopSystem.SinglePopInfo")

CreateTeaHouseActModule.EVENT_FULSH_CREATE_TEAHOUSE_ACT_POPINFO = "EVENT_FULSH_CREATE_TEAHOUSE_ACT_POPINFO"
CreateTeaHouseActModule.EVENT_FULSH_VIEW_CONFIG = "EVENT_FULSH_VIEW_CONFIG"

function CreateTeaHouseActModule:getReqConfig()
    return {
        ReqActGroup = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.reqActGroupCallBack },
        ReqWebPopList = { reqPath = "app.Req.ReqWebPopList", callBack = self.onRespWebActivity },
    }
end

function CreateTeaHouseActModule:ctor()
    CreateTeaHouseActModule.super.ctor(self)
    self._tempConfigData = nil 
end

function CreateTeaHouseActModule:isOpen()
    return CreateTeaHouseActConfig.IS_OPEN[XH.areaData:getLobbyID()]
end

function CreateTeaHouseActModule:reqStatus()
    if not self:isOpen() then 
        return 
    end
    local str = ";isInActGrop=true"
    self:startReq("ReqActGroup", TaskDefine.TASK_ID.TASK_TYPE_CREATE_TEAHOUSE_ACT, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT,str)
end

function CreateTeaHouseActModule:reqActGroupCallBack(cell, cellType, data)
    if cellType == XH.Req.TYPE.SUCCESS then
        local acData = data.acData
        if acData and acData ~= "" then
            local jsonData
            local ok = pcall( function()
                jsonData = cjson.decode(acData)
            end )
            if not ok then
                return
            end
            if jsonData then 
                --显示活动或者不显示活动
                self:dispatchEvent({name = self.EVENT_FULSH_CREATE_TEAHOUSE_ACT_POPINFO, data = {
                    icon = LobbyConfig.ICON_ID.CREATE_TEA_HOUSE; 
                    isShow = jsonData.isShow or false;}
                })
                XH.playerData:setTeaCreateGroup(jsonData.isShow)
            end
            -- 假数据制作
            -- local jsonData = {isShow = true}
            -- if jsonData then
            --     --显示活动或者不显示活动
            --     self:dispatchEvent({name = self.EVENT_FULSH_CREATE_TEAHOUSE_ACT_POPINFO, data = {
            --         icon = LobbyConfig.ICON_ID.CREATE_TEA_HOUSE; 
            --         isShow = jsonData.isShow or false;}
            --     })
            -- end
            -- if jsonData.isShow then 
            --     XH.playerData:setTeaCreateGroup(true)
            -- end
        end
    end
end

--创建比赛场
function CreateTeaHouseActModule:createTeaHouseByAct()
    if not XH.playerData:isTeaCreateGroup() then
        XH.TipTool.showToast("该活动暂未开放,敬请期待~~", 3)
        return
    end
    XH.teaHouseManager:openTeaHouseList()
    XH.TipTool.showLoading()
    self:performWithDelay(function()
        local teaHouseDefaultConfig = CreateTeaHouseActConfig.TeaHouseDefaultConfig[XH.areaData:getLobbyID()]
        if teaHouseDefaultConfig then 
            XH.teaHouseManager:onCreateTeaHouse(teaHouseDefaultConfig)
        end
        XH.TipTool.hideLoading()
    end, 2.0)
end

function CreateTeaHouseActModule:reqWebActivity()
    self:startReq("ReqWebPopList")
end

function CreateTeaHouseActModule:onRespWebActivity(cell, reqType, data)
    if reqType == XH.Req.TYPE.SUCCESS then
        self._tempConfigData = self:dealTeaCreatePopInfo(data)
        self:dispatchEvent({ name = self.EVENT_FULSH_VIEW_CONFIG, msg = { configData = self._tempConfigData } })
    end
end

--得到创建比赛场活动的弹窗信息
function CreateTeaHouseActModule:dealTeaCreatePopInfo(webConfData)
    local webListData = webConfData.list or {}
    for _, singleConf in pairs(webListData) do
        if singleConf.config_params and singleConf.config_params == "view=CreateTeaHouseView" then 
            local popInfo = SinglePopInfo.createWithWebConfig(singleConf)
            if popInfo._webViewConf then 
                return popInfo._webViewConf
            end
        end 
    end
end

function CreateTeaHouseActModule:onEventFulshView()
    if not self:isOpen() then 
        return 
    end
    if not XH.playerData:isTeaCreateGroup() then 
        self:dispatchEvent({name = self.EVENT_FULSH_CREATE_TEAHOUSE_ACT_POPINFO, data = {
            icon = LobbyConfig.ICON_ID.CREATE_TEA_HOUSE; 
            isShow = false;}
        })
    end
end

return CreateTeaHouseActModule