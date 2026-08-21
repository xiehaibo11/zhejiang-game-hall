package com.bianfeng.paylib.entity;

public class YmnAliWebpayEntity {
    private java.lang.String base64_html;
    private java.lang.String charset;
    private java.lang.String url_starts_with;
    private int web_open_type;

    public YmnAliWebpayEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getBase64_html() {
            r3 = this;
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = r3.base64_html
            r2 = 2
            byte[] r1 = android.util.Base64.decode(r1, r2)
            r0.<init>(r1)
            return r0
    }

    public java.lang.String getCharset() {
            r1 = this;
            java.lang.String r0 = r1.charset
            return r0
    }

    public java.lang.String getUrl_starts_with() {
            r1 = this;
            java.lang.String r0 = r1.url_starts_with
            return r0
    }

    public int getWeb_open_type() {
            r1 = this;
            int r0 = r1.web_open_type
            return r0
    }

    public void setBase64_html(java.lang.String r1) {
            r0 = this;
            r0.base64_html = r1
            return
    }

    public void setCharset(java.lang.String r1) {
            r0 = this;
            r0.charset = r1
            return
    }

    public void setUrl_starts_with(java.lang.String r1) {
            r0 = this;
            r0.url_starts_with = r1
            return
    }

    public void setWeb_open_type(int r1) {
            r0 = this;
            r0.web_open_type = r1
            return
    }
}
