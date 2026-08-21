package com.ymnsdk.replugin.event.base;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;
import com.ymnsdk.replugin.RePluginSdk;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class CustEvent {
    private String android_id;
    private String buyu_uid;
    private String buyu_version;
    private String cpsid;
    private String download_progress;
    private String download_size;
    private String framework_version;
    private String host_app_info;
    private String host_id;
    private int is_allow;
    private int is_new_user;
    private int ispatch;
    private String login_json_str;
    private String plugin_id;
    private int reason;
    private String request_code;
    private String request_duration;
    private String request_msg;
    private String request_server_type;
    private String restart_num;
    private int scene_id;
    private int source;
    private String trace;

    public CustEvent(Activity activity) {
        SharedPreferencesUtils.getInstance();
        this.trace = SharedPreferencesUtils.getRepluginTrace();
        this.android_id = getAndroid(activity);
        SharedPreferencesUtils.getInstance();
        this.host_app_info = SharedPreferencesUtils.getAppInfo();
        SharedPreferencesUtils.getInstance();
        this.host_id = SharedPreferencesUtils.getAppId();
        this.framework_version = RePluginSdk.getFrameworkVersion();
        SharedPreferencesUtils.getInstance();
        this.cpsid = SharedPreferencesUtils.getCpSid();
        SharedPreferencesUtils.getInstance();
        this.plugin_id = SharedPreferencesUtils.getPluginId();
    }

    public String getTrace() {
        return this.trace;
    }

    public void setTrace(String str) {
        this.trace = str;
    }

    public String getAndroid_id() {
        return this.android_id;
    }

    public void setAndroid_id(String str) {
        this.android_id = str;
    }

    public String getRequest_code() {
        return this.request_code;
    }

    public void setRequest_code(String str) {
        this.request_code = str;
    }

    public String getRequest_msg() {
        return this.request_msg;
    }

    public void setRequest_msg(String str) {
        this.request_msg = str;
    }

    public String getPlugin_id() {
        return this.plugin_id;
    }

    public void setPlugin_id(String str) {
        this.plugin_id = str;
    }

    public String getHost_app_info() {
        return this.host_app_info;
    }

    public void setHost_app_info(String str) {
        this.host_app_info = str;
    }

    public String getRestart_num() {
        return this.restart_num;
    }

    public void setRestart_num(String str) {
        this.restart_num = str;
    }

    public String getRequest_server_type() {
        return this.request_server_type;
    }

    public void setRequest_server_type(String str) {
        this.request_server_type = str;
    }

    public String getLogin_json_str() {
        return this.login_json_str;
    }

    public void setLogin_json_str(String str) {
        this.login_json_str = str;
    }

    public String getHost_id() {
        return this.host_id;
    }

    public void setHost_id(String str) {
        this.host_id = str;
    }

    public String getRequest_duration() {
        return this.request_duration;
    }

    public void setRequest_duration(String str) {
        this.request_duration = str;
    }

    private String getAndroid(Activity activity) {
        String androidId = DeviceInfo.getInstance().getAndroidId();
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setAndroidId(androidId);
        return androidId;
    }

    public String getDownload_size() {
        return this.download_size;
    }

    public void setDownload_size(String str) {
        this.download_size = str;
    }

    public String getDownload_progress() {
        return this.download_progress;
    }

    public void setDownload_progress(String str) {
        this.download_progress = str;
    }

    public String getCpsid() {
        return this.cpsid;
    }

    public void setCpsid(String str) {
        this.cpsid = str;
    }

    public String getBuyu_uid() {
        return this.buyu_uid;
    }

    public void setBuyu_uid(String str) {
        this.buyu_uid = str;
    }

    public int getSource() {
        return this.source;
    }

    public void setSource(int i) {
        this.source = i;
    }

    public int getIs_allow() {
        return this.is_allow;
    }

    public void setIs_allow(int i) {
        this.is_allow = i;
    }

    public int getIspatch() {
        return this.ispatch;
    }

    public void setIspatch(int i) {
        this.ispatch = i;
    }

    public int getReason() {
        return this.reason;
    }

    public void setReason(int i) {
        this.reason = i;
    }

    public int getIs_new_user() {
        return this.is_new_user;
    }

    public void setIs_new_user(int i) {
        this.is_new_user = i;
    }

    public int getScene_id() {
        return this.scene_id;
    }

    public void setScene_id(int i) {
        this.scene_id = i;
    }

    public String getBuyu_version() {
        return this.buyu_version;
    }

    public void setBuyu_version(String str) {
        this.buyu_version = str;
    }
}
