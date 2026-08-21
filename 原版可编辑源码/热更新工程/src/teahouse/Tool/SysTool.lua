---@class SysTool : BridgeSys 扩展系统工具，注方法被覆盖
local SysTool = TeaHouse.BridgeSys

local CreateBoxRoomConfig =  require("teahouse.Config.CreateBoxRoomConfig")
local UrlConf = require("app.Config.UrlConf")


function SysTool.mergeCsbBinding(target, param)
    if not target then
        return
    end

    local param = param or {}
    local preKey = param.preKey
    local startNum = param.startNum
    local endNum = param.endNum
    local preName = param.preName

    if (not preKey) or (not startNum) or (not preName) or (not endNum) then
        return
    end

    local list = target.binding or {}
    for i = startNum, endNum do
        list[preKey .. i] = { tag = preKey .. i, name = preName .. i, class = param.class, events = param.events }
    end
end

function SysTool.performWithDelay(time, callback)
    if not callback then
        return
    end
    local scheduleID
    scheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        callback()
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
    end, time, false)
end

function SysTool.loadRemoteImage(remoteImage, url, defaultPng, defaultPlist)
    if url == "" then
        remoteImage._remoteUrl = ""
        cc.SpriteFrameCache:getInstance():addSpriteFrames(defaultPlist)
        remoteImage:loadTexture(defaultPng, ccui.TextureResType.plistType)
    else
        local find = string.find(url, "https")
        if not find then
            url = string.gsub(url, "http", "https")
        end
        remoteImage:setUrl(url)
    end
end

function SysTool.loadHead(remoteImage, url, sex)
    if url == "" then
        if sex > 0 then
            remoteImage:setUrl("https://palmstatic.hzxuanming.com/Download/avatar/default/head_boy.png")
        else
            remoteImage:setUrl("https://palmstatic.hzxuanming.com/Download/avatar/default/head_girl.png")
        end
    else
        local find = string.find(url, "https")
        if not find then
            url = string.gsub(url, "http", "https")
        end
        remoteImage:setUrl(url)
    end
end

function SysTool.shareTeaHouse(teaHousePwd, teaHouseTitle)
    local text = string.format("比赛场口令：%06d", teaHousePwd)
    local url = TeaHouse.BridgeData.getXHLinkURL() .. "?key=house_" .. teaHousePwd
    local title = string.format("快来加入%s吧!", teaHouseTitle)
    if TeaHouse.getIsWXBanUrl() then
        TeaHouse.SysTool.copyClipboard(title .. text)
        TeaHouse.TipTool.showToast("邀请信息已复制成功，粘贴分享给您的好友吧！")
        TeaHouse.SysTool.openWeChat()
    else
        -- 加入中转URL
        local scene, mini_scene = TeaHouse.BridgeData:getShareModule():getShareScene()
        if url and UrlConf.URL_SHARE_TRANSFER and scene and mini_scene and not string.find(url,UrlConf.URL_SHARE_TRANSFER) then
            url = string.format("%s?url=%s&areaid=%d&scene=%s&subscene=%s", UrlConf.URL_SHARE_TRANSFER, string.urlencode(url), XH.areaData:getAreaID(), string.urlencode(scene), string.urlencode(mini_scene))
            TeaHouse.BridgeData:getShareModule():resetShareScene()
        end
        local shareInfo = {
            textTitle = title, --分享标题
            textTitleUrl = "", --微信不用
            site = "", --微信不用
            siteUrl = "", --微信不用
            imagePath = "", --微信不用
            url = url, --微信网页模式分享的链接
            type = "url", --word是文字分享，url网页模式分享，pic分享图片
            scene = "0", --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = text, ---分享内容
            comment = "", --微信不用
            copyTextWhenNoWX = title .. text
        }
        SysTool.share(shareInfo)
    end
end

