local DDZGameResultLayer = class("DDZGameResultLayer",cc.load("mvc").ViewBase)

--csb文件
DDZGameResultLayer.RESOURCE_FILENAME = "poker/ddzGame/GameResultDdzLayer.csb"

function DDZGameResultLayer:ctor( msg )
    DDZGameResultLayer.super.ctor(self)
    self.players = {}
    self.msg = msg or {}
    self.isLastRound = false
    -- 是否观战
    self.isWatchWar = g_gameGlobal:isWatchMode()
    self:initUI()
    self:netEvent()
    self:updateUI()
end

function DDZGameResultLayer:initUI(  )
    self.Image_result = self:findChildWithName(self.resourceNode_,"Image_result")
    self.continueBtn = self:findChildWithName(self.resourceNode_,"Button_continue")
    self.continueBtn:addTouchEventListener(handler(self,self.continueBtnCallBack))
    
    self.chapaiBtn = self:findChildWithName(self.resourceNode_, "Button_reviewcard")
    self.chapaiBtn:onClick(handler(self,self.chapaiBtnClick))
    
    self.sureBtn = self:findChildWithName(self.resourceNode_, "Button_sure")
    self.sureBtn:onClick(handler(self,self.sureBtnClick))
    self.sureBtn:setVisible(false)
    
    -- 观战
    self.Button_watchWar = self:findChildWithName(self.resourceNode_,"Button_watchWar")
    self.Button_watchWar:addTouchEventListener(handler(self,self.watchWarCallBack))
    
    self.Button_backToLobby = self:findChildWithName(self.resourceNode_,"Button_backToLobby")
    self.Button_backToLobby:addTouchEventListener(handler(self,self.backToLobbyCallBack))
    
    self.Button_watchGameover = self:findChildWithName(self.resourceNode_, "Button_watchGameover")
    if self.Button_watchGameover then
        self.Button_watchGameover:onClick(handler(self, self.watchGameoverCallBack))
        self.Button_watchGameover:hide()
    end
    
    
    self.nodePanelColor = self:findChildWithName(self.resourceNode_, "Panel_colorMask")
    
    for i = 1, 3 do
        local playerStr = string.format( "player_%d",i )
        local player = self:findChildWithName(self.resourceNode_,playerStr)
        if player then
            player:setVisible(false)
            table.insert( self.players, i, player )
        end
    end
    
    local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    self.gameRequestAck = gameRequestAck
end

function DDZGameResultLayer:netEvent(  )
    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE, function (event, msg)
        
        self.isLastRound = true
        
        -- 观战无需
        if self.isWatchWar then
            self:initWatchMode()
            return
        end
        
        --self:showBigResult()
        -- performWithDelay(self,function (  )
        self:showBigResult()
        self:onExitLayer()
        -- end, 10)
        -- if self.isLastRound then
        --     self:refreshRecordState()
        -- else
        --     self:showBigResult()
        -- end
    end))
end
function DDZGameResultLayer:onExit(  )
    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_POKER_GAME_OVER_ACK)
end
function DDZGameResultLayer:updateUI(  )
    local jiabeiInfo = {}
    local gameScene = g_gameGlobal:getGameScene()
    if not tolua.isnull(gameScene) then
        local gameBase = gameScene:getChildByName("gameBase")
        if not tolua.isnull(gameBase) then
            jiabeiInfo = gameBase:getPlayerJiabeiInfo() or {}
        end
    end
    
    --dump(jiabeiInfo)
    
    -- body
    local msg = self.msg or {}
    local players = msg.players or {}
    local mySelf = g_gameGlobal:getMyselfInfo()
    for i, player in ipairs(players) do
        if self.players[i] then
            local playerItem = self.players[i]
            playerItem:setVisible(true)
            local name = playerItem:getChildByName("Text_name")
            name:setString( g_gameGlobal:cutStringLength(player.playerName,6))
            local bomScore = playerItem:getChildByName("Text_bom_score")
            bomScore:setString(player.bombNum)
            local totalScore = playerItem:getChildByName("Text_total_score")
            totalScore:setString(player.gold)
            local imgDzIcon = playerItem:getChildByName("Image_Dz_Icon"):setVisible(false)
           
            local lastPaishu = playerItem:getChildByName("Text_paishu")
            lastPaishu:setString(player.fan)
            
            local imgJiabei = playerItem:getChildByName("Image_jiabei")
            if not tolua.isnull(imgJiabei) then
                imgJiabei:setVisible(jiabeiInfo[player.playerIndex] or false)
            end
   
            -- 显示地主标识
            if player.gameResult == 1 then 
                imgDzIcon:setVisible(true)
            end 

