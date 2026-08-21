package com.igexin.push.core.bean;

public class f extends BaseAction {
    private String a;

    @Override
    public String getActionId() {
        return this.a;
    }

    @Override
    public void setActionId(String str) {
        this.a = str;
    }
}
