
local MahInfoTaskLayer = class("MahInfoTaskLayer", CF.ViewBase)

--任务吃碰杠文字
local ACTION_TYPE_DEFINE = {
    "erren_majhong_renwu_pung.png",
    "erren_majhong_renwu_kung.png",
}

function MahInfoTaskLayer:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/LiShui/MahInfoTaskLayer.csb"
end

function MahInfoTaskLayer:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName="_panelRoot"},
        ["_KW_PANEL_RENWU"] = {varName="_panelRenWu"},
        ["_KW_PANEL_MAHJONG"] = {varName="_panelMahjong"},
        ["_KW_START_POS"] = {varName="_panelStartPosNode"},
        ["_KW_END_POS"] = {varName="_panelEndPosNode"},
        ["_KW_IMG_TASKTYPE"] = {varName="_imgActionType"},
        ["_KW_TEXT_RENWU_BEI"] = {varName="_textTaskBeiShu"},
        ["_KW_IMG_RENWU_FINISH"] = {varName="_imgTaskFinish"},
    }
end

function MahInfoTaskLayer:ctor(param)
    param = param or {}
    MahInfoTaskLayer.super.ctor(self, param)
    self._showActionMah = nil
    self:createChildren()
    self:adaptForLiuHai()
    --预先加载图片
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/MahjongNew/GameLayer/Image/LiShui/erren_mahjong_task.plist")
end

function MahInfoTaskLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ER_REN_TASK_INFO", callBack = "onEventErRenTaskInfo"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ER_REN_FINISHED_TASK", callBack = "onEventErRenTaskInfoFinished"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ER_REN_SHOW_CHIP", callBack = "onMsgShowChip"},
        {module = CF.roomData, eventKeyName = "EVENT_BASESCORE_CHANGED", callBack = "onMsgShowTaskInfoRelink"},
        {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "clearTable"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_RLINK_SUCCESS", callBack = "resetTable"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_RESULT_EXINFO_CHANGED", callBack = "onEventGameResult"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HU", callBack = "onMsgHu"},
    }
end

function MahInfoTaskLayer:adaptForLiuHai()
    local nodeList = {self._panelEndPosNode}
    CF.UITool.adaptForLiuHai(nodeList)
end

function MahInfoTaskLayer:createChildren()
    if self._panelMahjong then
        local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
        local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
        self._showActionMah = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD,config)
        self._showActionMah:setMahValue(CF.GameDefine.MAH_VALUE.BACK)
        self._showActionMah:setScale(0.5)
        self._showActionMah:setAnchorPoint(cc.p(0.5, 0.5))
        local conSize = self._panelMahjong:getContentSize()
        self._showActionMah:setPosition(cc.p(conSize.width / 2, conSize.height / 2 - 3))
        self._panelMahjong:addChild(self._showActionMah)
    end

    if self._panelRenWu then
        self._panelRenWu:setVisible(false)
    end
end

function MahInfoTaskLayer:onEventErRenTaskInfo(event)
    local msg = event.msg
    if not msg then return end
    local msgData = msg.data
    self:setErRenTaskInfo(msgData.nBase, msgData.nType, msgData.nValue)
end

function MahInfoTaskLayer:onEventErRenTaskInfoFinished(event)
    self:setErRenTaskInfoFinish()
end

function MahInfoTaskLayer:onMsgShowChip(event)
    self:showTaskAction()
end

function MahInfoTaskLayer:onMsgShowTaskInfoRelink(event)
    self:runAction(cc.Sequence:create(cc.DelayTime:create(0.3),cc.CallFunc:create(function()
        self:showTaskAniChongLian()
    end)))
end

function MahInfoTaskLayer:clearTable()
    self:clearUI()
end

function MahInfoTaskLayer:resetTable()
    self:clearUI()
end

function MahInfoTaskLayer:onMatchStatusEvent(event)
    self:clearUI()
end

function MahInfoTaskLayer:onEventGameResult(event)
    self:clearUI()
end

--[[
nBase: 倍数
nType: 吃碰杠类型：1:碰， 2：杠
nValue:麻将牌
]]
function MahInfoTaskLayer:setErRenTaskInfo(nBase, nType, nValue)
    if self._textTaskBeiShu then
        self._textTaskBeiShu:setString("x" .. nBase .. "b")
    end

    if self._imgActionType then
        local img = ACTION_TYPE_DEFINE[nType]
        if img then
            self._imgActionType:loadTexture(img, ccui.TextureResType.plistType)
        end
    end

    if self._showActionMah then
        self._showActionMah:setMahValue(nValue)
    end
end

--显示开局任务动画
function MahInfoTaskLayer:showTaskAction()
    if self._panelStartPosNode and self._panelEndPosNode and self._panelRenWu then
        local startPos = cc.p(self._panelStartPosNode:getPositionX(),self._panelStartPosNode:getPositionY())
        local endPos = cc.p(self._panelEndPosNode:getPositionX(),self._panelEndPosNode:getPositionY())
        --任务移动处理
        self._panelRenWu:setVisible(true)
        self._panelRenWu:setPosition(startPos)
        self._panelRenWu:stopAllActions()
        self._panelRenWu:setScale(0.5,0.5)
        local taskAniAction = cc.Sequence:create(
            cc.Spawn:create(cc.FadeIn:create(0.1),cc.ScaleTo:create(0.1,2,2)),
            cc.DelayTime:create(0.6),
            cc.Spawn:create(cc.FadeIn:create(0.1),cc.MoveTo:create(0.1,endPos)),
            cc.ScaleTo:create(0.1,1.3,1.3),
            cc.ScaleTo:create(0.1,1,1)
        )
        self._panelRenWu:runAction(taskAniAction)
    end
end

--显示完成动画
function MahInfoTaskLayer:setErRenTaskInfoFinish()
    local finishTaskIcon = self._imgTaskFinish
    if finishTaskIcon then
        finishTaskIcon:setVisible(true)
        finishTaskIcon:setScale(1.5,1.5)
        local taskAniAction = cc.Sequence:create(
            cc.Spawn:create(cc.FadeIn:create(0.1),cc.ScaleTo:create(0.1,1,1)),
            cc.DelayTime:create(1),
            cc.FadeOut:create(0.5)
        )
        finishTaskIcon:runAction(taskAniAction)
    end
end

--清理UI
function MahInfoTaskLayer:clearUI()
    if self._textTaskBeiShu then
        self._textTaskBeiShu:setString("")
    end

    if self._showActionMah then
        self._showActionMah:setMahValue(CF.GameDefine.MAH_VALUE.BACK)
    end

    if self._panelRenWu then
        self._panelRenWu:setVisible(false)
    end
end

--重连显示
function MahInfoTaskLayer:showTaskAniChongLian()
    if self._panelRenWu and self._panelEndPosNode then
        self._panelRenWu:setVisible(true)
        self._panelRenWu:setPosition(cc.p(self._panelEndPosNode:getPositionX(),self._panelEndPosNode:getPositionY()))
    end
end

function MahInfoTaskLayer:onMsgHu()
    self:clearUI()
end

return MahInfoTaskLayer