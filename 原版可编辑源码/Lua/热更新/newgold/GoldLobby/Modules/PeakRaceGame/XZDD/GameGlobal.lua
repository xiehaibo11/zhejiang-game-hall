local GameGlobal = class('GameGlobal')
GameGlobal.__index = GameGlobal
import(".PopMsgView")

local function adpateX(isLeft)
    local win_size = cc.Director:getInstance():getVisibleSize()
    if win_size.width / win_size.height >= 2 then
        if isLeft then
            return 45
        else
            return -45
        end
    end
    return 0
end

GameGlobal.Permission = {
    ACCESS_FINE_LOCATION = 6,
    RECORD_AUDIO = 8,
}

local function getDisplayWidth()
    return display.width
end

local function getDisplayHeight()
    return display.height
end

function GameGlobal:getDisplayWidth()
    return getDisplayWidth()
end

function GameGlobal:getDisplayHeight()
    return getDisplayHeight()
end

function GameGlobal:reloadSize()
    GameGlobal.tableWaitingHeadPosTbl = {
        { head = cc.p(61, 191), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.3) }, --自己
        { head = cc.p(getDisplayWidth() - 63, getDisplayHeight() * 0.563), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.7, display.cy) }, --下家
        { head = cc.p(getDisplayWidth() * 0.84, getDisplayHeight() - 90), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.7) }, --对家
        { head = cc.p(61, getDisplayHeight() * 0.58), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.3, display.cy) }, --上家
    }
    
    -- 打牌界面头像位置
    GameGlobal.gamePlayHeadPosTbl = {
        { head = cc.p(61, 191), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0) }, --自己
        { head = cc.p(getDisplayWidth() - 63, getDisplayHeight() * 0.563), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5) }, --下家
        { head = cc.p(getDisplayWidth() * 0.84, getDisplayHeight() - 84), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1) }, --对家
        { head = cc.p(61, getDisplayHeight() * 0.58), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5) }, --上家
    }
    
    -- 打牌界面头像位置
    GameGlobal.gamePlayHeadPosTbl_LYPDK = {
        { head = cc.p(75, 257 + 80), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0) }, --自己
        { head = cc.p(getDisplayWidth() - 74, getDisplayHeight() * 0.686), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5) }, --下家
        { head = cc.p(getDisplayWidth() * 0.784, getDisplayHeight() - 62), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1) }, --对家
        { head = cc.p(75, getDisplayHeight() * 0.686), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5) }, --上家
    }

    GameGlobal.headPosConfig = {
    default = {
        { head = cc.p(61 + adpateX(true), 191), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.385) }, --自己
        { head = cc.p(getDisplayWidth() - 63 + adpateX(), getDisplayHeight() * 0.563), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.7, display.cy) }, --
        { head = cc.p(getDisplayWidth() * 0.815, getDisplayHeight() - 90), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.7) }, --对
        { head = cc.p(61 + adpateX(true), getDisplayHeight() * 0.58), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.3, display.cy) }, --上家
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ] = {
        { head = cc.p(61 + adpateX(true), 300), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.385) }, --自己
        { head = cc.p(getDisplayWidth() - 63 + adpateX(), getDisplayHeight() * 0.65), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.7, display.cy) }, --
        { head = cc.p(getDisplayWidth() * 0.84, getDisplayHeight() - 90), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.7) }, --对
        { head = cc.p(61 + adpateX(true), getDisplayHeight() * 0.65), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.3, display.cy) }, --上家
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_LZ] = {
        { head = cc.p(61 + adpateX(true), 300), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.385) }, --自己
        { head = cc.p(getDisplayWidth() - 63 + adpateX(), getDisplayHeight() * 0.65), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.7, display.cy) }, --
        { head = cc.p(getDisplayWidth() * 0.84, getDisplayHeight() - 90), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 1), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.7) }, --对
        { head = cc.p(61 + adpateX(true), getDisplayHeight() * 0.65), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.3, display.cy) }, --上家
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_HDZ] = {
        { head = cc.p(100 + adpateX(true), 100), infoPercent = cc.p(1.4, 0.35), infoAnchor = cc.p(0, 0), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.385) }, --自己
        { head = cc.p(getDisplayWidth() - 100 + adpateX(), getDisplayHeight() * 0.6), infoPercent = cc.p(-0.3, -0.3), infoAnchor = cc.p(1, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.7, display.cy) }, --
        { head = cc.p(getDisplayWidth() * 0.35 + 50, getDisplayHeight() - 85), infoPercent = cc.p(-0.15, 0.08), infoAnchor = cc.p(1, 0.5), okMarkWPos = cc.p(display.cx, getDisplayHeight() * 0.7) }, --对
        { head = cc.p(100 + adpateX(true), getDisplayHeight() * 0.6), infoPercent = cc.p(1.3, -0.3), infoAnchor = cc.p(0, 0.5), okMarkWPos = cc.p(getDisplayWidth() * 0.3, display.cy) }, --上家
    },
}
end
------------------------------------------  Hown 新接口  ------------------------------------

GameGlobal.gameIDTbl = {
    [g_gameConstant.GAME_PLAY_RULE_SC_MZMJ]            = { 26, 27, 28, 29, 30, 31 }, --1：默认玩法被取消勾选，2：非默认玩法被勾选, 3：自动准备勾选，4：实时语音勾选，5：强制定位勾选，6：禁止同IP勾选
    [g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ]        = { 32, 33, 34, 35, 36, 37 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD]        = { 38, 39, 40, 41, 42, 43 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R]    = { 44, 45, 46, 47, 48, 49 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R]    = { 50, 51, 52, 53, 54, 55 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R]    = { 56, 57, 58, 59, 60, 61 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P]    = { 62, 63, 64, 65, 66, 67 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P1R]    = { 68, 69, 70, 71, 72, 73 },
    [g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF]        = { 74, 75, 76, 77, 78, 79 },
    [g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ]        = { 80, 81, 82, 83, 84, 85 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_QMXZ]        = { 86, 87, 88, 89, 90, 91 },
    [g_gameConstant.GAME_PLAY_RULE_SC_LSMJ]            = { 92, 93, 94, 95, 96, 97 },
    [g_gameConstant.GAME_PLAY_RULE_SC_YJ]            = { 98, 99, 100, 101, 102, 103 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK]        = { 104, 105, 106, 107, 108, 109 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P]        = { 110, 111, 112, 113, 114, 115 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_15Z]    = { 116, 117, 118, 119, 120, 121 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P_HT3]    = { 122, 123, 124, 125, 126, 127 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_CHONGZHOU] = { 128, 129, 130, 131, 132, 133 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_DEYANG]    = { 134, 135, 136, 137, 138, 139 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ]        = { 140, 141, 142, 143, 144, 147 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_LZ]        = { 146, 147, 148, 149, 150, 151 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_HDZ]    = { 152, 153, 154, 155, 156, 157 },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_2P]        = { 158, 159, 160, 161, 162, 163 },
    [g_gameConstant.GAME_PLAY_RULE_SCCP_DSS]        = { 164, 165, 166, 167, 168, 169 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDZ]        = { 294, 295, 296, 297, 298, 299 },
    [g_gameConstant.GAME_PLAY_RULE_SC_MJ_NANCHONG]    = { 300, 301, 302, 303, 304, 305 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XLCH]        = { 306, 308, 309, 310, 311, 312,},
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_7]        = { 313, 314, 315, 316, 317, 318 },
    [g_gameConstant.GAME_PLAY_RULE_SC_MJ_MIANYANG]    = { 319, 320, 321, 322, 323, 324 },
    [g_gameConstant.GAME_PLAY_RULE_SC_GAMJ]            = { 325, 326, 327, 328, 329, 330 },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER]    = { 331, 332, 333, 334, 335, 336 },
}

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

GameGlobal.httpGet = get

--==============================--
--desc:由于俱乐部所用字段都已经占满，故利用特殊字段来做托管延时的时间
--time:2019-08-13 02:04:26
--@miniRule:子玩法
--@return 托管时间
--==============================--
local tuoGuanTimeMiniConstant = 100000
local tuoGuanTimeMaxConstant = 200000
function GameGlobal:getTuoGuanTimeFromMiniRule(mainRule, miniRule)

    local tuoGuanTime = nil
    for k, v in pairs(miniRule or {}) do
        if v >= tuoGuanTimeMiniConstant and v < tuoGuanTimeMaxConstant then
            tuoGuanTime = v - tuoGuanTimeMiniConstant
            break
        end
    end

    if not tuoGuanTime then
        return g_GameTuoGuan[mainRule] or 0
    end
    return tuoGuanTime
end

function GameGlobal:getTuoGuanTimeAddConstant(miniRule, time)
    if not time or time <= 0 then
        return 0
    end

    local tuoGuanTime = time + tuoGuanTimeMiniConstant

    -- 剔除数据
    for k, v in pairs(miniRule or {}) do
        if v >= tuoGuanTimeMiniConstant and v < tuoGuanTimeMaxConstant then
            table.remove(miniRule, k)
            break
        end
    end

    table.insert(miniRule, tuoGuanTime)
end

function GameGlobal:productTuoGuanTimeNum(mainRule, tuoGuanTime)
    if not tuoGuanTime or tuoGuanTime <= 0 then
        return g_GameTuoGuan[mainRule] or 0
    end
    return tuoGuanTimeMiniConstant + tuoGuanTime
end

function GameGlobal:findChildWithName(node, name)
    -- body
    if not node then
        return nil;
    end

    local child = node:getChildByName(name);
    if child then
        return child;
    end

    local childs = node:getChildren();

    for i, v in ipairs(childs) do
        local c = v;
        if c then
            local f = self:findChildWithName(c, name);
            if f then
                return f;
            end
        end
    end

    return nil;
end

-- 获取对应游戏头像位置，若不存在，则加载默认配置
function GameGlobal:getHeadPosConfig()
    local gameIndex = self:getCurrGameKind()
    local config = GameGlobal.headPosConfig[gameIndex]
    if not config then
        config = GameGlobal.headPosConfig.default
    end
    return config
end

-- 获取PK默认设置
function GameGlobal:getPKCardType()
    local type = g_UserDataTable.pkCardType or 1
    return type
end

-- 
function GameGlobal:setPKCardType(type)
    g_UserDataTable.pkCardType = type or 1
end

local url = "https://ip.ttayouxi.com/?app=sichuan"

-- Iphone X 适配左右移动
function GameGlobal:adapteIponeXNode(node, isLeft)
    --iphone有刘海等手机适配---真机测试
    local pos = cc.p(0, 0)
    pos.x, pos.y = node:getPosition()

    local toPos = self:adapteIponeXPos(pos, isLeft)

    node:setPosition(toPos)
end

-- Iphone X 位置适配（传入的为世界坐标）
function GameGlobal:adapteIponeXPos(pos, isLeft)
    local position = pos
    local win_size = cc.Director:getInstance():getVisibleSize()
    if win_size.width / win_size.height >= 2 then
        if isLeft then
            position.x = position.x + 45
        else
            position.x = position.x - 45
        end
    end
    return position
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

local fileUtils = cc.FileUtils:getInstance()
--http图片本地缓存路径
function GameGlobal:getImgPath(url)
    if cc.FileUtils:getInstance():isFileExist(url) then
        return url
    end
    local fileDir = device.writablePath .. 'temp'
    if not fileUtils:isDirectoryExist(fileDir) then
        fileUtils:createDirectory(fileDir)
    end

    return fileDir .. device.directorySeparator .. self:getMD5(url .. "[urlImg2018]") .. ".png"
end


local function checkCnPlayerHeadUrl(url)
    if type(url) == "string" then
        if string.find(url, "http://file.sy.qingic.com/upload/") == 1 and string.find(url, "%.[a-zA-Z]+$") then
            url = url .. "@!90"
        end
    end
    return url
end

function GameGlobal:loadFrameUI(obj, kind)

    if kind == 4 then
        local bb = 1
    end

    if not tolua.isnull(obj) then
        local child = obj:getChildByName("headFrame")
        if child then
            if child.tag == kind then
                return
            else
                child:removeSelf()
            end
        end
        if kind ~= 0 then
            local head_path = string.format("shop/HeadImgType/head%s.png", kind)
            if cc.FileUtils:getInstance():isFileExist(head_path) then
                local frame_img = ccui.ImageView:create()
                frame_img:loadTexture(head_path, ccui.TextureResType.localType)
                local size = obj:getContentSize()
                local img_old_size = frame_img:getContentSize()
                local img_size = cc.size(size.width + 10, size.height + 10)
                local scale = img_size.width / img_old_size.width
                frame_img:setScale(scale)
                obj:addChild(frame_img)
                frame_img.tag = kind
                frame_img:setName("headFrame")
                frame_img:setPosition(size.width / 2, size.height / 2 + 2)
            end
        end
    end
end

-- isMyhead表示获取的是否是我的头像
local tmpHeadIdx = 0
function GameGlobal:requestHttpImage(frameKind, url, obj, isMyHeadImg, callback, maskFile, prior)
    if not frameKind then
        frameKind = 0
        if isMyHeadImg then
            frameKind = self:getHeadFrameType()
        end
    end
    if (not url) or (not obj) then
        return
    end

    url = checkCnPlayerHeadUrl(url)

    local findImg = false

    local repalceHeadImgFunc = function(imgPath)
        if not tolua.isnull(obj) and not tolua.isnull(obj:getParent()) then
            display.loadSpriteFrames("lobby/lobby0.plist", "lobby/lobby0.png")
            display.loadSpriteFrames("common/common0.plist", "common/common0.png")
            local tmp_img = self:createCircleSprite(imgPath, maskFile or "lobby/headbg_stencil.png", obj, isMyHeadImg, callback)
            self:loadFrameUI(tmp_img, frameKind)
        end
    end

    local failCallBack = function()
        if type(callback) == "function" then
            callback(-1)
        end
    end

    local fileName = ""
    if type(isMyHeadImg) == "boolean" and isMyHeadImg then

        local headImgFullFileName = cc.FileUtils:getInstance():getWritablePath() .. g_UserDataTable.headImgPng
        print("我的头像存放位置在" .. headImgFullFileName)
        -- 头像名在本地存在，所以直接裁剪
        fileName = headImgFullFileName
        if cc.FileUtils:getInstance():isFileExist(headImgFullFileName) then
            repalceHeadImgFunc(headImgFullFileName)
            return
        end
    else
        if cc.FileUtils:getInstance():isFileExist(url) then
            repalceHeadImgFunc(url)
            return
        else
            local md5 = g_gameGlobal:getMD5(tostring(url))
            fileName = "d_head_" .. tostring(md5) .. ".png"
        end
    end

    if fileName and fileName ~= "" then
        -- 本地没有头像，需要从网上下载
        g_gameGlobal.downloadRemoteImage(url, repalceHeadImgFunc, failCallBack, fileName, prior)
    end
