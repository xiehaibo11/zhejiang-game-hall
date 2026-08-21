package com.huawei.hms.framework.network.grs;

public class GrsBaseInfo implements java.lang.Cloneable {
    private static final java.lang.String TAG = "GrsBaseInfo";
    private java.lang.String androidVersion;
    private java.lang.String appName;
    private java.lang.String countrySource;
    private java.lang.String deviceModel;
    private java.lang.String issueCountry;
    private java.lang.String regCountry;
    private java.lang.String romVersion;
    private java.lang.String serCountry;
    private java.lang.String uid;
    private java.lang.String versionName;

    public @interface CountryCodeSource {
        public static final java.lang.String APP = "APP";
        public static final java.lang.String LOCALE_INFO = "LOCALE_INFO";
        public static final java.lang.String NETWORK_COUNTRY = "NETWORK_COUNTRY";
        public static final java.lang.String SIM_COUNTRY = "SIM_COUNTRY";
        public static final java.lang.String UNKNOWN = "UNKNOWN";
        public static final java.lang.String VENDOR_COUNTRY = "VENDOR_COUNTRY";
    }

    static {
            return
    }

    public GrsBaseInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public GrsBaseInfo(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.huawei.hms.framework.network.grs.GrsApp r0 = com.huawei.hms.framework.network.grs.GrsApp.getInstance()
            java.lang.String r2 = r0.getIssueCountryCode(r2)
            r1.issueCountry = r2
            return
    }

