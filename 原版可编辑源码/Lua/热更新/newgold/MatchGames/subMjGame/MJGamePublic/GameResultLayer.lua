--[[
 * @Author: zhoufan
 * @Date: 2017年11月4日 11:31:19
 ]]

------------------------------计分界面----------------------------
local GameResultLayer = class("GameResultLayer", cc.load("mvc").ViewBase)
local GameBaseConfig = require("newgold.MatchGames.GamePublic.GameBaseConfig")
-- local Platform = require("app.platform.Platform")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
local ExternalFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")

--csb文件
GameResultLayer.RESOURCE_FILENAME = "SCMJGameResultLayer.csb"

--节点绑定及事件
GameResultLayer.RESOURCE_BINDING = {
    -- game_result_bg_1 = {
    --     varname="bg"
    -- },
    -- ["panel_content/Button_share"] = {
    --     varname="Button_share",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
    -- ["panel_content/Panel_record/Button_record"] = {
    --     varname="Button_record",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
    -- ["panel_content/Panel_record/label_waiting_big_result"] = {
    --     varname="waitingBigResultMark",
    -- },
    -- ["panel_content/Panel_record"] = {
    --     varname="panelRecord",
    -- },
    -- ["panel_content/Button_continue"] = {
    --     varname="Button_continue",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
    -- ["panel_content/Button_close"] = {
    --     varname="Button_close",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
    -- ["panel_content/Label_des"] = {
    --     varname="Label_des",
    -- },
    -- ["panel_content/Label_time"] = {
    --     varname="Label_time",
    -- },
    -- ["panel_content/ListView"] = {
    --     varname="listView",
    -- },

    -- ["panel_content/Image_title"] = {
    --     varname = "Image_title",
    -- },
    -- ["panel_content/panelShare"] = {
    --     varname = 'shareNode'
    -- },
    
    -- ["panel_content/maCardPanel"] = {
    --     varname="maCardPanel",
    -- },

}

function GameResultLayer:ctor(curGameModle)

    GameResultLayer.super.ctor(self)

    self.curGameModle = curGameModle
    -- 是否观战
    self.isWatchWar = g_gameGlobal:isWatchMode()
    
    local gameOvertAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK) or {}
    -- 洗牌是否消耗钻石
    self.shuffleCostDiamon = (gameOvertAck.unused2 ~= 100001)
    
    local gameBase = g_gameGlobal:getGameBase()
    local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    
    self.mainRuler = gameBase.mainRuler
    
    self.gameRequestAck = gameBase and gameBase:getEnterRoomAckMsg() or gameRequestAck

    self:initUi()
    self:initWatchMode()
    self:netEvent()
end


function GameResultLayer:initUi(  )
    -- body
    self.closeBtn = self:findChildWithName(self.resourceNode_,"Button_close")
    self.closeBtn:setVisible(false)
    self.closeBtn:onClick(function ( ... )
        g_gameGlobal:backToLobby()
    end)
    local panle = self:findChildWithName(self.resourceNode_,"Panel")
    self.panle = panle
    local game_result_bg = self:findChildWithName(self.resourceNode_,"Image_1")
    self.game_result_bg = game_result_bg

    local room_id = self:findChildWithName(self.resourceNode_,"Text_roomId")
    self.room_id = room_id

    local jushu_count = self:findChildWithName(self.resourceNode_,"Text_roomJushu")
    self.jushu_count = jushu_count

    local time_txt = self:findChildWithName(self.resourceNode_,"Text_time")
    self.time_txt = time_txt

    local wanfa_txt = self:findChildWithName(self.resourceNode_,"Text_wanfa")
    self.wanfa_txt = wanfa_txt

    local next_btn = self:findChildWithName(self.resourceNode_,"Button_next")
    next_btn:onTouch(handler(self, self.nextBtnCallBack))
    self.next_btn = next_btn
    
    -- 观战
    self.Button_watchWar = self:findChildWithName(self.resourceNode_,"Button_watchWar")
    self.Button_watchWar:addTouchEventListener(handler(self,self.watchWarCallBack))
    
    self.Button_backToLobby = self:findChildWithName(self.resourceNode_,"Button_backToLobby")
    self.Button_backToLobby:addTouchEventListener(handler(self,self.backToLobbyCallBack))
    
    
    local gameOver_btn = self:findChildWithName(self.resourceNode_,"Button_gameOver")
    gameOver_btn:onTouch(handler(self, self.gameOverCallBack))
    self.gameOver_btn = gameOver_btn

    local share_btn = self:findChildWithName(self.resourceNode_,"Button_share")
    share_btn:onTouch(handler(self, self.shareCallBack))
    share_btn:setVisible(false)
    self.share_btn = share_btn

    local playerInfo_item = self:findChildWithName(self.resourceNode_,"Image_Player")
    if playerInfo_item then
        self.playerInfo_item = playerInfo_item
    end

    local Button_shuffle = self:findChildWithName(self.resourceNode_,"Button_shuffle")
    if Button_shuffle then
        Button_shuffle:onTouch(handler(self, self.shuffleCardCallBack))
        Button_shuffle:setVisible(false)
        self.Button_shuffle = Button_shuffle
    end

    self.playerPosImg = {}
    for i = 1, 4 do
        local strName = string.format( "Image_Player_%d", i)
        local playerImg = self:findChildWithName(self.resourceNode_,strName)
        if playerImg then
            self.playerPosImg[i] = playerImg
            playerImg:setVisible(false)
        end
    end

    self:createContent()
    
    
    -----
    -- 剩余牌
    local gameRequestAck = self.gameRequestAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    local panelLeftCards = panle:getChildByName("Panel_card")
    -- 攀枝花玩法添加剩余牌显示
    if gameRequestAck.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ then
        panelLeftCards:setVisible(true)
        share_btn:ignoreContentAdaptWithSize(true)
        next_btn:ignoreContentAdaptWithSize(true)
        gameOver_btn:ignoreContentAdaptWithSize(true)
        share_btn:loadTextureNormal("Match/".."game_result/scmj/btn_share_small.png", ccui.TextureResType.plistType)
        next_btn:loadTextureNormal("Match/".."game_result/scmj/btn_next_small.png", ccui.TextureResType.plistType)
        gameOver_btn:loadTextureNormal("Match/".."game_result/scmj/btn_gameover_small.png", ccui.TextureResType.plistType)
        
        self.Button_watchWar:ignoreContentAdaptWithSize(true)
        self.Button_backToLobby:ignoreContentAdaptWithSize(true)
        self.Button_watchWar:loadTextureNormal("Match/".."game_result/scmj/btn_continue_3rdview_s.png", ccui.TextureResType.plistType)
        self.Button_backToLobby:loadTextureNormal("Match/".."game_result/scmj/btn_leave_3rdview_s.png", ccui.TextureResType.plistType)
        
        local posObj1 = panle:getChildByName("Node_share")
        local posObj2 = panle:getChildByName("Node_next")
        share_btn:setPosition(posObj1:getPosition())
        self.Button_watchWar:setPosition(posObj1:getPosition())
        next_btn:setPosition(posObj2:getPosition())
        gameOver_btn:setPosition(posObj2:getPosition())
        self.Button_backToLobby:setPosition(posObj2:getPosition())

        if self.Button_shuffle and not tolua.isnull(self.Button_shuffle) then
            self.Button_shuffle:setContentSize(share_btn:getContentSize())
            self.Button_shuffle:setPosition(share_btn:getPositionX() * 2 - next_btn:getPositionX(), share_btn:getPositionY())
            local img_1 = self.Button_shuffle:getChildByName("Image_2")
            local img_2 = self.Button_shuffle:getChildByName("Image_currency")
            local txt = self.Button_shuffle:getChildByName("txtNum")
            local btnSize = share_btn:getContentSize()
            img_1:setPositionX(btnSize.width / 2 - txt:getContentSize().width / 2 - img_2:getContentSize().width / 2+5 )
            txt:setPositionX(btnSize.width / 2 + img_1:getContentSize().width / 2 - img_2:getContentSize().width / 2 + 8)
            img_2:setPositionX(btnSize.width / 2 + txt:getContentSize().width / 2 + img_1:getContentSize().width / 2 + 8)

        end
        
        local gameOvertAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK) or {}
        local cards = gameOvertAck.cards or {}
        --[[
        cards = {
            1,2,3,4,5,6,
            1,2,3,4,5,6,
            1,2,3,4,5,6,
            1,2,3,4,5,6,
            1,2,3,4,5,6,
            
            1,2,3,4,5,6,
            1,2,3,4,5,6,
            1,2,3,4,5,6,
            1,2,3,4,5,6,
            1,2,3,4,5,6,
        }
        --]]
        local panelCardSize = panelLeftCards:getContentSize()
        
        local countPerLine = 25
        local cardSize = cc.size(32, 40)
        local cardScaleX = nil
        local cardScaleY = nil
        
        for k, cval in ipairs(cards) do
            
            local idxInLine = (k - 1) % countPerLine
            local line = math.ceil(k / countPerLine)
            
            local card = self:getNormalCard(cval)
            if not cardScaleX then
                local cardBox = card:getBoundingBox()
                cardScaleX = cardSize.width / cardBox.width
            end
            if not cardScaleY then
                local cardBox = card:getBoundingBox()
                cardScaleY = cardSize.height / cardBox.height
            end
            
            if card.setShadowVisible then
                card.setShadowVisible(false)
            end
            card:setScaleX(cardScaleX)
            card:setScaleY(cardScaleY)
            
            local posX = idxInLine * cardSize.width
            local posY = panelCardSize.height - (line - 1) * cardSize.height
            card:setPosition(posX, posY)
            panelLeftCards:addChild(card)
        end
    
    else
        panelLeftCards:setVisible(false)
    end
end

function GameResultLayer:getNormalCard(value)
    return g_gameGlobal:getLaydownCard(value, 1):setAnchorPoint(cc.p(0, 1)) -- :setScale(g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][1].chuFixScale)
end

function GameResultLayer:updateListView(datas)
    local myPos = nil
    for i,data in ipairs(datas) do
        if data.playerID == g_gameGlobal:getMyselfInfo().playerID then
            myPos = data.tablePos
            break
        end
    end
    local gameOvertAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK) or {}

    local posMark = {[0] = true, [1] = true, [2] = true, [3] = true}

    for i,v in ipairs(self.playerPosImg) do
        if datas[i] then
            local item = self.playerInfo_item:clone()
            local listitem = require("newgold.MatchGames.subMjGame.MJGamePublic.GameResultCell_scmj").new( {
                listitem = item,
                data = datas[i],
                fengDirStr = g_gameGlobal:getMjGameFengDirStr(datas[i].tablePos),
                requestStartGameAck = self.gameRequestAck,
            } ):get()
            local hIdx = datas[i].tablePos --(i-1)
            posMark[hIdx] = false
            listitem:addTo(self.panle)
            listitem:setPosition(v:getPosition())
        else
            v:setVisible(false)
        end
    end
