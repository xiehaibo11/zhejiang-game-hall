package com.bianfeng.seppellita.bean;

public class ListPostBean {
    private java.lang.String test_name;
    private java.lang.String user_tag;

    public ListPostBean() {
            r0 = this;
            r0.<init>()
            return
    }

    public ListPostBean(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.test_name = r1
            r0.user_tag = r2
            return
    }

    public java.lang.String getTest_name() {
            r1 = this;
            java.lang.String r0 = r1.test_name
            return r0
    }

    public java.lang.String getUser_tag() {
            r1 = this;
            java.lang.String r0 = r1.user_tag
            return r0
    }

    public void setTest_name(java.lang.String r1) {
            r0 = this;
            r0.test_name = r1
            return
    }

    public void setUser_tag(java.lang.String r1) {
            r0 = this;
            r0.user_tag = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r1)
            return r0
    }
}
