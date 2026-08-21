local AnimationManager = class("AnimationManager")

local KW_GAME_ANI_JSON_PATH = "res/animation/Landlords/"

--发送语音
local KW_PATH_JSON_SEND_VOICE = "res/animation/GameCommon/fsyy_ani/fsyy_ani.ExportJson"
local KW_JSON_NAME_SEND_VOICE = "fsyy_ani"

function AnimationManager.playSendVoiceArmature(armaturePanel, status)
    armaturePanel:removeAllChildren()
    local byName = {"yy_fasong", "yy_quxiao", "yy_shijianduan"}
    local armature = armaturePanel:getChildByName(byName[status])
    if armature then
        armature:getAnimation():play(byName[status], -1, -1)
    else
        CF.utils.playJsonAnimationByName(armaturePanel, KW_JSON_NAME_SEND_VOICE, KW_PATH_JSON_SEND_VOICE, -1, byName[status])
    end
end

--托管
local KW_PATH_JSON_ROBOT = "res/animation/GameCommon/tuoguan_ani/ios_tuoguan.ExportJson"
local KW_JSON_NAME_ROBOT = "ios_tuoguan"
function AnimationManager.playRobotJsonArmature(armaturePanel)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_ROBOT) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_ROBOT)
    local armature = ccs.Armature:create(KW_JSON_NAME_ROBOT)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():playWithIndex(0,-1,1)
        armaturePanel:addChild(armature)
    end
end

-- 连对
local KW_PATH_JSON_LIANDUI = KW_GAME_ANI_JSON_PATH.."DDZ_liandui/DDZ_liandui.ExportJson"
local KW_JSON_NAME_LIANDUI_LEFT = "DDT_liandui_zuo"
local KW_JSON_NAME_LIANDUI_RIGHT = "DDT_liandui_you"
function AnimationManager.playLianDuiArmature(armaturePanel, left)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_LIANDUI) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_LIANDUI)
    local name = KW_JSON_NAME_LIANDUI_LEFT
    if not left then
        name = KW_JSON_NAME_LIANDUI_RIGHT
    end
    local armature = ccs.Armature:create("DDZ_liandui")
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play(name)
        armaturePanel:addChild(armature)
    end
    return armature
end

-- 顺子
local KW_PATH_JSON_SHUNZI = KW_GAME_ANI_JSON_PATH.."DDZ_shunzi/DDZ_shunzi.ExportJson"
local KW_JSON_NAME_SHUNZI_LEFT = "DDZ_shunzi_zuo"
local KW_JSON_NAME_SHUNZI_RIGHT = "DDZ_shunzi_you"
function AnimationManager.playShunZiArmature(armaturePanel, left)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SHUNZI) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_SHUNZI)
    local name = KW_JSON_NAME_SHUNZI_LEFT
    if not left then
        name = KW_JSON_NAME_SHUNZI_RIGHT
    end
    local armature = ccs.Armature:create("DDZ_shunzi")
    if armature then
        armature:setAnchorPoint(cc.p(0, 0.5))
        armature:getAnimation():play(name)
        armaturePanel:addChild(armature)
    end
    return armature
end


-- 炸弹
local KW_PATH_JSON_BOMB = KW_GAME_ANI_JSON_PATH.."ios_ddz_zd/ios_ddz_zd.ExportJson"
local KW_JSON_NAME_BOMB = "ios_ddz_zd"
function AnimationManager.playBombArmature(armaturePanel)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_BOMB) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_BOMB)
    local armature = ccs.Armature:create(KW_JSON_NAME_BOMB)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():playWithIndex(0)
        armaturePanel:addChild(armature)
    end
    return armature
end

-- 飞机
local KW_PATH_JSON_FEIJI = KW_GAME_ANI_JSON_PATH.."ios_ddz_feiji/ios_ddz_feiji.ExportJson"
local KW_JSON_NAME_FEIJI_LEFT = "ddz_feiji_zuo"
local KW_JSON_NAME_FEIJI_RIGHT = "ddz_feiji_you"
function AnimationManager.playFeiJiArmature(armaturePanel, left)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_FEIJI) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_FEIJI)
    local name = KW_JSON_NAME_FEIJI_LEFT
    if not left then
        name = KW_JSON_NAME_FEIJI_RIGHT
    end
    local armature = ccs.Armature:create("ios_ddz_feiji")
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play(name)
        armaturePanel:addChild(armature)
    end
    return armature
