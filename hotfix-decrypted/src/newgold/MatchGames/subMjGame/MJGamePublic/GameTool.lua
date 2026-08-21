local GameTool = {}


-- 给牌添加颜色
function GameTool.addResultDownCardColor(offset, op, cardIndex, t)
    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG
        or op == g_gameConstant.MAHJONG_OPERTAION_CHI then
        t[cardIndex] = {display.COLOR_WHITE, false}
        return
    end

    local chuColor = cc.c3b(215,188,115)
    t[cardIndex] = {display.COLOR_WHITE, false}

    if (offset == -1) and (cardIndex == 1) then
        t[cardIndex] = {chuColor, true}

    elseif (offset == 0) and ((cardIndex == 2) or (cardIndex == 4)) then
        t[cardIndex] = {chuColor, true}

    elseif (offset == 1) and (cardIndex == 3) then
        t[cardIndex] = {chuColor, true}

    else
        t[cardIndex] = {display.COLOR_WHITE, false}
    end
end

function GameTool.transChuOffset(maxPlayerNum, localPos, serverPos, chuOffset)
    if maxPlayerNum == 2 then
        return 0
    elseif maxPlayerNum == 3 then
        if chuOffset == 0 then
            if serverPos == 0 then
                return -1
            elseif serverPos == 1 then
                return -1
            elseif serverPos == 2 then
                return 1
            end
        else
            return chuOffset
        end
    else
        return chuOffset
    end
end

function GameTool.checkIsChuOffsetCardIdx(myLocalPos, chuOffset, cardIndex)
    local neetMarkDir = false
    if myLocalPos == 3 and (cardIndex == 1 or cardIndex == 3) then
        if chuOffset == -1 then
            neetMarkDir = true
        elseif chuOffset == 0 then
            neetMarkDir = true
        elseif chuOffset == 1 then
            neetMarkDir = true
        end
    elseif (cardIndex == 1 or cardIndex == 3) then
        if chuOffset == -1 then
            neetMarkDir = true
        elseif chuOffset == 0 then
            neetMarkDir = true
        elseif chuOffset == 1 then
            neetMarkDir = true
        end
    end
    return neetMarkDir
end

