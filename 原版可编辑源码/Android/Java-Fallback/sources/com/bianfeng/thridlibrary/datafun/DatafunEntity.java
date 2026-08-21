package com.bianfeng.thridlibrary.datafun;

public class DatafunEntity {
    private java.lang.String area_name;
    private int event_id;
    private java.lang.String is_user_new;
    private java.lang.String user_name;

    public DatafunEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getArea_name() {
            r1 = this;
            java.lang.String r0 = r1.area_name
            return r0
    }

    public int getEvent_id() {
            r1 = this;
            int r0 = r1.event_id
            return r0
    }

    public java.lang.String getIs_user_new() {
            r1 = this;
            java.lang.String r0 = r1.is_user_new
            return r0
    }

    public java.lang.String getUser_name() {
            r1 = this;
            java.lang.String r0 = r1.user_name
            return r0
    }

    public void setArea_name(java.lang.String r1) {
            r0 = this;
            r0.area_name = r1
            return
    }

    public void setEvent_id(int r1) {
            r0 = this;
            r0.event_id = r1
            return
    }

    public void setIs_user_new(java.lang.String r1) {
            r0 = this;
            r0.is_user_new = r1
            return
    }

    public void setUser_name(java.lang.String r1) {
            r0 = this;
            r0.user_name = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.String r0 = r0.toJson(r1)
            return r0
    }
}
