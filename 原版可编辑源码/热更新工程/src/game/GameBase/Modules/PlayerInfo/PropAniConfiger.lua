--
-- Author: ChenBo
-- Date: 2020-05-29
--
-- 丢道具动画配置表解析处理

local PropAniConfiger = class("PropAniConfiger")

function PropAniConfiger:ctor()
    self:initData()
end

function PropAniConfiger:initData()
    if self._config then
        return self._config
    end
    self._config = {
        {
            ConfID = 1,
            Index = 1,
            SortIndex = 8,
            IsSelf = 2,
            Free = 0,
            AniPicName = "throwprop_bingtong.png",
            FileName = "hd_bingtong01",
            FlyAniName = "fly",
            ArriveAniName = "animation",
            ArmatureName = "armatureName",
            ArriveMusicName = "hd_bingtong01.mp3",
            Propid = 150283
        },
        {
            ConfID = 2,
            Index = 2,
            SortIndex = 7,
            IsSelf = 2,
            Free = 0,
            AniPicName = "throwprop_boom.png",
            FileName = "dj_boom",
            AppearAniName = "dj_boom_appear",
            FlyAniName = "dj_boom_fly",
            ArriveAniName = "dj_boom_arrive",
            ArmatureName = "Armature",
            FlyMusicName = "prop_zhadan_fly.mp3",
            ArriveMusicName = "prop_zhadan_boom.mp3",
            StartTime = 0.51,
            Propid = 150284
        },
        {
            ConfID = 3,
            Index = 3,
            SortIndex = 5,
            IsSelf = 2,
            Free = 0,
            GuideAniFile = "ios_jiqiang_xiao",
            GuideAni = "newAnimation",
            AniPicName = "throwprop_jiguanqiang.png",
            FileName = "hd_jiguanqiang01",
            EndFileName = "hd_jiguanqiang01_end_1",
            AppearAniName = "animation",
            FlyAniName = "fly",
            ArriveAniName = "animation",
            ArmatureName = "armatureName",
            AppearMusicName = "hd_jiguanqiang01.mp3",
            ArriveMusicName = "",
            StartTime = 0.6,
            FlyTime = 0.5,
            FlyCount = 30,
            Rotation = 0,
            RandPos = false,
            FlyName = "throwprop_zidan.png",
            Propid = 150285,
            dragonActionMult = {
                FlyCount = 60,
                SpaceTime = 0.05,
                RandPos3 = true
            }
        },
        {
            ConfID = 4,
            Index = 4,
            SortIndex = 6,
            IsSelf = 2,
            Free = 0,
            AniPicName = "throwprop_shoes.png",
            FileName = "dj_shoes",
            AppearAniName = "shoes_appear",
            FlyAniName = "shoes_fly",
            ArriveAniName = "shoes_arrive",
            ArmatureName = "Armature",
            FlyMusicName = "prop_shoe_fly.mp3",
            ArriveMusicName = "prop_shoe_stop.mp3",
            FlyTime = 0.25,
            RandPos = true,
            FlyName = "throwprop_shoes.png",
            FlyRotation = 270,
            Propid = 150286,
            spineAction = {
                FileName = "dj_shoes_new", -- 目录名
                FileName2 = "dj_shoes_ske", -- 文件名
                AniPicName = "throwprop_shoes.png",
                AppearAniName = "shoes_appear",
                AppearAniDuration = 0.03333,
                FlyAniName = "shoes_fly",
                ArriveAniName = "shoes_arrive2",
                ArriveAniDuration = 2.96666,
                ArmatureName = "Armature",
                FlyMusicName = "prop_shoe_fly.mp3",
                ArriveMusicName = "prop_shoe_stop.mp3",
                FlyTime = 0.25,
                RandPos = true,
                FlyName = "throwprop_shoes.png",
                FlyRotation = 270
            },
            spineActionMult = {
                ArriveAniName = "shoes_arrive",
                FlyMusicName = "shoes_in.mp3",
                ArriveMusicName = "shoes_stop.mp3",
                FlyCount = 25
            }
        },
        {
            ConfID = 5,
            Index = 5,
            SortIndex = 10,
            IsSelf = 2,
            Free = 0,
            AniPicName = "throwprop_jidan.png",
            FileName = "hd_jidan01",
            FlyAniName = "fly",
            ArriveAniName = "animation",
            ArmatureName = "armatureName",
            ArriveMusicName = "prop_egg_stop.mp3",
            RandPos = true,
            Propid = 150287,
            dragonActionMult = {
                FlyCount = 15,
                EndCount = 15
            }
        },
        {
            ConfID = 6,
            Index = 6,
            SortIndex = 9,
            IsSelf = 2,
            Free = 0,
            AniPicName = "throwprop_dianzan.png",
            FileName = "dianzan",
            AppearAniName = "dianzan_appear",
            FlyAniName = "dianzan_fly",
            ArriveAniName = "dianzan_arrive",
            ArmatureName = "Armature",
            ArriveMusicName = "",
            StartTime = 0.45,
            Propid = 150278
        },
        {
            ConfID = 7,
            Index = 7,
            SortIndex = 14,
            IsSelf = 2,
            Free = 0,
            AniPicName = "throwprop_ganbei.png",
            FileName = "hd_ganbei01",
            FlyAniName = "fly",
            ArriveAniName = "animation",
            ArmatureName = "armatureName",
            ArriveMusicName = "hd_ganbei01.mp3",
            Propid = 150279
        },
        {
            ConfID = 8,
            Index = 8,
            SortIndex = 13,
            IsSelf = 2,
            Free = 0,
            GuideAniFile = "iso_woshou_xiao",
            GuideAni = "newAnimation",
            AniPicName = "throwprop_woshou.png",
            FileName = "hd_woshou01",
            FlyAniName = "fly",
            ArriveAniName = "animation",
            ArmatureName = "armatureName",
            ArriveMusicName = "hd_woshou01.mp3",
            Propid = 150280
        },
        {
            ConfID = 9,
            Index = 9,
            SortIndex = 12,
            IsSelf = 2,
            Free = 0,
            GuideAniFile = "ios_daocha_xiao",
            GuideAni = "newAnimation",
            AniPicName = "throwprop_daocha.png",
            FileName = "hd_daocha01",
            FlyAniName = "fly",
            ArriveAniName = "animation",
            ArmatureName = "armatureName",
            ArriveMusicName = "hd_daocha01.mp3",
            Propid = 150281
        },
        {
            ConfID = 10,
            Index = 10,
            SortIndex = 11,
            IsSelf = 2,
            Free = 1,
            GuideAniFile = "yd_meigui",
            GuideAni = "newAnimation",
            AniPicName = "throwprop_meigui.png",
            AnimationName = "newAnimation",
            FileName = "hd_meigui01",
            FlyAniName = "fly",
            ArriveAniName = "animation",
            ArmatureName = "armatureName",
            ArriveMusicName = "hd_meigui01.mp3",
            Propid = 150282
        },
        {
            ConfID = 11,
            Index = 91,
            SortIndex = 1121,
            Scale = "2.5",
            IsSelf = 0,
            Free = 0,
            AniPicName = "caishen.png",
            FileName = "qf_caishen01",
            ArriveAniName = "caishen",
            ArmatureName = "armatureName",
            ArriveMusicName = "qf_caishen01.mp3",
            Propid = 150288
        },
        {
            ConfID = 12,
            Index = 92,
            SortIndex = 1122,
            Scale = "2.5",
            IsSelf = 0,
            Free = 0,
            AniPicName = "xishou.png",
            FileName = "dj_xishou",
            ArriveAniName = "dj_xishou",
            ArmatureName = "Armature",
            ArriveMusicName = "water.mp3",
            Propid = 150289
        },
        {
            ConfID = 13,
            Index = 93,
            SortIndex = 1123,
            IsSelf = 0,
            Free = 0,
            AniPicName = "throwprop_zhaocaimao.png",
            FileName = "Ios_zhaocaicat",
            ArriveAniName = "newAnimation",
            ArmatureName = "Armature",
            ArriveMusicName = "",
            Propid = 150290
        },
        {
            ConfID = 14,
            Index = 94,
            SortIndex = 1124,
            IsSelf = 0,
            Free = 0,
            AniPicName = "throwprop_zhaocaishu.png",
            FileName = "Ios_yqs",
            ArriveAniName = "newAnimation",
            ArmatureName = "Armature",
            ArriveMusicName = "",
            Propid = 150291
        },
        {
            ConfID = 15,
            Index = 95,
            SortIndex = 1125,
            IsSelf = 0,
            Free = 0,
            AniPicName = "throwprop_sfzy.png",
            FileName = "Ios_lucky",
            ArriveAniName = "newAnimation",
            ArmatureName = "Armature",
            ArriveMusicName = "",
            Propid = 150292
        },
        {
            ConfID = 16,
            Index = 96,
            SortIndex = 1126,
            Scale = "2.5",
            IsSelf = 0,
            Free = 0,
            AniPicName = "chuizhuozi.png",
            FileName = "daoju_chuizhuozi",
            ArriveAniName = "chuizhuozi1",
            ArmatureName = "armatureName",
            ArriveMusicName = "daoju_chuizhuozi.mp3",
            Propid = 150294
        },
        {
            ConfID = 17,
            Index = 97,
            SortIndex = 1127,
            Scale = "2.5",
            IsSelf = 0,
            Free = 0,
            AniPicName = "dajidali.png",
            FileName = "qf_dajidali01",
            ArriveAniName = "dajidali",
            ArmatureName = "armatureName",
            ArriveMusicName = "qf_dajidali01.mp3",
            Propid = 150293
        },
        {
            ConfID = 18,
            Index = 11,
            SortIndex = 16,
            IsSelf = 2,
            Free = 1,
            GuideAniFile = "ios_gxfc_xiao",
            GuideAni = "newAnimation",
            AniPicName = "ios_gxfc_caishen_tex.png",
            FileName = "ios_gxfc_caishen",
            FlyAniName = "stop",
            ArriveAniName = "star",
            ArmatureName = "Armature",
            ArriveMusicName = "gongxifacai.mp3",
            FlyTime = 0.7,
            EndTime = 1,
            Propid = 150692
        },
        {
            ConfID = 19,
            Index = 12,
            SortIndex = 15,
            IsSelf = 2,
            Free = 1,
            GuideAniFile = "ios_bianpao_xiao",
            GuideAni = "newAnimation",
            AniPicName = "zjb_bianpao_tex.png",
            FileName = "zjb_bianpao",
            FlyAniName = "stop",
            ArriveAniName = "star",
            ArmatureName = "Armature",
            ArriveMusicName = "bianpao.mp3",
            FlyTime = 0.75,
            Propid = 150693
        },
        {
            -- 醒一醒
            ConfID = 20,
            Index = 20,
            SortIndex = 1,
            IsSelf = 2,
            Free = 1,
            Big = true,
            AniShow = {
                filePath = "res/animation/GameCommon/prop_ani/zzb_hddy_xyx/",
                fileName = "zzb_hddy_xyx",
                aniName = "dan",
                aniNameMult = "shi",
                scale = 0.6,
                pos = cc.p(-50, -15)
            },
            Propid = 150790
        },
        {
            ConfID = 21,
            Index = 21,
            SortIndex = 2,
            IsSelf = 2,
            Free = 1,
            AniBack = {
                filePath = "res/animation/Common/",
                fileName = "zzb_ty_xgaung",
                aniName = "animation"
            },
            Visible = false,
            Propid = 150791
        },
        {
            -- 吸欧气
            ConfID = 22,
            Index = 22,
            SortIndex = 3,
            IsSelf = 2,
            Free = 1,
            AniBack = {
                filePath = "res/animation/Common/",
                fileName = "zzb_ty_xgaung",
                aniName = "animation"
            },
            AniPicName = "PlayerInfoNew_hulu.png",
            AniPicNameText = "PlayerInfoNew_wenzi.png",
            Propid = 150792
        },
        {
            -- 敲木鱼
            ConfID = 23,
            Index = 23,
            SortIndex = 4,
            IsSelf = 2,
            Free = 1,
            AniBack = {
                filePath = "res/animation/Common/",
                fileName = "zzb_ty_xgaung",
                aniName = "animation"
            },
            AniPicName = "PlayerInfoNew_muyu.png",
            AniPicName10 = "PlayerInfoNew_chaocaimao.png",
            AniPicNameMass = "PlayerInfoNew_changchu.png",
            Propid = 150793
        }
    }

    local defaultConfig = {
        ConfID = 0,
        Index = 0,
        SortIndex = 0,
        IsSelf = 2,
        Visible = true,
        Free = 0,
        FileName = "", -- 默认动画文件名
        EndFileName = "", -- 终点动画文件名
        ArmatureName = "", -- 龙骨动画名称
        -- 引导动画
        GuideAniFile = "",
        GuideAni = "",
        -- 出现动画
        StartCount = 1, -- 开始节点个数
        AniPicName = "", -- 起始图片名字
        AppearAniName = "", -- 出现动画名称
        AppearMusicName = "", -- 出现时音效
        StartTime = -1, -- 起始动画与飞行动画的延迟时间
        -- 飞行动画
        FlyName = "", -- 飞行动画的图片（比 FlyAniName 优先）
        FlyAniName = "", -- 飞行动画名称
        FlyTime = -1, -- 飞行时间
        FlyCount = 1, -- 飞行节点个数
        FlyRotation = 0,
        SpaceTime = 0.1, -- 飞行间隔时间
        RandPos = false, -- 飞行路径随机路径
        WaitTime = 0.3, -- 飞行完成的等待时间
        FlyEndWaitTime = 0,
        -- 到达动画
        ArriveAniName = "", -- 到达动画名称
        ArriveMusicName = "", -- 达到时音效
        EndCount = 1, -- 到达动画有几个
        Big = false, -- 背景框是大的
        Propid = 0
    }

    for i = 1, #self._config do
        local cloneData = clone(defaultConfig)
        table.merge(cloneData, self._config[i])
        self._config[i] = cloneData
    end
