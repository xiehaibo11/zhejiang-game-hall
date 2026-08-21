--ganpengjin
local _pukeAnimation = {}

--播放牌动画
function _pukeAnimation:playCardsAnimationAttachNode( animationType, nodeObj, pos )
    -- body
    if not nodeObj then
        return;
    end

    local animationNode = nil
    if animationType == GameCMD.OUTTYPE_DOUBLELINK then
        animationNode = self:createGameCardsDoubleLinkAnimation()

    elseif animationType == GameCMD.OUTTYPE_THREEWITHTWO then
        animationNode = self:createGameCardsSanDaiTwoAnimation()

    elseif animationType == GameCMD.OUTTYPE_THREEWITHONE then
        animationNode = self:createGameCardsSanDaiOneAnimation()

    elseif animationType == GameCMD.OUTTYPE_THREE then
        animationNode = self:createGameCardsSanGeAnimation()

    elseif animationType == GameCMD.OUTTYPE_FEIJI then
        animationNode = self:createGameFeiJiCardsAnimation();

    elseif animationType == GameCMD.OUTTYPE_SHUNZI then
        animationNode = self:createGameCardsShunZiAnimation();

    elseif PublicFunc.isBomb(animationType) then 
        animationNode = self:createGameCardsBoomAnimation();
    elseif animationType == GameCMD.OUTTYPE_SIDAISAN then

    elseif animationType == GameCMD.OUTTYPE_SIDAISAN then
        animationNode = self:createGameCardsSiDaiSanAnimation();

    elseif animationType == GameCMD.OUTTYPE_SIDAIER then
        animationNode = self:createGameCardsSiDaiTwoAnimation();

    elseif animationType == GameCMD.OUTTYPE_SIDAIYI then
        animationNode = self:createGameCardsSiDaiOneAnimation();
    
    elseif animationType == GameCMD.OPERATE_PASS then
        animationNode = self:createGameYaoBuQiCardsAnimation();

    elseif animationType == GameCMD.PLAYER_FUJI then
        animationNode = self:createFuJiCardsAnimation();
    elseif animationType == GameCMD.PLAYER_BADADUI then
        animationNode = self:createBaDaDuiAnimation();
    elseif animationType == GameCMD.OUTTYPE_TONGHUASHUN then
        animationNode = self:createTonghuashunAnimation();
    end

    if animationNode and nodeObj then
        nodeObj:addChild(animationNode );

        if pos then
            animationNode:setPosition(pos);
        end
    end

    return animationNode
end

--开始动画效果
function _pukeAnimation:createGameBeginCardsAnimation()
    -- body

end

