local PopLayer = require("game.Common.Tip.PopLayer")
local LeaveRoomLayer = class("LeaveRoomLayer", PopLayer)

LeaveRoomLayer.ENUM_LAYER_TYPE = {
    BOXROOM_OWNER_DISMISS = 1,  --包厢房房主解散
    BOXROOM_DISMISS = 2,        --包厢房玩家解散
    PLAYER_LEAVE = 3,           --包厢房玩家离开
    GOLGROOM_LEAVE = 4,         --金币场玩家离开
}

LeaveRoomLayer.ENUM_BUTTON_TYPE = {
    BACK = 1,
    DISMISS = 2,
    LEAVE = 3,
    CANCEL = 4,
    CLOSE = 5,
}

local KW_PATH_POP_LAYER_ART_RESOURCE = "cocosStudio/Common/TipLayer/CSB"

local KW_LEAVEROOM_LAYER_CSB_RESOURCE_PATH = KW_PATH_POP_LAYER_ART_RESOURCE .. "/tips_leaveroom.csb"

local KW_BTN_NAME_CONFIG = {
    [LeaveRoomLayer.ENUM_BUTTON_TYPE.BACK] = "_KW_BTN_BACK",
    [LeaveRoomLayer.ENUM_BUTTON_TYPE.DISMISS] = "_KW_BTN_DISMISS",
    [LeaveRoomLayer.ENUM_BUTTON_TYPE.LEAVE] = "_KW_BTN_LEAVE",
    [LeaveRoomLayer.ENUM_BUTTON_TYPE.CANCEL] = "_KW_BTN_CANCEL",
    [LeaveRoomLayer.ENUM_BUTTON_TYPE.CLOSE] = "_KW_BTN_CLOSE",
}

local KW_BTN_VISIBLE_CONFIG = {
    [LeaveRoomLayer.ENUM_LAYER_TYPE.BOXROOM_OWNER_DISMISS] = {
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.BACK] = true,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.DISMISS] = true,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.LEAVE] = false,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.CANCEL] = false,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.CLOSE] = true,
    },
    [LeaveRoomLayer.ENUM_LAYER_TYPE.BOXROOM_DISMISS] = {
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.BACK] = true,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.DISMISS] = true,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.LEAVE] = false,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.CANCEL] = false,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.CLOSE] = true,
    },
    [LeaveRoomLayer.ENUM_LAYER_TYPE.PLAYER_LEAVE] = {
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.BACK] = true,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.DISMISS] = false,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.LEAVE] = true,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.CANCEL] = false,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.CLOSE] = true,
    },
    [LeaveRoomLayer.ENUM_LAYER_TYPE.GOLGROOM_LEAVE] = {
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.BACK] = true,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.DISMISS] = false,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.LEAVE] = false,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.CANCEL] = true,
        [LeaveRoomLayer.ENUM_BUTTON_TYPE.CLOSE] = true,
    }
}

local KW_TXT_DEFAULT_NOTICE = {
    [LeaveRoomLayer.ENUM_LAYER_TYPE.BOXROOM_OWNER_DISMISS] = "游戏未开始，解散房间不会扣除房卡。\n返回大厅，房间依旧保留。",
    [LeaveRoomLayer.ENUM_LAYER_TYPE.BOXROOM_DISMISS] = "游戏已开始，发起解散房间请求。\n返回大厅，房间依旧保留。",
    [LeaveRoomLayer.ENUM_LAYER_TYPE.PLAYER_LEAVE] = "游戏未开始，离开房间不会扣除房卡。\n返回大厅，房间依旧保留。",
    [LeaveRoomLayer.ENUM_LAYER_TYPE.GOLGROOM_LEAVE] = "游戏已经开始，退出游戏，房间将保留，在结束时仍未返回游戏，将会被记为逃跑并受到惩罚！",
}

function LeaveRoomLayer:ctor()
    LeaveRoomLayer.super.ctor(self)
    --提示弹窗禁止点击背景关闭
    self._canTouchBackGround = false
    self._buttonFuncInfo = {}
    self._btns = {}
end

function LeaveRoomLayer:init(tipType)
    self._csbResourcePath = KW_LEAVEROOM_LAYER_CSB_RESOURCE_PATH
    LeaveRoomLayer.super.init(self)
    self:initView(tipType)
end

function LeaveRoomLayer:initView(tipType)
    tipType = tipType or  LeaveRoomLayer.ENUM_LAYER_TYPE.BOXROOM_DISMISS
    for _, btnType in pairs(LeaveRoomLayer.ENUM_BUTTON_TYPE) do
        if KW_BTN_NAME_CONFIG[btnType] then
            local tempBtn = ccui.Helper:seekNodeByName(self._popLayer, KW_BTN_NAME_CONFIG[btnType])
            if tempBtn then
                tempBtn:addTouchEventListener(function (send,eventType)
                    self.onButtonEvent(self, send, eventType, btnType)
                end)
                tempBtn:setVisible(KW_BTN_VISIBLE_CONFIG[tipType][btnType])
            end
        end
    end

    self:setText(KW_TXT_DEFAULT_NOTICE[tipType] or "")
end

function LeaveRoomLayer:onButtonEvent(send, eventType, buttonType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    local moreEvent = self._buttonFuncInfo[buttonType]
    if moreEvent ~= nil then
        moreEvent.func(self,unpack(moreEvent.argv))  
    end
    CF.popLayerManager:removeLayer(self.__cname)
end

function LeaveRoomLayer:setButtonMoreEvent(buttonIndex, func, ...)
    self._buttonFuncInfo[buttonIndex] = {["func"] = func,["argv"] = {...}}
end

function LeaveRoomLayer:setText(strText)
    local node = ccui.Helper:seekNodeByName(self._popLayer, "_KW_TEXT_NOTICE")
    if node then
        node:setText(strText)
    end
end

function LeaveRoomLayer:setTouchBackGround(canTouch)
    self._canTouchBackGround = canTouch
end

return LeaveRoomLayer