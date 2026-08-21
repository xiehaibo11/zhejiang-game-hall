package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class RequestEntity {
    int Request_times;
    boolean can_useful;
    String port;
    String type;
    String url;
    int weight;

    RequestEntity(String r1, String r2, String r3, int r4, int r5, boolean r6) {
        this.url = r1;
        this.type = r2;
        this.port = r3;
        this.weight = r4;
        this.Request_times = r5;
        this.can_useful = r6;
    }

    public String getPort() {
        return this.port;
    }

    public int getRequest_times() {
        return this.Request_times;
    }

    public String getType() {
        return this.type;
    }

    public String getUrl() {
        return this.url;
    }

    public int getWeight() {
        return this.weight;
    }

    public boolean isCan_useful() {
        return this.can_useful;
    }

    public void setCan_useful(boolean r1) {
        this.can_useful = r1;
    }

    public void setPort(String r1) {
        this.port = r1;
    }

    public void setRequest_times(int r1) {
        this.Request_times = r1;
    }

    public void setType(String r1) {
        this.type = r1;
    }

    public void setUrl(String r1) {
        this.url = r1;
    }

    public void setWeight(int r1) {
        this.weight = r1;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
