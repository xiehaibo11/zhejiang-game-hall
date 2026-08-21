package com.bianfeng.seppellita.bean;

public class PostDataBean {
    private java.lang.String apihub_secret;
    private java.lang.String data;
    private java.lang.String encrypt_key;
    private java.lang.String idList;
    private java.lang.String site;
    private java.lang.String time;

    public PostDataBean(java.util.List<com.bianfeng.seppellita.bean.EventBean> r1, java.util.List<java.lang.String> r2, java.lang.String r3, com.bianfeng.seppellita.bean.AppInfoBean r4) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r1)
            r0.data = r1
            java.lang.String r1 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r2)
            r0.idList = r1
            java.lang.String r1 = r4.getApihub_secret()
            r0.apihub_secret = r1
            java.lang.String r1 = r4.getEncrypt_key()
            r0.encrypt_key = r1
            r0.time = r3
            java.lang.String r1 = r4.getSite()
            r0.site = r1
            return
    }

    public java.lang.String getApihub_secret() {
            r1 = this;
            java.lang.String r0 = r1.apihub_secret
            return r0
    }

    public java.lang.String getData() {
            r1 = this;
            java.lang.String r0 = r1.data
            return r0
    }

    public java.lang.String getEncrypt_key() {
            r1 = this;
            java.lang.String r0 = r1.encrypt_key
            return r0
    }

    public java.util.List<java.lang.String> getIdList() throws com.bianfeng.seppellita.exception.SeppellitaException {
            r1 = this;
            java.lang.String r0 = r1.idList
            java.util.List r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.getList(r0)
            return r0
    }

    public java.lang.String getSite() {
            r1 = this;
            java.lang.String r0 = r1.site
            return r0
    }

    public java.lang.String getTime() {
            r1 = this;
            java.lang.String r0 = r1.time
            return r0
    }

    public void setSite(java.lang.String r1) {
            r0 = this;
            r0.site = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r1)
            return r0
    }
}
