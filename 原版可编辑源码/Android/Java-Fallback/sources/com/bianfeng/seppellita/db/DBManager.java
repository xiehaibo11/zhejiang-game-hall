package com.bianfeng.seppellita.db;

public class DBManager {
    private volatile int MAXCOUNT;
    private com.bianfeng.seppellita.SepperllitaCallback callback;
    private com.bianfeng.seppellita.db.action.DBByteDataCallback dbByteDataCallback;
    private volatile java.util.concurrent.atomic.AtomicInteger delingTesk;
    private java.util.Deque<java.lang.Runnable> readyTaskQueue;
    private volatile java.util.concurrent.atomic.AtomicInteger runningTask;
    private volatile java.util.concurrent.atomic.AtomicInteger selectingTesk;
    private java.util.concurrent.ThreadPoolExecutor taskExector;



    public DBManager() {
            r9 = this;
            r9.<init>()
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r9.readyTaskQueue = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r9.delingTesk = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>(r1)
            r9.selectingTesk = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>(r1)
            r9.runningTask = r0
            r0 = 64
            r9.MAXCOUNT = r0
            com.bianfeng.seppellita.db.DBManager$1 r0 = new com.bianfeng.seppellita.db.DBManager$1
            r0.<init>(r9)
            r9.dbByteDataCallback = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r7 = new java.util.concurrent.SynchronousQueue
            r7.<init>()
            com.bianfeng.seppellita.db.DBManager$2 r8 = new com.bianfeng.seppellita.db.DBManager$2
            r8.<init>(r9)
            r2 = 0
            r3 = 2147483647(0x7fffffff, float:NaN)
            r4 = 5
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r9.taskExector = r0
            return
    }

    static com.bianfeng.seppellita.SepperllitaCallback access$000(com.bianfeng.seppellita.db.DBManager r0) {
            com.bianfeng.seppellita.SepperllitaCallback r0 = r0.callback
            return r0
    }

    static java.util.concurrent.atomic.AtomicInteger access$100(com.bianfeng.seppellita.db.DBManager r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.selectingTesk
            return r0
    }

    static java.util.concurrent.atomic.AtomicInteger access$200(com.bianfeng.seppellita.db.DBManager r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.delingTesk
            return r0
    }

    static void access$300(com.bianfeng.seppellita.db.DBManager r0) {
            r0.finish()
            return
    }

    static java.util.Deque access$400(com.bianfeng.seppellita.db.DBManager r0) {
            java.util.Deque<java.lang.Runnable> r0 = r0.readyTaskQueue
            return r0
    }

    private void finish() {
            r1 = this;
            java.lang.String r0 = "runningTaskQueue的大小--->"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.util.concurrent.atomic.AtomicInteger r0 = r1.runningTask
            r0.decrementAndGet()
            r1.taskExector()
            return
    }

