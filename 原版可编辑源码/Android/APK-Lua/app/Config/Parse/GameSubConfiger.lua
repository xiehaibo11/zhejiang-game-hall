--
-- Author: Guopengfei
-- Date: 2019-07-2 
--
-- 子游戏配置表解析处理

local GameSubCfg = require("app.Config.GameSub").GameSubByConfID

local GameSubConfiger = class("GameSubConfiger")

function GameSubConfiger:ctor()
	self:initData()
end

function GameSubConfiger:initData()
	
end

--获取游戏资源搜索路径
function GameSubConfiger:getSearchPathByGameId(gameID)
	local list = {}
	local cfgData = GameSubCfg[gameID]
	if cfgData then
		list = cfgData.SearchPath
	end
	return list
end

--获取GameScene类名(兼容旧版本)
function GameSubConfiger:getGameSceneClassByGameIdOld(gameID)
	local pathString = "game.Mahjong.900003.Code.%s.MahScene"
	local GameSceneClass = nil 
	local cfgData = GameSubCfg[gameID]
	if cfgData then
		GameSceneClass = string.format(pathString,cfgData.GameClassOld)
	end
	return GameSceneClass
end

--获得金币场关联包厢房游戏id
function GameSubConfiger:getGoldToBoxGameId(goldBoxGameId)
	local cfgData = GameSubCfg[goldBoxGameId]
	if not cfgData then
		return
	end

	if cfgData.IsGoldMode ~= "BOTYes" then
		return
	end

	local wid = XH.areaData:getLobbyID()
	local exInfo = cfgData.GameGoldExInfo or {}

	local boxGameId = nil
	for _, v in pairs(exInfo) do
		if wid == v.areaId then
			boxGameId = v.gameId
			break
		end
	end

	return boxGameId
end

--获取游戏基类popLayer路径
function GameSubConfiger:getGameTypePathByGameId(gameID)
	local path = "" 
	local cfgData = GameSubCfg[gameID]
	if cfgData then
		path = cfgData.GameType
	end
	return path
end

--获取游戏聊天表情主键
function GameSubConfiger:getGameFaceByGameId(gameID)
	local gameFace = nil
	local cfgData = GameSubCfg[gameID]
	if cfgData.IsGoldMode == "BOTYes" then
		local boxGameId = self:getGoldToBoxGameId(gameID)
		if boxGameId then
			return self:getGameFaceByGameId(boxGameId)
		end
	end
	if cfgData then
		gameFace = cfgData.GameFace
	end
	return gameFace
end

function GameSubConfiger:getGameSpeakSendTypeByGameId(gameID)
	local gameSpeakSendType = 0
	local cfgData = GameSubCfg[gameID]

	if cfgData.IsGoldMode == "BOTYes" then
		local boxGameId = self:getGoldToBoxGameId(gameID)
		if boxGameId then
			return self:getGameSpeakSendTypeByGameId(boxGameId)
		end
	end

	if cfgData then
		gameSpeakSendType = cfgData.GameSpeakSendType
	end
	return gameSpeakSendType
end

--只有圈数玩法的游戏true
function GameSubConfiger:getIsGameRuleCircle(gameID)
	local result = false
	local cfgData = GameSubCfg[gameID]

	if cfgData and cfgData.GameRuleCircle == 1 then
		result = true
	end

	return result
end

--只有开启了洗牌的游戏true
function GameSubConfiger:getIsOpenShuffle(gameID)
	local result = false
	local cfgData = GameSubCfg[gameID]

	if cfgData and cfgData.IsOpenShuffle == 1 then
		result = true
	end

	return result
end

--洗牌消耗的道具id
function GameSubConfiger:getShufflePropID(gameID)
	local propID = 0
	local cfgData = GameSubCfg[gameID]

	if cfgData and cfgData.ShufflePropID then
		propID = cfgData.ShufflePropID
	end

	return propID
end

--洗牌消耗的道具数量
function GameSubConfiger:getShufflePropCount(gameID)
	local propID = 0
	local cfgData = GameSubCfg[gameID]

	if cfgData and cfgData.ShufflePropCount then
		propID = cfgData.ShufflePropCount
	end

	return propID
end

--洗牌券的道具id
function GameSubConfiger:getShufflePropQuanID(gameID)
	local propID = -1
	local cfgData = GameSubCfg[gameID]

	if cfgData and cfgData.ShufflePropQuanID then
		propID = cfgData.ShufflePropQuanID
	end

	return propID
end

--洗牌消耗的道具图标
function GameSubConfiger:getShufflePropPic(gameID)
	--钻石是:"zuanshi.png", 房卡是:"fk.png"
	local propPic = "fk.png"
	local cfgData = GameSubCfg[gameID]

	if cfgData and cfgData.ShufflePropPic then
		propPic = cfgData.ShufflePropPic
	end

	return propPic
end

--洗牌消耗type
function GameSubConfiger:getShuffleType(gameID)
    local shuffleType = 0
    local cfgData = GameSubCfg[gameID]

	if cfgData and cfgData.ShuffleType then
		shuffleType = cfgData.ShuffleType
	end

	return shuffleType
end

function GameSubConfiger:isMahjong(gameID)
    local cfgData = GameSubCfg[gameID]
    if cfgData and cfgData.GameType and cfgData.GameType == "Mahjong" then
        return true
	end
    return false
end

function GameSubConfiger:isNew(gameID)
	local cfgData = GameSubCfg[gameID]
	if not cfgData then
		return false
	end
	if cfgData.IsGoldMode == "BOTYes" then
		local boxGameId = self:getGoldToBoxGameId(gameID)
		if boxGameId then
			return self:isNew(boxGameId)
		end
	end
	if cfgData.IsNew then
		return true
	end
    return false
end

function GameSubConfiger:getNewManagerClassByGameId(gameID)
	local pathString = "game.%s.%s.GameManager"
	local GameManagerClass = nil 
	local cfgData = GameSubCfg[gameID]

	if cfgData.IsGoldMode == "BOTYes" then
		local boxGameId = self:getGoldToBoxGameId(gameID)
		if boxGameId then
			return self:getNewManagerClassByGameId(boxGameId)
		end
	end

	if cfgData then
		GameManagerClass = string.format(pathString,cfgData.GameType,cfgData.GameKey)
	end
	return GameManagerClass
end

function GameSubConfiger:getGameNameByGameId(gameID)
    local gameName = ""
    local cfgData = GameSubCfg[gameID]
	if cfgData and cfgData.GameName then
		gameName = cfgData.GameName
	end
	return gameName
end

function GameSubConfiger:isDoubleKou(gameID)
  local cfgData = GameSubCfg[gameID]
  if cfgData and cfgData.GameType and cfgData.GameType == "DoubleKou" then
      return true
end
  return false
end

return GameSubConfiger