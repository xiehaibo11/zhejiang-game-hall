local PropAniView = CF.gameClass("PropAniView", CF.ViewBase)

function PropAniView:ctor(param)
    PropAniView.super.ctor(self)
    local aniLayer = ccui.Layout:create()
    aniLayer:setContentSize(self:getContentSize())
    -- aniLayer:setBackGroundColorType(ccui.LayoutBackGroundColorType.solid)
    -- aniLayer:setBackGroundColor(cc.c3b(70, 0, 0))
    -- aniLayer:setOpacity(80)
    self:addChild(aniLayer)
    self._aniLayer = aniLayer
end

function PropAniView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PropAniLayer.csb"
end

function PropAniView:getBindingInfo()
    return {}
end

function PropAniView:getProxyEvents()
    return {
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_SHOW_THROW_PROP_ANI_NEW", callBack = "onShowThrowPropAni"}
    }
end

function PropAniView:getPropAniInfo(index)
    local configer = CF.gameRequire("Modules.PlayerInfo.PropAniConfiger").new()
    return configer:getAniInfoByIndex(index)
end

function PropAniView:onShowThrowPropAni20(fromSeat, toSeat, usePropCnt)
    local soundPath = "res/audio/PropAni/"
    local filePath = "res/animation/GameCommon/prop_ani/zzb_hddy_xyx/"
    local fileName = "zzb_hddy_xyx"

    local fromNode = self:addNodeToAniLayer(self:getHeadPanel(fromSeat))
    local toNode = self:addNodeToAniLayer(self:getHeadPanel(toSeat))
    if fromNode == nil or toNode == nil then
        return
    end

    local effect = usePropCnt > 1 and "prop_xingyixing_shi.mp3" or "prop_xingyixing_dan.mp3"
    local arriveAniName = usePropCnt > 1 and "shi" or "dan"
    local pw = toNode:getWorldPosition()
    local visibleSize = cc.Director:getInstance():getVisibleSize()
    local dir = 1 -- 右侧为1，左侧为-1
    if pw.x >= visibleSize.width / 2 then
        arriveAniName = usePropCnt > 1 and "shi2" or "dan2"
        dir = -1
    end
    if CF.roomData:getGameID() == 30155 then -- 打通特殊处理
        if toSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            toNode:setPositionX(toNode:getPositionX() + 300)
            toNode:setPositionY(toNode:getPositionY() + 100)
        elseif toSeat == CF.GameDefine.LOCAL_SEAT.LEFT then
            toNode:setPositionX(toNode:getPositionX() + 150)
        elseif toSeat == CF.GameDefine.LOCAL_SEAT.TOPLEFT then
            toNode:setPositionX(toNode:getPositionX() + 150)
            toNode:setPositionY(toNode:getPositionY() + 50)
        elseif toSeat == CF.GameDefine.LOCAL_SEAT.TOPMID then
            toNode:setPositionX(toNode:getPositionX() + 200)
            toNode:setPositionY(toNode:getPositionY() - 100)
            arriveAniName = usePropCnt > 1 and "shi" or "dan"
            dir = 1
        elseif toSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            toNode:setPositionX(toNode:getPositionX() - 150)
            toNode:setPositionY(toNode:getPositionY() + 50)
        elseif toSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
            toNode:setPositionX(toNode:getPositionX() - 150)
        end
    else
        if pw.x >= visibleSize.width / 2 then
            toNode:setPositionX(toNode:getPositionX() - 200)
        else
            toNode:setPositionX(toNode:getPositionX() + 200)
        end
        if pw.y >= visibleSize.height / 2 then
            toNode:setPositionY(toNode:getPositionY() - 100)
        else
            toNode:setPositionY(toNode:getPositionY() + 100)
        end
    end

    local offset = cc.p(132, 43)
    local runAniNode
    local removeRunAni = function()
        if runAniNode then
            runAniNode:delayRemoveFromParent()
        end
    end
    runAniNode = XH.SpineManager:playAni(fromNode, filePath, fileName, "run", true, nil, nil, false)
    if runAniNode then
        local pos0 = self:getAniLayerPosition(fromNode, fromNode)
        local pos = self:getAniLayerPosition(fromNode, toNode)
        pos = cc.p(pos.x + offset.x * dir, pos.y - offset.y)
        if pos0.x > pos.x then
            runAniNode:setScaleX(-1)
        else
            runAniNode:setScaleX(1)
        end
        runAniNode:setPosition(pos0)
        runAniNode:runAction(cc.Sequence:create(cc.MoveTo:create(0.4, pos)))
    end

    local aniNode
    local completeFunction = function()
        if aniNode then
            aniNode:delayRemoveFromParent()
            toNode:runAction(
                cc.Sequence:create(
                    cc.DelayTime:create(0.1),
                    cc.CallFunc:create(
                        function()
                            toNode:setPosition(0, 0)
                        end
                    )
                )
            )
        end
        if fromNode then
            fromNode:delayRemoveFromParent()
        end
        if toNode then
            toNode:delayRemoveFromParent()
        end
    end
    aniNode = XH.SpineManager:playAni(toNode, filePath, fileName, arriveAniName, false, completeFunction, {["xj"] = removeRunAni})
    CF.soundManager:playEffect(soundPath .. effect)
