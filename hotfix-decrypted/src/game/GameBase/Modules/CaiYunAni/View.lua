local CaiYunAniView = CF.gameClass("CaiYunAniView", CF.ViewBase)
local CaiYunPropNewConfig = CF.gameRequire("Modules.CaiYunPropNew.Config")
local CaiYunGuideConfig = CF.gameRequire("Modules.CaiYunGuide.Config")
local CURRENT_MOUDLE_NAME = ...

local aniPath = "animation/GameCommon/prop_ani/"
local KW_FNT_ADD_NUMBER = "KW_FNT_ADD_NUMBER"
local MAX_PLAYER = 5
local addPos = {
    [1] = {
        [1] = {x=50,y=65},
        [2] = {x=50,y=125},
    },
    [2] = {
        [1] = {x=50,y=65},
        [2] = {x=50,y=125},
    },
    [3] = {
        [1] = {x=-150,y=25},
        [2] = {x=-150,y=85},
    },
    [4] = {
        [1] = {x=-230,y=-40},
        [2] = {x=-230,y=-100},
    },
    [5] = {
        [1] = {x=50,y=65},
        [2] = {x=50,y=125},
    }
}

local jinLongAniPos = {
    [1] = {x=300,y=0},
    [3] = {x=-300,y=0},
    [4] = {x=0,y=-120},
}

local aniTypeMap = {
    [CaiYunPropNewConfig.ANI_TYPE.jinlong] = "long1",
    [CaiYunPropNewConfig.ANI_TYPE.jinfeng] = "feng1",
    [CaiYunPropNewConfig.ANI_TYPE.longfeng] = "longfeng1"
}

local aniTypeHeadMap = {
    [CaiYunPropNewConfig.ANI_TYPE.jinlong] = "long2",
    [CaiYunPropNewConfig.ANI_TYPE.jinfeng] = "feng2",
    [CaiYunPropNewConfig.ANI_TYPE.longfeng] = "longfeng2"
}

function CaiYunAniView:ctor()
    CaiYunAniView.super.ctor(self)
    CF.game:getModule("CaiYunAni"):RequestSysTime()
    self:updateCaiYunAniIcon()
    self:addGuideView()
    self:onUpdateBtnVisible()
    self:startRepeatPlayTipsAction()
    -- tips展示逻辑
    self._imgTimebg:setVisible(false)
    self._txtTime:setVisible(false)
    self:updateTheTips()
    self:initTimeDownView()
    -- 新金币的拜财神Icon放在这里add
    if CF.roomData and CF.roomData:isNewUI() then
        self:updateCaiShenIcon()
    end
end

function CaiYunAniView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CaiYunAniLayer.csb"
end

