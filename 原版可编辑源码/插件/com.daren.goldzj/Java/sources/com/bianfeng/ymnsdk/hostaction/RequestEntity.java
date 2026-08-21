package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class RequestEntity {
    int Request_times;
    boolean can_useful;
    String port;
    String type;
    String url;
    int weight;

    RequestEntity(String str, String str2, String str3, int i, int i2, boolean z) {
        this.url = str;
        this.type = str2;
        this.port = str3;
        this.weight = i;
        this.Request_times = i2;
        this.can_useful = z;
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

    public void setCan_useful(boolean z) {
        this.can_useful = z;
    }

    public void setPort(String str) {
        this.port = str;
    }

    public void setRequest_times(int i) {
        this.Request_times = i;
    }

    public void setType(String str) {
        this.type = str;
    }

    public void setUrl(String str) {
        this.url = str;
    }

    public void setWeight(int i) {
        this.weight = i;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