end

function PropAniView:onShowThrowPropAni22(fromSeat, toSeat, usePropCnt)
    local soundPath = "res/audio/PropAni/"
    local filePath = "res/animation/GameCommon/prop_ani/zzb_hddy_xcyun/"
    local fileName = "zzb_hddy_xcyun"

    local fromNode = self:addNodeToAniLayer(self:getHeadPanel(fromSeat))
    local toNode = self:addNodeToAniLayer(self:getHeadPanel(toSeat))
    if fromNode == nil or toNode == nil then
        return
    end

    local effect = usePropCnt > 1 and "prop_xiouqi_shi.mp3" or "prop_xiouqi_dan.mp3"
    local arriveAniName = usePropCnt > 1 and "shi" or "dan"
    local arriveAniName2 = usePropCnt > 1 and "shitx" or "dantx"
    local pw = toNode:getWorldPosition()
    local visibleSize = cc.Director:getInstance():getVisibleSize()
    if pw.x >= visibleSize.width / 2 then
        arriveAniName = usePropCnt > 1 and "shi2" or "dan2"
    end

    local aniNode
    local formNodeAniFunction = function()
        XH.SpineManager:playAni(fromNode, filePath, fileName, arriveAniName2)
    end
    local completeFunction = function()
        if aniNode then
            aniNode:delayRemoveFromParent()
        end
        if toNode then
            toNode:delayRemoveFromParent()
        end
    end
    aniNode = XH.SpineManager:playAni(toNode, filePath, fileName, arriveAniName, false, completeFunction, {["cx"] = formNodeAniFunction})
    if aniNode and toSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and CF.roomData:getGameID() == 30155 then
        aniNode:setScale(0.7)
        aniNode:setPositionY(200)
    elseif aniNode and toSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and math.abs(pw.x - visibleSize.width / 2) < 20 then
        aniNode:setScale(0.7)
        aniNode:setPositionY(50)
        aniNode:setRotation(10)
    end
    CF.soundManager:playEffect(soundPath .. effect)
    if usePropCnt > 1 then
        local aniNodeBg
        local completeFunctionBG = function()
            if aniNodeBg then
                aniNodeBg:delayRemoveFromParent()
            end
        end
        aniNodeBg = XH.SpineManager:playAni(self._propAniPanel, filePath, fileName, "kuang", false, completeFunctionBG)
    end
end

