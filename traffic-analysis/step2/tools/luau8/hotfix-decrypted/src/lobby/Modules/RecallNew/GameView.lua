-- 游戏推荐
local RecallNewGameView = class("RecallNewGameView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

function RecallNewGameView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewGame.csb"
end

function RecallNewGameView:getBindingInfo()
    return {
        ["_KW_PANEL_LIST"] = { varName = "_KW_PANEL_LIST" },
        ["_KW_PANEL_ITEM"] = { varName = "_KW_PANEL_ITEM" },
        ["_KW_POS_1"] = { varName = "_KW_POS_1" },
        ["_KW_POS_2"] = { varName = "_KW_POS_2" },
        ["_KW_POS_3"] = { varName = "_KW_POS_3" },
    }
end

function RecallNewGameView:getProxyEvents()
    return {
    }
end

function RecallNewGameView:refreshData()
    self:throwData()
end

function RecallNewGameView:throwData()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080606, { page_item_id = "游戏推荐", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = 0, count2 = 0 })
end

function RecallNewGameView:ctor()
    RecallNewGameView.super.ctor(self)
    self:initUI()
    self:throwData()
end

function RecallNewGameView:initUI()
    self:flushUI()
end

function RecallNewGameView:flushUI()
    local userType = XH.lobby:getModule("RecallNew"):getPlayerType()
    local config = XH.lobby:getModule("RecallNew"):getGuideInfoByType()
    -- 转换一下
    local realType = RecallNewConfig.GuidePlayerType.DEFAULT
    if userType == RecallNewConfig.ReBackPlayTag.ReTag_YueJu or userType == RecallNewConfig.ReBackPlayTag.ReTag_ZiShenYueJu then
        realType = RecallNewConfig.GuidePlayerType.BOX
        local maxRoomMode = XH.lobby:getModule("RecallNew"):getPlayMode()
        if maxRoomMode == RecallNewConfig.RoomMode.TEAHOUSE then
            realType = RecallNewConfig.GuidePlayerType.MATCH
        end
    elseif userType == RecallNewConfig.ReBackPlayTag.ReTag_Gold then
        realType = RecallNewConfig.GuidePlayerType.GOLD
    elseif userType == RecallNewConfig.ReBackPlayTag.ReTag_Other then
        realType = RecallNewConfig.GuidePlayerType.FISH
    end
    local showConfig = config[realType] or config[tostring(realType)]
    if showConfig == nil then
        showConfig = RecallNewConfig.GuideUserConfig[realType]
    end
    for i = 1, 3 do
        if showConfig[i] then
            local index = showConfig[i]
            local uiConfig = RecallNewConfig.GuideUIType[index]
            local nameConfig = RecallNewConfig.GuideTextType[index]
            self["_KW_POS_" .. i]:removeAllChildren()
            local item = self._KW_PANEL_ITEM:clone()
            if uiConfig then
                if uiConfig.BG then
                    item:getChildByName("KW_BG"):loadTexture(uiConfig.BG, ccui.TextureResType.plistType)
                    item:getChildByName("KW_NAME"):setTextColor(uiConfig.FONTTITLECOLOR)
                    item:getChildByName("KW_INFO"):setTextColor(uiConfig.FONTCOLOR)
                    item:getChildByName("KW_NAME"):setString(nameConfig.NAME)
                    item:getChildByName("KW_INFO"):setString(nameConfig.INFO)
                else
                    local gameIDstr = XH.lobby:getModule("RecallNew"):getHotGameID()
                    local params = string.split(gameIDstr, "|")
                    local gameID = tonumber(params[1])
                    if index == RecallNewConfig.GuideType.LASTGAME then
                        gameID = XH.lobby:getModule("RecallNew"):getLastGameID()
                    end
                    local configer = require("app.Config.Parse.GameSubConfiger").new()
                    if configer:isMahjong(gameID) then
                        item:getChildByName("KW_BG"):loadTexture(uiConfig.MJBG, ccui.TextureResType.plistType)
                        item:getChildByName("KW_NAME"):setTextColor(uiConfig.MJFONTTITLECOLOR)
                        item:getChildByName("KW_INFO"):setTextColor(uiConfig.MJFONTCOLOR)
                        item:getChildByName("KW_INFO"):setString(nameConfig.MJINFO)
                    else
                        item:getChildByName("KW_BG"):loadTexture(uiConfig.PKBG, ccui.TextureResType.plistType)
                        item:getChildByName("KW_NAME"):setTextColor(uiConfig.PKFONTTITLECOLOR)
                        item:getChildByName("KW_INFO"):setTextColor(uiConfig.PKFONTCOLOR)
                        item:getChildByName("KW_INFO"):setString(nameConfig.PKINFO)
                    end
                    local gameName = configer:getGameNameByGameId(gameID) or ""
                    item:getChildByName("KW_NAME"):setString(gameName)
                end
            end
            item:setName(showConfig[i])
            item:setPosition(0, 0)
            item:getChildByName("KW_BTN_CLICK"):getChildByName("KW_GO"):setString(nameConfig.BTNINFO)
            XH.SpineManager:playAni(item:getChildByName("KW_ANI_EX"), "animation/Common/", "zzb_ty_xingguang", "animation", true)
            XH.SpineManager:playAni(item:getChildByName("KW_BTN_CLICK"):getChildByName("KW_ANI"), "res/animation/Common/", "zzb_ty_ansg", "animation", true)
            item:getChildByName("KW_BTN_CLICK"):addTouchEventListener(handler(self, self.onTouchItem))
            item:setVisible(true)
            if #showConfig == 1 then
                self["_KW_POS_2"]:addChild(item)
            else
                self["_KW_POS_" .. i]:addChild(item)
            end
        end
    end
end

function RecallNewGameView:onTouchItem(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255, 255, 255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.lobby:getModule("RecallNew"):goGuideTarget(tonumber(send:getParent():getName()))
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = send:getParent():getName(), block_label = "前往", block_item_id = 0, page_item_id = "游戏推荐", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = 0, count2 = 0 })
    XH.viewManager:closeView("RecallNewView")
end

function RecallNewGameView:onDestroy()
    RecallNewGameView.super.onDestroy(self)
end

function RecallNewGameView:isFullScreen()
    return false
end

return RecallNewGameView