-- Author : hulin
-- Date   : 2019-12-06
-- 该脚本放所有玩法通用逻辑

local _M = {}


-- local needPreloadType = {
--     [itemMgr.Type_AnimJoinRoom] = true,
--     [itemMgr.Type_AnimOutCard_MJ] = true,
-- }
-- 预加载一遍道具用到的特效
function _M:loadItemFxPool()
    -- local templatesInfo = itemMgr.Template
    -- for k, v in pairs(itemMgr.Template) do
    --     if needPreloadType[v.type] and v.animSrc then
    --         local preNode = g_gameGlobal:getSkeletonAnim(v.animSrc, nil, false)
    --     end
    -- end
end

function _M:checkSpriteFrame(spname)
    local frame = cc.SpriteFrameCache:getInstance():getSpriteFrame(spname)
    if frame then
        return true
    end

    local loadSuc = pcall(function()
        local path2arr = string.split(spname, "/")

        if not path2arr or #path2arr == 1 then
            error("err !! cannot auto deel plist in rootpath.")
        end

        local plistDir = table.concat(path2arr, "/", 1, #path2arr - 1)
        local fullPath = table.concat({ plistDir, "/", path2arr[#path2arr - 1] })
        display.loadSpriteFrames(fullPath .. ".plist", fullPath .. ".png")
    end)

    if loadSuc then
        local frame = cc.SpriteFrameCache:getInstance():getSpriteFrame(spname)
        if not frame then
            print("file not found " .. spname .. "try failed, plz add file..\n" .. debug.traceback())
            return false
        end
        return true
    end

    if G_IS_TEST then
        error("sprite frame not found:" .. spname)
    end
    return false
end

-- 生成玩法名称节点
function _M:genRoomNameNode(mainRule)
    if not mainRule or mainRule <= 0 then
        print("err... wrong mainRule:" .. tostring(mainRule) .. "\n" .. debug.traceback())
        if G_IS_TEST then
            error("err happend while genRoomNameNode.")
        end
        return display.newNode()
    end
    local resDir = "Match/RoomName/"
    local node = display.newNode()
    node:setName("room_name")

    local bkgSrc = resDir .. "img_bkg.png"
    local nameSrc = table.concat({ resDir, mainRule, ".png" })

    if not self:checkSpriteFrame(bkgSrc) or not self:checkSpriteFrame(nameSrc) then
        return node
    end

    -----
    -- gen img
    local namebkg = ccui.ImageView:create(bkgSrc, ccui.TextureResType.plistType)
    local nameImg = ccui.ImageView:create(nameSrc, ccui.TextureResType.plistType)
    node:add(namebkg)
    node:add(nameImg)

    -- 这个位移不要改，后续如果有偏差，让美术改相关图片来调整
    local bkgPosOffset = cc.p(9, 7)
    namebkg:setPosition(bkgPosOffset)

    return node
end

function _M:createJushuNode()
    return cc.Label:createWithBMFont("fonts/fnt_pdk_jushu.fnt", "")
end


-----
-- 入场动画
-- node : 
-- dressInfo : 穿戴信息
function _M:playJoinRoomFx(node, dressInfo, posState)
    if tolua.isnull(node) then
        print("not invalid... \n" .. debug.traceback())
        return
    end

    local animNode = nil
    local animName = dressInfo.animAttr[posState] and dressInfo.animAttr[posState].animName
    animNode = g_gameGlobal:getSkeletonAnim(dressInfo.animSrc, animName or dressInfo.animName, false, function()

        performWithDelay(node, function()
            if not tolua.isnull(animNode) then
                animNode:removeSelf()
            end
        end, 0)
    end)
    node:addChild(animNode, 10)

    return animNode
end

return _M