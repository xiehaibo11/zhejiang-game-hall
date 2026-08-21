local ShowPropFunction = {}

local KW_HEAD_FRAM_ANI = {
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
        }
    },
    [150775] = {
        SpineInfo = {
            path = "animation/Lobby/PropAni/HeadFrameAni/baojiRank/",
            tex = "zzb_txk_bjwjin.json",
            ske = "zzb_txk_bjwjin.atlas",
            armatureName = "animation",
        }
    },
    [150785] = {
        SpineInfo = {
            path = "animation/Common/xiaguangshengjing/",
            tex = "ImgIconXgsj3big.json",
            ske = "ImgIconXgsj3big.atlas",
            armatureName = "animation",
        }
    }
}

function ShowPropFunction.createHeadFrameAni(node, propid, scale, name)
    scale = scale or 0.6
    name = name or "KW_HEAD_FRAME_ANI"
    if propid and node and KW_HEAD_FRAM_ANI[propid] then
        node:removeAllChildren()
        if KW_HEAD_FRAM_ANI[propid].AniInfo then
            local aniInfo = KW_HEAD_FRAM_ANI[propid].AniInfo
            if not cc.FileUtils:getInstance():isFileExist(aniInfo.File) then
                return false
            end
            ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniInfo.File)
            local showArmature = ccs.Armature:create(aniInfo.ArmatureName)
            if showArmature then
                showArmature:setName(name)
                node:addChild(showArmature)
                showArmature:setAnchorPoint(cc.p(0.5, 0.5))
                showArmature:getAnimation():play(aniInfo.AniName, -1, 1)
                showArmature:setScale(scale)
                showArmature:setPosition(node:getContentSize().width/2,node:getContentSize().height/2)
            end
            return true
        elseif KW_HEAD_FRAM_ANI[propid].SpineInfo then
            local cfg = clone(KW_HEAD_FRAM_ANI[propid].SpineInfo)
            cfg.scale = (scale or 1) * 1.5
            local child = node:getChildByName(name)
            if child then
                child:removeFromParent()
            end
            local showArmature = display.playDargonBonesSpine(cfg)
            if showArmature and node then
                showArmature:setName(name)
                node:addChild(showArmature)
                showArmature:setAnchorPoint(cc.p(0.5, 0.5))
                showArmature:setPosition(node:getContentSize().width/2,node:getContentSize().height/2)
            end
            return true
        elseif KW_HEAD_FRAM_ANI[propid].DargonBonesInfo then
            return false
        end
    end
    return false
end

return ShowPropFunction