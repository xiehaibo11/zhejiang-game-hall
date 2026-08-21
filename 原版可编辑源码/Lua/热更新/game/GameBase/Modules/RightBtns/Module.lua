local RightBtnsModule = CF.gameClass("RightBtnsModule", CF.ModuleBase)

function RightBtnsModule:doStartTrust()
    local selfPlayer = CF.roomData:getSelfPlayerData()
    if selfPlayer then
        if selfPlayer:getStateEx() ~= selfPlayer.USER_STATEEX.psPlaying then 
            -- 提示等待中不能托管
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            tipPlayer:setText("等待中不能托管！")
        else 
            self:sendStartTrust()
        end
    end
end

function RightBtnsModule:sendStartTrust()
    CF.msgManager:sendTrust(true)
end

function RightBtnsModule:openOnLineList()
    CF.teaHouseManager:openTeaHouseOnlineListInGame(function ()
        --和复制房间号按钮相同的逻辑
        if device.platform == "android" then
            CF.shareManager:startCopyShare()
        else
            CF.game:getModule("Share"):startShare(CF.GameDefine.SHARE_SELECT.TEXT)
        end
    end)
end

function RightBtnsModule:checkNeedShowGuideAnim()
    --第一次登录时间
    local firstLoginTime = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_FIRST_LOGIN_TIME, 0)
     -- 新手引导生效时间
    local startTime = os.time({day = 30, month = 5, year = 2022, hour = 0, minute = 0, second = 0}) 
    local guideStatus = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SETTING_GUIDE_STATUS, 0)
    if firstLoginTime > startTime and  guideStatus <= 0 and CF.areaData:isOpenSimpleSettingGuide() then
        return true
    end
    return false
end

function RightBtnsModule:checkNeedShowGuideAnimNew()
    local isOpenSetView = cc.UserDefault:getInstance():getBoolForKey("ALREADY_OPEN_SETVIEW", false)
    if not CF.gameSub:isMahjong(CF.roomData:getGameID()) and not isOpenSetView then
        return true
    end
    return false
end

return RightBtnsModule