function PropAniView:onShowThrowPropAniMass23(fromSeat, _, usePropCnt, massState)
    local soundPath = "res/audio/PropAni/"
    local filePath = "res/animation/GameCommon/prop_ani/zzb_hddy_mu/"
    local fileName = "zzb_hddy_mu"

    local arriveAniNameMu = usePropCnt > 1 and "haohuashi" or "haohuadan"
    local arriveAniName = usePropCnt > 1 and "shifu" or "danfu"
    local arriveAniName2 = usePropCnt > 1 and "shitx" or "dantx"

    local massSeat = string.split(massState, ",")
    local massSeatCnt = 0
    -- 转发逻辑
    local p = CF.roomData:getPlayerDatas()
    for _, v in pairs(p) do
        local pSeat = v:getSeat()
        local pLocalSeat = CF.roomData:seatToLocal(pSeat)
        if table.has(massSeat, tostring(pSeat)) ~= nil then
            local toSeat = pLocalSeat
            local toNode = self:addNodeToAniLayer(self:getHeadPanel(toSeat))
            if toNode then
                local toNode = self:addNodeToAniLayer(toNode)
                local aniNode1
                local completeFunction1 = function()
                    if aniNode1 then
                        aniNode1:delayRemoveFromParent()
                    end
                end
                aniNode1 = XH.SpineManager:playAni(toNode, filePath, fileName, arriveAniName, false, completeFunction1, nil, false)
                massSeatCnt = massSeatCnt + 1
            end
        end
    end

    local fromNode = self:addNodeToAniLayer(self:getHeadPanel(fromSeat))
    if fromNode == nil then
        return
    end

    local aniNode2
    local completeFunction2 = function()
        if aniNode2 then
            aniNode2:delayRemoveFromParent()
        end
    end
    local aniNode3
    local completeFunction3 = function()
        if aniNode3 then
            aniNode3:delayRemoveFromParent()
        end
        if fromNode then
            fromNode:delayRemoveFromParent()
        end
        if toNode then
            toNode:delayRemoveFromParent()
        end
    end

    aniNode2 = XH.SpineManager:playAni(fromNode, filePath, fileName, arriveAniNameMu, false, completeFunction2, nil, false)
    aniNode3 = XH.SpineManager:playAni(fromNode, filePath, fileName, arriveAniName2, false, completeFunction3, nil, false)

    local texts = {10, 10, 10, 100, 100, 9999}
    if usePropCnt > 1 then
        texts = {10, 10, 10, 10, 10, 100, 100, 100, 9999}
    end
    for i = 1, #texts do
        local scoreNode = ccui.TextBMFont:create()
        scoreNode:setAnchorPoint(0.5, 0)
        scoreNode:setOpacity(0)
        scoreNode:setFntFile("fnt/fnt_jia-export.fnt")
        scoreNode:setString(string.format("财运+%d", texts[i] * massSeatCnt))
        fromNode:addChild(scoreNode)
        scoreNode:tryAddLuaComponent(
            cc.ext.CompSpineAction,
            {
                jsonFilePath = filePath .. "zzb_hddy_mu_animation.json",
                animationName = arriveAniName2,
                boneName = "ziji" .. i,
                slotName = "ziji" .. i,
                callback = function()
                    scoreNode:delayRemoveFromParent()
                end
            }
        )
    end

    local pw = fromNode:getWorldPosition()
    local visibleSize = cc.Director:getInstance():getVisibleSize()
    if pw.x >= visibleSize.width / 2 then
        aniNode2:setPositionX(aniNode2:getPositionX() - 200)
    else
        aniNode2:setPositionX(aniNode2:getPositionX() + 200)
    end
    if pw.y >= visibleSize.height / 2 then
        aniNode2:setPositionY(aniNode2:getPositionY() - 200)
    else
        aniNode2:setPositionY(aniNode2:getPositionY() + 200)
    end

    local effect = usePropCnt > 1 and "prop_muyu_shi.mp3" or "prop_muyu_dan.mp3"
    CF.soundManager:playEffect(soundPath .. effect)

    local aniNodeBg
    local completeFunctionBG = function()
        if aniNodeBg then
            aniNodeBg:delayRemoveFromParent()
        end
    end
    aniNodeBg = XH.SpineManager:playAni(self._propAniPanel, filePath, "zzb_hddy_mu2", "animation", false, completeFunctionBG)
end

function PropAniView:onShowThrowPropAni23(fromSeat, toSeat, usePropCnt)
    local soundPath = "res/audio/PropAni/"
    local filePath = "res/animation/GameCommon/prop_ani/zzb_hddy_mu/"
    local fileName = "zzb_hddy_mu"

    local fromNode = self:addNodeToAniLayer(self:getHeadPanel(fromSeat))
    local toNode = self:addNodeToAniLayer(self:getHeadPanel(toSeat))
    if fromNode == nil or toNode == nil then
        return
    end

    local arriveAniNameMu = usePropCnt > 1 and "shi" or "dan"
    local arriveAniName = usePropCnt > 1 and "shifu" or "danfu"
    local arriveAniName2 = usePropCnt > 1 and "shitx" or "dantx"

    local aniNode1
    local completeFunction1 = function()
        if aniNode1 then
            aniNode1:delayRemoveFromParent()
        end
    end
    local aniNode2
    local completeFunction2 = function()
        if aniNode2 then
            aniNode2:delayRemoveFromParent()
        end
        if fromNode then
            fromNode:delayRemoveFromParent()
        end
        if toNode then
            toNode:delayRemoveFromParent()
        end
    end
    local aniNode3
    local completeFunction3 = function()
        if aniNode3 then
            aniNode3:delayRemoveFromParent()
        end
    end

    aniNode1 = XH.SpineManager:playAni(toNode, filePath, fileName, arriveAniName, false, completeFunction1, nil, false)
    aniNode2 = XH.SpineManager:playAni(toNode, filePath, fileName, arriveAniNameMu, false, completeFunction2, nil, false)
    aniNode3 = XH.SpineManager:playAni(fromNode, filePath, fileName, arriveAniName2, false, completeFunction3, nil, false)

    local texts = {10, 10, 10}
    if usePropCnt > 1 then
        texts = {10, 10, 10, 10, 10, 100, 100, 100, 9999}
    end
    for i = 1, #texts do
        local scoreNode = ccui.TextBMFont:create()
        scoreNode:setAnchorPoint(0.5, 0)
        scoreNode:setOpacity(0)
        scoreNode:setFntFile("fnt/fnt_jia-export.fnt")
        scoreNode:setString(string.format("财运+%d", texts[i]))
        fromNode:addChild(scoreNode)
        scoreNode:tryAddLuaComponent(
            cc.ext.CompSpineAction,
            {
                jsonFilePath = filePath .. "zzb_hddy_mu_animation.json",
                animationName = arriveAniName2,
                boneName = "ziji" .. i,
                slotName = "ziji" .. i,
                callback = function()
                    scoreNode:delayRemoveFromParent()
                end
            }
        )
    end

    local pw = toNode:getWorldPosition()
    local visibleSize = cc.Director:getInstance():getVisibleSize()
    if pw.x >= visibleSize.width / 2 then
        aniNode2:setPositionX(aniNode1:getPositionX() - 200)
    else
        aniNode2:setPositionX(aniNode1:getPositionX() + 200)
    end
    if pw.y >= visibleSize.height / 2 then
        aniNode2:setPositionY(aniNode1:getPositionY() - 200)
    else
        aniNode2:setPositionY(aniNode1:getPositionY() + 200)
    end

    local effect = usePropCnt > 1 and "prop_muyu_shi.mp3" or "prop_muyu_dan.mp3"
    CF.soundManager:playEffect(soundPath .. effect)