function CaiYunAniView:getProxyEvents()
    return {
        { module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_PROP_TRANSFER_PROP_SUCC", callBack = "onTransferProps" },
        { module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_PROP_GETAWARD_SUCC", callBack = "onGetCaiYunAward" },
        { module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_UPDATE_CAIYUN_INFO", callBack = "onUpdateCaiYunInfo" },
        { module = CF.game:getModule("CaiYunPropNew.Strategy"), eventKeyName = "NUIPRAYSTRATEGY", callBack = "onPrayStrategy" },
        { module = CF.game:getModule("CaiYunAni"), eventKeyName = "EVENT_PLAY_JINLONG_ANI", callBack = "playJinlongAni" },
        -- { module = CF.game:getModule("CaiYunAni"), eventKeyName = "EVENT_PLAY_JINLONG_ANI2", callBack = "playJinlongAni2" },
        { module = CF.game:getModule("CaiYunAni"), eventKeyName = "EVENT_PLAY_CAIYUN_FULL_ANI", callBack = "playCaiYunFullAni" },
        { module = CF.game:getModule("CaiYunAni"), eventKeyName = "EVENT_PLAY_ADD_CAIYUN", callBack = "onAddCaiYun" },
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        { module = CF.roomData, eventKeyName = "EVENT_GAME_UPDATE_SEER", callBack = "onUpdateBtnVisible"},
        { module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"},
        { module = CF.game:getModule("CaiYunAni"), eventKeyName = "EVENT_UPDATE_TIPS", callBack = "updateTheTips" },
        { module = CF.game:getModule("CaiYunGuide"), eventKeyName = "CAIYUN_SHOW_GUIDE_TIP", callBack = "onGuideShow" },
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"}
    }
end

function CaiYunAniView:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName = "_panelRoot"},
        ["_KW_PANEL_CAIYUN_ICON"] = {varName = "_caiyunIconPanel", type = XH.UI_TYPE.BUTTON, onTouch = "onTouchProp"},
        ["_KW_PANEL_GUIDE_ICON"] = {varName = "_caiyunGuidePanel"},
        ["_KW_PANEL_CAIYUN_ANI"] = {varName = "_caiyunAniNode"},
        ["_KW_PANEL_ITEM_BTN"] = {varName = "_caiyunPropBtn"},
        ["_KW_PANEL_JINLONG_ANI_"] = {varName = "_jinlongAniNode", beginIndex = 1, endIndex = 4},
        ["_KW_PANEL_ADD_CAI"] = {varName = "_addCaiNode"},
        ["_KW_PANEL_ADD_YUN"] = {varName = "_addYunNode"},
        ["_KW_PANEL_TIPS_LEFT"] = {varName = "_tipsLeft"},
        ["_KW_PANEL_TIPS_RIGHT"] = {varName = "_tipsRight"},
        ["_KW_TXT_TIME"] = {varName = "_txtTime"},
        ["_KW_IMG_TIME_BG"] = {varName = "_imgTimebg"},
        ["_KW_PANEL_BAICAISHEN"] = {varName = "_caishenPanel"},
    }
end

function CaiYunAniView:onUpdateBtnVisible()
    self._caiyunIconPanel:setVisible(not CF.roomData:getIsSeer())
end

function CaiYunAniView:addGuideView()
    local view = self._caiyunGuidePanel:getChildByName("GUIDE_VIEW")
    if not view then
        view = CF.gameRequire("Modules.CaiYunGuide.View").new(self._caiyunIconPanel)
        view:setName("GUIDE_VIEW")
        view:addTo(self._caiyunGuidePanel)
        view:setVisible(false)
    end
    self._guideView = view
    if self._guideView and not tolua.isnull(self._guideView) then
        local posX, posY = self._caiyunPropBtn:getPosition()
        self._guideView:updateDirection(posX, posY)
    end

    -- local data = {
    --     propid = 101489,
    --     state = CaiYunGuideConfig.State.TIMEOUT,
    --     scene = CaiYunGuideConfig.Scene.SCENE_0,
    --     time = 5
    -- }
    -- self:runAction(cc.Sequence:create(cc.DelayTime:create(3), cc.CallFunc:create(function() 
    --     CF.game:getModule("CaiYunGuide"):dispatchEvent({ name = "CAIYUN_SHOW_GUIDE_TIP", data = data })
    -- end)))
end

-- 道具使用成功，播放动画
function CaiYunAniView:onTransferProps(event)
    if not event or not event.msg or not event.msg.propid then
        return
    end
    self:playCaiYunAni(event.msg.propid, function()
        if self and self.playAddCaiYunAni and self.playYunShiAni then
            self:playAddCaiYunAni(event)
            self:playYunShiAni(event)
            CF.game:getModule("CaiYunPropNew"):initCaiYunInfo()

            self:stopAllActions()
            self:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.CallFunc:create(function() 
                local module = CF.game:getModule("JuBaoPen")
                module:updateYS()
                module:playTitleAnimation()
            end)))
        end
        if not CF.game:getModule("CaiYunPropNew"):isLong(event.msg.propid) then
            CF.game:getModule("CaiYunPropNew"):sendAddCaiYun(event.msg.propid, event.msg.caiCount, event.msg.yunCount)
        end
    end)
    -- self:playAddCaiYunAni(event)
end

-- 奖励领取成功，播放动画
function CaiYunAniView:onGetCaiYunAward(event)
    if not event or not event.msg or not event.msg.propid then
        return
    end
    self:playCaiYunAni(event.msg.propid, function()
        if self and self.playAddCaiYunAni and self.playYunShiAni then
            self:playAddCaiYunAni(event)
            self:playYunShiAni(event)
            CF.game:getModule("CaiYunPropNew"):initCaiYunInfo()
            -- 弹出通用奖励界面
            self:showAwardInfo(event.msg.prop_info)
        end
        if not CF.game:getModule("CaiYunPropNew"):isLong(event.msg.propid) then
            CF.game:getModule("CaiYunPropNew"):sendAddCaiYun(event.msg.propid, event.msg.caiCount, event.msg.yunCount)
        end
    end)