end

-- 根据大厅id获取游戏支持的动画信息
function PropAniConfiger:getAniInfoByLobbyID(lobbyid)
    local ok, aniInfoJson = CF.areaData:judgeSupportThrowProp(lobbyid)
    if not ok then
        return {}
    end
    local list = clone(self._config)

    local jsonData = {}
    if aniInfoJson ~= nil and aniInfoJson ~= "" then
        local ok2, msg =
            pcall(
            function()
                jsonData = cjson.decode(aniInfoJson)
            end
        )

        if not ok2 then
            print("cjson failed: " .. msg)
            return {}
        end
    end

    if type(jsonData) == "table" and jsonData.PropAniConf then
        for i = 1, #jsonData.PropAniConf do
            if list[i] and list[i].Index == jsonData.PropAniConf[i].Index then
                for k, v in pairs(jsonData.PropAniConf[i]) do
                    list[i][k] = v
                end
            end
        end
    end

    for i = #list, 1, -1 do
        if list[i].Visible == false then
            table.remove(list, i)
        end
    end

    local sortFunc = function(a, b)
        return a.SortIndex < b.SortIndex
    end
    table.sort(list, sortFunc)

    return list
end

function PropAniConfiger:getAniInfoByIndex(index)
    for _, v in pairs(self._config) do
        if index == tonumber(v.Index) then
            return v
        end
    end
    return nil
end

return PropAniConfiger
