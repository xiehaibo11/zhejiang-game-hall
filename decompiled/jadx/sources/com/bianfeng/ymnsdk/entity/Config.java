package com.bianfeng.ymnsdk.entity;

import com.google.gson.Gson;

/* JADX INFO: loaded from: classes.dex */
public class Config {
    public String toString() {
        Gson gson = new Gson();
        return gson.toJson(this);
    }
}
