--ganpengjin
------------------------------计分界面----------------------------
local baseLayer             = require("newgold.MatchGames.PDK.LYPDK.common.baseLayer")
local LYPDKSmallResultData  = class("LYPDKSmallResultData", baseLayer)
local spriteCard  = require("newgold.MatchGames.PDK.LYPDK.common.PDKNewCard")
function LYPDKSmallResultData:onCreate()
    -- body
    LYPDKSmallResultData.super.onCreate(self);
    self.csbName    = LYPDKResource.SmallResultRes;
    
end

local LYPDKSmallResultView = class("LYPDKSmallResultView", LYPDKSmallResultData)

function LYPDKSmallResultView:ctor(curGameModle)
    self.curGameModle = curGameModle;
    LYPDKSmallResultView.super.ctor(self)
end

function LYPDKSmallResultView:onCreate( ... )
    -- body
    LYPDKSmallResultView.super.onCreate(self);
    self:initUIS();
    self:onStart();
    self.audio:pauseBG();
end

function LYPDKSmallResultView:initUIS( ... )
    -- body
    LYPDKSmallResultView.super.initUIS(self);
    self:createBaseMap();
    self:createPDKResoueceNode(self.csbName);

    self.Panel_win  = self:findChildWithName(self.resourceNode_, "Panel_win")
    if self.Panel_win then
        self.Panel_win:setVisible(false);
    end

    self.Panel_lost  = self:findChildWithName(self.resourceNode_, "Panel_lost")
    if self.Panel_lost then
        self.Panel_lost:setVisible(false);
    end

    --输赢
    self.Image_title = self:findChildWithName(self.resourceNode_, "Image_title");  
    if self.Image_title then
        self.Image_title:setVisible(false);
    end

    local ListView_record = self:findChildWithName(self.resourceNode_, "ListView_record")
    if ListView_record then
        ListView_record:removeAllItems();
        ListView_record:setItemsMargin(6);
    end
    self.ListView_record = ListView_record;

    --我的模板
    self.Panel_me = self:findChildWithName(self.resourceNode_, "Panel_me");  
    if self.Panel_me then
        self.Panel_me:setVisible(false);
    end

    self.Label_des = self:findChildWithName(self.resourceNode_, "Label_des");  
    if self.Label_des then
        self.Label_des:setVisible(false);
    end

    self.Label_time = self:findChildWithName(self.resourceNode_, "Label_time");  
    if self.Label_time then
        self.Label_time:setVisible(false);
    end

    --其他一个人模板
    self.Panel_one = self:findChildWithName(self.resourceNode_, "Panel_one");  
    if self.Panel_one then
        self.Panel_one:setVisible(false);
    end

    --其他两个模板
    self.Panel_two = self:findChildWithName(self.resourceNode_, "Panel_two");  
    if self.Panel_two then
        self.Panel_two:setVisible(false);
    end

    self.cur_beishu_cout = self:findChildWithName(self.resourceNode_, "cur_beishu_cout"); 
    if self.cur_beishu_cout then
        self.cur_beishu_cout:setVisible(false);
    end

    self.Button_close = self:addButtonTouchedEventByBtnName("Button_close", handler(self, self.backToLobbyCallBack));
    self.Button_continue = self:addButtonTouchedEventByBtnName("Button_continue", handler(self, self.continueCallBack));
    self.Button_backLobby = self:addButtonTouchedEventByBtnName("Button_backLobby", handler(self, self.backToLobbyCallBack));

    
    if self.Button_close then
        self.Button_close:setVisible(false);
    end

    if self.curGameModle == g_gameConstant.VIP_GAME_MODEL then
        if self.Button_backLobby then
            self.Button_backLobby:setVisible(false);
        end
    end
end

function LYPDKSmallResultView:createMeItem( ... )
    -- body
    if not self.Panel_me then
        return nil;
    end

    local panel = self.Panel_me:clone();
    if panel then
        panel:setVisible(true);
    end
    return panel
end

function LYPDKSmallResultView:createOtherItem( count )
    -- body

    if not count then
        return nil;
    end

    if not self.Panel_one then
        return nil;
    end

    if not self.Panel_two then
        return nil;
    end

    local curPanel = nil

    if count == 1 then
        curPanel = self.Panel_one;

    elseif count == 2 then
        curPanel = self.Panel_two;
    else 
        return nil;
    end

    local panel = curPanel:clone();
    if panel then
        panel:setVisible(true);
    end

    return panel;
end

