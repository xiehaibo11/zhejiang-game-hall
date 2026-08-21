package com.bianfeng.ymnsdk.entity;

public abstract class LocalState extends Config {
    protected boolean interacted;

    public boolean isInteracted() {
        return this.interacted;
    }

    public void setInteracted(boolean z) {
        this.interacted = z;
    }
}