end

function GameResultLayer:nextBtnCallBack( event )
    if event.name == "ended" then
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, {
            operation = g_gameConstant.MAHJONG_OPERTAION_GAME_OVER_CONTINUE,
        })
    end
end

function GameResultLayer:gameOverCallBack( event )
    if event.name == "ended" then
        self:showBigResult()
    end
end

function GameResultLayer:shareCallBack( event )
    
end

function GameResultLayer:shuffleCardCallBack( event )
    if event.name == "ended" then
        if self.Button_shuffle.buyState and self.Button_shuffle.buyState == 1 then
            ShowConfirmBox("已经成功购买，请不要重复购买")
        
        -- 使用洗牌卡 无需二次确认
        elseif not self.shuffleCostDiamon then
        
        else
            local myDiamond = g_gameGlobal:getMyselfInfo().realDiamond or 0
            local gameCost = g_gameGlobal:getGameCostData() or {}
            local needDiamond = 0 --gameCost[g_gameConstant.GAME_COST_ID + 4] or 0 --(g_gameGlobal:getSystemParaInfo(1015) or {valueInt = 999}).valueInt
            
            if myDiamond < needDiamond then
                
            else
                local isNotNeedTip = cc.UserDefault:getInstance():getIntegerForKey("shuffle_tip", 0)
                if isNotNeedTip == 1 then
                    -- g_longConnect:sendMsg(g_msgDefinitions.MSG_TABLE_PLAYER_WASH_CARDS, {
                        
                    -- })
                    g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU, {
                        ["itemID"] = 7004
                    })
                else
                    local box = nil
                    box = ShowConfirmCheckBox("洗牌需要" .. needDiamond .. "房卡，是否确认",function()
                        cc.UserDefault:getInstance():setIntegerForKey("shuffle_tip", box.check or 0)
                        -- g_longConnect:sendMsg(g_msgDefinitions.MSG_TABLE_PLAYER_WASH_CARDS, {
                            
                        -- })
                        g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU, {
                            ["itemID"] = 7004
                        })
                        box:removeSelf()
                    end,true)
                end
            end
        end
    end
