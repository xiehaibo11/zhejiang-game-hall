import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.PopMsgView")
local GameGlobal = class('GameGlobal')
GameGlobal.__index = GameGlobal
--新增权限enum
GameGlobal.Permission = {
    ACCESS_FINE_LOCATION = 6,
    RECORD_AUDIO = 8,
}
--等待界面头像以及头像详细界面位置(相对于头像界面)
-- head中是头像位置
-- infoPercent是头像详情界面相对于头像的位置
-- infoAnchor是头像详情界面的锚点
GameGlobal.tableWaitingHeadPosTbl = {
    { head = cc.p(display.cx, display.height * 0.18), infoPercent = cc.p(0.5, 0), infoAnchor = cc.p(0.5, 0) }, --自己
    { head = cc.p(display.width * 0.8, display.cy), infoPercent = cc.p(0, 0.5), infoAnchor = cc.p(1, 0.5) }, --下家
    { head = cc.p(display.cx, display.height * 0.82), infoPercent = cc.p(0.5, 0), infoAnchor = cc.p(0.5, 1) }, --对家
    { head = cc.p(display.width * 0.2, display.cy), infoPercent = cc.p(1, 0.5), infoAnchor = cc.p(0, 0.5) }, --上家
}
-- 打牌界面头像位置
GameGlobal.gamePlayHeadPosTbl = {
    { head = cc.p(display.width * 0.05, 260), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0) }, --自己
    { head = cc.p(display.width * 0.945, display.height * 0.83), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5) }, --下家
    { head = cc.p(display.width * 0.793, display.height * 0.925), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1) }, --对家
    { head = cc.p(display.width * 0.05, display.height * 0.75), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5) }, --上家
}

-- 打牌界面头像位置
GameGlobal.gamePlayHeadPosTbl_LYPDK = {
    { head = cc.p(75, 257 + 100), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0) }, --自己
    { head = cc.p(display.width - 74, display.height * 0.75), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5) }, --下家
    { head = cc.p(display.width * 0.784, display.height - 62), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1) }, --对家
    { head = cc.p(75, display.height * 0.75), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5) }, --上家
}


-- 三幅打牌界面头像位置
GameGlobal.gamePlayHeadPosTbl_SANFU = {
    { head = cc.p(75, 55), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0) }, --自己
    { head = cc.p(display.width - 74, display.height * 0.675), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5) }, --下家
    { head = cc.p(display.width * 0.784, display.height - 62), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1) }, --对家
    { head = cc.p(75, display.height * 0.67), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5) }, --上家
}

--掼蛋打牌界面头像位置
GameGlobal.gamePlayHeadPosTbl_GUANDAN = {
    { head = cc.p(55, 55), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0) }, --自己
    { head = cc.p(display.width - 74, display.height * 0.675), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5) }, --下家
    { head = cc.p(display.width * 0.784, display.height - 62), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1) }, --对家
    { head = cc.p(75, display.height * 0.67), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5) }, --上家
}


GameGlobal.gamePlayHeadPosTbl_TUOSANZI = {
    { head = cc.p(75, 55), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0) }, --自己
    { head = cc.p(display.width - 74, display.height * 0.675), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5) }, --下家
    { head = cc.p(display.width * 0.784, display.height - 62), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1) }, --对家
    { head = cc.p(75, display.height * 0.67), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5) }, --上家
}

GameGlobal.gamePlayHeadPosTbl_DDZ = {
    { head = cc.p(75, 55), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0) }, --自己
    { head = cc.p(display.width - 74, display.height * 0.675), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5) }, --下家
    { head = cc.p(display.width * 0.784, display.height - 62), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1) }, --对家
    { head = cc.p(75, display.height * 0.67), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5) }, --上家
}

GameGlobal.payType = {
    PAY_HISTORY_PLATFORM_TYPE_ALIPAY = 5,
    PAY_HISTORY_PLATFORM_TYPE_WX_PAY = 6,
    PAY_HISTORY_PLATFORM_TYPE_APPLE = 8
}
--if device.model == "iphonex" then
if display.width / display.height >= 2 then
    GameGlobal.gamePlayHeadPosTbl_LYPDK[1]["head"].x = GameGlobal.gamePlayHeadPosTbl[1]["head"].x + 20
    GameGlobal.gamePlayHeadPosTbl_LYPDK[2]["head"].x = GameGlobal.gamePlayHeadPosTbl[2]["head"].x - 20
    GameGlobal.gamePlayHeadPosTbl_LYPDK[4]["head"].x = GameGlobal.gamePlayHeadPosTbl[4]["head"].x + 20
end

local json = require("cjson")

local function get(url, callback)
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_JSON
    xhr:open("GET", url)
    xhr:setRequestHeader("User-Agent", "Mozilla/5.0 (Windows NT 6.1; WOW64; rv:43.0) Gecko/20100101 Firefox/43")--使用电脑接口，淘宝ip获取接口屏蔽了手机端

    local function onReadyStateChanged()
        if xhr.readyState == 4 and (xhr.status >= 200 and xhr.status < 207) then
            local response = xhr.response

            local ok, output = pcall(function()
                return json.decode(response)
            end)

            if not ok then
                return
            end

            if callback and type(callback) == "function" then
                callback(output)
            end
        else
            printf('get %s error : %d', url, xhr.status)
        end
        xhr:unregisterScriptHandler()
    end

    xhr:registerScriptHandler(onReadyStateChanged)
    xhr:send()
end

function GameGlobal:createEffectFromSinglePng(targetPng, perWidth, height)
    local animation = cc.Animation:create()
    local pTexture = cc.Director:getInstance():getTextureCache():addImage(targetPng)
    if pTexture then
        for i = 1, 3 do
            animation:addSpriteFrameWithTexture(pTexture, cc.rect(0, 0, perWidth * i, height))
        end
    end
    animation:setDelayPerUnit(1 / 3)
    return animation
end

-- isMyhead表示获取的是否是我的头像
function GameGlobal:requestHttpImage(url, obj, isMyHeadImg, callback, headScale, noCut, offset, zOrder)
    if not url or url == "" then
        print("headImg url error ~!!")
        return
    end

    headScale = tonumber(headScale) or 0.95

    if type(url) == "string" and string.len(url) > 0 then
        local reverseStr = string.reverse(url)
        local _, findIdx = string.find(reverseStr, '/')
        if findIdx and findIdx < 5 then  -- findIdx < 5 xsll头像地址末尾没有/0
            local leftStr = string.sub(reverseStr, findIdx)
            local allStr = "69" .. leftStr
            url = string.reverse(allStr)
        end
    end

    local objName = self:getMD5(url)
    local headImgPath = cc.FileUtils:getInstance():getWritablePath() .. "headImgTmp/"
    if not cc.FileUtils:getInstance():isDirectoryExist(headImgPath) then
        cc.FileUtils:getInstance():createDirectory(headImgPath)
    end
    local fileName = headImgPath .. objName .. ".png"
    local findImg = false

    if cc.FileUtils:getInstance():isFileExist(fileName) then
        -- 头像名在本地存在，所以直接裁剪
        findImg = true
        self:createCircleSprite(fileName, headScale, obj, isMyHeadImg, callback, noCut, offset, zOrder)
    end


    if not findImg then
        -- 本地没有头像，需要从网上下载
        local xhr = cc.XMLHttpRequest:new()
        xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_STRING
        xhr:open("GET", url)
        local function onReadyStateChange()
            if tolua.isnull(xhr) then
                return
            end
            if xhr.readyState == 4 and xhr.status == 200 then
                if tolua.isnull(obj) then
                    return
                end
                local fileData = xhr.response
                -- 保存到本地
                io.writefile(fileName, fileData, "w+b")

                if not io.exists(fileName) then

                    return
                end

                if not tolua.isnull(obj) then
                    self:createCircleSprite(fileName, headScale, obj, isMyHeadImg, callback, noCut, offset, zOrder)
                end
            else
                print("xhr.readyState is:", xhr.readyState, "xhr.status is: ", xhr.status)
            end
        end

        xhr:registerScriptHandler(onReadyStateChange)
        xhr:send()
    end
end


function GameGlobal:clipImg(obj, src, headScale, offset, zOrder)


    local offset = offset or { x = 0, y = 0 }

    local headScale = headScale or 0.95


    local nodeType = tolua.type(obj)
    local spriteFrame = nil
    if nodeType == "ccui.ImageView" then
        spriteFrame = obj:getVirtualRenderer():getSprite():getSpriteFrame()
    elseif nodeType == "cc.Sprite" then
        spriteFrame = obj:getSpriteFrame()
    end

    if not spriteFrame then
        return
    end

    local mask = display.newSprite(spriteFrame)
    local size_mask = mask:getContentSize()
    -- mask:setContentSize( obj:getContentSize() )
    mask:setScale((obj:getContentSize().width / size_mask.width) * headScale)

    local size_src = src:getContentSize()
    local size_mask = mask:getContentSize()
    src:setScale(size_mask.width / size_src.width)

    local canva = cc.RenderTexture:create(size_mask.width, size_mask.height)

    mask:setPosition(size_mask.width / 2, size_mask.height / 2)
    src:setPosition(size_mask.width / 2, size_mask.height / 2)


    local blendfunc_mask = cc.blendFunc(gl.ONE, gl.ZERO)
    mask:setBlendFunc(blendfunc_mask)
    local blendfunc_src = cc.blendFunc(gl.DST_ALPHA, gl.ZERO)
    src:setBlendFunc(blendfunc_src)

    canva:begin()
    mask:visit()
    src:visit()
    canva:endToLua()

    local masked_sprite = cc.Sprite:createWithTexture(canva:getSprite():getTexture())
    masked_sprite:setFlippedY(true)

    -- 因为新创建了一个对象，所以要将以前的删掉，然后用新的替换
    if not tolua.isnull(obj) then
        masked_sprite:addTo(obj, zOrder or 1):setPosition(obj:getContentSize().width / 2 + offset.x, obj:getContentSize().height / 2 + offset.y)
    end

end

--裁剪圆形头像
function GameGlobal:createCircleSprite(srcFile, headScale, obj, isMyHeadImg, callback, noCut, offset, zOrder)
    local src = nil
    xpcall(function() src = display.newSprite(srcFile) end, function() print("httpData is error") end)
    if not src then
        return
    end

    if not obj then
        return
    end


    local offset = offset or { x = 0, y = 0 }


    if noCut then
        local width = obj:getContentSize().width
        local height = obj:getContentSize().height
        src:setPosition(width / 2 + offset.x, height / 2 + offset.y)

        src:setScale(width * headScale / src:getContentSize().width, height * headScale / src:getContentSize().height)

        if not tolua.isnull(obj) then
            src:addTo(obj, zOrder or -1)
        end
    else
        self:clipImg(obj, src, headScale, offset, zOrder)
    end


    if callback then
        -- callback(masked_sprite)
    end

end

-- 截取字符串，默认为5个字，用于昵称
--数字和英文为2个字符，汉字为3个字符，特殊字符为4个字符，默认显示为16个字符，5个汉字
function GameGlobal:cutStringLength(info, len)
    if not len then
        len = 16
    end
    return self:formatNickName(info, len, '')
end

-- 获取系统配置信息
function GameGlobal:getSystemParaInfo(id)
    for i, v in pairs(g_gameGlobal:getSystemConfigParaTable()) do
        if v.paraID == id then
            return v
        end
    end
    return nil
end

function GameGlobal:isSanfuLaizi(value)

    local isLaizi = false

    if (value - value % 16 == 1600) or value == 66 then
        isLaizi = true
    end

    return isLaizi

end



function GameGlobal:revertServerCardValue(value)

    local mvalue = value + 2
    if mvalue == 14 or mvalue == 15 then
        mvalue = mvalue - 13
    end
    return mvalue
end



local gdLaiziValue = 0
function GameGlobal:setGdLaiziCardValue(value)

    if value == 0 then return end

    local mvalue = self:revertServerCardValue(value)

    gdLaiziValue = mvalue + 16 * 2

end

function GameGlobal:getGdLaiziCardValue()
    return gdLaiziValue
end

