package com.bianfeng.seppellita.db.action;

public class SelectLastMonthByteDataTask extends com.bianfeng.seppellita.db.action.BaseDataTast {
    private com.bianfeng.seppellita.db.action.DBByteDataCallback callback;
    private java.lang.String fromdata;
    private java.lang.String todata;

    public SelectLastMonthByteDataTask(com.bianfeng.seppellita.db.action.DBByteDataCallback r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = com.bianfeng.seppellita.db.action.DataTaskEnum.SELECT
            r1.<init>(r0)
            r1.callback = r2
            r1.fromdata = r3
            r1.todata = r4
            return
    }

    @Override
    public void run() {
            r4 = this;
            java.lang.String r0 = "SelectLastMonthByteDataTask"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            com.bianfeng.seppellita.db.action.ByteDataTask r1 = com.bianfeng.seppellita.db.action.ByteDataTask.getInstance()
            java.lang.String r2 = r4.fromdata
            java.lang.String r3 = r4.todata
            java.util.List r1 = r1.selectLastMonthEvent(r2, r3)
            if (r1 == 0) goto L36
            int r2 = r1.size()
            if (r2 != 0) goto L1a
            goto L36
        L1a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            int r0 = r1.size()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            com.bianfeng.seppellita.db.action.DBByteDataCallback r0 = r4.callback
            r0.onSelectSuccess(r1)
            goto L3b
        L36:
            com.bianfeng.seppellita.db.action.DBByteDataCallback r0 = r4.callback
            r0.onSelectNoData()
        L3b:
            com.bianfeng.seppellita.db.action.DBByteDataCallback r0 = r4.callback
            r0.onFinish()
            return
    }
}