function GameTool.parseResultDownCardData(downCards, localTablePos, serverTablePos, maxPlayerNum)
    local res = {}
    local huaCards = {}
    for i,cards in ipairs(downCards) do
        local c1 = bit._and(cards.cardValue, 0xff)
        local c2 = bit._and(bit._rshift(cards.cardValue, 8), 0xff)
        local c3 = bit._and(bit._rshift(cards.cardValue, 16), 0xff)
        local chi_card = bit._and(bit._rshift(cards.cardValue, 24), 0xff)

        if cards.type == 0 then            
            if c1 ~= 0 then huaCards[#huaCards+1] = c1 end
            if c2 ~= 0 then huaCards[#huaCards+1] = c2 end
            if c3 ~= 0 then huaCards[#huaCards+1] = c3 end
            if chi_card ~= 0 then huaCards[#huaCards+1] = chi_card end
        else

            local cData = {type = cards.type}
            if cards.type == g_gameConstant.MAHJONG_OPERTAION_AN_GANG
                or cards.type == g_gameConstant.MAHJONG_OPERTAION_MING_GANG
                or cards.type == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
                cData.card = {c1, c1, c1, c1}
            else
                cData.card = {c1, c2, c3}
            end

            -- 设置颜色
            cData.cardColor = {}
            local transedOffset = GameTool.transChuOffset(maxPlayerNum, localTablePos, serverTablePos, cards.chuOffset)
            
            for i,_ in ipairs(cData.card) do
                GameTool.addResultDownCardColor(transedOffset, cards.type, i, cData.cardColor)
            end
            cData.chuOffset = transedOffset

            table.insert(res, cData)
        end
    end
    return res, huaCards
end

function GameTool.transResultHuType(serverHuTypeList)
    local sTmp = {}
    local cardType, huType, moreCardType

    for i,v in ipairs(serverHuTypeList) do
        sTmp[v] = true
    end

    if sTmp[g_gameConstant.GAME_OPERTAION_HU_CODE_QING_YI_SE] then
        if sTmp[g_gameConstant.GAME_OPERTAION_HU_CODE_HAO_HUA_QI_DUI] then
            cardType = g_gameConstant.SHARE_FLAUNT_QING_HAO_HUA_QI_DUI

        elseif sTmp[g_gameConstant.GAME_OPERTAION_HU_CODE_QI_XIAO_DUI] then
            cardType = g_gameConstant.SHARE_FLAUNT_QING_QI_XIAO_DUI

        elseif sTmp[g_gameConstant.GAME_OPERTAION_HU_CODE_PENG_PENG_HU] then
            cardType = g_gameConstant.SHARE_FLAUNT_QING_PENG_PENG_HU
        else

            cardType = g_gameConstant.SHARE_FLAUNT_QING_YI_SE
        end

        sTmp[g_gameConstant.GAME_OPERTAION_HU_CODE_QING_YI_SE]=nil
        sTmp[g_gameConstant.GAME_OPERTAION_HU_CODE_HAO_HUA_QI_DUI]=nil
        sTmp[g_gameConstant.GAME_OPERTAION_HU_CODE_QI_XIAO_DUI]=nil
        sTmp[g_gameConstant.GAME_OPERTAION_HU_CODE_PENG_PENG_HU]=nil
    end
    
    local cardTypeMapTab = 
    {
        {g_gameConstant.GAME_OPERTAION_HU_CODE_PENG_PENG_HU, g_gameConstant.SHARE_FLAUNT_PENG_PENG_HU},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_QI_XIAO_DUI, g_gameConstant.SHARE_FLAUNT_QI_XIAO_DUI},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_HAO_HUA_QI_DUI, g_gameConstant.SHARE_FLAUNT_HAO_HUA_QI_DUI},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_SHI_SAN_YAO, g_gameConstant.SHARE_FLAUNT_SHI_SAN_YAO},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_19ZI_PENG_PENG_HU, g_gameConstant.SHARE_FLAUNT_19ZI_PENG_PENG_HU},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_HUN_YI_SE, g_gameConstant.SHARE_FLAUNT_HUN_YI_SE},
    }
    for _,v in ipairs(cardTypeMapTab) do
        if sTmp[ v[1] ] then
            if cardType == nil then
                cardType = v[2]
            else
                moreCardType = v[2]
            end
            sTmp[ v[1] ]=nil
        end
    end

    local huTypeMapTab = 
    {
        {g_gameConstant.GAME_OPERTAION_HU_CODE_TIAN_HU, g_gameConstant.SHARE_FLAUNT_TIAN_HU},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_DI_HU, g_gameConstant.SHARE_FLAUNT_DI_HU},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_GANG_SHANG_KAI_HUA, g_gameConstant.SHARE_FLAUNT_GANG_SHANG_KAI_HUA},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_HUA_SHANG_TIAN_HUA, g_gameConstant.SHARE_FLAUNT_HUA_SHANG_TIAN_HUA},
        {g_gameConstant.GAME_OPERTAION_HU_CODE_QIANG_GANG_HU, g_gameConstant.SHARE_FLAUNT_QIANG_GANG_HU},
    }

    if cardType ~= nil then
        table.insert( huTypeMapTab, 1, {g_gameConstant.GAME_OPERTAION_HU_CODE_LOCAL_ZI_MO, g_gameConstant.SHARE_FLAUNT_ZI_MO} )
    end


    for _,v in ipairs(huTypeMapTab) do
        if sTmp[ v[1] ] then
            huType = v[2]
            sTmp[ v[1] ]=nil
        end
    end
    
    return cardType, huType, moreCardType
end

