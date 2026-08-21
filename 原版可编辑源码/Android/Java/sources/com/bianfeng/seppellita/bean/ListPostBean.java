package com.bianfeng.seppellita.bean;

import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;

public class ListPostBean {
    private String test_name;
    private String user_tag;

    public ListPostBean() {
    }

    public ListPostBean(String str, String str2) {
        this.test_name = str;
        this.user_tag = str2;
    }

    public String getTest_name() {
        return this.test_name;
    }

    public void setTest_name(String str) {
        this.test_name = str;
    }

    public String getUser_tag() {
        return this.user_tag;
    }

    public void setUser_tag(String str) {
        this.user_tag = str;
    }

    public String toString() {
        return SeppellitaGsonUtils.toJson(this);
    }
}
