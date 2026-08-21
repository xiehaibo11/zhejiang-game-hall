package com.bianfeng.seppellita.db.action;

public abstract class BaseDataTast implements Runnable {
    private DataTaskEnum name;

    public BaseDataTast(DataTaskEnum dataTaskEnum) {
        this.name = dataTaskEnum;
    }

    public DataTaskEnum getName() {
        return this.name;
    }
}
