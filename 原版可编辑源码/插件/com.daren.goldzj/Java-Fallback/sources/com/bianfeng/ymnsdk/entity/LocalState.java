package com.bianfeng.ymnsdk.entity;

public abstract class LocalState extends Config {
    protected boolean interacted;

    public LocalState() {
    }

    public boolean isInteracted() {
        return this.interacted;
    }

    public void setInteracted(boolean r1) {
        this.interacted = r1;
    }
}
