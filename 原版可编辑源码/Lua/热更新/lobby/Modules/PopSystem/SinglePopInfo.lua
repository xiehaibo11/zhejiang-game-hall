local SinglePopInfo = class("SinglePopInfo")
local PopConfig = require("lobby.Modules.PopSystem.PopConfig")

function SinglePopInfo.createWithWebConfig(singleConf)
    local popInfo = SinglePopInfo:new()
    if not popInfo:initWithWebConfig(singleConf) then
        return nil
    end
    return popInfo
end

function SinglePopInfo.createWithClientConfig(singleConf)
    local popInfo = SinglePopInfo:new()
    popInfo:initWithClientConfig(singleConf)
    return popInfo
end

function SinglePopInfo:ctor()
    self:initData()
end

function SinglePopInfo:initData()
    self._viewName = "PopSystemView" --弹窗名字(与ViewsConfig中对应)
    self._popScenes = {} --弹出场景
    self._status = 2 --1是预发布 2是正式发布 （客户端通过是否是内网去判断是否展示）
    self._shareID = 0
    self._type = PopConfig.POP_TYPE.FIX
    self._weight = 0 --权重，当_type为随机时才生效
    self._selectTag = "" --选中的标签页
    self._sortIndex = -1 --排序优先级
    self._viewNameText = "" --风信后台的弹窗名字
    self._todayLimitCount = 0
    self._id = 0

    self._webViewConf = nil
end

function SinglePopInfo:initWithClientConfig(clientConf)
    self._type = clientConf.PopType or PopConfig.POP_TYPE.FIX
    self._viewName = clientConf.ViewName or "PopSystemView"
    self._popScenes = clientConf.PopScenes or {}
    self._selectTag = clientConf.SelectTag or ""
    self._weight = clientConf.Weight or 0
    self._viewNameText = clientConf.NameText or ""
end

function SinglePopInfo:initWithWebConfig(webConf)
    self:analyseWebName(webConf)
    self:analyseWebStatus(webConf)
    self:analyseWebPopType(webConf)
    self:analyseWebWeight(webConf)
    self:analyseWebViewConf(webConf)
    self:analyseWebPopScenes(webConf)
    self:analyseWebPopSort(webConf)
    self:analyseLimitCount(webConf)
    self:analyseWebConfParams(webConf)
    return self._viewName ~= ""
end

function SinglePopInfo:analyseLimitCount(webConf)
    if webConf.player_show_day_limit then
        self._todayLimitCount = webConf.player_show_day_limit
    end
end

function SinglePopInfo:analyseWebName(webConf)
    if webConf.name then
        self._viewNameText = webConf.name
    end
    if webConf.id then
        self._id = webConf.id
    end
end

function SinglePopInfo:analyseWebStatus(webConf)
    if webConf.status then
        self._status = webConf.status
    end
    if webConf.share_id then
        self._shareID = webConf.share_id
    end
end

-- 随机弹窗权重
function SinglePopInfo:analyseWebWeight(webConf)
    if webConf.account_count then
        self._weight = webConf.account_count
    end
end

function SinglePopInfo:analyseWebPopType(webConf)
    if webConf.pop_type then
        self._type = webConf.pop_type
    end
end

function SinglePopInfo:analyseWebPopSort(webConf)
    if webConf.pop_sort then
        self._sortIndex = webConf.pop_sort
    end
end

function SinglePopInfo:analyseWebPopScenes(webConf)
    self._popScenes = {}
    local popScenes = string.split(webConf.pop_scene, ",")
    for _, sceneStr in pairs(popScenes) do
        if sceneStr == "gold" then
            table.insert(self._popScenes, PopConfig.SCENE_TYPE.GOLD)
        elseif string.find(sceneStr, "tea") then
            table.insert(self._popScenes, PopConfig.SCENE_TYPE.TEA)
        elseif sceneStr == "match" then
            table.insert(self._popScenes, PopConfig.SCENE_TYPE.MATCH)
        elseif sceneStr == "lobby" then
            table.insert(self._popScenes, PopConfig.SCENE_TYPE.LOBBY)
        end
    end
end

function SinglePopInfo:analyseWebViewConf(webConf)
    local conf = PopConfig.WebSingleConf:new()
    conf.imageUrl = webConf.popup_img or ""
    conf.name = webConf.name or ""
    conf.btns = self:analyseBtnsConf(webConf)
    conf.shareImg = webConf.popup_share_img or ""
    conf.id = webConf.id or 0
    conf.open_no_disturb = webConf.open_no_disturb or 0
    conf.close_times = webConf.close_times or 0
    conf.hide_days = webConf.hide_days or 0
    self._webViewConf = conf
