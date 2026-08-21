package com.bianfeng.seppellita.bean;

import com.bianfeng.seppellita.exception.SeppellitaException;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import java.util.List;

public class PostDataBean {
    private String apihub_secret;
    private String data;
    private String encrypt_key;
    private String idList;
    private String site;
    private String time;

    public PostDataBean(List<EventBean> list, List<String> list2, String str, AppInfoBean appInfoBean) {
        this.data = SeppellitaGsonUtils.toJson(list);
        this.idList = SeppellitaGsonUtils.toJson(list2);
        this.apihub_secret = appInfoBean.getApihub_secret();
        this.encrypt_key = appInfoBean.getEncrypt_key();
        this.time = str;
        this.site = appInfoBean.getSite();
    }

    public String getData() {
        return this.data;
    }

    public List<String> getIdList() throws SeppellitaException {
        return SeppellitaGsonUtils.getList(this.idList);
    }

    public String getApihub_secret() {
        return this.apihub_secret;
    }

    public String getTime() {
        return this.time;
    }

    public String getEncrypt_key() {
        return this.encrypt_key;
    }

    public String getSite() {
        return this.site;
    }

    public void setSite(String str) {
        this.site = str;
    }

    public String toString() {
        return SeppellitaGsonUtils.toJson(this);
    }
}
