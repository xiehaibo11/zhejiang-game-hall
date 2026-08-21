local ConfigurationDefine = {}

ConfigurationDefine.Config = {
    LOBBY = "zhejiang-normal-%s", -- 大厅文件请求
    GOLD = "zhejiang-all-LeisureEntrance",
    ALL = "zhejiang-all-total", -- 大厅所有配置请求
    NOCACHE = "zhejiang-nocache-total", -- 巅峰赛游戏
    LOGIN = "zhejiang-login-total", -- 登陆前请求
    NICHE = "zhejiang-all-niche",   -- 资源位管理(大厅和活动)
}

ConfigurationDefine.ENV = {
    TEST = "test", -- 开发环境(灰度)
    PROD = "prod", -- 线上环境(正式)
    STAGE = "stage" -- 预发布环境
};

-- localstorage默认key值
ConfigurationDefine.Key = 'Configuration_';
ConfigurationDefine.Data = 'ConfigurationData_';

return ConfigurationDefine
