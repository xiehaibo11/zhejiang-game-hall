package com.tkay.core.api;

public class AdError {
    protected java.lang.String code;
    protected java.lang.String desc;
    protected java.lang.String itemsErrorInfo;
    protected java.lang.String platformCode;
    protected java.lang.String platformMSG;

    protected AdError(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.code = r1
            r0.desc = r2
            r0.platformCode = r3
            r0.platformMSG = r4
            java.lang.String r1 = ""
            r0.itemsErrorInfo = r1
            return
    }

    public java.lang.String getCode() {
            r1 = this;
            java.lang.String r0 = r1.code
            return r0
    }

    public java.lang.String getDesc() {
            r1 = this;
            java.lang.String r0 = r1.desc
            return r0
    }

    public java.lang.String getFullErrorInfo() {
            r2 = this;
            java.lang.String r0 = r2.itemsErrorInfo
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "code:[ "
            r0.<init>(r1)
            java.lang.String r1 = r2.code
            r0.append(r1)
            java.lang.String r1 = " ]desc:[ "
            r0.append(r1)
            java.lang.String r1 = r2.desc
            r0.append(r1)
            java.lang.String r1 = " ]platformCode:[ "
            r0.append(r1)
            java.lang.String r1 = r2.platformCode
            r0.append(r1)
            java.lang.String r1 = " ]platformMSG:[ "
            r0.append(r1)
            java.lang.String r1 = r2.platformMSG
            r0.append(r1)
            java.lang.String r1 = " ]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L3c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "\ncode[ "
            r0.<init>(r1)
            java.lang.String r1 = r2.code
            r0.append(r1)
            java.lang.String r1 = " ]\ndesc[ "
            r0.append(r1)
            java.lang.String r1 = r2.desc
            r0.append(r1)
            java.lang.String r1 = " ]\ndetail[ "
            r0.append(r1)
            java.lang.String r1 = r2.itemsErrorInfo
            r0.append(r1)
            java.lang.String r1 = " \n]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getPlatformCode() {
            r1 = this;
            java.lang.String r0 = r1.platformCode
            return r0
    }

    public java.lang.String getPlatformMSG() {
            r1 = this;
            java.lang.String r0 = r1.platformMSG
            return r0
    }

    public java.lang.String printStackTrace() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "code:[ "
            r0.<init>(r1)
            java.lang.String r1 = r2.code
            r0.append(r1)
            java.lang.String r1 = " ]desc:[ "
            r0.append(r1)
            java.lang.String r1 = r2.desc
            r0.append(r1)
            java.lang.String r1 = " ]platformCode:[ "
            r0.append(r1)
            java.lang.String r1 = r2.platformCode
            r0.append(r1)
            java.lang.String r1 = " ]platformMSG:[ "
            r0.append(r1)
            java.lang.String r1 = r2.platformMSG
            r0.append(r1)
            java.lang.String r1 = " ]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void putNetworkErrorMsg(java.lang.String r3, int r4, java.lang.String r5, com.tkay.core.api.AdError r6) {
            r2 = this;
            java.lang.String r0 = r6.platformCode
            r2.platformCode = r0
            java.lang.String r0 = r6.platformMSG
            r2.platformMSG = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.itemsErrorInfo
            r0.append(r1)
            java.lang.String r1 = "\n  { ad_source_id[ "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " ];network_firm_id[ "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = " ];network_name=[ "
            r0.append(r3)
            r0.append(r5)
            java.lang.String r3 = " ];network_error:[ "
            r0.append(r3)
            java.lang.String r3 = r6.printStackTrace()
            r0.append(r3)
            java.lang.String r3 = " ] }"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.itemsErrorInfo = r3
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.printStackTrace()
            return r0
    }
}