end

function CaiYunAniView:playCaiYunAni(propid, callback)
    for k,v in pairs(CaiYunPropNewConfig.PropConfig) do
        if v.Propid == propid then
            local params = {path = aniPath .. v.FolderName .. "/", tex = v.FileName .. ".json", ske = v.FileName .. ".atlas", armatureName = v.ArmatureName}
            if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
                local spineNode = self:playDargonBonesSpine(params, false, v.scale, callback)
                if spineNode then
                    self._caiyunAniNode:addChild(spineNode)
                    if v.sound then
                        CF.soundManager:playEffect(v.sound)
                    end
                end
            end
        end
    end
end

-- 收到转发协议播放财运增加动画
function CaiYunAniView:onAddCaiYun(event)
    if not event or not event.msg then
        return
    end
    self:playAddCaiYunAni(event)
    self:playYunShiAni(event)
end

function CaiYunAniView:onUpdateCaiYunInfo()
    if not self or tolua.isnull(self) then
        return
    end
    self:updateCaiYunAniIcon()
end

function CaiYunAniView:updateCaiYunAniIcon()
    -- 超过4人的房间，不显示求财运按钮
    if CF.roomData:getMaxPlayer() > MAX_PLAYER then
        self._caiyunPropBtn:setVisible(false)
        self._caiyunPropBtn:setTouchEnabled(false)
        return
    end

    local caiyunPos = self:getLocalPos()
    self._caiyunPropBtn:setPosition(caiyunPos)

    local caiyunModule = CF.game:getModule("CaiYunPropNew")
    local awardType = caiyunModule:getCurAwardType() or caiyunModule.AWARD_TYPE.NoAward

    local animations = "qiucaiyunicon"
    if awardType ~= caiyunModule.AWARD_TYPE.NoAward then
        animations = "longicon"
    end
    local spineNode = self._caiyunIconPanel:getChildByName("ICON_ANI")
    if not spineNode then
        local params = {path = aniPath .. "cy_icon/", tex = "iconami.json", ske = "iconami.atlas", armatureName = animations}
        if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
            spineNode = self:playDargonBonesSpine(params)
            if spineNode then
                self._caiyunIconPanel:removeAllChildren()
                spineNode:setName("ICON_ANI")
                local size = self._caiyunIconPanel:getContentSize()
                spineNode:setPosition(size.width / 2, size.height / 2 - 20)
                self._caiyunIconPanel:addChild(spineNode)
            end
        end
        return
    end
    spineNode:addAnimation(0, animations, true)
end

function CaiYunAniView:playDargonBonesSpine(params, isloop, scale, callback)
    if sp then
        if isloop == nil or isloop ~= false then
            isloop = true
        end
        scale = scale or 1
        local spineNode = sp.SkeletonAnimation:create(params.path..params.tex, params.path..params.ske, scale);
        if not isloop then
            -- 绑定动画事件监听器
            spineNode:registerSpineEventHandler(function(event)
                -- 如果当前事件为动画结束事件，则移除该动画节点
                if event.type == 'complete' then
                    spineNode:runAction(cc.Sequence:create(
                        cc.DelayTime:create(0.3),
                        cc.CallFunc:create(function()
                            spineNode:removeFromParent(true)
                        end)
                    ))
                    if callback then
                        callback()
                    end
                end
            end, sp.EventType.ANIMATION_COMPLETE)
        end
        spineNode:setAnimation(0, "" .. params.armatureName, isloop)
        return spineNode
    end
    return nil
end

function CaiYunAniView:onTouchProp(send, eventType)
    if eventType == ccui.TouchEventType.began then
        self:onTouchPropBegan(send)
    elseif eventType == ccui.TouchEventType.moved then
        self:onTouchPropMoved(send)
    elseif eventType == ccui.TouchEventType.ended then
        self:onTouchPropEnded(send, fun, icon)
    elseif eventType == ccui.TouchEventType.canceled then
        self:onTouchPropEnded(send)
    end
end

function CaiYunAniView:onTouchPropBegan(send)
    self._BtnPropStartPosX = self._caiyunPropBtn:getPositionX()
    self._BtnPropStartPosY = self._caiyunPropBtn:getPositionY()
    self._BtnPropOffPosX = nil
    self._BtnPropOffPosY = nil
