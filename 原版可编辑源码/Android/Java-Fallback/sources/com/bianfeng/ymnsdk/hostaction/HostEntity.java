package com.bianfeng.ymnsdk.hostaction;

public class HostEntity {
    private int is_mandatory;
    private int request_times;
    private java.lang.String server_a;
    private int server_a_weight;
    private java.lang.String server_b;
    private int server_b_weight;

    public HostEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public HostEntity(java.lang.String r1, java.lang.String r2, int r3, int r4, int r5, int r6) {
            r0 = this;
            r0.<init>()
            r0.server_a = r1
            r0.server_b = r2
            r0.server_a_weight = r3
            r0.server_b_weight = r4
            r0.is_mandatory = r5
            r0.request_times = r6
            return
    }

    public int getIs_mandatory() {
            r1 = this;
            int r0 = r1.is_mandatory
            return r0
    }

    public int getRequest_times() {
            r1 = this;
            int r0 = r1.request_times
            return r0
    }

    public java.lang.String getServer_a() {
            r1 = this;
            java.lang.String r0 = r1.server_a
            return r0
    }

    public int getServer_a_weight() {
            r1 = this;
            int r0 = r1.server_a_weight
            return r0
    }

    public java.lang.String getServer_b() {
            r1 = this;
            java.lang.String r0 = r1.server_b
            return r0
    }

    public int getServer_b_weight() {
            r1 = this;
            int r0 = r1.server_b_weight
            return r0
    }

    public void setIs_mandatory(int r1) {
            r0 = this;
            r0.is_mandatory = r1
            return
    }

    public void setRequest_times(int r1) {
            r0 = this;
            r0.request_times = r1
            return
    }

    public void setServer_a(java.lang.String r1) {
            r0 = this;
            r0.server_a = r1
            return
    }

    public void setServer_a_weight(int r1) {
            r0 = this;
            r0.server_a_weight = r1
            return
    }

    public void setServer_b(java.lang.String r1) {
            r0 = this;
            r0.server_b = r1
            return
    }

    public void setServer_b_weight(int r1) {
            r0 = this;
            r0.server_b_weight = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
            return r0
    }
}
