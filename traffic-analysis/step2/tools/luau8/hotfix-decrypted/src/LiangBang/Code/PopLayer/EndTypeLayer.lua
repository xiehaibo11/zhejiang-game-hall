local CURRENT_MOUDLE_NAME = ...
local PopLayer = import(".PopLayer")
local EndTypeLayer = class("EndTypeLayer",PopLayer)
local pathKeyWord = import("..Config.PathKeyWord",CURRENT_MOUDEL_NAME)
local KW_UI_ENDTYPE_CSB_PATH =      pathKeyWord.KW_PATH_POP_LAYER_ART_RESOURCE .. "/game_endtype_title.csb"

local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_IMG_ENDTYPE = "KW_IMG_ENDTYPE"

local endType = 
{
    win = 1,
    lose = 2,
    beyond = 3,
}

function EndTypeLayer:ctor()
    EndTypeLayer.super.ctor(self)
end

function EndTypeLayer:init()
    self._csbResourcePath = KW_UI_ENDTYPE_CSB_PATH
    EndTypeLayer.super.init(self)
    local bg = XH.GT.UIFunction.seekWidgetByName(self._popLayer,KW_ROOT_LAYER)
    if bg ~= nil then
        bg:setTouchEnabled(true)
    end
    XH.GT.UIFunction.addTouchEventListener(self._popLayer,KW_ROOT_LAYER,
        function (send,eventType)
            self.onTouchEventBackGround(self,send,eventType)
        end)
end

function EndTypeLayer:onTouchEventBackGround(send,eventType)
    if eventType == ccui.TouchEventType.began then     
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- XH.GT.GameSound.playSoundCloseWindow()
    -- self:showLayer(false)
end

function EndTypeLayer:setEndType(type)
    if type == endType.win then
        Game.UIFunction.loadTexture(self._popLayer,KW_IMG_ENDTYPE,"img_lb_success.png",ccui.TextureResType.plistType)
    elseif type == endType.lose then
        Game.UIFunction.loadTexture(self._popLayer,KW_IMG_ENDTYPE,"img_lb_lose.png",ccui.TextureResType.plistType)
    elseif type == endType.beyond then
        Game.UIFunction.loadTexture(self._popLayer,KW_IMG_ENDTYPE,"img_lb_mianda.png",ccui.TextureResType.plistType)
    end
end

return EndTypeLayer