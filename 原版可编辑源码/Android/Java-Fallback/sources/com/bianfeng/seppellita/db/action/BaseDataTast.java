package com.bianfeng.seppellita.db.action;

public abstract class BaseDataTast implements java.lang.Runnable {
    private com.bianfeng.seppellita.db.action.DataTaskEnum name;

    public BaseDataTast(com.bianfeng.seppellita.db.action.DataTaskEnum r1) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            return
    }

    public com.bianfeng.seppellita.db.action.DataTaskEnum getName() {
            r1 = this;
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = r1.name
            return r0
    }
}
