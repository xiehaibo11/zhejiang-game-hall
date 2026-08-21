-- 新手引导
local GuideView = class("GuideView", XH.ViewBase)

local KW_UI_IMG_AWARD = "KW_UI_IMG_AWARD"
local KW_UI_TEXT_COUNT = "KW_UI_TEXT_COUNT"

local KW_MAX_TEXT_WIDTH = 120
local KW_MAX_TEXT_FONT_SIZE = 29
local KW_MIN_TEXT_FONT_SIZE = 20
local item_width = 180

function GuideView:getCSBPath()
    return "cocosStudio/hall/CSB/guide/GuideLayer.csb"
end

function GuideView:getBindingInfo()
    return {        
        ["_KW_UI_JUMP_OVER_BTN"] = { varName = "KW_UI_JUMP_OVER_BTN",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_UI_JUMP_OVER_BTN" },
        ["_KW_LOBBY_GUIDE_BTN"] = { varName = "_KW_LOBBY_GUIDE_BTN",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_LOBBY_GUIDE_BTN" },
        ["_KW_GOLD_GUIDE_BTN"] = { varName = "_KW_GOLD_GUIDE_BTN",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_GOLD_GUIDE_BTN" },
        ["_KW_GIFT_SCROLL_VIEW"] = { varName = "_giftScrollView" },
        ["_KW_NEW_USER_GIFT_BOX"] = {varName = "_newUserGift"},
        ["_KW_UI_AWARD_ITEM"] = {varName = "_awardItem"},
    }
end

function GuideView:ctor(param) 
    GuideView.super.ctor(self)
    --显示玩家获得的新手道具
    self:initGiftView(param)
    self._viewStartTime = os.time() or -1
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GUIDE_NEWPLAYER, nil, {user_ip=un.Device.getIp()})
end

function GuideView:initGiftView(data)
    if  not (data and data.data) then 
        self._newUserGift:setVisible(false)
        return 
    end 
    local itemCount = 0
    for _,value in pairs(data.data) do
        itemCount = itemCount+1
        local tem =  value.data
        local node = self._awardItem:clone()
        if tem.url ~= "" then
            -- XH.UITool.reloadNodeRemoteImage(node, tem.url)
            local size = node:getChildByName(KW_UI_IMG_AWARD):getContentSize()
            local posx,posy = node:getChildByName(KW_UI_IMG_AWARD):getPosition()
            local img = XH.RemoteImage.new()
            :setPosition(posx,posy)
            :addTo(node)
            img:setUrl(tem.url)
            local sizeImg = img:getContentSize() 
            if size.height == 0 or sizeImg.width == 0 then
                sizeImg = cc.size(250,250)
            end
            local ori = size.width / size.height 
            local xy = sizeImg.width / sizeImg.height 
            if xy > ori then
                img:setScale(size.height / sizeImg.height)
            else
                img:setScale(size.width / sizeImg.width)
            end
        end
        XH.UITool.setText(node, KW_UI_TEXT_COUNT,tem.name .. "x" .. tem.cnt)
        XH.UITool.adaptTextToWidth(node:getChildByName(KW_UI_TEXT_COUNT),KW_MAX_TEXT_WIDTH,KW_MAX_TEXT_FONT_SIZE,KW_MIN_TEXT_FONT_SIZE) 
        self._giftScrollView:addChild(node)
    end
    local height = self._giftScrollView:getContentSize().height
    self._giftScrollView:setContentSize(cc.size(item_width*itemCount,height))
    self._giftScrollView:setScrollBarEnabled(false)
end

function GuideView:closeGuideView()
    self:close()
    XH.viewManager:clearSceneViews(XH.SceneManager:getInstance():getTopSceneTag())
    local data = {}
    data.time1 = self._viewStartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.button_time = self._clickTime
    data.button = self._clickName
    data.userid = XH.playerData:getNumberID()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.NoviceCeremonyReceived,data)
end

function GuideView:on_KW_UI_JUMP_OVER_BTN(send,eventType)
    self._clickTime = os.time()
    self._clickName = send:getName()
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_4,{Location = "选择金币/房卡游戏页面"}) 
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GUIDE_JUMP_OVER, nil, {user_ip=un.Device.getIp()})
    XH.TipTool.showTip({
        bTop = true,
        type = XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
        funcOK = function()
            XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_6) 
            self:closeGuideView()
            XH.lobby:getModule("Guide"):reqSetNewUserGuideState(XH.lobby:getModule("Guide").GUIDE_STATE["end"])
        end,
        funcCancel = function()
            XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_5) 
        end,
    }, "退出引导将无法获得丰富奖励，是否确认退出？")
end

function GuideView:on_KW_LOBBY_GUIDE_BTN(send,eventType)
    --if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
   
    self._clickTime = os.time()
    self._clickName = send:getName()
    self:closeGuideView()
    -- --显示约局引导界面
    XH.lobby:getModule("Guide"):reqSetNewUserGuideState(XH.lobby:getModule("Guide").GUIDE_STATE["end"])
    XH.viewManager:openView("LobbyGuideView")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_8) 
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GUIDE_LOBBY, nil, {user_ip=un.Device.getIp()})
end

function GuideView:on_KW_GOLD_GUIDE_BTN(send,eventType)
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.NEWPLAYER_GUIDE_7) 
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GUIDE_GOLD, nil, {user_ip=un.Device.getIp()})
    self._clickTime = os.time()
    self._clickName = send:getName()
    self:closeGuideView()
    --显示休闲场引导界面
    XH.playerData:setIsFirstGoldGuide(true)
    -- 双扣渠道包新手引导直接跳转双扣新手场游戏
    if XH.ChannelTool.checkIsDoubleKouGame() then
        local GameSubByConfID = require("app.Config.GameSub").GameSubByConfID
        local gamelist = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
        if not gamelist or not next(gamelist) then
            return
        end
        local roomflag = 1
        local confid = 1
        for k, v in pairs(gamelist) do
            if GameSubByConfID[v.GameID].GameType == "DoubleKou" then
                roomflag = v.roomFlag[1]
                confid = v.Index
                break
            end
        end
        XH.lobby:getModule("Gold"):reqJoinGoldRoom(confid, roomflag)
    else
        XH.viewManager:openView("GoldGuideView")
    end
    -- XH.lobby:getModule("Lobby"):showXiuXianGame()
    -- XH.viewManager:openView("GoldGameGuideView")
    XH.lobby:getModule("Guide"):reqSetNewUserGuideState(XH.lobby:getModule("Guide").GUIDE_STATE["awardFirst"])
end

return GuideView