end

function SinglePopInfo:analyseWebConfParams(webConf)
    local confTable = string.split(webConf.config_params, ";")
    for _, v in pairs(confTable) do
        if string.find(v, "view=") then
            local viewTable = string.split(v, "=")
            if #viewTable == 2 then
                self._viewName = viewTable[2]
            end
        end
        if string.find(v, "selectTag=") then
            local viewTable = string.split(v, "=")
            if #viewTable == 2 then
                self._selectTag = viewTable[2]
            end
        end
        if string.find(v, "isFull=") then
            local viewTable = string.split(v, "=")
            if #viewTable == 2 then
                self._webViewConf.isFull = tonumber(viewTable[2]) == 1
            end
        end
        if string.find(v, "ani=") then
            local viewTable = string.split(v, "=")
            if #viewTable == 2 then
                self._webViewConf.ani = viewTable[2]
            end
        end
        if string.find(v, "clickAfter=") then
            local viewTable = string.split(v, "=")
            if #viewTable == 2 then
                self._webViewConf.clickAfter = tonumber(viewTable[2])
            end
        end
    end
end

function SinglePopInfo:analyseBtnsConf(webConf)
    webConf.button_config = webConf.button_config or {}
    local allBtnsConf = {}
    for name, btnConf in pairs(webConf.button_config) do
        local conf = PopConfig.WebSingleBtnConf:new()
        conf.imageUrl = btnConf.img.url
        conf.link = btnConf.link
        conf.width = btnConf.img.w
        conf.height = btnConf.img.h
        conf.posX = btnConf.img.x
        conf.posY = btnConf.img.y
        allBtnsConf[name] = conf
    end
    return allBtnsConf
end

function SinglePopInfo:checkMoment()
    if not self._todayLimitCount or self._todayLimitCount == 0 then
        return true
    end
    local nowNumber = self:analyTodayOpenCount()
    if tonumber(nowNumber) < self._todayLimitCount  then
        return true
    end
    return false
end

--是否需要校验数据，比如签到过后不再强弹签到界面
function SinglePopInfo:isNeedCheckData()
    local checkKey = self:getNameKeyStr()
    for _, v in pairs(PopConfig.PopIsNeedCheckData) do
        if v == checkKey then
            return true
        end
    end
    return false
end

function SinglePopInfo:getWeight()
    return self._weight
end

function SinglePopInfo:getType()
    return self._type
end

function SinglePopInfo:getPopScenes()
    return self._popScenes
end

function SinglePopInfo:getSortIndex()
    return self._sortIndex
end

function SinglePopInfo:getWebViewConf()
    return self._webViewConf
end

function SinglePopInfo:getViewName()
    return self._viewName
end

function SinglePopInfo:getNameText()
    return self._viewNameText
end

-- 获取需要选中的标签
function SinglePopInfo:getSelectTag()
    return self._selectTag
end

function SinglePopInfo:getNameKeyStr()
    local keyStr = self._viewName
    if self._selectTag and self._selectTag ~= "" then
        keyStr = keyStr .. "_" .. self._selectTag
    end
    return keyStr
end

-- 每日弹出次数的存储的key
function SinglePopInfo:getLastOpenUserDefaultKey()
    return "Pop" .. self:getNameKeyStr().."_"..self._id .. XH.areaData:getAreaID() .. XH.playerData:getNumberID()
end

function SinglePopInfo:analyTodayOpenCount()
    local openInfoStr = cc.UserDefault:getInstance():getStringForKey(self:getLastOpenUserDefaultKey(), "")
    local infoTable = string.split(openInfoStr, "_")
    if not infoTable or #infoTable < 2 then
        return 0
    end
    if os.date("%Y%m%d") ~= os.date("%Y%m%d", infoTable[1]) then
        cc.UserDefault:getInstance():setStringForKey(self:getLastOpenUserDefaultKey(), os.time().."_"..0)
        return 0
    end
    return tonumber(infoTable[2])
end

function SinglePopInfo:recordOpenOnce()
    local nowNumber = self:analyTodayOpenCount()
    nowNumber = nowNumber + 1
    cc.UserDefault:getInstance():setStringForKey(self:getLastOpenUserDefaultKey(), os.time().."_"..nowNumber)
end

return SinglePopInfo