end

--裁剪圆形头像
function GameGlobal:createCircleSprite(srcFile, maskFile, obj, isMyHeadImg, callback)
    local ok, src = pcall(function()
        return display.newSprite(srcFile)
    end)
    if not ok or not src then
        return
    end
    local mask = display.newSprite(display.newSpriteFrame(maskFile))

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
    if not tolua.isnull(obj) and not tolua.isnull(obj:getParent()) then
        obj:getParent():add(masked_sprite)
        masked_sprite:setTag(obj:getTag())
        masked_sprite:setName(obj:getName())
        masked_sprite:move(obj:getPosition())
        masked_sprite:setScale(obj:getScaleX())
        obj:removeSelf()
    end

    if callback then
        callback(masked_sprite)
    end
    return masked_sprite
end

function GameGlobal:requestHttpImageWithNoCutNoFrame(url, obj, isMyHeadImg, prior, failcallback)
    if (not url) or (not obj) then
        return
    end
    url = checkCnPlayerHeadUrl(url)
    local findImg = false

    local repalceHeadImgFunc = function(imgPath)
        if obj and not tolua.isnull(obj) then
            local width = obj:getContentSize().width
            local height = obj:getContentSize().height
            local initScaleX = obj:getScaleX()
            local initScaleY = obj:getScaleY()
            if iskindof(obj, "cc.Sprite") then
                obj:initWithFile(imgPath)
            elseif iskindof(obj, "ccui.ImageView") then
                obj:loadTexture(imgPath, ccui.TextureResType.localType)
            end
            --缩放到原来的尺寸
            obj:setScaleX(width * initScaleX / obj:getContentSize().width)
            obj:setScaleY(height * initScaleY / obj:getContentSize().height)
        end
    end

    local tfailCallBack = function()
        if type(failcallback) == "function" then
            failcallback(-1)
        end
    end

    local fileName = ""
    if type(isMyHeadImg) == "boolean" and isMyHeadImg then

        local headImgFullFileName = cc.FileUtils:getInstance():getWritablePath() .. g_UserDataTable.headImgPng
        print("我的头像存放位置在" .. headImgFullFileName)
        -- 头像名在本地存在，所以直接裁剪
        fileName = headImgFullFileName
        if cc.FileUtils:getInstance():isFileExist(headImgFullFileName) then
            repalceHeadImgFunc(headImgFullFileName)
            return
        end
    else
        if cc.FileUtils:getInstance():isFileExist(url) then
            repalceHeadImgFunc(url)
            return
        else
            local md5 = g_gameGlobal:getMD5(tostring(url))
            fileName = "d_head_" .. tostring(md5) .. ".png"
        end
    end

    if type(url) == "string" and string.len(url) > 0 then
        local findIdx = string.find(url, "/[%d]*$")
        if (findIdx) then
            local subStr = string.sub(url, 1, findIdx - 1)
            url = subStr .. "/96"
        end
    end

    if fileName and fileName ~= "" then
        -- 本地没有头像，需要从网上下载
        g_gameGlobal.downloadRemoteImage(url, repalceHeadImgFunc, tfailCallBack, fileName, prior)
    end
end

function GameGlobal:requestHttpImageWithNoCut(frameKind, url, obj, isMyHeadImg, prior, failcallback)
    if not frameKind then
        frameKind = 0
        if isMyHeadImg then
            frameKind = self:getHeadFrameType()
        end
    end

    if (not url) or (not obj) then
        return
    end
    url = checkCnPlayerHeadUrl(url)
    local findImg = false

    local repalceHeadImgFunc = function(imgPath)
        if obj and not tolua.isnull(obj) then
            local width = obj:getContentSize().width
            local height = obj:getContentSize().height
            local initScaleX = obj:getScaleX()
            local initScaleY = obj:getScaleY()
            if iskindof(obj, "cc.Sprite") then
                obj:initWithFile(imgPath)
            elseif iskindof(obj, "ccui.ImageView") then
                obj:loadTexture(imgPath, ccui.TextureResType.localType)
            end
            --缩放到原来的尺寸
            obj:setScaleX(width * initScaleX / obj:getContentSize().width)
            obj:setScaleY(height * initScaleY / obj:getContentSize().height)
            self:loadFrameUI(obj, frameKind)
        end
    end

    local tfailCallBack = function()
        if type(failcallback) == "function" then
            failcallback(-1)
        end
    end

    local fileName = ""
    if type(isMyHeadImg) == "boolean" and isMyHeadImg then

        local headImgFullFileName = cc.FileUtils:getInstance():getWritablePath() .. g_UserDataTable.headImgPng
        print("我的头像存放位置在" .. headImgFullFileName)
        -- 头像名在本地存在，所以直接裁剪
        fileName = headImgFullFileName
        if cc.FileUtils:getInstance():isFileExist(headImgFullFileName) then
            repalceHeadImgFunc(headImgFullFileName)
            return
        end
    else
        if cc.FileUtils:getInstance():isFileExist(url) then
            repalceHeadImgFunc(url)
            return
        else
            local md5 = g_gameGlobal:getMD5(tostring(url))
            fileName = "d_head_" .. tostring(md5) .. ".png"
        end
    end

    if type(url) == "string" and string.len(url) > 0 then
        local findIdx = string.find(url, "/[%d]*$")
        if (findIdx) then
            local subStr = string.sub(url, 1, findIdx - 1)
            url = subStr .. "/96"
        end
    end

    if fileName and fileName ~= "" then
        -- 本地没有头像，需要从网上下载
        g_gameGlobal.downloadRemoteImage(url, repalceHeadImgFunc, tfailCallBack, fileName, prior)
    end
end

function GameGlobal:upTipBarLabel(showInfo)
    NG.TipTool.showToast(showInfo)
end

function GameGlobal:playUpTipAtPos(tipInfo, position)
    -----
    local tipTxt = ccui.Text:create(tostring(tipInfo), "fonts/fzzhunyuanjianti.ttf", 28)
    tipTxt:setString(tostring(tipInfo))
    tipTxt:setTextColor(cc.c3b(203, 156, 59))
    display.getRunningScene():add(tipTxt, 901)
    tipTxt:setPosition(position)
    tipTxt:runAction(cc.Sequence:create(
    cc.MoveBy:create(1.2, cc.p(0, 100)),
    cc.CallFunc:create(function()
        tipTxt:removeSelf()
    end),
    nil))

    local netObj, eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    tipTxt:addChild(eventObj.new(eventType.GAME_GAMEOVER, function(event, msg)
        tipTxt:removeSelf()
    end))
end

-- 截取字符串，默认为5个字符，用于昵称
function GameGlobal:cutStringLength(info, len, noPoint)
    if info == nil then return "" end
    local keepLength = (len or 5) * 2
    local sourceLen = string.len(info)

    local spCharSingleOne = { --ascii字符 特殊的占一个汉字长度的符号
        [35] = true, --#
        [36] = true, --$
        [37] = true, --%
        [38] = true, --&
        [64] = true, --@
        [126] = true, --~
    }

    local count = 0
    local chineseCount = 0   --中文字符，字节码>127的为中文编码，每三个为1个汉字
    local letterCount = 0   --英文字符，记数的时候每2个算一个记数
    local mark = 0
    local cutIdx = 0
    while cutIdx < sourceLen do
        local curByte = string.byte(info, cutIdx + 1)

        if spCharSingleOne[curByte] then
            count = count + 2
            cutIdx = cutIdx + 1
        elseif curByte > 0 and curByte <= 127 then
            count = count + 1
            cutIdx = cutIdx + 1
        elseif curByte > 127 then
            count = count + 2
            if curByte >= 192 and curByte <= 223 then
                cutIdx = cutIdx + 2
            elseif curByte >= 224 and curByte <= 239 then
                cutIdx = cutIdx + 3
            elseif curByte >= 240 and curByte <= 247 then
                cutIdx = cutIdx + 4
            elseif curByte >= 248 and curByte <= 251 then
                cutIdx = cutIdx + 5
            else
                cutIdx = cutIdx + 6
            end
        end
        if cutIdx >= sourceLen then
            cutIdx = sourceLen
            break;
        end
        if count >= keepLength then
            break;
        end
    end

    local cutStr = ""
    if cutIdx >= sourceLen then
        cutStr = info
    else
        cutStr = string.sub(info, 1, cutIdx)
        if not noPoint then
            cutStr = cutStr .. ".."
        end
    end
    return cutStr
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

function GameGlobal:getWanfaName(mainwanfa)
    if not mainwanfa or not g_WanfaDescTable[mainwanfa] then
        return
    end
    return g_WanfaDescTable[mainwanfa][mainwanfa][1]
