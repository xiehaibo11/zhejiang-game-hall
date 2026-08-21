package com.bianfeng.ymnsdk.entity;

import com.google.gson.Gson;

public class Config {
    public String toString() {
        Gson gson = new Gson();
        return gson.toJson(this);
    }
}
