local RemodelConfig = class("RemodelConfig")

--比赛场转型后的等级
RemodelConfig.TEAHOUSELEVEL = {
    JUNIOR   = 1,
    INTERMEDIATE = 2,
    SENIOR = 3,
}

--比赛场不显示活动按钮的区,areaID
RemodelConfig.NOT_SHOW_ACTIVE_AREA = {
	7136,
}

function RemodelConfig:ctor(config)
    self._config = {}
    if config == nil then
        return
    end
    self._creatCondition = config.CREATECONDITION
    self._tipTextConfig = config.TIP_TEXT_CONFIG
    self._createSetupConfig = config.CREATESETUPCONFIG
end

return RemodelConfig