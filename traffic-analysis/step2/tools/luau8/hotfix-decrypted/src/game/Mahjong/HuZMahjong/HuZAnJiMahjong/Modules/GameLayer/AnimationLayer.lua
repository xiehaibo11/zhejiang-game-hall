local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
local AnimationLayer = CF.gameClass("AnimationLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.AnimationLayer")

function AnimationLayer:getProxyEvents()
    local proxyEvents = AnimationLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_FANCAISHEN_ANI", callBack = "onShowFanCaiShenAni"}
    return proxyEvents
end

--显示翻财神动画
function AnimationLayer:onShowFanCaiShenAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local exportJsonPath = "res/animation/Mahjong/HuZhou/HZ_fancaishen/"
    local exportJsonName = "HZ_fancaishen"
    local exportJsonFilePath = exportJsonPath .. exportJsonName .. ".ExportJson"
    local aniName = "HZ_fancaishen"
    local pos = cc.p(self._panelRoot:getContentSize().width / 2, self._panelRoot:getContentSize().height / 2)
    
    local addMahBackFunc = function(mahValue)
        self._panelRoot:removeChildByName("OpenMah")
        local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
        ----- 显示牌背
        local mahBack = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD, config) 
        self._panelRoot:addChild(mahBack)
        mahBack:setPosition(pos)
        mahBack:setScale(0.7)
        mahBack:setOpacity(0)
        ----- 显示牌面
        local mahShow = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
        self._panelRoot:addChild(mahShow)
        mahShow:setPosition(pos)
        mahShow:setMahValue(mahValue)
        mahShow:setName("OpenMah")
        mahShow:setVisible(false)
        local delaytime = cc.DelayTime:create(0.2)
        local spawn = cc.Spawn:create(cc.FadeTo:create(0.3,255),cc.ScaleTo:create(0.2,1))
        local callfunc = cc.CallFunc:create(function()
            if mahShow then
                mahShow:runAction(cc.Sequence:create(
                    cc.DelayTime:create(0.1),
                    cc.CallFunc:create(function()
                        if mahBack then mahBack:removeSelf() end
                        mahShow:setVisible(true)
                    end)
                    ))
            end
        end)
        mahBack:runAction(cc.Sequence:create(delaytime, spawn, callfunc))
    end

    CF.UITool.playJsonAnimation(self._panelRoot, aniName, exportJsonFilePath, -1, pos, nil, function()
        self._aniListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._aniListener)
            if event.msg.func then
                event.msg.func()
            end
            if self._panelRoot then
                self._panelRoot:removeChildByName(aniName) 
                self._panelRoot:removeChildByName("OpenMah")   
            end         
        end , 1.0, false)
    end)
    addMahBackFunc(event.msg.mah)
end

return AnimationLayer
