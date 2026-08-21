package com.sigmob.windad;

public enum WindAdError extends java.lang.Enum<com.sigmob.windad.WindAdError> {
    public static final com.sigmob.windad.WindAdError ERROR_AD_ERROR = null;
    public static final com.sigmob.windad.WindAdError ERROR_AD_LOAD_FAIL_INTERVAL = null;
    public static final com.sigmob.windad.WindAdError ERROR_AD_LOAD_FAIL_LOADING = null;
    public static final com.sigmob.windad.WindAdError ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR = null;
    public static final com.sigmob.windad.WindAdError ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR = null;
    public static final com.sigmob.windad.WindAdError ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR = null;
    public static final com.sigmob.windad.WindAdError ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR = null;
    public static final com.sigmob.windad.WindAdError ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR = null;
    public static final com.sigmob.windad.WindAdError ERROR_OTHER = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_ADCONTAINER_IS_NULL = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_AD_DB_INSERT = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_AD_PLAY = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_AD_PLAY_CHECK_FAIL = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_AD_PLAY_HAS_PLAYING = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_AD_TIME_OUT = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_BID_TOKEN_IS_EMPTY = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_FILE_DOWNLOAD = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_FILE_MD5 = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_GDPR_DENIED = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_INFORMATION_LOSE = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_INIT_FAIL = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_INSTALL_FAIL = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_NETWORK = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_NOT_INIT = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_PLACEMENTID_EMPTY = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_PLAY_VIDEO = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_REQUEST = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_SPLASH_NOT_READY = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_SPLASH_TIMEOUT = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION = null;
    public static final com.sigmob.windad.WindAdError ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE = null;
    public static final com.sigmob.windad.WindAdError ERROR_SPLASH_ADBLOCK = null;
    public static final com.sigmob.windad.WindAdError MRAID_LOAD_ERROR = null;
    public static final com.sigmob.windad.WindAdError RENDER_PROCESS_GONE_UNSPECIFIED = null;
    public static final com.sigmob.windad.WindAdError RENDER_PROCESS_GONE_WITH_CRASH = null;
    public static final com.sigmob.windad.WindAdError VIDEO_CACHE_ERROR = null;
    private static final com.sigmob.windad.WindAdError[] b = null;
    private int a;
    private java.lang.String message;

