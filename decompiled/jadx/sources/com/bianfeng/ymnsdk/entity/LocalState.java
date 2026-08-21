package com.bianfeng.ymnsdk.entity;

/* JADX INFO: loaded from: classes.dex */
public abstract class LocalState extends Config {
    protected boolean interacted;

    public void setInteracted(boolean interacted) {
        this.interacted = interacted;
    }

    public boolean isInteracted() {
        return this.interacted;
    }
}