function LYPDKSmallResultView:updateShareResultUIS( ... )
    -- body
    ----release_print("LYPDKSmallResultView:updateShareResultUIS");
end

function LYPDKSmallResultView:shareCallBack( sender )
end

function LYPDKSmallResultView:backToLobbyCallBack( sender )
    -- body
    ----release_print("LYPDKSmallResultView:backToLobbyCallBack")
    g_gameGlobal:backToLobby();
end

function LYPDKSmallResultView:huanZhuoCallBack( sender )
    -- body
    ----release_print("LYPDKSmallResultView:backToLobbyCallBack")
    g_gameGlobal:backToLobby();
end

function LYPDKSmallResultView:continueCallBack( sender )
    -- body
    ----release_print("LYPDKSmallResultView:continueCallBack")
    local continueMsg = {}
    continueMsg.operation = g_gameConstant.MAHJONG_OPERTAION_GAME_OVER_CONTINUE;
    self:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, continueMsg);    
end

function LYPDKSmallResultView:updateGameResultUIS()
    -- body
    ----release_print("LYPDKSmallResult:updateGameResultUIS");
    local selfInfo = g_gameGlobal:getMyselfInfo()
    local state = false;  --1胜利  2失败 3平局
    for k, v in pairs(self.resultData.players) do
        if selfInfo.playerIndex == v.palyerIndex then
            if v.gold > 0 then
                state = 1;
                self.audio:playSFX(LYPDKResource.SoundWinRes);
            elseif v.gold == 0 then 
                state = 3
            else
                state = 2;
                self.audio:playSFX(LYPDKResource.SoundLostRes);
            end
            break
        end
    end

    local imagePath = LYPDKResource.SmallResultWinRes;

    if state == 2 then
        imagePath = LYPDKResource.SmallResultLostRes;
    elseif state == 3 then 
        imagePath = LYPDKResource.SmallResultNoThingRes
    end

    if self.Image_title then
        self.Image_title:setVisible(true);
        self.Image_title:loadTexture(imagePath, LYPDKResource.TextureLocalType);
    end

    if self.cur_beishu_cout then
        self.cur_beishu_cout:setString(1999999)
        self.cur_beishu_cout:setVisible(true);
    end

    local dateT = os.date("*t")
    local timeStr = string.format("%s-%s-%s  %s:%02d",
            dateT.year,
            dateT.month,
            dateT.day,
            dateT.hour,
            dateT.min)

    local room_id = self.gameRequestData.vipTableID or 0;
    local isGold = false

    if room_id > 0 and self.Button_close then
        self.Button_close:setVisible(false);
    end

    if room_id == 0 then isGold = true end

    local msgGameStart = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME)
    
    
    local currentHand  = msgGameStart.quanNum;
    local totalJuShu = g_gameGlobal:getCurTotalJuShu();
    if totalJuShu == currentHand  and not isGold then
        if self.Button_backLobby then
            self.Button_backLobby:setVisible(false);
        end
    end
    
    if self.Label_time then

        local str = ""
        if not isGold then
            str = str .. "房间号: " .. room_id .. " "
        end
        
        if currentHand and not isGold then
            str = str .. "第" .. currentHand .. "局" .. " "
        end

        str = str .. timeStr

        
        self.Label_time:setString(str)
        self.Label_time:setVisible(true);
    end

    
    local way, wanfa2 = self.gameRequestData.newPlayWay, self.gameRequestData.unused0
    local desc = g_gameGlobal:parseWanfa(way, " ",nil,nil,nil,wanfa2)

    -- g_gameGlobal:parseWanfaList(self.gameRequestData.MainGamePlayRule, self.gameRequestData.MinorGamePlayRuleList, " ", false, false, false)
    local otherDesc = ""
    otherDesc = " " .. g_gameGlobal:getMaxPlayerNum() .. "人"  
    -- if g_gameGlobal:getFangFeiJunTan() == 1 then
    --     otherDesc = otherDesc .. " " .. "房卡均摊"   
    -- end

    if totalJuShu > 0 then
        otherDesc = otherDesc .. " " .. totalJuShu .. "局"
    end

    if self.Label_des then
        self.Label_des:setString(desc..otherDesc)
        self.Label_des:setVisible(true);
    end

    self:updateUserInforUIS();
end

function LYPDKSmallResultView:getWiner( ... )
    -- body
    local playerData = self.resultData.players or {};
    for k, v in pairs(playerData) do
        if v and v.gold > 0 then
            return v;
        end
    end

    return nil;
end

