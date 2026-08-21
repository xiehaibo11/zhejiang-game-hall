package com.ymnsdk.replugin.event.base;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class CustEvent {
    private java.lang.String android_id;
    private java.lang.String buyu_uid;
    private java.lang.String buyu_version;
    private java.lang.String cpsid;
    private java.lang.String download_progress;
    private java.lang.String download_size;
    private java.lang.String framework_version;
    private java.lang.String host_app_info;
    private java.lang.String host_id;
    private int is_allow;
    private int is_new_user;
    private int ispatch;
    private java.lang.String login_json_str;
    private java.lang.String plugin_id;
    private int reason;
    private java.lang.String request_code;
    private java.lang.String request_duration;
    private java.lang.String request_msg;
    private java.lang.String request_server_type;
    private java.lang.String restart_num;
    private int scene_id;
    private int source;
    private java.lang.String trace;

    public CustEvent(android.app.Activity r2) {
            r1 = this;
            r1.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r0 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getRepluginTrace()
            r1.trace = r0
            java.lang.String r2 = r1.getAndroid(r2)
            r1.android_id = r2
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r2 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getAppInfo()
            r1.host_app_info = r2
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r2 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getAppId()
            r1.host_id = r2
            java.lang.String r2 = com.ymnsdk.replugin.RePluginSdk.getFrameworkVersion()
            r1.framework_version = r2
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r2 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getCpSid()
            r1.cpsid = r2
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r2 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getPluginId()
            r1.plugin_id = r2
            return
    }

    private java.lang.String getAndroid(android.app.Activity r1) {
            r0 = this;
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r1 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r1 = r1.getAndroidId()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setAndroidId(r1)
            return r1
    }

    public java.lang.String getAndroid_id() {
            r1 = this;
            java.lang.String r0 = r1.android_id
            return r0
    }

    public java.lang.String getBuyu_uid() {
            r1 = this;
            java.lang.String r0 = r1.buyu_uid
            return r0
    }

    public java.lang.String getBuyu_version() {
            r1 = this;
            java.lang.String r0 = r1.buyu_version
            return r0
    }

    public java.lang.String getCpsid() {
            r1 = this;
            java.lang.String r0 = r1.cpsid
            return r0
    }

    public java.lang.String getDownload_progress() {
            r1 = this;
            java.lang.String r0 = r1.download_progress
            return r0
    }

    public java.lang.String getDownload_size() {
            r1 = this;
            java.lang.String r0 = r1.download_size
            return r0
    }

    public java.lang.String getHost_app_info() {
            r1 = this;
            java.lang.String r0 = r1.host_app_info
            return r0
    }

    public java.lang.String getHost_id() {
            r1 = this;
            java.lang.String r0 = r1.host_id
            return r0
    }

    public int getIs_allow() {
            r1 = this;
            int r0 = r1.is_allow
            return r0
    }

    public int getIs_new_user() {
            r1 = this;
            int r0 = r1.is_new_user
            return r0
    }

    public int getIspatch() {
            r1 = this;
            int r0 = r1.ispatch
            return r0
    }

    public java.lang.String getLogin_json_str() {
            r1 = this;
            java.lang.String r0 = r1.login_json_str
            return r0
    }

    public java.lang.String getPlugin_id() {
            r1 = this;
            java.lang.String r0 = r1.plugin_id
            return r0
    }

    public int getReason() {
            r1 = this;
            int r0 = r1.reason
            return r0
    }

    public java.lang.String getRequest_code() {
            r1 = this;
            java.lang.String r0 = r1.request_code
            return r0
    }

    public java.lang.String getRequest_duration() {
            r1 = this;
            java.lang.String r0 = r1.request_duration
            return r0
    }

    public java.lang.String getRequest_msg() {
            r1 = this;
            java.lang.String r0 = r1.request_msg
            return r0
    }

    public java.lang.String getRequest_server_type() {
            r1 = this;
            java.lang.String r0 = r1.request_server_type
            return r0
    }

    public java.lang.String getRestart_num() {
            r1 = this;
            java.lang.String r0 = r1.restart_num
            return r0
    }

    public int getScene_id() {
            r1 = this;
            int r0 = r1.scene_id
            return r0
    }

    public int getSource() {
            r1 = this;
            int r0 = r1.source
            return r0
    }

    public java.lang.String getTrace() {
            r1 = this;
            java.lang.String r0 = r1.trace
            return r0
    }

    public void setAndroid_id(java.lang.String r1) {
            r0 = this;
            r0.android_id = r1
            return
    }

    public void setBuyu_uid(java.lang.String r1) {
            r0 = this;
            r0.buyu_uid = r1
            return
    }

    public void setBuyu_version(java.lang.String r1) {
            r0 = this;
            r0.buyu_version = r1
            return
    }

    public void setCpsid(java.lang.String r1) {
            r0 = this;
            r0.cpsid = r1
            return
    }

    public void setDownload_progress(java.lang.String r1) {
            r0 = this;
            r0.download_progress = r1
            return
    }

    public void setDownload_size(java.lang.String r1) {
            r0 = this;
            r0.download_size = r1
            return
    }

    public void setHost_app_info(java.lang.String r1) {
            r0 = this;
            r0.host_app_info = r1
            return
    }

    public void setHost_id(java.lang.String r1) {
            r0 = this;
            r0.host_id = r1
            return
    }

    public void setIs_allow(int r1) {
            r0 = this;
            r0.is_allow = r1
            return
    }

    public void setIs_new_user(int r1) {
            r0 = this;
            r0.is_new_user = r1
            return
    }

    public void setIspatch(int r1) {
            r0 = this;
            r0.ispatch = r1
            return
    }

    public void setLogin_json_str(java.lang.String r1) {
            r0 = this;
            r0.login_json_str = r1
            return
    }

    public void setPlugin_id(java.lang.String r1) {
            r0 = this;
            r0.plugin_id = r1
            return
    }

    public void setReason(int r1) {
            r0 = this;
            r0.reason = r1
            return
    }

    public void setRequest_code(java.lang.String r1) {
            r0 = this;
            r0.request_code = r1
            return
    }

    public void setRequest_duration(java.lang.String r1) {
            r0 = this;
            r0.request_duration = r1
            return
    }

    public void setRequest_msg(java.lang.String r1) {
            r0 = this;
            r0.request_msg = r1
            return
    }

    public void setRequest_server_type(java.lang.String r1) {
            r0 = this;
            r0.request_server_type = r1
            return
    }

    public void setRestart_num(java.lang.String r1) {
            r0 = this;
            r0.restart_num = r1
            return
    }

    public void setScene_id(int r1) {
            r0 = this;
            r0.scene_id = r1
            return
    }

    public void setSource(int r1) {
            r0 = this;
            r0.source = r1
            return
    }

    public void setTrace(java.lang.String r1) {
            r0 = this;
            r0.trace = r1
            return
    }
}
