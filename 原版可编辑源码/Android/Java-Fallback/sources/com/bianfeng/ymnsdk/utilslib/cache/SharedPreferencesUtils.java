package com.bianfeng.ymnsdk.utilslib.cache;

public final class SharedPreferencesUtils {
    private static final java.lang.String BFDATA_NAME_PREFERENCES = "resource_cfg";
    private static final java.lang.String SP_NAME = "ymnsdk_sp";
    private static final java.lang.String YMNAGREEPRIVACY = "ymn_agree_privacy";
    private static android.content.Context mContext;
    public static java.lang.String pl_androidid;
    public static java.lang.String pl_imei;
    public static java.lang.String pl_imsi;
    public static java.lang.String pl_ip;
    public static java.lang.String pl_isp;
    public static java.lang.String pl_model;
    public static java.lang.String pl_network;
    public static java.lang.String pl_oaid;
    public static java.lang.String pl_os_version;
    public static java.lang.String pl_soft_list;
    private static android.content.SharedPreferences preferences;

    static {
            java.lang.String r0 = "imei"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei = r0
            java.lang.String r0 = "imsi"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imsi = r0
            java.lang.String r0 = "user_ip"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_ip = r0
            java.lang.String r0 = "android_id"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_androidid = r0
            java.lang.String r0 = "oaid"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_oaid = r0
            java.lang.String r0 = "network"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network = r0
            java.lang.String r0 = "model"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_model = r0
            java.lang.String r0 = "os_version"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_os_version = r0
            java.lang.String r0 = "soft_list"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_soft_list = r0
            java.lang.String r0 = "isp"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_isp = r0
            return
    }

    public SharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.LinkedHashMap getAllPLinfo(java.lang.String r3) {
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto L1c
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        L1c:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imsi     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto L33
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imsi     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imsi     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        L33:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_ip     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto L4a
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_ip     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_ip     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        L4a:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_androidid     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto L61
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_androidid     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_androidid     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        L61:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_oaid     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto L78
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_oaid     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_oaid     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        L78:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto L8f
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        L8f:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_model     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto La6
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_model     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_model     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        La6:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_os_version     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto Lbd
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_os_version     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_os_version     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        Lbd:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_soft_list     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto Ld4
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_soft_list     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_soft_list     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        Ld4:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_isp     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r1 = getPLStringFormSP(r3, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            boolean r1 = r1.isEmpty()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            if (r1 != 0) goto Leb
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_isp     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_isp     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            java.lang.String r2 = getPLStringFormSP(r3, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
            r0.put(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Lec
        Leb:
            goto Lf0
        Lec:
            r1 = move-exception
            r1.printStackTrace()
        Lf0:
            return r0
    }

    public static boolean getBoolean(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto La
            boolean r0 = r0.getBoolean(r2, r1)
            return r0
        La:
            return r1
    }

    public static int getInt(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto La
            int r0 = r0.getInt(r2, r1)
            return r0
        La:
            return r1
    }

    public static long getLong(java.lang.String r3) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto Lb
            long r0 = r0.getLong(r3, r1)
            return r0
        Lb:
            return r1
    }

    public static java.util.ArrayList getPLArrayFormSP(java.lang.String r5, java.lang.String r6) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.content.Context r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            if (r1 != 0) goto L11
            java.lang.String r1 = "Ymnsdk"
            java.lang.String r2 = "未初始化utils"
            android.util.Log.e(r1, r2)
            return r0
        L11:
            r2 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r5, r2)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r3 = ""
            java.lang.String r3 = r1.getString(r6, r3)
            java.lang.Class<java.util.ArrayList> r4 = java.util.ArrayList.class
            java.lang.Object r2 = r2.fromJson(r3, r4)
            r0 = r2
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            if (r0 != 0) goto L31
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r0 = r2
        L31:
            return r0
    }

