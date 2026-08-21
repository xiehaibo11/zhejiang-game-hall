--[[背包道具资源配置]]
local BagPropConfig = {}


local mergeTable = function(dest, src)
    local tmpDest = clone(dest)
    for k, v in pairs(src) do
        tmpDest[k] = v
    end
    return tmpDest
end

--压牌器动画
local YPQ_ANI_ALL = {
    path = "res/animation/GameCommon/packet_ske_ani/", ske = "zjb_ypq_chuxian_ske.json", tex = "zjb_ypq_chuxian_tex.json", armatureName = "Armature", dragonBonesName = "zjb_ypq_chuxian", animationName = "",}

BagPropConfig.YPQ_ANI_CONFIG = {
   [150151] = mergeTable(YPQ_ANI_ALL,{animationName = "jinchan_chuxian"}),--金蟾动画
   [150152] = mergeTable(YPQ_ANI_ALL,{animationName = "qilin_chuxian"}),--麒麟动画
   [150273] = mergeTable(YPQ_ANI_ALL,{animationName = "jinniu_chuxian"}),--金牛动画
   [150274] = mergeTable(YPQ_ANI_ALL,{animationName = "longgui_chuxian"}),--龙龟动画
   [150354] = mergeTable(YPQ_ANI_ALL,{animationName = "jinchan_chuxian"}),--金蟾动画
   [150670] = mergeTable(YPQ_ANI_ALL,{animationName = "longgui_chuxian"}),--龙龟动画
   [150676] = mergeTable(YPQ_ANI_ALL,{animationName = "qinglong_chuxian"}),--青龙动画
   [150681] = mergeTable(YPQ_ANI_ALL,{animationName = "qinglong_chuxian"}),--青龙动画
}

BagPropConfig.HEAD_FRAM_ANI = {
    [150680] = {
        AniInfo = {
            File = "animation/Lobby/PropAni/HeadFrameAni/Ios_qinglong_txk/Ios_qinglong_txk.ExportJson",
            ArmatureName = "Ios_qinglong_txk",
            AniName = "txk"
        }
    },
    [150675] = {
        AniInfo = {
            File = "animation/Lobby/PropAni/HeadFrameAni/Ios_qinglong_txk/Ios_qinglong_txk.ExportJson",
            ArmatureName = "Ios_qinglong_txk",
            AniName = "txk"
        }
    },
    [150774] = {
        SpineInfo = {
            path = "animation/Lobby/PropAni/HeadFrameAni/baojiRank/",
            tex = "zzb_txk_bjwzi.json",
            ske = "zzb_txk_bjwzi.atlas",
            armatureName = "animation",
            scale = 1,
            size = cc.size(120, 120)
        }
    },
    [150775] = {
        SpineInfo = {
            path = "animation/Lobby/PropAni/HeadFrameAni/baojiRank/",
            tex = "zzb_txk_bjwjin.json",
            ske = "zzb_txk_bjwjin.atlas",
            armatureName = "animation",
            scale = 1,
            size = cc.size(120, 120)
        }
    },
    [150785] = {
        SpineInfo = {
            path = "animation/Common/xiaguangshengjing/",
            tex = "ImgIconXgsj3big.json",
            ske = "ImgIconXgsj3big.atlas",
            armatureName = "animation",
            scale = 1,
            size = cc.size(120, 120)
        }
    }
}

return BagPropConfig�
