--[[
远程 Spine 下载与播放（独立模块，不改动 SpineManager）

用法：
  -- 推荐：key 对应 REMOTE_ANI_PRESETS 预设，其它参数集中配置
  XH.RemoteSpineManager:playRemoteAni(node, "buyuIcon")

  -- 仍支持完整 params（可带 key 做预设合并，或显式 baseUrl 等）
  XH.RemoteSpineManager:playRemoteAni(node, {
      key = "buyuIcon",
      onSuccess = function(spineNode, localPaths) end,
  })
]]

local RemoteSpineManager = class("RemoteSpineManager")

local DEFAULT_CACHE_DIR = "tmpSpineCache/"
local DEFAULT_RETRY_COUNT = 3
local REMOTE_ANI_CONFIG_KEY = "RemoteAni"

--- 远程动画预设：调用方只传 key，播放/失败回退参数统一在此维护
--- Configuration.RemoteAni[key] 可覆盖 baseUrl / fileName（仅影响远程下载，不影响 localFallback）
--- localFallback.fileName / aniName 必须显式配置，禁止隐式沿用远程 fileName，避免远程配错导致本地回退也错
local REMOTE_ANI_PRESETS = {
    -- 大厅/休闲入口：人人捕鱼 icon（zzb_rk_rrbu9）
    -- scale=0.6 对齐 MenuIcon 旧 create 默认；Config.IconAniScale(1.15) 由 MenuIcon 挂在父节点
    buyuIcon = {
        fileName = "zzb_rk_rrbu9",
        aniName = "animation",
        loop = true,
        scale = 0.6,
        localFallback = {
            path = "animation/Lobby/Base/rrby_icon/",
            fileName = "zzb_rk_rrbu9",
            aniName = "animation",
            scale = 0.6,
        },
    },
    -- 金币场入口：人人捕鱼（zzb_jbdt_rk_rrbu9）
    buyuGoldRoom = {
        fileName = "zzb_jbdt_rk_rrbu9",
        aniName = "animation",
        loop = true,
        localFallback = {
            path = "animation/Lobby/Base/NewGoldHall/EntryFish/",
            fileName = "zzb_jbdt_rk_rrbu9",
            aniName = "animation",
        },
    },
    -- 游戏中心联运 icon 轮播：人人捕鱼（zzb_yxzx_rrby2）
    buyuGameCenterIcon = {
        fileName = "zzb_yxzx_rrby2",
        aniName = "animation",
        loop = true,
        localFallback = {
            path = "animation/Lobby/GameCenter/icon/",
            fileName = "zzb_yxzx_rrby2",
            aniName = "animation",
        },
    },
    -- 大厅游戏中心入口轮播：人人捕鱼（zzb_rk_rrby2）
    buyuLobbyGameCenter = {
        fileName = "zzb_rk_rrby2",
        aniName = "animation",
        loop = true,
        localFallback = {
            path = "animation/Lobby/Base/zzb_rk_rrby/",
            fileName = "zzb_rk_rrby2",
            aniName = "animation",
        },
    },
}

RemoteSpineManager._remoteTasks = RemoteSpineManager._remoteTasks or {}

local function getFileUtils()
    return cc.FileUtils:getInstance()
end

local function getCacheRoot()
    return getFileUtils():getWritablePath() .. DEFAULT_CACHE_DIR
end

local function ensureDir(dirPath)
    local fileUtils = getFileUtils()
    if not fileUtils:isDirectoryExist(dirPath) then
        fileUtils:createDirectory(dirPath)
    end
end

local function ensureParentDir(filePath)
    local dir = string.match(filePath, "^(.*)[/\\][^/\\]+$")
    if dir and dir ~= "" then
        ensureDir(dir)
    end
end

local function joinUrl(baseUrl, fileName)
    if not baseUrl or baseUrl == "" then
        return fileName
    end
    if string.sub(baseUrl, -1) == "/" then
        return baseUrl .. fileName
    end
    return baseUrl .. "/" .. fileName
end

local function sanitizeKey(str)
    str = tostring(str or "")
    str = string.gsub(str, "[%?%#].*$", "")
    str = string.gsub(str, "[:/%.\\?#&=%%]+", "_")
    str = string.gsub(str, "_+", "_")
    return str
end

local function getFileSize(filePath)
    if not getFileUtils():isFileExist(filePath) then
        return 0
    end
    local content = getFileUtils():getStringFromFile(filePath)
    if not content then
        return 0
    end
    return string.len(content)
end

local function isFileReady(filePath)
    return getFileSize(filePath) > 0
end

--- 从 atlas 文本解析贴图页文件名
local function parseAtlasTextures(atlasContent)
    local textures = {}
    local seen = {}
    if not atlasContent or atlasContent == "" then
        return textures
    end
    for line in string.gmatch(atlasContent, "[^\r\n]+") do
        if not string.match(line, "^%s") and not string.match(line, ":") then
            local name = string.match(line, "^%s*(.-)%s*$")
            if name and name ~= "" and string.match(string.lower(name), "%.png$") then
                if not seen[name] then
                    seen[name] = true
                    table.insert(textures, name)
                end
            end
        end
    end
    return textures
end

local function downloadOneFile(url, savePath, retryCount, onDone)
    retryCount = retryCount or DEFAULT_RETRY_COUNT
    local attempt = 0

    local doRequest = nil
    doRequest = function()
        attempt = attempt + 1
        local xhr = cc.XMLHttpRequest:new()
        xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_BLOB
        xhr:open("GET", url)
        xhr:registerScriptHandler(function()
            if xhr.readyState == 4 and xhr.status == 200 and xhr.response then
                ensureParentDir(savePath)
                local ok = io.writefile(savePath, xhr.response, "w+b")
                if ok and isFileReady(savePath) then
                    onDone(true, savePath)
                elseif attempt < retryCount then
                    doRequest()
                else
                    onDone(false, "write_failed:" .. tostring(savePath))
                end
            else
                if attempt < retryCount then
                    doRequest()
                else
                    onDone(false, "http_failed:" .. tostring(xhr.status) .. " url:" .. tostring(url))
                end
            end
            xhr:unregisterScriptHandler()
        end)
        xhr:send()
    end

    doRequest()
end

local function downloadFiles(fileList, retryCount, onSuccess, onFail)
    if not fileList or #fileList == 0 then
        onSuccess()
        return
    end

    local remain = #fileList
    local failed = false

    for i = 1, #fileList do
        local item = fileList[i]
        if not item.force and isFileReady(item.savePath) then
            remain = remain - 1
            if remain <= 0 and not failed then
                onSuccess()
            end
        else
            downloadOneFile(item.url, item.savePath, retryCount, function(ok, err)
                if failed then
                    return
                end
                if not ok then
                    failed = true
                    if onFail then
                        onFail(err or "download_failed")
                    end
                    return
                end
                remain = remain - 1
                if remain <= 0 then
                    onSuccess()
                end
            end)
        end
    end
end

--[[
params:
  baseUrl / fileName / useSkel / jsonUrl / atlasUrl
  textureNames / textureUrls / cacheKey / force / retryCount
]]
function RemoteSpineManager:_resolveRemoteParams(params)
    params = params or {}
    local fileName = params.fileName
    local baseUrl = params.baseUrl
    local useSkel = params.useSkel == true
    local skeletonExt = useSkel and ".skel" or ".json"

    if (not fileName or fileName == "") and not params.jsonUrl then
        return nil, "missing fileName/jsonUrl"
    end

    local cacheKey = params.cacheKey
    if not cacheKey or cacheKey == "" then
        cacheKey = sanitizeKey((baseUrl or "") .. "_" .. (fileName or "spine"))
    else
        cacheKey = sanitizeKey(cacheKey)
    end

    local localDir = getCacheRoot() .. cacheKey .. "/"
    local skeletonName = (fileName or "skeleton") .. skeletonExt
    local atlasName = (fileName or "skeleton") .. ".atlas"

    local skeletonUrl = params.jsonUrl or params.skeletonUrl
    if not skeletonUrl then
        if not baseUrl then
            return nil, "missing baseUrl/jsonUrl"
        end
        skeletonUrl = joinUrl(baseUrl, skeletonName)
    end

    local atlasUrl = params.atlasUrl
    if not atlasUrl then
        if not baseUrl then
            return nil, "missing baseUrl/atlasUrl"
        end
        atlasUrl = joinUrl(baseUrl, atlasName)
    end

    return {
        fileName = fileName,
        baseUrl = baseUrl,
        useSkel = useSkel,
        cacheKey = cacheKey,
        localDir = localDir,
        skeletonPath = localDir .. skeletonName,
        atlasPath = localDir .. atlasName,
        skeletonUrl = skeletonUrl,
        atlasUrl = atlasUrl,
        textureNames = params.textureNames,
        textureUrls = params.textureUrls or {},
        force = params.force == true,
        retryCount = params.retryCount or DEFAULT_RETRY_COUNT,
    }