    private java.lang.StringBuffer getStringBuffer(java.lang.StringBuffer r5, boolean r6, android.content.Context r7) {
            r4 = this;
            java.lang.String r0 = r4.getAndroidVersion()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "&"
            java.lang.String r3 = "="
            if (r1 != 0) goto L26
            java.lang.String r1 = r5.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b
            r5.append(r2)
        L1b:
            java.lang.String r1 = "android_version"
            r5.append(r1)
            r5.append(r3)
            r5.append(r0)
        L26:
            java.lang.String r0 = r4.getRomVersion()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L48
            java.lang.String r1 = r5.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3d
            r5.append(r2)
        L3d:
            java.lang.String r1 = "rom_version"
            r5.append(r1)
            r5.append(r3)
            r5.append(r0)
        L48:
            java.lang.String r0 = r4.getDeviceModel()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L6a
            java.lang.String r1 = r5.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L5f
            r5.append(r2)
        L5f:
            java.lang.String r1 = "device_model"
            r5.append(r1)
            r5.append(r3)
            r5.append(r0)
        L6a:
            com.huawei.hms.framework.network.grs.a.c r0 = new com.huawei.hms.framework.network.grs.a.c
            java.lang.String r1 = "share_pre_grs_conf_"
            r0.<init>(r7, r1)
            java.lang.String r7 = r0.b()
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto La4
            if (r6 != 0) goto La4
            java.lang.String r6 = "UTF-8"
            java.lang.String r6 = java.net.URLEncoder.encode(r7, r6)     // Catch: java.io.UnsupportedEncodingException -> L9c
            java.lang.String r7 = r5.toString()     // Catch: java.io.UnsupportedEncodingException -> L9c
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.io.UnsupportedEncodingException -> L9c
            if (r7 != 0) goto L90
            r5.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L9c
        L90:
            java.lang.String r7 = "cp"
            r5.append(r7)     // Catch: java.io.UnsupportedEncodingException -> L9c
            r5.append(r3)     // Catch: java.io.UnsupportedEncodingException -> L9c
            r5.append(r6)     // Catch: java.io.UnsupportedEncodingException -> L9c
            goto La4
        L9c:
            r6 = move-exception
            java.lang.String r7 = com.huawei.hms.framework.network.grs.GrsBaseInfo.TAG
            java.lang.String r0 = "cp UnsupportedEncodingException."
            com.huawei.hms.framework.common.Logger.e(r7, r0, r6)
        La4:
            java.lang.String r6 = r4.getCountrySource()
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 != 0) goto Lc6
            java.lang.String r7 = r5.toString()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lbb
            r5.append(r2)
        Lbb:
            java.lang.String r7 = "country_source"
            r5.append(r7)
            r5.append(r3)
            r5.append(r6)
        Lc6:
            return r5
    }

    private boolean isEqual(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r0 = 1
            if (r3 != 0) goto L6
            if (r4 != 0) goto L6
            return r0
        L6:
            r1 = 0
            if (r3 == 0) goto L13
            if (r4 != 0) goto Lc
            goto L13
        Lc:
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L13
            return r0
        L13:
            return r1
    }

    public com.huawei.hms.framework.network.grs.GrsBaseInfo clone() {
            r1 = this;
            java.lang.Object r0 = super.clone()
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = (com.huawei.hms.framework.network.grs.GrsBaseInfo) r0
            return r0
    }

    public java.lang.Object clone() {
            r1 = this;
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r1.clone()
            return r0
    }

    public boolean compare(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L7d
            java.lang.Class r2 = r5.getClass()
            java.lang.Class<com.huawei.hms.framework.network.grs.GrsBaseInfo> r3 = com.huawei.hms.framework.network.grs.GrsBaseInfo.class
            if (r3 == r2) goto L10
            goto L7d
        L10:
            boolean r2 = r5 instanceof com.huawei.hms.framework.network.grs.GrsBaseInfo
            if (r2 == 0) goto L7d
            com.huawei.hms.framework.network.grs.GrsBaseInfo r5 = (com.huawei.hms.framework.network.grs.GrsBaseInfo) r5
            java.lang.String r2 = r4.serCountry
            java.lang.String r3 = r5.serCountry
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.versionName
            java.lang.String r3 = r5.versionName
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.appName
            java.lang.String r3 = r5.appName
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.uid
            java.lang.String r3 = r5.uid
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.regCountry
            java.lang.String r3 = r5.regCountry
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.issueCountry
            java.lang.String r3 = r5.issueCountry
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.androidVersion
            java.lang.String r3 = r5.androidVersion
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.romVersion
            java.lang.String r3 = r5.romVersion
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.deviceModel
            java.lang.String r3 = r5.deviceModel
            boolean r2 = r4.isEqual(r2, r3)
            if (r2 == 0) goto L7b
            java.lang.String r2 = r4.countrySource
            java.lang.String r5 = r5.countrySource
            boolean r5 = r4.isEqual(r2, r5)
            if (r5 == 0) goto L7b
            goto L7c
        L7b:
            r0 = r1
        L7c:
            return r0
        L7d:
            return r1
    }

    public com.huawei.hms.framework.network.grs.GrsBaseInfo copy() {
            r2 = this;
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = new com.huawei.hms.framework.network.grs.GrsBaseInfo
            r0.<init>()
            java.lang.String r1 = r2.appName
            r0.setAppName(r1)
            java.lang.String r1 = r2.serCountry
            r0.setSerCountry(r1)
            java.lang.String r1 = r2.regCountry
            r0.setRegCountry(r1)
            java.lang.String r1 = r2.issueCountry
            r0.setIssueCountry(r1)
            java.lang.String r1 = r2.countrySource
            r0.setCountrySource(r1)
            java.lang.String r1 = r2.androidVersion
            r0.setAndroidVersion(r1)
            java.lang.String r1 = r2.deviceModel
            r0.setDeviceModel(r1)
            java.lang.String r1 = r2.romVersion
            r0.setRomVersion(r1)
            java.lang.String r1 = r2.uid
            r0.setUid(r1)
            java.lang.String r1 = r2.versionName
            r0.setVersionName(r1)
            return r0
    }

    public java.lang.String getAndroidVersion() {
            r1 = this;
            java.lang.String r0 = r1.androidVersion
            return r0
    }

    public java.lang.String getAppName() {
            r1 = this;
            java.lang.String r0 = r1.appName
            return r0
    }

    public java.lang.String getCountrySource() {
            r1 = this;
            java.lang.String r0 = r1.countrySource
            return r0
    }

    public java.lang.String getDeviceModel() {
            r1 = this;
            java.lang.String r0 = r1.deviceModel
            return r0
    }

    public java.lang.String getGrsParasKey(boolean r5, boolean r6, android.content.Context r7) {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = r7.getPackageName()
            com.huawei.hms.framework.network.grs.b.b r1 = com.huawei.hms.framework.network.grs.b.b.a(r1, r4)
            if (r1 == 0) goto L14
            com.huawei.hms.framework.network.grs.local.model.a r1 = r1.a()
            goto L15
        L14:
            r1 = 0
        L15:
            if (r1 == 0) goto L1c
            java.lang.String r1 = r1.b()
            goto L1e
        L1c:
            java.lang.String r1 = ""
        L1e:
            java.lang.String r2 = r4.getAppName()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L3b
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L3b
            java.lang.String r3 = "app_name"
            r0.append(r3)
            java.lang.String r3 = "="
            r0.append(r3)
            r0.append(r2)
        L3b:
            java.lang.String r5 = r4.getGrsReqParamJoint(r5, r6, r1, r7)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L57
            java.lang.String r6 = r0.toString()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L54
            java.lang.String r6 = "&"
            r0.append(r6)
        L54:
            r0.append(r5)
        L57:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public java.lang.String getGrsParasTag(boolean r1, boolean r2, android.content.Context r3) {
            r0 = this;
            java.lang.String r1 = r0.getGrsParasKey(r1, r2, r3)
            return r1
    }

    public java.lang.String getGrsReqParamJoint(boolean r5, boolean r6, java.lang.String r7, android.content.Context r8) {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "1.0"
            boolean r1 = r1.equals(r7)
            java.lang.String r2 = "="
            if (r1 == 0) goto L17
            java.lang.String r7 = com.huawei.hms.framework.network.grs.GrsBaseInfo.TAG
            java.lang.String r1 = "1.0 interface has no query param appname"
            com.huawei.hms.framework.common.Logger.v(r7, r1)
            goto L3e
        L17:
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r3 = "app_name"
            if (r1 != 0) goto L29
            r0.append(r3)
            r0.append(r2)
        L25:
            r0.append(r7)
            goto L3e
        L29:
            java.lang.String r7 = r4.getAppName()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L3e
            r0.append(r3)
            r0.append(r2)
            java.lang.String r7 = r4.getAppName()
            goto L25
        L3e:
            java.lang.String r7 = r4.getVersionName()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r3 = "&"
            if (r1 != 0) goto L62
            java.lang.String r1 = r0.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L57
            r0.append(r3)
        L57:
            java.lang.String r1 = "app_version"
            r0.append(r1)
            r0.append(r2)
            r0.append(r7)
        L62:
            java.lang.String r7 = r4.getUid()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L95
            java.lang.String r1 = r0.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L79
            r0.append(r3)
        L79:
            java.lang.String r1 = "uid"
            r0.append(r1)
            r0.append(r2)
            if (r5 == 0) goto L8b
            java.lang.String r5 = com.huawei.hms.framework.network.grs.d.b.b(r7)
        L87:
            r0.append(r5)
            goto L95
        L8b:
            if (r6 == 0) goto L92
            java.lang.String r5 = com.huawei.hms.framework.network.grs.d.b.a(r7)
            goto L87
        L92:
            r0.append(r7)
        L95:
            java.lang.String r5 = r4.getRegCountry()
            boolean r7 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = "UNKNOWN"
            if (r7 != 0) goto Lbf
            boolean r7 = r1.equals(r5)
            if (r7 != 0) goto Lbf
            java.lang.String r7 = r0.toString()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lb4
            r0.append(r3)
        Lb4:
            java.lang.String r7 = "reg_country"
            r0.append(r7)
            r0.append(r2)
            r0.append(r5)
        Lbf:
            java.lang.String r5 = r4.getSerCountry()
            boolean r7 = android.text.TextUtils.isEmpty(r5)
            if (r7 != 0) goto Le7
            boolean r7 = r1.equals(r5)
            if (r7 != 0) goto Le7
            java.lang.String r7 = r0.toString()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Ldc
            r0.append(r3)
        Ldc:
            java.lang.String r7 = "ser_country"
            r0.append(r7)
            r0.append(r2)
            r0.append(r5)
        Le7:
            java.lang.String r5 = r4.getIssueCountry()
            boolean r7 = android.text.TextUtils.isEmpty(r5)
            if (r7 != 0) goto L10f
            boolean r7 = r1.equals(r5)
            if (r7 != 0) goto L10f
            java.lang.String r7 = r0.toString()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L104
            r0.append(r3)
        L104:
            java.lang.String r7 = "issue_country"
            r0.append(r7)
            r0.append(r2)
            r0.append(r5)
        L10f:
            java.lang.StringBuffer r5 = r4.getStringBuffer(r0, r6, r8)
            java.lang.String r5 = r5.toString()
            return r5
    }

    public java.lang.String getIssueCountry() {
            r1 = this;
            java.lang.String r0 = r1.issueCountry
            return r0
    }

    public java.lang.String getRegCountry() {
            r1 = this;
            java.lang.String r0 = r1.regCountry
            return r0
    }

    public java.lang.String getRomVersion() {
            r1 = this;
            java.lang.String r0 = r1.romVersion
            return r0
    }

    public java.lang.String getSerCountry() {
            r1 = this;
            java.lang.String r0 = r1.serCountry
            return r0
    }

    public java.lang.String getUid() {
            r1 = this;
            java.lang.String r0 = r1.uid
            return r0
    }

    public java.lang.String getVersionName() {
            r1 = this;
            java.lang.String r0 = r1.versionName
            return r0
    }

    public void setAndroidVersion(java.lang.String r1) {
            r0 = this;
            r0.androidVersion = r1
            return
    }

    public void setAppName(java.lang.String r1) {
            r0 = this;
            r0.appName = r1
            return
    }

    public void setCountrySource(java.lang.String r1) {
            r0 = this;
            r0.countrySource = r1
            return
    }

    public void setDeviceModel(java.lang.String r1) {
            r0 = this;
            r0.deviceModel = r1
            return
    }

    @java.lang.Deprecated
    public void setIssueCountry(java.lang.String r1) {
            r0 = this;
            r0.issueCountry = r1
            return
    }

    public void setRegCountry(java.lang.String r1) {
            r0 = this;
            r0.regCountry = r1
            return
    }

    public void setRomVersion(java.lang.String r1) {
            r0 = this;
            r0.romVersion = r1
            return
    }

    public void setSerCountry(java.lang.String r1) {
            r0 = this;
            r0.serCountry = r1
            return
    }

    public void setUid(java.lang.String r1) {
            r0 = this;
            r0.uid = r1
            return
    }

    public void setVersionName(java.lang.String r1) {
            r0 = this;
            r0.versionName = r1
            return
    }

    public int uniqueCode() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.appName
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r2 = r3.serCountry
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r3.regCountry
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r3.issueCountry
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            int r0 = r0.hashCode()
            return r0
    }
}