    public static java.lang.String getPLReportStatus(java.lang.String r3) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            if (r0 != 0) goto Le
            java.lang.String r0 = "Ymnsdk"
            java.lang.String r1 = "未初始化utils"
            android.util.Log.e(r0, r1)
            java.lang.String r0 = ""
            return r0
        Le:
            r1 = 0
            java.lang.String r2 = "ymnsdk_pl_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            java.lang.String r1 = "0"
            java.lang.String r1 = r0.getString(r3, r1)
            return r1
    }

    public static java.lang.String getPLSPName() {
            java.lang.String r0 = getPLUid()
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Ld
            java.lang.String r0 = "ymnsdk_pl_info"
            return r0
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ymnsdk_pl_info_"
            r0.append(r1)
            java.lang.String r1 = getPLUid()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String getPLStringFormSP(java.lang.String r3, java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            java.lang.String r1 = ""
            if (r0 != 0) goto Le
            java.lang.String r0 = "Ymnsdk"
            java.lang.String r2 = "未初始化utils"
            android.util.Log.e(r0, r2)
            return r1
        Le:
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r3, r2)
            java.lang.String r1 = r0.getString(r4, r1)
            return r1
    }

    public static java.lang.String getPLUid() {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            java.lang.String r1 = ""
            if (r0 != 0) goto Le
            java.lang.String r0 = "Ymnsdk"
            java.lang.String r2 = "未初始化utils"
            android.util.Log.e(r0, r2)
            return r1
        Le:
            r2 = 0
            java.lang.String r3 = "ymnsdk_pl_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r3, r2)
            java.lang.String r2 = "pl_uid"
            java.lang.String r1 = r0.getString(r2, r1)
            return r1
    }

    private static java.lang.String getPlTypeID(java.lang.String r35) {
            java.util.ArrayList r0 = new java.util.ArrayList
            java.lang.String r1 = "base"
            java.lang.String r2 = "identity"
            java.lang.String r3 = "process"
            java.lang.String r4 = "device"
            java.lang.String r5 = "network"
            java.lang.String r6 = "use"
            java.lang.String r7 = "derivative"
            java.lang.String r8 = "child"
            java.lang.String r9 = "name"
            java.lang.String r10 = "moblie_num"
            java.lang.String r11 = "id_num"
            java.lang.String r12 = "gps"
            java.lang.String r13 = "pic_info"
            java.lang.String r14 = "imei"
            java.lang.String r15 = "imsi"
            java.lang.String r16 = "idfa"
            java.lang.String r17 = "user_ip"
            java.lang.String r18 = "android_id"
            java.lang.String r19 = "oaid"
            java.lang.String r20 = "network"
            java.lang.String r21 = "model"
            java.lang.String r22 = "os_version"
            java.lang.String r23 = "mac"
            java.lang.String r24 = "soft_list"
            java.lang.String r25 = "isp"
            java.lang.String r26 = "user_info"
            java.lang.String r27 = "third_account"
            java.lang.String r28 = "clipboard"
            java.lang.String r29 = "pay_info"
            java.lang.String r30 = "game_dur"
            java.lang.String r31 = "comm_info"
            java.lang.String r32 = "derivative_info"
            java.lang.String r33 = "child_name"
            java.lang.String r34 = "child_id_num"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34}
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.<init>(r1)
            r1 = r35
            int r2 = r0.indexOf(r1)
            int r2 = r2 + 1
            java.lang.String r2 = java.lang.String.valueOf(r2)
            return r2
    }

    public static java.lang.String getString(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            java.lang.String r1 = ""
            if (r0 == 0) goto L10
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r1)
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            java.lang.String r0 = r0.getString(r2, r1)
            return r0
        L10:
            return r1
    }

    public static java.lang.String getStringFromBfData(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "resource_cfg"
            r1 = 0
            android.content.SharedPreferences r0 = r2.getSharedPreferences(r0, r1)
            java.lang.String r1 = ""
            java.lang.String r1 = r0.getString(r3, r1)
            return r1
    }

    public static void init(android.content.Context r3) {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext = r3
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            if (r0 != 0) goto L1b
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils> r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.class
            monitor-enter(r0)
            android.content.SharedPreferences r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            java.lang.String r1 = "ymnsdk_sp"
            r2 = 0
            android.content.SharedPreferences r1 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L18
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r1
        L1b:
            return
    }

    public static boolean isAgreeprivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            boolean r0 = getBoolean(r0)
            return r0
    }

    public static void mergePlInfoToUser() {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            if (r0 != 0) goto Lc
            java.lang.String r0 = "Ymnsdk"
            java.lang.String r1 = "未初始化utils"
            android.util.Log.e(r0, r1)
            return
        Lc:
            java.lang.String r0 = "ymnsdk_pl_info"
            java.util.LinkedHashMap r0 = getAllPLinfo(r0)
            android.content.Context r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            java.lang.String r2 = getPLSPName()
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)
            android.content.SharedPreferences$Editor r2 = r1.edit()
            if (r0 == 0) goto L51
            java.util.Set r3 = r0.keySet()
            int r3 = r3.size()
            if (r3 == 0) goto L51
            java.util.Set r3 = r0.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L35:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L51
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r5 = r4.getKey()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.Object r6 = r4.getValue()
            java.lang.String r6 = (java.lang.String) r6
            r2.putString(r5, r6)
            goto L35
        L51:
            r2.apply()
            removeAllBeforePlInfo()
            return
    }

    public static void put(java.lang.String r2, int r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Le
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Le
            r0.putInt(r2, r3)     // Catch: java.lang.Exception -> Le
            r0.apply()     // Catch: java.lang.Exception -> Le
            return
        Le:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public static void put(java.lang.String r2, long r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Le
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Le
            r0.putLong(r2, r3)     // Catch: java.lang.Exception -> Le
            r0.apply()     // Catch: java.lang.Exception -> Le
            return
        Le:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public static void put(java.lang.String r2, java.lang.String r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Le
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Le
            r0.putString(r2, r3)     // Catch: java.lang.Exception -> Le
            r0.apply()     // Catch: java.lang.Exception -> Le
            return
        Le:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public static void put(java.lang.String r2, boolean r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Le
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Le
            r0.putBoolean(r2, r3)     // Catch: java.lang.Exception -> Le
            r0.apply()     // Catch: java.lang.Exception -> Le
            return
        Le:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public static void remove(java.lang.String r1) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            if (r0 == 0) goto Lb
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.remove(r1)
        Lb:
            return
    }

    public static void removeAllBeforePlInfo() {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            if (r0 != 0) goto Lc
            java.lang.String r0 = "Ymnsdk"
            java.lang.String r1 = "未初始化utils"
            android.util.Log.e(r0, r1)
            return
        Lc:
            r1 = 0
            java.lang.String r2 = "ymnsdk_pl_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r1 = r0.edit()
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imsi
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_ip
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_androidid
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_model
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_os_version
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_soft_list
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_isp
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei
            r1.remove(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_imei
            r1.remove(r2)
            r1.apply()
            return
    }

    public static void setPLReportStatus(java.lang.String r3) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            if (r0 == 0) goto L1b
            if (r3 != 0) goto L7
            goto L1b
        L7:
            r1 = 0
            java.lang.String r2 = "ymnsdk_pl_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r1 = r0.edit()
            java.lang.String r2 = "1"
            r1.putString(r3, r2)
            r1.apply()
            return
        L1b:
            java.lang.String r0 = "Ymnsdk"
            java.lang.String r1 = "未初始化utils"
            android.util.Log.e(r0, r1)
            return
    }

    public static void setPLStringToSP(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            if (r0 == 0) goto L43
            if (r7 == 0) goto L43
            boolean r0 = r7.isEmpty()
            if (r0 == 0) goto Ld
            goto L43
        Ld:
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            r1 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r5, r1)
            android.content.SharedPreferences$Editor r1 = r0.edit()
            java.lang.String r2 = getPlTypeID(r6)
            java.util.ArrayList r3 = getPLArrayFormSP(r5, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L3c
            boolean r4 = r3.contains(r7)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L3c
            if (r4 != 0) goto L34
            r3.add(r7)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L3c
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L3c
            java.lang.String r4 = r4.toJson(r3)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L3c
            r1.putString(r2, r4)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L3c
        L34:
            r1.putString(r6, r7)
            r1.apply()
            return
        L3c:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
        L43:
            java.lang.String r0 = "Ymnsdk"
            java.lang.String r1 = "未初始化utils"
            android.util.Log.e(r0, r1)
            return
    }

    public static void setPLUid(java.lang.String r3) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.mContext
            if (r0 == 0) goto L1e
            if (r3 != 0) goto L7
            goto L1e
        L7:
            r1 = 0
            java.lang.String r2 = "ymnsdk_pl_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r1 = r0.edit()
            java.lang.String r2 = "pl_uid"
            r1.putString(r2, r3)
            r1.apply()
            mergePlInfoToUser()
            return
        L1e:
            java.lang.String r0 = "Ymnsdk"
            java.lang.String r1 = "未初始化utils"
            android.util.Log.e(r0, r1)
            return
    }

    public static void setStringFromBfData(java.lang.String r0, java.lang.String r1) {
            return
    }

    public static void setYmnagreeprivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            boolean r1 = getBoolean(r0)     // Catch: java.lang.Exception -> L23
            if (r1 != 0) goto L22
            java.lang.String r2 = "ymnsdk"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L23
            r3.<init>()     // Catch: java.lang.Exception -> L23
            java.lang.String r4 = "setYmnagreeprivacy: "
            r3.append(r4)     // Catch: java.lang.Exception -> L23
            r3.append(r1)     // Catch: java.lang.Exception -> L23
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L23
            android.util.Log.i(r2, r3)     // Catch: java.lang.Exception -> L23
            r2 = 1
            put(r0, r2)     // Catch: java.lang.Exception -> L23
        L22:
            goto L27
        L23:
            r0 = move-exception
            r0.printStackTrace()
        L27:
            return
    }
}
