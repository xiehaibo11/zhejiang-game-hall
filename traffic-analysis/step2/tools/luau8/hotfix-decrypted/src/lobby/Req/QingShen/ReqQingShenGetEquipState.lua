--[[
请神装扮状态查询（props/GetEquipProps）

用途：查询玩家 equip=15（请神槽）当前穿戴的神明道具与 state。
回包经 QingShenModule:respQingShenGetEquipState 写入 _equippedPropId / _equipState，
驱动桌面 Icon、整合页「选择庇护」状态与头像循环动画。

注意：HTTP_ID / URL 与 Sxvip 装扮共用同一接口与回调 id，
并发请求时依赖 httpManager 按请求实例分发回调，勿假定全局单飞。
]]
local Define = require("lobby.Modules.QingShen.Define")
local ReqQingShenGetEquipState = class("ReqQingShenGetEquipState", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqQingShenGetEquipState:ctor()
    ReqQingShenGetEquipState.super.ctor(self)
    --- @type number[] 待查询的用户 id 列表
    self.userIds = {}
end

--- @param userIds number[] 用户 id 列表
--- @param timeout number|nil 超时秒数
function ReqQingShenGetEquipState:start(userIds, timeout)
    if ReqQingShenGetEquipState.super.start(self, timeout) == false then
        return
    end

    if type(userIds) ~= "table" or #userIds == 0 then
        self:fail()
        return
    end
    self.userIds = userIds

    local urlInfo = {
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        info = {},
    }

    -- 每个用户查请神装扮槽（EQUIP_SLOT=15）
    for _, userid in ipairs(userIds) do
        if userid then
            urlInfo.info[#urlInfo.info + 1] = {
                user_id = userid,
                equip = Define.EQUIP_SLOT,
            }
        end
    end
    if #urlInfo.info == 0 then
        self:fail()
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_GET_EQUIP_STATE,
        UrlConf.URL_GET_EQUIP_STATE,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqQingShenGetEquipState:onHttpCallBack(httpID, status, response, xhr)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_EQUIP_STATE then
        return
    end
    -- response.resp 可能缺失（网关异常/截断），必须先判空再读 errCode
    if status == 200 and response and response.resp then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqQingShenGetEquipState
�
