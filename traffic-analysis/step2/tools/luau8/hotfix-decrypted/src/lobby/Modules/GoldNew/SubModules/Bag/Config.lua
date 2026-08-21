--[[
无hide
牌背mahback
头像框head_frame
压牌器card_holder
记牌器prop_jpq
桌布table_bg
洗牌券prop_xpq
礼包gift
入场动画prop_rqdh
互动表情prop_emoji
转运表情zy_zq
装扮道具zb_zq
指牌器prop_zpq
步时器prop_bsq
功能道具gn_prop
巅峰赛prop_dfs
特效prop_rqdh
]] local BagConfig = {
    PROPS_STATE = {
        PS_IN_BACKPACK = 0, -- 在背包中(未装备)
        PS_IN_BODY = 1 -- 在身上（装备上了）
    },
    OPERATE_PROPS = {
        OP_EQUIP = 0, -- 装备
        OP_UNEQUIP = 1 -- 不装备
    }
}
BagConfig.SubType = {
    allProp = {name = "", tags = {"all_prop"}},
    shuffleCard = {name = "洗牌券", tags = {"prop_xpq"}},
    cardRecorder = {name = "记牌器", tags = {"prop_jpq"}},
    funcProp = {name = "功能道具", tags = {"gn_prop"}},
    zhuanYun = {name = "转运道具", tags = {"zy_zq"}},
    table = {name = "牌桌", tags = {"table_bg"}},
    cardBack = {name = "牌背", tags = {"mahback"}},
    headFrame = {name = "头像框", tags = {"head_frame"}},
    effect = {name = "专属座驾", tags = {"prop_rqdh", "zb_zq"}},
    title = {name = "称号", tags = {"prop_title"}},
    cardHolder = {name = "压牌器", tags = {"card_holder", "prop_zpq", "prop_bsq"}},
    chatVioce = {name = "聊天语音", tags = {}},
    awardDouble = {name = "加倍卡", tags = {"double_card"}},
    peakRace = {name = "门票", tags = {"peak_race_tickets"}},
    emoticon = {name = "表情包", tags = {"prop_emoji"}}
}
BagConfig.Tab = {
    {name = "全部", tags = {}, subType = {BagConfig.SubType.allProp}},
    {name = "巅峰赛", tags = {}, subType = {BagConfig.SubType.peakRace}},
    {
        name = "道具",
        tags = {},
        subType = {BagConfig.SubType.shuffleCard, BagConfig.SubType.cardRecorder, BagConfig.SubType.funcProp, BagConfig.SubType.zhuanYun}
    }, {name = "互动", tags = {}, subType = {BagConfig.SubType.emoticon, BagConfig.SubType.chatVioce}}, {
        name = "装扮",
        tags = {},
        subType = {
            BagConfig.SubType.table, BagConfig.SubType.cardBack, BagConfig.SubType.headFrame, BagConfig.SubType.effect, BagConfig.SubType.cardHolder
        }
    }, {name = "角色", tags = {}, subType = {}}
}

-- print(json.encode(BagConfig.Tab))

BagConfig.showPropIDs = {
    150774, 150775, 150776, 150777, 150778, 150188, 150248, 150131, 150130, 150726, 150727, 101575, 101576, 101577, 150741, 150700, 101787, 150739,
    150738, 150749, 150748, 150296, 150297, 150298, 150299, 150677, 150682, 150689, 150237, 150155, 150238, 150236, 150153, 150154, 150728, 150235,
    150325, 150326, 150327, 150328, 150329, 150141, 150143, 150216, 150234, 150145, 150217, 150144, 150142, 150215, 150330, 150352, 150353, 150668,
    150669, 150673, 150674, 150675, 150679, 150680, 150678, 150690, 101775, 150300, 150301, 150302, 150303, 150355, 150671, 150691, 150152, 150273,
    150274, 150354, 150151, 150670, 150676, 150681, 101187, 150278, 150284, 150279, 150281, 150287, 150283, 150285, 150282, 150288, 150286, 150291,
    150280, 101186, 150707, 150709, 150708, 60, 150711, 150705, 150706, 101689, 101690, 101687, 101688, 150293, 150710, 150289, 150290, 150292,
    150294, 150692, 150693, 150702, 150697, 150698, 101481, 101482, 101483, 101484, 101485, 101486, 101487, 101488, 101489, 101490, 101519, 101520,
    101622, 150758, 150759, 150760, 150755, 150756, 150757, 150785, 150733, 101859, 150790, 150791, 150792, 150793, 150786, 150801, 150802, 150803,
    150804, 150805, 150806, 150807, 150808, 150809, 150810, 150811, 150812, 150813, 150814, 150815, 150816, 150817, 150818, 150819, 150820, 150821,
    150822, 150823, 150824, 150825, 150826, 150827, 150828, 150829, 150858, 150854, 150855, 150859
}
BagConfig.ShowPropIDs = {}
for _, v in ipairs(BagConfig.showPropIDs) do
    BagConfig.ShowPropIDs[v] = true
end

function BagConfig:isShow(propid)
    -- return true
    return BagConfig.ShowPropIDs[propid]
end

function BagConfig:getTagCfgByName(name)
    local tabs = self.Tab
    for i = 1, #tabs do
        if tabs[i].name == name then
            return tabs[i]
        end
    end
    for _, v in pairs(BagConfig.SubType) do
        if v.name == name then
            return v
        end
    end
end

function BagConfig:getTagPath(tag)
    if not tag or tag == "" then
        return {}
    end
    local paths = {}

    local traverse = nil
    traverse = function(node, currentPath)
        for _, subTag in ipairs(node.tags) do
            if subTag == tag then
                table.insert(paths, currentPath)
            end
        end

        if node.subType and #node.subType > 0 then
            for _, subType in ipairs(node.subType) do
                traverse(subType, currentPath .. "/" .. subType.name)
            end
        end
    end

    for _, tagItem in ipairs(self.Tab) do
        traverse(tagItem, tagItem.name)
    end

    return paths
end

return BagConfig