end
-- 获取玩法 入参数组
-- 第一个参数表示主玩法值
-- 第二个参数表示子玩法值
-- 第三个参数表示玩法值之间的分隔符，如果没有，以空格代替
-- 第四个参数表示是否获取最大人数
-- 第五个参数表示是否获取房费均摊
-- 第六个参数表示是否获取最大局数
-- 第七个参数表示是否隐藏主玩法
-- 第八个参数表示是否显示实时语音 
-- 第九个参数表示是否显示禁止互动
function GameGlobal:parseWanfaList(mainwanfa, wanfaList, fengefu, bGetMaxPlayerNum, bGetFangFeiJunTan, bGetMaxJuShu, hideMainWanfaStr, bRealTimeVoice, bNoInteraction, bNoVoice, bNoText)
    if not wanfaList or not mainwanfa or not g_WanfaDescTable[mainwanfa] then
        return
    end
    fengefu = fengefu or " "
    local fgf = fengefu or " "

    local wanfa = ""
    local tmpWanfalist = clone(wanfaList)

    --处理一下服务器多发问题
    table.sort(tmpWanfalist, function(a, b)
        return a < b
    end)
    local newTable = {}
    for i, v in pairs(tmpWanfalist) do
        if not newTable[#newTable] or newTable[#newTable] ~= v then
            newTable[#newTable + 1] = v
        end
    end
    tmpWanfalist = newTable

    for i, v in pairs(tmpWanfalist) do
        if v and v >= 10100 and v <= 12000 then
            g_gameGlobal:setNotEnterDistance(v)
        end
    end

    if #tmpWanfalist > 0 then
        for i, oneWfCfgTable in ipairs(g_WanfaCreateTable) do
            if #oneWfCfgTable > 0 and #oneWfCfgTable[1] > 0 and oneWfCfgTable[1][1][1] == mainwanfa then
                for idx, oneTab in ipairs(oneWfCfgTable) do
                    if oneTab.hotUpdateAddMustOneItems and (#oneWfCfgTable == 1 or (oneTab[2] and tmpWanfalist[1] == oneTab[2][1])) then
                        g_gameGlobal:checkMustOneGameMinor(oneTab.hotUpdateAddMustOneItems, tmpWanfalist)
                        break
                    end
                end
            end
        end
    end

    if not hideMainWanfaStr then
        table.insert(tmpWanfalist, 1, mainwanfa)
    end

    if g_gameGlobal:isAutoReadyInRule(mainwanfa) then

        -- 跑得快自动开房选项值，取反
        local ruleFound = false
        for k, v in ipairs(tmpWanfalist) do
            if v == g_gameConstant.GAME_SUB_RULE_AUTO_READY then
                table.remove(tmpWanfalist, k)
                ruleFound = true
                break
            end
        end

        -- 当解析为主玩法时，不能取反
        if not ruleFound and next(wanfaList) ~= nil then
            table.insert(tmpWanfalist, g_gameConstant.GAME_SUB_RULE_AUTO_READY)
        end

    end

    --绵阳麻将起胡不限时先去掉
    local myqhRule = false
    if mainwanfa == g_gameConstant.GAME_PLAY_RULE_SC_MJ_MIANYANG then
        for k, v in ipairs(tmpWanfalist) do
            if v == g_gameConstant.GAME_SUB_RULE_MYMJ_QH_FAN_0 then
                table.remove(tmpWanfalist, k)
                myqhRule = true
                break
            end
        end
    end

    -- 两人麻将  首局随机庄
    if mainwanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P then

        local ruleFound = false
        for k, v in ipairs(tmpWanfalist) do
            if v == g_gameConstant.GAME_SUB_RULE_1ST_FANGZHU_ZHUANG
            or v == g_gameConstant.GAME_SUB_RULE_1ST_RAND_ZHUANG then
                ruleFound = true
                break
            end
        end

        -- 当解析为主玩法时，不能取反
        if not ruleFound and next(wanfaList) ~= nil then
            table.insert(tmpWanfalist, g_gameConstant.GAME_SUB_RULE_1ST_RAND_ZHUANG)
        end

        -- 血战到底放牛过庄
    elseif mainwanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD then

        local ruleFound = false
        for k, v in ipairs(tmpWanfalist) do
            if v == g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU_NOT
            or v == g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU then
                ruleFound = true
                break
            end
        end

        -- 当解析为主玩法时，不能取反
        if not ruleFound and next(wanfaList) ~= nil then
            table.insert(tmpWanfalist, g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU)
        end
    end


    if mainwanfa == g_gameConstant.GAME_PLAY_RULE_SCPK_PDK then
        for i, v in ipairs(tmpWanfalist) do

            if g_WanfaDescTable[mainwanfa][v] and g_WanfaDescTable[mainwanfa][v][1] and string.len(g_WanfaDescTable[mainwanfa][v][1]) > 0 then
                wanfa = wanfa .. g_WanfaDescTable[mainwanfa][v][1] .. fgf
            else
                local des = g_gameGlobal:GetExtRuleDesc(v)
                if des and des[1] and string.len(des[1]) > 0 then
                    wanfa = wanfa .. des[1] .. fgf
                elseif v > g_gameConstant.VALUE_LSMJ_DIFENG_BASE and v <= g_gameConstant.VALUE_LSMJ_DIFENG_BASE + 100 then
                    wanfa = wanfa .. "底分" .. tostring(v - g_gameConstant.VALUE_LSMJ_DIFENG_BASE) .. "分" .. fgf
                elseif v >= g_gameConstant.GAME_SUB_RULE_DIFEN_10Z_PDK and v < g_gameConstant.GAME_SUB_RULE_DIFEN_10Z_PDK + g_gameConstant.CONST_DI_FEN_RANGE_PDK_10Z then
                    wanfa = wanfa .. "底分" .. tostring(v - g_gameConstant.GAME_SUB_RULE_DIFEN_10Z_PDK + 1) .. "分" .. fgf
                end
            end
        end

    else
        for i, v in ipairs(tmpWanfalist) do
            if g_WanfaDescTable[mainwanfa][v] and g_WanfaDescTable[mainwanfa][v][1] and string.len(g_WanfaDescTable[mainwanfa][v][1]) > 0 then
                --广安麻将打立结束分需要计算
                if mainwanfa == g_gameConstant.GAME_PLAY_RULE_SC_GAMJ and (v == g_gameConstant.GAME_SUB_RULE_MJ_DLJS_SCORE_1 or v == g_gameConstant.GAME_SUB_RULE_MJ_DLJS_SCORE_2) then
                    --wanfa = wanfa .. g_WanfaDescTable[mainwanfa][v][1] .. fgf
                    local initScore = tonumber(g_WanfaDescTable[mainwanfa][v][1])
                    local chong = 1
                    local di = 1
                    for m, n in ipairs(tmpWanfalist) do
                        if n == g_gameConstant.GAME_SUB_RULE_MJ_HALF_FIVE then
                            chong = 2.5
                        elseif n == g_gameConstant.GAME_SUB_RULE_MJ_FULL_FIVE then
                            chong = 5
                        elseif n > g_gameConstant.GAME_SUB_RULE_MJ_GA_DIFEN and n < g_gameConstant.GAME_SUB_RULE_MJ_GA_DIFEN + g_gameConstant.CONST_DI_FEN_RANGE_PDK_10Z + 1 then
                            di = n - g_gameConstant.GAME_SUB_RULE_MJ_GA_DIFEN
                        end
                    end
                    wanfa = wanfa .. (initScore * chong * di) .. "分" .. fgf
                else
                    wanfa = wanfa .. g_WanfaDescTable[mainwanfa][v][1] .. fgf
                end
            else
                local des = g_gameGlobal:GetExtRuleDesc(v)
                if des and des[1] and string.len(des[1]) > 0 then
                    wanfa = wanfa .. des[1] .. fgf
                elseif v > g_gameConstant.VALUE_LSMJ_DIFENG_BASE and v <= g_gameConstant.VALUE_LSMJ_DIFENG_BASE + 100 then
                    wanfa = wanfa .. "底分" .. tostring(v - g_gameConstant.VALUE_LSMJ_DIFENG_BASE) .. "分" .. fgf
                    -- 跑得快10张底分
                elseif v >= g_gameConstant.GAME_SUB_RULE_DIFEN_10Z_PDK and v < g_gameConstant.GAME_SUB_RULE_DIFEN_10Z_PDK + g_gameConstant.CONST_DI_FEN_RANGE_PDK_10Z then
                    wanfa = wanfa .. "底分" .. tostring(v - g_gameConstant.GAME_SUB_RULE_DIFEN_10Z_PDK + 1) .. "分" .. fgf
                elseif v > g_gameConstant.GAME_SUB_RULE_MJ_GA_DIFEN and v < g_gameConstant.GAME_SUB_RULE_MJ_GA_DIFEN + g_gameConstant.CONST_DI_FEN_RANGE_PDK_10Z + 1 then
                    wanfa = wanfa .. "底分" .. tostring(v - g_gameConstant.GAME_SUB_RULE_MJ_GA_DIFEN) .. "分" .. fgf
                end
            end
        end
    end

    -----
    -- 三不带规则追加
    if mainwanfa == g_gameConstant.GAME_PLAY_RULE_SCPK_PDK
    or mainwanfa == g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P
    or mainwanfa == g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P_HT3
    then
        local cannotSanbudaiFound = false
        for i, v in ipairs(tmpWanfalist) do
            if g_gameConstant.GAME_SUB_RULE_CANNOT_SAN_BU_DAI == v then
                cannotSanbudaiFound = true
                break
            end
        end

        if next(wanfaList) ~= nil and not cannotSanbudaiFound then
            wanfa = wanfa .. "可三不带" .. fgf
        end
    end

    -----
    if string.len(wanfa) > 0 then
        wanfa = string.sub(wanfa, 1, -1 - string.len(fengefu))   --去掉结尾的分隔符
    end

    if myqhRule then
        --绵阳麻将2人强制一番起胡
        if g_gameGlobal:getMaxPlayerNum() == 2 then
            wanfa = wanfa .. fengefu .. "1番起胡"
        end
    end

    if bGetMaxPlayerNum then
        -- 获取最大人数
        if g_gameGlobal:getMaxPlayerNum() > 0 then
            wanfa = wanfa .. fengefu .. g_gameGlobal:getMaxPlayerNum() .. "人"
        end
    end

    if bGetFangFeiJunTan then
        -- 房费均摊
        if g_gameGlobal:getFangFeiJunTan() == 1 then
            wanfa = wanfa .. fengefu .. "房费均摊"
        end
    end

    local isHaveTuoGuan = false
    for k, v in pairs(tmpWanfalist or {}) do
        if v == g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_QUAN_TUO or v == g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO then
            isHaveTuoGuan = true
            break
        end
    end

    -- for k, v in ipairs(tmpWanfalist or {}) do 
    --     if v > g_gameConstant.GAME_PLAY_RULE_SC_SUB_RULE_UC_FEN and v <= g_gameConstant.GAME_PLAY_RULE_SC_SUB_RULE_MAX_FEN then 
    --         local fen = v - g_gameConstant.GAME_PLAY_RULE_SC_SUB_RULE_UC_FEN 
    --         wanfa = wanfa .. fengefu .. fen .." 分"
    --     end 
    -- end 

    if isHaveTuoGuan then
        local t_tuoGuanTime = self:getTuoGuanTimeFromMiniRule(mainwanfa, tmpWanfalist)
        wanfa = wanfa .. fengefu .. "超" .. tostring(t_tuoGuanTime) .. "秒托管"
    end

    if bRealTimeVoice then
        for i, v in ipairs(wanfaList) do
            if v == g_gameConstant.GAME_SUB_RULE_LOCAL_REAL_TIME_SPEECH then
                wanfa = wanfa .. fengefu .. "实时语音"
            end
        end
    end

    if bNoInteraction then
        for i, v in ipairs(wanfaList) do
            if v == g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_NO_INTERACTION then
                wanfa = wanfa .. fengefu .. "禁止互动"
            end
        end
    end

    if bNoVoice then
        for i, v in ipairs(wanfaList) do
            if v == g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_VOICE then
                wanfa = wanfa .. fengefu .. "禁止语音"
            end
        end
    end

    if bNoText then
        for i, v in ipairs(wanfaList) do
            if v == g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_TEXT then
                wanfa = wanfa .. fengefu .. "禁止文字"
            end
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

function GameGlobal:BuffToInt(list)
    local result = {}
    for k, v in ipairs(list or {}) do
        local value = v
        if v > 200 then
            value = -(256 - v)
        end

        table.insert(result, value)
    end
    return result
end


function GameGlobal:isHasMinorRule(wanfa, gameRule)

    if type(wanfa) == "table" then
        for i, v in ipairs(wanfa or {}) do
            if v == gameRule then
                return true
            end
        end
    end

    return false
end

function GameGlobal:GetExtRuleDesc(ruleKey)
    -- body
    if ruleKey then
        local tmp = {
            [g_gameConstant.GAME_SUB_RULE_LOCAL_HU_PAI_TISHI] = { "胡牌提示", "勾选每次出牌均提示可胡的牌，不勾选则只在第一次显示胡牌提示" },
            [g_gameConstant.GAME_SUB_RULE_LOCAL_HU_CLOSE_PAI_TISHI] = { "关闭胡牌提示", "勾选每次出牌均提示可胡的牌，不勾选则只在第一次显示胡牌提示" },
            [g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_LOCATION] = { "强制定位", "" },
            [g_gameConstant.GAME_SUB_RULE_LOCAL_SAME_IP_LIMIT] = { "同网址禁入", "" },
            [g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_LESS_300_LOCATION] = {(g_gameGlobal:getNotEnterDistance() - 10000) .. "米内禁入", "" },
        }
        return tmp[ruleKey]
    end
end

local function FileCardNodeFunc(node)
    if node then
        function node:sameSize(size)
            local s = self:getContentSize()
            self:setScaleX(size.width / s.width)
            self:setScaleY(size.height / s.height)
        end

        local childrenName = {
            "CardShdow",
            "CardImg",
        }
        function node:hideCardImg(value)
            for i, v in ipairs(childrenName) do
                if self:getChildByName(v) then
                    self:getChildByName(v):setVisible(not value)
                end
            end
        end

        node._setGlobalZOrder = node.setGlobalZOrder
        function node:setGlobalZOrder(order)
            self:_setGlobalZOrder(order)
            for i, v in ipairs(childrenName) do
                local t = self:getChildByName(v)
                if t then
                    t:setGlobalZOrder(order)
                end
            end
        end

        function node:getRealBoundingBox()
            if self:getChildByName("CardImg") then
                local bbx = self:getChildByName("CardImg"):getBoundingBox()
                local sx = self:getScaleX()
                local sy = self:getScaleY()
                return cc.rect(bbx.x * sx, bbx.y * sy, bbx.width * sx, bbx.height * sy)
            end

            return self:getBoundingBox()
        end
    end

    return node
end

function GameGlobal:getNormalCard(value)
    display.loadSpriteFrames(
    string.format("paimian/paimian%d.plist", g_UserDataTable.mjCardType),
    string.format("paimian/paimian%d.png", g_UserDataTable.mjCardType)
    )
    local cardName
    if value == 57 then
        cardName = "tbgs_1.png"
    elseif value == g_gameConstant.XZ_MAH_JOKERVAL then
        cardName = "xzjokerp1b0.png"
    else
        local cardType = bit._and(value * (2 ^ (-4)), g_gameConstant.MAHJONG_CODE_COLOR_MASK2)
        local cardValue = bit._and(value, 15)

        cardName = string.format("p1b%d_%d.png", cardType, cardValue)
    end

    local node = ccui.Widget:create()
    node:setTag(value)
    node:setAnchorPoint(cc.p(0.5, 0.5))
    node:setCascadeOpacityEnabled(true)

    local imagView
    if cardName then
        cardName = string.format("paimian/type%d/%s", g_UserDataTable.mjCardType, cardName)
        local imagView = ccui.ImageView:create("Match/" .. cardName, ccui.TextureResType.plistType)
        :setAnchorPoint(cc.p(0, 0))
        imagView:setName("CardImg")

        node:setContentSize(imagView:getContentSize())
        node:addChild(imagView)


        node.setColor = function(self, ...)
            imagView:setColor(...)
        end
        node.getColor = function(self)
            return imagView:getColor()
        end

        -- 用新牌值 刷新此牌
        node.updateValue = function(self, newValue)
            self:setTag(newValue)

            local srcName
            if newValue == 57 then
                srcName = "tbgs_1.png"
            else
                local cardType = bit._and(newValue * (2 ^ (-4)), g_gameConstant.MAHJONG_CODE_COLOR_MASK2)
                local cardValue = bit._and(newValue, 15)

                srcName = string.format("p1b%d_%d.png", cardType, cardValue)
            end

            srcName = string.format("paimian/type%d/%s", g_UserDataTable.mjCardType, srcName)
            imagView:loadTexture("Match/" .. srcName, ccui.TextureResType.plistType)
        end
    end

    node.getCardType = function()
        return g_gameConstant.CARD_TYPE_NORMAL
    end

    FileCardNodeFunc(node)

    return node
end

function GameGlobal:getNormalBackCard(localPos)
    local cardName = string.format("tbgs_%d.png", localPos)

    local node = ccui.Widget:create()
    node:setTag(-1)
    node:setAnchorPoint(cc.p(0.5, 0.5))
    node:setCascadeOpacityEnabled(true)

    local imagView
    if cardName then
        cardName = string.format("paimian/type%d/%s", g_UserDataTable.mjCardType, cardName)
        local imagView = ccui.ImageView:create("Match/" .. cardName, ccui.TextureResType.plistType)
        :setAnchorPoint(cc.p(0, 0))
        imagView:setName("CardImg")
        imagView:setPosition(cc.pMul(g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][localPos].handBRect, -1))

        local handBRect = g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][localPos].handBRect

        if localPos == 1 or localPos == 3 then
            local origBoundBox = imagView:getBoundingBox()
            local scaleX = handBRect.width / origBoundBox.width
            imagView:setScale(scaleX)
        end

        node:setContentSize(handBRect)
        node:addChild(imagView)
    end

    node.getCardType = function()
        return g_gameConstant.CARD_TYPE_NORMAL_BACK
    end

    FileCardNodeFunc(node)
    return node
end

function GameGlobal:getLaydownCard(value, posState)
    display.loadSpriteFrames(
    string.format("paimian/paimian%d.plist", g_UserDataTable.mjCardType),
    string.format("paimian/paimian%d.png", g_UserDataTable.mjCardType)
    )
    posState = posState == 3 and 1 or posState
    local constantCfg = g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][posState]
    local strMap = {
        [1] = {
            paibei = "tdbgs_1.png",
            cardFormatStr = "p%ss%d_%d.png",
        },
        [2] = {
            paibei = "tdbgs_2.png",
            cardFormatStr = "p%ss%d_%d.png",
        },
        [3] = {
            paibei = "tdbgs_3.png",
            cardFormatStr = "p%ss%d_%d.png",
        },
        [4] = {
            paibei = "tdbgs_4.png",
            cardFormatStr = "p%ss%d_%d.png",
        }
    }
    local cardName
    if posState and strMap[posState] then
        if value == 57 then
            cardName = strMap[posState].paibei
        elseif value == g_gameConstant.XZ_MAH_JOKERVAL then
            local jokerXZStr = "xzjoker_p%d.png"
            cardName = string.format(jokerXZStr, posState)
        else
            local cardType = bit._and(value * (2 ^ (-4)), g_gameConstant.MAHJONG_CODE_COLOR_MASK2)
            local cardValue = bit._and(value, 15)

            if strMap[posState].cardFormatStr then
                cardName = string.format(strMap[posState].cardFormatStr, posState, cardType, cardValue)
            end
        end
    end

    local node = ccui.Widget:create()
    node:setTag(value)
    node:setAnchorPoint(cc.p(0.5, 0.5))
    node:setCascadeOpacityEnabled(true)


    if cardName then
        if type(constantCfg.laydownShdow) == "table" and constantCfg.laydownShdow.img then
            local sp = ccui.ImageView:create(string.format("Match/" .. "paimian/type%d/%s", g_UserDataTable.mjCardType, constantCfg.laydownShdow.img), ccui.TextureResType.plistType)
            if sp then
                node:addChild(sp, -1)
                sp:setName("CardShdow")
                if constantCfg.laydownShdow.pos then
                    sp:move(constantCfg.laydownShdow.pos)
                end

                node.setShadowVisible = function(visible)
                    if tolua.isnull(sp) then
                        return
                    end

                    sp:setVisible(visible)
                end
            end
        end

        cardName = string.format("paimian/type%d/%s", g_UserDataTable.mjCardType, cardName)
        local imagView = ccui.ImageView:create("Match/" .. cardName, ccui.TextureResType.plistType)
        :setAnchorPoint(cc.p(0, 0))

        imagView:setName("CardImg")
        imagView:setPosition(cc.pMul(constantCfg.laydownRect, -1))

        node:setContentSize(constantCfg.laydownRect)
        node:addChild(imagView)

        node.setColor = function(self, ...)
            imagView:setColor(...)
        end
        node.getColor = function(self)
            return imagView:getColor()
        end

        -- 用新牌值 刷新此牌
        node.updateValue = function(self, newValue)
            self:setTag(newValue)

            local srcName
            if newValue == 57 then
                srcName = strMap[posState].paibei
            else
                local cardType = bit._and(newValue * (2 ^ (-4)), g_gameConstant.MAHJONG_CODE_COLOR_MASK2)
                local cardValue = bit._and(newValue, 15)

                if strMap[posState].cardFormatStr then
                    srcName = string.format(strMap[posState].cardFormatStr, posState, cardType, cardValue)
                end
            end

            srcName = string.format("paimian/type%d/%s", g_UserDataTable.mjCardType, srcName)
            imagView:loadTexture("Match/" .. srcName, ccui.TextureResType.plistType)
        end
    end

    node.getCardType = function()
        return g_gameConstant.CARD_TYPE_LAYDOWN
    end

    FileCardNodeFunc(node)

    return node