end

function GameResultLayer:createMaCards(gameOvertAck)
    local maList = {}
    for i=1,4 do
        local ma1 = gameOvertAck["maCardP"..tostring(i)]
        local ma2 = gameOvertAck["huaP"..tostring(i)]
        local zhongmaIndex = gameOvertAck["zhongMaIndex"..tostring(i)]
        local ma11 = bit._and(ma1,0xffffffff)
        local ma22 = bit._and(ma2,0xffffffff)
    
        local tmpi = 0
        for i = 0,4 do
            local ma = bit._and(bit._rshift(ma11,6*i),0x3f)
            if(ma > 0) then
                local zhongMa=bit._and(bit._rshift(zhongmaIndex,i),0x1)
                table.insert(maList, {cv = ma, zhong = zhongMa})
                tmpi = tmpi + 1
            end
        end
        for i = 0,4 do
            local ma = bit._and(bit._rshift(ma22,6*i),0x3f)
            if(ma > 0) then
                local zhongMa=bit._and(bit._rshift(zhongmaIndex,tmpi+i),0x1)
                table.insert(maList, {cv = ma, zhong = zhongMa})
            end
        end
    end

    if #maList > 0 then
        self.maCardPanel:setVisible(true)

        for i,v in ipairs(maList) do
            local value = v.cv
            local c = g_gameGlobal:getLaydownCard( value, 1 ):setAnchorPoint(cc.p(0, 1)):setScale(g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][1].chuFixScale)
            c:setPosition((i-1)*c:getBoundingBox().width, 0)
            c:addTo(self.maCardPanel, #maList-i)

            if v.zhong == 0 then
                c:setColor(display.COLOR_GRAY)
            end
        end
    else
        self.maCardPanel:hide()
    end
end

function GameResultLayer:createContent()
    local gameOvertAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK) or {}

    --self:createMaCards(gameOvertAck)
    self:updateListView(gameOvertAck.players )

    local gameRequestAck = self.gameRequestAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    local msgGameStart = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME)
    
    self.isLastRound = gameOvertAck.unused0==1

    --VIP场没有返回大厅按钮
    if gameRequestAck.vipTableID and gameRequestAck.vipTableID > 0 then 
        --self.Button_close:hide()
    else
        self.isLastRound = false
    end

    local desc = g_gameGlobal:parseWanfaList(gameRequestAck.MainGamePlayRule, gameRequestAck.MinorGamePlayRuleList, " ", false, false, false, nil, true,true, true,true)

    local otherDesc = ""
    otherDesc = g_gameGlobal:getMaxPlayerNum() .. "人"  
    if g_gameGlobal:getFangFeiJunTan() == 1 then
        otherDesc = otherDesc .. " " .. "房费均摊"   
    end
    if g_gameGlobal:getCurTotalJuShu() > 0  then
        otherDesc = otherDesc .. " " .. g_gameGlobal:getCurTotalJuShu() .. "局"
    end
    if g_gameConstant.VIP_GAME_MODEL == self.curGameModle then
        self.wanfa_txt:setString(desc.." "..otherDesc)
    elseif g_gameConstant.GOLD_GAME_MODEL == self.curGameModle then
        self.wanfa_txt:setString(desc)
        
        if not tolua.isnull(self.wanfa_txt) then
            local backBtnWidth = 98
            self.wanfa_txt:setPositionX(self.wanfa_txt:getPositionX() + backBtnWidth)
            
            local origSize = self.wanfa_txt:getContentSize()
            origSize.width = origSize.width - backBtnWidth
            self.wanfa_txt:setContentSize(origSize)
        end
    end

    if self.curGameModle == g_gameConstant.GOLD_GAME_MODEL then
        self.room_id:setString("")
        self.room_id:setVisible(false)
        self.jushu_count:setString("")
        self.jushu_count:setVisible(false)
        self.closeBtn:setVisible(true)
        self.next_btn:setPositionX(g_gameGlobal:getDisplayWidth()/2)
        self.gameOver_btn:setVisible(false)
        self.share_btn:setVisible(false)

        if self.Button_shuffle and not tolua.isnull(self.Button_shuffle) then
            self.Button_shuffle:setVisible(false)
        end
    else
        local preTimeStr = ""
        if gameRequestAck and gameRequestAck.vipTableID and gameRequestAck.vipTableID > 0 then
            preTimeStr = "房间:".. gameRequestAck.vipTableID 
            self.room_id:setString(preTimeStr)
        end
        local jushuTxt = ""
        if msgGameStart and msgGameStart.quanNum and msgGameStart.quanNum > 0 then
            jushuTxt = "局" .. msgGameStart.quanNum .. "/" .. g_gameGlobal:getCurTotalJuShu()
            self.jushu_count:setString(jushuTxt)
        end

        if self.isWatchWar then
            if self.Button_shuffle and not tolua.isnull(self.Button_shuffle) then
                self.Button_shuffle:setVisible(false)
            end
        else
            if self.Button_shuffle and not tolua.isnull(self.Button_shuffle) then
                local txtNum = self.Button_shuffle:getChildByName("txtNum")
                txtNum:enableOutline(cc.c4b(0x42,0x84,0x39, 255), 3)
                self:refreshShuffleCost(txtNum)

                --重新排列其他按钮
                self.next_btn:setPositionX(self.next_btn:getPositionX() + 150)
                self.gameOver_btn:setPositionX(self.gameOver_btn:getPositionX() + 150)
                self.share_btn:setPositionX(self.share_btn:getPositionX() - 150)
            end
        end
    end
   

    local dateT = os.date("*t")
    local timeStr = string.format("%s-%s-%s  %s:%02d",
            dateT.year,
            dateT.month,
            dateT.day,
            dateT.hour,
            dateT.min)

    self.time_txt:setString(timeStr)

    if self.isLastRound then
        
        self.next_btn:hide()
        --self.panelRecord:show()

        self:refreshRecordState()

        if self.Button_shuffle and not tolua.isnull(self.Button_shuffle) and self.Button_shuffle:isVisible() then
            self.Button_shuffle:setVisible(false)
            self.next_btn:setPositionX(self.next_btn:getPositionX() - 150)
            self.gameOver_btn:setPositionX(self.gameOver_btn:getPositionX() - 150)
            self.share_btn:setPositionX(self.share_btn:getPositionX() + 150)
        end

        -- self.Button_continue:getRendererNormal():getSprite("normal", "game_result/game_result_btn1.png")
        -- self.Button_continue:setButtonImage("pressed", "game_result/game_result_btn1.png")
    else
        self.gameOver_btn:hide()
    end
    
    local resType = self:getResultType() or 0
    local resTypeCfg = {
        [1] = "n2_report_title01",
        [2] = "n2_report_title02",
        [3] = "n2_report_title03",
    }

    local isHainanFourWanfa = false
    if gameRequestAck.MainGamePlayRule then
        isHainanFourWanfa = gameRequestAck.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_HAI_NAN
    end
    if resType == 3 then     
        NG.soundManager:playMatchEffect("sound/hn_win.mp3")   
    elseif resType == 2 then
        NG.soundManager:playMatchEffect("sound/hn_lose.mp3")
    elseif resType == 1 then
        NG.soundManager:playMatchEffect("sound/hn_pingju.mp3")
    end
    if resType and resTypeCfg[resType] then
        self.game_result_bg:loadTexture("Match/".."game_result/scmj/"..resTypeCfg[resType] ..".png", ccui.TextureResType.plistType)
    else
        self.game_result_bg:setVisible(false)
    end
