local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
local UIMah = CF.gameClass("UIMah2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMah")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")

local IconType = {
    Joker = 1,
    Flower = 2,
    Ting = 3,
    SongZhang = 4
}

local GroundImgType = {
    Back = "Back",
    FaceGround = "FaceGround",
    BackPattern = "BackPattern"
}

local ImgSource = {
    Plist = "Plist",
    Local = "Local",
    Download = "DownLoad",
}

function UIMah:_initView()
    UIMah.super._initView(self)
    self._bShowSongZhang = false
    self._songZhangIcon = nil -- 送张标识
end

function UIMah:_getFaceFrameName()
    if not MahLogic.isNormalMahValue(self._mahValue) then
        return nil
    end
    local faceType = self:_getConfigValueByKey(UIMahConfig.MahSettingKey.FaceType)
    if not UIMahConfig.MahFacePlistPath[faceType] then
        return nil
    end
    local mahFrameNameStr = self:getMahFrameNameStr(faceType)
    return string.format(mahFrameNameStr, self._mahValue)
end

function UIMah:getMahFrameNameStr(faceType)
    local mahFrameNameStr = UIMahConfig.MahFrameNameStr
    if faceType == CF.GameDefine.MAH_FACE_TYPE.FACE_2 then
        mahFrameNameStr = UIMahConfig.MahFrameNameStr2
    end
    return mahFrameNameStr
end

function UIMah:_createIconImg(iconType)
    if iconType == IconType.SongZhang then
        local frameName = UIMahConfig.MahFrameSongFlag
        local iconImg = ccui.ImageView:create()
        if frameName and frameName ~= "" then
            iconImg:loadTexture(frameName, ccui.TextureResType.plistType)
        end
        return iconImg
    end
    return UIMah.super._createIconImg(self, iconType)
end

function UIMah:showSongZhangIcon(bShow)
    self._bShowSongZhang = bShow
    self:_updateSongZhangIcon()
end

function UIMah:_updateSongZhangIcon()
    if not self._bShowSongZhang then
        self:_removeSongZhangIcon()
        return
    end
    if not self._songZhangIcon then
        local songZhangIcon = self:_createIconImg(IconType.SongZhang)
        songZhangIcon:setAnchorPoint(display.CENTER)
        self:addChild(songZhangIcon, UIMahConfig.MahZorderConf.LastOutFlagIcon + 1)
        self._songZhangIcon = songZhangIcon
    end

    self:_updateSongZhangIconPosition()
end

function UIMah:_updateSongZhangIconPosition()
    if not self._songZhangIcon then
        return
    end
    local songIconSize = self._songZhangIcon:getContentSize()
    local selfSize = self:getContentSize()
    local thick = self:getThick() / self:getScale()

    self._songZhangIcon:setPosition(selfSize.width - songIconSize.width / 2, selfSize.height-thick-songIconSize.height/2)
end

function UIMah:_removeSongZhangIcon()
    if self._songZhangIcon then
        self._songZhangIcon:removeFromParent()
        self._songZhangIcon = nil
    end
end

function UIMah:_getAddHeight()
    return 0
end

function UIMah:_resetBackImg()
    if self._mahBackImg then
        self._mahBackImg:removeFromParent()
        self._mahBackImg = nil
    end
    self._mahBackImg = self:_createMahImg(GroundImgType.Back, ImgSource.Plist)
    self._mahBackImgInitSize = self._mahBackImg:getContentSize()
    if self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    or self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT then
        self._mahBackImg:setContentSize(self._mahBackImgInitSize.width - 20, self._mahBackImgInitSize.height)
        self._mahBackImgInitSize = self._mahBackImg:getContentSize()
    end
    self:_updateThick()
end

function UIMah:_resetFaceGroundImg()
    if self._mahFaceGroundImg then
        self._mahFaceGroundImg:removeFromParent()
        self._mahFaceGroundImg = nil
    end
    self._mahFaceGroundImg = self:_createMahImg(GroundImgType.FaceGround, ImgSource.Plist)
    self._mahFaceGroundImgInitSize = self._mahFaceGroundImg:getContentSize()
    if self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    or self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT then
        self._mahFaceGroundImg:setContentSize(self._mahFaceGroundImgInitSize.width - 20, self._mahFaceGroundImgInitSize.height)
        self._mahFaceGroundImgInitSize = self._mahFaceGroundImg:getContentSize()
    end
    if not self:_updateFaceGroundHeight() then
        self:_updateFacePosition()
    end
end

return UIMah