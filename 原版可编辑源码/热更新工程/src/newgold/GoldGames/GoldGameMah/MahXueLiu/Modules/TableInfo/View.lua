local TableInfoView = NG.GAME.gameClass("TableInfoView", NG.ViewBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")

function TableInfoView:ctor()
    TableInfoView.super.ctor(self)

    self:initView()
    self:updateSceneName()
end

function TableInfoView:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/TableInfo/TableInfoLayer.csb"
end

function TableInfoView:getBindingInfo()
    return {
        --
        ["_KW_IMG_TABLE_BG"] = {varName = "_tableBg"},
        ["_KW_PANEL_ROOT"] = {varName = "_rootNode", onTouchEnded = "onBgClick"},
        ["_KW_TEXT_TABLEINFO"] = {varName = "_KW_TEXT_TABLEINFO"}, -- 场次信息
        ["_KW_TEXT_MULTI"] = {varName = "_KW_TEXT_MULTI"}, -- 倍数信息
        ["_KW_PANEL_BASETIP"] = {varName = "_KW_PANEL_BASETIP"}
    }
end

function TableInfoView:getProxyEvents()
    return {
        --
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CHANGE_TABLE_SUCCESS", callBack = "updateSceneName"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_RESET_TABLE", callBack = "onResetTable"},
    }
end

function TableInfoView:initView()
    local tableBgImgPath = self:getTableBgImgPath()
    if tableBgImgPath then
        self._tableBg:loadTexture(tableBgImgPath, ccui.TextureResType.localType)
    else
        self._tableBg:setVisible(false)
    end
    self._rootNode:setSwallowTouches(false)
end

function TableInfoView:getTableBgImgPath()
    --return "res/tex/image/card_scene_bg.jpg"
end

-- 设置场次名称
function TableInfoView:updateSceneName()
    local info = NG.RoomTool.getGoldLevelInfo()
    if info ~= nil then
        self._KW_TEXT_TABLEINFO:setString(info.name .. " 底分" .. info.base)
    end
end


function TableInfoView:onBgClick()
    NG.goldGame:getModule("GameMain"):onBgClick()
end
-- 加倍
function TableInfoView:onMultData(event)
    if event == nil or event.data == nil then
        return
    end
    if (event.data.nFlag == 0) then
        -- 基础倍数
        self:onMultDataAni(GameMainDefine.SELF_LOCAL_SEAT, event.data.nData, NG.goldGame:getModule("GameMain"):getData():getBaseMult(), false)
    elseif event.data.nFlag == 2 then
        -- 2炸弹
    elseif event.data.nFlag == 3 then
        -- 抢地主
    elseif event.data.nFlag == 4 or event.data.nFlag == 5 then
        -- 4春天，5反春天
    elseif event.data.nFlag == 6 then
        -- 加倍倍数
    elseif event.data.nFlag == 7 then
        if event.data.nStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_DOUBLE or event.data.nStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_ROB_BANKER or event.data.nStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_CARD then
            -- 抢地主
            self:onMultDataAni(GameMainDefine.SELF_LOCAL_SEAT, event.data.nData, NG.goldGame:getModule("GameMain"):getData():getMult(), false)
        end
    end
end

function TableInfoView:onMultDataAniSingle()
    self:onMultDataAni(GameMainDefine.SELF_LOCAL_SEAT, nil, nil, false)
end

-- 显示倍数，以及播放ANI
function TableInfoView:onMultDataAni(seat, curMult, totalMult, isAni)
    if isAni == nil then
        isAni = true
    end
    if seat ~= GameMainDefine.SELF_LOCAL_SEAT then -- 只有自己显示倍数
        return
    end
    if isAni then
        -- this.playBeiFlyNumAni(curMult, totalMult) -- 播放倍数动画 todo
    else
        if totalMult == nil then
            totalMult = NG.goldGame:getModule("GameMain"):getData():getMult()
        end
        self._KW_TEXT_MULTI:setString(totalMult)
    end
end

function TableInfoView:onResetTable()
    self._KW_TEXT_MULTI:setString("0")
end

return TableInfoView
