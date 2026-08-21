---@class PlayerBillMergeItem : View
local PlayerBillMergeItem = class("PlayerBillMergeItem", XH.ViewBase)

local WinScoreFnt = "cocosStudio/hall/Font/fnt_2-export.fnt"
local LostScoreFnt = "cocosStudio/hall/Font/zj_zj_font-export.fnt"
local WinTextColor = cc.c3b(140,89,51)
local LostTextColor = cc.c3b(10,128,136)
local WinBgImg = "player_bill_view_total_bill_item_bg_2.png"
local LostBgImg = "player_bill_view_total_bill_item_bg_1.png"

local KW_HEAD_DEFAULT_PLIST = "cocosStudio/hall/Image/playerbill_view.plist"
local KW_HEAD_DEFAULT_PNG = "player_bill_view_default_head.png"

function PlayerBillMergeItem:getCSBPath()
    return "cocosStudio/hall/CSB/PlayerBillMergeItem.csb"
end

function PlayerBillMergeItem:getBindingInfo()
    return {
        ["_KW_IMG_ROOT"] = { varName = "_imgRoot" },
        ["_KW_PANEL_HEAD"] = { varName = "_panelHead" },
        ["_KW_TEXT_NAME"] = { varName = "_textName" },
        ["_KW_TEXT_INDEX"] = { varName = "_textIndex" },
        ["_KW_LABEL_SCORE"] = { varName = "_labelScore" }
    }
end

function PlayerBillMergeItem:ctor(info)
    PlayerBillMergeItem.super.ctor(self)
    self._info = info or {}
    self:initView()
end

function PlayerBillMergeItem:initView()
    cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_HEAD_DEFAULT_PLIST)
    self:updateColorSystem(self._info.score)
    self:setName(self._info.name)
    self:setIndex(self._info.numid)
    self:setScore(self._info.score)
    self:setHeadUrl(self._info.url)
end

function PlayerBillMergeItem:setIndex(index)
    if not self._textIndex or index == nil then
        return 
    end
    self._textIndex:setString(tostring(index))
end

function PlayerBillMergeItem:setName(nameStr)
    if not self._textName then
        return 
    end
    self._textName:setString(nameStr)
end

function PlayerBillMergeItem:setScore(score)
    if not self._labelScore then
        return 
    end
    self._labelScore:setString(score >= 0 and "+" .. tostring(score) or tostring(score))
end

function PlayerBillMergeItem:setHeadUrl(url)
    if not self._panelHead then
        return 
    end

    local size = self._panelHead:getContentSize()
    if not self._headImage then
        self._headImage = XH.RemoteImage.new()
            :setTouchEnabled(true)
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width, size.height)
            :addTo(self._panelHead)
    end
    self._headImage:loadTexture(KW_HEAD_DEFAULT_PNG, ccui.TextureResType.plistType)
    self._headImage:setUrl(url or "")
end

function PlayerBillMergeItem:updateColorSystem(score)
    if score >= 0 then
        if self._labelScore then
            self._labelScore:setFntFile(WinScoreFnt)
        end
        if self._textName then
            self._textName:setTextColor(WinTextColor)
        end
        if self._textIndex then
            self._textIndex:setTextColor(WinTextColor)
        end
        if self._imgRoot then
            self._imgRoot:loadTexture(WinBgImg, ccui.TextureResType.plistType)
        end
    else
        if self._labelScore then
            self._labelScore:setFntFile(LostScoreFnt)
        end
        if self._textName then
            self._textName:setTextColor(LostTextColor)
        end
        if self._textIndex then
            self._textIndex:setTextColor(LostTextColor)
        end
        if self._imgRoot then
            self._imgRoot:loadTexture(LostBgImg, ccui.TextureResType.plistType)
        end
    end
end

return PlayerBillMergeItem