function GameGlobal:getGdLaiziLogicvalue()

    return GDPublicFunc.getCardLogicValue(gdLaiziValue, true)
end


--是否是掼蛋癞子
function GameGlobal:isGuandanLaizi(value, ownChanged)


    if value == 0 then
        return false
    end

    if ownChanged then
        if value > 1600 and value < 1600 + 16 * 4 then
            return true
        end
    end

    local b = value == gdLaiziValue
    return b
end


--是否是级牌  isLogic: value传入的是不是逻辑值
function GameGlobal:isJiPai(value, isLogic)
    -- local cvalue = self:revertServerCardValue(value)
    if isLogic then
        local laiziLogic = self:getGdLaiziLogicvalue()
        return laiziLogic == value
    else

        if value == 65 or value == 66 then
            return false
        end

        if value % 16 == gdLaiziValue % 16 then
            return true
        end

    end


    return false
end






-- 获取玩法 入参数组
-- 第一个参数表示主玩法值
-- 第二个参数表示子玩法值
-- 第三个参数表示玩法值之间的分隔符，如果没有，以空格代替
-- 第四个参数表示是否获取最大人数
-- 第五个参数表示是否获取房卡均摊
-- 第六个参数表示是否获取最大局数
function GameGlobal:parseWanfaList(mainwanfa, wanfaList, fengefu, bGetMaxPlayerNum, bGetFangFeiJunTan, bGetMaxJuShu, hideMainWanfaStr)
    if not wanfaList or not mainwanfa then
        return
    end
    local fgf = fengefu or " "

    local wanfa = ""
    local tmpWanfalist = clone(wanfaList)
    if not hideMainWanfaStr then
        table.insert(tmpWanfalist, 1, mainwanfa)
    end
    for i, v in pairs(g_WanfaNameTable) do
        for j, w in pairs(v) do
            local match = false
            for t, r in pairs(w) do
                if (t == 1) and (mainwanfa == r[1]) then
                    match = true
                end
                if match then
                    for l, z in ipairs(tmpWanfalist) do
                        if z == r[1] then
                            wanfa = wanfa .. r[2] .. fgf
                            print(wanfa)
                            table.remove(tmpWanfalist, l)
                            break
                        end
                    end
                else
                    break
                end
            end
        end
    end

    if string.len(wanfa) > 0 then
        wanfa = string.sub(wanfa, 1, -1 - string.len(fengefu))   --去掉结尾的分隔符
    end

    if bGetMaxPlayerNum then
        -- 获取最大人数
        if g_gameGlobal:getMaxPlayerNum() > 0 then
            wanfa = wanfa .. fengefu .. g_gameGlobal:getMaxPlayerNum() .. "人"
        end
    end

    if bGetFangFeiJunTan then
        -- 房卡均摊
        if mainwanfa < 0 then
            wanfa = wanfa .. fengefu .. "房卡均摊"
        end
    end

    if bGetMaxJuShu then
        -- 获取最大局数
        if g_gameGlobal:getCurTotalJuShu() > 0 then
            wanfa = wanfa .. fengefu .. g_gameGlobal:getCurTotalJuShu() .. "局"
        end
    end
    return wanfa
end



-- 获取玩法
-- 第一个参数表示具体玩法值
-- 第二个参数表示玩法值之间的分隔符，如果没有，以空格代替
-- 第三个参数表示是否获取最大人数
-- 第四个参数表示是否获取房卡均摊
-- 第五个参数表示是否获取最大局数
function GameGlobal:parseWanfa(wanfaInfo, fengefu, bGetMaxPlayerNum, bGetFangFeiJunTan, bGetMaxJuShu, wanfa2, getIsInPaiZhuoGold)
    if not wanfaInfo then
        return
    end
    local fgf = fengefu or " "
    --播放录像的时候wanfa2没下发，可能会显示不正确
    local wanfa2 = wanfa2 or self:getWanfa2()
    local strTable = self.getWanfaString(wanfaInfo, wanfa2)

    local wanfa = ""
    for i, v in ipairs(strTable) do
        if self:isPaofengMj() and getIsInPaiZhuoGold then
            if not bGetMaxJuShu then
                if v == "100分" then
                    --这里不知道为什么变成1000，测试反馈，先注释掉
                    --v = "1000分"
                end
            end

        end
        if g_gameGlobal:isWuHuMaJiang(wanfaInfo, wanfa2) then
            if v == "三家出" then
                if (bGetMaxPlayerNum and tonumber(bGetMaxPlayerNum) == 3) or g_gameGlobal:getMaxPlayerNum() == 3 then
                    v = "两家出"
                end
            end
        end
        wanfa = wanfa .. v .. (i == #strTable and "" or fengefu)
    end

    -- if string.len(wanfa) > 0 then
    --    wanfa = string.sub(wanfa, 1, -2)   --去掉结尾的分隔符
    -- end

    if bGetMaxPlayerNum then
        -- 获取最大人数
        if tonumber(bGetMaxPlayerNum) or g_gameGlobal:getMaxPlayerNum() > 0 then
            wanfa = wanfa .. fengefu .. (tonumber(bGetMaxPlayerNum) or g_gameGlobal:getMaxPlayerNum()) .. "人"
        end
    end

    if bGetFangFeiJunTan then
        -- 房卡均摊
        -- if  bit._and(wanfaInfo, g_gameConstant.GAME_FANG_FEI_JUN_TAN) == g_gameConstant.GAME_FANG_FEI_JUN_TAN then
        --g_gameConstant.GAME_FANG_FEI_JUN_TAN 最高位 32为 1了   变成无符号就是 负数
        if wanfaInfo < 0 then
            wanfa = wanfa .. fengefu .. "房卡均摊"
        end
    end

    local isPfDBZ = false
    if self:isPaofengMjDBZ(wanfaInfo, wanfa2) then
        isPfDBZ = true
    end


    if bGetMaxJuShu and not isPfDBZ then
        -- 获取最大局数
        if tonumber(bGetMaxJuShu) or g_gameGlobal:getCurTotalJuShu() > 0 then
            if g_gameGlobal:isWuHuMaJiang(wanfaInfo, wanfa2) then
                if g_gameGlobal:getCurTotalJuShu() == g_gameConstant.WUHU_JUSHU_SET[1] then
                    wanfa = wanfa .. fengefu .. "1底"
                elseif g_gameGlobal:getCurTotalJuShu() == g_gameConstant.WUHU_JUSHU_SET[2] then
                    wanfa = wanfa .. fengefu .. "2底"
                elseif g_gameGlobal:getCurTotalJuShu() == g_gameConstant.WUHU_JUSHU_SET[3] then
                    wanfa = wanfa .. fengefu .. "3底"
                end
            elseif g_gameGlobal:isMaAnShan(wanfaInfo, wanfa2) then
                if g_gameGlobal:getCurTotalJuShu() == g_gameConstant.MAS_JUSHU_SET[1] then
                    wanfa = wanfa .. fengefu .. "1倒"
                elseif g_gameGlobal:getCurTotalJuShu() == g_gameConstant.MAS_JUSHU_SET[2] then
                    wanfa = wanfa .. fengefu .. "2倒"
                elseif g_gameGlobal:getCurTotalJuShu() == g_gameConstant.MAS_JUSHU_SET[3] then
                    wanfa = wanfa .. fengefu .. "3倒"
                end
            else
                wanfa = wanfa .. fengefu .. (tonumber(bGetMaxJuShu) or g_gameGlobal:getCurTotalJuShu()) .. "局"
            end

        end
    end
    return wanfa
end

-- 根据座位号获取实际座位
function GameGlobal:getTablePlayerPosWithTablePos(tablePos, myTablePos)
    local posState = 1    --1表示自己，2表示下家，3表示对家，4表示上家
    local deltaPos = (myTablePos or g_gameGlobal:getMyTablePos()) - tablePos
    if g_gameGlobal:getMaxPlayerNum() == 2 then
        if deltaPos ~= 0 then
            -- 对家
            posState = 3
        end
    elseif g_gameGlobal:getMaxPlayerNum() == 3 then
        if deltaPos == 1 or deltaPos == -2 then
            -- 上家
            posState = 4
        elseif deltaPos == -1 or deltaPos == 2 then
            -- 下家
            posState = 2
        end
    elseif g_gameGlobal:getMaxPlayerNum() == 4 then
        if deltaPos == 1 or deltaPos == -3 then
            -- 上家
            posState = 4
        elseif deltaPos == -1 or deltaPos == 3 then
            -- 下家
            posState = 2
        elseif deltaPos == -2 or deltaPos == 2 then
            -- 对家
            posState = 3
        end
    end
    return posState
end

-- 新增接口：根据显示座位号获取实际服务端座位
function GameGlobal:getServerTablePlayerPosWithPosState(posState)
    if posState == 1 then
        return g_gameGlobal:getMyTablePos()
    elseif posState == 2 then --下家
        if g_gameGlobal:getMaxPlayerNum() == 3 then
            return (g_gameGlobal:getMyTablePos() + 1) % 3
        elseif g_gameGlobal:getMaxPlayerNum() == 4 then
            return (g_gameGlobal:getMyTablePos() + 1) % 4
        end
    elseif posState == 3 then --对家
        if g_gameGlobal:getMaxPlayerNum() == 2 then
            return (g_gameGlobal:getMyTablePos() + 1) % 2
        elseif g_gameGlobal:getMaxPlayerNum() == 4 then
            return (g_gameGlobal:getMyTablePos() + 2) % 4
        end
    elseif posState == 4 then --上家
        if g_gameGlobal:getMaxPlayerNum() == 3 then
            return (g_gameGlobal:getMyTablePos() - 1 + 3) % 3
        elseif g_gameGlobal:getMaxPlayerNum() == 4 then
            return (g_gameGlobal:getMyTablePos() - 1 + 4) % 4
        end
    end
end

-- 是否是游客登录
local isGuest = false
function GameGlobal:isGuestLogin()
    return isGuest
end
function GameGlobal:setIsGuestLogin(loginType)
    isGuest = loginType or false
end

-- 切换大厅界面
function GameGlobal:switchLobbyScene(isForbid)
    if g_gameGlobal:getGameScene() then
        cc.Director:getInstance():popScene()
    end
    XH.viewManager:closeView("ImInviteView")    -- 去除没用的弹窗
    display.setAutoScale({
        width = 1920,
        height = 1080,
        autoscale = "FIXED_WIDTH",
        callback = function(framesize)
            local ratio = framesize.width / framesize.height
            if ratio > 16 / 9 then
                return { autoscale = "FIXED_HEIGHT" }
            end
        end
    })
    if not isForbid then
        NG.goldLobby:getModule("PeakRace"):reqPeakDetailList()
    end
    g_gameGlobal:setGameScene(nil)
    g_gameGlobal:setMaxPlayerNum(0)
end
-- 返回大厅
function GameGlobal:backToLobby()
    CloseAllPopMsgView()
    if not g_gameGlobal:getIsPlayingGameLog() then
        local playerGameOpertaionMsg = {}
        playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_PLAYER_LEFT_TABLE
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    end
    g_gameGlobal:switchLobbyScene()
    if not g_gameGlobal:getVipTableID() then
        g_gameGlobal:setIsInPaiZhuo(false)
    end
end

function GameGlobal:switchGameScene(gameScene)
    local currentScene = display.getRunningScene()
    local gameScene = g_gameGlobal:getGameScene()
    if gameScene and currentScene ~= gameScene then
        cc.Director:getInstance():pushScene(gameScene)
    end
end
-- 解散房间
function GameGlobal:closeVipRoom(target)
    CloseAllPopMsgView()
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP
    local opValue = 1
    if target then
        if type(target) == "number" then
            opValue = target
        end
        if (opValue <= 0) and (opValue > 3) then
            opValue = 1
        end
    end
    playerTableOperationMsg.opValue = opValue           --1是请求解散，2是同意解散，3不同意
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

end

function GameGlobal:SwallowTouches(node)
    local listenner = cc.EventListenerTouchOneByOne:create()
    listenner:setSwallowTouches(true)
    listenner:registerScriptHandler(function(touch, event)
        return true
    end, cc.Handler.EVENT_TOUCH_BEGAN)
    local eventDispatcher = node:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listenner, node)
