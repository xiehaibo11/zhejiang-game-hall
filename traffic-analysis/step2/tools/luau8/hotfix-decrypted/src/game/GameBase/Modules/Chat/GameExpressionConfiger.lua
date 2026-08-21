--
-- Author: Guopengfei
-- Date: 2019-07-19 
--
-- 子游戏聊天表情配置表解析处理

local GameExpressionCfg = CF.gameRequire("Modules.Chat.GameExpression").GameExpressionByConfID

local GameExpressionConfiger = class("GameExpressionConfiger")

function GameExpressionConfiger:ctor()
	self:initData()
end

function GameExpressionConfiger:initData()
	
end

--获取聊天表情文件夹名称
function GameExpressionConfiger:getGameExpressionDirNameByConfID(ConfID)
	local ExpressionDirName = nil
	local cfgData = GameExpressionCfg[ConfID]
	if cfgData then
		ExpressionDirName = cfgData.ExpressionDirName
	end
	return ExpressionDirName
end

--获取聊天表情动画json文件名
function GameExpressionConfiger:getGameExpressionJsonByConfID(ConfID)
	local ExpressionJsonName = ""
	local cfgData = GameExpressionCfg[ConfID]
	if cfgData then
		ExpressionJsonName = cfgData.ExpressionJsonName
	end
	return ExpressionJsonName
end

--获取聊天表情的图标列表
function GameExpressionConfiger:getGameExpressionSelectIconByConfID(ConfID)
	local ExpressionSelectIcon = {}
	local cfgData = GameExpressionCfg[ConfID]
	if cfgData then
		ExpressionSelectIcon = cfgData.ExpressionSelectIcon
	end
	return ExpressionSelectIcon
end

--获取聊天表情的动画name列表
function GameExpressionConfiger:getGameExpressionAniNameByConfID(ConfID)
	local ExpressionAniNameList = {} 
	local cfgData = GameExpressionCfg[ConfID]
	if cfgData then
		ExpressionAniNameList = cfgData.ExpressionAniName
	end
	return ExpressionAniNameList
end

--获取聊天表情图标的plist名字
function GameExpressionConfiger:getGameExpressionIconPlistNameByConfID(ConfID)
	local ExpressionIconPlistName = ""
	local cfgData = GameExpressionCfg[ConfID]
	if cfgData then
		ExpressionIconPlistName = cfgData.ExpressionIconPlistName
	end
	return ExpressionIconPlistName
end

return GameExpressionConfiger