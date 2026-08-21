package com.bianfeng.ymnsdk.entity;

public abstract class LocalState extends Config {
    protected boolean interacted;

    public void setInteracted(boolean interacted) {
        this.interacted = interacted;
    }

    public boolean isInteracted() {
        return this.interacted;
    }
}
