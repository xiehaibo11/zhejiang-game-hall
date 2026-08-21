package com.ss.android.download.api.model;

public class DeepLink {
    private long id;
    private org.json.JSONObject json;
    private java.lang.String mCloudGameUrl;
    private java.lang.String mOpenUrl;
    private java.lang.String mWebTitle;
    private java.lang.String mWebUrl;
    private java.lang.String packageName;

    public DeepLink() {
            r0 = this;
            r0.<init>()
            return
    }

    public DeepLink(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.mOpenUrl = r1
            r0.mWebUrl = r2
            r0.mWebTitle = r3
            return
    }

    public java.lang.String getCloudGameUrl() {
            r1 = this;
            java.lang.String r0 = r1.mCloudGameUrl
            return r0
    }

    public long getId() {
            r2 = this;
            long r0 = r2.id
            return r0
    }

    public org.json.JSONObject getJson() {
            r1 = this;
            org.json.JSONObject r0 = r1.json
            return r0
    }

    public java.lang.String getOpenUrl() {
            r1 = this;
            java.lang.String r0 = r1.mOpenUrl
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public java.lang.String getWebTitle() {
            r1 = this;
            java.lang.String r0 = r1.mWebTitle
            return r0
    }

    public java.lang.String getWebUrl() {
            r1 = this;
            java.lang.String r0 = r1.mWebUrl
            return r0
    }

    public void setCloudGameUrl(java.lang.String r1) {
            r0 = this;
            r0.mCloudGameUrl = r1
            return
    }

    public void setId(long r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setJson(org.json.JSONObject r1) {
            r0 = this;
            r0.json = r1
            return
    }

    public void setOpenUrl(java.lang.String r1) {
            r0 = this;
            r0.mOpenUrl = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setWebTitle(java.lang.String r1) {
            r0 = this;
            r0.mWebTitle = r1
            return
    }

    public void setWebUrl(java.lang.String r1) {
            r0 = this;
            r0.mWebUrl = r1
            return
    }
}
