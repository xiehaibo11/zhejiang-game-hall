package com.bianfeng.ymnsdk.entity;

import com.google.gson.Gson;

public class Config {
    public Config() {
    }

    public String toString() {
        return new Gson().toJson(this);
    }
}