end

-- 根据类型,性别获取音频文件路径
function GameGlobal:getEffectFileForOperation(operationType, sex)
    if g_UserDataTable.gameLanguageCfgIndex < 1 or g_UserDataTable.gameLanguageCfgIndex > 2 then
        return
    end
    local effectFile = "sound/"

    -- 加载语音类别，普通语还是柳州话
    effectFile = effectFile .. g_gameLanguageCfg[g_UserDataTable.gameLanguageCfgIndex].name .. "/"

    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "female/"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/"
    end

    if operationType == g_gameConstant.OPERATION_CHI then
        effectFile = effectFile .. "chi.mp3"
    elseif operationType == g_gameConstant.OPERATION_PENG then
        effectFile = effectFile .. "peng0.mp3"
    elseif operationType == g_gameConstant.OPERATION_GANG then
        effectFile = effectFile .. "gang0.mp3"
    elseif operationType == g_gameConstant.OPERATION_HU then
        effectFile = effectFile .. "hu.mp3"
    elseif operationType == g_gameConstant.OPERATION_ZIMO then
        effectFile = effectFile .. "zimo0.mp3"
    elseif operationType == g_gameConstant.OPERATION_BUHUA then
        effectFile = effectFile .. "buhua.mp3"
    end

    return effectFile
end

-- 根据牌值,性别获取音频文件路径
function GameGlobal:getEffectFileForCardValue(cardValue, sex)
    local paimianType = bit._and(cardValue * (2 ^ (-4)), 7)
    local paimianValue = bit._and(cardValue, 15)
    if paimianType < 0 or paimianType > 4 then
        -- 只有万条筒字牌，0-4
        return
    end

    if g_UserDataTable.gameLanguageCfgIndex < 1 or g_UserDataTable.gameLanguageCfgIndex > 2 then
        return
    end
    local effectFile = "sound/"

    -- 加载语音类别，普通语还是柳州话
    effectFile = effectFile .. g_gameLanguageCfg[g_UserDataTable.gameLanguageCfgIndex].name .. "/"

    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "female/"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/"
    end
    if paimianType == 0 then
        effectFile = effectFile .. paimianValue .. "wan.mp3"
    elseif paimianType == 1 then
        effectFile = effectFile .. paimianValue .. "tiao.mp3"
    elseif paimianType == 2 then
        effectFile = effectFile .. paimianValue .. "tong.mp3"
    elseif paimianType == 3 then
        effectFile = effectFile .. "zi" .. paimianValue .. ".mp3"
    else
        effectFile = effectFile .. "hua.mp3"
    end
    return effectFile
end

-- 系统配置
local systemConfigParaTable = {}
function GameGlobal:getSystemConfigParaTable()
    return systemConfigParaTable
end

-- 设置个人信息
local myPlayerInfo = {}
function GameGlobal:setMyselfInfo(player)
    myPlayerInfo = clone(player)
end
function GameGlobal:getMyselfInfo()
    return myPlayerInfo
end

function GameGlobal:getMyIndex()
    return myPlayerInfo.playerIndex
end

-- 游戏场景是否存在
local gameScene = nil
function GameGlobal:setGameScene(scene)
    gameScene = scene
end
function GameGlobal:getGameScene()
    return gameScene
end

-- 设置最大人数
local maxPlayerNum = 0
function GameGlobal:setMaxPlayerNum(playerNum)
    maxPlayerNum = playerNum
end
function GameGlobal:getMaxPlayerNum()
    return maxPlayerNum
end

-- 设置当前玩法
local currentWanFa = 0
function GameGlobal:setCurrentWanFa(wanfa)
    currentWanFa = wanfa
end
function GameGlobal:getCurrentWanFa()
    return currentWanFa
end
local wanfa2 = 0
function GameGlobal:setWanfa2(wanfa)
    wanfa2 = wanfa
end
function GameGlobal:getWanfa2()
    return wanfa2
end

--设置玩法
local selectWay = 0
function GameGlobal:setSelectWay(value)
    selectWay = value
end
function GameGlobal:getSelectWay()
    return selectWay
end

function GameGlobal:hasWanfaRule(wanfaRule, vipRule)
    -- print("-xxxxxxxxxxx11111111111111111")
    return bit._and(vipRule or currentWanFa, wanfaRule) == wanfaRule
end

function GameGlobal:getGuandanWarnNum()

    if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_ANHUI_GUANDAN_BAO_SHU_7) then
        return 7
    else
        return 10
    end

end

function GameGlobal:hasWanfa2(wanfaRule, _wanfa2)
    -- print("-xxxxxxxxxxx22222222222222222222")
    return bit._and(_wanfa2 or wanfa2, wanfaRule) == wanfaRule
end

function GameGlobal:isTongLing()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_TONG_LING)
end

function GameGlobal:isZongYang()
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG) then
        return false
    end
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_ZONG_YANG) then
        return true
    end
    return false
end

function GameGlobal:isYueXi()
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG) then
        return false
    end
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_YUE_XI) then
        return true
    end
    return false
end


function GameGlobal:isAnqingPDK(vipRule)
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG, vipRule) then
        return false
    end

    if not self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_WANFA2, vipRule) then
        return false
    end

    if self:hasWanfaRule(g_gameConstant.GR2_PDK_ANQING, vipRule) then
        return true
    end

    return false
end

function GameGlobal:isXuanChengPDK(vipRule)
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG, vipRule) then
        return false
    end

    if not self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_WANFA2, vipRule) then
        return false
    end

    if self:hasWanfaRule(g_gameConstant.GR2_PDK_XUANCHENG, vipRule) then
        return true
    end

    return false
end


function GameGlobal:isPdk(vipRule, wanfa2)
    return self:isAnqingPDK(vipRule, wanfa2) or self:isXuanChengPDK(vipRule, wanfa2) or self:isZYPDK(vipRule, wanfa2)
end

function GameGlobal:isGuandan(vipRule)

    return self:isTTZhuan(vipRule) or self:isShengJi(vipRule)
end

function GameGlobal:isWuWeiMj(vipRule, _wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG, vipRule) then
        return false
    end

    if not self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_2, vipRule) then
        return false
    end

    if self:hasWanfaRule(g_gameConstant.GR2_WU_WEI_MA_JIANG, vipRule) then
        return true
    end
end


function GameGlobal:isSanfu(vipRule)
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG, vipRule) then
        return false
    end

    if not self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_WANFA2, vipRule) then
        return false
    end

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_2, vipRule) then
        return false
    end

    if self:hasWanfaRule(g_gameConstant.GR2_ANQING_SAN_FU, vipRule) then
        return true
    end
end

function GameGlobal:isLiangfu(vipRule)
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_HUAI_NING, vipRule) and g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_LIANG_FU, _wanfa2) then
        return true
    end
    return false
end


function GameGlobal:isTuosanzi(vipRule, wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_TUO_SAN_ZI, vipRule) and
    self:hasWanfa2(g_gameConstant.GR2_NEW_RULES, wanfa2) then
        return true
    end

    return false
end


function GameGlobal:isZYPDK(vipRule, wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_PDK_ZONGYANG, vipRule) and
    self:hasWanfa2(g_gameConstant.GR2_NEW_RULES, wanfa2) then
        return true
    end

    return false
end


function GameGlobal:isDDZ(vipRule, wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_DOU_DI_ZHU, vipRule) and
    self:hasWanfa2(g_gameConstant.GR2_NEW_RULES, wanfa2) then
        return true
    end

    return false
end

function GameGlobal:isNewTongLing(vipRule, wanfa2)

    if self:hasWanfa2(g_gameConstant.GR2_NEW_RULES, wanfa2) then
        return false
    end

    --    if self:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_WANFA2 , wanfa2) then
    --        return false
    --    end

    if self:hasWanfaRule(g_gameConstant.GR2_TONG_LING_NEW_MARK, vipRule) and
    self:hasWanfa2(g_gameConstant.GR2_TONG_LING_NEW_MARK, wanfa2) then
        return true
    end

    return false
end

function GameGlobal:isPaofengMj(vipRule, _wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG, vipRule) then
        return false
    end

    if not self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_2, vipRule) then
        return false
    end

    if self:hasWanfaRule(g_gameConstant.GR2_PAO_FENG_MA_JIANG, vipRule) then
        return true
    end
end


function GameGlobal:isPaofengMjDBZ(vipRule, _wanfa2)

    if self:isPaofengMj(vipRule, _wanfa2) and self:hasWanfa2(g_gameConstant.GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI, _wanfa2) then
        return true
    end
    return false

end


function GameGlobal:isTTZhuan(vipRule, _wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG, vipRule) then
        return false
    end

    if not self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_2, vipRule) then
        return false
    end

    if self:hasWanfaRule(g_gameConstant.GR2_ANHUI_GUANDAN_NO_UPGRADE, vipRule) then
        return true
    end
end

function GameGlobal:isShengJi(vipRule, _wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG, vipRule) then
        return false
    end

    if not self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_2, vipRule) then
        return false
    end

    if self:hasWanfaRule(g_gameConstant.GR2_ANHUI_GUANDAN_UPGRADE, vipRule) then
        return true
    end
end







function GameGlobal:isSuSong()
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG) then
        return false
    end
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_SU_SONG) then
        return true
    end
    return false
end

function GameGlobal:isWangJiang()
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG) then
        return false
    end
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_WANG_JIANG) then
        return true
    end
    return false
end

function GameGlobal:isTongCheng()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_TONG_CHENG)
end


function GameGlobal:isLiuAn()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_LIU_AN)
end

function GameGlobal:isAnQing()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_AN_QING)
end

function GameGlobal:isSheXian()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_SHE_XIAN)
end

function GameGlobal:isXiaGang()

    if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_NEW_RULES) then
        return false
    end

    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_XIA_GANG)
end

function GameGlobal:isQianShan()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_QIAN_SHAN)
end

function GameGlobal:isXuanChengHongzhong()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_XUANCHENG_HONGZHONG)
end


function GameGlobal:isXuanCheng()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_XUAN_CHENG)
end


function GameGlobal:isChiZhou()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_CHI_ZHOU)
end

function GameGlobal:isTongChengZiMo()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_TONG_CHENG) and self:hasWanfaRule(g_gameConstant.GAME_PLAY_ZI_MO)
end

function GameGlobal:isHuaiYuan()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_HUAI_YUAN)
end

function GameGlobal:isBangBuDaiHua()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_BANG_BU_DAI_HUA)
end

function GameGlobal:isDongZhi()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_DONG_ZHI)
end



function GameGlobal:isHuaiNing(vipRule, _wanfa2)
    if g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_WUHUMJ) then
        return false
    end

    if g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_ZZMJ) then
        return false
    end

    if g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_MASMJ) then
        return false
    end
    if g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_LIANG_FU) then
        return false
    end
    if g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_JINZHAIMJ) then
        return false
    end
    if g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_SUANZUIMJ) then
        return false
    end
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_HUAI_NING)
end

function GameGlobal:isWuHuMaJiang(vipRule, _wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_HUAI_NING, vipRule) and g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_WUHUMJ, _wanfa2) then
        return true
    end
    return false
end


function GameGlobal:isZZMaJiang(vipRule, _wanfa2)

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_HUAI_NING, vipRule) and g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_ZZMJ, _wanfa2) then
        return true
    end
    return false
end

function GameGlobal:isMaAnShan(vipRule, _wanfa2)
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_HUAI_NING, vipRule) and g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_MASMJ, _wanfa2) then
        return true
    end
    return false
end

function GameGlobal:isHuangShan()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_HUANG_SHAN)
end


function GameGlobal:isHeFeiHongZhong()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG)
end

function GameGlobal:isHongZhong()

    if self:isHeFeiHongZhong() then
        return false
    end

    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_HONG_ZHONG)
end

function GameGlobal:isTaiHu()
    return self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_TAI_HU)
end

--金寨玩法
function GameGlobal:isJinZhai()
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_HUAI_NING, vipRule) and g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_JINZHAIMJ, _wanfa2) then
        return true
    end
    return false
