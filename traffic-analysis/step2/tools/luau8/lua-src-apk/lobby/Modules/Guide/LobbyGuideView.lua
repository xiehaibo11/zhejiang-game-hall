--约局引导
local LobbyGuideView = class("LobbyGuideView", XH.ViewBase)

function LobbyGuideView:getCSBPath()
    return "cocosStudio/hall/CSB/guide/LobbyGuideLayer.csb"
end

function LobbyGuideView:getBindingInfo()
    return {       
        ["_KW_UI_JUMP_OVER_BTN"] = { varName = "KW_UI_JUMP_OVER_BTN",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_UI_JUMP_OVER_BTN" },
        ["_KW_TEXT_TIP_1"] = {varName = "_textTip1"},
        ["_KW_TEXT_TIP_2"] = {varName = "_textTip2"},
        ["_KW_TEXT_TIP_3"] = {varName = "_textTip3"},
        ["_KW_UI_BTN_CREATE"] = { varName = "KW_UI_BTN_CREATE",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_UI_BTN_CREATE" },
        ["_KW_UI_BTN_JOIN"] = { varName = "_KW_UI_BTN_JOIN",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_UI_BTN_JOIN" },
        ["_KW_UI_BTN_TEAHOUSE"] = { varName = "KW_UI_BTN_TEAHOUSE",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_UI_BTN_TEAHOUSE" },
    }
end

function LobbyGuideView:ctor(param) 
    LobbyGuideView.super.ctor(self)
    self:initTips()
end

function LobbyGuideView:initTips()
   self:doAction(self._textTip1,0)
   self:doAction(self._textTip2,1.5)
   self:doAction(self._textTip3,3)
end

function LobbyGuideView:doAction(node,time)
    local delay = cc.DelayTime:create(time)
    local callfunc = cc.CallFunc:create(function()
        node:setVisible(true)
        node:setOpacity(50)
    end)
    local fade = cc.FadeIn:create(2)
    node:runAction(cc.Sequence:create(delay,callfunc,fade))
end

function LobbyGuideView:closeGuideView()
    self:close()
    XH.viewManager:clearSceneViews(XH.SceneManager:getInstance():getTopSceneTag())
end

function LobbyGuideView:on_KW_UI_JUMP_OVER_BTN(send,eventType)
    self:RecordData("BTN_JUMP_OVER")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_4,{Location = "创建房间页面"}) 
    XH.TipTool.showTip({
        bTop = true,
        type = XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
        funcOK = function(  )
            self:closeGuideView()
        end,
    }, "退出引导将无法获得丰富奖励，是否确认退出？")
end

function LobbyGuideView:on_KW_UI_BTN_CREATE(  )
    self:RecordData("BTN_CREATE")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_9) 
    XH.lobby:getModule("Guide"):dispatchEvent({name = XH.lobby:getModule("Guide").GUIDE_CREATE_BOX_ROOM,msg = {isGuideState = true}})
    self:close()
end

function LobbyGuideView:on_KW_UI_BTN_JOIN(  )
    self:RecordData("BTN_JOIN")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_10)
    XH.lobby:getModule("Guide"):dispatchEvent({name = XH.lobby:getModule("Guide").GUIDE_JOIN_BOX_ROOM})
    self:close()
end

function LobbyGuideView:on_KW_UI_BTN_TEAHOUSE(  )
    self:RecordData("BTN_TEAHOUSE")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_11)
    XH.lobby:getModule("Guide"):dispatchEvent({name = XH.lobby:getModule("Guide").GUIDE_JOIN_TEA_HOUSE})
    self:close()
end

--记录数据到北极星
function LobbyGuideView:RecordData(botton)
    --数据统计
    local data = {}
    data.time1 = os.time()
    data.botton = botton
    data.userid = XH.playerData:getNumberID()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PatternSelected,data)
end

return LobbyGuideView
?