local ShareManager = class("ShareManager")

function ShareManager:getShareConfig()
end

--获取分享的字符串
function ShareManager:getShareTitleByGameId(gameID, curPlayerCount, maxPlayerCount)
    local strConf = ""
    if maxPlayerCount then
        if curPlayerCount < 1 then
            curPlayerCount = 1
        end
        local ShareConf = self:getShareConfig() or {}
        local mahCfg = ShareConf[gameID]
        local lessPlayerCount = maxPlayerCount - curPlayerCount

        local limitFreeActModule = CF.getLobbyModule("LimitFreeAct")
        if limitFreeActModule and not limitFreeActModule:isActEnd() and CF.roomData:getRoomMode2() == CF.ROOM_TYPE.BOX_ROOM and limitFreeActModule:getExCardStr() ~= "" then
            strConf = mahCfg.GameName .. "," .. limitFreeActModule:getExCardStr()
        else
            strConf = mahCfg.GameName .. "," .. mahCfg["Title_" .. curPlayerCount .. "_" .. lessPlayerCount]
        end
    end
    return strConf
end

--获取分享配置
function ShareManager:getCfgDataByGameId(gameID)
    local ShareConf = self:getShareConfig() or {}
    return ShareConf[gameID]
end

-- 创建微信分享信息
function ShareManager:createShareInfo()
    local gameid = CF.roomData:getGameID()
    local boxRoomId = string.format("%06d", CF.roomData:getRoomID())
    local curPlayerCount = CF.roomData:getCurPlayerCount()
    local maxPlayerCount = CF.roomData:getChairs()
    local titleStr = self:getShareTitleByGameId(gameid, curPlayerCount, maxPlayerCount)
    local strText = boxRoomId .. "/" .. CF.roomData:getMaxPlayCount() .. "局/" .. maxPlayerCount .. "人/" .. CF.roomData:getGameRule()
    local strURL = CF.areaData.getXHLinkURL()
    if CF.teaHouseManager:isInTeaHouse() then
        local teaHousePwd = CF.teaHouseManager:getTeaHousePwd()
        strText = string.format("比赛场口令:%06d ", teaHousePwd) .. strText
        strURL = strURL .. "?key=house_" .. teaHousePwd .. "_table_" .. boxRoomId
    else
        strURL = strURL .. "?key=" .. boxRoomId
    end
    titleStr, strText = self:replaceSpecialStr(titleStr, strText)
    -- 加入中转URL
    local UrlConf = require("app.Config.UrlConf")
    local scene, mini_scene =  CF.getLobbyModule("Share"):getShareScene()
    if strURL and UrlConf.URL_SHARE_TRANSFER and scene and mini_scene and not string.find(strURL,UrlConf.URL_SHARE_TRANSFER) then
        strURL = string.format("%s?url=%s&areaid=%d&scene=%s&subscene=%s", UrlConf.URL_SHARE_TRANSFER, string.urlencode(strURL), XH.areaData:getAreaID(), string.urlencode(scene), string.urlencode(mini_scene))
        CF.getLobbyModule("Share"):resetShareScene()
    end

    local shareInfo = {
        textTitle = titleStr, --分享标题
        textTitleUrl = "", --微信不用
        site = "", --微信不用
        siteUrl = "", --微信不用
        imagePath = "", --微信不用
        url = strURL, --微信网页模式分享的链接
        type = "url", --word是文字分享，url网页模式分享，pic分享图片
        scene = "0", --0是分享到好友会话，1是分享到朋友圈
        imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
        text = strText, --分享内容
        comment = "", --微信不用
        copyTextWhenNoWX = self:createNormalCopyInfo(), --未安装微信时复制到剪贴板的内容
    }
    return shareInfo
end

function ShareManager:startUrlShare()
    local shareInfo = self:createShareInfo()
    CF.sdkManager:startShare(shareInfo)
end