function SysTool.analysisPlayerCounts(gameID, data, players)
    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule(TeaHouse.BridgeData.getLobbyID(), gameID)
    if gameRuleList == nil then
        return players
    end
    local categoriesIndex = 1
    if #gameRuleList["categories"] > 1 then
        local tempCategories = gameRuleList["categories"][1]
        for name, v in pairs(tempCategories) do
            for i1, v1 in pairs(v.ctrls) do
                for _, v2 in ipairs(v1) do
                    if v2.categorieIndex ~= nil and string.find(data, v2.nodeName) then
                        categoriesIndex = v2.categorieIndex
                    end
                end
            end
        end
    end
    local categories = gameRuleList["categories"][categoriesIndex]
    local playerCountNode = nil
    for nodeStr, nodeData in pairs(categories) do
        if nodeData.nodeName == "playerCount" then
            playerCountNode = nodeData
            break
        end
    end
    if not playerCountNode then
        return players
    end
    local prohibitConf = {}
    local categories = gameRuleList["categories"][categoriesIndex]
    for nodeStr, nodeData in pairs(categories) do
        for i1, v1 in pairs(nodeData.ctrls) do
            for _, v2 in ipairs(v1) do
                if string.find(data, v2.nodeName) and v2.linkageLevel then
                    table.insert(prohibitConf, v2.linkageLevel)
                end
            end
        end
    end
    local playerCounts = {}
    local ctrls = playerCountNode["ctrls"]
    for _, v1 in pairs(ctrls) do
        for _, v2 in ipairs(v1) do
            if not v2.prohibit or not SysTool.checkProhibitIsSelected(v2.prohibit, prohibitConf) then
                local playerCount = 0
                playerCount = tonumber(string.match(v2.nodeName, "%d+"))
                if v2.countValue then
                    playerCount = v2.countValue
                end
                local isFound = false
                for _, player in pairs(players) do
                    if player == playerCount then
                        isFound = true
                        break
                    end
                end
                if isFound then
                    table.insert(playerCounts, playerCount)
                end
            end
        end
    end
    return playerCounts
end

function SysTool.checkProhibitIsSelected(prohibitData, prohibitConf)
    for _, v1 in ipairs(prohibitData) do
        for _, v2 in ipairs(prohibitConf) do
            if v1 == v2 then
                return true
            end
        end
    end
    return false
end

function SysTool.analysisZhRule(data)
    local luaString = "return {" .. data .. "}"
    local luaFunction = loadstring(luaString)
    if luaFunction then
        local rule = luaFunction()
        return rule.ZhRule or ""
    end
    return ""
end

function SysTool.analysisBaseScore(nGameId, acData)
    local categoriesIndex = SysTool.getConfCategoriesIndex(nGameId, acData)
    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule(TeaHouse.BridgeData.getLobbyID(), nGameId)
    if not gameRuleList then
        return nil
    end

    local baseScoreRuleToText = CreateBoxRoomConfig.BaseScoreRuleToText[tonumber(nGameId)]
    if baseScoreRuleToText then
        for tr, tt in pairs(baseScoreRuleToText) do
            if string.find(acData, tr) then
                return tt
            end
        end
    end

    local categories = gameRuleList["categories"][categoriesIndex]
    for nodeStr, nodeData in pairs(categories) do
        if nodeData.text == "底分" then
            local ctrls = nodeData["ctrls"]
            for _, v1 in pairs(ctrls) do    --多行数据
                for _, v2 in ipairs(v1) do  --每行数据
                    if v2.nodeName and string.find(acData, v2.nodeName) then
                        return v2.text
                    end
                end
            end
        end
    end

    return nil
end

function SysTool.delRuleFromStr(ruleStr, rule)
    local ruleStrLen = #ruleStr
    local startIndex, endIndex = string.find(ruleStr, rule)

    local funcIsFu = function (s)
        if s == "," or s == "，" or s == "/" then
            return true
        end
        return false
    end

    if not startIndex then
        return ruleStr, false
    end

    local s1 = string.sub(ruleStr, startIndex-1, startIndex-1)
    local s2 = string.sub(ruleStr, endIndex+1, endIndex+1)
    
    if (s1 == "" or funcIsFu(s1)) and (s2 == "" or funcIsFu(s2)) then
        if startIndex == 1 then
            ruleStr = string.sub(ruleStr, endIndex + 2, ruleStrLen)
        else
            local firstStr = string.sub(ruleStr, 1, startIndex - 2)
            local secondStr = string.sub(ruleStr, endIndex + 1, ruleStrLen)
            ruleStr = firstStr .. secondStr
        end
        return ruleStr, true
    end
    return ruleStr, false
end

