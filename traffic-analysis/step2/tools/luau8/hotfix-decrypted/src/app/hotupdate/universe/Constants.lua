local const = {}

-- 平台
const.platform = {
    UNKNOWN = 0,
    IOS = 1,
    ANDROID = 2,
    WIN32 = 3,
    MAC = 4
}

-- 热更根目录
const.HotFixPath = "hotfix/"

-- 模块目录
const.ModulePath = "module/"

-- 热更子目录
const.HotfixSubPath = "harbor/"

-- 模块写目录
const.ModuleWritePath = "__MODULE_DOC__/"

-- 系统模块目录
const.SysModulePath = "src/universe/sysmodules/"

-- 内部模块目录
const.InnerModulePath = "src/modules/"

-- 热更类型
const.HotFixType = {
    NOUPDATE    = 0,
    FORCE       = 1,
    NORMAL      = 2,
    SILENT      = 3
}

-- 热更变更类型
const.FileDiffType = {
    ADD     = 0,
    MODIFY  = 1,
    DELETE  = 2
}

-- 热更阶段
const.HotFixStage = {
    DOWNLOAD    = 1,
    DECOMPRESS  = 2,
}

-- 热更错误
const.HotFixError = {
    SUCCESS                             = { code = 0,   msg = "success"},
    CREATE_HOTFIX_DIRECTORY_FAILED      = { code = 1,   msg = "CREATE_HOTFIX_DIRECTORY_FAILED" },
    COPY_ZIP_FAILED                     = { code = 2,   msg = "COPY_ZIP_FAILED" },
    UNZIP_FAILED                        = { code = 3,   msg = "UNZIP_FAILED" },
    LOAD_LOCAL_MANIFEST_ERROR           = { code = 4,   msg = "LOAD_LOCAL_MANIFEST_ERROR" },
    NEED_RESTART                        = { code = 5,   msg = "NEED_RESTART"},
    NOT_FIND_VERSION_URL                = { code = 6,   msg = "NOT_FIND_VERSION_URL" },
    DOWNLOAD_VERSION_FILE_FAILED        = { code = 7,   msg = "DOWNLOAD_VERSION_FILE_FAILED" },
    CREATE_PROCESS_DIRECTORY_FAILED     = { code = 8,   msg = "CREATE_PROCESS_DIRECTORY_FAILED" },
    LOAD_VERSION_FILE_FAILED            = { code = 9,   msg = "LOAD_VERSION_FILE_FAILED" },
    NOT_FIND_PROJECT_MANIFEST_URL       = { code = 10,  msg = "NOT_FIND_PROJECT_MANIFEST_URL" },
    DOWNLOAD_PROJJECT_MANIFEST_FAILED   = { code = 11,  msg = "DOWNLOAD_PROJJECT_MANIFEST_FAILED" },
    LOAD_PROJECT_MANIFEST_FAILED        = { code = 12,  msg = "LOAD_PROJECT_MANIFEST_FAILED" },
    DOWNLOAD_FAILED                     = { code = 13,  msg = "DOWNLOAD_FAILED" },
    DECOMPRESS_ERROR                    = { code = 14,  msg = "DECOMPRESS_ERROR" },
    MOVE_FILE_ERROR                     = { code = 15,  msg = "MOVE_FILE_ERROR"},
    MERGE_ZIP_FILE_FAILED               = { code = 16,  msg = "MERGE_ZIP_FILE_FAILED"},
}

-- 模块类型
const.ModuleType = {
    SYSTEM = 1,
    INNER = 2,
    EXTERNAL = 3
}

-- Stream Seek 类型
const.StreamSeekDir = {
    Beg = 0,
	Cur = 1,
	End = 2
}

un.const = const

'