end

-- 飞机文字
local KW_PATH_JSON_FEIJI_TEXT = KW_GAME_ANI_JSON_PATH.."ios_ddz_feiji_wz/ios_ddz_feiji_wz.ExportJson"
local KW_JSON_NAME_FEIJI_TEXT_LEFT = "ddz_feiji_wz_zuo"
local KW_JSON_NAME_FEIJI_TEXT_RIGHT = "ddz_feiji_wz_you"
function AnimationManager.playFeiJiTextArmature(armaturePanel, left)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_FEIJI_TEXT) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_FEIJI_TEXT)
    local name = KW_JSON_NAME_FEIJI_TEXT_LEFT
    if not left then
        name = KW_JSON_NAME_FEIJI_TEXT_RIGHT
    end
    local armature = ccs.Armature:create("ios_ddz_feiji_wz")
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play(name)
        armaturePanel:addChild(armature)
    end
    return armature
end

-- 王炸
local KW_PATH_JSON_WANGZHA = CF.GameDefine.KW_GAME_COMMON_ANI_JSON_PATH .."wangzha/DDZ_wangzha.ExportJson"
local KW_JSON_NAME_WANGZHA = "DDZ_wangzha"
function AnimationManager.playWangZhaArmature(armaturePanel)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_WANGZHA) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_WANGZHA)
    local armature = ccs.Armature:create(KW_JSON_NAME_WANGZHA)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():playWithIndex(0)
        armaturePanel:addChild(armature)
    end
    return armature
end

-- 春天与反春天
local KW_PATH_JSON_SPRING = CF.GameDefine.KW_GAME_COMMON_ANI_JSON_PATH.."DDZ_chuntian/DDZ_chuntian.ExportJson"
local KW_JSON_NAME_SPRING = "ddz_chuntian"
local KW_JSON_NAME_NOT_SPRING = "ddz_fanchuntian"
function AnimationManager.playSpringArmature(armaturePanel, spring)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SPRING) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_SPRING)
    local name = KW_JSON_NAME_SPRING
    if not spring then
        name = KW_JSON_NAME_NOT_SPRING
    end
    local armature = ccs.Armature:create("DDZ_chuntian")
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play(name)
        armaturePanel:addChild(armature)
    end
    return armature
end

--炸弹粒子特效
local KW_PATH_JSON_ZHADAN_LIZI = KW_GAME_ANI_JSON_PATH.."DDZ_zhadan_lizi/zhadan-lizi.ExportJson"
local KW_JSON_NAME_ZHADAN_LIZI = "zhadan-lizi"
function AnimationManager.playZhaDanLiZi(armaturePanel)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_ZHADAN_LIZI) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_ZHADAN_LIZI)

    local armature = ccs.Armature:create(KW_JSON_NAME_ZHADAN_LIZI)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():playWithIndex(0)
        armaturePanel:addChild(armature)
    end
    return armature
end

--抖动效果 freq-频率(s) time-持续时间(s) rangeMin-幅度最小值  rangeMax-幅度最大值 delayTime-延迟震动
function AnimationManager.playShakeArmature(shakeNode, freq, time, rangeMin, rangeMax, delayTime)
    local spx, spy = shakeNode:getPosition()
    local sTime = os.clock()
    delayTime = delayTime or 0
    if AnimationManager.shakeScheduleID then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(AnimationManager.shakeScheduleID)
        AnimationManager.shakeScheduleID = nil
    end
    AnimationManager.shakeScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if (os.clock() - sTime) < delayTime   then
            return
        end
        if (os.clock() - sTime) > (time + delayTime)  then
            if AnimationManager.shakeScheduleID then
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(AnimationManager.shakeScheduleID)
                AnimationManager.shakeScheduleID = nil
                if not tolua.isnull(shakeNode) then
                    shakeNode:setPosition(cc.p(spx, spy))
                end
            end
            return
        end

        local range = rangeMax - rangeMin
        range = range >= 0 and range or 0
        local randx = range
        local randy = range
        local basex = math.random(2) == 1 and -1 or 1
        local basey = math.random(2) == 1 and -1 or 1
        if range ~= 0 then
            randx = math.random(range)
            randy = math.random(range)
        end

        shakeNode:setPosition(cc.p(spx + randx * basex, spy + randy * basey))
    end, freq, false)
    print(1)
end

return AnimationManagerd$