end

-- 亳州算嘴
function GameGlobal:isSuanZui()
    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_HUAI_NING, vipRule) and g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_HUAI_NING_AND_GR2_SUANZUIMJ, _wanfa2) then
        return true
    end
    return false
end

--设置赖子，
local fanCard = 0
function GameGlobal:setFanCard(value)
    if self:isLiuAn() or
    self:isHuangShan() or
    self:isTongChengZiMo() or
    self:isDongZhi() or
    self:isQianShan() or
    self:isXiaGang() or
    self:isSheXian() or
    self:isTongLing() or
    self:isPaofengMj() or
    self:isZongYang() or
    self:isNewTongLing() or
    self:isZZMaJiang()
    then

        local fan = bit._and(value, 255)
        self:setFanCardValue(fan)

        if fan == 0 then
            fanCard = 0
            if (self:isTongLing() and not g_gameGlobal:isNewTongLing()) or self:isZZMaJiang() then
                self:setLaiZi()
            end
            return
        end

        if self:isXiaGang() then
            if fan == 53 then
                fanCard = 55
                return
            elseif fan == 55 then
                fanCard = 53
                return
            end
        end
        local value = fan + 1
        if value == 10 then
            value = 1
        elseif value == 26 then
            value = 17
        elseif value == 42 then
            value = 33
        elseif value == 53 then
            if self:isZZMaJiang() or (self:isTongLing() and not g_gameGlobal:isNewTongLing() and bit._and(currentWanFa, g_gameConstant.GAME_PLAY_TONGLING_FAN_LAIZI) == 0) then
                value = 53
            else
                value = 49
            end
        elseif value == 56 then

            value = 53;
        end

        fanCard = value
    else
        fanCard = 0
    end

    self:setLaiZi()
end

function GameGlobal:getFanCard()
    return fanCard
end

local fengCard = 49
--风圈牌
function GameGlobal:setFengCard(value)
    fengCard = value or 49
end
function GameGlobal:getFengCard()
    return fengCard
end
--主风
function GameGlobal:isZhuFeng(cd)
    if cd == 0 then return false end
    local fengCard = self:getFengCard()
    if type(fengCard) == "number" and cd == fengCard then
        return true
    end
    return false
end
--风牌
function GameGlobal:isFengZui(cd)
    if not self:isSuanZui() then
        return false
    end
    if cd >= 49 and cd <= 55 then
        return true
    end
    return false
end

local fanCardValue = 0
function GameGlobal:setFanCardValue(fanValue)
    fanCardValue = fanValue
end
function GameGlobal:getFanCardValue()
    return fanCardValue or 0
end

function GameGlobal:isAnGangAllHide()

    if g_gameGlobal:getIsPlayingGameLog() then
        return false
    end

    if self:isQianShan() or self:isYueXi() or self:isDongZhi() or self:isTaiHu() or self:isLiuAn() or self:isSuanZui() then
        return true
    end
    return false
end



--是否是 花牌
function GameGlobal:isHua(card, piaoHua)

    if g_gameGlobal:isSuSong() and piaoHua == 1 then
        return false
    end

    if card == 0 then return false end

    local ishua = false

    if (card > 64 or card == 54) and self:isChiZhou() then
        ishua = true
    elseif (card >= 53 or card == 49) and self:isBangBuDaiHua() then
        ishua = true
    elseif self:isHuaiYuan() then
        if card >= 53 then
            ishua = true
        elseif card == 49 and self:hasWanfaRule(g_gameConstant.GAME_PLAY_DONG_FENG_HUA) then
            ishua = true
        end

    elseif self:isHuaiNing() then
        if not self:isMaAnShan() then
            if card >= 53 or card == 49 then
                ishua = true
            end
        end
    elseif self:isSuSong() then
        if card >= 53 then
            ishua = true  --花牌
        end

    elseif self:isAnQing() or self:isYueXi() or self:isBangBuDaiHua() or self:isWangJiang()
    or self:isTaiHu() then
        if card == 49 or card >= 53 then
            ishua = true
        end

    elseif self:isDongZhi() then
        if card >= 53 then
            ishua = true
        end

    elseif self:isQianShan() then
        if card >= 54 or (self:getLaizi() >= 54 and card == 53) then
            ishua = true
        end

    elseif self:isZongYang() then
        if card == 54 or (self:getLaizi() == 54 and card == 53) then
            ishua = true
        end
    elseif self:isTongCheng() then
        if card == 54 then
            ishua = true
        end
    elseif self:isPaofengMj() then
        if card == 54 or card == 55 or self:getLaizi() == card then
            ishua = true
        end
        if self:getLaizi() == 54 or self:getLaizi() == 55 then --如果癞子为发财或者白板时，红中为花牌
            if card == 53 then
                ishua = true
            end
        end
    end

    return ishua

end


--是否是 自动补花
function GameGlobal:isAutobBHua(card, piaoHua)



    if self:isSuSong() then
        if piaoHua == 1 then return false end --选择飘花的人，没有补花
    end

    if card == 0 then return false end

    if not self:isHua(card) then
        return false
    end

    if self:isLaiZi(card) then          --癞子不能被自动补出去
        return false
    end


    if self:isChiZhou() or self:isBangBuDaiHua() or self:isHuaiYuan() or self:isHuaiNing() or self:isSuSong() then
        return true
    end
    return false

end

local clearColor = 0
function GameGlobal:setClearColor(cc)
    clearColor = cc
end
function GameGlobal:getClearColor()
    return clearColor
end

-- 设置房卡均摊
local fangfeiJunTan = 0
function GameGlobal:setFangFeiJunTan(isJunTan)
    fangfeiJunTan = isJunTan
end
function GameGlobal:getFangFeiJunTan()
    return fangfeiJunTan
end

-- 设置我的tablepos
local myTablePos = 0
function GameGlobal:setMyTablePos(tablePos)
    myTablePos = tablePos
end
function GameGlobal:getMyTablePos()
    return myTablePos
end

-- 设置是否是在牌桌
local isInPaiZhuo = false
function GameGlobal:setIsInPaiZhuo(inPaiZhuo)
    --这里放在这里，是因为退出游戏的时候，有很多地方退出
    --为了减少代码，只能在这里加
    if (inPaiZhuo == false) then
        cc.UserDefault:getInstance():setIntegerForKey("showMandatoryVioce", 0)
    end
    isInPaiZhuo = inPaiZhuo
end
function GameGlobal:getIsInPaiZhuo()
    return isInPaiZhuo
end

-- 是否金币房
function GameGlobal:isGoldRoom()
    local vipTableID = g_gameGlobal:getVipTableID()
    return (not vipTableID or vipTableID == 0)
end

-- 设置是否是在金币场牌桌
local isInGoldPaiZhuo = false
function GameGlobal:setIsInPaiZhuoGold(inPaiZhuo)
    isInGoldPaiZhuo = inPaiZhuo
end
function GameGlobal:getIsInPaiZhuoGold()
    return isInGoldPaiZhuo
end

-- 设置vip场roomid
local vipTableID = nil
function GameGlobal:setVipTableID(tableID)
    vipTableID = tableID
end
function GameGlobal:getVipTableID()
    return vipTableID
end

-- 设置当前总的局数
local curTotalJuShu = 0
function GameGlobal:setCurTotalJuShu(totalJuShu)
    curTotalJuShu = totalJuShu
end
function GameGlobal:getCurTotalJuShu()
    return curTotalJuShu
end

--设置当前第几局
local currentJushu = 0
function GameGlobal:setCurrentJushu(jushu)
    currentJushu = jushu
end
function GameGlobal:getCurrentJushu()
    return currentJushu
end

-- 设置我是否是房主
local isMyFangZhu = false
function GameGlobal:setIsMyFangZhu(fangzhu)
    isMyFangZhu = fangzhu
end
function GameGlobal:getIsMyFangZhu()
    return isMyFangZhu
end

-- 是否正在播放战绩
local isPlayingGameLog = false
function GameGlobal:setIsPlayingGameLog(isPlayingLog)
    isPlayingGameLog = isPlayingLog
end
function GameGlobal:getIsPlayingGameLog()
    return isPlayingGameLog
end

function GameGlobal:getMD5(str)
    if str and type(str) == "string" and str ~= "" then
        local url = string.gsub(str, "?", "_")
        return string.gsub(url, "[:/.]", "_")
    end
    return str
end

function GameGlobal:checkVisible(target)
    local visible = true
    local visible_target = target
    while visible_target do
        if visible_target:isVisible() == true then
            visible_target = visible_target:getParent()
        else
            visible = false
            break
        end
    end

    return visible
end

--点击node区域外会调用func
function GameGlobal:registerOutsideCloseFunc(node, func, swallow)
    local listenner = cc.EventListenerTouchOneByOne:create()
    local flag = false
    if swallow then
        listenner:setSwallowTouches(true)
    end
    listenner:registerScriptHandler(function(touch, event)
        if self:checkVisible(node) == false then
            return false
        end
        local pt = node:getParent():convertTouchToNodeSpace(touch)
        if cc.rectContainsPoint(node:getBoundingBox(), pt) == false then
            flag = true
        end
        return true
    end, cc.Handler.EVENT_TOUCH_BEGAN)
    listenner:registerScriptHandler(function(touch, event)
        local pt = node:getParent():convertTouchToNodeSpace(touch)
        if flag and (cc.rectContainsPoint(node:getBoundingBox(), pt) == false) then
            func()
        end
    end, cc.Handler.EVENT_TOUCH_ENDED)
    local eventDispatcher = node:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listenner, node)
end

