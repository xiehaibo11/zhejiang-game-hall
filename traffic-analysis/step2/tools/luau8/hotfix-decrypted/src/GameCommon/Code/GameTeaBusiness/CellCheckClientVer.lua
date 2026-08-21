--create by hujiaqi 8/7/2016--
local CURRENT_MODULE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MODULE_NAME)
local CellCheckClientVer = class("CellCheckClientVer", CellProtocol)
local ToolMXY = import("GameCommon.Code.GameProtocol.ToolMXY")
local KW_CONFIG_CLIENT_VERSION = 120110718
function CellCheckClientVer:ctor()
    CellCheckClientVer.super.ctor(self)
end


function CellCheckClientVer:start(timeoutTime)
    if CellCheckClientVer.super.start(self,timeoutTime) == false then
        return
    end
    
    local tReqCheckClientVerData = ToolMXY.ReqCheckClientVer:new()
    tReqCheckClientVerData.version = KW_CONFIG_CLIENT_VERSION

    Game.Interface.addProtocolScriptFuncByObj(self,self.onRespCheckClientVer,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
    Game.Interface.sendMessage(tReqCheckClientVerData,nil,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function CellCheckClientVer:onRespCheckClientVer(XYID, buff, len)
    if XYID ~= ToolMXY.RespCheckClientVer.XY_ID then
        return
    end
    
    local tRespCheckClientVerData = ToolMXY.RespCheckClientVer:new()
    tRespCheckClientVerData:bistream(buff, len)
    
    if tRespCheckClientVerData.flag == ToolMXY.RespCheckClientVer.FLAG.SUCCESS then
        self:success()
    elseif tRespCheckClientVerData.flag == ToolMXY.RespCheckClientVer.FLAG.SHOW_MESSAGE_OK then
        self:setMessage(un.StringUtils.GB_18030_2000_TO_UTF8(tRespCheckClientVerData.msgbox.m_szText))
        self:success(tRespCheckClientVerData.flag)
    else
        self:setMessage(un.StringUtils.GB_18030_2000_TO_UTF8(tRespCheckClientVerData.msgbox.m_szText))
        self:success(tRespCheckClientVerData.flag)
    end
end

return CellCheckClientVer