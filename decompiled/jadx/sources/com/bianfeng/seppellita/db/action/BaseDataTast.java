package com.bianfeng.seppellita.db.action;

/* JADX INFO: loaded from: classes.dex */
public abstract class BaseDataTast implements Runnable {
    private DataTaskEnum name;

    public BaseDataTast(DataTaskEnum dataTaskEnum) {
        this.name = dataTaskEnum;
    }

    public DataTaskEnum getName() {
        return this.name;
    }
}
