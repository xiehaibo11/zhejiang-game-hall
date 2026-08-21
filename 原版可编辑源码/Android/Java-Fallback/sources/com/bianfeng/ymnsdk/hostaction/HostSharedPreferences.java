package com.bianfeng.ymnsdk.hostaction;

public class HostSharedPreferences {
    public static final java.lang.String formal_login = "formal_login";
    public static final java.lang.String formal_login_type = "formal_login_type";
    public static final java.lang.String formal_sdk_config = "formal_sdk_config";
    public static final java.lang.String formal_sdk_config_type = "formal_sdk_config_type";
    public static final java.lang.String formal_trade = "formal_trade";
    public static final java.lang.String formal_trade_type = "formal_trade_type";
    public static final java.lang.String formal_ymn = "formal_ymn";
    public static final java.lang.String formal_ymn_type = "formal_ymn_type";
    public static final java.lang.String get_url_times = "get_url_times";
    public static final java.lang.String isFirst = "isFirst";
    public static final java.lang.String isGain = "isGain";
    public static final java.lang.String login_requested_times = "login_requested_times";
    public static final java.lang.String now_type = "now_type";
    private static volatile com.bianfeng.ymnsdk.hostaction.HostSharedPreferences preferencesUtils = null;
    public static final java.lang.String request_time = "request_time";
    public static final java.lang.String sdk_config_requested_times = "sdk_config_requested_times";
    private static final java.lang.String sp_name = "hostSharePerference";
    public static final java.lang.String spare_login = "spare_login";
    public static final java.lang.String spare_login_type = "spare_login_type";
    public static final java.lang.String spare_sdk_config = "spare_sdk_config";
    public static final java.lang.String spare_sdk_config_type = "spare_sdk_config_type";
    public static final java.lang.String spare_trade = "spare_trade";
    public static final java.lang.String spare_trade_type = "spare_trade_type";
    public static final java.lang.String spare_ymn = "spare_ymn";
    public static final java.lang.String spare_ymn_type = "spare_ymn_type";
    public static final java.lang.String trade_requested_times = "trade_requested_times";
    public static final java.lang.String ymn_requested_times = "ymn_requested_times";
    private android.content.SharedPreferences sp;

    private HostSharedPreferences(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "hostSharePerference"
            r1 = 0
            android.content.SharedPreferences r0 = r3.getSharedPreferences(r0, r1)
            r2.sp = r0
            return
    }

    public static com.bianfeng.ymnsdk.hostaction.HostSharedPreferences getInstance(android.content.Context r2) {
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.preferencesUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.hostaction.HostSharedPreferences> r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r1 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.preferencesUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r1 = new com.bianfeng.ymnsdk.hostaction.HostSharedPreferences     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.preferencesUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.preferencesUtils
            return r0
    }

    public void putData(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putString(r2, r3)
            r0.commit()
            return
    }

    public void putHostEntity(com.bianfeng.ymnsdk.hostaction.HostEntity r4, java.lang.String r5) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.sp
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "_server_a"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = r4.getServer_a()
            r0.putString(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "_server_b"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = r4.getServer_b()
            r0.putString(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "_server_a_weight"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            int r2 = r4.getServer_a_weight()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.putString(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "_server_b_weight"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            int r2 = r4.getServer_b_weight()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.putString(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "_is_mandatory"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            int r2 = r4.getIs_mandatory()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.putString(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "_request_times"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            int r2 = r4.getRequest_times()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.putString(r1, r2)
            r0.commit()
            return
    }

    public java.lang.String readData(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.sp
            java.lang.String r1 = ""
            java.lang.String r0 = r0.getString(r3, r1)
            return r0
    }

    public com.bianfeng.ymnsdk.hostaction.HostEntity readHost(java.lang.String r6) {
            r5 = this;
            com.bianfeng.ymnsdk.hostaction.HostEntity r0 = new com.bianfeng.ymnsdk.hostaction.HostEntity
            r0.<init>()
            android.content.SharedPreferences r1 = r5.sp
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r3 = "_server_a"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = ""
            java.lang.String r1 = r1.getString(r2, r3)
            r0.setServer_a(r1)
            android.content.SharedPreferences r1 = r5.sp
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r4 = "_server_b"
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r1 = r1.getString(r2, r3)
            r0.setServer_b(r1)
            android.content.SharedPreferences r1 = r5.sp
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r3 = "_server_a_weight"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "1"
            java.lang.String r1 = r1.getString(r2, r3)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            int r1 = r1.intValue()
            r0.setServer_a_weight(r1)
            android.content.SharedPreferences r1 = r5.sp
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r4 = "_server_b_weight"
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r1 = r1.getString(r2, r3)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            int r1 = r1.intValue()
            r0.setServer_b_weight(r1)
            android.content.SharedPreferences r1 = r5.sp
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r3 = "_is_mandatory"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "0"
            java.lang.String r1 = r1.getString(r2, r3)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            int r1 = r1.intValue()
            r0.setIs_mandatory(r1)
            android.content.SharedPreferences r1 = r5.sp
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r4 = "_request_times"
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r1 = r1.getString(r2, r3)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            int r1 = r1.intValue()
            r0.setRequest_times(r1)
            return r0
    }
}