local KW_PAYTYPE_CHINESE_STR = {
    "平摊消耗","冠军消耗","冠军消耗","房主消耗",
    "平摊支付","冠军支付","圈主支付","房主支付"}
function SysTool.analysisZhRuleEx(gameID, data, currPayType)
    local luaString = "return {" .. data .. "}"
    local luaFunction = loadstring(luaString)
    if luaFunction then
        local rule = luaFunction()
        local ruleStr = rule.ZhRule or ""
        if ruleStr == "" then
            return ruleStr
        end

        local ruleStrLen = #ruleStr
        local payTypeStr
        for _, str in pairs(KW_PAYTYPE_CHINESE_STR) do
            local tempRuleStr, bDel = SysTool.delRuleFromStr(ruleStr, str)
            if bDel then
                ruleStr = tempRuleStr
                if currPayType then
                    str = currPayType
                end
                payTypeStr = string.gsub(str, "支付", "消耗")
                payTypeStr = TeaHouse.StringTool.replaceMatchStr(payTypeStr)
                break
            end
        end

        local baseScoreText = SysTool.analysisBaseScore(gameID, data)
        ruleStr = not baseScoreText and ruleStr or SysTool.delRuleFromStr(ruleStr, baseScoreText)

        ruleStr = not payTypeStr and ruleStr or ruleStr .. "\n" .. payTypeStr
        ruleStr = not baseScoreText and ruleStr or ruleStr .. "\n" .. "底分:" .. baseScoreText

        return ruleStr
    end
    return ""
end

local KW_AUTO_READY_NAME_LIST = { "autoReady", "UserRule" }
local KW_AUTO_READY_VALUE_LIST = { "1", "AutoReady=true;" }
function SysTool.analysisIsAutoReady(data)
    local isAutoReady = false
    local luaString = "return {" .. data .. "}"
    local luaFunction = loadstring(luaString)
    if luaFunction then
        local rule = luaFunction()
        for index, autoReadyName in ipairs(KW_AUTO_READY_NAME_LIST) do
            if rule[autoReadyName] and rule[autoReadyName] == KW_AUTO_READY_VALUE_LIST[index] then
                isAutoReady = true
                break
            end
        end
    end
    return isAutoReady
end

local KW_PAY_TYPE_NAME_LIST = { "PayType", "moneyType", "TeaHousePayType" }
local KW_PAY_TYPE_LAST = "loser_cost"
function SysTool.analysisPayType(data)
    local payType = 0
    local isLastPay = false
    local luaString = "return {" .. data .. "}"
    local luaFunction = loadstring(luaString)
    if luaFunction then
        local rule = luaFunction()
        isLastPay = rule[KW_PAY_TYPE_LAST] == 1 or rule[KW_PAY_TYPE_LAST] == '1'
        for _, payTypeName in ipairs(KW_PAY_TYPE_NAME_LIST) do
            if rule[payTypeName] then
                payType = tonumber(rule[payTypeName])
                break
            end
        end
    end
    return payType, isLastPay
end

local KW_COLOR_TYPE_NAME_LIST = {"TabeleColor"}
function SysTool.analysisTableColor(data)
    local colorType = 1
    local luaString = "return {" .. data .. "}"
    local luaFunction = loadstring(luaString)
    if luaFunction then
        local rule = luaFunction()
        for _, colorTypeName in ipairs(KW_COLOR_TYPE_NAME_LIST) do
            if rule[colorTypeName] then
                colorType = tonumber(rule[colorTypeName])
                break
            end
        end
    end
    return colorType
end

function SysTool.checkTwoTableHaveSameValue(prohibitData1, prohibitData2)
    for _, v1 in ipairs(prohibitData1) do
        for _, v2 in ipairs(prohibitData2) do
            if v1 == v2 then
                return true
            end
        end
    end
    return false
end

