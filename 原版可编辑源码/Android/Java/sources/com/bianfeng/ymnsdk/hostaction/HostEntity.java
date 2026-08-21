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

    public HostEntity(String server_a, String server_b, int server_a_weight, int server_b_weight, int is_mandatory, int request_times) {
        this.server_a = server_a;
        this.server_b = server_b;
        this.server_a_weight = server_a_weight;
        this.server_b_weight = server_b_weight;
        this.is_mandatory = is_mandatory;
        this.request_times = request_times;
    }

    public String getServer_a() {
        return this.server_a;
    }

    public void setServer_a(String server_a) {
        this.server_a = server_a;
    }

    public String getServer_b() {
        return this.server_b;
    }

    public void setServer_b(String server_b) {
        this.server_b = server_b;
    }

    public int getServer_a_weight() {
        return this.server_a_weight;
    }

    public void setServer_a_weight(int server_a_weight) {
        this.server_a_weight = server_a_weight;
    }

    public int getServer_b_weight() {
        return this.server_b_weight;
    }

    public void setServer_b_weight(int server_b_weight) {
        this.server_b_weight = server_b_weight;
    }

    public int getIs_mandatory() {
        return this.is_mandatory;
    }

    public void setIs_mandatory(int is_mandatory) {
        this.is_mandatory = is_mandatory;
    }

    public int getRequest_times() {
        return this.request_times;
    }

    public void setRequest_times(int request_times) {
        this.request_times = request_times;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