end

function GameResultLayer:showBigResult()
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    if vipRoomClose then            
        CloseAllPopMsgView()
        if g_gameGlobal:getGameScene() ~= nil then
            local gameBigResultSrc = GameBaseConfig.getGameBigResultPath(self.mainRuler)
                or "newgold.MatchGames.subMjGame.MJGamePublic.GameBigResultLayer"
            local gameBigResultLayer = require(gameBigResultSrc):create({
                gameRequestAck = self.gameRequestAck,
            })
            if gameBigResultLayer ~= nil then
                g_gameGlobal:getGameScene():add(gameBigResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
            end
        end
        --清理掉创建游戏的 返回数据
        g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

        self:onExitLayer()
    end
end


function GameResultLayer:on_btn_click(sender)

    if sender == self.Button_close then 
        g_gameGlobal:backToLobby()
    elseif sender == self.Button_share then 
        
    elseif sender == self.Button_continue then 
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, {
            operation = g_gameConstant.MAHJONG_OPERTAION_GAME_OVER_CONTINUE,
        })
    elseif sender == self.Button_record then
        self:showBigResult()
    end

end


function GameResultLayer:getResultType()

    local gameOvertAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)
    -- 显示输赢
    local gameRequestAck = self.gameRequestAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK) or {}
    local myTablePos = gameRequestAck.tablePos

    for i,player in ipairs(gameOvertAck.players) do
        if player.tablePos == myTablePos then
            local res = 1
            if player.gold == 0  then
                res = 1
            elseif player.gold < 0 then
                res = 2
            else
                res = 3
            end
            return res
        end
    end
