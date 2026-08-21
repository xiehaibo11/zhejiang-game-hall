package com.bianfeng.privategetui.bean;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

/* JADX INFO: loaded from: classes.dex */
public class YmnGetuiMessageBean {
    private String appId;
    private String clientId;
    private String content;
    private String messageId;
    private String pkgName;
    private String taskId;
    private String title;

    public YmnGetuiMessageBean(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        this.appId = str;
        this.taskId = str2;
        this.messageId = str3;
        this.pkgName = str4;
        this.clientId = str5;
        this.title = str6;
        this.content = str7;
    }

    public String toString() {
        try {
            return YmnGsonUtil.toJson(this);
        } catch (Exception unused) {
            return "";
        }
    }
}
