local GoldPlayActModule = class("GoldPlayActModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")
local TaskID = TaskDefine.TASK_ID

function GoldPlayActModule:ctor()
    GoldPlayActModule.super.ctor(self)
end

function GoldPlayActModule:getReqConfig()
    return {
        ReqGoldPlayActAward = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onCellReqTaskProtocolCallBack },
    }
end

function GoldPlayActModule:reqGoldPlayActAward()
    local level = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_LEVEL_WITH_LOBBY)
    local confID = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX)
    local goldRoomInfo = XH.goldConfigManager:getGoldRoomInfoByIndex(confID)
    local goldActRoomType = goldRoomInfo.roomInfo.GoldActRoomType
    if level and goldActRoomType and goldActRoomType[level] ~= "" and goldActRoomType[level] ~= nil then
        local nid = XH.playerData:getNumberID()
        local taskAppid = 0
        local processid = XH.TaskProtocol.ReqTaskProtocol.processid
        local taskid = TaskID.TASK_TYPE_ID_GOLD_PLAY_ACT
        local srsGroupID = XH.areaData:getSrsGroupID()
        local outTime = XH.KW_CONFIG_LOGIC_TIME_OUT
        self:startReq("ReqGoldPlayActAward", nid, taskAppid, processid, taskid, srsGroupID, outTime)
    end
end

function GoldPlayActModule:onCellReqTaskProtocolCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        if data.acData and data.acData ~= "" and data.acData ~= "nil" then
            local actData = cjson.decode(data.acData)
            XH.viewManager:openView("GoldPlayActView", nil, actData)
        end
    end
end

function GoldPlayActModule:reqDownloadImage(image_url, force, obj, callBack)
    local downloadImage = require("app.Req.DownloadImage")
    local reqDownloadImage = downloadImage:new()
    reqDownloadImage:addReqCallBack(obj, callBack)
    reqDownloadImage:setUrl(image_url, false)
end

return GoldPlayActModule