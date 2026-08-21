package com.bianfeng.seppellita.db.action;

public class DelByteDataTask extends com.bianfeng.seppellita.db.action.BaseDataTast {
    private com.bianfeng.seppellita.db.action.DBByteDataCallback callback;
    private java.util.List<java.lang.String> t;

    public DelByteDataTask(java.util.List<java.lang.String> r2, com.bianfeng.seppellita.db.action.DBByteDataCallback r3) {
            r1 = this;
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = com.bianfeng.seppellita.db.action.DataTaskEnum.DEL
            r1.<init>(r0)
            r1.t = r2
            r1.callback = r3
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.bianfeng.seppellita.db.action.ByteDataTask r0 = com.bianfeng.seppellita.db.action.ByteDataTask.getInstance()
            java.util.List<java.lang.String> r1 = r2.t
            java.util.List r0 = r0.deleteEvent(r1)
            int r0 = r0.size()
            if (r0 != 0) goto L18
            com.bianfeng.seppellita.db.action.DBByteDataCallback r0 = r2.callback
            java.util.List<java.lang.String> r1 = r2.t
            r0.onDelSuccess(r1)
            goto L1f
        L18:
            com.bianfeng.seppellita.db.action.DBByteDataCallback r0 = r2.callback
            java.util.List<java.lang.String> r1 = r2.t
            r0.onDeltFail(r1)
        L1f:
            com.bianfeng.seppellita.db.action.DBByteDataCallback r0 = r2.callback
            r0.onFinish()
            return
    }
}