end

function CaiYunAniView:onTouchPropMoved(send)
    local movePos = send:getTouchMovePosition()
    local tempPos = self:convertToNodeSpace(movePos)
    if self._BtnPropOffPosX == nil then
        self._BtnPropOffPosX = self._BtnPropStartPosX - tempPos.x
        self._BtnPropOffPosY = self._BtnPropStartPosY - tempPos.y
    end
    self._caiyunPropBtn:setPosition(tempPos.x + self._BtnPropOffPosX, tempPos.y + self._BtnPropOffPosY)
    self:updateTheTipsShow()
    if self._guideView and not tolua.isnull(self._guideView) then
        self._guideView:updateDirection(tempPos.x + self._BtnPropOffPosX, tempPos.y + self._BtnPropOffPosY)
    end
end

function CaiYunAniView:onTouchPropEnded(send, fun, icon)
    if not self or tolua.isnull(self) then
        return
    end
    local BtnEndPosX = self._caiyunPropBtn:getPositionX()
    local BtnEndPosY = self._caiyunPropBtn:getPositionY()

    local viewSize = self._panelRoot:getContentSize()
    local btnSize = self._caiyunPropBtn:getContentSize()
    if BtnEndPosX < btnSize.width/2 then
        self._caiyunPropBtn:setPositionX(btnSize.width/2)
    elseif BtnEndPosX > viewSize.width - btnSize.width/2 then
        self._caiyunPropBtn:setPositionX(viewSize.width - btnSize.width/2)
    end
    if BtnEndPosY < btnSize.height/2 then
        self._caiyunPropBtn:setPositionY(btnSize.height/2)
    elseif BtnEndPosY > viewSize.height - btnSize.height/2 then
        self._caiyunPropBtn:setPositionY(viewSize.height - btnSize.height/2)
    end

    self:setLocalPos()
    self:updateTheTipsShow()
    if self._guideView and not tolua.isnull(self._guideView) then
        local posX, posY = self._caiyunPropBtn:getPosition()
        self._guideView:updateDirection(posX, posY)
    end

    if math.abs(BtnEndPosX - self._BtnPropStartPosX) <= 10 and math.abs(BtnEndPosY - self._BtnPropStartPosY) <= 10 then
        CF.game:getModule("CaiYunAni"):clickPray()
        CF.gameRequire("Modules.CaiYunPropNew.View").new():showSelf()

        if CF.game:getModule("CaiYunPropNew.Strategy"):getPrayStrategyID() > 0 then
            self:hideTheTips()
        end
        -- 埋点
        local extraData = {}
        local caiyunModule = CF.game:getModule("CaiYunPropNew")
        local awardType = caiyunModule:getCurAwardType() or caiyunModule.AWARD_TYPE.NoAward
        extraData.click_source = awardType ~= caiyunModule.AWARD_TYPE.NoAward and "金龙状态" or "元宝状态"
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.CAIYUNNEW_CLICK_ENTRY, nil, extraData)

        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080825)
    end
end

function CaiYunAniView:onWinSizeChange()
    local iconPos = self:getLocalPos()
    local viewSize = self._panelRoot:getContentSize()
    local btnSize = self._caiyunPropBtn:getContentSize()
    if iconPos.x < btnSize.width/2 then
        iconPos.x = btnSize.width/2
    elseif iconPos.x > viewSize.width - btnSize.width/2 then
        iconPos.x = viewSize.width - btnSize.width/2
    end
    if iconPos.y < btnSize.height/2 then
        iconPos.y = btnSize.height/2
    elseif iconPos.y > viewSize.height - btnSize.height/2 then
        iconPos.y = viewSize.height - btnSize.height/2
    end
    self._caiyunPropBtn:setPosition(iconPos)
    self:setLocalPos()
end

