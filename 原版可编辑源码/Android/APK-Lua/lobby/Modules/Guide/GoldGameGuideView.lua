-- 休闲场引导
local GoldGameGuideView = class("GoldGameGuideView", XH.ViewBase)

function GoldGameGuideView:getCSBPath()
    return "cocosStudio/hall/CSB/guide/GoldGameGuideLayer.csb"
end

function GoldGameGuideView:getBindingInfo()
    return {       
        ["_KW_UI_JUMP_OVER_BTN"] = { varName = "KW_UI_JUMP_OVER_BTN",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_UI_JUMP_OVER_BTN" },
        ["_KW_CLIP_NODE"] = { varName = "_clipNode"},
        ["_KW_UI_ROOT_PANEL"] = { varName  = "_rootPanel"},
    }
end

function GoldGameGuideView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Gold"), eventKeyName = "EVENT_CLOSE_NEW_USER_GUIDE_VIEW", callBack = "closeGuideView"}
    }
end

function GoldGameGuideView:ctor(param) 
    GoldGameGuideView.super.ctor(self)
end

function GoldGameGuideView:closeGuideView(isJump)
    --数据统计
    local data = {}
    if  isJump then
        data.time2 = os.time()
    else
        data.time1 = os.time()
    end
    data.userid = XH.playerData:getNumberID()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.GameSelected,data)

    self:close()
    XH.viewManager:clearSceneViews(XH.SceneManager:getInstance():getTopSceneTag())
end

function GoldGameGuideView:on_KW_UI_JUMP_OVER_BTN(send,eventType)
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_4,{Location = "选择金币游戏类型页面"}) 
    XH.TipTool.showTip({
        bTop = true,
        type = XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
        funcOK = function(  )
            self:closeGuideView(true)
            XH.playerData:setIsFirstGoldGuide(false)
            XH.lobby:getModule("Guide"):updateNewUserGoldBackBtn()
            XH.lobby:getModule("Guide"):reqSetNewUserGuideState(XH.lobby:getModule("Guide").GUIDE_STATE["end"])
        end,
    }, "退出引导将无法获得丰富奖励，是否确认退出？")
end

return GoldGameGuideView