--复制房间号信息
function ShareManager:createCopyInfo()
    local gameid = CF.roomData:getGameID()
    local shareCfg = self:getCfgDataByGameId(gameid)
    local gameName = shareCfg.GameName
    local sensitiveWords = shareCfg.SensitiveWords
    local ruleText = CF.roomData:getGameRule()
    --敏感词过滤
    for i = 1, #sensitiveWords do
        ruleText = string.gsub(ruleText, sensitiveWords[i], "")
    end
    local appName = CF.SysTool:getAppName()
    local boxRoomId = CF.roomData:getRoomID()
    local maxPlayerCount = CF.roomData:getChairs()
    local strText = "【" .. boxRoomId .. "】" .. appName .. gameName .. "，" .. maxPlayerCount .. "人/" .. CF.roomData:getMaxPlayCount() .. "局/" .. ruleText
    local strURL = CF.areaData.getXHLinkURL()
    if CF.teaHouseManager:isInTeaHouse() then
        local teaHousePswd = CF.teaHouseManager:getTeaHousePwd()
        strURL = strURL .. "?key=house_" .. teaHousePswd .. "_table_" .. boxRoomId
    else
        strURL = strURL .. "?key=" .. boxRoomId
    end

    --微信是否禁用链接分享
    if CF.configerManager.getIsWXBanUrl and not CF.configerManager:getIsWXBanUrl() then
        strText = strText .. "\n" .. strURL
    end
    return strText
end

function ShareManager:startCopyShare()
    local shareInfo = self:createCopyInfo()
    CF.SysTool.copyString(shareInfo)
    CF.TipTool.showToast("邀请信息已复制成功，粘贴分享给您的好友吧！")
    if CF.sdkManager:isInstallWeChat() then
        cc.Application:getInstance():openURL("weixin://")
    end
end