-- 播放头像财运满时动画
function CaiYunAniView:playCaiYunFullAni(event)
    if not event or not event.msg or not event.msg.localSeat or event.msg.localSeat > MAX_PLAYER then
        return
    end
    local localSeat = event.msg.localSeat
    local headNode = CF.game:getModule("CaiYunAni"):getHeadNode(localSeat)
    if not headNode then
        return
    end
    local caiFull = CF.game:getModule("CaiYunAni"):getCaiFull(localSeat)
    local yunFull = CF.game:getModule("CaiYunAni"):getYunFull(localSeat)
    if caiFull == 0 and yunFull == 0 then
        return
    end
    local animation = ""
    if caiFull == 1 and yunFull == 1 then
        animation = "caiyun-guang"
    elseif caiFull == 1 then
        animation = "cai-guang"
    elseif yunFull == 1 then
        animation = "yun-guang"
    end
    local spineNode = headNode:getChildByName("CAIYUN_FULL_ANINODE")
    if not spineNode then
        local params = {path = aniPath .. "cy_full/", tex = "caiyunshen.json", ske = "caiyunshen.atlas", armatureName = animation}
        if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
            spineNode = self:playDargonBonesSpine(params)
            if spineNode then
                headNode:addChild(spineNode)
                spineNode:setName("CAIYUN_FULL_ANINODE")
                return
            end
        end
    end
    spineNode:setAnimation(0, "" .. animation, true)
end

-- 播放财运值增加数字上飘动画
function CaiYunAniView:playAddCaiYunAni(event)
    if not event or not event.msg or not event.msg.localSeat or event.msg.localSeat > MAX_PLAYER then
        return
    end
    local localSeat = event.msg.localSeat
    local headNode = CF.game:getModule("CaiYunAni"):getHeadNode(localSeat)
    if not headNode then
        return
    end
    local function addPlayNode(parentNode, name, index, seat, count)
        local node = parentNode:getChildByName(name)
        if not node then
            local cloneNode = name == "ADD_CAI_NODE" and self._addCaiNode or self._addYunNode
            node = cloneNode:clone()
            node:setName(name)
            parentNode:addChild(node,11)
        end
        node:setPosition(addPos[seat][index])
        node:setVisible(true)
        XH.UITool.setText(node, KW_FNT_ADD_NUMBER, "+" .. tostring(count))
        node:runAction(cc.Sequence:create(
            cc.MoveTo:create(0.3, cc.p(addPos[seat][index].x, addPos[seat][index].y+50)),
            cc.FadeOut:create(1), 
            cc.CallFunc:create(function()
                -- 在淡出动画完成后，将节点隐藏或者将其透明度重新设置为1，并启用可见性
                node:setVisible(false)  -- 启用可见性
                node:setOpacity(255)  -- 重新设置节点的透明度为1
            end)
        ))
    end
    local caiCount = event.msg.caiCount
    local yunCount = event.msg.yunCount
    if caiCount > 0 and yunCount > 0 then
        addPlayNode(headNode, "ADD_CAI_NODE", 2, localSeat, caiCount)
        addPlayNode(headNode, "ADD_YUN_NODE", 1, localSeat, yunCount)
    elseif caiCount > 0 then
        addPlayNode(headNode, "ADD_CAI_NODE", 1, localSeat, caiCount)
    elseif yunCount > 0 then
        addPlayNode(headNode, "ADD_YUN_NODE", 1, localSeat, yunCount)
    end
end

-- 播放运势增加动画
function CaiYunAniView:playYunShiAni(event)
    if not event or not event.msg or not event.msg.localSeat or event.msg.localSeat > MAX_PLAYER then
        return
    end
    local localSeat = event.msg.localSeat
    local headNode = CF.game:getModule("CaiYunAni"):getHeadNode(localSeat)
    if not headNode then
        return
    end
    local params = {path = aniPath .. "cy_yunshi/", tex = "ys-ani_ske_1.json", ske = "ys-ani_ske_1.atlas", armatureName = "newAnimation"}
    if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
        local spineNode = self:playDargonBonesSpine(params, false)
        if spineNode then
            headNode:addChild(spineNode)
        end
    end
end

-- 播放其他玩家使用金龙道具时的金龙动画
function CaiYunAniView:playJinlongAni(event)
    if not event or not event.msg or not event.msg.localSeat or event.msg.localSeat > MAX_PLAYER then
        return
    end
    local localSeat = event.msg.localSeat
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        return
    end
    local headNode = CF.game:getModule("CaiYunAni"):getHeadNode(localSeat)
    if not headNode then
        return
    end
    local propId = event.msg.propid
    for k,v in pairs(CaiYunPropNewConfig.PropConfig) do
        if v.Propid == propId then
            -- local params = {path = aniPath .. v.FolderName .. "/", tex = v.FileName .. ".json", ske = v.FileName .. ".atlas", armatureName = "animation2"}
            -- if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
            --     local spineNode = self:playDargonBonesSpine(params, false, v.scale, function ()
            --         if self and self.playAddCaiYunAni and self.playYunShiAni then
            --             self:playAddCaiYunAni(event)
            --             self:playYunShiAni(event)
            --         end
            --     end)
            --     if spineNode then
            --         headNode:addChild(spineNode)
            --         spineNode:setPosition(jinLongAniPos[localSeat])
            --         if v.sound then
            --             CF.soundManager:playEffect(v.sound)
            --         end
            --     end
            -- end
            self:playAddCaiYunAni(event)
            self:playYunShiAni(event)
        end
    end
