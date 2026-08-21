package com.huawei.hms.framework.network.grs;

public class GrsConfig {
    private java.lang.String appName;
    private java.lang.String countrySource;
    private java.lang.String issueCountry;
    private java.lang.String regCountry;
    private java.lang.String serCountry;
    private java.lang.String userId;
    private java.lang.String versionName;

    public GrsConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean equal(com.huawei.hms.framework.network.grs.GrsConfig r3) {
            r2 = this;
            if (r3 == 0) goto L58
            java.lang.String r0 = r2.appName
            java.lang.String r1 = r3.getAppName()
            boolean r0 = com.huawei.hms.framework.common.StringUtils.strEquals(r0, r1)
            if (r0 == 0) goto L58
            java.lang.String r0 = r2.serCountry
            java.lang.String r1 = r3.getSerCountry()
            boolean r0 = com.huawei.hms.framework.common.StringUtils.strEquals(r0, r1)
            if (r0 == 0) goto L58
            java.lang.String r0 = r2.regCountry
            java.lang.String r1 = r3.getRegCountry()
            boolean r0 = com.huawei.hms.framework.common.StringUtils.strEquals(r0, r1)
            if (r0 == 0) goto L58
            java.lang.String r0 = r2.issueCountry
            java.lang.String r1 = r3.getIssueCountry()
            boolean r0 = com.huawei.hms.framework.common.StringUtils.strEquals(r0, r1)
            if (r0 == 0) goto L58
            java.lang.String r0 = r2.userId
            java.lang.String r1 = r3.getuserId()
            boolean r0 = com.huawei.hms.framework.common.StringUtils.strEquals(r0, r1)
            if (r0 == 0) goto L58
            java.lang.String r0 = r2.versionName
            java.lang.String r1 = r3.getVersionName()
            boolean r0 = com.huawei.hms.framework.common.StringUtils.strEquals(r0, r1)
            if (r0 == 0) goto L58
            java.lang.String r0 = r2.countrySource
            java.lang.String r3 = r3.getCountrySource()
            boolean r3 = com.huawei.hms.framework.common.StringUtils.strEquals(r0, r3)
            if (r3 == 0) goto L58
            r3 = 1
            goto L59
        L58:
            r3 = 0
        L59:
            return r3
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

    public com.huawei.hms.framework.network.grs.GrsBaseInfo getGrsBaseInfo(android.content.Context r3) {
            r2 = this;
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = new com.huawei.hms.framework.network.grs.GrsBaseInfo
            r0.<init>()
            java.lang.String r1 = r2.serCountry
            r0.setSerCountry(r1)
            java.lang.String r1 = r2.versionName
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L17
            java.lang.String r3 = com.huawei.hms.framework.common.PackageUtils.getVersionName(r3)
            goto L19
        L17:
            java.lang.String r3 = r2.versionName
        L19:
            r0.setVersionName(r3)
            java.lang.String r3 = r2.appName
            r0.setAppName(r3)
            java.lang.String r3 = r2.userId
            r0.setUid(r3)
            java.lang.String r3 = r2.regCountry
            r0.setRegCountry(r3)
            java.lang.String r3 = r2.issueCountry
            r0.setIssueCountry(r3)
            java.lang.String r3 = r2.countrySource
            r0.setCountrySource(r3)
            return r0
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

    public java.lang.String getSerCountry() {
            r1 = this;
            java.lang.String r0 = r1.serCountry
            return r0
    }

    public java.lang.String getVersionName() {
            r1 = this;
            java.lang.String r0 = r1.versionName
            return r0
    }

    public java.lang.String getuserId() {
            r1 = this;
            java.lang.String r0 = r1.userId
            return r0
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

    public void setSerCountry(java.lang.String r1) {
            r0 = this;
            r0.serCountry = r1
            return
    }

    public void setUserId(java.lang.String r1) {
            r0 = this;
            r0.userId = r1
            return
    }

    public void setVersionName(java.lang.String r1) {
            r0 = this;
            r0.versionName = r1
            return
    }
}
