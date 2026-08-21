package com.bianfeng.privategetui.bean;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

/* JADX INFO: loaded from: classes.dex */
public class YmnGetuiTagOrAliasBean {
    private String code;
    private String sn;

    public YmnGetuiTagOrAliasBean(String str, String str2) {
        this.sn = str;
        this.code = str2;
    }

    public String toString() {
        try {
            return YmnGsonUtil.toJson(this);
        } catch (Exception unused) {
            return "";
        }
    }
}
