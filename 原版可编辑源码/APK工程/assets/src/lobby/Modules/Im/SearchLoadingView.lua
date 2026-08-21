local IMSearchLoadingView = class("IMSearchLoadingView", XH.ViewBase)

local ArmatureFileConf = {
    ExportJsonPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani.ExportJson",
    PlistPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani0.plist",
    PngPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani0.png",
}

function IMSearchLoadingView:getCSBPath()
    return "cocosStudio/hall/CSB/IM/IMSearchLoading.csb"
end

function IMSearchLoadingView:getBindingInfo()
    return {
        ["_KW_PANEL_SEARCH_ING"] = { varName = "_searchingPanel" },
        ["_KW_PANEL_SEARCH_END"] = { varName = "_searchEndPanel" },
        ["_KW_ANI_PANEL"] = { varName = "_aniPanel" },
        ["_KW_BTN_SHARE"] = { varName="_btnShare",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnShareClicked" },
        ["_KW_BTN_CLOSE"] = { varName="_btnClose",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClicked" },
    }
end

--加载窗口所需资
function IMSearchLoadingView:ctor(param)
    param = param or {}
	IMSearchLoadingView.super.ctor(self,param)

    self:initUI()
    XH.lobby:getModule("Im"):reqHistoryFriends()
end

--刷新UI
function IMSearchLoadingView:initUI()
    self:showLoadingAni()
end

function IMSearchLoadingView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_HISTORY_FRIENDS", callBack = "onHistoryFriendsInfoCallBack" },
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_SEARCHING_VIEW_CLOSE", callBack = "onEventClose" },
    }
end

function IMSearchLoadingView:onHistoryFriendsInfoCallBack(event)
    if not event.bShowDetail then
        self._aniPanel:stopAllActions()
        self._aniPanel:removeAllChildren()
        self._searchingPanel:setVisible(false)
        self._searchEndPanel:setVisible(true)
    else
        XH.viewManager:openView("IMHistoryFriendsView")
        self:close()
    end
end

function IMSearchLoadingView:onBtnCloseClicked(send,eventType)
    self:close()
end

function IMSearchLoadingView:onBtnShareClicked(send,eventType)
    XH.lobby:getModule("Im"):onTouchShare()
    self:close()
end

function IMSearchLoadingView:showLoadingAni()
    if not cc.FileUtils:getInstance():isFileExist(ArmatureFileConf.ExportJsonPath) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
        ArmatureFileConf.PngPath, 
        ArmatureFileConf.PlistPath,
        ArmatureFileConf.ExportJsonPath)

    local lastCreatArmature = ccs.Armature:create("loading_small_ani")
    if lastCreatArmature then
        self._aniPanel:addChild(lastCreatArmature)
        lastCreatArmature:setAnchorPoint(cc.p(0.5, 0.5))
        lastCreatArmature:getAnimation():play("Animation1", -1, 1)
    end
end

function IMSearchLoadingView:onEventClose(event)
    self:close()
end
 
return IMSearchLoadingView