end

-- 播放牌上金龙动画
function CaiYunAniView:playJinlongAni2(event)
    if not event or not event.msg or not event.msg.localSeat or event.msg.localSeat > MAX_PLAYER then
        return
    end
    local localSeat = event.msg.localSeat
    local animation
    if localSeat == CF.GameDefine.LOCAL_SEAT.TOP or localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        animation = aniTypeMap[event.msg.aniType]
    else
        animation = aniTypeHeadMap[event.msg.aniType]
    end
    local headNode = CF.game:getModule("CaiYunAni"):getHeadNode(localSeat)
    if not headNode then
        return
    end
    local spineNode = nil
    if localSeat == CF.GameDefine.LOCAL_SEAT.TOP or localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        spineNode = self["_jinlongAniNode" .. localSeat]:getChildByName("JINLONG_ANINODE2")
    else
        spineNode = CF.UITool.seekNodeByName(headNode, "JINLONG_ANINODE2")
    end
    if not spineNode and headNode then
        local params = {path = aniPath .. "cy_jinlong/", tex = "long.json", ske = "long.atlas", armatureName = animation}
        if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
            spineNode = self:playDargonBonesSpine(params, false, 1)
            if spineNode then
                if localSeat == CF.GameDefine.LOCAL_SEAT.TOP or localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self["_jinlongAniNode" .. localSeat] then
                    self["_jinlongAniNode" .. localSeat]:addChild(spineNode)
                else
                    headNode:addChild(spineNode)
                end
                spineNode:setName("JINLONG_ANINODE2")
            end
        end
        return
    end
    spineNode:addAnimation(0, animation, false)
end

function CaiYunAniView:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    -- 小局结束之后，清除金龙的播放定时器，每局开局时重新播放金龙动画
    if event.msg.nowState then
        CF.game:getModule("CaiYunAni"):startJinglongSchedule()
        XH.SysTool.performWithDelayGlobal(function()
            if CF and CF.game then
                CF.game:getModule("CaiYunAni"):onUpdateAni()
            end
        end, 2)
        CF.game:getModule("CaiYunAni"):showTipsLogic()
    else
        CF.game:getModule("CaiYunAni"):removeJinlongScheduler()
    end
end