end

-- 根据座位号获取实际座位
function GameGlobal:getTablePlayerPosWithTablePos(tablePos)
    local posState = 1    --1表示自己，2表示下家，3表示对家，4表示上家
    local deltaPos = g_gameGlobal:getMyTablePos() - tablePos
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

function GameGlobal:getServerTablePosByLocalPos(localPos)
    local serverPos = g_gameGlobal:getMyTablePos()    --0 - 3
    local deltaPos = localPos - 1
    if g_gameGlobal:getMaxPlayerNum() == 2 then
        if deltaPos ~= 0 then
            serverPos = (serverPos + 1) % 2
        end
    elseif g_gameGlobal:getMaxPlayerNum() == 3 then
        if deltaPos == 3 then
            -- 上家
            serverPos = (serverPos + 2) % 3
        elseif deltaPos == 1 then
            -- 下家
            serverPos = (serverPos + 1) % 3
        end
    elseif g_gameGlobal:getMaxPlayerNum() == 4 then
        serverPos = (serverPos + deltaPos) % 4
    end
    return serverPos
end

-- 是否癞子
function GameGlobal:isLaiZi(card, ignoreHide)
    --新方案 暂注释
    if g_gameGlobal:getCurrentLaiziHide() and not ignoreHide then
        return false
    end
    for i, v in ipairs(g_gameGlobal:getCurrentLaiziList()) do
        if v == card then
            return true
        end
    end
    return false
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
    g_gameGlobal:setFangFeiJunTan(0)
    g_gameGlobal:setCurrentLaiziList({})
    g_gameGlobal:setCurrentHuaList({})
end

-- 返回大厅
function GameGlobal:backToLobby(notLeaveTable)
    NG.goldLobby:getModule("PeakRace"):reqPeakDetailList()
    local playerGameOpertaionMsg = {}
    playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_PLAYER_LEFT_TABLE
    if notLeaveTable then
        playerGameOpertaionMsg.unused0 = 1
    end
    if not g_gameGlobal:getIsPlayingGameLog() then
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    end

    g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_GLOBAL_CONFIGS, {})

    g_gameGlobal:switchLobbyScene()
    g_gameGlobal:setIsInPaiZhuoGold(false)
    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME)
    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_POKER_START_GAME)
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

-- 系统配置
local isGetH5GameInfo = false
local systemConfigParaTable = {}
function GameGlobal:getSystemConfigParaTable()
    return systemConfigParaTable
end

--设置房间类型
local CurrentvipRoomType = 0
function GameGlobal:setCurrentvipRoomType(roomType)
    CurrentvipRoomType = roomType
end
function GameGlobal:getCurrentvipRoomType()
    return CurrentvipRoomType
end

local currentWanFa = {}         -- 设置当前玩法
function GameGlobal:setCurrentWanFa(gameIndex, ruleList)
    currentWanFa.wanfa = gameIndex
    currentWanFa.ruleList = ruleList
end

function GameGlobal:getCurrentWanFa()
    return currentWanFa
end

-- 规则是否在列表中
function GameGlobal:isRuleInRuleList(rule)
    if not currentWanFa or not currentWanFa.ruleList then
        return false
    end

    for k, v in ipairs(currentWanFa.ruleList) do
        if v == rule then
            return true
        end
    end

    return false
end

-- Hown 设置当前游戏模式
local currGameKind = 0
function GameGlobal:setCurrGameKind(kind)
    currGameKind = kind == 0 and 1 or kind
end
function GameGlobal:getCurrGameKind()
    return currGameKind
end

-- 返利后台
local agentBindReward = 0
function GameGlobal:setAgentBindReward(value)
    agentBindReward = value
end
function GameGlobal:getAgentBindReward()
    return agentBindReward
end

-- 返利后台
local agentMgrUrl = ""
function GameGlobal:setAgentUrl(agentUrl)
    agentMgrUrl = agentUrl
end
function GameGlobal:getAgentUrl()
    return (agentMgrUrl and agentMgrUrl ~= "") and agentMgrUrl or g_AgentUrl
end

-- 二维码邀请绑定URL 
local agentInviteUrl = ""
function GameGlobal:setAgentInviteUrl(agentIvtUrl)
    agentInviteUrl = agentIvtUrl
end
function GameGlobal:getAgentInviteUrl()
    return (agentInviteUrl and agentInviteUrl ~= "") and agentInviteUrl or g_AgentInviteUrl
end

--大厅活动图
local serverActivityNameTb = {}
function GameGlobal:setServerActivityNameTable(tb)
    if type(tb) ~= "table" then
        serverActivityNameTb = {}
    else
        serverActivityNameTb = tb
    end
end
function GameGlobal:getServerActivityNameTable()
    return serverActivityNameTb
end

-- 创建房间要扣的钻数
local vipCostInfoTable = {}
function GameGlobal:setvipCostInfoTable(tab)
    vipCostInfoTable = {}

    if type(tab) == "table" then
        for k, info in pairs(tab) do
            table.sort(info, function(v1, v2)
                return v1.jushuSet < v2.jushuSet
            end)

            local jushuSet = 0
            local diamondCost = 0
            local diamondCostAA = 0
            local limitScore = {}   -- 预防超过255分，所以不与或了

            for i, v in ipairs(info) do
                jushuSet = bit._or((v.jushuSet * (2 ^ ((i - 1) * 8))), jushuSet)
                diamondCost = bit._or((v.diamondCost * (2 ^ ((i - 1) * 8))), diamondCost)
                diamondCostAA = bit._or((v.diamondCostAA * (2 ^ ((i - 1) * 8))), diamondCostAA)
                table.insert(limitScore, v.limitScore)
            end

            vipCostInfoTable[k] = { jushuSet = jushuSet, diamondCost = diamondCost, diamondCostAA = diamondCostAA, limitScore = limitScore }
        end
    end
end
function GameGlobal:getvipCostInfoTable()
    return vipCostInfoTable
end
function GameGlobal:getVipCostInfo(subGameID)

    if subGameID and vipCostInfoTable[subGameID] then
        return vipCostInfoTable[subGameID]
    else
        return {
            jushuSet = 0,
            diamondCost = 0,
            diamondCostAA = 0,
        }
    end
end

-- 设置个人信息
local myPlayerInfo = {}
function GameGlobal:setMyselfInfo(player)
    myPlayerInfo = clone(player)
end
function GameGlobal:getMyselfInfo()
    function myPlayerInfo:isAgent()
        return self.agentLevel == 21
    end
    function myPlayerInfo:isPreAgent()
        return self.agentLevel == 22
    end
    function myPlayerInfo:isOperator()
        return self.agentLevel == 20
    end
    function myPlayerInfo:isBusiness()
        return self.agentLevel == 19
    end
    return myPlayerInfo
end

-- howns 2020-4-14 更新头像样式信息
function GameGlobal:setHeadFrameType(frameType)
    local isChange = myPlayerInfo.headImg ~= frameType
    myPlayerInfo.headImg = frameType or myPlayerInfo.headImg
    return isChange
end

-- howns 2020-4-14 获取头像样式以及头像url
function GameGlobal:getHeadFrameType()
    return myPlayerInfo.headImg or g_gameConstant.DAOJU_HEAD_FRAME_TYPE_INIT
end

function GameGlobal:isForbidenAgentFunc()
    return g_gameGlobal:getMyselfInfo().playerType == 2
end

-- 用户下载提示框
local isDownGameTip = false
function GameGlobal:setShowGameDownTip(isDown)
    isDownGameTip = isDown
end

function GameGlobal:getShowGameDownTip()
    return isDownGameTip
end

local DownGameStr = ""
function GameGlobal:setShowGameDownStr(str)
    DownGameStr = str or ""
end

function GameGlobal:getShowGameDownStr(...)
    return DownGameStr
end

-- 是否是游客登录
local isGuest = false
function GameGlobal:isGuestLogin()
    return isGuest
end
function GameGlobal:setIsGuestLogin(loginType)
    isGuest = loginType or false
end

-- 游戏场景是否存在
local gameScene = nil
function GameGlobal:setGameScene(scene)
    gameScene = scene
end
function GameGlobal:getGameScene()
    return gameScene
end

function GameGlobal:getGameBase()
    return gameScene and gameScene:getChildByName("gameBase")
end

-- 设置最大人数
local maxPlayerNum = 0
function GameGlobal:setMaxPlayerNum(playerNum)
    maxPlayerNum = playerNum
end
function GameGlobal:getMaxPlayerNum()
    return maxPlayerNum
end

-- 设置当前癞子 数组
local currentLaiziList = {}
local currentLaiziHide = false

function GameGlobal:setCurrentLaiziList(laiziList, hideLaizi)
    currentLaiziList = laiziList and laiziList or {}

    if hideLaizi == nil then hideLaizi = false end
    currentLaiziHide = hideLaizi
end

function GameGlobal:getCurrentLaiziList()
    return currentLaiziList
end

function GameGlobal:getCurrentLaiziHide()
    return currentLaiziHide
end

-- 设置癞子是否可打出
local isLaiZiCouldPutOut = 0
function GameGlobal:setLaiZiCouldPutOut(laiziCouldPutOut)
    isLaiZiCouldPutOut = laiziCouldPutOut
end
--true: 可以 false：不可以
function GameGlobal:isLaiZiCouldPutOut()
    return isLaiZiCouldPutOut ~= 0
end

-- 设置当前哪些牌是花牌 数组
local currentHuaList = {}
function GameGlobal:setCurrentHuaList(huaList)
    currentHuaList = huaList and huaList or {}
end
function GameGlobal:getCurrentHuaList()
    return currentHuaList
end

-- 是否花牌
function GameGlobal:isHuaCard(card)
    for i, v in ipairs(g_gameGlobal:getCurrentHuaList()) do
        if v == card then
            return true
        end
    end
    return false
end

-- 设置房费均摊
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
    isInPaiZhuo = inPaiZhuo
end
function GameGlobal:getIsInPaiZhuo()
    return isInPaiZhuo
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

local curJushu = 0
function GameGlobal:setCurJuShu(jushu)
    curJushu = jushu
end
function GameGlobal:getCurJuShu()
    return curJushu
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

function GameGlobal:getVipCostValue(mainwanfa, jushu, playerNum, isJuntan)
    -- if mainwanfa and jushu and playerNum then
    --     if isJuntan then
    --         local diamondNum = g_gameGlobal:getVipCostInfo(mainwanfa).diamondCostAA
    --         return bit._and(diamondCostAA * (2^(-(i-1)*8)), 0xff)
    --     else
    --         local diamondNum = g_gameGlobal:getVipCostInfo(mainwanfa).diamondCost
    --         return bit._and(diamondNum * (2^(-(i-1)*8)), 0xff)
    --     end
    -- end
    return 0
end

--点击node区域外会调用func
function GameGlobal:registerOutsideCloseFunc(node, func, swallow, isInBegan, notFixZOrder)
    local listenerNode = cc.Node:create():addTo(node)
    if not notFixZOrder then
        listenerNode:setGlobalZOrder(100000)
    end
    local isnil = true
    if nodeTable and next(nodeTable) ~= nil then
        isnil = false
    end
    local listenner = cc.EventListenerTouchOneByOne:create()
    local flag = false
    if swallow then
        listenner:setSwallowTouches(true)
    end
    listenner:registerScriptHandler(function(touch, event)
        if self:checkVisible(node) == false then
            return false
        end
        flag = false
        local pt = node:getParent():convertTouchToNodeSpace(touch)
        if cc.rectContainsPoint(node:getBoundingBox(), pt) == false then
            flag = true
        end
        if isInBegan and flag then
            func(touch)
        end
        return true
    end, cc.Handler.EVENT_TOUCH_BEGAN)
    listenner:registerScriptHandler(function(touch, event)
        local pt = node:getParent():convertTouchToNodeSpace(touch)
        if not isInBegan and flag and (cc.rectContainsPoint(node:getBoundingBox(), pt) == false) then
            func(touch)
        end
    end, cc.Handler.EVENT_TOUCH_ENDED)
    local eventDispatcher = node:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listenner, listenerNode)
