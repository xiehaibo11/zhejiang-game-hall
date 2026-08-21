package com.bianfeng.ymnsdk.hostaction;

import android.content.Context;
import android.content.SharedPreferences;

public class HostSharedPreferences {
    public static final String formal_login = "formal_login";
    public static final String formal_login_type = "formal_login_type";
    public static final String formal_sdk_config = "formal_sdk_config";
    public static final String formal_sdk_config_type = "formal_sdk_config_type";
    public static final String formal_trade = "formal_trade";
    public static final String formal_trade_type = "formal_trade_type";
    public static final String formal_ymn = "formal_ymn";
    public static final String formal_ymn_type = "formal_ymn_type";
    public static final String get_url_times = "get_url_times";
    public static final String isFirst = "isFirst";
    public static final String isGain = "isGain";
    public static final String login_requested_times = "login_requested_times";
    public static final String now_type = "now_type";
    private static volatile HostSharedPreferences preferencesUtils = null;
    public static final String request_time = "request_time";
    public static final String sdk_config_requested_times = "sdk_config_requested_times";
    private static final String sp_name = "hostSharePerference";
    public static final String spare_login = "spare_login";
    public static final String spare_login_type = "spare_login_type";
    public static final String spare_sdk_config = "spare_sdk_config";
    public static final String spare_sdk_config_type = "spare_sdk_config_type";
    public static final String spare_trade = "spare_trade";
    public static final String spare_trade_type = "spare_trade_type";
    public static final String spare_ymn = "spare_ymn";
    public static final String spare_ymn_type = "spare_ymn_type";
    public static final String trade_requested_times = "trade_requested_times";
    public static final String ymn_requested_times = "ymn_requested_times";
    private SharedPreferences sp;

    private HostSharedPreferences(Context r3) {
        this.sp = r3.getSharedPreferences(sp_name, 0);
    }

    public static HostSharedPreferences getInstance(Context r2) {
        if (preferencesUtils != null) goto L15;
        monitor-enter(HostSharedPreferences.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (preferencesUtils != null) goto L9;
        preferencesUtils = new HostSharedPreferences(r2);     // Catch: Throwable -> L11
    L9:
        monitor-exit(HostSharedPreferences.class);     // Catch: Throwable -> L11
    L15:
        return preferencesUtils;
    }

    public void putData(String r2, String r3) {
        SharedPreferences.Editor r0 = this.sp.edit();
        r0.putString(r2, r3);
        r0.commit();
    }

    public void putHostEntity(HostEntity r4, String r5) {
        SharedPreferences.Editor r0 = this.sp.edit();
        r0.putString(r5 + "_server_a", r4.getServer_a());
        r0.putString(r5 + "_server_b", r4.getServer_b());
        r0.putString(r5 + "_server_a_weight", String.valueOf(r4.getServer_a_weight()));
        r0.putString(r5 + "_server_b_weight", String.valueOf(r4.getServer_b_weight()));
        r0.putString(r5 + "_is_mandatory", String.valueOf(r4.getIs_mandatory()));
        r0.putString(r5 + "_request_times", String.valueOf(r4.getRequest_times()));
        r0.commit();
    }

    public String readData(String r3) {
        return this.sp.getString(r3, "");
    }

    public HostEntity readHost(String r6) {
        HostEntity r0 = new HostEntity();
        r0.setServer_a(this.sp.getString(r6 + "_server_a", ""));
        r0.setServer_b(this.sp.getString(r6 + "_server_b", ""));
        r0.setServer_a_weight(Integer.valueOf(this.sp.getString(r6 + "_server_a_weight", "1")).intValue());
        r0.setServer_b_weight(Integer.valueOf(this.sp.getString(r6 + "_server_b_weight", "1")).intValue());
        r0.setIs_mandatory(Integer.valueOf(this.sp.getString(r6 + "_is_mandatory", "0")).intValue());
        r0.setRequest_times(Integer.valueOf(this.sp.getString(r6 + "_request_times", "0")).intValue());
        return r0;
    }
}