function SysTool.getConfCategoriesIndex(nGameId, acData, playerCount)
    if not nGameId or not acData then
        return 1
    end
    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule(TeaHouse.BridgeData.getLobbyID(), nGameId)
    if not gameRuleList then
        return 1
    end
    --选择的是哪个大类
    local categoriesIndex = 1
    if #gameRuleList["categories"] > 1 then
        local tempCategories = gameRuleList["categories"][1]
        if gameRuleList.isCategoriesRelativePlayerCount and playerCount then
            for _, v in pairs(tempCategories) do
                if v.nodeName == "playerCount" then
                    for _, v1 in pairs(v.ctrls) do
                        for _, count in pairs(playerCount) do
                            for _, v2 in ipairs(v1) do
                                if v2.nodeName == "playerCount_" .. count then
                                    if v2.categorieIndex then
                                        categoriesIndex = v2.categorieIndex
                                    end
                                end
                            end
                        end
                    end
                end
            end
        else
            for name, v in pairs(tempCategories) do
                for i1, v1 in pairs(v.ctrls) do
                    for _, v2 in ipairs(v1) do
                        if v2.categorieIndex ~= nil and string.find(v2.nodeName,"") and string.find(acData,v2.nodeName) then
                            categoriesIndex = v2.categorieIndex
                        end
                    end
                end
            end
        end
    end
    return categoriesIndex
end

function SysTool.getProhibitConf(nGameId, acData)
    if not nGameId or not acData then
        return {}
    end
    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule(TeaHouse.BridgeData.getLobbyID(), nGameId)
    if not gameRuleList then
        return {}
    end
    local categoriesIndex = SysTool.getConfCategoriesIndex(nGameId, acData)
    local prohibitConf = {}

    local categories = gameRuleList["categories"][categoriesIndex]
    for nodeStr, nodeData in pairs(categories) do
        for i1, v1 in pairs(nodeData.ctrls) do
            for _, v2 in ipairs(v1) do
                if string.find(acData, v2.nodeName) and v2.linkageLevel then
                    table.insert(prohibitConf, v2.linkageLevel)
                end
            end
        end
    end
    return prohibitConf
end

function SysTool.getConfByNameAndGameID(confName, nGameId, acData,playerCount,lobbyid)
    if not nGameId or not acData then
        return nil
    end
    local categoriesIndex = SysTool.getConfCategoriesIndex(nGameId, acData, playerCount)
    local prohibitConf = SysTool.getProhibitConf(nGameId, acData, playerCount)

    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule(lobbyid or TeaHouse.BridgeData.getLobbyID(), nGameId)
    if not gameRuleList then
        return nil
    end
    local resultConf = {}
    resultConf.listData = {}
    resultConf.name = ""

    local categories = gameRuleList["categories"][categoriesIndex]
    local tempConf
    for nodeStr, nodeData in pairs(categories) do
        if nodeData.nodeName == confName then
            tempConf = nodeData
            resultConf.name = nodeData.text
            break
        end
    end

    if not tempConf then
        return
    end

    local ctrls = tempConf["ctrls"]
    for _, v1 in pairs(ctrls) do    --多行数据
        for _, v2 in ipairs(v1) do  --每行数据
            if not v2.prohibit or not SysTool.checkTwoTableHaveSameValue(v2.prohibit, prohibitConf) then
                local temp = {}
                temp.TextShow = v2.text
                temp.Value = tonumber(string.match(v2.nodeName, "%d+"))
                temp.mustExistRule = v2.mustExistRule
                temp.mustExistRuleYes = v2.mustExistRuleYes
                temp.mustExistRuleNo = v2.mustExistRuleNo

                for str, v3 in pairs(v2) do
                    if string.find(str, "allCost") then
                        temp[str] = v3
                    elseif string.find(str, "aaCost") then
                        temp[str] = v3
                    end
                end
                table.insert(resultConf.listData, temp)
            end
        end
    end
    return resultConf
end

function SysTool.getPlayCountConfByGameID(nGameId, acData, playerCount,lobbyid)
    return SysTool.getConfByNameAndGameID("playCount", nGameId, acData, playerCount,lobbyid)
end

function SysTool.getPlayerCountConfByGameID(nGameId, acData, playerCount,lobbyid)
    return SysTool.getConfByNameAndGameID("playerCount", nGameId, acData, playerCount,lobbyid)
end

function SysTool.isToday(timestamp)
    if timestamp <= 0 then
        return false
    end
    local today = os.date("*t")
    local secondOfToday = os.time({day=today.day, month=today.month,year=today.year, hour=0, minute=0, second=0})
    if timestamp >= secondOfToday and timestamp < secondOfToday + 24 * 60 * 60 then
        return true
    end
    return false
end

return SysTool