--            if mySelf.playerIndex == player.playerIndex then
            if g_gameGlobal:getMyTablePos() == player.tablePos then
                if player.gold >= 0 then
                    self.Image_result:loadTexture("Match/game_result/ddz/win.png",ccui.TextureResType.plistType)
                else
                    self.Image_result:loadTexture("Match/game_result/ddz/lose.png",ccui.TextureResType.plistType)
                end
            end
            local Image_opendoor = playerItem:getChildByName("Image_opendoor")
            if player.desc and string.find( player.desc,"反春天") then
                Image_opendoor:setVisible(true)
                Image_opendoor:loadTexture("Match/game_result/ddz/fanchuntian.png",ccui.TextureResType.plistType)
            elseif player.desc and string.find( player.desc,"春天") then
                Image_opendoor:setVisible(true)
                Image_opendoor:loadTexture("Match/game_result/ddz/chuntian.png",ccui.TextureResType.plistType)
            else
                Image_opendoor:setVisible(false)
            end
        end
    end
    
    self:initWatchMode()
end

function DDZGameResultLayer:continueBtnCallBack( sendr , eventType )
    if event.name == "ended" then
        NG.goldLobby:getModule("PeakRaceDispatch"):reqJoinDispatchQueue(nil, nil, nil, true)
        self:removeSelf()
    end
end


function DDZGameResultLayer:showBigResult()
    -- local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    -- if vipRoomClose then            
    CloseAllPopMsgView()
    if g_gameGlobal:getGameScene() ~= nil then
        local gameBigResultLayer =   g_gameGlobal:getGameScene():getChildByName("gameBigResultLayer") 
        if gameBigResultLayer ~= nil then
            gameBigResultLayer:setVisible(true)
            --g_gameGlobal:getGameScene():add(gameBigResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
        else
            gameBigResultLayer =  require("newgold.MatchGames.subPKGame.pdkPokerGame.game.DDZGameBigResultLayer"):create({
                gameRequestAck = self.gameRequestAck,
            })
            g_gameGlobal:getGameScene():add(gameBigResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
        end
        --gameBigResultLayer:setVisible(false)
        
    end
    --清理掉创建游戏的 返回数据
    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

        
   -- end
end


function DDZGameResultLayer:chapaiBtnClick(sender)
    g_gameGlobal:backToLobby()
end


function DDZGameResultLayer:sureBtnClick(sender)
    if not tolua.isnull(self.nodePanelColor) then
        self.nodePanelColor:setVisible(true)
    end
    
    if not tolua.isnull(self.sureBtn) then
        self.sureBtn:setVisible(false)
    end
end

function DDZGameResultLayer:watchWarCallBack( sender )
    local room_id = self.gameRequestAck.vipTableID or 0;
    if room_id and room_id > 0 then
        ClubUtil:watchGame(room_id)
    end
end

function DDZGameResultLayer:initWatchMode()
    if not self.isWatchWar then
        self.Button_backToLobby:setVisible(false)
        self.Button_watchWar:setVisible(false)
        return
    end
    self.continueBtn:setVisible(false)
    self.chapaiBtn:setVisible(false)
    self.sureBtn:setVisible(false)
    
    self.Button_backToLobby:setVisible(true)
    if not self.isLastRound then
        self.Button_watchWar:setVisible(true)
    else
        self.Button_watchWar:setVisible(false)
--        self.Button_backToLobby:setPositionX(display.cx)
        self.Button_watchGameover:setVisible(true)
    end
end




function DDZGameResultLayer:backToLobbyCallBack( sender, eventType )
    
    if eventType ~= cc.EventCode.ENDED then
        return 
    end
    
    -- body
    g_gameGlobal:backToLobby();
end


function DDZGameResultLayer:watchGameoverCallBack(sender)
    self:showBigResult()
    self:onExitLayer()
end

return DDZGameResultLayer