end
--==============================--
--desc:同一界面存在多个点击node区域外会调用func
--time:2019-03-19 03:04:09
--@params:
--@return 
--==============================--
function GameGlobal:registerMoreOutsideCloseFunc(node, func, swallow, isInBegan, notFixZOrder, nodeTable)
    if tolua.isnull(node) then
        print("err...\n" .. debug.traceback())
        return
    end

    if not nodeTable or next(nodeTable) == nil then
        self:registerOutsideCloseFunc(node, func, swallow, isInBegan, notFixZOrder)
        return
    end
    local listenerNode = cc.Node:create():addTo(node)
    if not notFixZOrder then
        listenerNode:setGlobalZOrder(100000)
    end
    local isnil = true
    if nodeTable and next(nodeTable) ~= nil then
        isnil = false
    end
    local listenner = cc.EventListenerTouchOneByOne:create()
    local flag = false
    if swallow then
        listenner:setSwallowTouches(true)
    end
    listenner:registerScriptHandler(function(touch, event)
        if self:checkVisible(node) == false then
            return false
        end
        flag = false
        local pt = node:getParent():convertTouchToNodeSpace(touch)
        if not isnil then
            for i, v in ipairs(nodeTable) do
                if cc.rectContainsPoint(v:getBoundingBox(), pt) == false then
                    flag = true
                else
                    flag = false
                    break
                end
            end
        else
            if cc.rectContainsPoint(node:getBoundingBox(), pt) == false then
                flag = true
            end
        end
        if isInBegan and flag then
            func(touch)
        end
        return true
    end, cc.Handler.EVENT_TOUCH_BEGAN)
    listenner:registerScriptHandler(function(touch, event)
        local pt = node:getParent():convertTouchToNodeSpace(touch)
        if not isInBegan and flag then
            local flag = false
            if not isnil then
                for i, v in ipairs(nodeTable) do
                    if cc.rectContainsPoint(v:getBoundingBox(), pt) == false then
                        flag = true
                    else
                        flag = false
                        break
                    end
                end
            else
                if cc.rectContainsPoint(node:getBoundingBox(), pt) == false then
                    flag = true
                end
            end
            if flag then
                func(touch)
            end
        end
    end, cc.Handler.EVENT_TOUCH_ENDED)
    local eventDispatcher = node:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listenner, listenerNode)
end

function GameGlobal:newTTFLabel(params)
    assert(type(params) == "table",
    "[newTTFLabel newTTFLabel() invalid params")

    local text    = tostring(params.text)
    local font    = params.font or "Arial"
    local size    = params.size or 24
    local color    = params.color or display.COLOR_WHITE
    local textAlign = params.align or cc.TEXT_ALIGNMENT_LEFT
    local textValign = params.valign or cc.VERTICAL_TEXT_ALIGNMENT_TOP
    local x, y    = params.x, params.y
    local dimensions = params.dimensions or cc.size(0, 0)

    assert(type(size) == "number",
    "[newTTFLabel] newTTFLabel() invalid params.size")

    local label
    if cc.FileUtils:getInstance():isFileExist(font) then
        label = cc.Label:createWithTTF(text, font, size, dimensions, textAlign, textValign)
        if label then
            label:setColor(color)
        end
    else
        label = cc.Label:createWithSystemFont(text, font, size, dimensions, textAlign, textValign)
        if label then
            label:setTextColor(color)
        end
    end

    if label then
        if x and y then label:setPosition(x, y) end
    end

    return label
end

function GameGlobal:reCacheScenePng()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("loading/loading0.plist")
    cc.SpriteFrameCache:getInstance():addSpriteFrames("lobby/lobby0.plist")
    cc.SpriteFrameCache:getInstance():addSpriteFrames("common/common0.plist")
    cc.SpriteFrameCache:getInstance():addSpriteFrames("nozip/nozip0.plist")
    cc.SpriteFrameCache:getInstance():addSpriteFrames("share/share0.plist")
    --cc.SpriteFrameCache:getInstance():addSpriteFrames("paimian/paimian0.plist")
end

--@desc 获取精确到毫秒的时间
local xxx = require("socket")
function GameGlobal:getTime()
    return xxx.gettime()
end

-- Hown 
-- 参数1：适配的节点
-- 参数2：大小适配模式：false -> 缩放到长宽比 “大” 的比例，true -> 缩放到长宽比 “小” 的比例
function GameGlobal:fixSplashScale(node)

    local node_size = node:getBoundingBox()

    local a = getDisplayWidth() / 1280

    node:setScale(a)
end

-- cs 秒转时间格式 
-- 参数1：传过来的秒数
function GameGlobal:timeChangeFormat(miao)
    local miaoTime = tonumber(miao) or 0
    local timeStr = ""
    local timeS = "时"
    local timeF = "分"
    local timeM = "秒"
    if miaoTime < 60 then --只显示秒
        timeStr = miaoTime .. timeM
    elseif miaoTime < 3600 then   --显示分，秒
        timeF = math.floor(miaoTime / 60) .. timeF
        miaoTime = (miaoTime % 60) .. timeM
        timeStr = timeF .. miaoTime
    else    --显示时，分
        timeS = math.floor(miaoTime / 3600) .. timeS
        local lastM = miaoTime % 3600
        timeF = math.floor(lastM / 60) .. timeF
        timeStr = timeS .. timeF
    end
    return timeStr
end

function GameGlobal:getChuDirArrowImg(selfPosState, offset, maxPlayerNum)
    local dirImg = nil
    local nodePos = nil
    local scale = 0.8
    if selfPosState == 1 then
        if offset == -1 then
            dirImg = "game/chuDir_left.png"
        elseif offset == 0 then
            dirImg = "game/chuDir_up.png"
        elseif offset == 1 then
            dirImg = "game/chuDir_right.png"
        end
        nodePos = cc.p(27.5, 30)
        scale = 0.8
    elseif selfPosState == 2 then
        if offset == -1 then
            dirImg = "game/chuDir_down.png"
        elseif offset == 0 then
            dirImg = "game/chuDir_left.png"
        elseif offset == 1 then
            if maxPlayerNum == 3 then
                dirImg = "game/chuDir_left.png"
            else
                dirImg = "game/chuDir_up.png"
            end
        end
        nodePos = cc.p(24.5, 15)
        scale = 0.6 * 0.8
    elseif selfPosState == 3 then
        if offset == -1 then
            dirImg = "game/chuDir_right.png"
        elseif offset == 0 then
            dirImg = "game/chuDir_down.png"
        elseif offset == 1 then
            dirImg = "game/chuDir_left.png"
        end
        nodePos = cc.p(27.5, 20)
        scale = 0.6
    elseif selfPosState == 4 then
        if offset == -1 then
            if maxPlayerNum == 3 then
                dirImg = "game/chuDir_right.png"
            else
                dirImg = "game/chuDir_up.png"
            end
        elseif offset == 0 then
            dirImg = "game/chuDir_right.png"
        elseif offset == 1 then
            dirImg = "game/chuDir_down.png"
        end
        nodePos = cc.p(24.5, 15)
        scale = 0.6 * 0.8
    end
    return dirImg, nodePos, scale
end

function GameGlobal:getHuDirArrowImg(huPos, dianPaoPos, maxPlayerNum)
    local dirImg = nil
    local nodePos = nil
    local scale = 1
    if huPos == 1 then
        if dianPaoPos == 2 then
            dirImg = "game/chuDir_right.png"
        elseif dianPaoPos == 3 then
            dirImg = "game/chuDir_up.png"
        elseif dianPaoPos == 4 then
            dirImg = "game/chuDir_left.png"
        end
        nodePos = cc.p(41.5, 30)
        scale = 1
    elseif huPos == 2 then
        if dianPaoPos == 1 then
            dirImg = "game/chuDir_down.png"
        elseif dianPaoPos == 3 then
            dirImg = "game/chuDir_up.png"
        elseif dianPaoPos == 4 then
            dirImg = "game/chuDir_left.png"
        end
        nodePos = cc.p(33.5, 15)
        scale = 0.7
    elseif huPos == 3 then
        if dianPaoPos == 1 then
            dirImg = "game/chuDir_down.png"
        elseif dianPaoPos == 2 then
            dirImg = "game/chuDir_right.png"
        elseif dianPaoPos == 4 then
            dirImg = "game/chuDir_left.png"
        end
        nodePos = cc.p(24.5, 20)
        if g_gameGlobal:getIsPlayingGameLog() then
            nodePos = cc.p(42, 20)
        end
        scale = 0.9
    elseif huPos == 4 then
        if dianPaoPos == 1 then
            dirImg = "game/chuDir_down.png"
        elseif dianPaoPos == 2 then
            dirImg = "game/chuDir_right.png"
        elseif dianPaoPos == 3 then
            dirImg = "game/chuDir_up.png"
        end
        nodePos = cc.p(17.5, 15)
        scale = 0.7
    end
    return dirImg, nodePos, scale
end

function GameGlobal:getMjGameFengDirStr(serverPos)
    if serverPos == 0 then
        return "东风位"
    elseif serverPos == 1 then
        return "南风位"
    elseif serverPos == 2 then
        return "西风位"
    elseif serverPos == 3 then
        return "北风位"
    else
        return ""
    end
end

local function getLuaFileName(str)
    local pos = 0
    local fileName = "";
    -- for each divider found
    fileName = str:gsub("\\", "/")
    for st, sp in function() return string.find(fileName, '/', pos, true) end do
        pos = sp + 1
    end
    fileName = string.sub(fileName, pos)
    return fileName;
end

local _MyAppInstance
function GameGlobal:setMyAppInstance(myApp)
    _MyAppInstance = myApp
end

function GameGlobal:getMyAppInstance(myApp)
    return _MyAppInstance
end

--远程加载图片的cache
local remoteRequescTickCache = {}
local remoteTick = 0
local remoteDirPath = ""
local remoteInterimDirPath = ""
--加个简单的并发限制
local _DOWN_IMG_LIMIT = 1
local remoteHttpReqCache = {}
local remoteImageWaitingCache = {}
--每次启动将清空缓存
function GameGlobal.clearRemoteImageCache()
    remoteInterimDirPath = cc.FileUtils:getInstance():getWritablePath() .. "remoteImgs"
    if cc.FileUtils:getInstance():isDirectoryExist(remoteInterimDirPath) then
        cc.FileUtils:getInstance():removeDirectory(remoteInterimDirPath .. "/")
    end
    cc.FileUtils:getInstance():createDirectory(remoteInterimDirPath)
    remoteInterimDirPath = remoteInterimDirPath .. "/"

    remoteDirPath = cc.FileUtils:getInstance():getWritablePath() .. "remoteKeepImgs"
    if not cc.FileUtils:getInstance():isDirectoryExist(remoteDirPath) then
        cc.FileUtils:getInstance():createDirectory(remoteDirPath)
    end
    remoteDirPath = remoteDirPath .. "/"

    remoteRequescTickCache = {}
    remoteTick = os.time()

    remoteHttpReqCache = {}
    remoteImageWaitingCache = {}

    GameGlobal:setHeadFrameType(0)
end

local function GetRemoteRequestCache()
    if remoteRequescTickCache[remoteTick] == nil then remoteRequescTickCache[remoteTick] = {} end
    return remoteRequescTickCache[remoteTick]
end

local function CheckRemoteImageSt(urlFileName, saveFullName)
    if cc.FileUtils:getInstance():isFileExist(saveFullName) then
        return 0
    else
        local remoteRequescCache = GetRemoteRequestCache()
        if remoteRequescCache[urlFileName] and next(remoteRequescCache[urlFileName]) ~= nil then
            return 1
        else
            return -1
        end
    end
end

local function popRemoteImageWaiting()
    local ret = nil
    if #remoteImageWaitingCache > 0 then
        ret = remoteImageWaitingCache[1][1]
        table.remove(remoteImageWaitingCache, 1)
    else
        for k, v in pairs(remoteImageWaitingCache) do
            ret = k
            break
        end
    end
    if ret then
        remoteImageWaitingCache[ret] = nil
    end
    return ret
end

local function FuncSendDwonImgHttpReq()
end

FuncSendDwonImgHttpReq = function(urlFileName)
    if urlFileName == nil then
        while true do
            urlFileName = popRemoteImageWaiting()
            if urlFileName == nil or #urlFileName > 0 then
                break
            end
        end
        if not urlFileName or #urlFileName == 0 then
            return
        end
    end

    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_STRING
    local trimStr = string.trim(urlFileName)
    xhr:open("GET", trimStr)
    local function onDownloadImage()
        --print("xhr.readyState is:", xhr.readyState, "xhr.status is: ", xhr.status)
        if xhr == nil then
            return
        end
        local remoteRequescCache = GetRemoteRequestCache()
        if remoteRequescCache[urlFileName] == nil then
            remoteImageWaitingCache[urlFileName] = nil
        else

            if xhr.readyState == 4 and (xhr.status >= 200 and xhr.status < 207) then
                local fileData = xhr.response

                if not cc.FileUtils:getInstance():isDirectoryExist(remoteInterimDirPath) then
                    cc.FileUtils:getInstance():createDirectory(remoteInterimDirPath)
                end

                if not cc.FileUtils:getInstance():isDirectoryExist(remoteDirPath) then
                    cc.FileUtils:getInstance():createDirectory(remoteDirPath)
                end

                local transFullPath = function(saveFullName)
                    if saveFullName and not cc.FileUtils:getInstance():isAbsolutePath(saveFullName) then
                        return nil
                    end
                    return saveFullName
                end

                local sfn = transFullPath(remoteRequescCache[urlFileName].saveFullName)
                if sfn then
                    display.removeImage(sfn)
                    io.writefile(sfn, fileData, "w+b")

                    for i, fv in ipairs(remoteRequescCache[urlFileName].successCallBack) do
                        if fv and type(fv) == "function" then
                            fv(sfn)
                        end
                    end
                end

                --insert to cache
                remoteRequescCache[urlFileName] = nil
            else
                for i, fv in ipairs(remoteRequescCache[urlFileName].failCallBack) do
                    if fv and type(fv) == "function" then
                        fv()
                    end
                end
                remoteRequescCache[urlFileName] = nil
            end

            remoteImageWaitingCache[urlFileName] = nil

        end

        local curTime = os.time()
        for i = #remoteHttpReqCache, 1, -1 do
            if (remoteHttpReqCache[i].time and curTime - remoteHttpReqCache[i].time >= 20) or remoteHttpReqCache[i][1] == xhr or remoteHttpReqCache[i][1] == nil then
                table.remove(remoteHttpReqCache, i)
            end
        end

        if #remoteHttpReqCache < _DOWN_IMG_LIMIT then
            FuncSendDwonImgHttpReq()
        end
        xhr = nil
        urlFileName = nil
    end
    xhr:registerScriptHandler(onDownloadImage)
    table.insert(remoteHttpReqCache, { xhr, time = os.time() })
    xhr:send()
end

