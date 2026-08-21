package com.bianfeng.paylib.entity;

import android.util.Base64;

public class YmnAliWebpayEntity {
    private String base64_html;
    private String charset;
    private String url_starts_with;
    private int web_open_type;

    public String getBase64_html() {
        return new String(Base64.decode(this.base64_html, 2));
    }

    public void setBase64_html(String str) {
        this.base64_html = str;
    }

    public String getCharset() {
        return this.charset;
    }

    public void setCharset(String str) {
        this.charset = str;
    }

    public String getUrl_starts_with() {
        return this.url_starts_with;
    }

    public void setUrl_starts_with(String str) {
        this.url_starts_with = str;
    }

    public int getWeb_open_type() {
        return this.web_open_type;
    }

    public void setWeb_open_type(int i) {
        this.web_open_type = i;
    }
}
