----create by lcy 2017.12.1
local UICard = class("UICard",function()
    return ccui.ImageView:create()
end)

local CURRENT_MOUDLE_NAME = ...
local Card = import(".Card",CURRENT_MOUDLE_NAME)
local UICardDefine = import(".UICardDefine",CURRENT_MOUDLE_NAME)
local SetData = import("GameCommon.Code.GameData.SetData")         

UICard.State = {
    Normal = 1,
    Check = 2,
    Drag = 3,
}

UICard.Color = {
    None = cc.c3b(255,255,255),
    Normal = cc.c3b(255,255,255),
    Select = cc.c3b(255,201,170),
    Unable = cc.c3b(180,180,180),
}

local KW_CARD_FACE_TYPE = SetData:getCardFaceType() or 1

function UICard:ctor()
    self._state = UICard.State.Normal
    self._id = 0
end

function UICard:init()

end

function UICard:setCard(id)
    self:setID(id)
    if cc.SpriteFrameCache:getInstance():getSpriteFrame(string.format(UICardDefine.KW_CARD_PLIST_IMG[KW_CARD_FACE_TYPE],id)) then 
        self:loadTexture(string.format(UICardDefine.KW_CARD_PLIST_IMG[KW_CARD_FACE_TYPE],id),ccui.TextureResType.plistType)
    else 
        self:loadTexture(string.format(UICardDefine.KW_CARD_PLIST_IMG[1],id),ccui.TextureResType.plistType)
    end
end

function UICard:setID(id)
    self._id = id
end

function UICard:getID()
    return self._id
end

function UICard:setState(state)
    self._state = state
end

function UICard:getState()
    return self._state
end

function UICard:setCardFaceType(cardType)
    KW_CARD_FACE_TYPE = cardType or 1
    cc.SpriteFrameCache:getInstance():addSpriteFrames(UICardDefine.KW_PATH_CARD_PLIST[KW_CARD_FACE_TYPE])
end

function UICard:getCardFaceType()
    return KW_CARD_FACE_TYPE
end

return UICard