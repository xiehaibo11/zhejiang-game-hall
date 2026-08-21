local ShuffleTipLayerView = CF.gameClass("ShuffleTipLayerView", CF.ViewBase)

ShuffleTipLayerView.ClassName = "ShuffleTipLayerView"

local GAME_TYPE = {
    MAHJONG = 1,
    POKER = 2,
}
local SHUFFLEANI = {
    mahNew = {
        path = "res/animation/Mahjong/Base/washcard_movie/",
        tex = "xipai_a_jixing.json", 
        ske = "xipai_a_jixing.atlas",
        armatureName = "xipai-hh1",
    },
    pokerNew = {
        path = "res/animation/GameCommon/sk-xp-ani/",
        tex = "pukxipai.json", 
        ske = "pukxipai.atlas",
        armatureName = "pk_xipai_zijia",
    },
    mahOld = {
        path = "res/animation/Mahjong/Base/washcard_movie/",
        ske = "xipai_ani_ske.json",
        tex = "xipai_ani_tex.json",
        armatureName = "Armature",
        dragonBonesName = "xipai_ani",
        animationName = "new_xipai"
    },
    pokerOld = {
        jsonPath = "res/animation/GameCommon/sk-xp-ani/sk-xp-ani.ExportJson",
        armatureName = "Animation1"
    }
}

function ShuffleTipLayerView:ctor()
    ShuffleTipLayerView.super.ctor(self) 
    self.m_isMJ = CF.gameSub:isMahjong(CF.roomData and CF.roomData:getGameID() or 0)
    self.m_isNew = false --CF.game:getModule("PropUse"):isSupportNewAni()
    self:initUI()
end

function ShuffleTipLayerView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ShuffleTipLayer.csb"
end

function ShuffleTipLayerView:getProxyEvents()
    return {
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRESHUFFLE_SHOW", callBack = "onShowShuffleBtn"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "onPlayerStart"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_SHOW_TIP_VIEW", callBack = "onShowTipView"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_SHOW_LOG", callBack = "onShowLog"},
    }
end

function ShuffleTipLayerView:getBindingInfo()
    return {
        -- 折扣ui
        ["_KW_panel_dis"] = {varName = "_panel_dis"},
        ["_KW_btn_close_dis"] = {varName = "_btn_close_dis", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClickDisClose"},
        ["_KW_node_ani_dis"] = {varName = "_node_ani_dis"},
        ["_KW_btn_use_dis"] = {varName = "_btn_use_dis", type = XH.UI_TYPE.BUTTON, onTouchEnded ="onBtnClickDisUse"},
        ["_KW_diamond_dis"] = {varName = "_img_diamond_dis"},
        ["_KW_roomcard_dis"] = {varName = "_img_roomcard_dis"},
        ["_KW_txt_price_origin_dis"] = {varName = "_txt_price_origin_dis"},
        ["_KW_txt_price_discount_dis"] = {varName = "_txt_price_discount_dis"},
        ["_KW_txt_discount_dis"] = {varName = "_txt_discount_dis"},
        ["_KW_txt_time_r_dis"] = {varName = "_txt_time_r_dis"},
        ["_KW_img_line"] = {varName = "_img_line"},
        -- 顶部提示ui
        ["_KW_img_top"] = {varName = "_img_top"},
        ["_KW_btn_use_top"] = {varName = "_btn_use_top", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClickTopUse"},
        ["_KW_btn_close_top"] = {varName = "_btn_close_top", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClickTopClose"},
        ["_KW_free_tag_top"] = {varName = "_free_tag_top"},
        ["_KW_txt_content_top"] = {varName = "_txt_content_top"},
        ["_KW_node_cost_top"] = {varName = "_node_cost_top"},
        ["_KW_diamond_top"] = {varName = "_img_diamond_top"},
        ["_KW_roomcard_top"] = {varName = "_img_roomcard_top"},
        ["_KW_quan_top"] = {varName = "_img_quan_top"},
        ["_KW_txt_cost_top"] = {varName = "_txt_cost_top"},
        ["_KW_txt_free"] = {varName = "_txt_free"},
        -- 输出日志
        ["_KW_log_panel"] = {varName = "_log_panel"},
        ["_KW_log_txt"] = {varName = "_log_txt"},
    }
end

function ShuffleTipLayerView:initUI()
    self._panel_dis:setVisible(false)
    self._img_top:setVisible(false)
    self._log_panel:setVisible(false)
end

function ShuffleTipLayerView:initAni()
    if not CF.roomData or self._aniNode then
        return
    end
    local node_ani = self._node_ani_dis
    if self.m_isMJ then
        if self.m_isNew and sp then
            local cfg = SHUFFLEANI.mahNew
            local scale = 0.7
            if cc.FileUtils:getInstance():isFileExist(cfg.path .. cfg.tex) and cc.FileUtils:getInstance():isFileExist(cfg.path .. cfg.ske) then
                local aniNode = sp.SkeletonAnimation:create(cfg.path .. cfg.tex, cfg.path .. cfg.ske, scale)
                cfg.armatureName = "xipai-hh" .. math.random(1, 5)
                if aniNode then
                    aniNode:setAnimation(0, cfg.armatureName, true)
                    node_ani:addChild(aniNode)
                end
                self._aniNode = aniNode
            end
        elseif not self.m_isNew then
            local aniNode = display.playDargonBonesAnimByTimes(SHUFFLEANI.mahOld, -1)
            if aniNode then
                node_ani:addChild(aniNode)
                aniNode:setScale(0.5)
                local y = node_ani:getPositionY()
                node_ani:setPositionY(y - 7)
            end
            self._aniNode = aniNode
        end
    else
        if self.m_isNew and sp then
            local cfg = SHUFFLEANI.pokerNew
            if cc.FileUtils:getInstance():isFileExist(cfg.path .. cfg.tex) and cc.FileUtils:getInstance():isFileExist(cfg.path .. cfg.ske) then
                local aniNode = sp.SkeletonAnimation:create(cfg.path .. cfg.tex, cfg.path .. cfg.ske)
                if aniNode then
                    aniNode:setAnimation(0, cfg.armatureName, true)
                    node_ani:addChild(aniNode)
                    local x, y = node_ani:getPosition()
                    node_ani:setPositionY(y - 20)
                end
                self._aniNode = aniNode
            end
        else
            local aniNode = CF.UITool.playJsonAnimationByName(node_ani, "sk-xp-ani", SHUFFLEANI.pokerOld.jsonPath, 1, SHUFFLEANI.pokerOld.armatureName)
            local x, y = node_ani:getPosition()
            node_ani:setPosition(x - 60, y + 20)
            self._aniNode = aniNode
        end
    end
end

function ShuffleTipLayerView:onBtnClickTopUse()
    local modu = CF.game:getModule("Shuffle4")
    if modu then
        modu:useXipai()
    end
    self:hideTopTip()
    
    if (self.m_topScene or 0) > 0 then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHUFFLE_TIP_USE, { item_id = 1000 + tonumber(self.m_topScene) })

        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080819, {
            costInfo={propid=CF.gameSub:getShufflePropQuanID(),costPropid=self.m_shuffleInfo.propID,cnt=self.m_shuffleInfo.cost},
            task_id = 1000 + tonumber(self.m_topScene)
        })
    end
end

function ShuffleTipLayerView:onBtnClickTopClose()
    local modu = CF.game:getModule("Shuffle4")
    if modu then
        modu:notUseTop()
    end
    self:hideTopTip()
    if (self.m_topScene or 0) > 0 then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHUFFLE_TIP_CLOSE, { item_id = 1000 + tonumber(self.m_topScene) })
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080818, {
            costInfo={propid=CF.gameSub:getShufflePropQuanID(),costPropid=self.m_shuffleInfo.propID,cnt=self.m_shuffleInfo.cost},
            task_id = 1000 + tonumber(self.m_topScene)
        })
    end