end

function GameResultLayer:createShareNode()
    self.shareNode:getChildByName("Image_downloadCode"):loadTexture("noplist/downloadCode.png" , ccui.TextureResType.localType)
    self.shareNode:hide()
end

--分享到微信
function GameResultLayer:shareImgToSDK()
    local function callBack()
        if self.share_btn and self.next_btn and self.gameOver_btn then
            self.share_btn:setVisible(self.share_btn.oldVisible)
            self.next_btn:setVisible(self.next_btn.oldVisible)
            self.gameOver_btn:setVisible(self.gameOver_btn.oldVisible)
            if self.Button_shuffle and not tolua.isnull(self.Button_shuffle) then
                self.Button_shuffle:setVisible(self.Button_shuffle.oldVisible)
            end
            -- self.Button_close:setVisible(self.Button_close.oldVisible)
            -- self.shareNode:hide()
        end
    end

    --保存原来的显示状态 ， 分享成功后重置
    self.share_btn.oldVisible = self.share_btn:isVisible()
    self.next_btn.oldVisible = self.Button_continue:isVisible()
    self.gameOver_btn.oldVisible = self.gameOver_btn:isVisible()
    if self.Button_shuffle and not tolua.isnull(self.Button_shuffle) then
        self.Button_shuffle.oldVisible = self.Button_shuffle:isVisible()
    end

    -- self.panelRecord.oldVisible = self.panelRecord:isVisible()
     --self.Button_close.oldVisible = self.Button_close:isVisible()

    self.Button_share:hide()
    self.Button_continue:hide()
    self.gameOver_btn:hide()
    self.share_btn:hide()
    -- self.panelRecord:hide()
    -- self.Button_close:hide()

    -- self.shareNode:show()


    ShareLayer_showShareView(2 , callBack)
