package com.bianfeng.privategetui.bean;

public class YmnGetuiMessageBean {
    private java.lang.String appId;
    private java.lang.String clientId;
    private java.lang.String content;
    private java.lang.String messageId;
    private java.lang.String pkgName;
    private java.lang.String taskId;
    private java.lang.String title;

    public YmnGetuiMessageBean(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r0 = this;
            r0.<init>()
            r0.appId = r1
            r0.taskId = r2
            r0.messageId = r3
            r0.pkgName = r4
            r0.clientId = r5
            r0.title = r6
            r0.content = r7
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            java.lang.String r0 = ""
            return r0
    }
}