end

function PropAniView:playDragonBoneAni(node, name, path, filename, armatureName, aniName, times, isSelfAni)
    if path == nil or node == nil then
        return
    end   
    if filename == nil then
        return
    end   
    if armatureName == nil or armatureName == "" then
        return
    end
    local findNode = ccui.Helper:seekWidgetByName(node,name)
    if not name then
        findNode = node
    end
    if isSelfAni then
        findNode = self._propAniPanel or findNode
    end
    if findNode then
        local params = {
            path = path,
            ske = filename.."_ske.json",
            tex = filename.."_tex.json",
            armatureName = armatureName,
            dragonBonesName = filename,
            animationName = aniName
        }
        local armatureLightDisplay, aniTime = display.playDargonBonesAnimByTimes(params,times)
        if armatureLightDisplay then
            findNode:addChild(armatureLightDisplay)
            return armatureLightDisplay, aniTime 
        end
    end
    return nil
end

function PropAniView:onShowThrowPropAni(event)
    self:stopAllActions()
    self:runAction(cc.Sequence:create(cc.DelayTime:create(5), cc.CallFunc:create(function ()
        -- 防止内存泄露，清除动画层
        self._aniLayer:removeAllChildren()
    end)))
    local msg = event.msg
    if not msg then
        return
    end
    self.getHeadPanel = function(self, ...)
        if event.msg.headPanelFunc then
            return event.msg.headPanelFunc(...)
        end
        return self
    end
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/propinfo.plist")

    local fromSeat = msg.fromLocalSeat
    local toSeat = msg.toLocalSeat
    local index = msg.faceAniIndex
    local usePropCnt = msg.propCnt
    
    local seat = CF.roomData:localToSeat(fromSeat)
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData and CF.game:getModule("PlayerInfo"):getBlockedEmojis(playerData:getNumberID()) then
        return
    end

    if msg.isMass then
        if self["onShowThrowPropAniMass" .. index] then
            self["onShowThrowPropAniMass" .. index](self, fromSeat, toSeat, usePropCnt, msg.isMass)
            return
        end
        local massSeat = string.split(msg.isMass, ",")
        -- 转发逻辑
        for i = 1, #massSeat do
            local pSeat = tonumber(massSeat[i])
            local pLocalSeat = CF.roomData:seatToLocal(pSeat)
            self:onShowThrowPropAni({msg = {fromLocalSeat = msg.fromLocalSeat, toLocalSeat = pLocalSeat, faceAniIndex = msg.faceAniIndex, propCnt = msg.propCnt, headPanelFunc = msg.headPanelFunc}})
        end
        return
    end

    if self["onShowThrowPropAni" .. index] then
        self["onShowThrowPropAni" .. index](self, fromSeat, toSeat, usePropCnt, msg.massState)
        return
    end

    local isSelfAni = false
    if fromSeat == toSeat and fromSeat == 2 then
        isSelfAni = true                
    end

    local aniInfo = self:getPropAniInfo(index)
    if aniInfo and aniInfo.spineAction then
        local spineActionMult = clone(aniInfo.spineActionMult)
        local aniInfo2 = clone(aniInfo.spineAction)
        table.merge(aniInfo, aniInfo2)
        if usePropCnt > 1 then
            if spineActionMult then
                table.merge(aniInfo, spineActionMult)
            else
                aniInfo.FlyCount = aniInfo.FlyCount * usePropCnt
                aniInfo.EndCount = aniInfo.EndCount * usePropCnt
            end
        end
            local fromNode = self:addNodeToAniLayer(self:getHeadPanel(fromSeat))
            local toNode = self:addNodeToAniLayer(self:getHeadPanel(toSeat))
            if fromNode == nil or toNode == nil then
                return
            end

            local fromNodeSeqNum = fromSeat or 0
            local toNodeSeqNum = toSeat or 0

            local filePath = "res/animation/GameCommon/prop_ani/"
            local soundPath = "res/audio/PropAni/"
            local movePos = toNode:convertToNodeSpace(fromNode:getWorldPosition())
            local rotation
            local toSeatHead = toNode
            local fromSeatHead = fromNode
            local toPostion = cc.p(toSeatHead:getWorldPosition())
            local fromPostion = cc.p(fromSeatHead:getWorldPosition())
            local subX = toPostion.x - fromPostion.x
            local subY = toPostion.y - fromPostion.y
            rotation = math.atan2(subX,subY) * 180 / math.pi
            local delayTime = 0
            local firstFileName = aniInfo.FileName
            local firstFileName2 = aniInfo.FileName2
            local secondFileName = aniInfo.EndFileName ~= "" and aniInfo.EndFileName or firstFileName2
            if aniInfo.AppearAniName ~= "" then -- 起始动画
                local findNode = fromNode
                local armatureLightDisplay = XH.SpineManager:playAni(findNode, filePath .. firstFileName .. "/", firstFileName2, aniInfo.AppearAniName, false, nil, nil, false)
                local aniTime = aniInfo.AppearAniDuration or 0
                if aniInfo.AppearMusicName then
                    CF.soundManager:playEffect(soundPath..aniInfo.AppearMusicName)
                end
                if aniInfo.Scale and aniInfo.Scale ~= "" and aniInfo.Scale ~= "" then
                    local currSacle = tonumber(aniInfo.Scale)
                    armatureLightDisplay:setPositionY(-50)
                    armatureLightDisplay:setScale(currSacle)
                end
                if aniTime then
                    if tonumber(aniInfo.Rotation) then
                        armatureLightDisplay:setRotation(rotation + tonumber(aniInfo.Rotation))
                    end
                    armatureLightDisplay:runAction(cc.Sequence:create(cc.DelayTime:create(aniTime), cc.CallFunc:create(function ()
                        armatureLightDisplay:removeFromParent(true)
                        if aniInfo.FlyCount == 0 and fromSeat == 2 then
                            CF.msgManager:sendFlushGameSR()
                        end
                    end)))
                end
            end
            delayTime = aniInfo.StartTime >= 0 and aniInfo.StartTime or delayTime
            fromNode:runAction(cc.Sequence:create(cc.DelayTime:create(delayTime), cc.CallFunc:create(function ()
                if aniInfo.FlyAniName and aniInfo.FlyAniName ~= "" then
                    --飞行动画
                    if aniInfo.FlyMusicName and aniInfo.FlyMusicName ~= "" then
                        CF.soundManager:playEffect(soundPath .. aniInfo.FlyMusicName)
                    end
                    for i = 1, aniInfo.FlyCount do
                        local armatureLightDisplay, aniTime

                        local addAniHeadNode = toNode
                        local isAddInFromNode = false
                        if fromNodeSeqNum > toNodeSeqNum then
                            addAniHeadNode = fromNode
                            isAddInFromNode = true

                            local resMovePosX = movePos.x
                            local resMovePosY = movePos.y
                            movePos = cc.p(resMovePosX, resMovePosY)
                        end
                        if aniInfo.FlyName and aniInfo.FlyName ~= "" then  
                            local findNode = addAniHeadNode
                            armatureLightDisplay, aniTime = ccui.ImageView:create(), 0.5
                            armatureLightDisplay:loadTexture(aniInfo.FlyName, ccui.TextureResType.plistType)
                            findNode:addChild(armatureLightDisplay)
                        else
                            local findNode = addAniHeadNode
                            armatureLightDisplay = XH.SpineManager:playAni(findNode, filePath .. firstFileName .. "/", firstFileName2, aniInfo.FlyAniName, false, nil, nil, false)
                            aniTime = 0.1
                        end
                        if aniInfo.Scale and tonumber(aniInfo.Scale) then
                            local currSacle = tonumber(aniInfo.Scale)
                            armatureLightDisplay:setScale(currSacle)
                            armatureLightDisplay:setPositionY(-50)
                        end
                        if tonumber(aniInfo.Rotation) then
                            armatureLightDisplay:setRotation(rotation)
                        end
                        if aniTime then 
                            if aniTime < 0.5 then
                                aniTime = 0.5
                            end
                            aniTime = aniInfo.FlyTime >= 0 and aniInfo.FlyTime or aniTime
                            local spaceTime = aniInfo.SpaceTime
                            delayTime = aniTime + aniInfo.WaitTime
                            local flyRotation = aniInfo.FlyRotation
                            local flyEndWaitTime = aniInfo.FlyEndWaitTime
                            armatureLightDisplay:setVisible(false)
                            armatureLightDisplay:runAction(cc.Sequence:create(cc.DelayTime:create(i*spaceTime - spaceTime), 
                            cc.CallFunc:create(function ()
                                armatureLightDisplay:setVisible(true)
                                if i ~= 1 and aniInfo.RandPos then
                                    local randPos =  math.random(-100, 100)
                                    if index == 3 then
                                        randPos =  math.random(-50, 50)
                                    end
                                    armatureLightDisplay:setPosition(cc.p(movePos.x + randPos, movePos.y + randPos))
                                    if isAddInFromNode then
                                        armatureLightDisplay:setPosition(cc.p(randPos, randPos))
                                    end
                                else
                                    armatureLightDisplay:setPosition(movePos.x, movePos.y)
                                    if isAddInFromNode then
                                        armatureLightDisplay:setPosition(cc.p(0, 0))
                                    end
                                end
                            end)
                            , cc.DelayTime:create(aniInfo.WaitTime), cc.Spawn:create(cc.MoveBy:create(aniTime, cc.p(-movePos.x, -movePos.y)), cc.RotateBy:create(aniTime, flyRotation)), cc.DelayTime:create(flyEndWaitTime), cc.CallFunc:create(function ()
                                if aniInfo.FlyEndMusicName and aniInfo.FlyEndMusicName ~= "" and i == 1 then
                                    CF.soundManager:playEffect(soundPath .. aniInfo.FlyEndMusicName)
                                end
                                armatureLightDisplay:removeFromParent(true)
                                if aniInfo.EndCount == 0 and fromSeat == 2 then
                                    CF.msgManager:sendFlushGameSR()
                                end
                            end)))
                        end
                    end
                end
                delayTime = aniInfo.EndTime or delayTime
                for i = 1, aniInfo.EndCount do
                    if aniInfo.ArriveAniName and aniInfo.ArriveAniName ~= "" then
                        -- 最终动画
                        toNode:runAction(
                            cc.Sequence:create(
                                cc.DelayTime:create(delayTime + 0.1 * i - 0.1),
                                cc.CallFunc:create(
                                    function()
                                        local findNode = toNode
                                        if isSelfAni then
                                            findNode = self._propAniPanel or findNode
                                        end
                                        local armatureLightDisplay =
                                            XH.SpineManager:playAni(findNode, filePath .. firstFileName .. "/", secondFileName, aniInfo.ArriveAniName, false, nil, nil, false)
                                        local aniTime = aniInfo.ArriveAniDuration or 0
                                        if aniInfo.ArriveMusicName and aniInfo.ArriveMusicName ~= "" then
                                            CF.soundManager:playEffect(soundPath .. aniInfo.ArriveMusicName)
                                        end
                                        if aniInfo.Scale and tonumber(aniInfo.Scale) then
                                            local currSacle = tonumber(aniInfo.Scale)
                                            armatureLightDisplay:setPositionY(-50)
                                            armatureLightDisplay:setScale(currSacle)
                                        end
                                        if i ~= 1 then
                                            local randPos = math.random(-50, 50)
                                            local randPosY = math.random(-50, 50)
                                            armatureLightDisplay:setPosition(cc.p(randPos, randPosY))
                                        end
                                        armatureLightDisplay:runAction(
                                            cc.Sequence:create(
                                                cc.DelayTime:create(aniTime),
                                                cc.CallFunc:create(
                                                    function()
                                                        armatureLightDisplay:removeFromParent(true)
                                                        if fromSeat == 2 then
                                                            CF.msgManager:sendFlushGameSR()
                                                        end
                                                    end
                                                )
                                            )
                                        )
                                    end
                                )
                            )
                        )
                    end
                end
            end)))
    elseif aniInfo then
        local spineActionMult = clone(aniInfo.dragonActionMult)
        local aniInfo = clone(aniInfo)
        if usePropCnt > 1 then
            if spineActionMult then
                table.merge(aniInfo, spineActionMult)
            else
                aniInfo.FlyCount = aniInfo.FlyCount * usePropCnt
                aniInfo.EndCount = aniInfo.EndCount * usePropCnt
            end
        end
        local fromNode = self:addNodeToAniLayer(self:getHeadPanel(fromSeat))
        local toNode = self:addNodeToAniLayer(self:getHeadPanel(toSeat))
        if fromNode == nil or toNode == nil then
            return
        end

        local fromNodeSeqNum = fromSeat or 0
        local toNodeSeqNum = toSeat or 0

        local filePath = "res/animation/GameCommon/prop_ani/"
        local soundPath = "res/audio/PropAni/"
        local movePos = toNode:convertToNodeSpace(fromNode:getWorldPosition())
        local rotation
        local toSeatHead = toNode
        local fromSeatHead = fromNode
        local toPostion = cc.p(toSeatHead:getWorldPosition())
        local fromPostion = cc.p(fromSeatHead:getWorldPosition())
        local subX = toPostion.x - fromPostion.x
        local subY = toPostion.y - fromPostion.y
        rotation = math.atan2(subX,subY) * 180 / math.pi
        local delayTime = 0
        local firstFileName = aniInfo.FileName
        local secondFileName = aniInfo.EndFileName ~= "" and aniInfo.EndFileName or firstFileName
        if aniInfo.AppearAniName ~= "" then -- 起始动画
            local armatureLightDisplay, aniTime =  self:playDragonBoneAni(fromNode,nil,filePath..firstFileName.."/",
            firstFileName,aniInfo.ArmatureName,aniInfo.AppearAniName,1,isSelfAni)
            if aniInfo.AppearMusicName then
                CF.soundManager:playEffect(soundPath..aniInfo.AppearMusicName)
            end
            if aniInfo.Scale and aniInfo.Scale ~= "" and aniInfo.Scale ~= "" then
                local currSacle = tonumber(aniInfo.Scale)
                armatureLightDisplay:setPositionY(-50)
                armatureLightDisplay:setScale(currSacle)
            end
            if aniTime then 
                delayTime = delayTime + aniTime
                if tonumber(aniInfo.Rotation) then
                    armatureLightDisplay:setRotation(rotation + tonumber(aniInfo.Rotation))
                end
                armatureLightDisplay:runAction(cc.Sequence:create(cc.DelayTime:create(aniTime), cc.CallFunc:create(function ()
                    armatureLightDisplay:removeFromParent(true)
                    if aniInfo.FlyCount == 0 and fromSeat == 2 then
                        CF.msgManager:sendFlushGameSR()
                    end
                end)))
            end
        end
        delayTime = aniInfo.StartTime >= 0 and aniInfo.StartTime or delayTime
        fromNode:runAction(cc.Sequence:create(cc.DelayTime:create(delayTime), cc.CallFunc:create(function ()
            if aniInfo.FlyAniName and aniInfo.FlyAniName ~= "" then
                --飞行动画
                if aniInfo.FlyMusicName and aniInfo.FlyMusicName ~= "" then
                    CF.soundManager:playEffect(soundPath .. aniInfo.FlyMusicName)
                end
                for i = 1, aniInfo.FlyCount do
                    local armatureLightDisplay, aniTime

                    local addAniHeadNode = toNode
                    local isAddInFromNode = false
                    if fromNodeSeqNum > toNodeSeqNum then
                        addAniHeadNode = fromNode
                        isAddInFromNode = true

                        local resMovePosX = movePos.x
                        local resMovePosY = movePos.y
                        movePos = cc.p(resMovePosX, resMovePosY)
                    end
                    if aniInfo.FlyName and aniInfo.FlyName ~= "" then                     
                        local findNode = addAniHeadNode
                        armatureLightDisplay, aniTime = ccui.ImageView:create(), 0.5
                        armatureLightDisplay:loadTexture(aniInfo.FlyName, ccui.TextureResType.plistType)
                        findNode:addChild(armatureLightDisplay)
                    else
                        armatureLightDisplay, aniTime =  self:playDragonBoneAni(addAniHeadNode,nil,filePath..firstFileName.."/",
                        firstFileName,aniInfo.ArmatureName,aniInfo.FlyAniName,10,isSelfAni)
                    end                    
                    if aniInfo.Scale and tonumber(aniInfo.Scale) then
                        local currSacle = tonumber(aniInfo.Scale)
                        armatureLightDisplay:setScale(currSacle)
                        armatureLightDisplay:setPositionY(-50)
                    end
                    if tonumber(aniInfo.Rotation) then
                        armatureLightDisplay:setRotation(rotation)
                    end
                    if aniTime then 
                        if aniTime < 0.5 then
                            aniTime = 0.5
                        end
                        aniTime = aniInfo.FlyTime >= 0 and aniInfo.FlyTime or aniTime
                        local spaceTime = aniInfo.SpaceTime
                        delayTime = aniTime + aniInfo.WaitTime
                        local flyRotation = aniInfo.FlyRotation
                        local flyEndWaitTime = aniInfo.FlyEndWaitTime
                        armatureLightDisplay:setVisible(false)
                        armatureLightDisplay:runAction(cc.Sequence:create(cc.DelayTime:create(i*spaceTime - spaceTime),
                        cc.CallFunc:create(function ()
                            armatureLightDisplay:setVisible(true)
                            if i ~= 1 and aniInfo.RandPos then
                                local randPos =  math.random(-100, 100)
                                if index == 3 then
                                    randPos =  math.random(-50, 50)
                                end
                                armatureLightDisplay:setPosition(cc.p(movePos.x + randPos, movePos.y + randPos))
                                if isAddInFromNode then
                                    armatureLightDisplay:setPosition(cc.p(randPos, randPos))
                                end
                            elseif i ~= 1 and aniInfo.RandPos3 then
                                local posX = {-50, 0, 50}
                                local randPos = posX[math.floor(i % 3) + 1]
                                armatureLightDisplay:setPosition(cc.p(movePos.x + randPos, movePos.y))
                                if isAddInFromNode then
                                    armatureLightDisplay:setPosition(cc.p(randPos, randPos))
                                end
                            else
                                armatureLightDisplay:setPosition(movePos.x, movePos.y)
                                if isAddInFromNode then
                                    armatureLightDisplay:setPosition(cc.p(0, 0))
                                end
                            end
                        end)
                        , cc.DelayTime:create(aniInfo.WaitTime), cc.Spawn:create(cc.MoveBy:create(aniTime, cc.p(-movePos.x, -movePos.y)), cc.RotateBy:create(aniTime, flyRotation)), cc.DelayTime:create(flyEndWaitTime), cc.CallFunc:create(function()
                            if aniInfo.FlyEndMusicName and aniInfo.FlyEndMusicName ~= "" and i == 1 then
                                CF.soundManager:playEffect(soundPath .. aniInfo.FlyEndMusicName)
                            end
                            armatureLightDisplay:removeFromParent(true)
                            if aniInfo.EndCount == 0 and fromSeat == 2 then
                                CF.msgManager:sendFlushGameSR()
                            end
                        end)))
                    end
                end
            end
            delayTime = aniInfo.EndTime or delayTime
            for i = 1, aniInfo.EndCount do
                if aniInfo.ArriveAniName and aniInfo.ArriveAniName ~= "" then
                    -- 最终动画
                    toNode:runAction(cc.Sequence:create(cc.DelayTime:create(delayTime + 0.1 * i - 0.1), cc.CallFunc:create(function()
                        local armatureLightDisplay, aniTime = self:playDragonBoneAni(toNode, nil, filePath .. secondFileName .. "/",
                                secondFileName, aniInfo.ArmatureName, aniInfo.ArriveAniName, 1,isSelfAni)
                        if aniInfo.ArriveMusicName and aniInfo.ArriveMusicName ~= "" then
                            CF.soundManager:playEffect(soundPath .. aniInfo.ArriveMusicName)
                        end
                        if aniInfo.Scale and tonumber(aniInfo.Scale) then
                            local currSacle = tonumber(aniInfo.Scale)
                            armatureLightDisplay:setPositionY(-50)
                            armatureLightDisplay:setScale(currSacle)
                        end
                        if i ~= 1 then
                            local randPos =  math.random(-50, 50)
                            local randPosY =  math.random(-50, 50)
                            armatureLightDisplay:setPosition(cc.p(randPos, randPosY))
                        end
                            armatureLightDisplay:runAction(cc.Sequence:create(cc.DelayTime:create(aniTime), cc.CallFunc:create(function ()
                            armatureLightDisplay:removeFromParent(true)
                            if fromSeat == 2 then
                                CF.msgManager:sendFlushGameSR()
                            end
                        end)))
                    end)))
                end
            end
        end)))
    end
end

function PropAniView:getAniLayerPosition(node1, node)
    local nodePos = node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
    return node1:convertToNodeSpace(nodePos)
end

function PropAniView:getAniLayerPosition3(node)
    if not node or not node.getParent then
        return cc.p(0, 0)
    end
    local parent = node:getParent()
    if not parent then
        return cc.p(0, 0)
    end
    if not self._aniLayer then
        return cc.p(0, 0)
    end
    local nodePos = node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
    return self._aniLayer:convertToNodeSpace(nodePos)
end

function PropAniView:addNodeToAniLayer(node)
    -- 上游 getHeadPanel 可能因座位不对/玩家离开返回 nil，需在入口兜底，避免 getParent:nil 崩溃
    if not node or not self._aniLayer then
        return nil
    end
    local nodeNew = ccui.Widget:create()
    local nodeNewPos = self:getAniLayerPosition3(node)
    nodeNew:setPosition(nodeNewPos)
    self._aniLayer:addChild(nodeNew)
    return nodeNew
end

return PropAniView
u