end

function GameResultLayer:refreshRecordState()    
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    if vipRoomClose then
        self.gameOver_btn:show()
        self.next_btn:hide()
    else
        self.gameOver_btn:hide()
        self.next_btn:show()
    end
    
    if G_TEEST_AUTO_CHU and gameOver_btn:isVisible() then
        performWithDelay(self, function() self.showBigResult() end, 0.5)   
    end
    
    if self.isWatchWar then
        self:initWatchMode()
    end
end

function GameResultLayer:netEvent()
    --请求玩家账号注销, 金币场的判断
    local room_id = self.gameRequestAck.vipTableID or 0;
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE, function (event, msg)
        self:showBigResult()
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK, function (event, msg)
        --self:removeSelf()
        if msg.result == 5000 then
            ShowToastMsg("亲友圈已解散")
        end
    end))

    g_UserDataTable.gameEmojCount = 0
end


function GameResultLayer:onExit()

end


function GameResultLayer:watchWarCallBack( sender )
    local room_id = self.gameRequestAck.vipTableID or 0;
    if room_id and room_id > 0 then
        ClubUtil:watchGame(room_id)
    end
end

function GameResultLayer:initWatchMode()
    if not self.isWatchWar then
        self.Button_backToLobby:setVisible(false)
        self.Button_watchWar:setVisible(false)
        return
    end
    self.next_btn:setVisible(false)
    self.share_btn:setVisible(false)
--    self.panelRecord:setVisible(false)
--    self.Button_close:setVisible(true)
    
    self.Button_backToLobby:setVisible(true)
    if not self.isLastRound then
        self.Button_watchWar:setVisible(true)
    else
        self.Button_watchWar:setVisible(false)
        self.gameOver_btn:setVisible(true)
        self.gameOver_btn:setPosition(self.Button_watchWar:getPosition())
    end
end


function GameResultLayer:backToLobbyCallBack( sender, eventType)
    
    if eventType ~= cc.EventCode.ENDED then
        return 
    end
    -- body
    g_gameGlobal:backToLobby();
end

function GameResultLayer:hideShuffleBtn()
    --这里不隐藏，不然界面不好看
    if self.Button_shuffle and not tolua.isnull(self.Button_shuffle) then
        self.Button_shuffle.buyState = 1
        
        self:refreshShuffleCost()
    end
end

function GameResultLayer:refreshShuffleCost(node)
    
end

return GameResultLayer