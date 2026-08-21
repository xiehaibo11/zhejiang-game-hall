local GameHuanPai = class("GameHuanPai")

local ActionKind = {
    [g_gameConstant.HUANPAI_DIR_SHUN] = "_shun",
    [g_gameConstant.HUANPAI_DIR_NI] = "_ni",
    [g_gameConstant.HUANPAI_DIR_DUI] = "_duihuan",
}

local actionType = {
    [g_gameConstant.USERDATA_MJUI_TYPE_BIG] = "c_",
    [g_gameConstant.USERDATA_MJUI_TYPE_SMALL] = "h_",
    [g_gameConstant.USERDATA_MJUI_TYPE_GREEN_3] = "h_",
    [g_gameConstant.USERDATA_MJUI_TYPE_BIG_GREEN] = "h_",
    [g_gameConstant.USERDATA_MJUI_TYPE_BLUE] = "h_",
    [g_gameConstant.USERDATA_MJUI_TYPE_GREEN_6] = "h_",
}

-- 换四张
local actionType_4zhang = {
    [g_gameConstant.USERDATA_MJUI_TYPE_BIG] = "c_",
    [g_gameConstant.USERDATA_MJUI_TYPE_SMALL] = "h_",
    [g_gameConstant.USERDATA_MJUI_TYPE_GREEN_3] = "lv3_",
    [g_gameConstant.USERDATA_MJUI_TYPE_BIG_GREEN] = "lv2_",
    [g_gameConstant.USERDATA_MJUI_TYPE_BLUE] = "lan_",
    [g_gameConstant.USERDATA_MJUI_TYPE_GREEN_6] = "lv1_",
}

local animFileName = {
    [g_gameConstant.USERDATA_MJUI_TYPE_BIG] = "huanpai_yel",
    [g_gameConstant.USERDATA_MJUI_TYPE_SMALL] = "huanpai_yel",
    [g_gameConstant.USERDATA_MJUI_TYPE_GREEN_3] = "huanpai_lv",
    [g_gameConstant.USERDATA_MJUI_TYPE_BIG_GREEN] = "huanpai_lv2",
    [g_gameConstant.USERDATA_MJUI_TYPE_BLUE] = "huanpai_lan",
    [g_gameConstant.USERDATA_MJUI_TYPE_GREEN_6] = "huanpai_lv1",
}

-- 换四张动画文件名
-- local Change_4_File_Name = "huanpai_4zhang"

local ROOTPATH = "Match/spine/changecards/"

function GameHuanPai:getActionNameByParam(playerNum, kind, isHuan4zhang)
    local cardType = isHuan4zhang and actionType_4zhang[g_UserDataTable.mjCardType] or actionType[g_UserDataTable.mjCardType]
    local huanKind = ActionKind[kind]

    local function isKindOk()
        if kind < g_gameConstant.HUANPAI_DIR_SHUN or kind > g_gameConstant.HUANPAI_DIR_DUI then 
            return false 
        end 

        if playerNum == 2 then 
            if kind ~= g_gameConstant.HUANPAI_DIR_DUI then 
                huanKind = ActionKind[g_gameConstant.HUANPAI_DIR_DUI]
                return true 
            end 
        elseif playerNum == 3 then 
            if kind == g_gameConstant.HUANPAI_DIR_DUI then 
                return false 
            end 
        end 
        return true 
    end 

    if cardType and huanKind and isKindOk() then 
        local path = cardType..tostring(playerNum).."ren"..huanKind
        return path 
    end 
end 

function GameHuanPai:playHuanPaiAction(node,playerNum,kind,_callback)
    local isHuan4zhang = false
    
    if node:getChildrenCount() > 0 then 
        node:removeAllChildren()
    end 
    
    local fileName = nil
    
    -- 换四张则引用换四张文件
    -- if g_gameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG) or g_gameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW) then
    --     fileName = Change_4_File_Name
    --     isHuan4zhang = true
        
    -- else
        fileName = animFileName[g_UserDataTable.mjCardType]
    -- end
    
    local callback = _callback
    if not fileName then
        -- 不执行动画就立即回调
        if callback then 
            callback()
        end
        return
    end
    
    local skeleton = sp.SkeletonAnimation:create(ROOTPATH..fileName..".json", ROOTPATH..fileName..".atlas", 1)

    local actionName = self:getActionNameByParam(playerNum,kind, isHuan4zhang)

    if actionName and not tolua.isnull(node) then 
        skeleton:setAnimation(0, actionName, false)
        node:addChild(skeleton)
        --skeleton:setTimeScale(2.2)
        -- transition.execute(skeleton, nil, {delay = 1, removeSelf = true})
        transition.execute(skeleton,nil, {delay = 2,onComplete = function(target)
            if not tolua.isnull(target) then 
                target:removeSelf()
            end
            if callback then 
                callback()
            end
        end})
    
    -- 不执行动画就立即回调
    else
        if callback then 
            callback()
        end
    end 
end


return GameHuanPai
