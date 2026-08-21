package com.bianfeng.paylib.entity;

public class YmnWxWebpayEntity {
    private String expire_at;
    private String redirect_url;
    private String url_starts_with;
    private int web_open_type;

    public String getExpire_at() {
        return this.expire_at;
    }

    public void setExpire_at(String str) {
        this.expire_at = str;
    }

    public String getRedirect_url() {
        return this.redirect_url;
    }

    public void setRedirect_url(String str) {
        this.redirect_url = str;
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
