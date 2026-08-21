package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

/* JADX INFO: loaded from: classes.dex */
public class RequestEntity {
    int Request_times;
    boolean can_useful;
    String port;
    String type;
    String url;
    int weight;

    RequestEntity(String url, String type, String port, int weight, int Request_times, boolean can_useful) {
        this.url = url;
        this.type = type;
        this.port = port;
        this.weight = weight;
        this.Request_times = Request_times;
        this.can_useful = can_useful;
    }

    public String getUrl() {
        return this.url;
    }

    public void setUrl(String url) {
        this.url = url;
    }

    public String getType() {
        return this.type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String getPort() {
        return this.port;
    }

    public void setPort(String port) {
        this.port = port;
    }

    public int getRequest_times() {
        return this.Request_times;
    }

    public void setRequest_times(int request_times) {
        this.Request_times = request_times;
    }

    public boolean isCan_useful() {
        return this.can_useful;
    }

    public void setCan_useful(boolean can_useful) {
        this.can_useful = can_useful;
    }

    public int getWeight() {
        return this.weight;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
