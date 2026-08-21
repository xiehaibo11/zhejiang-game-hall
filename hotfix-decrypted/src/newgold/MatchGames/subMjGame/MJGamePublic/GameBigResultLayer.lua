--[[
 * @Author: zhoufan
 * @Date: 2017年11月4日 11:31:19
 ]]

------------------------------大计分界面----------------------------
local GameBigResultLayer = class("GameBigResultLayer", cc.load("mvc").ViewBase)

-- local Platform = require("app.platform.Platform")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
local ExternalFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")



local tmps = {
    "自摸次数：       %s",
    "接炮次数：       %s",
    "点炮次数：       %s",
    "下雨次数：       %s",
    "刮风次数：       %s",
    "    查大叫：       %s",
}

--csb文件
GameBigResultLayer.RESOURCE_FILENAME = "GameBigResultLayer.csb"

--节点绑定及事件
GameBigResultLayer.RESOURCE_BINDING = {
    
    -- game_big_result_bg_2 = {
    --     varname="bg"
    -- },
    -- ["panel_content/Text_wanfa"] = {
    --     varname="wanfaLabel"
    -- },
    -- ["panel_content/Text_room"] = {
    --     varname="roomLabel"
    -- },
    -- ["panel_content/Text_time"] = {
    --     varname="timeLabel"
    -- },
    -- ["panel_content/Button_share"] = {
    --     varname="Button_share",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
    -- ["panel_content/Button_playAgain"] = {
    --     varname="Button_playAgain",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
    -- ["panel_content/Button_club_quickPlay"] = {
    --     varname="Button_club_quickPlay",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
    -- ["panel_content/Button_back"] = {
    --     varname="Button_back",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
    -- ["panel_content/daa"] = {
    --     varname = 'daa'
    -- },
    -- ["panel_content/fangfeijuntan"] = {
    --     varname = 'fangfeijuntan'
    -- },
    -- ["panel_content/panelShare"] = {
    --     varname = 'shareNode'
    -- },
    -- ["panel_content/ListView"] = {
    --     varname = 'listView'
    -- }
    -- Button_close = {
    --     varname="Button_close",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
 
}

function GameBigResultLayer:ctor(params)

    GameBigResultLayer.super.ctor(self)
    
    -- 是否观战
    self.isWatchWar = g_gameGlobal:isWatchMode()

    local params = params or {}
    
    self.cachePlayers={}

    self.playerDismissNodes = {}

    self.gameRequestAck = params.gameRequestAck or nil
    
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    self.hideId = vipRoomClose and (vipRoomClose.unused4 == 1) or false
    
    self:netEvent()
    self:initUi()
    self:initWatchMode()
    g_gameGlobal:setGameStart(false)
    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    
    self.isFromLobby = params and params.isFromLobby
    self.renameString = vipRoomClose.renameString
    self:showRenameString(vipRoomClose.renameString)
end

function GameBigResultLayer:initRCGameUIAndData(  )
    tmps = {
        "自摸次数：       %s",
        "接炮次数：       %s",
        "点炮次数：       %s",
        "暴雨次数：       %s",
        "巴雨次数：       %s",
        "    查大叫：       %s",
    }
end


function GameBigResultLayer:initUi( )
    local time_txt = self:findChildWithName(self.resourceNode_,"Text_time")
    self.time_txt = time_txt

    local room_id = self:findChildWithName(self.resourceNode_,"Text_roomid")
    self.room_id = room_id

    local jushu_txt = self:findChildWithName(self.resourceNode_,"Text_jushu")
    self.jushu_txt = jushu_txt

    local closeBtn = self:findChildWithName(self.resourceNode_,"Button_close")
    closeBtn:onTouch(handler(self, self.closeBtnCallBack))

    local player_item = self:findChildWithName(self.resourceNode_,"Panel_item")
    if player_item then
        self.player_item = player_item
        self.player_item:setVisible(false)
    end
    local listView = self:findChildWithName(self.resourceNode_,"ListView")
    if listView then
        local t_itemModel = self.player_item:clone()
        if not tolua.isnull(t_itemModel) then
            listView:setItemModel(t_itemModel)
        end
        listView:removeAllItems()
        listView:setVisible(true)
        self.listView = listView
    end

    local shareBtn = self:findChildWithName(self.resourceNode_,"Button_share")
    shareBtn:onTouch(handler(self, self.shareBtnCallBack))
    shareBtn:setVisible(false)
    self.shareBtn = shareBtn
    -- zzzzjp
    self.screenshot = self:findChildWithName(self.resourceNode_, "Button_screenshot")
    self.screenshot:onTouch(handler(self, self.ScreenshotCallBack))
    self.screenshot:setVisible(false)

    local copyBtn = self:findChildWithName(self.resourceNode_,"Button_copy")
    copyBtn:onTouch(handler(self, self.copyBtnCallBack))
    copyBtn:setVisible(false)
    self.copyBtn = copyBtn

    local playAgainBtn = self:findChildWithName(self.resourceNode_,"Button_play_again")
    playAgainBtn:onTouch(handler(self, self.playAgainBtnCallBack))
    self.playAgainBtn = playAgainBtn
    
    local exitGuanZhanBtn = self:findChildWithName(self.resourceNode_, "Button_backToLobby")
    if exitGuanZhanBtn then
        exitGuanZhanBtn:onClick(handler(self, self.exitGuanZhanCallBack))
        self.exitGuanZhanBtn = exitGuanZhanBtn
    end

    self.clickNode = self:findChildWithName(self.resourceNode_,"clickNode")
    self.clubName = self:findChildWithName(self.resourceNode_,"Text_clubName")

    self.A_DISMISS_NODE = self:findChildWithName(self.resourceNode_,"A_DISMISS_NODE")

    self.share_panel = self:findChildWithName(self.resourceNode_,"Panel_share")
    if not tolua.isnull(self.share_panel) then
        self.share_img_btn = self:findChildWithName(self.share_panel,"Button_Img")
        self.share_url_btn = self:findChildWithName(self.share_panel,"Button_Url")
        self.share_img_btn:onTouch(handler(self, self.shareImgCallBack))
        self.share_url_btn:onTouch(handler(self, self.shareUrlCallBack))
        self.share_panel:setVisible(false)
    end

    self.clubName:setVisible(false)
    self:createContent()

    -- 加个判断，若是荣昌玩法，初始化荣昌的一些UI和数据
    if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF then 
        self:initRCGameUIAndData()
    end 
end

function GameBigResultLayer:closeBtnCallBack( event )
    if event.name == "ended" then
        if self.isFromLobby then
            self:removeSelf()
            return
        end
        
        g_gameGlobal:backToLobby()
    end
end

function GameBigResultLayer:playAgainBtnCallBack( event )
    if event.name == "ended" then
        NG.goldLobby:getModule("PeakRaceDispatch"):reqJoinDispatchQueue(nil, nil, nil, true)
        self:removeSelf()
    end
end

function GameBigResultLayer:copyBtnCallBack( event )
    if event.name == "ended" then
        
    end
end

function GameBigResultLayer:shareBtnCallBack( event )
    if event.name == "ended" then
        self:shareImgToSDK()
    end
end

function GameBigResultLayer:shareImgCallBack( event )
    if event.name == "ended" then
        self.share_panel:setVisible(false)
        self:shareImgToSDK()
    end
end

function GameBigResultLayer:shareUrlCallBack( event )
    if event.name == "ended" then
        self.share_panel:setVisible(false)
        self:shareUrlToWX()
    end
end

function GameBigResultLayer:listItemSetData(listitem , data)
    listitem:show()
    local Image_fangzhu  = self:findChildWithName(listitem,"fangzhu")  
    local Image_win     = self:findChildWithName(listitem,"big_winner") 
    local Label_name  = self:findChildWithName(listitem,"Text_name")
    local Label_id    = self:findChildWithName(listitem,"Text_id")
    local AtlasLabel_score = self:findChildWithName(listitem,"score") 
    local kuang = self:findChildWithName(listitem,"kuang")

    local Text_flower = self:findChildWithName(listitem,"Text_flower")
    if data.supportFlower and Text_flower and data.costFlowerNum and data.costFlowerNum > 0 and data.supportFlower == 1 then
        Text_flower:setVisible(true)
        Text_flower:setString(string.format("乐卡消耗%d张", data.costFlowerNum or 0))
    end
    kuang:setVisible(false)
    
    local listView = self:findChildWithName(listitem,"ListView") 
    listView:setScrollBarEnabled(false)
   
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = self.gameRequestAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    local txtCount = 5
    if startGameRequestAck and startGameRequestAck.__bigResultInfoType == 2 then
        txtCount = 7
    end

    -- for i=1,txtCount do
    --     ListView_txts:pushBackDefaultItem()
    --     local txtItem = ListView_txts:getItem(#ListView_txts:getItems()-1)
    --     txtItem:setName("Label_txt_"..i)
    -- end



    local Label_txt_1 = self:findChildWithName(listitem,"zimo_txt") 
    local Label_txt_2 = self:findChildWithName(listitem,"jiepao_txt") 
    local Label_txt_3 = self:findChildWithName(listitem,"dianpao_txt") 
    local Label_txt_4 = self:findChildWithName(listitem,"angang_txt") 
    local Label_txt_5 = self:findChildWithName(listitem,"minggang_txt") 
    local Label_txt_6 = self:findChildWithName(listitem,"chadajiao_txt")

    
    -- if txtCount>1 then
    --     local margin = (ListView_txts:getContentSize().height-txtCount*Label_txt_1:getContentSize().height)/(txtCount-1)
    --     ListView_txts:setItemsMargin(margin>0 and margin or 0)
    -- end

    local Image_zjps = self:findChildWithName(listitem,"zuijiapaoshou") 

    local headbg = self:findChildWithName(listitem,"head_img")

    

    Image_fangzhu:setVisible(false)
    -- 大赢家显示
    Image_win:setVisible(false)
    for i,v in ipairs(vipRoomClose.winPos) do
        if v == data.tablePos then
            -- Image_win:setVisible(true)
            -- kuang:setVisible(true)
        end
    end
    
    Image_zjps:setVisible(false)
    for i,v in ipairs(vipRoomClose.paoPos) do
        if v == data.tablePos then
            Image_zjps:setVisible(true)
        end
    end

    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName,4))
    
    Label_id:setString("账号: "..(data.playerIndex or ""))

    local socrePngFile = "game_result/scmj/pic_num_red.png"
    if data.gold < 0 then
        socrePngFile = "game_result/scmj/pic_num_blue.png"
    end
    AtlasLabel_score:setProperty("/".. tostring(math.abs(data.gold)), socrePngFile, 38, 54, ".");
    
    local scoreScale = 1.0
    if math.abs(data.gold) >= 10000 then
        scoreScale = 0.72
    elseif math.abs(data.gold) >= 1000 then
        scoreScale = 0.83
    end
    
    AtlasLabel_score:setScale(scoreScale)
    
    -- if data.gold and tonumber(data.gold) > 0 then
    --     AtlasLabel_score:setTextColor(cc.c4b(218,34,7,255))
    -- else
    --     AtlasLabel_score:setTextColor(cc.c3b(8,88,198,255))
    -- end 


    if Label_txt_1 then
        Label_txt_1:setString(string.format(tmps[1], data.zimoCount))
    end
    if Label_txt_2 then
        Label_txt_2:setString(string.format(tmps[2], data.jiepaoCount))
    end
    if Label_txt_3 then
        Label_txt_3:setString(string.format(tmps[3], data.dianpaoCount))
    end
    if Label_txt_4 then
        Label_txt_4:setString(string.format(
            tmps[4],
            bit._and( bit._rshift(data.hitHorseCount, 16), 0xff)
        ))
    end
    if Label_txt_5 then
        Label_txt_5:setString(string.format(
            tmps[5],
            bit._and( bit._rshift(data.hitHorseCount, 8), 0xff)
        ))
    end
    if Label_txt_6 then  
        Label_txt_6:setString(string.format(tmps[6], data.youJiaoNum))
        if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ then
            if g_gameGlobal:getMaxPlayerNum()==3 then 
                Label_txt_6:setVisible(true)
            else
                Label_txt_6:setVisible(false)
            end
        end 
    end
    local headImg = headbg:getChildByName("head_icon")
    local player = g_gameGlobal:getMyselfInfo()
    local frameKind = data.headImg
    if player.playerIndex == data.playerIndex then 
        g_gameGlobal:requestHttpImageWithNoCut(frameKind, data.headImgUrl, headImg , true, nil, "common/headframe_stencil.png")
    else
        if data.headImgUrl == "" then data.headImgUrl = string.format("robotHeadImg/%d.jpg", data.playerIndex%100+1) end
        g_gameGlobal:requestHttpImageWithNoCut(frameKind, data.headImgUrl, headImg , false, nil, "common/headframe_stencil.png")
    end
end

function GameBigResultLayer:setIDVisible4Share(visible)
    if not self.hideId then
        return
    end
    
    -- for k, item in ipairs(self.itemTbl) do
    --     item.visibleId:setVisible(visible)
    --     item.invisibleId:setVisible(not visible)        
    -- end
end

function GameBigResultLayer:createContent()
   -- self:createShareNode()
    
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    dump(vipRoomClose, "计分信息")
    self.vipRoomClose = vipRoomClose

   
    -- if vipRoomClose.unused2 == 2 then
    --     ShowCommonPopMsgView(false,{title = "提示",content = "房间已被管理员强制解散",isMiddleClose = true})
    -- end
    
    local startGameRequestAck = self.gameRequestAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    self.startGameRequestAck = startGameRequestAck or {}
    local msgGameStart = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME)
    self.msgGameStart = msgGameStart
    local curQuan = 1
    local quanStr =  "局" .. tostring(curQuan) .. "/" ..tostring(g_gameGlobal:getCurTotalJuShu())

    self.jushu_txt:setString("")
    self.room_id:setString("")
    self.time_txt:setString( os.date("%Y-%m-%d %H:%M",os.time()) )
    local players = vipRoomClose.players
    local totalItemsWidth = 0
    local itemMargin = self.listView:getItemsMargin()
    
    self.itemTbl = {}
    
    for i,v in ipairs(players) do
        if vipRoomClose.supportFlower then
            v.supportFlower = vipRoomClose.supportFlower
        end
        self.listView:pushBackDefaultItem()
        local listItem = self.listView:getItem(#self.listView:getItems()-1)
        totalItemsWidth = totalItemsWidth + listItem:getContentSize().width + itemMargin
        self:listItemSetData(listItem,v)
        self.playerDismissNodes[v.tablePos] = listItem:getChildByName("DISMISS_NODE")
        
        local Label_id    = self:findChildWithName(listItem, "Text_id")
        
        local invisibleId = Label_id:clone()
        invisibleId:addTo(Label_id:getParent())
            :move(Label_id:getPosition())
            :hide()
        
        local strId = tostring(v.playerIndex or "")
        local hideIdStr = string.format("账号：%s****%s", string.sub(strId, 1, 1), string.sub( strId, -1))
        invisibleId:setString(hideIdStr)
        self.itemTbl[i] = {
            visibleId = Label_id,
            invisibleId = invisibleId,
        }

        Label_id:setVisible(self.hideId == false or self.hideId == nil)
        invisibleId:setVisible(self.hideId == true)
    end
    
    self.listView:setContentSize(cc.size( totalItemsWidth-itemMargin, self.listView:getContentSize().height ))
    self.listView:setScrollBarEnabled(false)
    local isdoo = (vipRoomClose.unused0 >= 600000 and vipRoomClose.unused0 < 900000)
    self.isNormalRoom = not isdoo
    self.playerAgainData = nil
    self.isMyFangzhu = false
    self.cachePlayers = clone(vipRoomClose.players)
    self.cachePlayers.isClubRoom = false
    self.cachePlayers.clubId = 0
    ExternalFunc.analyzeDismissShow(vipRoomClose.unused2, self.A_DISMISS_NODE, self.playerDismissNodes, #vipRoomClose.players)
end

function GameBigResultLayer:on_btn_click(sender)

    if sender == self.Button_close then 
        self:removeSelf()
    elseif sender == self.Button_share then 
        self:shareImgToSDK()
    elseif sender == self.Button_playAgain then
        if self.isNormalRoom and type(self.playerAgainData) == "table" then
            self.playerAgainData.unused0 = 0
            self.playerAgainData.unused5 = 1 -- 亲友圈才有 快速开房 1 再来一局 0
            if g_gameGlobal:checkSubGame(self.playerAgainData.MainGamePlayRule, false) then
                g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_VIP_CREATE_ROOM, self.playerAgainData)
            end
        end
    elseif sender == self.Button_club_quickPlay then
        if self.isNormalRoom and type(self.playerAgainData) == "table" then
            self.playerAgainData.unused5 = 0
            self.playerAgainData.unused0 = 1 -- 亲友圈才有 快速开房 1 再来一局 0
            if g_gameGlobal:checkSubGame(self.playerAgainData.MainGamePlayRule, false) then
                g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_VIP_CREATE_ROOM, self.playerAgainData)
            end
        end
    elseif sender == self.Button_back then 
        -- self:removeSelf()
        g_gameGlobal:backToLobby()
    end

end


function GameBigResultLayer:createShareNode()
    self.shareNode:getChildByName("Image_downloadCode"):loadTexture("noplist/downloadCode.png" , ccui.TextureResType.localType)
    
    self.shareNode:hide()
end

--分享到微信
function GameBigResultLayer:shareImgToSDK()
    
end

function GameBigResultLayer:shareUrlToWX( )
    
end


function GameBigResultLayer:netEvent()
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE, function (event, msg)
        self:removeSelf()
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK, function (event, msg)
        if msg.result == 5000 then
            ShowToastMsg("亲友圈已解散")
        end
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_CLUB_CHANGE_NAME_ACK, function (event, msg)
        if msg.result == 0 then
            if self.startGameRequestAck and self.startGameRequestAck.clubId == msg.clubId then
                self.startGameRequestAck.clubName = msg.name
                
                self:setClubName(msg.name)
            end
        end
    end))
end


function GameBigResultLayer:onExit()

end

function GameBigResultLayer:setClubName(clubName)
    self.clubName:setFontSize(20)
    self.clubName:setString("")
end

function GameBigResultLayer:exitGuanZhanCallBack(sender)
    
    -- body
    g_gameGlobal:backToLobby();
end

function GameBigResultLayer:initWatchMode()
    if not self.isWatchWar then
        if not tolua.isnull(self.exitGuanZhanBtn) then
            self.exitGuanZhanBtn:setVisible(false)
        end
        return
    end
    
    self.clickNode:setVisible(false)
    self.playAgainBtn:setVisible(false)
    self.exitGuanZhanBtn:setVisible(true)
end

-- zzzzjp
function GameBigResultLayer:ScreenshotCallBack( event )
    if event.name == "ended" then
        if G_GALLERY_REFRESH_INSERT then
            release_print("G_GALLERY_REFRESH_INSERT EXIST")
            NFrame.Commons.UploadPointFuncs:uploadCustomData(NFrame.Defines.UploadPointDefines.CUSTOM_ID_CAPTURE_SCREEN_BTN_CLICK)
            local function captureScreen(callback)
                local function afterCaptured(succeed, outputFile)
                    if succeed then
                        callback(outputFile)
                    else
                        callback()
                        ShowToastMsg("图片生成失败，可能是可用空间不足")
                    end
                end
                local fileName = "CaptureScreen_"..os.time()..".jpg"
                cc.Director:getInstance():getTextureCache():removeTextureForKey(fileName)
                cc.utils:captureScreen(afterCaptured, fileName)
            end
            captureScreen(function(filename)
                if filename then
                    Platform.refreshGallery(filename)
                    ShowToastMsg("图片已保存到相册")
                else
                    ShowToastMsg("截屏失败")
                end
            end)
        else
            ShowToastMsg("您的包版本太低，请联系客服下载最新包！")
        end
    end
end

--新增显示别名
function GameBigResultLayer:showRenameString(renameString)
    if renameString and renameString ~= "" then
        local textReanme = self:findChildWithName(self.resourceNode_,"Text_ShowRename")
        if textReanme then
            textReanme:setString("别名:" .. g_gameGlobal:cutStringLength(renameString))
        end       
    end
end

return GameBigResultLayer �S  