--请求远程图片
function GameGlobal.downloadRemoteImage(urlFileName, successCallBack, failCallBack, saveName, prior, isInterim)
    --清理20秒之前的请求
    local curTime = os.time()
    for i = #remoteHttpReqCache, 1, -1 do
        if (remoteHttpReqCache[i].time and curTime - remoteHttpReqCache[i].time >= 20) or remoteHttpReqCache[i][1] == nil then
            table.remove(remoteHttpReqCache, i)
        end
    end
    -- body
    if not urlFileName or not saveName then
        return
    end

    if not successCallBack then successCallBack = function() end end
    if not failCallBack then failCallBack = function() end end


    if saveName == "d_head_0bbb6775f7393575a29cf5644da08013.png" then
        if not cc.UserDefault:getInstance():getBoolForKey(saveName .. "_deleted", false) then
            cc.UserDefault:getInstance():setBoolForKey(saveName .. "_deleted", true)

            cc.FileUtils:getInstance():removeFile(remoteDirPath .. saveName)
            cc.FileUtils:getInstance():removeFile(remoteInterimDirPath .. saveName)
        end
    end

    local saveFullName = remoteDirPath .. saveName
    if isInterim then
        saveFullName = remoteInterimDirPath .. saveName
    end
    if cc.FileUtils:getInstance():isAbsolutePath(saveName) then
        saveFullName = saveName
    end

    local checkRet = CheckRemoteImageSt(urlFileName, saveFullName)
    if checkRet == 0 then
        successCallBack(saveFullName)
        return
    end

    local remoteRequescCache = GetRemoteRequestCache()
    if remoteRequescCache[urlFileName] == nil then
        remoteRequescCache[urlFileName] = { saveFullName = saveFullName, successCallBack = {}, failCallBack = {} }
    end

    table.insert(remoteRequescCache[urlFileName].successCallBack, successCallBack)
    table.insert(remoteRequescCache[urlFileName].failCallBack, failCallBack)
    if checkRet == 1 then
        return
    end

    if #remoteHttpReqCache > _DOWN_IMG_LIMIT then
        remoteImageWaitingCache[urlFileName] = remoteRequescCache[urlFileName]
        if prior then
            table.insert(remoteImageWaitingCache, 1, { urlFileName, remoteRequescCache[urlFileName] })
        end
        return
    end

    FuncSendDwonImgHttpReq(urlFileName)
end

-----签到图片保存
local signImagePath = ""
function GameGlobal:setSignImagePath(url)
    local callback = function(imagePath)
        signImagePath = imagePath
    end
    local fileName = ""
    if cc.FileUtils:getInstance():isFileExist(url) then
        callback(url)
        return
    else
        local md5 = g_gameGlobal:getMD5(tostring(url))
        local lastEnd = string.sub(url, -4)
        fileName = "d_sign_" .. tostring(md5) .. lastEnd
    end

    if fileName and fileName ~= "" then
        g_gameGlobal.downloadRemoteImage(url, callback, nil, fileName, false, true)
    end
end
function GameGlobal:getSignImagePath()
    return signImagePath
end

local last_t = GameGlobal:getTime()
function GameGlobal:countTime(s)
    release_print(s .. ", delay time: " .. (self:getTime() - last_t))
    last_t = self:getTime()
end

--俱乐部邀请创建
function GameGlobal:createClubInvitePopView(msg)
    if not display:getRunningScene() or not msg then
        return
    end
    --去除来自同一个玩家的重复邀请
    local popView = display:getRunningScene():getChildByName("ClubInvitePopView")
    if popView then
        popView:updateInfo({ ntyMsg = msg })
    else
        popView = require("app.clubInvite.ClubInvitePopView"):create({ ntyMsg = msg })
        popView:addTo(display:getRunningScene(), g_gameConstant.CLUB_INVITE_ROOM_POP_ZORDER)
        popView:setName("ClubInvitePopView")
    end

end

GameGlobal.clearRemoteImageCache()

-- 某些玩法要默认方言
local defaultLanTypeIsFangyan = {
    [g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ] = true,
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_CHONGZHOU] = true,
}

function GameGlobal:isFyType(mainRuler)

    if mainRuler then
        if defaultLanTypeIsFangyan and defaultLanTypeIsFangyan[mainRuler] then
            -- 某些玩法要默认方言
            return cc.UserDefault:getInstance():getIntegerForKey(tostring(mainRuler) .. "_game_sound_kind", -1) ~= 0
        end
        return cc.UserDefault:getInstance():getIntegerForKey(tostring(mainRuler) .. "_game_sound_kind", 0) == 1
    else
        return false
    end
end

function GameGlobal:setFyType(mainRuler, boolv)
    if mainRuler then
        return cc.UserDefault:getInstance():setIntegerForKey(tostring(mainRuler) .. "_game_sound_kind", boolv and 1 or 0)
    else
        return false
    end
end

-- Hown 增加记录当前玩家pos和数量
local currentPos = {}
-- 通过pos位置来增加一个玩家人数，若已存在则不插入
function GameGlobal:addGamePlayerNumByPos(pos)
    -- 判断是否存在该pos
    local isExist = false
    for k, v in pairs(currentPos or {}) do
        if v == pos then
            isExist = true
            break
        end
    end
    -- 若不存在，则插入
    if isExist == false then
        table.insert(currentPos, pos)
    end
end

-- 通过位置，删除该Pos
function GameGlobal:removeGamePlayerNumByPos(pos)
    for k, v in pairs(currentPos or {}) do
        if v == pos then
            table.remove(currentPos, k)
            break
        end
    end
end

-- 获取当前游戏人数
function GameGlobal:getGamePlayerNum()
    local playerNum = 0
    for k, v in pairs(currentPos or {}) do
        playerNum = playerNum + 1
    end
    return playerNum
end

-- 重置位置数据
function GameGlobal:resetCurrentPosData()
    currentPos = {}
end

--手机登录相关
local bundlingPhoneNum = ""
function GameGlobal:setBundlingPhoneNum(data) bundlingPhoneNum = data end
function GameGlobal:getBundlingPhoneNum() return bundlingPhoneNum end

--再来一局收到邀请保存桌子id
local vipTableId = 0
function GameGlobal:setVipTableId(tableId)
    vipTableId = tableId or 0
end

function GameGlobal:getVipTableId(...)
    return vipTableId
end

function GameGlobal:cleanVipTableId()
    self:setVipTableId(0)
end

--设置游戏是否开始
local gameStart = false
function GameGlobal:setGameStart(state)
    gameStart = state or false
end
function GameGlobal:getGameStart()
    return gameStart
end

function GameGlobal:OpenURL(url)
    if not url then
        return;
    end
    CCApplication:getInstance():openURL(url)
end

-- Iphone X 适配左右移动
function GameGlobal:adapteIponeXNode(node, isLeft)
    --iphone有刘海等手机适配---真机测试
    local pos = cc.p(0, 0)
    pos.x, pos.y = node:getPosition()

    local toPos = self:adapteIponeXPos(pos, isLeft)

    node:setPosition(toPos)
end

-- Iphone X 位置适配（传入的为世界坐标）
function GameGlobal:adapteIponeXPos(pos, isLeft)
    local position = pos
    local win_size = cc.Director:getInstance():getVisibleSize()
    if win_size.width / win_size.height >= 2 then
        if isLeft then
            position.x = position.x + 45
        else
            position.x = position.x - 45
        end
    end
    return position
end

function GameGlobal:isIphoneX()
    local isIphoneX = false
    local win_size = cc.Director:getInstance():getVisibleSize()
    if win_size.width / win_size.height >= 2 then
        isIphoneX = true
    end
    return isIphoneX
end

local lijikaiju = false
function GameGlobal:setLijiKaiJuState(state)
    lijikaiju = state or false
end
function GameGlobal:gettLijiKaiJuState()
    return lijikaiju
end
------------每个玩法对应的默认人数，用于再来一局判断 传入人数
local gameWfNum = {
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R] = 3,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R] = 3,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P] = 2,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XLCH] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDZ] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK] = 3,
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P] = 2,
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_15Z] = 3,
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_CHONGZHOU] = 3,
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ] = 3,
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_2P] = 2,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_QMXZ] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SC_LSMJ] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SC_MJ_NANCHONG] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SC_MZMJ] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ] = 3,
    [g_gameConstant.GAME_PLAY_RULE_SC_YJ] = 4,
    [g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF] = 3,
    [g_gameConstant.GAME_PLAY_RULE_SCCP_DSS] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_7] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SC_MJ_MIANYANG] = 4,
    [g_gameConstant.GAME_PLAY_RULE_SC_GAMJ] = 4,
}
function GameGlobal:getplayerNum(mianRule)
    if not mianRule then return 4 end
    local playerNum = 0
    for i, v in pairs(gameWfNum or {}) do
        if i == mianRule then
            playerNum = v
            break
        end
    end
    return playerNum
end

-- 准备/自动准备是否可在规则设置
function GameGlobal:isAutoReadyInRule(gameMainRule)
    if not gameMainRule or gameMainRule == 0 then
        print("param err.\n" .. debug.traceback())
        return false
    end

    local cfgTbl = {
        -- 斗地主
        [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_LZ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_HDZ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_2P] = true,
        -- 跑得快
        [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_15Z] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P_HT3] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_CHONGZHOU] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_DEYANG] = true,
        --[[        GAME_PLAY_RULE_SCMJ_XZDD        =   17,      --四川麻将————血战到底
        GAME_PLAY_RULE_SCMJ_XZDD_3P2R   =   18,      --四川麻将————血战到底:三人两房
        GAME_PLAY_RULE_SCMJ_XZDD_3P3R   =   19,      --四川麻将————血战到底:三人三房
        GAME_PLAY_RULE_SCMJ_XZDD_4P2R   =   20,      --四川麻将————血战到底:四人两房
        GAME_PLAY_RULE_SCMJ_XZDD_2P     =   21,      --四川麻将————血战到底:两人麻将
        GAME_PLAY_RULE_SCMJ_XLCH        =   22,         --四川麻将————血流成河
        GAME_PLAY_RULE_SCMJ_XZDZ       =   24,         --四川麻将———血战达州
        GAME_PLAY_RULE_SCMJ_QMXZ        = 26,           --四川麻将---全民血战
        --]]
        -- mahjong
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P] = true,
        --        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XLCH] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDZ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_QMXZ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SC_LSMJ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SC_MJ_NANCHONG] = true,
        [g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SC_MZMJ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P1R] = true,
        [g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCCP_DSS] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_7] = true,
        [g_gameConstant.GAME_PLAY_RULE_SC_MJ_MIANYANG] = true,
        [g_gameConstant.GAME_PLAY_RULE_SC_GAMJ] = true,
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER] = true,
    }

    return cfgTbl[gameMainRule] == true
end





-----
-- 战绩分享链接

local clubRecordUrl = nil
function GameGlobal:setClubRecordUrl(url)
    clubRecordUrl = url
end

function GameGlobal:getClubRecordUrl()
    return clubRecordUrl
end


-----
function GameGlobal:checkMustOneGameMinor(hotUpdateAddMustOneItems, minorWanfa)
    if hotUpdateAddMustOneItems and minorWanfa then
        for k, w in pairs(hotUpdateAddMustOneItems) do
            if type(w) == "table" then
                local findCJ = false
                for i, cfgWfItem in ipairs(minorWanfa) do
                    for _, tmp in ipairs(w) do
                        findCJ = findCJ or tmp == cfgWfItem
                    end
                    if findCJ then
                        break
                    end
                end

                if not findCJ then
                    table.insert(minorWanfa, k)
                end
            end
        end
    end
    return minorWanfa
end

function GameGlobal:checkLocalConfigDataMustOneMinor(mainRuler, localConfigData)
    if localConfigData and localConfigData.wanfa then
        for i, oneWfCfgTable in ipairs(g_WanfaCreateTable) do
            if #oneWfCfgTable > 0 and #oneWfCfgTable[1] > 0 and oneWfCfgTable[1][1][1] == mainRuler then
                for idx, oneTab in ipairs(oneWfCfgTable) do
                    if oneTab.hotUpdateAddMustOneItems then
                        g_gameGlobal:checkMustOneGameMinor(oneTab.hotUpdateAddMustOneItems, localConfigData.wanfa[idx])
                    end
                end
            end
        end
    end

    return localConfigData
end

-----
-- 缓存选中战绩的小局日期信息
local cacheSelRecordDate = {}
function GameGlobal:setSelectedRecordDate(dates)
    dates = dates or {}
    cacheSelRecordDate = dates
end



function GameGlobal:getSelectedRecordDate(handIndex)
    if not handIndex then
        return cacheSelRecordDate
    end
    return cacheSelRecordDate and cacheSelRecordDate[handIndex]
end

function GameGlobal:getStrAdapterWithTextObj(textObj, width, srcStr, formater)
    -- 留两个‘.’宽
    width = width - 20

    local tmpTxt = textObj:clone()
    local showTxt = ""
    -- 是否超出
    local len = string.len(srcStr)
    local len2 = string.utf8len(srcStr)
    local t = string.utf8sub(srcStr, 32, 32)
    for i = 1, string.utf8len(srcStr) do
        local tmpStr = showTxt .. string.utf8sub(srcStr, i, i)
        local compStr = nil
        if formater then
            compStr = string.format(formater, tmpStr)
        else
            compStr = tmpStr
        end

        tmpTxt:setString(compStr)
        local txtWidth = tmpTxt:getBoundingBox().width

        if txtWidth >= width then
            showTxt = showTxt .. ".."
            break
        else
            showTxt = tmpStr
        end

        if i == string.utf8len(srcStr) then
            showTxt = tmpStr
        end
    end

    return showTxt
end

-- 慎用
function GameGlobal:splitStrAdapterWithTextObj(txtObj, limitWidth, srcStr)

    local splitVec = {}
    local cursor = 1
    local newLineTxt = ""

    local len2 = string.utf8len(srcStr)
    for i = 1, len2 do
        local tmpStr = newLineTxt .. string.utf8sub(srcStr, i, i)
        txtObj:setString(tmpStr)
        local txtWidth = txtObj:getBoundingBox().width

        if txtWidth >= limitWidth then

            newLineTxt = string.utf8sub(srcStr, i, i)

            cursor = cursor + 1

            if i == len2 then
                splitVec[cursor] = newLineTxt
            end
        else
            newLineTxt = tmpStr
            splitVec[cursor] = tmpStr
        end
    end

    return splitVec
end

function GameGlobal:checkSubGame(mainRule, checkUpdate, isInLobby)
    return true
end

