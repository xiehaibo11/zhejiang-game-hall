package com.bianfeng.ymnsdk.hostaction;

public class RequestEntity {
    int Request_times;
    boolean can_useful;
    java.lang.String port;
    java.lang.String type;
    java.lang.String url;
    int weight;

    RequestEntity(java.lang.String r1, java.lang.String r2, java.lang.String r3, int r4, int r5, boolean r6) {
            r0 = this;
            r0.<init>()
            r0.url = r1
            r0.type = r2
            r0.port = r3
            r0.weight = r4
            r0.Request_times = r5
            r0.can_useful = r6
            return
    }

    public java.lang.String getPort() {
            r1 = this;
            java.lang.String r0 = r1.port
            return r0
    }

    public int getRequest_times() {
            r1 = this;
            int r0 = r1.Request_times
            return r0
    }

    public java.lang.String getType() {
            r1 = this;
            java.lang.String r0 = r1.type
            return r0
    }

    public java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = r1.url
            return r0
    }

    public int getWeight() {
            r1 = this;
            int r0 = r1.weight
            return r0
    }

    public boolean isCan_useful() {
            r1 = this;
            boolean r0 = r1.can_useful
            return r0
    }

    public void setCan_useful(boolean r1) {
            r0 = this;
            r0.can_useful = r1
            return
    }

    public void setPort(java.lang.String r1) {
            r0 = this;
            r0.port = r1
            return
    }

    public void setRequest_times(int r1) {
            r0 = this;
            r0.Request_times = r1
            return
    }

    public void setType(java.lang.String r1) {
            r0 = this;
            r0.type = r1
            return
    }

    public void setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return
    }

    public void setWeight(int r1) {
            r0 = this;
            r0.weight = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
            return r0
    }
}