-- 显示通用领奖界面
function CaiYunAniView:showAwardInfo(prop_info)
    if not prop_info then
        return
    end
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    for k,prop in pairs(prop_info) do
        if prop.id == XH.areaData:getPropDiamndID() then
            awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. prop.count
            awardInfo.image_urls[#awardInfo.image_urls + 1] = "http://palmastatic.wenzhoushuke.com//materials/images/20230607/11463438206.png"
        else
            local m = CF.game:getModule("CaiYunPropNew")
            local remoteUrl = m:getPropRemoteUrl(prop.id)
            if not m:isLong(prop.id) and remoteUrl and remoteUrl ~= "" then
                awardInfo.image_urls[#awardInfo.image_urls + 1] = remoteUrl
                awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. prop.count
            end
        end
    end
    awardInfo.text = " "
    awardInfo.isAdapt = true
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

function CaiYunAniView:onGuideShow(event)
    local data = event.data
    if data.state == CaiYunGuideConfig.State.SHOW then
        self:hideTheTips()
        self._imgTimebg:setVisible(false)
        self._txtTime:setVisible(false)
    elseif data.state == CaiYunGuideConfig.State.TIMEOUT then
        self:updateTheTips()
        self:onPrayStrategy()
    elseif data.state == CaiYunGuideConfig.State.USE_SUCCESS then
        self:updateTheTips()
        self:onPrayStrategy()
    end
end

-- 重复播放提示动画
function CaiYunAniView:startRepeatPlayTipsAction()
    local frameAni = cc.CSLoader:createTimeline(self:getCSBPath())
    self._csbRoot:runAction(frameAni)
    frameAni:gotoFrameAndPlay(0, true)
end

-- 更新整个tips提示
function CaiYunAniView:updateTheTips()
    self:updateTheTipsShow()
    self:updateTheTipsString()
end

function CaiYunAniView:hideTheTips()
    self._tipsLeft:setVisible(false)
    self._tipsRight:setVisible(false)
end

function CaiYunAniView:initTimeDownView()
    local node = import(".TimeDownView", CURRENT_MOUDLE_NAME).new(self._txtTime, function() 
        -- self:updateTheTips()
    end)
    self._txtTime:addChild(node)
end

-- 玩家点击开始游戏
function CaiYunAniView:onPlayerStart(event)
    if event.msg.seatID == CF.roomData:getSelfSeat() then
        local count = CF.roomData:getPlayCount()
        if count > 0 then
            CF.game:getModule("CaiYunAni"):showTipsLogic()
        end
    end
end

-- 更新那个tips显示左右
function CaiYunAniView:updateTheTipsShow()
    local caiyunModule = CF.game:getModule("CaiYunAni")
    local tipsShow = caiyunModule:getTipsShow()
    local pos = cc.p(self._caiyunPropBtn:getPosition())
    self._tipsLeft:setVisible(tipsShow and pos.x >= display.cx)
    self._tipsRight:setVisible(tipsShow and pos.x < display.cx)
end

-- 更新提示语
function CaiYunAniView:updateTheTipsString()
    local caiyunModule = CF.game:getModule("CaiYunAni")
    local tipsString = caiyunModule:getTipsString()
    self._tipsLeft:getChildByName("_KW_IMG_TEXT"):setString(tipsString)
    self._tipsRight:getChildByName("_KW_IMG_TEXT"):setString(tipsString)
end

function CaiYunAniView:setLocalPos()
    local pos = cc.p(self._caiyunPropBtn:getPosition())
    local str = string.format("%d,%d", pos.x, pos.y)
    cc.UserDefault:getInstance():setStringForKey(self:getQiuCaiYunPosKey(), str)
end

function CaiYunAniView:getQiuCaiYunPosKey()
    if CF.roomData:getGameID() == 30588 then
        return "BTN_QIUCAIYUN_30588_POS"
    end
    return "BTN_QIUCAIYUN_POS"
end

function CaiYunAniView:getLocalPos()
    local posStr = cc.UserDefault:getInstance():getStringForKey(self:getQiuCaiYunPosKey(), '0,0')
    local pos = string.split(posStr, ",")
    if tonumber(pos[1]) == 0 or tonumber(pos[2]) == 0 then
        local defaultPos = cc.p(self._caiyunPropBtn:getPosition())
        -- 乌龙位置默认位置修改
        if CF.roomData:getGameID() == 30588 then
            defaultPos.y = defaultPos.y + 300
        end
        local str = string.format("%d,%d", defaultPos.x, defaultPos.y)
        cc.UserDefault:getInstance():setStringForKey(self:getQiuCaiYunPosKey(), str)
        return defaultPos
    end
    return cc.p(tonumber(pos[1]), tonumber(pos[2]))
end

function CaiYunAniView:onPrayStrategy()
    if not self or tolua.isnull(self) then
        return
    end
    -- this.onPrayTips({ show: data.id > 0 && data.endTime > StringFunction.staticInstance.getServerTime(), msg: data.name });
    -- this._endTime = data.endTime;
    self:updateTheTips()
    local haveStrategy = CF.game:getModule("CaiYunPropNew.Strategy"):getPrayStrategyID() > 0
    self._imgTimebg:setVisible(haveStrategy)
    self._txtTime:setVisible(haveStrategy)
end

function CaiYunAniView:updateCaiShenIcon()
    if not self._caishenPanel or not CF.roomData or not CF.roomData:isNewUI() then
        return
    end
    local caishenAni = self._caishenPanel:getChildByName("CAISHEN_PROP_ICON")
    if not caishenAni then
        caishenAni = CF.gameRequire("Modules.Guide.GamePropView").new()
        caishenAni:setName("CAISHEN_PROP_ICON")
        self._caishenPanel:addChild(caishenAni)
    end
    return caishenAni
end

return CaiYunAniView  �s  