-- 秒数转字符串
function GameGlobal:getTimeStrBySec(timeSec)
    if not timeSec or timeSec == 0 then
        return "00:00"
    end

    local min = math.floor(timeSec / 60)
    local minStr = min > 9 and tostring(min) or table.concat({ "0", tostring(min) })

    local sec = timeSec % 60
    local secStr = sec > 9 and tostring(sec) or table.concat({ "0", tostring(sec) })

    return table.concat({ minStr, ":", secStr })
end

function GameGlobal:getTableSum(tbl)
    local sum = 0
    if tbl then
        for k, v in ipairs(tbl) do
            sum = sum + v
        end
    end

    return sum
end


-----
-- n秒内 不接收玩家群房间邀请
local clubIvtIgnoreTbl = {}
local ignoreTimeDuration = 30
local lastSetTime = 0

function GameGlobal:setIgnoreClubInvite(playerIndex)

    if not playerIndex or playerIndex == 0 then
        return
    end

    local curTime = os.time()
    -- 清理
    if curTime - lastSetTime >= ignoreTimeDuration then
        clubIvtIgnoreTbl = {}
    end
    lastSetTime = curTime

    clubIvtIgnoreTbl[playerIndex] = curTime
end

function GameGlobal:ignoreClubInvite(playerIndex)

    if clubIvtIgnoreTbl[playerIndex] then
        local curTime = os.time()
        local timePass = curTime - clubIvtIgnoreTbl[playerIndex]
        if timePass < ignoreTimeDuration then
            return true
        end

        clubIvtIgnoreTbl[playerIndex] = nil

        -- clear
        --        for k, v in pairs(clubIvtIgnoreTbl) do
        --            if curTime - v >= 30 then
        --                clubIvtIgnoreTbl[k] = nil
        --            end
        --        end
    end

    return false
end

function GameGlobal:isSevenCardGame()

    local sevenGameList = {

        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P1R] =        {
            g_gameConstant.GAME_SUB_RULE_MJ_7_ZHANG
        },
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R] =        {
            g_gameConstant.GAME_SUB_RULE_MJ_MO_7_ZHANG
        },
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R] =        {
            g_gameConstant.GAME_SUB_RULE_MJ_MO_7_ZHANG
        },
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_7] = 1,

    }

    local ruleInfo = GameGlobal:getCurrentWanFa()

    local sub = sevenGameList[ruleInfo.wanfa]

    if sub then
        if type(sub) == "number" then
            return sub == 1
        end
        for k, v in ipairs(ruleInfo.ruleList or {}) do
            for k1, v1 in ipairs(sub or {}) do
                if v == v1 then
                    return true
                end
            end
        end
    end

    return false
end

function GameGlobal:isTenCardGame()

    local tenGameList = {

        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R] =        {
            g_gameConstant.GAME_SUB_RULE_MJ_MO_10_ZHANG
        },
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R] =        {
            g_gameConstant.GAME_SUB_RULE_MJ_MO_10_ZHANG
        },
    }

    local ruleInfo = GameGlobal:getCurrentWanFa()

    local sub = tenGameList[ruleInfo.wanfa]

    if sub then
        for k, v in ipairs(ruleInfo.ruleList or {}) do
            for k1, v1 in ipairs(sub or {}) do
                if v == v1 then
                    return true
                end
            end
        end
    end


    return false
end

function GameGlobal:hideCopyRoomIdBtn()
    return false
end

-- 是否已经在游戏中
local isGaming = false
function GameGlobal:setIsGaming(state)
    isGaming = state
end
function GameGlobal:getIsGaming()
    return isGaming
end

--设置局数
local allJushu = 0
function GameGlobal:getAllJuShu()
    return allJushu
end
function GameGlobal:setAllJuShu(tal)
    allJushu = tal
end

local ClubIdMap = {
    [200707] = 666666,
    [201184] = 777777,
    [200824] = 888888,
    [201323] = 999999,
    [200077] = 554321,
}

--设置房间信息缓存
local roomInfo = nil
function GameGlobal:setRoomInfo(Info)
    roomInfo = Info
end
function GameGlobal:getRoomInfo()
    return roomInfo
end

-- 是否观战模式
function GameGlobal:isWatchMode()
    local gameScene = g_gameGlobal:getGameScene()
    if tolua.isnull(gameScene) then
        return false
    end

    local gameBase = gameScene:getChildByName("gameBase")
    return gameBase and gameBase.isWatchWar or false
end

-- 手机振动
function GameGlobal:vibrate(time)
    
end


function GameGlobal:getGameType(mainRule)
    return g_subGameType and g_subGameType[mainRule]
end

function GameGlobal:getSkeletonAnim(src, animation, loop, completeCBFunc)

    local spine = sp.SkeletonAnimation:create(src .. ".json", src .. ".atlas", 1)
    if animation then
        spine:setAnimation(0, animation, loop)
    else
        print("warning !!! animmation name not set!")
    end

    if completeCBFunc then
        local function playEnd(event)
            -- 播放结束了
            if event.type == "complete" then
                completeCBFunc()
            end
        end
        spine:registerSpineEventHandler(playEnd, sp.EventType.ANIMATION_COMPLETE)
    end

    return spine
end


--设置距离值
local jinRuDistance = 10100
function GameGlobal:setNotEnterDistance(distance)
    jinRuDistance = distance
end

--获取禁入距离
function GameGlobal:getNotEnterDistance()
    return jinRuDistance
end

--特别改变的随人数改变而改配置
local specialTable = {}
function GameGlobal:setvipSpecialInfoTable(tab)
    specialTable = {}
    if type(tab) == "table" then
        for k, info in pairs(tab) do
            specialTable[k] = {}
            table.sort(info, function(v1, v2)
                return v1.renshu < v2.renshu
            end)
            for i, v in ipairs(info) do
                if not specialTable[k][v.renshu] then
                    specialTable[k][v.renshu] = {}
                end
                table.insert(specialTable[k][v.renshu], v)
            end
        end
    end
end
function GameGlobal:getvipSpecialInfoTable(subGameID)
    return specialTable[subGameID]
end

-- 打补丁，防止结算时，换三张天胡手牌数据变多问题
local tian_hu_card = 0
function GameGlobal:setMJGameTianHuCard(card)
    tian_hu_card = card or 0
end

function GameGlobal:getMJGameTianHuCard()
    return tian_hu_card
end

function GameGlobal:checkMJGameOverTianHuBug(overMsg)

    if not overMsg then return end

    -- 若有换三张，换四张玩法，再进行检查
    if GameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG) or GameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG)
    or GameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG_NEW) or GameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW)
    then
        local tian_hu_card = 0
        for k, v in ipairs(overMsg.players or {}) do
            if v.huType == g_gameConstant.MAHJONG_HU_CODE_TIAN_HU then
                local tian_hu_card = overMsg["huCardP" .. tostring(v.tablePos + 1)]
                GameGlobal:setMJGameTianHuCard(tian_hu_card)
                return
            end
        end
    end
end
-- Howns 斗十四添加
local currGameCount = 0
function GameGlobal:getCurrGameCount()
    return currGameCount
end

function GameGlobal:setCurrGameCount(count)
    currGameCount = count
end