    static {
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r1 = 0
            java.lang.String r2 = "ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR"
            r3 = 600201(0x92889, float:8.41061E-40)
            java.lang.String r4 = "Provider声明错误,请检查manifest文件"
            r0.<init>(r2, r1, r3, r4)
            com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r2 = 1
            java.lang.String r3 = "ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR"
            r4 = 600200(0x92888, float:8.4106E-40)
            java.lang.String r5 = "Provider的Xml配置错误,请检查Xml文件内容"
            r0.<init>(r3, r2, r4, r5)
            com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r3 = 2
            java.lang.String r4 = "ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR"
            r5 = 600202(0x9288a, float:8.41062E-40)
            java.lang.String r6 = "SDK混淆配置错误"
            r0.<init>(r4, r3, r5, r6)
            com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r4 = 3
            java.lang.String r5 = "ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR"
            r6 = 600203(0x9288b, float:8.41064E-40)
            java.lang.String r7 = "AdActivity未声明,请检查manifest文件"
            r0.<init>(r5, r4, r6, r7)
            com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r5 = 4
            java.lang.String r6 = "ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR"
            r7 = 600204(0x9288c, float:8.41065E-40)
            java.lang.String r8 = " 缺少REQUEST_INSTALL_PACKAGES,请检查manifest文件"
            r0.<init>(r6, r5, r7, r8)
            com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r6 = 5
            java.lang.String r7 = "ERROR_AD_LOAD_FAIL_LOADING"
            r8 = 610012(0x94edc, float:8.54809E-40)
            java.lang.String r9 = "广告正在加载中，请稍后再加载"
            r0.<init>(r7, r6, r8, r9)
            com.sigmob.windad.WindAdError.ERROR_AD_LOAD_FAIL_LOADING = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r7 = 6
            java.lang.String r8 = "ERROR_AD_LOAD_FAIL_INTERVAL"
            r9 = 610013(0x94edd, float:8.5481E-40)
            java.lang.String r10 = "广告加载频繁，请稍后在试"
            r0.<init>(r8, r7, r9, r10)
            com.sigmob.windad.WindAdError.ERROR_AD_LOAD_FAIL_INTERVAL = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r8 = 7
            java.lang.String r9 = "ERROR_SIGMOB_BID_TOKEN_IS_EMPTY"
            r10 = 600300(0x928ec, float:8.412E-40)
            java.lang.String r11 = "BidToken is empty"
            r0.<init>(r9, r8, r10, r11)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_BID_TOKEN_IS_EMPTY = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r9 = 8
            java.lang.String r10 = "ERROR_SIGMOB_NETWORK"
            r11 = 600100(0x92824, float:8.40919E-40)
            java.lang.String r12 = "网络错误"
            r0.<init>(r10, r9, r11, r12)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_NETWORK = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r10 = 9
            java.lang.String r11 = "ERROR_SIGMOB_REQUEST"
            r12 = 600101(0x92825, float:8.4092E-40)
            java.lang.String r13 = "广告请求出错"
            r0.<init>(r11, r10, r12, r13)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r11 = 10
            java.lang.String r12 = "ERROR_SIGMOB_FILE_DOWNLOAD"
            r13 = 600104(0x92828, float:8.40925E-40)
            java.lang.String r14 = "文件下载错误"
            r0.<init>(r12, r11, r13, r14)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r12 = 11
            java.lang.String r13 = "ERROR_SIGMOB_AD_TIME_OUT"
            r14 = 600105(0x92829, float:8.40926E-40)
            java.lang.String r15 = "下载广告超时"
            r0.<init>(r13, r12, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_TIME_OUT = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r13 = 12
            java.lang.String r14 = "ERROR_SIGMOB_PLAY_VIDEO"
            r15 = 600106(0x9282a, float:8.40928E-40)
            java.lang.String r12 = "视频播放失败"
            r0.<init>(r14, r13, r15, r12)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLAY_VIDEO = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r12 = 13
            java.lang.String r14 = "ERROR_SIGMOB_NOT_INIT"
            r15 = 600900(0x92b44, float:8.4204E-40)
            java.lang.String r13 = "SDK未初始化"
            r0.<init>(r14, r12, r15, r13)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_NOT_INIT = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r13 = 14
            java.lang.String r14 = "ERROR_SIGMOB_PLACEMENTID_EMPTY"
            r15 = 600901(0x92b45, float:8.42042E-40)
            java.lang.String r12 = "广告位为空"
            r0.<init>(r14, r13, r15, r12)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r12 = 15
            java.lang.String r14 = "ERROR_SIGMOB_INSTALL_FAIL"
            r15 = 600903(0x92b47, float:8.42044E-40)
            java.lang.String r13 = "安装失败"
            r0.<init>(r14, r12, r15, r13)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_INSTALL_FAIL = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r13 = 16
            java.lang.String r14 = "ERROR_SIGMOB_AD_DB_INSERT"
            r15 = 600904(0x92b48, float:8.42046E-40)
            java.lang.String r12 = "插入数据库失败"
            r0.<init>(r14, r13, r15, r12)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_DB_INSERT = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r12 = 17
            java.lang.String r14 = "ERROR_SIGMOB_GDPR_DENIED"
            r15 = 600905(0x92b49, float:8.42047E-40)
            java.lang.String r13 = "GDPR 未授权"
            r0.<init>(r14, r12, r15, r13)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_GDPR_DENIED = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r13 = 18
            java.lang.String r14 = "ERROR_SIGMOB_INIT_FAIL"
            r15 = 600906(0x92b4a, float:8.42049E-40)
            java.lang.String r12 = "SDK 初始化失败"
            r0.<init>(r14, r13, r15, r12)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_INIT_FAIL = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r12 = 19
            java.lang.String r14 = "ERROR_SIGMOB_ADCONTAINER_IS_NULL"
            r15 = 600907(0x92b4b, float:8.4205E-40)
            java.lang.String r13 = "广告容器不能为NULL"
            r0.<init>(r14, r12, r15, r13)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r13 = 20
            java.lang.String r14 = "ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP"
            r15 = 600908(0x92b4c, float:8.42051E-40)
            java.lang.String r12 = "广告容器只允许为ViewGroup类型"
            r0.<init>(r14, r13, r15, r12)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            r12 = 21
            java.lang.String r14 = "ERROR_OTHER"
            r15 = 600999(0x92ba7, float:8.42179E-40)
            java.lang.String r13 = ""
            r0.<init>(r14, r12, r15, r13)
            com.sigmob.windad.WindAdError.ERROR_OTHER = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r13 = "ERROR_SIGMOB_AD_PLAY"
            r14 = 22
            r15 = 610002(0x94ed2, float:8.54795E-40)
            java.lang.String r12 = "激励视频播放出错"
            r0.<init>(r13, r14, r15, r12)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SIGMOB_SPLASH_NOT_READY"
            r13 = 23
            r14 = 610003(0x94ed3, float:8.54796E-40)
            java.lang.String r15 = "开屏广告未准备好"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_NOT_READY = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SIGMOB_INFORMATION_LOSE"
            r13 = 24
            r14 = 610004(0x94ed4, float:8.54798E-40)
            java.lang.String r15 = "server下发的广告信息缺失关键信息"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SIGMOB_FILE_MD5"
            r13 = 25
            r14 = 610005(0x94ed5, float:8.54799E-40)
            java.lang.String r15 = "下载的文件校验md5出错"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_MD5 = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SIGMOB_AD_PLAY_CHECK_FAIL"
            r13 = 26
            r14 = 610006(0x94ed6, float:8.548E-40)
            java.lang.String r15 = "激励视频播接口检查出错（广告过期或者未ready)"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY_CHECK_FAIL = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SIGMOB_AD_PLAY_HAS_PLAYING"
            r13 = 27
            r14 = 610007(0x94ed7, float:8.54802E-40)
            java.lang.String r15 = "激励视频播接口检查出错（激励视频当前有广告正在播放中)"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY_HAS_PLAYING = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SIGMOB_SPLASH_TIMEOUT"
            r13 = 28
            r14 = 620001(0x975e1, float:8.68806E-40)
            java.lang.String r15 = "开屏广告加载超时"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_TIMEOUT = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION"
            r13 = 29
            r14 = 620002(0x975e2, float:8.68808E-40)
            java.lang.String r15 = "开屏广告不支持当前方向"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE"
            r13 = 30
            r14 = 620003(0x975e3, float:8.68809E-40)
            java.lang.String r15 = "开屏广告不支持的资源类型"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_SPLASH_ADBLOCK"
            r13 = 31
            r14 = 620900(0x97964, float:8.70066E-40)
            java.lang.String r15 = "AD BLOCK"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.ERROR_SPLASH_ADBLOCK = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "ERROR_AD_ERROR"
            r13 = 32
            java.lang.String r14 = "AD ERROR"
            r0.<init>(r12, r13, r1, r14)
            com.sigmob.windad.WindAdError.ERROR_AD_ERROR = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "RENDER_PROCESS_GONE_WITH_CRASH"
            r13 = 33
            r14 = 620901(0x97965, float:8.70068E-40)
            java.lang.String r15 = "RENDER PROCESS GONE WITH CRASH"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.RENDER_PROCESS_GONE_WITH_CRASH = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "RENDER_PROCESS_GONE_UNSPECIFIED"
            r13 = 34
            r14 = 620902(0x97966, float:8.70069E-40)
            java.lang.String r15 = "RENDER PROCESS GONE UNSPECIFIED"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.RENDER_PROCESS_GONE_UNSPECIFIED = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "MRAID_LOAD_ERROR"
            r13 = 35
            r14 = 620903(0x97967, float:8.7007E-40)
            java.lang.String r15 = "MRAID LOAD ERROR"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.MRAID_LOAD_ERROR = r0
            com.sigmob.windad.WindAdError r0 = new com.sigmob.windad.WindAdError
            java.lang.String r12 = "VIDEO_CACHE_ERROR"
            r13 = 36
            r14 = 620904(0x97968, float:8.70072E-40)
            java.lang.String r15 = "VIDEO CACHE ERROR"
            r0.<init>(r12, r13, r14, r15)
            com.sigmob.windad.WindAdError.VIDEO_CACHE_ERROR = r0
            r12 = 37
            com.sigmob.windad.WindAdError[] r12 = new com.sigmob.windad.WindAdError[r12]
            com.sigmob.windad.WindAdError r13 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR
            r12[r1] = r13
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR
            r12[r3] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR
            r12[r4] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR
            r12[r5] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_AD_LOAD_FAIL_LOADING
            r12[r6] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_AD_LOAD_FAIL_INTERVAL
            r12[r7] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_BID_TOKEN_IS_EMPTY
            r12[r8] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_NETWORK
            r12[r9] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            r12[r10] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD
            r12[r11] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_TIME_OUT
            r2 = 11
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLAY_VIDEO
            r2 = 12
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_NOT_INIT
            r2 = 13
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY
            r2 = 14
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INSTALL_FAIL
            r2 = 15
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_DB_INSERT
            r2 = 16
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_GDPR_DENIED
            r2 = 17
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INIT_FAIL
            r2 = 18
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL
            r2 = 19
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP
            r2 = 20
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_OTHER
            r2 = 21
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY
            r2 = 22
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_NOT_READY
            r2 = 23
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE
            r2 = 24
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_MD5
            r2 = 25
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY_CHECK_FAIL
            r2 = 26
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY_HAS_PLAYING
            r2 = 27
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_TIMEOUT
            r2 = 28
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION
            r2 = 29
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE
            r2 = 30
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SPLASH_ADBLOCK
            r2 = 31
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_AD_ERROR
            r2 = 32
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.RENDER_PROCESS_GONE_WITH_CRASH
            r2 = 33
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.RENDER_PROCESS_GONE_UNSPECIFIED
            r2 = 34
            r12[r2] = r1
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.MRAID_LOAD_ERROR
            r2 = 35
            r12[r2] = r1
            r1 = 36
            r12[r1] = r0
            com.sigmob.windad.WindAdError.b = r12
            return
    }

    WindAdError(java.lang.String r1, int r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            r0.message = r4
            return
    }

    public static com.sigmob.windad.WindAdError getWindAdError(int r5) {
            com.sigmob.windad.WindAdError[] r0 = values()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L14
            r3 = r0[r2]
            int r4 = r3.getErrorCode()
            if (r4 != r5) goto L11
            return r3
        L11:
            int r2 = r2 + 1
            goto L6
        L14:
            r5 = 0
            return r5
    }

    public static com.sigmob.windad.WindAdError valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.windad.WindAdError> r0 = com.sigmob.windad.WindAdError.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.windad.WindAdError r1 = (com.sigmob.windad.WindAdError) r1
            return r1
    }

    public static com.sigmob.windad.WindAdError[] values() {
            com.sigmob.windad.WindAdError[] r0 = com.sigmob.windad.WindAdError.b
            java.lang.Object r0 = r0.clone()
            com.sigmob.windad.WindAdError[] r0 = (com.sigmob.windad.WindAdError[]) r0
            return r0
    }

    public int getErrorCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }

    public void setErrorMessage(int r1, java.lang.String r2) {
            r0 = this;
            r0.a = r1
            r0.message = r2
            return
    }

    public void setMessage(java.lang.String r1) {
            r0 = this;
            r0.message = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.a
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r3.message
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "{ \"error_code\":%d, \"message\": %s }"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
