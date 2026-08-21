package com.bianfeng.privategetui.bean;

public class YmnGetuiTagOrAliasBean {
    private java.lang.String code;
    private java.lang.String sn;

    public YmnGetuiTagOrAliasBean(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.sn = r1
            r0.code = r2
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