end

function RemoteSpineManager:getRemoteSpineLocalPaths(params)
    local resolved, err = self:_resolveRemoteParams(params)
    if not resolved then
        return nil, err
    end
    return {
        dir = resolved.localDir,
        json = resolved.skeletonPath,
        skeleton = resolved.skeletonPath,
        atlas = resolved.atlasPath,
        cacheKey = resolved.cacheKey,
    }
end

function RemoteSpineManager:isRemoteSpineReady(params)
    local paths = self:getRemoteSpineLocalPaths(params)
    if not paths then
        return false
    end
    if not isFileReady(paths.skeleton) or not isFileReady(paths.atlas) then
        return false
    end
    local atlasContent = getFileUtils():getStringFromFile(paths.atlas)
    local textures = parseAtlasTextures(atlasContent)
    if #textures == 0 and params and params.fileName then
        textures = { params.fileName .. ".png" }
    end
    for i = 1, #textures do
        if not isFileReady(paths.dir .. textures[i]) then
            return false
        end
    end
    return true
end

--[[
下载远程 Spine 套件到本地缓存。
onSuccess(localPaths), onFail(errMsg)
]]
function RemoteSpineManager:downloadRemoteSpine(params, onSuccess, onFail)
    local resolved, err = self:_resolveRemoteParams(params)
    if not resolved then
        if onFail then
            onFail(err or "invalid_params")
        end
        return
    end

    local taskKey = resolved.cacheKey
    local task = self._remoteTasks[taskKey]
    if task then
        table.insert(task.waiters, { onSuccess = onSuccess, onFail = onFail })
        return
    end

    self._remoteTasks[taskKey] = {
        waiters = { { onSuccess = onSuccess, onFail = onFail } },
    }

    local function notifySuccess(localPaths)
        local waiters = self._remoteTasks[taskKey] and self._remoteTasks[taskKey].waiters or {}
        self._remoteTasks[taskKey] = nil
        for i = 1, #waiters do
            if waiters[i].onSuccess then
                waiters[i].onSuccess(localPaths)
            end
        end
    end

    local function notifyFail(errMsg)
        local waiters = self._remoteTasks[taskKey] and self._remoteTasks[taskKey].waiters or {}
        self._remoteTasks[taskKey] = nil
        for i = 1, #waiters do
            if waiters[i].onFail then
                waiters[i].onFail(errMsg)
            end
        end
    end

    ensureDir(getCacheRoot())
    ensureDir(resolved.localDir)

    if not resolved.force and self:isRemoteSpineReady(params) then
        local atlasContent = getFileUtils():getStringFromFile(resolved.atlasPath)
        local textures = parseAtlasTextures(atlasContent)
        if #textures == 0 and resolved.fileName then
            textures = { resolved.fileName .. ".png" }
        end
        local texturePaths = {}
        for i = 1, #textures do
            texturePaths[textures[i]] = resolved.localDir .. textures[i]
        end
        notifySuccess({
            dir = resolved.localDir,
            json = resolved.skeletonPath,
            skeleton = resolved.skeletonPath,
            atlas = resolved.atlasPath,
            textures = texturePaths,
            cacheKey = resolved.cacheKey,
        })
        return
    end

    local skeletonAtlasList = {
        { url = resolved.skeletonUrl, savePath = resolved.skeletonPath, force = resolved.force },
        { url = resolved.atlasUrl, savePath = resolved.atlasPath, force = resolved.force },
    }

    downloadFiles(skeletonAtlasList, resolved.retryCount, function()
        local atlasContent = getFileUtils():getStringFromFile(resolved.atlasPath)
        local textures = resolved.textureNames
        if not textures or #textures == 0 then
            textures = parseAtlasTextures(atlasContent)
        end
        if (#textures == 0) and resolved.fileName then
            textures = { resolved.fileName .. ".png" }
        end
        if #textures == 0 then
            notifyFail("no_texture_in_atlas")
            return
        end

        local textureList = {}
        for i = 1, #textures do
            local texName = textures[i]
            local texUrl = resolved.textureUrls[texName]
            if not texUrl then
                if not resolved.baseUrl then
                    notifyFail("missing baseUrl for texture:" .. tostring(texName))
                    return
                end
                texUrl = joinUrl(resolved.baseUrl, texName)
            end
            table.insert(textureList, {
                url = texUrl,
                savePath = resolved.localDir .. texName,
                force = resolved.force,
            })
        end

        downloadFiles(textureList, resolved.retryCount, function()
            local texturePaths = {}
            for i = 1, #textures do
                texturePaths[textures[i]] = resolved.localDir .. textures[i]
            end
            notifySuccess({
                dir = resolved.localDir,
                json = resolved.skeletonPath,
                skeleton = resolved.skeletonPath,
                atlas = resolved.atlasPath,
                textures = texturePaths,
                cacheKey = resolved.cacheKey,
            })
        end, notifyFail)
    end, notifyFail)
end

function RemoteSpineManager:clearRemoteSpineCache(cacheKey)
    local fileUtils = getFileUtils()
    if cacheKey and cacheKey ~= "" then
        local dir = getCacheRoot() .. sanitizeKey(cacheKey) .. "/"
        if fileUtils:isDirectoryExist(dir) then
            fileUtils:removeDirectory(dir)
        end
        return
    end
    local root = getCacheRoot()
    if fileUtils:isDirectoryExist(root) then
        fileUtils:removeDirectory(root)
    end
end

function RemoteSpineManager:createSpine(jsonFile, atlasFile, scale)
    if not sp then
        return nil
    end
    if not jsonFile or not atlasFile then
        return nil
    end
    local fileUtils = getFileUtils()
    if not fileUtils:isFileExist(jsonFile) or not fileUtils:isFileExist(atlasFile) then
        return nil
    end
    local ok, spineNode = pcall(function()
        if scale then
            return sp.SkeletonAnimation:create(jsonFile, atlasFile, scale)
        end
        return sp.SkeletonAnimation:create(jsonFile, atlasFile)
    end)
    if ok and spineNode then
        return spineNode
    end
    return nil
end

--[[
从 Configuration.RemoteAni 读取 baseUrl / fileName。
RemoteAni[key] 支持：
  { baseUrl = "http://..." } / { url = "http://..." } / "http://..."
未配置时返回 nil，由 playRemoteAni 直接走 localFallback，不使用默认远程地址。
@return baseUrlOrNil, fileNameOrNil
]]
function RemoteSpineManager:getRemoteAniBaseUrl(key, fileName)
    local cfg
    if XH and XH.lobby and XH.lobby.getModule then
        local configuration = XH.lobby:getModule("Configuration")
        if configuration and configuration.getAllConfigData then
            cfg = configuration:getAllConfigData(REMOTE_ANI_CONFIG_KEY) or {}
        end
    end
    cfg = cfg and cfg[key]
    if type(cfg) == "string" and cfg ~= "" then
        return cfg, fileName
    end
    if type(cfg) == "table" then
        local baseUrl = cfg.baseUrl or cfg.url
        if baseUrl and baseUrl ~= "" then
            return baseUrl, cfg.fileName or fileName
        end
    end
    return nil, fileName
end

function RemoteSpineManager:getRemoteAniPreset(key)
    if not key or key == "" then
        return nil
    end
    return REMOTE_ANI_PRESETS[key]
end

--- 浅合并：override 覆盖 base（表字段整表替换，不深拷贝）
local function _mergeParams(base, override)
    local out = {}
    if type(base) == "table" then
        for k, v in pairs(base) do
            out[k] = v
        end
    end
    if type(override) == "table" then
        for k, v in pairs(override) do
            out[k] = v
        end
    end
    return out
end

--- 按 key 组装播放参数；支持 Configuration 覆盖 baseUrl/fileName，并自动挂本地回退
function RemoteSpineManager:_buildParamsFromKey(key, override)
    local preset = self:getRemoteAniPreset(key)
    if not preset then
        return _mergeParams({ key = key }, override)
    end
    local params = _mergeParams(preset, override)
    params.key = key
    if not params.fileName or params.fileName == "" then
        params.fileName = preset.fileName
    end
    return params
end

--- 直接播放 localFallback；成功返回 spine 节点，失败返回 nil
function RemoteSpineManager:_playLocalFallback(node, params, reason)
    if not node or tolua.isnull(node) then
        return nil
    end
    local fallback = params and params.localFallback
    if not fallback then
        print("RemoteSpine localFallback missing. key=", tostring(params and params.key), "reason=", tostring(reason))
        return nil
    end
    local path = fallback.path
    local fileName = fallback.fileName
    local aniName = fallback.aniName or "animation"
    local loop = fallback.loop
    if loop == nil then
        loop = params.loop
    end
    if loop == nil then
        loop = true
    end
    if not path or not fileName then
        print("RemoteSpine localFallback missing path/fileName. key=", tostring(params.key), "reason=", tostring(reason))
        return nil
    end
    if reason then
        print("RemoteSpine use localFallback:", reason, "key=", tostring(params.key))
    end
    if not (XH and XH.SpineManager) then
        return nil
    end
    local spineNode = XH.SpineManager:playAni(node, path, fileName, aniName, loop)
    if spineNode and not tolua.isnull(spineNode) and fallback.scale then
        spineNode:setScale(fallback.scale)
    end
    return spineNode
end

function RemoteSpineManager:_attachDefaultLocalFallback(node, params)
    if params.onFail or not params.localFallback or not node then
        return
    end
    params.onFail = function(err)
        self:_playLocalFallback(node, params, err)
    end
end

--[[
异步下载远程 Spine 并挂到 node 上播放。

调用方式：
  playRemoteAni(node, "buyuIcon")
  playRemoteAni(node, "buyuIcon", { onSuccess = ... })  -- 可选覆盖
  playRemoteAni(node, { key = "buyuIcon", ... })
  playRemoteAni(node, { baseUrl = "...", fileName = "..." })  -- 无预设直传

params 除下载字段外支持：aniName / loop / scale / clear / callBack / eventData / onSuccess / onFail / localFallback
baseUrl 可省略：优先 Configuration.RemoteAni[key]；仍为空则直接 localFallback，不请求默认远程地址
]]
function RemoteSpineManager:playRemoteAni(node, keyOrParams, override)
    local params
    if type(keyOrParams) == "string" then
        params = self:_buildParamsFromKey(keyOrParams, override)
    else
        params = keyOrParams or {}
        if params.key and params.key ~= "" then
            params = self:_buildParamsFromKey(params.key, params)
        end
    end

    if (not params.baseUrl or params.baseUrl == "") and params.key then
        local baseUrl, cfgFileName = self:getRemoteAniBaseUrl(params.key, params.fileName)
        params.baseUrl = baseUrl
        if cfgFileName and cfgFileName ~= "" then
            params.fileName = cfgFileName
        end
    end

    self:_attachDefaultLocalFallback(node, params)

    if not node or tolua.isnull(node) then
        if params.onFail then
            params.onFail("invalid_node")
        end
        return
    end
    if not sp then
        if params.onFail then
            params.onFail("sp_not_ready")
        end
        return
    end

    -- 无有效 baseUrl：不发起远程下载，直接本地回退
    if not params.baseUrl or params.baseUrl == "" then
        local spineNode = self:_playLocalFallback(node, params, "empty_baseUrl")
        if spineNode then
            if params.onSuccess then
                params.onSuccess(spineNode, nil)
            end
        elseif params.onFail and not params.localFallback then
            -- 无 localFallback 时，把空地址失败交给调用方自定义 onFail
            params.onFail("empty_baseUrl")
        end
        return
    end

    local aniName = params.aniName or "animation"
    local loop = params.loop
    if loop == nil then
        loop = true
    end
    local clear = params.clear
    if clear == nil then
        clear = true
    end

    self:downloadRemoteSpine(params, function(localPaths)
        if tolua.isnull(node) then
            if params.onFail then
                params.onFail("node_destroyed")
            end
            return
        end

        local nodeAni = self:createSpine(localPaths.skeleton, localPaths.atlas, params.scale)
        if not nodeAni then
            if params.onFail then
                params.onFail("create_spine_failed")
            end
            return
        end

        local trackid = 0
        if XH and XH.askIDManager and XH.askIDManager.getAskID then
            trackid = XH.askIDManager:getAskID()
        end

        if params.eventData then
            nodeAni:registerSpineEventHandler(function(event)
                for k, v in pairs(params.eventData) do
                    if event.eventData.name == k and v then
                        v()
                    end
                end
            end, sp.EventType.ANIMATION_EVENT)
        end
        if params.callBack then
            nodeAni:registerSpineEventHandler(function(event)
                params.callBack(event)
            end, sp.EventType.ANIMATION_COMPLETE)
        end

        nodeAni:update(0)
        nodeAni:setAnimation(trackid, aniName, loop)
        if clear then
            node:removeAllChildren()
        end
        node:addChild(nodeAni)

        if params.onSuccess then
            params.onSuccess(nodeAni, localPaths)
        end
    end, function(errMsg)
        if params.onFail then
            params.onFail(errMsg)
        end
    end)
end

return RemoteSpineManager