end

function ShuffleTipLayerView:onBtnClickDisUse()
    self._panel_dis:setVisible(false)
    if self and self._discountInfo then
        local reportData =  {
            costInfo={propid=CF.gameSub:getShufflePropQuanID(),costPropid=self.m_shuffleInfo.propID,cnt=self.m_shuffleInfo.cost},
            task_id = self._discountInfo.id
        }
        local modu = CF.game:getModule("Shuffle4")
        if modu then
            modu:reqUseDiscount(function() 
                XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080811, reportData)
            end)
        end
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHUFFLE_DIS_USE, { item_id = self._discountInfo.id })
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080810, reportData)
    end
end

function ShuffleTipLayerView:onBtnClickDisClose()
    if self and not tolua.isnull(self) and self._panel_dis:isVisible() then
        self._panel_dis:setVisible(false)
        if self._discountInfo then
            local modu = CF.game:getModule("Shuffle4")
            if modu then
                modu:notUseDiscount()
            end
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHUFFLE_DIS_CLOSE, { item_id = self._discountInfo.id })
            XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080809, {
                costInfo={propid=CF.gameSub:getShufflePropQuanID(),costPropid=self.m_shuffleInfo.propID,cnt=self.m_shuffleInfo.cost},
                task_id = self._discountInfo.id
            })
        end
    end
end

-- 显示顶部提示
function ShuffleTipLayerView:showTop(scene, txt, delayTime)
    if self._panel_dis:isVisible() then
        print(string.format("scene:%d, but discount view is showing", scene))
        return
    end

    local propUseModule = CF.game:getModule("PropUse")
    if propUseModule then
        propUseModule:updateShuffleBtn()
    end

    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHUFFLE_TIP_PUSH, { item_id = 1000 + tonumber(scene) })
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080817, {
        costInfo={propid=CF.gameSub:getShufflePropQuanID(),costPropid=self.m_shuffleInfo.propID,cnt=self.m_shuffleInfo.cost},
        task_id = 1000 + tonumber(scene)
    })

    self.m_topScene = scene

    self._img_top:setVisible(true)
    self._panel_dis:setVisible(false)
    self._txt_content_top:setString(txt)

    self._img_top:stopAllActions()
    local topHeight = self._img_top:getContentSize().height + 5
    local topX = self._img_top:getPosition()
    local move1 = cc.MoveTo:create(0.1, cc.p(topX, display.height - topHeight))
    local delay = cc.DelayTime:create(delayTime)
    local call = cc.CallFunc:create(function() 
        if not self or tolua.isnull(self) then
            return
        end
        self.m_topScene = -1
    end)
    local move2 = cc.MoveTo:create(0.1, cc.p(topX, display.height))
    self._img_top:runAction(cc.Sequence:create(move1, delay, call, move2, nil))