function LYPDKSmallResultView:updateUserInforUIS()
    -- body
    ----release_print("LYPDKSmallResult:updateUserInforUIS");

    local playerData = self.resultData.players or {}

    local playerDataCount = #playerData
    if playerDataCount < 1 then
        return;
    end

    --自己的数据放在第一个
    local item_panel_array = {}
    local me_panel  = self:createMeItem();
    if me_panel then
        self:_fillPlayerItem(me_panel, playerData[1]); 
        table.insert(item_panel_array, me_panel);
    end

    if playerDataCount < 3 then
        for i = 2, playerDataCount do
            local other_panel = self:createOtherItem(1);
            if other_panel then
                self:_fillPlayerItem(other_panel, playerData[i]); 
                table.insert(item_panel_array, other_panel);
            end
        end
    elseif playerDataCount >= 3 then
        for i = 2, playerDataCount, 2 do
            local other_panel = self:createOtherItem(2);
            if other_panel then
                for k = 1, 2 do --小子项
                    local item_panel = other_panel:getChildByName("Panel_" .. k);
                    if item_panel then
                        self:_fillPlayerItem(item_panel, playerData[i + (k - 1)]); 
                    end
                end
                table.insert(item_panel_array, other_panel);
            end
        end
    end

    --添加到 ListView_record中
    for k, v in pairs(item_panel_array) do
        if self.ListView_record and v then
            self.ListView_record:pushBackCustomItem(v);
        end
    end
end

--index: 第几个节点所需对应的配置数据
function LYPDKSmallResultView:_fillPlayerItem( playerNode, playerData)
    -- body
    if not playerNode then
        return;
    end

    if not playerData then
        playerNode:setVisible(false)
        return;
    end

    playerNode:setVisible(true);
    local isWin     = self:isWin(playerData);
    local socrePngFile = LYPDKResource.ResultYiShuFontResLostRes
    if isWin == true then
        socrePngFile   = LYPDKResource.ResultYiShuFontResWinRes
    end

    local player    = g_gameGlobal:getMyselfInfo();

    --名字
    local name = self:findChildWithName(playerNode, "nickName");
    if name then
        name:setVisible(true);
        name:setString(g_gameGlobal:cutStringLength(playerData.playerName));
    end    

    --分数
    local score = self:findChildWithName(playerNode, "score");
    if score then
        score:setVisible(true);
        score:setProperty(( playerData.gold ~= 0 and "/" or "").. tostring(math.abs(playerData.gold)), socrePngFile, 37, 50, "/");
    end    

    -- --余牌
    local handCards = self.resultData["player"..tostring(playerData.tablePos).."HandCards"] or {};    
    local Text_yuPai_count = self:findChildWithName(playerNode, "left_count");
    local count = #handCards;
    if Text_yuPai_count then
        Text_yuPai_count:setVisible(true);
        Text_yuPai_count:setProperty(( count ~= 0 and "/" or "").. tostring(math.abs(count)), socrePngFile, 37, 50, "/");
        Text_yuPai_count:setStringValue(count);
    end   

    Text_yuPai_count:hide()


    local left_count_desc = self:findChildWithName(playerNode, "left_count_desc");
    left_count_desc:setString(playerData.desc )


    --余牌开始位置
    local yuPaiStartPos = self:findChildWithName(playerNode, "start_pos");
    local center_x , center_y = yuPaiStartPos:getPosition();
    local scale_width = 0;
    if yuPaiStartPos and handCards and #handCards > 0 then
        if next(handCards) ~= nil then 
            PublicFunc.sortByCardLogic(handCards,1)
        end 
        local node = spriteCard.newHandCardPanel(handCards, 1, false);
        if node then
            local scale = 0.35;
            playerNode:addChild(node)
            node:setScale(scale);
            scale_width  = node:getContentSize().width * scale;
            local scale_height = node:getContentSize().height * scale;
            node:setPosition(cc.p(center_x - scale_width / 2, center_y - scale_height / 2))
        end
    end

    --隐藏无效数据
    if yuPaiStartPos then
        yuPaiStartPos:setString("")
    end

    --是否是大头
    local Image_datou = self:findChildWithName(playerNode, "Image_datou");
    local player_num = g_gameGlobal:getMaxPlayerNum() --两人场没有大小头
    local isSelect_daxiaotou = false;
    for k, v in pairs(self.gameRequestData.MinorGamePlayRuleList or {}) do
        if v and 
           v == g_gameConstant.GAME_SUB_RULE_QUAN_DA_XIAO_TOU 
           or 
           v == g_gameConstant.GAME_SUB_RULE_QUAN_DA_XIAO_TOU_6_3 
           or 
           v == g_gameConstant.GAME_SUB_RULE_QUAN_DA_XIAO_TOU_8_4 
           or 
           v == g_gameConstant.GAME_SUB_RULE_QUAN_DA_XIAO_TOU_10_5 
           then
            isSelect_daxiaotou = true;
            break;
        end
    end

    if Image_datou then
        if player_num ~= 2 and isSelect_daxiaotou == true then
            local isdt = self:isDaTou(playerData);--判断是否是大头
            if isdt == false then
                local isxt = self:isXiaoTou(playerData); --判断是否是小头
                if isxt == true then
                    Image_datou:ignoreContentAdaptWithSize(true);
                    Image_datou:loadTexture("MatchAH/"..LYPDKResource.XiaoTouRes, LYPDKResource.TexturePlistType)
                end
                Image_datou:setVisible(isxt);
            else
                Image_datou:setVisible(isdt);
            end
        else
            Image_datou:setVisible(false);
        end
    end
end

function LYPDKSmallResultView:isWin(playerData)
    -- body
    if not playerData then
        return false;
    end

    if playerData.gold > 0  then --胜
        return true;

    elseif playerData.gold < 0 then --负
        return false

    else
        return true --平局

    end

    return false 
end

function LYPDKSmallResultView:isDaTou(playerData)
    if not playerData then
        return false;
    end

    local handCardsArray = {}
    for k,item_v in pairs(self.resultData.players) do
        if item_v then
            local handCards = self.resultData["player"..tostring(item_v.tablePos).."HandCards"] or {};
            handCardsArray[item_v.tablePos] = #handCards;
        end
    end

    local temp_handCards_count = handCardsArray[playerData.tablePos];
    if temp_handCards_count < 0 then
        return false;
    end

    local temp_player = nil;
    for pos, handCard_counts in pairs(handCardsArray) do
        if handCard_counts and handCard_counts > temp_handCards_count then
            temp_handCards_count = handCard_counts;
            temp_player = pos;
        end
    end

    if temp_player == nil then
        return true;
    end

    return false;
end

function LYPDKSmallResultView:isXiaoTou(playerData)
    if not playerData then
        return false;
    end

    local handCardsArray = {}
    for k,item_v in pairs(self.resultData.players) do
        if item_v then
            local handCards = self.resultData["player"..tostring(item_v.tablePos).."HandCards"] or {};
            local count = #handCards
            if count > 0 then
                handCardsArray[item_v.tablePos] = #handCards;
            end
        end
    end

    local temp_handCards_count = handCardsArray[playerData.tablePos] or 0;
    if temp_handCards_count == 0 then
        return false;
    end

    local temp_player = nil;
    for pos, handCard_counts in pairs(handCardsArray) do
        if handCard_counts and handCard_counts < temp_handCards_count and handCard_counts > 0 then
            temp_handCards_count = handCard_counts;
            temp_player = pos;
        end
    end

    if temp_player == nil then
        return true;
    end

    return false;
end

function LYPDKSmallResultView:updateGameResultData()
    -- body
    ----release_print("LYPDKSmallResult:updateGameResultData");
    self.resultData      = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK) or {}
    self.gameRequestData = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK) or {}


    --排序,玩家自己的数据放在第一位   
    local playerData = self.resultData.players or {}
    local userInfo   = g_gameGlobal:getMyselfInfo();
    for k, v in pairs(playerData or {}) do
        if v and userInfo then
            if userInfo.playerIndex == v.palyerIndex then 
                local t1 = playerData[1];
                playerData[1] = playerData[k];
                playerData[k] = t1;
                break;
            end
        end
    end 
    self.resultData.players = playerData; 
end

local LYPDKSmallResult = class("LYPDKSmallResult", LYPDKSmallResultView);
function LYPDKSmallResult:onStart( ... )
    -- body
    self:updateGameLayer();
end

function LYPDKSmallResult:updateGameLayer( )
    -- body
    ----release_print("LYPDKSmallResult:updateGameLayer");
    self:updateGameResultData();
    self:updateGameResultUIS();
end

--监听手机返回键
function LYPDKSmallResult:onBackEvent(keyCode, event)
    ----release_print("LYPDKSmallResult:onBackEvent");
    if event then event:stopPropagation(); end
    self:onPlayTouchedSFX();
end

function cc.exports.LYPDKSmallResult_createLYPDKSmallResult(...)
    -- body
    return LYPDKSmallResult:create(...);
end

return LYPDKSmallResult;   �H  