    private void taskExector() {
            r5 = this;
            java.lang.String r0 = "taskExector--开始 遍历-->"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            monitor-enter(r5)
            java.util.Deque<java.lang.Runnable> r1 = r5.readyTaskQueue     // Catch: java.lang.Throwable -> La4
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> La4
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> La4
            if (r2 == 0) goto L8c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            com.bianfeng.seppellita.db.action.BaseDataTast r2 = (com.bianfeng.seppellita.db.action.BaseDataTast) r2     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            java.util.concurrent.atomic.AtomicInteger r3 = r5.runningTask     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            int r3 = r3.get()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            int r4 = r5.MAXCOUNT     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 < r4) goto L28
            goto L8c
        L28:
            com.bianfeng.seppellita.db.action.DataTaskEnum r3 = r2.getName()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            com.bianfeng.seppellita.db.action.DataTaskEnum r4 = com.bianfeng.seppellita.db.action.DataTaskEnum.SELECT     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 != r4) goto L3c
            java.util.concurrent.atomic.AtomicInteger r3 = r5.delingTesk     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            int r3 = r3.get()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 == 0) goto L3c
            r1.remove()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            goto L11
        L3c:
            com.bianfeng.seppellita.db.action.DataTaskEnum r3 = r2.getName()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            com.bianfeng.seppellita.db.action.DataTaskEnum r4 = com.bianfeng.seppellita.db.action.DataTaskEnum.DEL     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 != r4) goto L4d
            java.util.concurrent.atomic.AtomicInteger r3 = r5.selectingTesk     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            int r3 = r3.get()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 == 0) goto L4d
            goto L11
        L4d:
            com.bianfeng.seppellita.db.action.DataTaskEnum r3 = r2.getName()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            com.bianfeng.seppellita.db.action.DataTaskEnum r4 = com.bianfeng.seppellita.db.action.DataTaskEnum.DEL     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 != r4) goto L5a
            java.util.concurrent.atomic.AtomicInteger r3 = r5.delingTesk     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            r3.getAndIncrement()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
        L5a:
            com.bianfeng.seppellita.db.action.DataTaskEnum r3 = r2.getName()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            com.bianfeng.seppellita.db.action.DataTaskEnum r4 = com.bianfeng.seppellita.db.action.DataTaskEnum.SELECT     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 != r4) goto L6e
            java.util.concurrent.atomic.AtomicInteger r3 = r5.selectingTesk     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            int r3 = r3.get()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 == 0) goto L6e
            r1.remove()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            goto L11
        L6e:
            com.bianfeng.seppellita.db.action.DataTaskEnum r3 = r2.getName()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            com.bianfeng.seppellita.db.action.DataTaskEnum r4 = com.bianfeng.seppellita.db.action.DataTaskEnum.SELECT     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            if (r3 != r4) goto L7b
            java.util.concurrent.atomic.AtomicInteger r3 = r5.selectingTesk     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            r3.getAndIncrement()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
        L7b:
            r1.remove()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            r0.add(r2)     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            java.util.concurrent.atomic.AtomicInteger r2 = r5.runningTask     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            r2.getAndIncrement()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La4
            goto L11
        L87:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> La4
            goto L11
        L8c:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> La4
            java.util.Iterator r0 = r0.iterator()
        L91:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto La3
            java.lang.Object r1 = r0.next()
            java.lang.Runnable r1 = (java.lang.Runnable) r1
            java.util.concurrent.ThreadPoolExecutor r2 = r5.taskExector
            r2.execute(r1)
            goto L91
        La3:
            return
        La4:
            r0 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> La4
            throw r0
    }

    public void add(com.bianfeng.seppellita.bean.DataBean r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.Deque<java.lang.Runnable> r0 = r3.readyTaskQueue     // Catch: java.lang.Throwable -> L12
            com.bianfeng.seppellita.db.action.InsertByteDataTask r1 = new com.bianfeng.seppellita.db.action.InsertByteDataTask     // Catch: java.lang.Throwable -> L12
            com.bianfeng.seppellita.db.action.DBByteDataCallback r2 = r3.dbByteDataCallback     // Catch: java.lang.Throwable -> L12
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L12
            r0.add(r1)     // Catch: java.lang.Throwable -> L12
            r3.taskExector()     // Catch: java.lang.Throwable -> L12
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L12
            throw r4
    }

    public void del(java.util.List<java.lang.String> r4) {
            r3 = this;
            int r0 = r4.size()
            if (r0 != 0) goto L7
            return
        L7:
            monitor-enter(r3)
            java.util.Deque<java.lang.Runnable> r0 = r3.readyTaskQueue     // Catch: java.lang.Throwable -> L19
            com.bianfeng.seppellita.db.action.DelByteDataTask r1 = new com.bianfeng.seppellita.db.action.DelByteDataTask     // Catch: java.lang.Throwable -> L19
            com.bianfeng.seppellita.db.action.DBByteDataCallback r2 = r3.dbByteDataCallback     // Catch: java.lang.Throwable -> L19
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L19
            r0.add(r1)     // Catch: java.lang.Throwable -> L19
            r3.taskExector()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L19
            throw r4
    }

    public void delBeforeOneMouthData(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "delBeforeOneMouthData"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            monitor-enter(r2)
            java.util.Deque<java.lang.Runnable> r0 = r2.readyTaskQueue     // Catch: java.lang.Throwable -> L15
            com.bianfeng.seppellita.db.action.DelBeforeOneMouthDataTask r1 = new com.bianfeng.seppellita.db.action.DelBeforeOneMouthDataTask     // Catch: java.lang.Throwable -> L15
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L15
            r0.add(r1)     // Catch: java.lang.Throwable -> L15
            r2.taskExector()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15
            throw r3
    }

    public void selectDbLastMonthByteData(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = "selectDbLastMonthByteData"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            java.util.Deque<java.lang.Runnable> r0 = r3.readyTaskQueue     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            com.bianfeng.seppellita.db.action.SelectLastMonthByteDataTask r1 = new com.bianfeng.seppellita.db.action.SelectLastMonthByteDataTask     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            com.bianfeng.seppellita.db.action.DBByteDataCallback r2 = r3.dbByteDataCallback     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            r1.<init>(r2, r4, r5)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            r0.add(r1)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            r3.taskExector()     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            goto L18
        L16:
            r4 = move-exception
            goto L1a
        L18:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L16
            return
        L1a:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L16
            throw r4
    }

    public void setCallback(com.bianfeng.seppellita.SepperllitaCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }
}