--连对动画
function _pukeAnimation:createGameCardsDoubleLinkAnimation( )
    -- body  
    if g_gameGlobal:isSanfu() or g_gameGlobal:isLiangfu() then
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/sanfu/szldfj" , "liandui")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:registerSpineEventHandler(  function(event)  
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;

    else
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/pdk/szldfj" , "liandui")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:setScale(0.7)
             t_sp:registerSpineEventHandler(  function(event) 
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;
    end 
end

--顺子动画
function _pukeAnimation:createGameCardsShunZiAnimation( )
    -- body  
    if g_gameGlobal:isSanfu() or g_gameGlobal:isLiangfu() then
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/sanfu/szldfj" , "shunzi")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:registerSpineEventHandler(  function(event)  
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;
    else
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/pdk/szldfj" , "shunzi")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:setScale(0.7)
             t_sp:registerSpineEventHandler(  function(event)  
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;
    end 
end

--三个
function _pukeAnimation:createGameCardsSanGeAnimation( )
    -- body  
end

--三带一
function _pukeAnimation:createGameCardsSanDaiOneAnimation( )
    -- body  
end

--三带二
function _pukeAnimation:createGameCardsSanDaiTwoAnimation( )
    -- body
    if g_gameGlobal:isSanfu() or g_gameGlobal:isLiangfu() then
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/sanfu/szldfj" , "sandaier")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:registerSpineEventHandler(  function(event)  
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;
    else
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/pdk/szldfj" , "sandaier")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:setScale(0.7)
             t_sp:registerSpineEventHandler(  function(event)  
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;
    end 
end

--四带一
function _pukeAnimation:createGameCardsSiDaiOneAnimation( )
    -- body
end

--四带二
function _pukeAnimation:createGameCardsSiDaiTwoAnimation( )
    -- body   
end

--四带三
function _pukeAnimation:createGameCardsSiDaiSanAnimation( )
    -- body  
end

--飞机动画
function _pukeAnimation:createGameFeiJiCardsAnimation( )
    -- body
    if g_gameGlobal:isSanfu() or g_gameGlobal:isLiangfu() then
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/sanfu/szldfj" , "feiji")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:registerSpineEventHandler(  function(event)  
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;
    elseif g_gameGlobal:isGuandan() then
        
    else
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/pdk/szldfj" , "feiji")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:setScale(0.7)
             t_sp:registerSpineEventHandler(  function(event)  
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;
    end
    
end

--炸弹动画
function _pukeAnimation:createGameCardsBoomAnimation()
    -- body
    if true or g_gameGlobal:isSanfu() or g_gameGlobal:isLiangfu() or g_gameGlobal:isGuandan() then
        local t_sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/sanfu/zhadan" , "animation")  
        if t_sp then
             t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
             t_sp:registerSpineEventHandler(  function(event)  
                 --t_sp:release();
             end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
         end
        return t_sp;
    else
        local t_sp = _pukeAnimation:createSkeletonAnimation(LYPDKResource.playGameZhaDanJsonRes, LYPDKResource.playGameZhaDanAtlasRes, 1);
        if t_sp then
            t_sp:setAnimation(0, "animation2", false)
            t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
            t_sp:registerSpineEventHandler(  function(event)  
                -- t_sp:release();
            end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
        end
        return t_sp;
    end
    
     
end

--不出牌动画
function _pukeAnimation:createGameBuChuCardsAnimation( )
    -- body  
end

--要不起动画
function _pukeAnimation:createGameYaoBuQiCardsAnimation()
    -- body
    local image = ccui.ImageView:create();
    if image then
        image:loadTexture("MatchAH/"..LYPDKResource.YaoBuQiRes, LYPDKResource.TexturePlistType);
    end
    return image;
end


function _pukeAnimation:createSkeletonAnimation(jsonPath, atlasPath, scale)
    -- body
    if not jsonPath then
        return;
    end


    if not atlasPath then
        return;
    end

    if not scale then
        scale = 1;
    end

    return sp.SkeletonAnimation:create(jsonPath, atlasPath, scale);
end

--春天动画
function _pukeAnimation:createFuJiCardsAnimation()
    -- body
    local t_sp = _pukeAnimation:createSkeletonAnimation(LYPDKResource.playGameFuJiJsonRes, LYPDKResource.playGameFuJiAtlasRes, 1);
    if t_sp then
        t_sp:setAnimation(0, "animation", false)
        t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
        t_sp:registerSpineEventHandler(  function(event)  
            -- t_sp:release();
        end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
    end
    return t_sp;
end

--八大对动画
function _pukeAnimation:createBaDaDuiAnimation()
    -- body
    local t_sp = _pukeAnimation:createSkeletonAnimation(LYPDKResource.playGameFuJiJsonRes, LYPDKResource.playGameFuJiAtlasRes, 1);
    if t_sp then
        t_sp:setAnimation(0, "badadui", false)
        t_sp:setPosition(cc.p(display.width / 2, display.height / 2));
        t_sp:registerSpineEventHandler(  function(event)  
            -- t_sp:release();
        end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
    end
    return t_sp;
end

function _pukeAnimation:createTonghuashunAnimation()
    
end

--操作提示配置
local OperationTipsConfig = {}
OperationTipsConfig[g_gameConstant.MAHJONG_OPERTAION_CALL_DIZHU] = {"bn_GamePlay_BuYao_Action.png", "bn_GamePlay_JiaoDiZhu_Action.png"}
OperationTipsConfig[g_gameConstant.MAHJONG_OPERTAION_SNATCH_DIZHU] = {"bn_GamePlay_BuQiang_Action.png", "bn_GamePlay_QiangDiZhu_Action.png"}
OperationTipsConfig[g_gameConstant.MAHJONG_OPERTAION_CALL_SCORE] = {"bn_GamePlay_BuYao_Action.png", "bn_GamePlay_One_Action.png", "bn_GamePlay_Two_zhcn_Action.png", "bn_GamePlay_Three_Action.png"}

--显示操作说明
function _pukeAnimation:createOperationTips(operation, opValue)
    local config = OperationTipsConfig[operation]
    local resName = config[opValue + 1]
    local tipsImage = ccui.ImageView:create("game/lyPuKe/ddzUI/"..resName, ccui.TextureResType.localType)
    tipsImage:setScale(0)
    tipsImage:runAction(cc.ScaleTo:create(0.1, 1))
    
    return tipsImage
end


return _pukeAnimation