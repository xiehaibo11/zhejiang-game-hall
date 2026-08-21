package com.ymnsdk.replugin.entity;

import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class GrayscaleCondition {
    List<String> device_id;
    List<String> ip;
    List<String> user_id;

    public List<String> getIp() {
        return this.ip;
    }

    public void setIp(List<String> list) {
        this.ip = list;
    }

    public List<String> getUser_id() {
        return this.user_id;
    }

    public void setUser_id(List<String> list) {
        this.user_id = list;
    }

    public List<String> getDevice_id() {
        return this.device_id;
    }

    public void setDevice_id(List<String> list) {
        this.device_id = list;
    }
}