end

-- 设置折扣弹窗
function ShuffleTipLayerView:showDiscount(discountInfo)
    if not self or tolua.isnull(self) or not discountInfo or not self.m_shuffleInfo then
        return
    end
    self._discountInfo = discountInfo
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHUFFLE_DIS_PUSH, { item_id = discountInfo.id })
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080808, {
        costInfo={propid=CF.gameSub:getShufflePropQuanID(),costPropid=self.m_shuffleInfo.propID,cnt=self.m_shuffleInfo.cost},
        task_id = discountInfo.id
    })
    self._panel_dis:setVisible(true)
    local dis = discountInfo.discount
    local timeStr = math.floor(discountInfo.showTime / 60) .. "分钟内"
    self._txt_price_origin_dis:setString(self.m_shuffleInfo.cost)   -- 原价
    self._txt_price_discount_dis:setString(self.m_shuffleInfo.cost * dis / 100) -- 折扣价
    self._img_line:setContentSize(cc.size(self._txt_price_origin_dis:getContentSize().width + 5, self._img_line:getContentSize().height))
    self._txt_discount_dis:setString(dis / 10)
    self._txt_time_r_dis:setString(timeStr)
    
    self:hideTopTip()

    self:initAni()
end

function ShuffleTipLayerView:hideTopTip()
    if not self or tolua.isnull(self) then
        return
    end
    local topX = self.m_topX
    self._img_top:stopAllActions()
    local topX = self._img_top:getPosition()
    local move2 = cc.MoveTo:create(0.1, cc.p(topX, display.height))
    self._img_top:runAction(move2)
end

function ShuffleTipLayerView:onShowShuffleBtn(event)
    if not event or not event.msg or not event.msg.shuffleInfo then
        return
    end
    local shuffleInfo = event.msg.shuffleInfo
    self.m_shuffleInfo = shuffleInfo
    local isRoomCard = shuffleInfo.propID == CF.areaData:getPropRoomCardID() or shuffleInfo.propID == CF.areaData:getPropBindRoomCardID()   -- 是否使用房卡
    local isDiamond = shuffleInfo.propID == CF.areaData:getPropDiamndID()   -- 是否使用钻石
    local isQuan = shuffleInfo.propID == CF.gameSub:getShufflePropQuanID()  -- 是否使用券
    self._img_diamond_top:setVisible(isDiamond)
    self._img_roomcard_top:setVisible(isRoomCard)
    self._img_quan_top:setVisible(isQuan)
    self._img_diamond_dis:setVisible(isDiamond)
    self._img_roomcard_dis:setVisible(isRoomCard)
    local strCost = tostring(shuffleInfo.cost)
    if isQuan then
        strCost = "x" .. tostring(shuffleInfo.cost)
    end
    self._txt_cost_top:setString(strCost)

    if CF.game:getModule("Shuffle4"):isFree() then
        self._txt_free:setVisible(true)
        self._img_diamond_top:setVisible(false)
        self._img_roomcard_top:setVisible(false)
        self._img_quan_top:setVisible(false)
        self._txt_cost_top:setVisible(false)
    else
        self._txt_free:setVisible(false)
        self._txt_cost_top:setVisible(true)
    end
end

function ShuffleTipLayerView:onShowTipView(event)
    if not self or tolua.isnull(self) then
        return
    end
    if not event or not event.data then
        return
    end
    local data = event.data
    if data.isHide then
        self:hideTopTip()
        self._panel_dis:setVisible(false)
        return
    end
    if data.isTop then
        self:showTop(data.scene, data.tip, data.delayTime)
    else
        self:showDiscount(event.data.discountInfo)
    end
end

function ShuffleTipLayerView:onPlayerStart(event)
    if self and not tolua.isnull(self) then
        self:onBtnClickDisClose()
	end
end

function ShuffleTipLayerView:onShowLog(event)
    if not event or not event.msg then
        return
    end
    if self and not tolua.isnull(self) then
        local maxH = self._log_panel:getContentSize().height - 40
        self._curLogStr = self._curLogStr or ''
        if self._log_txt:getContentSize().height > maxH then
            local startPos, _ = string.find(self._curLogStr, "|")
            if startPos then
                self._curLogStr = string.sub(self._curLogStr, startPos + 1)
            end
        end
        self._log_panel:setVisible(true)
        if self._curLogStr == '' then
            self._curLogStr = event.msg.txt
        else
            self._curLogStr = self._curLogStr .. "\n" .. "|" .. event.msg.txt
        end
        self._log_txt:setString(self._curLogStr)
	end
end

return ShuffleTipLayerView;