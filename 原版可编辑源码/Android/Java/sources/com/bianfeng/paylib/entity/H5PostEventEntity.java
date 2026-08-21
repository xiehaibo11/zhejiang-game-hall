package com.bianfeng.paylib.entity;

import com.bianfeng.thridlibrary.ThridSdk;

public class H5PostEventEntity {
    private String area_name;
    private int event_id;
    private String is_user_new;
    private String user_name;

    public int getEvent_id() {
        return this.event_id;
    }

    public void setEvent_id(int i) {
        this.event_id = i;
    }

    public String getArea_name() {
        return this.area_name;
    }

    public void setArea_name(String str) {
        this.area_name = str;
    }

    public String getIs_user_new() {
        return this.is_user_new;
    }

    public void setIs_user_new(String str) {
        this.is_user_new = str;
    }

    public String getUser_name() {
        return this.user_name;
    }

    public void setUser_name(String str) {
        this.user_name = str;
    }

    public String toString() {
        return ThridSdk.getGson().toJson(this);
    }
}