--获取玩法table
function GameGlobal.getWanfaString(way, wanfa)
    if true then
        return {} -- todo
    end
    local wanfaInfo = require("app.lobby.RoomConfig")
    local wanfa_configs = wanfaInfo[2]
    local firstList = {}
    local secondList = {}
    for value, config in pairs(wanfa_configs) do
        if config.wanfa2 then
            secondList[#secondList + 1] = config
        else
            firstList[#firstList + 1] = config
        end
    end
    local insertNoSame = function(tb, value)
        for i, v in ipairs(tb) do
            if v[2] == value[2] then
                return
            end
        end
        table.insert(tb, value)
    end

    local getConditionItem = function(tb, index)
        local tCondition = tb.condition
        if not tCondition then
            return
        end
        for i, v in pairs(tCondition) do
            for j, k in ipairs(v) do
                if index == k then
                    return tb.items[i]
                end
            end
        end
    end

    local beChosen = function(way, value)
        if not way then return false end
        return bit._and(way, value) == value
    end
    --默认选项,一个互斥表中有值的选项都未选中，且父选项被选中，则返回默认选项
    local getDefaultItem = function(tb, index, wanfa)
        local mutex = tb.mutex or {}
        for i, tMutex in ipairs(mutex) do
            for j, k in ipairs(tMutex) do
                if k == index then
                    --遍历互斥表
                    local continue = true
                    local retIndex, retItem
                    for l, m in ipairs(tMutex) do
                        if tb.items[m].value then
                            if beChosen(wanfa, tb.items[m].value) then
                                continue = false
                            end
                        else
                            local cdItem = getConditionItem(tb, m)

                            if cdItem and not beChosen(wanfa, cdItem.value) then
                                continue = false
                            else
                                retIndex, retItem = m, tb.items[m]
                            end
                        end
                    end
                    if continue then
                        return retIndex, retItem
                    end
                end
            end
        end
    end

    local function insertConfigStr(config, way, wanfa2)
        local title = config.title or config.name
        local temp = {}
        table.insert(temp, { 0, config.name })
        local items = config.items or {}
        for index, item in pairs(items) do
            --有值且没有选中的选项，其互斥且无值选项做为默认项
            -- if wanfa2 == 0 then 
            --     wanfa2 = nil
            -- end
            local wanfa = wanfa2 or way
            if item.value then
                if config.wanfa2 and beChosen(wanfa2, item.value) then
                    local title = item.title or item.name
                    table.insert(temp, { index, title })
                elseif not config.wanfa2 and beChosen(way, item.value) then
                    local title = item.title or item.name
                    table.insert(temp, { index, title })
                elseif item.wanfa2 then
                    if beChosen(wanfa2, item.value) then
                        local title = item.title or item.name
                        table.insert(temp, { index, title })
                    end
                else
                    local dIndex, default = getDefaultItem(config, index, wanfa)
                    if default then
                        local title = default.title or default.name
                        insertNoSame(temp, { dIndex, default.name })
                    end
                end
            end
        end
        table.sort(temp, function(a, b) return a[1] < b[1] end)
        local ret = {}
        for i, v in ipairs(temp) do
            ret[#ret + 1] = v[2]
        end
        return ret
    end


    local vistConfig = function(configList, way, wanfa)

        for i, config in ipairs(configList) do
            -- local result = bit._and(way, config.value)
            if config.playRule2 then
                if g_gameGlobal:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_2, way) and beChosen(way, config.value) then
                    return insertConfigStr(config, way, wanfa)
                end
            elseif config.newWanfa then
                if g_gameGlobal:hasWanfaRule(g_gameConstant.GAME_PLAY_RULE_WANFA2, way) and beChosen(way, config.value) then
                    return insertConfigStr(config, way, wanfa)
                end
            elseif config.newWanfa1 then
                if g_gameGlobal:hasWanfa2(g_gameConstant.GAME_PLAY_RULE_WANFA2, wanfa) and beChosen(way, config.value) then
                    return insertConfigStr(config, way, wanfa)
                end
            elseif config.otherPlayWay then
                if g_gameGlobal:hasWanfa2(config.otherPlayWay.auxiliaryWanfa, wanfa) and beChosen(way, config.otherPlayWay.mainWanfa) then
                    return insertConfigStr(config, config.otherPlayWay.auxiliaryWanfa, wanfa)
                end
            elseif beChosen(way, config.value) then
                --if not g_gameGlobal:hasWanfaRule( g_gameConstant.GR2_NEW_RULES , way ) then
                return insertConfigStr(config, way, wanfa)
                -- end
            end
        end
    end


    local ret = nil
    --新玩法
    if g_gameGlobal:isTuosanzi(way, wanfa) then
        ret = insertConfigStr(wanfa_configs[WanFaConStants.GAME_PLAY_TUO_SAN_ZI], way, wanfa)
    elseif g_gameGlobal:isDDZ(way, wanfa) then
        ret = insertConfigStr(wanfa_configs[WanFaConStants.GAME_PLAY_DOU_DI_ZHU], way, wanfa)
    elseif g_gameGlobal:isZYPDK(way, wanfa) then
        ret = insertConfigStr(wanfa_configs[WanFaConStants.GAME_PLAY_PDK_ZONGYANG], way, wanfa)
    elseif g_gameGlobal:isNewTongLing(way, wanfa) then
        --ret = insertConfigStr(wanfa_configs[g_gameConstant.GR2_TONG_LING_NEW_MARK_TYPE] , way , wanfa)
        local config = wanfa_configs[WanFaConStants.GR2_TONG_LING_NEW_MARK_TYPE]
        ret = { config.name }
        if beChosen(wanfa, config.items[1].value) then
            table.insert(ret, config.items[1].name)
            if beChosen(wanfa, config.items[7].value) then
                table.insert(ret, config.items[1].labelText[1].name)
            end
        end
        if beChosen(wanfa, config.items[2].value) then
            table.insert(ret, config.items[2].name)
            if beChosen(wanfa, config.items[7].value) then
                table.insert(ret, config.items[2].labelText[1].name)
            end
        end

        if beChosen(wanfa, config.items[3].value) then
            table.insert(ret, config.items[3].name)
            if beChosen(wanfa, config.items[7].value) then
                table.insert(ret, config.items[3].labelText[1].name)
            end
        end
        if beChosen(wanfa, config.items[4].value) then
            table.insert(ret, config.items[4].name)
        end
        if beChosen(wanfa, config.items[5].value) then
            table.insert(ret, config.items[5].name)
        end
        if beChosen(wanfa, config.items[6].value) then
            table.insert(ret, config.items[6].name)
        end
        if beChosen(wanfa, config.items[8].value) then
            table.insert(ret, config.items[8].name)
        end
        if beChosen(wanfa, config.items[9].value) then
            table.insert(ret, config.items[9].name)
        end
        --return ret
    elseif beChosen(way, g_gameConstant.GAME_PLAY_TONG_LING) then   --铜陵打补丁编程法恶心处理
        local config = wanfa_configs[WanFaConStants.GAME_PLAY_TONG_LING]
        local ret = { config.name }
        if beChosen(way, config.items[2].value) then
            table.insert(ret, config.items[2].name)
        elseif beChosen(way, config.items[3].value) then
            table.insert(ret, config.items[3].name)
        else
            table.insert(ret, config.items[1].name)
        end
        if beChosen(way, config.items[5].value) then
            table.insert(ret, config.items[5].name)
        else
            table.insert(ret, config.items[4].name)
        end
        if beChosen(wanfa, g_gameConstant.GR2_PAO_FENG_LIANG_GANG_BU_FAN_BEI) then
            table.insert(ret, config.items[6].name)
        end
        if beChosen(wanfa, config.items[7].value) then
            table.insert(ret, config.items[7].name)
        end


        return ret
    else
        ret = vistConfig(firstList, way, wanfa)
    end

    if not ret then
        ret = vistConfig(secondList, way, wanfa) or {}
    end

    if bit._and(wanfa, g_gameConstant.GR2_JIAN_TING) == g_gameConstant.GR2_JIAN_TING then
        table.insert(ret or {}, "实时语音")
    end

    if bit._and(wanfa, g_gameConstant.GR2_FAN_ZHUO_BI_TIP) == g_gameConstant.GR2_FAN_ZHUO_BI_TIP then
        table.insert(ret or {}, "位置检测")
    end

    if bit._and(wanfa, g_gameConstant.GR2_OPTION_READY) == g_gameConstant.GR2_OPTION_READY then
        table.insert(ret or {}, "准备")
    end

    if bit._and(wanfa, g_gameConstant.GR2_OPTION_TUOGUAN_DAIDA) == g_gameConstant.GR2_OPTION_TUOGUAN_DAIDA then
        table.insert(ret or {}, "托管代打")
    end

    if bit._and(wanfa, g_gameConstant.GR2_OPTION_TUOGUAN_JIESAN) == g_gameConstant.GR2_OPTION_TUOGUAN_JIESAN then
        table.insert(ret or {}, "托管解散")
    end


    if bit._and(wanfa, g_gameConstant.GR2_OPTION_OPEN_GPS) == g_gameConstant.GR2_OPTION_TUOGUAN_JIESAN then
        table.insert(ret or {}, "托管解散")
    end

    return ret
end

local _laizi = 0
function GameGlobal:setLaiZi()
    _laizi = self:getLaiziValue()
end

function GameGlobal:getLaiziValue()

    local m_newPlayWay = self:getCurrentWanFa()
    if self:isTongLing() and not g_gameGlobal:isNewTongLing() and bit._and(m_newPlayWay, g_gameConstant.GAME_PLAY_TONGLING_FAN_LAIZI) == 0 then
        return 53
    end

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_HE_FEI_HONG_ZHONG) or
    self:hasWanfaRule(g_gameConstant.GAME_PLAY_HONG_ZHONG) then
        return 53
    end

    if self:hasWanfaRule(g_gameConstant.GAME_PLAY_XUANCHENG_HONGZHONG) then
        if self:hasWanfaRule(g_gameConstant.GAME_PLAY_4_LAIZI) then
            return 53
        end
        return { 53, 55 }
    end

    return self:getFanCard()

end

-- 是否癞子
function GameGlobal:isLaiZi(cd)
    if cd == 0 then return false end

    if type(_laizi) == "number" and cd == _laizi then
        return true
    end

    if type(_laizi) == "table" then
        for k, value in pairs(_laizi) do
            if cd == value then
                return true
            end
        end
    end
    return false
end

function GameGlobal:getLaizi()
    return _laizi
end

function GameGlobal:fixScale(node)
    local base_size = cc.size(1280, 720)
    local a = display.width / base_size.width
    local b = display.height / base_size.height
    node:setScale(a > b and a or b)
end

function GameGlobal:fixPos(node)
    local x = display.cx - 1280 / 2
    local y = display.cy - 720 / 2
    local initX, initY = node:getPosition()
    node:setPosition(initX + x, initY + y)
end

function GameGlobal:fixPosX(node)
    local initX = node:getPositionX()
    local x = self:getFixPosX(initX)
    node:setPositionX(x)
end

function GameGlobal:getFixPosX(x)
    local base_size = cc.size(1280, 720)
    local a = display.width / base_size.width
    return x * a
end

function GameGlobal:getFixPosY(y)
    local base_size = cc.size(1280, 720)
    local b = display.height / base_size.height
    return y * b
end

function GameGlobal:checkCardValid(value)
    local cardValue = bit._and(value, 15)
    if value == 0 or cardValue == 0 then return false end
    return true
end

--@desc 获取精确到毫秒的时间
local __tsocket = require "socket"
function GameGlobal:getTime()
    return __tsocket.gettime()
end

function GameGlobal:timeConvert(seconds)

    if not seconds or type(seconds) ~= "number" then
        return ""
    end

    if seconds < 60 then
        return seconds .. "秒"
    elseif seconds < 3600 then
        return math.floor(seconds / 60) .. "分钟"
    else
        return "超过1小时"
    end

end

function GameGlobal:timeConvert1(time, showHour, showMin, showSec)

    local toInt = function(num)
        num = num - num % 1
        return num
    end

    if showHour then
        return string.format("%02d", toInt(time / 3600))
    end

    if showMin then
        return string.format("%02d", (toInt(time / 60) % 60))
    end

    if showSec then
        return string.format("%02d", (time % 60))
    end

    local str = string.format("%02d", toInt(time / 3600)) .. ":" .. string.format("%02d", (toInt(time / 60) % 60)) .. ":" .. string.format("%02d", (time % 60))
    return str
end

--远程加载图片的cache
local remoteImageCache = {}

--每次启动将清空缓存
function GameGlobal:clearRemoteImageCache()
    local playerIndex = self:getMyselfInfo().playerIndex
    local basePath = cc.FileUtils:getInstance():getWritablePath() .. "remoteImgs"
    local storageDir = cc.FileUtils:getInstance():getWritablePath() .. "remoteImgs/" .. tostring(playerIndex)
    if cc.FileUtils:getInstance():isDirectoryExist(storageDir) then
        cc.FileUtils:getInstance():removeDirectory(storageDir .. "/")
    end
    if not cc.FileUtils:getInstance():isDirectoryExist(basePath) then
        cc.FileUtils:getInstance():createDirectory(basePath)
    end
    cc.FileUtils:getInstance():createDirectory(storageDir)

    local remoteDirPath = cc.FileUtils:getInstance():getWritablePath() .. "remoteKeepImgs"
    if not cc.FileUtils:getInstance():isDirectoryExist(remoteDirPath) then
        cc.FileUtils:getInstance():createDirectory(remoteDirPath)
    end
end

--请求远程图片，savename有传进来就会保存到本地
function GameGlobal:downloadRemoteImage(urlFileName, successCallBack, failCallBack, saveName)
    -- body
    if not urlFileName then
        return
    end

    --exists in cache? 本次登录后新下载的图片，存放在缓存里
    if remoteImageCache[urlFileName] then
        successCallBack(remoteImageCache[urlFileName], true)
        return
    end

    --获取本地保存的图片
    local storageDir = ""
    local fullFileName = ""
    if saveName and (saveName ~= "") then
        storageDir = cc.FileUtils:getInstance():getWritablePath() .. "remoteKeepImgs/"
        fullFileName = storageDir .. saveName
    end

    if cc.FileUtils:getInstance():isFileExist(fullFileName) then
        successCallBack(fullFileName, true)
        return
    end


    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_STRING
    xhr:open("GET", urlFileName)
    local function onDownloadImage()
        --print("xhr.readyState is:", xhr.readyState, "xhr.status is: ", xhr.status)
        if xhr.readyState == 4 and (xhr.status >= 200 and xhr.status < 207) then
            local fileData = xhr.response
            local playerIndex = self:getMyselfInfo().playerIndex

            local storageDir = ""
            local fullFileName = ""
            if saveName and (saveName ~= "") then
                storageDir = cc.FileUtils:getInstance():getWritablePath() .. "remoteKeepImgs/"
                fullFileName = storageDir .. saveName
            else
                if (playerIndex == nil) then
                    storageDir = cc.FileUtils:getInstance():getWritablePath() .. "remoteImgs"
                else
                    storageDir = cc.FileUtils:getInstance():getWritablePath() .. "remoteImgs/" .. tostring(playerIndex)
                end
                fullFileName = storageDir .. "/remote_" .. tostring(GameGlobal.getTime()) .. ".png"
            end

            local file = io.open(fullFileName, "wb")
            if file then
                file:write(fileData)
                io.close(file)

                if cc.FileUtils:getInstance():isFileExist(fullFileName) then
                    if io.filesize(fullFileName) ~= 0 then --空间不足保存的图片大小为0
                        --insert to cache
                        remoteImageCache[urlFileName] = fullFileName

                        if successCallBack and type(successCallBack) == "function" then
                            successCallBack(fullFileName)
                        end
                    else
                        os.remove(fullFileName)
                    end
                end
            end
        else
            if failCallBack and type(failCallBack) == "function" then
                failCallBack()
            end
        end
    end
    xhr:registerScriptHandler(onDownloadImage)
    xhr:send()
end

function GameGlobal:isBixuGuan(vipRule, wanfa2)
    return true
end

function GameGlobal:playSkeletonAnimationOnce(fileName, animationName, noClean, callback)
    local skeletonNode = sp.SkeletonAnimation:create(fileName .. ".json", fileName .. ".atlas", 1)
    skeletonNode:setAnimation(0, animationName or "animation", false)
    -- skeletonNode:registerSpineEventHandler(function(event)
        if not noClean and not tolua.isnull(skeletonNode) then
            performWithDelay(skeletonNode, function() skeletonNode:removeSelf()
                if callback then
                    callback()
                end
            end, 1)
        end
    -- end, sp.EventType.ANIMATION_COMPLETE)

    -- 监听不到事件，先做延时处理

    return skeletonNode
end

function GameGlobal:setGameBtnAni(btn, type, scale)


    if not tolua.isnull(btn) then
        local skeleton = sp.SkeletonAnimation:create("Match/spine/chipenggang_btn/coeanl.json", "Match/spine/chipenggang_btn/coeanl.atlas", 1)
        skeleton:move(btn:getContentSize().width / 2, btn:getContentSize().height / 2)
        skeleton:setAnimation(0, type or "huang", true)
        skeleton:setScale(scale or 1)
        skeleton:addTo(btn)
    end
end

local chsize = function(char)
    if not char then
        print("not char")
        return 0
    elseif char >= 240 then
        return 4
    elseif char >= 224 then
        return 3
    elseif char >= 192 then
        return 2
    else
        return 1
    end
end

function GameGlobal:formatNickName(nickName, length, surFix)
    if not nickName or nickName == "" then
        return ""
    end
    if not length then
        length = 16
    end
    if not surFix then
        surFix = ''
    end
    local display_len = function(str)
        local len = 0
        local currentIndex = 1
        while currentIndex <= #str do
            local char = string.byte(str, currentIndex)
            currentIndex = currentIndex + chsize(char)
            if chsize(char) >= 4 then
                len = len + 4
            elseif chsize(char) >= 3 then
                len = len + 3
            else
                len = len + 2
            end
        end
        return len
    end

    if display_len(nickName) > length then
        return self:sub_human(nickName, length) .. surFix .. "..."
    end
    return nickName
end

-- 截取显示多少个字，1个英文一个字，一个汉字一个字
-- str:         要截取的字符串
-- startChar:   开始字符下标,从1开始
-- numChars:    要截取的字长度
function GameGlobal:sub_human(str, numChars)

    local startIndex = 1
    local currentIndex = startIndex

    while currentIndex <= #str do
        local char = string.byte(str, currentIndex)
        if chsize(char) >= 4 then
            numChars = numChars - 4
        elseif chsize(char) >= 3 then
            numChars = numChars - 3
        else
            numChars = numChars - 2
        end
        if numChars < 0 then
            break
        end
        currentIndex = currentIndex + chsize(char)
    end
    return str:sub(startIndex, currentIndex - 1)
end

function GameGlobal:vibrate(time, flag)
    
end
--判断是否为全面屏手机
function GameGlobal:iSallroundScreen()
    if display.width / display.height >= 2 then
        return true
    else
        return false
    end
end

local timeDifference = 0
function GameGlobal:setTimeDifference(time)
    timeDifference = time
end

function GameGlobal:getTimeDifference()
    return timeDifference
end

--游戏模式 存全局
local gameModel = g_gameConstant.NONE_GAME_MODEL
function GameGlobal:setGameModel(model)
    gameModel = model
end
function GameGlobal:getGameModel()
    return gameModel or g_gameConstant.GOLD_GAME_MODEL
end



function GameGlobal:xpcallDecodeJson(str, catchFunc)

    local ret = {}

    if not str or str == "" then
        return ret
    end

    xpcall(function()
        ret = json.decode(str)
    end, catchFunc or __G__TRACKBACK__)

    return ret

end

local pdkFirstChuPos = nil
function GameGlobal:setPDKFirstChuPos(pos)
    pdkFirstChuPos = pos
end
function GameGlobal:getPDKFirstChuPos()
    return pdkFirstChuPos
end

local pdkCurChuPos = nil
function GameGlobal:setPDKCurChuPos(pos)
    pdkCurChuPos = pos
end
function GameGlobal:getPDKCurChuPos()
    return pdkCurChuPos
end

local pdkLastChuPos = nil
function GameGlobal:setPDKLastChuPos(pos)
    pdkLastChuPos = pos
end
function GameGlobal:getPDKLastChuPos()
    return pdkLastChuPos
end

local pdkHandData = {}
function GameGlobal:setPdkHandData(data)
    pdkHandData = data
end

function GameGlobal:getPdkHandData()
    return pdkHandData
end

function GameGlobal:post(url, data, succCb, failCb, isJson, isUrlEncode)
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = respType or cc.XMLHTTPREQUEST_RESPONSE_JSON
    if isJson then
        xhr:setRequestHeader("Content-Type", "application/json")
    end
    if isUrlEncode then
        -- xhr:setRequestHeader("Content-Type", "application/x-www-form-urlencoded")
        xhr:setRequestHeader("Content-Type", "application/json")
    end
    xhr:open("POST", url)
    local function callback()
        --print("xhr.readyState is:", xhr.readyState, "xhr.status is: ", xhr.status)
        if xhr.readyState == 4 and (xhr.status >= 200 and xhr.status < 207) then
            local response = xhr.response
            local output = json.decode(response)

            if succCb and type(succCb) == "function" then
                succCb(output)
            end
        else
            if failCb and type(failCb) == "function" then
                failCb(xhr.status)
            end
        end
    end
    xhr:registerScriptHandler(callback)
    xhr:send(data)
end

function GameGlobal:gettimeStr(num)
    local time = os.date("*t", (os.time() - num * 86400));
    local str = string.format("%d-%02d-%02d", time["year"], time["month"], time["day"])
    return str
end

function GameGlobal:gettimeMsgStr(time)
    local list = string.split(time, "-")
    local str = string.format("_%d%02d%02d", list[1], list[2], list[3])
    return str
end
function GameGlobal:gettimeMsgStr1(time)
    local list = string.split(time, "-")
    local str = string.format("%d%02d%02d", list[1], list[2], list[3])
    return str
end

--h5页面
local hasWebviewInView = false
function GameGlobal:setHasWebviewInView(has)
    hasWebviewInView = has
end
function GameGlobal:hasWebviewInView()
    return hasWebviewInView
end

function GameGlobal:requestH5Post(url, data, succCb, failCb)
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_JSON
    xhr:open('GET', url)
    local function callback()
        --print("xhr.readyState is:", xhr.readyState, "xhr.status is: ", xhr.status)
        if xhr.readyState == 4 and (xhr.status >= 200 and xhr.status < 207) then
            local response = xhr.response
            local output = json.decode(response)

            if succCb and type(succCb) == "function" then
                succCb(output)
            end
        else
            if failCb and type(failCb) == "function" then
                failCb(xhr.status)
            end
        end
    end
    xhr:registerScriptHandler(callback)
    xhr:send()
end


function GameGlobal:hideGameTalk()

    if g_gameGlobal:isTuosanzi() and g_gameGlobal:hasWanfa2(g_gameConstant.GR2_TUO_SAN_ZI_NO_FUDONG) then
        return true
    end

    return false

end


--[[    isForce 是不是强制上报
]]
function GameGlobal:uploadGpsData(isForce)

end



function GameGlobal:getImgPath(url)
    if cc.FileUtils:getInstance():isFileExist(url) then
        return url
    end
    local fileDir = device.writablePath .. 'tempImgPath'
    if not cc.FileUtils:getInstance():isDirectoryExist(fileDir) then
        cc.FileUtils:getInstance():createDirectory(fileDir)
    end

    return fileDir .. device.directorySeparator .. self:getMD5(url .. "[urlImg]") .. ".png"
end
local _____imgNameCache____ = {}--key:url,value:fullFileName
function GameGlobal:dowmLoadURLImageEx(urlFileName, sprite_, successCallBack_, failCallBack_, isCut, maskFile)
    -- body
    if (not urlFileName) or (string.len(urlFileName) < 10) then
        return;
    end
    print_log("urlFilename is " .. urlFileName)
    if type(urlFileName) == "string" and string.len(urlFileName) > 0 then
        -- 微信传给的url链接中最后字符为/0,表示使用默认图片，640*640,所以要把/0换成/96,这样下下来图片就是96*96尺寸
        local reverseStr = string.reverse(urlFileName)
        local _, findIdx = string.find(reverseStr, '/')
        if findIdx and findIdx < 5 then
            local isWxImg = true
            local f, _ = string.find(reverseStr, '.png')
            if f then
                isWxImg = false
            end

            local g, _ = string.find(reverseStr, '.jpg')
            if g then
                isWxImg = false
            end

            if isWxImg then
                local leftStr = string.sub(reverseStr, findIdx)
                local allStr = "69" .. leftStr
                urlFileName = string.reverse(allStr)
            end
        end
    end

    local fullFileName = self:getImgPath(urlFileName)
    if fullFileName and cc.FileUtils:getInstance():isFileExist(fullFileName) then
        if sprite_ and not tolua.isnull(sprite_) then
            local width, height = sprite_:getContentSize().width, sprite_:getContentSize().height
            local initScaleX, initScaleY = sprite_:getScaleX(), sprite_:getScaleY()

            -- if display.getImage(fullFileName) then
            if tolua.type(sprite_) == "cc.Sprite" then
                sprite_:initWithFile(fullFileName)
            elseif tolua.type(sprite_) == "ccui.ImageView" then
                sprite_:loadTexture(fullFileName, ccui.TextureResType.localType)
            end
            sprite_:setScaleX(width * initScaleX / sprite_:getContentSize().width)
            sprite_:setScaleY(height * initScaleY / sprite_:getContentSize().height)

            if isCut then
                self:createCircleSprite(fullFileName, maskFile, sprite_, false, successCallBack_)
            else
                if successCallBack_ then
                    successCallBack_()
                end
            end
            return;
            -- end
        else
            if failCallBack_ then
                failCallBack_()
            end
            return;
        end

    end
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_STRING
    urlFileName = string.trim(urlFileName)
    xhr:open("GET", urlFileName)
    xhr.url_l = urlFileName
    sprite_.url_l = urlFileName
    local function onDownloadImage()
        if xhr.readyState == 4 and (xhr.status >= 200 and xhr.status < 207) then
            if tolua.isnull(xhr) or xhr.url_l ~= sprite_.url_l then
                return
            end
            if tolua.isnull(sprite_) then
                return
            end
            local fileData = xhr.response
            fullFileName = self:getImgPath(xhr.url_l)
            -- local time = os.time()
            -- fullFileName = cc.FileUtils:getInstance():getWritablePath() .. "tmp_" .. time .. string.split(tostring(sprite_)," ")[2] .. ".png"
            local file = io.open(fullFileName, "wb")
            if file == nil then
                --失败
                if failCallBack_ then
                    failCallBack_()
                end
                return
            end
            file:write(fileData)
            file:close();
            local function loadComplete()
                if sprite_ and not tolua.isnull(sprite_) then
                    local width, height = sprite_:getContentSize().width, sprite_:getContentSize().height
                    local initScaleX, initScaleY = sprite_:getScaleX(), sprite_:getScaleY()
                    if tolua.type(sprite_) == "cc.Sprite" then
                        sprite_:initWithFile(fullFileName)
                    elseif tolua.type(sprite_) == "ccui.ImageView" then
                        sprite_:loadTexture(fullFileName, ccui.TextureResType.localType)
                    end
                    sprite_:setScaleX(width * initScaleX / sprite_:getContentSize().width)
                    sprite_:setScaleY(height * initScaleY / sprite_:getContentSize().height)
                end
                -- _____imgNameCache____[urlFileName] = fullFileName
                --删除图片
                -- os.remove(fullFileName)

                if isCut then
                    self:createCircleSprite(fullFileName, maskFile, sprite_, false, successCallBack_)
                else
                    if successCallBack_ then
                        successCallBack_()
                    end
                end
            end
            display.loadImage(fullFileName, loadComplete) --加入到缓存
        else
            --失败
            if failCallBack_ then
                failCallBack_()
            end
        end
    end
    xhr:registerScriptHandler(onDownloadImage)
    xhr:send()

end


local diamondAwardIds = {}
function GameGlobal:setDiamondAwardIds(ids)
    diamondAwardIds = ids
end
function GameGlobal:getDiamondAwardIds()
    return diamondAwardIds
end

function GameGlobal:strSplit(str, del)

    if str == "" then
        return {}
    end

    local t = string.split(str, del)
    if type(t) == "string" then
        return { t }
    elseif type(t) == "table" then
        return t
    end

    return {}

end

--判断是否是手机号登录
function GameGlobal:isPhoneLogin()
    local login_data = require("app.login.login_data")
    local d = login_data:getLoginData()
    if d.extData and d.extData ~= "" then
        local extData = json.decode(d.extData)
        if extData.phoneNumber then
            return true
        else
            return false
        end
    else
        return false
    end
end

function GameGlobal:getMaxIndex(t)
    local maxnum = 0
    for k, v in pairs(t) do
        if tonumber(k) and tonumber(k) > maxnum then
            maxnum = tonumber(k)
        end
    end
    return maxnum
end



-- 意见反馈系统红点
local feedbackDotStatus = false
function GameGlobal:setFeedbackDotStatus(pStatus)
    feedbackDotStatus = pStatus
    GlobalEventManager:onEvent("lobby_refresh_feedback_dot")
end

function GameGlobal:getFeedbackDotStatus()
    return feedbackDotStatus
end

--互动表情数据缓存
local ExpressionData = {}
function GameGlobal:setExpressionData(data)
    if #data.EmojiDataVo == 1 then
        if ExpressionData.EmojiDataVo and #ExpressionData.EmojiDataVo > 0 then
            for i, v in ipairs(ExpressionData.EmojiDataVo) do
                if v.emojiId == data.EmojiDataVo[1].emojiId then
                    v.freeNum = data.EmojiDataVo[1].freeNum
                    v.costNum = data.EmojiDataVo[1].costNum
                    v.bagNum = data.EmojiDataVo[1].bagNum
                    ExpressionData.diamond = data.diamond
                    ExpressionData.gold = data.gold
                end
            end
        end
    else
        ExpressionData = data
    end
    ExpressionData.vipFreeNum = data.vipFreeNum or 0
end

function GameGlobal:getExpressionData()
    return ExpressionData
end



local shopAllData = {}
--缓存商品信息
function GameGlobal:setshopAllData(data)
    shopAllData = {}
    shopAllData = data
end
function GameGlobal:getshopAllData()
    return shopAllData
end


local h5GameView = false
function GameGlobal:setHasH5GameView(has)
    h5GameView = has
end
function GameGlobal:hasH5GameView()
    return h5GameView
end

local disCountData = nil
function GameGlobal:setDisCountData(d)
    disCountData = d
end
function GameGlobal:getDisCountData()
    return disCountData
end

--邀请玩家进入牌桌缓存
local InvitationPlayerTime = {}
function GameGlobal:setInvitationPlayerTime(data, playerId)
    if playerId and playerId > 0 then
        if #InvitationPlayerTime > 0 then
            for i = #InvitationPlayerTime, 1, -1 do
                if InvitationPlayerTime[i].id == playerId then
                    table.remove(InvitationPlayerTime, i)
                    break
                end
            end
        end
    else
        if data.time and data.id then
            table.insert(InvitationPlayerTime, data)
        end
    end
end

function GameGlobal:getInvitationPlayerTime()
    return InvitationPlayerTime
end

function GameGlobal:getTimeByInt(value, showhour, showmin, showsec)
    if type(value) ~= "number" then return end
    if value <= 0 then return "" end
    local hour = math.modf(value / 3600)
    local min = math.modf(value / 60)
    local sec = value % 60

    if showhour then
        return hour
    end

    if showmin then
        return min
    end

    if showsec then
        return sec
    end

    local strTime = string.format("%02d:%02d:%02d", hour, min, sec)
    return strTime
end


function GameGlobal:getServerTime()
    return os.time() - g_gameGlobal:getTimeDifference()
end

local p0 = 0
function GameGlobal:setP0(num)
    p0 = num
    cclog("p0" .. num)
end
function GameGlobal:getP0()
    return p0
end
local p1 = 0
function GameGlobal:setP1(num)
    p1 = num
    cclog("p1" .. num)
end
function GameGlobal:getP1()
    return p1
end

local age = 18
function GameGlobal:setAge(num)
    age = num
    cclog("年龄:" .. age)
end
function GameGlobal:getAge()
    return age
end

local consume = 0
function GameGlobal:setConsume(num)
    consume = num
    cclog("消费:" .. consume)
end
function GameGlobal:getConsume()
    return consume
end

local alreadyAuth = 2  --2默认值  1是已经绑定过 0是没有绑定
function GameGlobal:setAlreadyAuth(state)
    alreadyAuth = state
end
function GameGlobal:getAlreadyAuth()
    return alreadyAuth
end

local realNameTipShow = ""
function GameGlobal:setRealNameTipShow(str)
    realNameTipShow = str
end
function GameGlobal:getRealNameTipShow()
    return realNameTipShow
end


function GameGlobal:getLabelWith(fontSize, str)
    local label = display.newLabel({ fontSize = fontSize, text = str, fontColor = cc.c3b(0, 255, 0), fontName = "fonts/huakangyuanti.ttf" })
    local width = label:getContentSize().width
    return width
end

function GameGlobal:createScale9Sprite(parent, pszFileName, pos, size, anchor, rect, fScale, zOrder)
    local retSprite
    if rect then
        retSprite = ccui.Scale9Sprite:create(pszFileName, rect)
    else
        retSprite = ccui.Scale9Sprite:create(pszFileName)
    end
    if retSprite then
        self:setNodeAttr(retSprite, pos, anchor, zOrder, tag, fScale)
        retSprite:setContentSize(size)
        if parent then
            parent:addChild(retSprite)
        end
    end

    return retSprite
end


function GameGlobal:setNodeAttr(node, ...)
    if not node then
        return
    end
    -- 1、pos 2、anchor 3、zOrder 4、tag 5、fScale
    local switch = {
        [1] = function(pos)
            node:setPosition(pos)
        end,
        [2] = function(anchor)
            node:setAnchorPoint(anchor)
        end,
        [3] = function(zOrder)
            node:setLocalZOrder(zOrder)
        end,
        [4] = function(tag)
            node:setTag(tag)
        end,
        [5] = function(scale)
            node:setScale(scale)
        end,
    }
    local Attrs = { ... }
    for k, v in pairs(Attrs) do
        switch[k](v)
    end
end

---把某个节点渲染并保存为图片
---@param node Node 需要保存的节点
---@param imageName string|nil 图片名字
---@param callback function|nil 成功回调
---@return void
function GameGlobal:saveNodeImageToPath(node, imageName, callback)
    if tolua.isnull(node) then
        return
    end
    local dirPath = cc.FileUtils:getInstance():getWritablePath() .. "imgName"
    imageName = imageName or "image_" .. os.date("%Y%m%d");
    local path = string.format("%s/%s.jpg", dirPath, imageName)

    local size = node:getContentSize()
    local renderTexture = cc.RenderTexture:create(size.width, size.height, cc.TEXTURE2_D_PIXEL_FORMAT_RGB_A8888)
    renderTexture:ignoreAnchorPointForPosition(true)
    renderTexture:setAnchorPoint(cc.p(0, 0))
    renderTexture:clear(0, 0, 0, 0)

    local nodeModel = node:clone()
    nodeModel:retain()
    nodeModel:setVisible(true)

    renderTexture:begin()
    nodeModel:visit()
    renderTexture:endToLua()
    renderTexture:retain()

    performWithDelay(node, function()
        if not cc.FileUtils:getInstance():isDirectoryExist(dirPath) then
            cc.FileUtils:getInstance():createDirectory(dirPath)
        end
        renderTexture:newImage():saveToFile(path, true)
        renderTexture:release()
        nodeModel:release()
        if callback then
            callback(path)
        end
    end, 0.1)

end

function GameGlobal:saveNodeImageToPathNoClone(node, imageName, callback)
    if tolua.isnull(node) then
        return
    end
    local dirPath = cc.FileUtils:getInstance():getWritablePath() .. "imgName"
    imageName = imageName or "image_" .. os.date("%Y%m%d");
    local path = string.format("%s/%s.jpg", dirPath, imageName)

    local size = node:getContentSize()
    local renderTexture = cc.RenderTexture:create(size.width, size.height, cc.TEXTURE2_D_PIXEL_FORMAT_RGB_A8888)
    renderTexture:ignoreAnchorPointForPosition(true)
    renderTexture:setAnchorPoint(cc.p(0, 0))
    renderTexture:clear(0, 0, 0, 0)


    local isVisible = node:isVisible()
    node:setVisible(true)
    renderTexture:begin()
    node:visit()
    renderTexture:endToLua()
    renderTexture:retain()

    scheduler.performWithDelayGlobal(function()
        if not cc.FileUtils:getInstance():isDirectoryExist(dirPath) then
            cc.FileUtils:getInstance():createDirectory(dirPath)
        end
        renderTexture:newImage():saveToFile(path, true)
        renderTexture:release()
        if not tolua.isnull(node) then
            node:setVisible(isVisible)
        end
        if callback then
            callback(path)
        end
    end, 0.1)

end

--跳转到微信,typenum 1 分享链接，2 分享图片 3 分享文本
function GameGlobal:weixinShareJump(msg, typenum)
    local Platform = require("app.platform.Platform")
    if typenum == 1 then
        ShowToastMsg("复制成功")
        Platform.copyMsgToClipBoard(msg)
        --CCApplication:getInstance():openURL("weixin://")
    elseif typenum == 2 then
        Platform.pictureSaveLibrary(function(str)
            if str == "fail" then
                ShowToastMsg("保存失败，内存不足，请前往手机相册清理")
            elseif str == "success" then
                --ShowToastMsg("已保存至相册")
                release_print('保存相册成功')
                scheduler.performWithDelayGlobal(function()
                    if G_APP_VERSION < 18 then
                        CCApplication:getInstance():openURL("weixin://")
                    else
                        Platform.goToThirdApp()
                    end
                end, 0.5)
            end
        end, msg)
    elseif typenum == 3 then
        ShowToastMsg("复制成功")
        Platform.copyMsgToClipBoard(msg)
        -- CCApplication:getInstance():openURL("weixin://")
    end

end

--战绩分享域名
local shareUrlGlobal = nil
function GameGlobal:setClubShareRecordUrl(url)
    shareUrlGlobal = url
end

function GameGlobal:getClubShareRecordUrl()
    return shareUrlGlobal or "https://winner.tta173.com/"
end

function GameGlobal:updateSpecfLayer(msg)
    -- local cfg = g_gameGlobal:getSystemParaInfo(90000) -- 服务端specf配置字段
    -- local notOnline = device.platform == "windows" or (not string.find(g_networkConnect[1].ip, "%a") and true or false)
    -- local gameScene = g_gameGlobal:getGameScene()
    -- if cfg and cfg.pro_2 == 1 and notOnline and gameScene then
    --     local oSpecfLayer = gameScene:getChildByName("UISpecfGameLayer")
    --     if not oSpecfLayer then
    --         local specfLayer = require("app.game.UISpecfGameLayer")
    --         local specfType = specfLayer.SPECF_TYPE.MAH
    --         local wanfa2 = GameGlobal:getWanfa2()
    --         local playWay = GameGlobal:getCurrentWanFa()
    --         if g_gameGlobal:isDDZ(playWay, wanfa2) then
    --             specfType = specfLayer.SPECF_TYPE.POKER
    --         elseif g_gameGlobal:isTuosanzi(playWay, wanfa2) then
    --             specfType = specfLayer.SPECF_TYPE.POKER
    --         elseif g_gameGlobal:isPdk(playWay, wanfa2) then
    --             specfType = specfLayer.SPECF_TYPE.POKER
    --         elseif g_gameGlobal:isSanfu(playWay, wanfa2) then
    --             specfType = specfLayer.SPECF_TYPE.POKER
    --         elseif g_gameGlobal:isLiangfu(playWay, wanfa2) then
    --             specfType = specfLayer.SPECF_TYPE.POKER
    --         elseif g_gameGlobal:isGuandan(playWay, wanfa2) then
    --             specfType = specfLayer.SPECF_TYPE.POKER
    --         end
    --         local oSpecfLayer = specfLayer:create(specfType)
    --         :setName("UISpecfGameLayer")
    --         :setLocalZOrder(g_gameConstant.TABLEPLAYERDOCARD_ZORDER)
    --         g_gameGlobal:getGameScene():add(oSpecfLayer)
    --     end
    --     gameScene:getChildByName("UISpecfGameLayer"):updateSpecfLayer(msg.leftCards, msg.handCardsCnt)  --  msg.handcardCount牌类中使用，用来控制Specf数据不溢出
    -- end
end

function GameGlobal:showGoldHallDialog(backid)
    local _goldhallDialog = require("app.lobby.GoldHallTipDialog")
    local _pGoldhallDialog = _goldhallDialog:create()
    _pGoldhallDialog:showGoldTipDialog(backid)
    display.getRunningScene():add(_pGoldhallDialog, g_gameConstant.GOLDROOM_TIP_DIALOG)
end


--设置道具系统红点
local propRedDotShows = {}
function GameGlobal:setPropUIRedDot(valueStr)
    local touchTime = cc.UserDefault:getInstance():getStringForKey("propTouchTime", "")
    local isUpdate = false
    if touchTime ~= "" then
        local dateStr = os.date("%x", tonumber(touchTime))
        local tiemStr = os.date("%x", os.time())
        if dateStr ~= tiemStr then
            isUpdate = true
        end
    else
        isUpdate = true
    end
    if isUpdate then
        local reddotTable = string.split(valueStr, ",")
        propRedDotShows = {}
        for _, str in pairs(reddotTable) do
            table.insert(propRedDotShows, tonumber(str))
        end
        cc.UserDefault:getInstance():setStringForKey("propRedDotClick", json.encode(propRedDotShows))
        cc.UserDefault:getInstance():setStringForKey("propTouchTime", os.time())
    end
    xpcall(function()
        local touchStr = cc.UserDefault:getInstance():getStringForKey("propRedDotClick", "")
        if touchStr == "" then
            propRedDotShows = {}
        else
            propRedDotShows = json.decode(touchStr)
        end
    end, function()
        print("setPropUIRedDot error")
    end)

end

function GameGlobal:updatePropUIRedDots(tagindex)
    for i, index in pairs(propRedDotShows) do
        if index == tagindex then
            table.remove(propRedDotShows, i)
            break
        end
    end
    cc.UserDefault:getInstance():setStringForKey("propRedDotClick", json.encode(propRedDotShows))
end

function GameGlobal:getPropUIRedDot()
    return propRedDotShows
end

--设置道具系统数据
local isPopLayer = false
function GameGlobal:isPopPropSystem()
    return isPopLayer
end

function GameGlobal:setPopPropSystem(_state)
    isPopLayer = _state
end

local isDiscountProp = false
function GameGlobal:setPropDiscount(_state)
    isDiscountProp = _state
end

function GameGlobal:getPropDiscount()
    return isDiscountProp
end

local propShows = { 1, 3, 4, 5, 6, 7, 8 }
function GameGlobal:setPropUIShow(showType)
    propShows = showType
end

function GameGlobal:getPropUIShow()
    return propShows
end
--修改列表显示，在这里就可以了
local propShopShows = { 1, 9, 10, 3, 5, 6, 7 }
function GameGlobal:setShopPropUIShow(showType)
    propShopShows = showType
end

function GameGlobal:getShopPropUIShow()
    return propShopShows
end

--设置免费互动表情
local freeexpression = 0
function GameGlobal:setExpression(num)
    freeexpression = num
end

function GameGlobal:getExpression()
    return freeexpression
end

--设置vip的配置
local vipdata = {}
function GameGlobal:setVipData(data)
    vipdata = {}
    vipdata = data
end

function GameGlobal:getVipData()
    return vipdata
end

---remove agent && vip info  end---------------

--是不是第一次从登陆页面来
local loginComeIn = true
function GameGlobal:getLoginComeIn()
    return loginComeIn
end

function GameGlobal:setLoginComeIn(comein)
    loginComeIn = comein
end

-- 玩家当前账号注销状态
local accountMsgState = true
function GameGlobal:getAccountMsgState()
    return accountMsgState
end

function GameGlobal:setAccountMsgState(state)
    accountMsgState = state
end

--微信限额值
local wxPayLevelLmt = 100000
function GameGlobal:getWXPayLevelLmt()
    return wxPayLevelLmt
end

function GameGlobal:setWXPayLevelLmt(num)
    if num ~= 0 then
        wxPayLevelLmt = num
    end
end

------------------------------------------------------------------
---------------------------------------------------------------------------------
------------------------------------转运道具+听牌+洗牌卡 begin

-- 转运按钮‘免费’标签存在时间 0 一直显示
local zyFreeFlagTime = 0
function GameGlobal:getZyFreeFlagTime()
    return zyFreeFlagTime
end
--
-- 小结算界面洗牌气泡展示时间
local washQipaoTime = 0
function GameGlobal:getWashQipaoTime()
    return washQipaoTime
end
-- 小结算洗牌气泡文本
local washTipStr = "洗洗牌，发大财！"
function GameGlobal:getWashTipStr()
    return washTipStr
end
-- 小结算洗牌气泡当日可弹次数，-1表示不限制 0不显示 
local qipaoShowTimes = -1
function GameGlobal:getQipaoShowTimes()
    return qipaoShowTimes
end
-- 小结算洗牌气泡输多少次弹
local xipaikaqipao = 2
function GameGlobal:getWashCardLoseTimes()
    return xipaikaqipao
end

--金币场
-- 自动弹出转运表情 开关
-- 自动弹出转运圈数 1 4 6
-- 自动弹出转运概率 30%,30%,60%
local popZhuanYunRatios = "{\"gold\":[{\"1\":\"30\"},{\"1\":\"30\"},{\"1\":\"30\"}],\"other\":[{\"1\":\"30\"},{\"1\":\"30\"},{\"1\":\"30\"}]}"
function GameGlobal:getPopZhuanYunRatios()
    return g_gameConstant.popZhuanYunRatios
end
function GameGlobal:setPopZhuanYunRatios(data)
    g_gameConstant.popZhuanYunRatios = json.decode(data)
end



-- 当天转运表情自动弹出次数限制
local zyPopLimit = 0 -- zyPopLimit <= 0 不限制
function GameGlobal:getZyPopLimit()
    return zyPopLimit
end
-- 听牌转运自动弹出开关 
local zyPopSwitch = {["gold"] = true, ["vip"] = true, ["club"] = true }
function GameGlobal:isZyPopOpen(kind)
    return zyPopSwitch[kind]
end
-- 转运表情自动弹出后延时关闭时间
local zyPopTime = 0 -- zyPopTime<=0 不限时间
function GameGlobal:getZyPopTime()
    return zyPopTime
end
-- 自动弹出转运表情文本
local zyPopTipStr = "什么都刚刚好，让好运快快来~"
function GameGlobal:getZyPopTipStr()
    return zyPopTipStr
end

--[[ '道具使用引导需求'相关开关配置
PARA_ID 90001
PRO1  免费标签的显示时间  0 一直显示
PRO2  洗牌气泡展示秒数 -1 不显示 0 一直显示 0 显示时间 
VALUE_INT  洗牌气泡每天最多显示
PRO3  听牌1圈概率 客户端/100换算 
PRO4  听牌4圈概率 客户端/100换算
PRO5  听牌8圈概率 客户端/100换算
]]
function GameGlobal:setPropUseGuideParam(useGuideParam)
    zyFreeFlagTime = useGuideParam.pro_1
    washQipaoTime = useGuideParam.pro_2
    xipaikaqipao = useGuideParam.valueInt
    --popZhuanYunRatios = {useGuideParam.pro_3, useGuideParam.pro_4, useGuideParam.pro_5}
    g_gameGlobal:setPopZhuanYunRatios(useGuideParam.valueStr)
end
--[[    PARA_ID 90002
    PRO1   洗牌卡总显示次数    -1 不限制     
    VALUE_STR   配置洗牌卡文字
]]
function GameGlobal:setPropUseGuideParam2(useGuideParam)
    washTipStr = useGuideParam.valueStr or ""
    qipaoShowTimes = useGuideParam.pro_1
end

--[[    PARA_ID 90003
    PRO1   亲友圈开启听牌提示
    PRO2   包厢房开启听牌提示
    PRO3   金币放开启听牌提示
    VALUE_INT   转运表情次数限制  -1 不限制  
    PRO4   听牌时转运弹出秒数 -1 不限制
    VALUE_STR   听牌时转运道具提示文本
]]
function GameGlobal:setPropUseGuideParam3(useGuideParam)
    zyPopSwitch = {
        ["gold"] = useGuideParam.pro_3 == 1,
        ["vip"] = useGuideParam.pro_2 == 1,
        ["club"] = useGuideParam.pro_1 == 1
    }
    zyPopLimit = useGuideParam.valueInt
    zyPopTime = useGuideParam.pro_4
    zyPopTipStr = useGuideParam.valueStr or ""
end

--洗牌卡道具引导配置
local shuffleHintInfo = {}
shuffleHintInfo.hintStr = ""
shuffleHintInfo.hintShowTime = 10
function GameGlobal:setShuffleHintInfo(hintInfo)
    shuffleHintInfo.hintStr = hintInfo.valueStr
    shuffleHintInfo.hintShowTime = hintInfo.pro_1
end

function GameGlobal:getShuffleHintInfo()
    return shuffleHintInfo
end

--转运表情的气泡显示
local zhuanyun_icon_qipao = {}
function GameGlobal:setZhuanYunIconQipao(qipao)
    zhuanyun_icon_qipao = qipao
end

function GameGlobal:getZhuanYunIconQipao()
    return zhuanyun_icon_qipao
end

function GameGlobal:newLabel(params)
    local params = params or {}
    local text , fontColor, fontSize , fontName = params.text , params.fontColor  , params.fontSize , params.fontName
    local dimensions = params.dimensions
    local label = ccui.Text:create(text, "MatchAH/fonts/huakangyuanti.ttf", fontSize or 22)
    label:setColor( fontColor or cc.WHITE )
    return label
end

return GameGlobal   ō 