--[[
请神装扮穿戴/卸下（props/OperateEquip）

用途：整合页「选择庇护」时，将指定神明道具写入 equip=15。
入参：
  · propId   神明道具 id（妈祖/关圣/文殊等）
  · take_off true=卸下，false/缺省=穿戴
成功后 QingShenModule:respQingShenOperateEquip 刷新本地装扮态与 UI。

注意：与 Sxvip OperateEquip 共用 HTTP_ID / URL，仅 params 中 equip 槽位不同。
]]
local Define = require("lobby.Modules.QingShen.Define")
local ReqQingShenOperateEquip = class("ReqQingShenOperateEquip", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqQingShenOperateEquip:ctor()
    ReqQingShenOperateEquip.super.ctor(self)
    --- @type number 本次请求的神明道具 id
    self._propId = 0
end

--- @param data table { propId=, take_off=bool }
--- @param timeout number|nil
function ReqQingShenOperateEquip:start(data, timeout)
    if ReqQingShenOperateEquip.super.start(self, timeout) == false then
        return
    end
    data = data or {}
    local propId = tonumber(data.propId)
    if not propId or propId <= 0 then
        self:fail()
        return
    end
    self._propId = propId

    local urlInfo = {
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        prop = {
            prop_id = propId,
            -- 请神时效道具走 UserTimeNoCount 钱袋
            burse_type = CF.GameDefine.BURSETYPE.UserTimeNoCount,
            count = 1,
        },
        take_off = data.take_off == true,
        -- 固定写入请神装扮槽 15，与 GetEquipProps 查询对齐
        params = "equip=" .. tostring(Define.EQUIP_SLOT),
    }

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_URL_OPERATE_EQUIP,
        UrlConf.URL_OPERATE_EQUIP,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqQingShenOperateEquip:onHttpCallBack(httpID, status, response, xhr)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_URL_OPERATE_EQUIP then
        return
    end
    if status == 200 and response and response.resp and response.resp.errCode == 0 then
        self:success(response)
    elseif response and response.resp then
        self:setMessage(response.resp.errReason)
        self:fail()
    else
        self:fail()
    end
end

return ReqQingShenOperateEquip
e
