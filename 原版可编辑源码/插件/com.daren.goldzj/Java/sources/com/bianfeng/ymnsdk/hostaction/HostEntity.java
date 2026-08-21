package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class HostEntity {
    private int is_mandatory;
    private int request_times;
    private String server_a;
    private int server_a_weight;
    private String server_b;
    private int server_b_weight;

    public HostEntity() {
    }

    public int getIs_mandatory() {
        return this.is_mandatory;
    }

    public int getRequest_times() {
        return this.request_times;
    }

    public String getServer_a() {
        return this.server_a;
    }

    public int getServer_a_weight() {
        return this.server_a_weight;
    }

    public String getServer_b() {
        return this.server_b;
    }

    public int getServer_b_weight() {
        return this.server_b_weight;
    }

    public void setIs_mandatory(int i) {
        this.is_mandatory = i;
    }

    public void setRequest_times(int i) {
        this.request_times = i;
    }

    public void setServer_a(String str) {
        this.server_a = str;
    }

    public void setServer_a_weight(int i) {
        this.server_a_weight = i;
    }

    public void setServer_b(String str) {
        this.server_b = str;
    }

    public void setServer_b_weight(int i) {
        this.server_b_weight = i;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }

    public HostEntity(String str, String str2, int i, int i2, int i3, int i4) {
        this.server_a = str;
        this.server_b = str2;
        this.server_a_weight = i;
        this.server_b_weight = i2;
        this.is_mandatory = i3;
        this.request_times = i4;
    }
}
