
--资源文件管理
--ganpengjin

cc.exports.LYPDKResource = {}

--玩家类型
LYPDKResource.SexMan                    = 1 --男
LYPDKResource.SexWoman                  = 0 --女

--资源根目录
LYPDKResource.ResPath = "game/lyPuKe/"       --res目录地址
LYPDKResource.SrcPath = "game/LYPDK/"        --src目录地址

--纹理类型
LYPDKResource.TextureLocalType          = ccui.TextureResType.localType -- 本地纹理缓存类型
LYPDKResource.TexturePlistType          = ccui.TextureResType.plistType -- plist纹理缓存类型

LYPDKResource.plistFilesPath = {
    {path = LYPDKResource.ResPath  .. "cardsUIs/",        plistName = "cardsUIs" , pngName = "cardsUIs"},
    {path = LYPDKResource.ResPath  .. "deskUIs/",         plistName = "deskUIs", pngName = "deskUIs"},
    {path = LYPDKResource.ResPath  .. "resultUIs/",       plistName = "resultUIs", pngName = "resultUIs"},  
    {path = "game_result/",                                     plistName = "game_result", pngName = "game_result"},   
}

--骨骼动画资源
LYPDKResource.playGameBonesRes          = "spine/lypdk/"

--字体路径
LYPDKResource.ResultYiShuFontResWinRes   = "game_result/game_result_win_num.png"  --计分艺术字 赢 资源路径
LYPDKResource.ResultYiShuFontResLostRes  = "game_result/game_result_lose_num.png" --计分艺术字 输 资源路径
LYPDKResource.FontRes                   = "fonts/huakangyuanti.ttf" --字体

--游戏资源
LYPDKResource.WarningNormalRes          = LYPDKResource.ResPath .. "deskUIs/deng1.png" --警告图片
LYPDKResource.WarningHightLightRes      = LYPDKResource.ResPath .. "deskUIs/deng2.png" --警告图片
LYPDKResource.BeiPaiRes                 = LYPDKResource.ResPath .. "deskUIs/paibei.png"   --背牌
LYPDKResource.TuoGuanRes                = LYPDKResource.ResPath .. "deskUIs/1.png"        --托管
LYPDKResource.YaoBuQiRes                = LYPDKResource.ResPath .. "deskUIs/Pass.png"   --要不起
LYPDKResource.YaoBuQiRes1                = LYPDKResource.ResPath .. "deskUIs/Pass2.png"   --要不起

LYPDKResource.FeiJiRes                  = LYPDKResource.ResPath .. "deskUIs/Feiji.png"   --飞机
LYPDKResource.XiaoTouRes                = LYPDKResource.ResPath .. "resultUIs/xiaotou.png"   --小头
LYPDKResource.DaTouRes                  = LYPDKResource.ResPath .. "resultUIs/da_tou.png"   --小头
LYPDKResource.BigResultRes              = LYPDKResource.ResPath .. "LYPDKBigResult.csb"   --大计分
LYPDKResource.SmallResultRes            = LYPDKResource.ResPath .. "LYPDKResultLayer.csb" --小计分
LYPDKResource.OperatorBtnRes            = LYPDKResource.ResPath .. "OperateBtnNode.csb";  --操作按钮
LYPDKResource.SmallResultWinRes         = LYPDKResource.ResPath .. "resultUIs/result_1.png";  --赢家
LYPDKResource.SmallResultLostRes        = LYPDKResource.ResPath .. "resultUIs/result_2.png";  --输家
LYPDKResource.SmallResultNoThingRes        = LYPDKResource.ResPath .. "resultUIs/result_3.png";  --平局
LYPDKResource.BigWinerRes               = LYPDKResource.ResPath .. "resultUIs/result_top_winner.png";  --大赢家
LYPDKResource.playGameFuJiAtlasRes      = LYPDKResource.playGameBonesRes .. "chuntian.atlas" --春天动画
LYPDKResource.playGameFuJiJsonRes       = LYPDKResource.playGameBonesRes .. "chuntian.json"
LYPDKResource.playGameZhaDanAtlasRes    = LYPDKResource.playGameBonesRes .. "zhadan.atlas"  --炸弹
LYPDKResource.playGameZhaDanJsonRes     = LYPDKResource.playGameBonesRes .. "zhadan.json"

LYPDKResource.playGameFeiJiAtlasRes    = LYPDKResource.playGameBonesRes .. "szldfj.atlas"  --飞机
LYPDKResource.playGameFeiJiJsonRes     = LYPDKResource.playGameBonesRes .. "szldfj.json"

LYPDKResource.playGameLianDuiAtlasRes    = LYPDKResource.playGameBonesRes .. "szldfj.atlas"  --连对
LYPDKResource.playGameLianDuiJsonRes     = LYPDKResource.playGameBonesRes .. "szldfj.json"


LYPDKResource.fzCreateRoomImageRes      = "game_result/daikaiIcon2.png" --房主代开房
LYPDKResource.clubCreateRoomImageRes    = "game_result/clubKaifangIcon.png"         -- 亲友圈代开房

--游戏声音
LYPDKResource.SoundRootRes              = "sound/sound_LYPDK/"
LYPDKResource.SoundChatRes              = LYPDKResource.SoundRootRes .. "chat/"
LYPDKResource.SoundManRes               = LYPDKResource.SoundRootRes .. "man/"
LYPDKResource.SoundMusicRes             = LYPDKResource.SoundRootRes .. "music/"
LYPDKResource.SoundSpecialRes           = LYPDKResource.SoundRootRes .. "special/"
LYPDKResource.SoundWomanRes             = LYPDKResource.SoundRootRes .. "female/"
LYPDKResource.SoundWinRes               = LYPDKResource.SoundMusicRes .. "Win.mp3"  --赢
LYPDKResource.SoundLostRes              = LYPDKResource.SoundMusicRes .. "Lose.mp3" --输
LYPDKResource.SoundWaittingRes          = LYPDKResource.SoundMusicRes .. "Welcome.mp3" --等待
LYPDKResource.SoundPlayGameRes          = LYPDKResource.SoundMusicRes .. "Exciting.mp3" --游戏
LYPDKResource.SoundSendCardRes          = LYPDKResource.SoundSpecialRes .. "sendcard.mp3" --发牌
LYPDKResource.SoundAlterCardRes         = LYPDKResource.SoundSpecialRes .. "alert.mp3" --警告


--闹钟及警报资源
-- 创建帧动画：
-- path：资源路径（%d：从1到count张）
-- count：资源张数
-- speed：播放速度
LYPDKResource.WarmRes = {
    res = {path = "game/lyPuKe/deskUIs/deng%s.png", count = 2, speed = 10/60},
}

LYPDKResource.AlarmClockRes = LYPDKResource.ResPath .. "deskUIs/timeout.png" --警告图片

--预加载Res
LYPDKResource.preLoadLYPDKRes = function ( )
    -- body
    --添加plist文件
    for k, v in pairs(LYPDKResource.plistFilesPath) do
        if v then
            local path = v.path;
            local plistFile = path .. v.plistName .. ".plist";
            local pngFile = path .. v.pngName .. ".png";
            display.loadSpriteFrames(plistFile, pngFile);
        end
    end
end

--删除Res
LYPDKResource.removeLYPDKRes = function ()
    -- body
    for k, v in pairs(LYPDKResource.plistFilesPath) do
        if v then
            local path = v.path;
            local plistFile = path .. v.plistName .. ".plist";
            local pngFile = path .. v.pngName .. ".png";
            display.removeSpriteFrames(plistFile, pngFile);
        end
    end
end

return LYPDKResource;