--截屏并分享到微信
function ShareManager:captureScreenAndShareToWeChat(savePicName,callback, obj)
    savePicName = savePicName or os.time() .. ".jpg"

    local shareToWeChat = function(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then
            print("captureScreen failed")
            return
        end
        print("captureScreen: " .. outputFile)
        local shareInfo = {
            textTitle = CF.SysTool:getAppName() .. os.date("%Y%m%d %H%M%S") or "", --分享标题
            imagePath = outputFile, --微信不用
            type = "pic", --word是文字分享，url网页模式分享，pic分享图片
            scene = 0, --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = "扫二维码 一起玩", --分享内容
            sharePath = ""
        }

        CF.sdkManager:startShare(shareInfo, callback, obj)
    end
    CF.SysTool.captureScreenshot(shareToWeChat, savePicName)
end

--截屏并分享到微信
function ShareManager:captureScreenAndShareToFirend(callback, obj)
    local savePicName = os.time() .. ".jpg"

    local shareToWeChat = function(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then
            print("captureScreen failed")
            return
        end
        print("captureScreen: " .. outputFile)
        local shareInfo = {
            textTitle = CF.SysTool:getAppName() .. os.date("%Y%m%d %H%M%S") or "", --分享标题
            imagePath = outputFile, --微信不用
            type = "pic", --word是文字分享，url网页模式分享，pic分享图片
            scene = 1, --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = "扫二维码 一起玩", --分享内容
            sharePath = ""
        }

        CF.sdkManager:startShare(shareInfo, callback, obj)
    end
    CF.SysTool.captureScreenshot(shareToWeChat, savePicName)
end

--截屏存本地
function ShareManager:captureScreenLocal(callback, obj, savePicName)
    CF.SysTool.captureScreenshot(callback, savePicName)
end

function ShareManager:createNormalCopyInfo()
    local appName = CF.SysTool:getAppName()
    local boxRoomId = string.format("%06d", CF.roomData:getRoomID())
    local maxPlayerCount = CF.roomData:getChairs()
    local ruleText = CF.roomData:getGameRule()
    local gameid = CF.roomData:getGameID()
    local shareCfg = self:getCfgDataByGameId(gameid)
    local gameName = shareCfg.GameName
    local sensitiveWords = shareCfg.SensitiveWords
    --敏感词过滤
    for i = 1, #sensitiveWords do
        ruleText = string.gsub(ruleText, sensitiveWords[i], "")
    end

    local strText = "【" .. boxRoomId .. "】" .. appName .. gameName .. "，" .. 
                        maxPlayerCount .. "人/" .. CF.roomData:getMaxPlayCount() .. "局/" .. 
                        ruleText .. "(长按复制消息打开游戏直接进房)"
    local limitFreeActModule = CF.getLobbyModule("LimitFreeAct")
    if limitFreeActModule and not limitFreeActModule:isActEnd() and CF.roomData:getRoomMode2() == CF.ROOM_TYPE.BOX_ROOM then 
        strText = strText .. limitFreeActModule:getExLinkStr()
    end
    local UrlConf = require("app.Config.UrlConf")
    local url = UrlConf.DOWNLOAD_ADDRESS_IOS
    if device.platform == "android" then
        url = UrlConf.DOWNLOAD_ADDRESS_ANDROID
    end
    
    -- 加入中转URL
    local scene, mini_scene =  CF.getLobbyModule("Share"):getShareScene()
    if url and UrlConf.URL_SHARE_TRANSFER and scene and mini_scene and not string.find(url,UrlConf.URL_SHARE_TRANSFER) then
        url = string.format("%s?url=%s&areaid=%d&scene=%s&subscene=%s", UrlConf.URL_SHARE_TRANSFER, string.urlencode(url), XH.areaData:getAreaID(), string.urlencode(scene), string.urlencode(mini_scene))
        CF.getLobbyModule("Share"):resetShareScene()
    end

    strText = strText .. "\n【下载地址】" .. url
    return strText
end

--复制大结束信息文本
function ShareManager:createTotoalResultCopyInfo(info)
    info = info or {}
    local gameid = CF.roomData:getGameID()
    local shareCfg = self:getCfgDataByGameId(gameid)
    local gameName = shareCfg.GameName or "浙江游戏大厅"
    local boxRoomId = string.format("%06d", CF.roomData:getRoomID()) or "123456"
    local totalPlayCount = info.playCount or "4"
    local createTime = info.timeStr or os.date("%Y-%m-%d  %H:%M:%S", os.time())
    local players = info.players or {}
    local KW_DEFAULT_STRING = "------"
    local playerInfo = ""
    for index = 0, #players do
        local nickName = CF.StringTool.cutStringByLength(players[index]._szNickname2) or KW_DEFAULT_STRING
        local numberID = players[index]._nNumberID or KW_DEFAULT_STRING
        local score = info.totalScore[index]
        score = score > 0 and "+" .. score or score
        playerInfo = playerInfo .. "\n" .. score .. " " .. nickName .. "(" .. numberID .. ")"
    end
    local strText = "游戏: " .. gameName .. "\n房号:" .. boxRoomId .. 
                    "\n局数:共" .. totalPlayCount .. "局\n时间:" .. createTime .. 
                    "\n--------------------------".. playerInfo
    return strText
end

function ShareManager:replaceSpecialStr(titleStr, strText)
    titleStr = string.gsub(titleStr, "麻将", "游戏")
    strText = string.gsub(strText, "麻将", "游戏")
    titleStr = string.gsub(titleStr, "斗地主", "抖地主")
    strText = string.gsub(strText, "斗地主", "抖地主")
    titleStr = string.gsub(titleStr, "跑得快", "足包得快")
    strText = string.gsub(strText, "跑得快", "足包得快")
    titleStr = string.gsub(titleStr, "双扣", "双筘")
    strText = string.gsub(strText, "双扣", "双筘")
    strText = string.gsub(strText, "支付", "")
    strText = string.gsub(strText, "防作弊", "强制定位")
    return titleStr, strText
end

return ShareManager