-- 获取玩法 入参数组
-- 第一个参数表示主玩法值
-- 第二个参数表示子玩法值
-- 第三个参数表示玩法值之间的分隔符，如果没有，以空格代替
-- 第四个参数表示是否获取最大人数
-- 第五个参数表示是否获取房费均摊
-- 第六个参数表示是否获取最大局数
function GameGlobal:parseCPWanfaList(mainwanfa, wanfaList, fengefu, bGetMaxPlayerNum, bGetFangFeiJunTan, bGetMaxJuShu, hideMainWanfaStr, bNoVoice, bNoText)
    if not wanfaList or not mainwanfa or not g_WanfaDescTable[mainwanfa] then
        return
    end
    fengefu = fengefu or " "
    local fgf = fengefu or " "

    local wanfa = ""
    local tmpWanfalist = clone(wanfaList)

    --处理一下服务器多发问题
    table.sort(tmpWanfalist, function(a, b)
        return a < b
    end)
    local newTable = {}
    for i, v in pairs(tmpWanfalist) do
        if not newTable[#newTable] or newTable[#newTable] ~= v then
            newTable[#newTable + 1] = v
        end
    end
    tmpWanfalist = newTable

    -- 长牌删除听牌提示选项
    for k, v in ipairs(tmpWanfalist) do
        if v == g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI then
            table.remove(tmpWanfalist, k)
            break
        end
    end

    local curPeople = g_gameGlobal:getMaxPlayerNum()
    if type(bGetMaxPlayerNum) == "number" then
        curPeople = bGetMaxPlayerNum
    end

    if g_gameGlobal:isAutoReadyInRule(mainwanfa) then

        -- 跑得快自动开房选项值，取反
        local ruleFound = false
        for k, v in ipairs(tmpWanfalist) do
            if v == g_gameConstant.GAME_SUB_RULE_AUTO_READY then
                table.remove(tmpWanfalist, k)
                ruleFound = true
                break
            end
        end

        -- 当解析为主玩法时，不能取反
        if not ruleFound and next(wanfaList) ~= nil then
            table.insert(tmpWanfalist, g_gameConstant.GAME_SUB_RULE_AUTO_READY)
        end

    end

    if #tmpWanfalist > 0 then
        for i, oneWfCfgTable in ipairs(g_WanfaCreateTable) do
            if #oneWfCfgTable > 0 and #oneWfCfgTable[1] > 0 and oneWfCfgTable[1][1][1] == mainwanfa then
                for idx, oneTab in ipairs(oneWfCfgTable) do
                    if oneTab.hotUpdateAddMustOneItems and (#oneWfCfgTable == 1 or (oneTab[2] and tmpWanfalist[1] == oneTab[2][1])) then
                        g_gameGlobal:checkMustOneGameMinor(oneTab.hotUpdateAddMustOneItems, tmpWanfalist, curPeople)
                        break
                    end
                end
            end
        end
    end

    for i, v in ipairs(tmpWanfalist) do
        if g_WanfaDescTable[mainwanfa][v] and g_WanfaDescTable[mainwanfa][v][1] and string.len(g_WanfaDescTable[mainwanfa][v][1]) > 0 then
            wanfa = wanfa .. g_WanfaDescTable[mainwanfa][v][1] .. fgf
        else
            local des = g_gameGlobal:GetExtRuleDesc(v)
            if des and des[1] and string.len(des[1]) > 0 then
                wanfa = wanfa .. des[1] .. fgf
            elseif v > g_gameConstant.VALUE_LSMJ_DIFENG_BASE and v <= g_gameConstant.VALUE_LSMJ_DIFENG_BASE + 100 then
                wanfa = wanfa .. "底分 " .. tostring(v - g_gameConstant.VALUE_LSMJ_DIFENG_BASE) .. " 分" .. fgf
            end
        end
    end

    if not hideMainWanfaStr then
        table.insert(tmpWanfalist, 1, mainwanfa)
    end

    if string.len(wanfa) > 0 then
        wanfa = string.sub(wanfa, 1, -1 - string.len(fengefu))   --去掉结尾的分隔符
    end

    if bGetMaxPlayerNum then
        -- 获取最大人数
        if curPeople > 0 then
            wanfa = wanfa .. fengefu .. curPeople .. "人"
        end
    end

    if bGetFangFeiJunTan then
        -- 房费均摊
        if g_gameGlobal:getFangFeiJunTan() == 1 then
            wanfa = wanfa .. fengefu .. "房费均摊"
        end
    end

    if bNoVoice then
        for i, v in ipairs(wanfaList) do
            if v == g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_VOICE then
                wanfa = wanfa .. fengefu .. "禁止语音"
            end
        end
    end

    if bNoText then
        for i, v in ipairs(wanfaList) do
            if v == g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_TEXT then
                wanfa = wanfa .. fengefu .. "禁止文字"
            end
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

-- 设置玩家速度设置
function GameGlobal:isFastSpeedModel()
    local speedType = g_UserDataTable.gameSpeedType or 1
    if speedType == 2 then
        return true
    end
    return false
end


-- 多王玩法的速度设置(多王默认设置畅快)
function GameGlobal:isDWFastSpeedModel()
    local speedType = g_UserDataTable.gameDWSpeedType or 1
    g_UserDataTable.gameDWSpeedType = speedType
    if speedType == 1 then
        return true
    end
    return false
end

-- 判断是否为iphone X以上系列
function GameGlobal:isIOSHaveTouchBar()
    local win_size = cc.Director:getInstance():getVisibleSize()
    if device.platform == "ios" and win_size.width / win_size.height >= 2 then
        return true
    end
    return false
end

-- 字牌若是iphone x 系列则手牌位置上升指定像素高度
function GameGlobal:getZPHandCardStartPosY()
    if GameGlobal:isIOSHaveTouchBar() then
        return -30
    end
    return 0
end

-- return
--   string : ret
function GameGlobal:parsePlayerIndex(playerIndex, visible)

    local mInfo = GameGlobal:getMyselfInfo()

    if visible or mInfo.playerIndex == playerIndex then

        return tostring(playerIndex) or ""
    end

    playerIndex = tostring(playerIndex) or ""
    local sLen = string.len(playerIndex)
    if sLen < 3 then
        return table.concat({ playerIndex, "***" })
    end

    local begin = string.sub(playerIndex, 1, 1)
    local sEnd = string.sub(playerIndex, sLen, sLen)
    return table.concat({ begin, "****", sEnd })
end

local extraFilePath = nil
function GameGlobal:initExtraFilePath()
    extraFilePath = ""
end

function GameGlobal:getExtraFilePath()
    if extraFilePath == nil then
        g_gameGlobal:initExtraFilePath()
    end
    return extraFilePath
end

--创建骨骼动画
function GameGlobal:createSpine(filePath, fileName, ignoreExtraPath)
    local extraPath = g_gameGlobal:getExtraFilePath()
    if ignoreExtraPath then
        extraPath = ""
    end
    local newFilePath = filePath .. extraPath .. fileName

    local sp = sp.SkeletonAnimation:create(newFilePath .. ".json", newFilePath .. ".atlas", 1)
    return sp
end

-- cc.exports.g_ZhanJiShareUrl = "https://winner.ttayouxi.com/site/record"
-- if G_IS_TEST then
--     cc.exports.g_ZhanJiShareUrl = "http://120.78.208.119:8036/site/record"
-- end
function GameGlobal:playerZhanJiShare(url)
    if url then
        local title = "快进来看看我的战绩吧！"
        local des = "战绩明细"
        ShareLayer_shareWebpage(url, url, title, des)
    end
end

-- 通用的奖励图标
local itemIconMacroTbl = {

    [g_gameConstant.MATCH_AWARD_TYPE_RMB] = "awardIcon/icon_redpacket.png",
    -- 房卡
    [g_gameConstant.MATCH_AWARD_TYPE_DIAMOND] = "awardIcon/icon_diamon_1.png",
    [g_gameConstant.MATCH_AWARD_TYPE_GOLD] = "awardIcon/icon_gold.png",
    --积分
    [g_gameConstant.MATCH_AWARD_TYPE_JIFEN] = "awardIcon/icon_jifen.png",
}

function GameGlobal:getAwardIcon(itemType)
    return itemIconMacroTbl[itemType]
end

-- 通用的奖励名字
local itemNameMacroTbl = {
    [g_gameConstant.MATCH_AWARD_TYPE_RMB] = "人民币",
    -- 房卡
    [g_gameConstant.MATCH_AWARD_TYPE_DIAMOND] = "房 卡",
    [g_gameConstant.MATCH_AWARD_TYPE_GOLD] = "金 币",
    --积分
    [g_gameConstant.MATCH_AWARD_TYPE_JIFEN] = "礼 券",
}

function GameGlobal:getAwardName(itemType)
    return itemNameMacroTbl[itemType]
end

local luckExpressionData = {}
function GameGlobal:setLuckExpressionData(data)
    luckExpressionData = data
end

function GameGlobal:getLuckExpressionData()
    return luckExpressionData
end

local shuffleExpressionData = {}
function GameGlobal:setShuffleExpressionData(data)
    shuffleExpressionData = data
end

function GameGlobal:getShuffleExpressionData()
    return shuffleExpressionData
end

local gameCostData = {}
function GameGlobal:setGameCostData(data)
    gameCostData = data
end

function GameGlobal:getGameCostData()
    return gameCostData
end

local gameCostChangeFlag = nil
function GameGlobal:setGameCostChangeFlag(value)
    if gameCostChangeFlag ~= nil and gameCostChangeFlag ~= value then
        local gameBase = g_gameGlobal:getGameBase()
        if gameBase and not tolua.isnull(gameBase) and gameBase.refreshPrice then
            gameBase:refreshPrice()
        end
    elseif gameCostChangeFlag == nil then
        gameCostChangeFlag = value
    end
end

local playerShuffleData = nil
function GameGlobal:setPlayerShuffleData(value)
    playerShuffleData = value
end

function GameGlobal:getPlayerShuffleData()
    return playerShuffleData or {}
end

function GameGlobal:packHttpUrl(baseUrl, params)
    if not baseUrl or not params then
        print("param err ! \n" .. debug.traceback())
        return
    end

    local param = nil
    for k, v in pairs(params) do
        if not param then
            param = table.concat({ "?", k, "=", v })
        else
            param = table.concat({ param, "&", k, "=", v })
        end
    end

    return baseUrl .. param
end

------------------------互动表情相关---------------
--最小购买钻石配置
local minDiamondData = {}
function GameGlobal:setMinDiamondInfo(data)
    minDiamondData = data
end
function GameGlobal:getMinDiamondInfo()
    return minDiamondData
end
----最小兑换金币配置
local minGlodData = {}
function GameGlobal:setMinGlodInfo(data)
    minGlodData = data
end
function GameGlobal:getMinGlodInfo()
    return minGlodData
end

-- 返回table的key路径
local function getTablePathByValue(t, value)
    for k, v in pairs(t) do
        if v == value then
            return k
        else
            if "table" == type(v) then
                local res = getTablePathByValue(v, value)
                if res then
                    return k .. "." .. res
                end
            end
        end
    end
end

function GameGlobal:updateSpecfLayer(msg)
    -- local cfg = g_gameGlobal:getSystemParaInfo(90000) -- 服务端specf配置字段
    -- local notOnline = device.platform == "windows" or (not string.find(NetConfig.cfg[1].ip, "%a") and true or false)
    -- local gameScene = g_gameGlobal:getGameScene()
    -- if cfg and cfg.pro_2 == 1 and notOnline and gameScene then
    --     local oSpecfLayer = gameScene:getChildByName("UISpecfGameLayer")
    --     if not oSpecfLayer then
    --         local specfLayer = require("app.game.GamePublic.UISpecfGameLayer")
    --         local specfType = specfLayer.SPECF_TYPE.MAH
    --         local oSpecfLayer = specfLayer:create(specfType)
    --         :setName("UISpecfGameLayer")
    --         :setLocalZOrder(g_gameConstant.TABLEPLAYERDOCARD_ZORDER)
    --         g_gameGlobal:getGameScene():add(oSpecfLayer)
    --     end
    --     gameScene:getChildByName("UISpecfGameLayer"):updateSpecfLayer(msg.leftCards, msg.handCardsCnt)  --  msg.handcardCount牌类中使用，用来控制Specf数据不溢出
    -- end
end

-- 对按钮进行统一的封装处理
function GameGlobal:addClickEvent(targetNode, callbackFunc, scaleValue)
    if not targetNode or not callbackFunc then
        return
    end

    -- 缩放值
    scaleValue = scaleValue or 0.1
    targetNode:addClickEventListener(callbackFunc)
end

-- 初始化巅峰赛规则，原有逻辑太复制直接取字符串赋值
local function initRule()
    g_WanfaDescTable = {}
    g_WanfaCreateTable = {}
    local tempCreate = "[[[[20001,[4,3,2]],[55],[56],[57],[105],[45],[46],[47],[48],[49],[50],[30001],[30002],[51],[52],[53],[-299],[387],[-10149],[54],[99],[204],[210],[211],[10000]]],[[[40,[4,3,2]],[55],[56],[57],[46],[241],[49],[-4001],[-108],[240],[60],[54],[99],[-10149],[204],[210],[211],[10000]]],[[[39,[4,3,2]],[57],[105],[108],[16601],[16602],[16605],[235],[59],[231],[99],[107],[204],[210],[211],[10000],[234],[233],[232],[270],[46],[45],[-3901],[212],[-3903],[-3904],[-3905],[213]]],[[[17,[4]],[55],[56],[57],[105],[45],[46],[47],[48],[49],[372],[50],[388],[51],[52],[53],[-299],[387],[-10149],[54],[99],[204],[210],[211],[10000]]],[[[18,[3]],[55],[56],[57],[105],[45],[46],[47],[48],[51],[52],[53],[60],[58],[59],[49],[50],[99],[204],[106],[107],[54],[-108],[-10149],[210],[211],[10000]]],[[[19,[3]],[61],[62],[63],[55],[56],[57],[45],[46],[47],[48],[51],[52],[53],[60],[58],[54],[99],[204],[210],[211],[10000]]],[[[20,[4]],[61],[62],[63],[55],[56],[57],[45],[46],[47],[48],[64],[54],[99],[204],[210],[211],[10000],[52],[53]]],[[[21,[2]],[65],[66],[55],[56],[57],[105],[45],[46],[47],[48],[49],[50],[51],[52],[60],[53],[54],[99],[204],[-10149],[210],[211],[10000],[244],[242],[246]]],[[[42,[2]],[63],[61],[55],[56],[57],[45],[46],[47],[48],[58],[52],[60],[53],[54],[59],[99],[204],[210],[211],[10000],[244],[242],[246],[361],[362],[363],[51],[385],[386],[384]]],[[[60,[3]],[300],[301],[49],[54],[99],[204],[-10149],[210],[211],[10000]]],[[[41,[2,3,4]],[283],[54],[99],[204],[210],[211],[10000],[280],[281],[282]]],[[[24,[4]],[55],[56],[57],[45],[46],[47],[48],[49],[50],[82],[51],[52],[53],[54],[79],[78],[59],[64],[99],[204],[-10149],[210],[211],[10000]]],[[[26,[4]],[55],[56],[57],[105],[45],[46],[47],[48],[49],[50],[93],[58],[94],[97],[52],[53],[54],[96],[92],[95],[99],[204],[-10149],[210],[211],[10000]]],[[[38,[4,3,2]],[201],[202],[49],[203],[54],[99],[204],[-10149],[210],[211],[10000],[231]]],[[[52,[4,3,2]],[200],[201],[202],[214],[203],[204],[205],[0],[47],[48],[53],[209],[217],[218],[212],[215],[219],[2027],[210],[211],[10000],[14001],[99],[14002]]],[[[37,[4]],[55],[56],[57],[105],[45],[46],[47],[48],[49],[50],[51],[52],[53],[54],[99],[204],[-10149],[210],[211],[10000],[-299],[20]]],[[[48,[4]],[370],[366],[367],[368],[369],[54],[99],[204],[210],[211],[10000],[270]]],[[[49,[4,3,2]],[399],[400],[401],[402],[403],[404],[405],[406],[407],[408],[231],[0],[409],[411],[201],[410],[54],[99],[204],[210],[211],[10000],[999]]],[[[23,[3]],[35],[72],[73],[101],[100],[77],[71],[40],[74],[75],[76],[-109],[99],[102],[103],[104],[204],[-1001],[98],[-10099],[-10100],[210],[211],[10000],[41],[-302],[43],[40]]],[[[25,[2]],[72],[242],[40],[74],[75],[76],[246],[99],[102],[103],[104],[204],[-1001],[71],[112],[113],[98],[-10099],[-10100],[210],[211],[10000],[-109],[41],[-302],[43],[364],[365]]],[[[29,[3,2]],[-205],[205],[100],[-100],[114],[74],[75],[207],[40],[42],[41],[43],[-154],[-155],[99],[204],[-1001],[98],[-10100],[-10099],[210],[211],[10000],[-206]]],[[[44,[2]],[72],[110],[71],[40],[74],[75],[76],[111],[99],[102],[103],[104],[204],[-1001],[73],[98],[-10100],[-10099],[210],[211],[10000],[-109],[41],[-302],[43],[365],[364]]],[[[51,[2,3,4]],[259],[260],[261],[262],[263],[99],[210],[211],[10000]]],[[[46,[4,3,2]],[284],[285],[286],[292],[72],[287],[210],[211],[10000],[263],[262],[288],[289],[290],[291],[99]]],[[[27,[3]],[84],[85],[86],[90],[91],[88],[87],[89],[204],[99],[208],[-208],[236],[209]]],[[[50,[3]],[84],[85],[86],[90],[91],[88],[87],[89],[204],[99]]],[[[53,[4]],[21],[22],[23],[11],[12],[99]]],[[[54,[2]],[11],[12],[13],[14],[21],[90],[88],[87],[89],[22],[99]]],[[[61,[4,3,2]],[351],[352],[353],[354],[99],[204]]]]"
    g_WanfaCreateTable = cjson.decode(tempCreate)
    local tmpRule = cjson.decode("{\"105\":[\"5番\",\"勾选后，最高胡的番数为4番。\"],\"49\":[\"换三张\",\"玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"45\":[\"自摸加底\",\"勾选后，加 1 底。\"],\"56\":[\"3番\",\"勾选后，最高胡的番数为3番。\"],\"52\":[\"门清中张\",\"玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"48\":[\"点杠花（自摸）\",\"玩家胡牌后，从剩余牌堆中依次翻4只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"17\":[\"血战到底\",\"血战到底\"],\"387\":[\"过手碰\",\"其他玩家打出一张牌，有玩家可碰，但是没碰，选择过，则在该玩家打出一张牌之前都不可以再碰同一张牌\"],\"204\":[\"\",\"勾选后所有玩家同意才可解散\"],\"-299\":[\"放牛过庄胡\",\"\"],\"55\":[\"2番\",\"勾选后，最高胡的番数为2番。\"],\"51\":[\"幺九将对\",\"玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"211\":[\"单局托管\",\"勾选后，换三张时播放动画。\"],\"47\":[\"点杠花（点炮）\",\"玩家胡牌后，从剩余牌堆中依次翻2只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"210\":[\"全局托管\",\"勾选后，换三张时播放动画。\"],\"99\":[\"自动准备\",\"勾选后进入房间自动准备\"],\"10000\":[\"秒后托管(30~300)\",\"勾选后，换三张时播放动画。\"],\"-10149\":[\"换三张动画\",\"勾选后，换三张时播放动画。\"],\"54\":[\"听牌提示\",\"玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"50\":[\"换四张\",\"玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"53\":[\"天地胡\",\"玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"46\":[\"自摸加番\",\"勾选后，加 1 番。\"],\"388\":[\"任意换四张\",\"玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"372\":[\"任意换三张\",\"玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。\"],\"57\":[\"4番\",\"勾选后，最高胡的番数为4番。\"]}")
    local realData = {}
    for k, v in pairs(tmpRule) do
        realData[tonumber(k)] = v
    end
    g_WanfaDescTable[17] = realData

    local tmpRuleEx = cjson.decode("{\"88\":[\"四带二\",\"勾选可显示剩余张数\"],\"99\":[\"自动准备\",\"勾选后进入房间自动准备\"],\"91\":[\"三大必抓\",\"勾选有牌型奖励\"],\"27\":[\"斗地主\",\"斗地主\"],\"90\":[\"随机首叫\",\"底分为5分\"],\"259\":[\"9底分\",\"\"],\"85\":[\"32倍封顶\",\"底分为2分\"],\"257\":[\"7底分\",\"\"],\"209\":[\"加倍\",\"勾选后可选加倍\"],\"260\":[\"10底分\",\"\"],\"84\":[\"16倍封顶\",\"底分为1分\"],\"258\":[\"8底分\",\"\"],\"256\":[\"6底分\",\"\"],\"255\":[\"5底分\",\"\"],\"87\":[\"三带二\",\"勾选可显示剩余张数\"],\"252\":[\"2底分\",\"\"],\"236\":[\"固定地主\",\"勾选后第一个叫地主则为地主\"],\"253\":[\"3底分\",\"\"],\"86\":[\"64倍封顶\",\"底分为3分\"],\"204\":[\"\",\"勾选后所有玩家同意才可解散。\"],\"254\":[\"4底分\",\"\"],\"89\":[\"三张\",\"勾选可显示剩余张数\"],\"251\":[\"1底分\",\"\"],\"208\":[\"叫分\",\"勾选后采用叫分模式决定地主\"],\"-208\":[\"叫地主\",\"勾选后采用叫地主模式决定地主\"]}")
    local realDataEx = {}
    for k, v in pairs(tmpRuleEx) do
        realDataEx[tonumber(k)] = v
    end
    g_WanfaDescTable[27] = realDataEx
end

initRule()

return GameGlobal