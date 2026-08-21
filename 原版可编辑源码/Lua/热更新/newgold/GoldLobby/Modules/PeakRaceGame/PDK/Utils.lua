

local Utils = {}


local prefixs={"B","R","B","L"}
local middles = {
    [g_gameConstant.CARD_TYPE_CHARACTER] = "character", 
    [g_gameConstant.CARD_TYPE_BAMBOO] = "bamboo", 
    [g_gameConstant.CARD_TYPE_DOT] = "dot", 
    [g_gameConstant.CARD_TYPE_WIND] = "wind", 
    [g_gameConstant.CARD_TYPE_HUA] = "hua"
}

--[[
    value   牌的值 ， 或者牌的外框图片的字符串前缀
    cardFrameStr   牌的外框图片的字符串前缀
    frameColorType 牌的外框  类型值  0 黄色 ， 1 绿色， 2 蓝色
]]
function Utils.getCard(value,iSide, iType)

    if type(value) == "number" and not g_gameGlobal:checkCardValid(value) then 
        local errorstr = "cardvalue is 0   " ..  string.format(debug.traceback())
        __G_REPORT_TO_LUA( errorstr )
        return display.newSprite("empty_frame.png")
    end

    local cardView  , frontView , cardFrameStr

    local frameColorType = g_UserDataTable.gamePaibeiCfgIndex or 0
    

    local iType = iType or g_gameConstant.MajongType.Normal
    local iSide = iSide or g_gameConstant.MajongPosType.Self
    local prefix = 'M'
    if iType == g_gameConstant.MajongType.Normal and iSide ~= g_gameConstant.MajongPosType.Self then
        print("参数错误")
        return
    elseif iType == g_gameConstant.MajongType.Laydown then
        prefix = prefixs[iSide]
    end

    

    if value and type(value) == "string" then 
        cardFrameStr = value
        cardView = display.newSprite("#"..cardFrameStr..frameColorType..".png")
    elseif value == 0x39 then

        if iType == g_gameConstant.MajongType.Laydown then
            if prefix == "L" then 
                cardFrameStr = "paimian/e_mj_b_left"
            elseif prefix == "R" then 
                cardFrameStr = "paimian/e_mj_b_right"
            else
                cardFrameStr = "paimian/B_wind_9"
            end 
        else
            cardFrameStr = "paimian/e_mj_b_up"
        end
        cardView = display.newSprite("#"..cardFrameStr..frameColorType..".png")
    elseif value and type(value)  == "number" then 
               
        local imagView

        local cardName = Utils.getCardName(prefix, value) 

        if cardName then

            frontView = display.newSprite("#"..cardName, ccui.TextureResType.plistType)
            
            cardFrameStr = "paimian/"..prefix.."_".."bg"
            cardView = display.newSprite("#".. cardFrameStr..frameColorType..".png" )
            
            cardView.frontView = frontView

            frontView:addTo(cardView):pos(cardView:getw()/2, cardView:geth()/2)
        end

    end

    if cardView then 

        cardView.prefix = prefix

        cardView.refreshCardFrontSize = function()
            if not tolua.isnull(cardView.frontView) then 
                local isSmallCard = g_UserDataTable.gameCardCfgIndex == 1
                cardView.frontView:setScale( isSmallCard and 0.9 or 1 )
            end
        end

        cardView.refreshCardFrontSize()


        cardView.refreshFrameColor = function()
            frameColorType = g_UserDataTable.gamePaibeiCfgIndex or 0
            cardView:setSpriteFrame( cardFrameStr..frameColorType..".png"  )
        end


        cardView.refreshFlag = function()

            if cardView.frontView then 

                cardView.frontView:removeAllChildren()

                if g_gameGlobal:isHua(value) and (g_gameGlobal:isChiZhou() or g_gameGlobal:isQianShan() ) then
                    display.newSprite("#game/hua.png"):addTo(cardView.frontView):pos(60,78)
                elseif g_gameGlobal:isLaiZi(value) and g_gameGlobal:isTongLing() and not g_gameGlobal:isNewTongLing() then 
                    display.newSprite("#game/diamond.png"):addTo(cardView.frontView):pos(20,78)
                elseif g_gameGlobal:isLaiZi(value) and g_gameGlobal:isNewTongLing() then 
                    display.newSprite("#game/hand_ntl_laizi.png"):addTo(cardView.frontView):pos(14,95)
                elseif g_gameGlobal:isLaiZi(value) and g_gameGlobal:isZZMaJiang() then
                    display.newSprite("game/lai.png"):addTo(cardView.frontView):pos(10,83)
                elseif g_gameGlobal:isZhuFeng(value) and g_gameGlobal:isSuanZui() then
                    display.newSprite("#Textures/GameMahjong/zhu.png"):addTo(cardView.frontView):pos(60,83)
                end
            end

        end
        
        --红中当癞子
        cardView.HongzhongLaizi  = function(cardvalue)
            if cardView.frontView then 
                cardView.frontView:removeAllChildren()
                local cardName = Utils.getTonglingHongzhongCard(cardvalue)
                display.newSprite(cardName):addTo(cardView.frontView):pos(10,90)
            end
        end

        --添加牌顶标签
        cardView.addtopsign  = function()
             display.newSprite("game/marker1.png"):addTo(cardView,1,99):pos(40,140)
        end
        cardView.canceltopsign  = function()
            local  sign = cardView:getChildByTag(300)
            if sign and not tolua.isnull(sign) then
                sign:removeSelf()
            end
        end


        if cardView.frontView then 
            cardView.setCardValue = function(cardvalue)

                value = cardvalue

                local cardName = Utils.getCardName(cardView.prefix , value) 
                if not tolua.isnull(cardView.frontView) then 
                    cardView.frontView:setSpriteFrame( cardName  )
                end
            end
        end
    end

    if not cardView then 
        __G_REPORT_TO_LUA( "cardview is null , value =  " .. value .. " , iSide = " ..iSide  .. " , iType  = " ..iType )
    end

    return cardView
	
end

function Utils.getCardName( prefix , value)

    --万条筒
    local cardType = bit._and(  bit._rshift(value,4)  , 0x7)
    local cardValue = bit._and(value, 0xf)

    local cardName = "paimian/".. prefix..'_'..middles[cardType]..'_'..cardValue..".png"

    return cardName

end

function Utils.getTonglingHongzhongCard( value )
    --万条筒
    if value ~= 0x35 then
        local cardType = bit._and(  bit._rshift(value,4)  , 0x7)
        local cardValue = bit._and(value, 0xf)

        local cardName = "tonglingCard/"..middles[cardType]..cardValue..".png"

        return cardName
    end
end


return Utils