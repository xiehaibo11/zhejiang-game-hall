local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqPlayerProps = class("CellReqPlayerProps",CellProtocol)

local ToolProtocol = require("app.Protocols.ToolProtocol")

local KW_PROPID_PLAYER_HEAD_EFFECT =  KW_PROPID_HEAD_EFFECT or 0

CellReqPlayerProps.eventName = "CellReqPlayerProps"
function CellReqPlayerProps:ctor()
    CellReqPlayerProps.super.ctor(self)
    self._props = {}
    self._timeProps = {}
end

function CellReqPlayerProps:start(gameID,timeout) 
    if CellReqPlayerProps.super.start(self, timeout) == false then
        return
    end
    local tReqPlayerPropsData = ToolProtocol.ReqPlayerPropsData:new()
    tReqPlayerPropsData.askid = 1
    tReqPlayerPropsData.gameid = gameID    
    Game.Interface.addProtocolScriptFuncByObj(self,self.onRespPlayerProps,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Tool or 62)
    Game.Interface.sendMessage(tReqPlayerPropsData,0,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Tool or 62)
end


function CellReqPlayerProps:onRespPlayerProps(XYID, buff, len)
    if XYID ~= ToolProtocol.RespPlayerPropsData.XY_ID then
        return
    end

    local  propsData = ToolProtocol.RespPlayerPropsData:new()
    propsData:bistream( buff, len )
    self._timeProps = propsData.timeprops
    for i,v in pairs(propsData.props) do
        self._props[v.id] = v.count
    end
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new(CellReqPlayerProps.eventName)
    event.cell = self
    eventDispatcher:dispatchEvent(event) 
    self:success()
end

function CellReqPlayerProps:getRoomCardsCount()
    if KW_CONFIG_AREA_ID and KW_CONFIG_AREA_ID == 7119 then
        return ((self._props[KW_PROPID_ROOM_CARD] or 0) + (self._props[KW_PROPID_DIAMOND] or 0) + (self._props[KW_PROPID_ROOM_CARD_2] or 0))
    else
        return self._props[KW_PROPID_ROOM_CARD]
    end
end

function CellReqPlayerProps:getPropCntByID(id)
    return self._props[id] or 0
end

function CellReqPlayerProps:getPlayerHeadEffectPropCount()
    return self._props[KW_PROPID_PLAYER_HEAD_EFFECT] or 0
end

function CellReqPlayerProps:getCouponCount()
	if KW_PROPID_COUPON then
    	return self._props[KW_PROPID_COUPON]
	end
	return 0
end

function CellReqPlayerProps:getSmallRoomCardsCount()      --AA֧��С���������
    if KW_PROPID_SMALL_ROOMCARD then
        return self._props[KW_PROPID_SMALL_ROOMCARD]
    end
    return 0   
end

function CellReqPlayerProps:getDiamondCount()
	if KW_PROPID_DIAMOND then
    	return self._props[KW_PROPID_DIAMOND]
	end
	return 0
end

function CellReqPlayerProps:getRedPackage()
	if KW_PROPID_RED_PACKAGE then 
		return self._props[KW_PROPID_RED_PACKAGE]
	end
	return 0
end

function CellReqPlayerProps:getTimePropData()
    return self._timeProps
end

return CellReqPlayerProps