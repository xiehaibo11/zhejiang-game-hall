package com.bianfeng.seppellita.db.action;

public class ByteDataTask extends com.bianfeng.seppellita.db.base.BaseDBTask {
    private static volatile com.bianfeng.seppellita.db.action.ByteDataTask task;
    private java.util.List<java.lang.String> delFailList;
    private boolean hasDb;

    private ByteDataTask() {
            r1 = this;
            r1.<init>()
            boolean r0 = r1.init()
            r1.hasDb = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.delFailList = r0
            return
    }

    public static com.bianfeng.seppellita.db.action.ByteDataTask getInstance() {
            com.bianfeng.seppellita.db.action.ByteDataTask r0 = com.bianfeng.seppellita.db.action.ByteDataTask.task
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.seppellita.db.action.ByteDataTask> r0 = com.bianfeng.seppellita.db.action.ByteDataTask.class
            monitor-enter(r0)
            com.bianfeng.seppellita.db.action.ByteDataTask r1 = com.bianfeng.seppellita.db.action.ByteDataTask.task     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.seppellita.db.action.ByteDataTask r1 = new com.bianfeng.seppellita.db.action.ByteDataTask     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.seppellita.db.action.ByteDataTask.task = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.seppellita.db.action.ByteDataTask r0 = com.bianfeng.seppellita.db.action.ByteDataTask.task
            return r0
    }

    public java.util.List<java.lang.String> deleteEvent(java.util.List<java.lang.String> r4) {
            r3 = this;
            java.util.List<java.lang.String> r0 = r3.delFailList
            r0.clear()
            boolean r0 = r3.hasDb
            if (r0 != 0) goto Lc
            java.util.List<java.lang.String> r4 = r3.delFailList
            return r4
        Lc:
            java.util.Iterator r4 = r4.iterator()
        L10:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L2f
            java.lang.Object r0 = r4.next()
            java.lang.String r0 = (java.lang.String) r0
            r3.delete(r0)     // Catch: java.lang.Exception -> L20
            goto L10
        L20:
            r1 = move-exception
            java.util.List<java.lang.String> r2 = r3.delFailList
            r2.add(r0)
            r1.printStackTrace()
            java.lang.String r0 = "ByteDataTask deleteEvent 异常"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            goto L10
        L2f:
            java.util.List<java.lang.String> r4 = r3.delFailList
            return r4
    }

    public synchronized void insert(java.lang.String r3, long r4, java.lang.String r6, com.bianfeng.seppellita.db.action.DBByteDataCallback r7) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.hasDb     // Catch: java.lang.Throwable -> L3d
            if (r0 != 0) goto La
            r7.onInsertFail()     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r2)
            return
        La:
            java.lang.Long r3 = r2.insert(r3, r4, r6)     // Catch: java.lang.Exception -> L34 java.lang.Throwable -> L3d
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L34 java.lang.Throwable -> L3d
            double r5 = (double) r3
            r0 = 4744542207431671808(0x41d7ffffffd00000, double:1.61061273525E9)
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 <= 0) goto L25
            com.bianfeng.seppellita.db.action.DelDbEnum r5 = com.bianfeng.seppellita.db.action.DelDbEnum.NEED_DEL     // Catch: java.lang.Throwable -> L3d
            int r5 = r5.ordinal()     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.putDelDb(r5)     // Catch: java.lang.Throwable -> L3d
        L25:
            r5 = -1
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 == 0) goto L2f
            r7.onInsertSuccess()     // Catch: java.lang.Throwable -> L3d
            goto L32
        L2f:
            r7.onInsertFail()     // Catch: java.lang.Throwable -> L3d
        L32:
            monitor-exit(r2)
            return
        L34:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L3d
            r7.onInsertFail()     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r2)
            return
        L3d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public void selectEvent(com.bianfeng.seppellita.db.action.DBByteDataCallback r3) {
            r2 = this;
            java.lang.String r0 = ""
            boolean r1 = r2.hasDb
            if (r1 != 0) goto La
            r3.onSelectNoData()
            return
        La:
            java.util.List r0 = r2.select(r0, r0)     // Catch: java.lang.Exception -> L1c
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L18
            r3.onSelectNoData()
            goto L1b
        L18:
            r3.onSelectSuccess(r0)
        L1b:
            return
        L1c:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    public java.util.List<java.lang.String> selectLastMonthEvent(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.hasDb
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.List r3 = r2.select(r3, r4)     // Catch: java.lang.Exception -> Lb
            return r3
        Lb:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }
}
