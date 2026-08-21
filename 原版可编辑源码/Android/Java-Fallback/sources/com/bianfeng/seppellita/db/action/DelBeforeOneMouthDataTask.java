package com.bianfeng.seppellita.db.action;

public class DelBeforeOneMouthDataTask extends com.bianfeng.seppellita.db.action.BaseDataTast {
    private java.lang.String t;

    public DelBeforeOneMouthDataTask(java.lang.String r2) {
            r1 = this;
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = com.bianfeng.seppellita.db.action.DataTaskEnum.DELBEFOREONEMOUTH
            r1.<init>(r0)
            r1.t = r2
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.bianfeng.seppellita.db.action.ByteDataTask r0 = com.bianfeng.seppellita.db.action.ByteDataTask.getInstance()     // Catch: java.lang.Exception -> L9
            java.lang.String r1 = r2.t     // Catch: java.lang.Exception -> L9
            r0.deleteBeforeData(r1)     // Catch: java.lang.Exception -> L9
        L9:
            return
    }
}
