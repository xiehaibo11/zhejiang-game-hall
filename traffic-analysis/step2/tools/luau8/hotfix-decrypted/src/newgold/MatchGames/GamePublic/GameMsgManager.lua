local GameMsgManager = class("GameMsgManager")
local GameBaseConfig = require("newgold.MatchGames.GamePublic.GameBaseConfig")

function GameMsgManager:ctor()

	self.gameBase = nil 
end 

-- 进入正常游戏模式
function GameMsgManager:enterGameBaseSecene(msg,gameScene,info)
	-- 打补丁
	g_gameGlobal:setMJGameTianHuCard(0)
	-- 设置游戏规则
	g_gameGlobal:setCurrentWanFa(msg.MainGamePlayRule,msg.MinorGamePlayRuleList)
	-- 游戏最大人数
	g_gameGlobal:setMaxPlayerNum(msg.unused1)
	-- 游戏均摊模式
    --g_gameGlobal:setFangFeiJunTan(msg.unused2)
	-- Hown 新增设置房间局数 ()
	g_gameGlobal:setCurTotalJuShu(msg.totalHand)
	-- 保存我的座位号
	g_gameGlobal:setMyTablePos(msg.tablePos)
	-- 放这是因为在initRoomInfo里要根据是金币场还是vip场，要隐藏tablewait里的邀请好友还有解散房间按钮
	if msg.vipTableID > 0 then
		g_gameGlobal:setCurrentvipRoomType(g_gameConstant.VIP_GAME_MODEL)
	else
		g_gameGlobal:setCurrentvipRoomType(g_gameConstant.GOLD_GAME_MODEL)
	end

	-- 设置房间号数据
	g_gameGlobal:setVipTableID(msg.vipTableID)

	local gamePath = GameBaseConfig.getNormalGamePath(msg.MainGamePlayRule)

	self.gameBase = require(gamePath):create(msg.MainGamePlayRule,msg.unused1)

	if self.gameBase then 

		self.gameBase:addTo(gameScene)

		self.gameBase:setName("gameBase")

		-- 转场景
		g_gameGlobal:switchGameScene(gameScene)
		--
		self.gameBase:initRoomInfo(msg)
		-- 设置玩家游戏状态：是否在牌桌
		g_gameGlobal:setIsInPaiZhuo(true)
	end 
end 

-- 进入回放模式
function GameMsgManager:enterGameLogSecene(msg,gameScene,info)
	-- 
	g_gameGlobal:setCurrentvipRoomType(g_gameConstant.PLAY_LOG_MODEL)
	-- 设置游戏玩法
	g_gameGlobal:setCurrentWanFa(msg.MainGamePlayRule,msg.MinorGamePlayRuleList)
	-- 设置最大人数
	g_gameGlobal:setMaxPlayerNum(#msg.players)
	--消耗均摊
	g_gameGlobal:setFangFeiJunTan(msg.morePlayerPay)
	-- 设置总局数
	g_gameGlobal:setCurTotalJuShu(msg.handsTotal)
	-- 设置房间号
	g_gameGlobal:setVipTableID(msg.vipRoomIndex)

	-- Hown 临时加判断
	-- if msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCPK_PDK then 
	-- 	ShowToastMsg("跑得快回放暂时没有开放~！")
	-- 	return
	-- end

	local gamePath = GameBaseConfig.getLogGamePath(msg.MainGamePlayRule)

	self.gameBase = require(gamePath):create(msg.MainGamePlayRule)

	if self.gameBase then 

		self.gameBase:addTo(gameScene)

		self.gameBase:setName("gameLog")
		-- 转场景
		g_gameGlobal:switchGameScene(gameScene)
		--
		self.gameBase:initRoomInfoForLog(msg)
	end 
end 


-- 进入游戏消息协议
function GameMsgManager:enterGameMsg(msg,isGameLog)
	isGameLog = isGameLog or false 
	-- 设置游戏模式————正常玩牌还是回放模式
	g_gameGlobal:setIsPlayingGameLog(isGameLog)
	-- 设置游戏类型
	g_gameGlobal:setCurrGameKind(msg.MainGamePlayRule)

	local gameScene = g_gameGlobal:getGameScene()

	if not tolua.isnull(gameScene) then
		-- gameScene:removeAllChildren()
		cc.Director:getInstance():popScene()
	end
	-- 切换游戏场景
	gameScene = display.newScene()
	g_gameGlobal:setGameScene(gameScene)
	CloseAllPopMsgView()

	if self.gameBase and not tolua.isnull(self.gameBase) then 
		self.gameBase:removeSelf()
	end 

	if isGameLog then
		-- 进入回放模式
		self:enterGameLogSecene(msg,gameScene)
	else
		-- 正常玩牌模式
		self:enterGameBaseSecene(msg,gameScene)
	end
	
end

-- 游戏开始
function GameMsgManager:gameStartMsg(msg)
	if self:isNormalGameState() then 
		self.gameBase:gameStart(msg)
		return true 
	else 
		return false
	end 
end 

--------------------------------------   回放模式消息协议  -----------------------------------




--------------------------------------   正常玩牌模式消息协议   -------------------------------------
function GameMsgManager:isNormalGameState()
	local gamescene = g_gameGlobal:getGameScene()
	if gamescene and (not tolua.isnull(gamescene)) then
		if self.gameBase and not tolua.isnull(self.gameBase) and self.gameBase == gamescene:getChildByName("gameBase") then 
			return true 
		end 
	end
	return false 
end 

function GameMsgManager:playerOperation(msg)
	if self:isNormalGameState() then 
		self.gameBase:playerOperation(msg)
		return true 
	end 
	return false 
end 

-- 玩家非游戏玩牌的消息：如离开，进入，解散等
function GameMsgManager:gameOperation(msg)
	if self:isNormalGameState() then 
		self.gameBase:gameOperation(msg)
		return true 
	end 
	return false 
end 

-- 玩家非游戏玩牌的消息：如离开，进入，解散等
function GameMsgManager:playerOperationEx(msg)
	if self:isNormalGameState() then 
		self.gameBase:playerOperationEx(msg)
		return true 
	end 
	return false 
end 

-- 提醒玩家吃、碰、杠、胡等消息协议
function GameMsgManager:playerOperationNotify(msg)

	if self:isNormalGameState() then 
		self.gameBase:playerOperationNotify(msg)
		return true 
	end 
	return false 
end

-- 托管消息返回
function GameMsgManager:gameTuoGuanNotify(msg)
	if self:isNormalGameState() then 
		self.gameBase:gameTuoGuanNotify(msg)
		return true 
	end 
	return false 
end

-- 玩家小计分消息
function GameMsgManager:smallResultNotify(msg)
	if self:isNormalGameState() then 
		self.gameBase:smallResultNotify(msg)
		return true 
	end 
	return false 
end 

-- 玩家大计分消息
function GameMsgManager:bigResultNotify(msg)
	if self:isNormalGameState() then 
		self.gameBase:bigResultNotify(msg)
		return true 
	end 
	return false 
end 

local gameMsgInstance 
function GameMsgManager:getInstance()
	if not gameMsgInstance then
		gameMsgInstance = GameMsgManager:new()
	end
	return gameMsgInstance
end

return GameMsgManager.