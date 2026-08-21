local BaoJiRankTitle = class("ActBaoJiRankView", XH.Bridge.ViewBase)
local LocalConfig = import("...Configs.LocalConfig")
local Config = import(".Config")
local Utils = import("...Tool.Utils")
local UI_PATH = LocalConfig.IMG_PATH.ACT_BJRANK .. "title/"
local IMG_CFG = {
    font = {UI_PATH .. "bjmrt_fnt_num06.fnt", UI_PATH .. "bjmrt_fnt_num07.fnt", UI_PATH .. "bjmrt_fnt_num08.fnt", UI_PATH .. "bjmrt_fnt_num09.fnt"},
    imgWeek = {UI_PATH .. "bjmrt_zch_01.png", UI_PATH .. "bjmrt_zch_02.png", UI_PATH .. "bjmrt_zch_03.png", UI_PATH .. "bjmrt_zch_04.png"},
    imgSeason = {UI_PATH .. "bjmrt_ch_01.png", UI_PATH .. "bjmrt_ch_02.png", UI_PATH .. "bjmrt_ch_03.png", UI_PATH .. "bjmrt_ch_04.png"}
}

function BaoJiRankTitle:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/BaoJiRankTitle.csb")
end

function BaoJiRankTitle:getBindingInfo()
    return {["_img"] = {varName = "_img"}, ["_txt"] = {varName = "_txt"}, ["_aniNode"] = {varName = "_aniNode"}}
end

function BaoJiRankTitle:updateUI(data)
    if self._isInBag or (data and data.rank and data.rank <= 500 and data.rank > 0) then
        if self._rank == data.rank and self._propid == data.propid then
            return
        end
        self._rank = data.rank
        self._propid = data.propid
        self:setVisible(true)
        self._txt:setString(string.format("第%d名", data.rank))
        local isSeason = data.propid == Config.PROP_SEASON_TITLE_ID
        local uiIdx = 1
        if data.rank > 100 then
            uiIdx = 4
        elseif data.rank > 10 then
            uiIdx = 3
        elseif data.rank > 3 then
            uiIdx = 2
        else
            local titleName = {"冠军", "亚军", "季军"}
            self._txt:setString(titleName[data.rank])
        end
        -- self._img:loadTexture(IMG_CFG[isSeason and "imgSeason" or "imgWeek"][uiIdx], ccui.TextureResType.localType)
        self._aniNode:removeAllChildren()
        Utils:addSpine(self._aniNode, "ActBJRank", "zzb_bjw_chenghao", isSeason and "" .. uiIdx or "" .. uiIdx .. uiIdx)
        self._txt:setFntFile(IMG_CFG.font[uiIdx])
    else
        self:setVisible(false)
    end
end

function BaoJiRankTitle:ctor(param)
    param = param or {}
    BaoJiRankTitle.super.ctor(self, param)
    self._isInBag = param.isInBag
end

return BaoJiRankTitle
