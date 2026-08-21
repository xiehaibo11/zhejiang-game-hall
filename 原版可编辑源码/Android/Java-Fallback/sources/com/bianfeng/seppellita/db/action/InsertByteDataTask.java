package com.bianfeng.seppellita.db.action;

public class InsertByteDataTask extends com.bianfeng.seppellita.db.action.BaseDataTast {
    protected com.bianfeng.seppellita.bean.DataBean bean;
    protected com.bianfeng.seppellita.db.action.DBByteDataCallback callback;
    private volatile boolean test;

    public InsertByteDataTask(com.bianfeng.seppellita.bean.DataBean r2, com.bianfeng.seppellita.db.action.DBByteDataCallback r3) {
            r1 = this;
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = com.bianfeng.seppellita.db.action.DataTaskEnum.INSERT
            r1.<init>(r0)
            r0 = 0
            r1.test = r0
            r1.bean = r2
            r1.callback = r3
            return
    }

    public java.lang.String getBean() {
            r1 = this;
            com.bianfeng.seppellita.bean.DataBean r0 = r1.bean
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r0)
            return r0
    }

    @Override
    public void run() {
            r8 = this;
            java.lang.Class<com.bianfeng.seppellita.db.action.InsertByteDataTask> r0 = com.bianfeng.seppellita.db.action.InsertByteDataTask.class
            monitor-enter(r0)
            com.bianfeng.seppellita.bean.DataBean r1 = r8.bean     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            java.lang.String r3 = r1.getData()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            com.bianfeng.seppellita.bean.DataBean r1 = r8.bean     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            java.lang.String r6 = r1.getDataTime()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            com.bianfeng.seppellita.bean.DataBean r1 = r8.bean     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            long r4 = r1.getTime()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            com.bianfeng.seppellita.db.action.ByteDataTask r2 = com.bianfeng.seppellita.db.action.ByteDataTask.getInstance()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            com.bianfeng.seppellita.db.action.DBByteDataCallback r7 = r8.callback     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            r2.insert(r3, r4, r6, r7)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            com.bianfeng.seppellita.db.action.DBByteDataCallback r1 = r8.callback     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            r1.onFinish()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            goto L42
        L24:
            r1 = move-exception
            goto L44
        L26:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L24
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L24
            r2.<init>()     // Catch: java.lang.Throwable -> L24
            java.lang.String r3 = "InsertEventTask"
            r2.append(r3)     // Catch: java.lang.Throwable -> L24
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L24
            r2.append(r1)     // Catch: java.lang.Throwable -> L24
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L24
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r1)     // Catch: java.lang.Throwable -> L24
        L42:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            return
        L44:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            throw r1
    }
}