function GameTool.getOtherHuEffectNodeAndSfx(huCardType, huType, isJiehu)
    local imgPath = nil
    local effectNode = nil
    local csz = cc.size(0,0)
    local sfxName = ""

    local tmpKeyMap = {}
    tmpKeyMap[#tmpKeyMap+1] = huCardType
    tmpKeyMap[#tmpKeyMap+1] = huType

    for i,key in ipairs(tmpKeyMap) do
        local dataTab = {
            -- [g_gameConstant.SHARE_FLAUNT_QING_YI_SE]               = "js_dh_qingyise.mp3",
            -- [g_gameConstant.SHARE_FLAUNT_PENG_PENG_HU]             = "js_dh_pengpenghu.mp3",
            -- [g_gameConstant.SHARE_FLAUNT_QI_XIAO_DUI]              = "js_dh_qixiaodui.mp3",
            -- [g_gameConstant.SHARE_FLAUNT_HAO_HUA_QI_DUI]           = "js_dh_haohuaqixiaodui.mp3",
            -- [g_gameConstant.SHARE_FLAUNT_QING_PENG_PENG_HU]        = "",
            -- [g_gameConstant.SHARE_FLAUNT_QING_QI_XIAO_DUI]         = "",
            -- [g_gameConstant.SHARE_FLAUNT_QING_HAO_HUA_QI_DUI]      = "",
            -- [g_gameConstant.SHARE_FLAUNT_SHI_SAN_YAO]              = "",
            -- [g_gameConstant.SHARE_FLAUNT_TIAN_HU]                  = "",
            -- [g_gameConstant.SHARE_FLAUNT_DI_HU]                    = "",
            [g_gameConstant.SHARE_FLAUNT_GANG_SHANG_KAI_HUA]       = "js_dh_gangshangkaihua.mp3",
            -- [g_gameConstant.SHARE_FLAUNT_HUA_SHANG_TIAN_HUA]       = "",
            -- [g_gameConstant.SHARE_FLAUNT_QIANG_GANG_HU]            = "js_dh_qiangganghu.mp3",
            -- [g_gameConstant.SHARE_FLAUNT_19ZI_PENG_PENG_HU]        = "",
        }

        local imgTab = {
            [g_gameConstant.SHARE_FLAUNT_GANG_SHANG_KAI_HUA]               = true,
        }

        if imgTab[key] then
            imgPath = string.format( "shareFlaunt/shareFlaunt_Text%s.png", tostring(key))
        end
        
        sfxName = dataTab[key]
    end
        
    if (not imgPath or not cc.FileUtils:getInstance():isFileExist(imgPath)) and isJiehu then
        imgPath = "noplist/otherHuEffect_jiehu.png"
    end

    if imgPath and cc.FileUtils:getInstance():isFileExist(imgPath) then
        local csbPath = "Match/animation/dahu.csb"
        local aniName = "animation0"
    
        local node = cc.CSLoader:createNode(csbPath)
        local actTimeLine = cc.CSLoader:createTimeline(csbPath)
        node:runAction(actTimeLine)
        actTimeLine:play(aniName, false) 

        local startFrame = actTimeLine:getStartFrame()
        local endFrame = actTimeLine:getEndFrame()
        local frameInterval = 1/60
        local totalTime = frameInterval*(endFrame-startFrame)/actTimeLine:getTimeSpeed()
    
        if totalTime <= 0 then totalTime = 0.01 end
        performWithDelay(node, function() node:removeSelf() end, totalTime)
        
        
        local pngNode = g_gameGlobal:findChildWithName(node, "sp_ani")
        if pngNode then
            local ch = pngNode:getContentSize().height
            pngNode:initWithFile(imgPath)

            local scaleArg = ch/pngNode:getContentSize().height
            node:setScale(scaleArg)
            csz.width = pngNode:getContentSize().width*scaleArg
            csz.height = ch

            effectNode = node
        end
    end        

    if huCardType and (not sfxName or #sfxName==0) then
        --sfxName = "dahu.mp3"
    end

    return effectNode, sfxName, csz
end

function GameTool.addLaiziMarkInCardNode(cardNode, posState)
    if not tolua.isnull(cardNode) then
        -- cardNode:setColor(g_gameConstant.LAIZI_COLOR)
        local sp = cardNode:getChildByName("CARD_MARK_LAIZI")
        if not sp then
            cardNode:removeChildByName("CARD_MARK_LAIZI")
            sp = cc.Sprite:create("paimian/lai_icon.png")
            sp:setName("CARD_MARK_LAIZI")
            cardNode:addChild(sp, 100)

            
            local baseNodeSize = cardNode:getContentSize()
            local scalW = 85
            local nodeScalW = scalW
            if posState == 2 then
                sp:setAnchorPoint(cc.p(1, 1))
                sp:setPosition(0, cardNode:getContentSize().height)
                sp:setRotation(-90)
                nodeScalW = baseNodeSize.height
            elseif posState == 3 then
                sp:setAnchorPoint(cc.p(1, 1))
                sp:setPosition(cardNode:getContentSize().width, cardNode:getContentSize().height)
                nodeScalW = baseNodeSize.width
            elseif posState == 4 then
                sp:setAnchorPoint(cc.p(1, 1))
                sp:setPosition(cardNode:getContentSize().width, 0)
                sp:setRotation(90)
                nodeScalW = baseNodeSize.height
            else
                sp:setAnchorPoint(cc.p(1, 1))
                sp:setPosition(cardNode:getContentSize().width, cardNode:getContentSize().height)
                nodeScalW = baseNodeSize.width
            end

            -- checkScale
            if nodeScalW/scalW < 1 then
                sp:setScale(nodeScalW/scalW)
            end
        end

        sp:setVisible(true)
	end
end

return GameTool  .  