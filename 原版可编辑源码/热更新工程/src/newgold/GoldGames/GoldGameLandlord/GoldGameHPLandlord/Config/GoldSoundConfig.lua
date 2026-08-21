local GoldSoundConfig = {
    -- music
    bgMusic = "audio/42210/Main/ddz_music_scene1",
    bgMusic2 = "audio/42210/Main/ddz_music_scene2",

    -- effect
    click = "audio/42210/Main/buttonclick", -- 按钮点击（对局外）
    headShow = "audio/42210/Main/touxiangeffect", --
    shuffle = "audio/42210/Main/game_paeslide03", -- 发牌动画，每张播一次

    selectCard = "audio/42210/Main/game_handselect", -- 点击选牌
    unSelectCard = "audio/42210/Main/SpecSelectCard", -- 取消选牌（重新选牌）
    outCard = "audio/42210/Main/game_ndrop", -- 出牌
    outCard2 = "audio/42210/Main/game_ndropmore", -- 出牌（大于单张）
    boom1 = "audio/42210/Main/rocket_sound", -- 炸弹
    boom2 = "audio/42210/Main/beast1_sound", -- 2连炸玄武现世
    boom3 = "audio/42210/Main/beast2_sound", -- 3连炸虎啸山林
    boom4 = "audio/42210/Main/beast3_sound", -- 4连炸火凤燎原
    boom5 = "audio/42210/Main/beast4_sound", -- 5连炸飞龙在天
    feiJi = "audio/42210/Main/plane_sound", -- 飞机
    tanHanCard = "audio/42210/Main/game_handopenyakuman", -- 对局结束后摊开手牌
    order = "audio/42210/Main/game_order", -- 身份确认
    mult = "audio/42210/Main/Special_Multiply", -- 倍数增加
    win = "audio/42210/Main/game_win", -- 胜利
    lose = "audio/42210/Main/game_lose", -- 失败
    spring = "audio/42210/Main/spring_sound", -- 春天
    coins = "audio/42210/Main/coins", -- 金币转移

    clock = "audio/42210/Main/game_timer", -- 倒计时警示音

    -- talk 例子   talk/man/Man_hanzi   talk/woman/Woman_hanzi
    hanzi = "_hanzi", -- 姑娘你真是条汉子！
    huakai = "_huakai", -- 我炸你个桃花朵朵开！
    huaxie = "_huaxie", -- 我等的假花儿都谢了！
    jiuzhe = "_jiuzhe", -- 就这就这？
    moto = "_moto", -- 搏一搏，单车变摩托
    zhadehao = "_zhadehao", -- 炸的好！

    -- 其他类型定义
    otherOrder = "_Order",
    otherNoOrder = "_NoOrder",
    otherNoRob = "_NoRob",
    otherJiabei = "_jiabei",
    otherChaojijiabei = "_chaojijiabei",
    otherBujiabei = "_bujiabei",
    otherBaojing1 = "_baojing1",
    otherBaojing2 = "_baojing2",
    otherRob = "rob", -- 特殊处理
    otherBuyao = "buyao" -- 特殊处理
}

return GoldSoundConfig