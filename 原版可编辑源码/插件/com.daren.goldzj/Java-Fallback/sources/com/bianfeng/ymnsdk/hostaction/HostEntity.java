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

    public void setIs_mandatory(int r1) {
        this.is_mandatory = r1;
    }

    public void setRequest_times(int r1) {
        this.request_times = r1;
    }

    public void setServer_a(String r1) {
        this.server_a = r1;
    }

    public void setServer_a_weight(int r1) {
        this.server_a_weight = r1;
    }

    public void setServer_b(String r1) {
        this.server_b = r1;
    }

    public void setServer_b_weight(int r1) {
        this.server_b_weight = r1;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }

    public HostEntity(String r1, String r2, int r3, int r4, int r5, int r6) {
        this.server_a = r1;
        this.server_b = r2;
        this.server_a_weight = r3;
        this.server_b_weight = r4;
        this.is_mandatory = r5;
        this.request_times = r6;
    }
}
