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

    private HostSharedPreferences(Context context) {
        this.sp = context.getSharedPreferences(sp_name, 0);
    }

    public static HostSharedPreferences getInstance(Context context) {
        if (preferencesUtils == null) {
            synchronized (HostSharedPreferences.class) {
                if (preferencesUtils == null) {
                    preferencesUtils = new HostSharedPreferences(context);
                }
            }
        }
        return preferencesUtils;
    }

    public void putHostEntity(HostEntity entity, String type) {
        SharedPreferences.Editor editor = this.sp.edit();
        editor.putString(type + "_server_a", entity.getServer_a());
        editor.putString(type + "_server_b", entity.getServer_b());
        editor.putString(type + "_server_a_weight", String.valueOf(entity.getServer_a_weight()));
        editor.putString(type + "_server_b_weight", String.valueOf(entity.getServer_b_weight()));
        editor.putString(type + "_is_mandatory", String.valueOf(entity.getIs_mandatory()));
        editor.putString(type + "_request_times", String.valueOf(entity.getRequest_times()));
        editor.commit();
    }

    public HostEntity readHost(String type) {
        HostEntity hostEntity = new HostEntity();
        hostEntity.setServer_a(this.sp.getString(type + "_server_a", ""));
        hostEntity.setServer_b(this.sp.getString(type + "_server_b", ""));
        hostEntity.setServer_a_weight(Integer.valueOf(this.sp.getString(type + "_server_a_weight", "1")).intValue());
        hostEntity.setServer_b_weight(Integer.valueOf(this.sp.getString(type + "_server_b_weight", "1")).intValue());
        hostEntity.setIs_mandatory(Integer.valueOf(this.sp.getString(type + "_is_mandatory", "0")).intValue());
        hostEntity.setRequest_times(Integer.valueOf(this.sp.getString(type + "_request_times", "0")).intValue());
        return hostEntity;
    }

    public void putData(String key, String value) {
        SharedPreferences.Editor editor = this.sp.edit();
        editor.putString(key, value);
        editor.commit();
    }

    public String readData(String key) {
        return this.sp.getString(key, "");
    }
}
