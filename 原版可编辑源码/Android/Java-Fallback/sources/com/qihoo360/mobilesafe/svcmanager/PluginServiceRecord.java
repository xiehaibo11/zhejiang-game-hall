package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginServiceRecord extends java.util.concurrent.locks.ReentrantLock {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = null;
    private static final long serialVersionUID = 1964598149985081920L;
    com.qihoo360.loader2.MP.PluginBinder mPluginBinder;
    final java.lang.String mPluginName;
    final java.lang.String mServiceName;
    java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord> processRecords;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class 1 {
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    class ProcessRecord implements android.os.IBinder.DeathRecipient {
        final android.os.IBinder deathMonitor;
        final int pid;
        private int refCount;
        final com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord this$0;

        private ProcessRecord(com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r1, int r2, android.os.IBinder r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.pid = r2
                r0.deathMonitor = r3
                r1 = 0
                r3.linkToDeath(r0, r1)     // Catch: android.os.RemoteException -> Le
                goto L1d
            Le:
                boolean r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.access$000()
                if (r1 == 0) goto L1d
                java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.access$100()
                java.lang.String r2 = "Error when linkToDeath: "
                android.util.Log.d(r1, r2)
            L1d:
                r1 = 1
                r0.refCount = r1
                return
        }

        ProcessRecord(com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r1, int r2, android.os.IBinder r3, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.1 r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        static int access$200(com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord r0) {
                int r0 = r0.decrementRef()
                return r0
        }

        static int access$300(com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord r0) {
                int r0 = r0.incrementRef()
                return r0
        }

        static int access$500(com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord r0) {
                int r0 = r0.refCount
                return r0
        }

        private int decrementRef() {
                r1 = this;
                int r0 = r1.refCount
                int r0 = r0 + (-1)
                r1.refCount = r0
                return r0
        }

        private int incrementRef() {
                r1 = this;
                int r0 = r1.refCount
                int r0 = r0 + 1
                r1.refCount = r0
                return r0
        }

        @Override
        public void binderDied() {
                r3 = this;
                com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r0 = r3.this$0
                java.lang.String r0 = r0.mPluginName
                com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r1 = r3.this$0
                java.lang.String r1 = r1.mServiceName
                int r2 = r3.pid
                com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.onRefProcessDied(r0, r1, r2)
                return
        }
    }

    static {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.DEBUG = r0
            if (r0 == 0) goto L9
            java.lang.String r0 = "PluginServiceRecord"
            goto Lf
        L9:
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.class
            java.lang.String r0 = r0.getSimpleName()
        Lf:
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.TAG = r0
            return
    }

    PluginServiceRecord(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 4
            r0.<init>(r1)
            r2.processRecords = r0
            r2.mPluginName = r3
            r2.mServiceName = r4
            return
    }

    static boolean access$000() {
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.DEBUG
            return r0
    }

    static java.lang.String access$100() {
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.TAG
            return r0
    }

    private void addNewRecordInternal(int r3, android.os.IBinder r4) {
            r2 = this;
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord r0 = r2.getProcessRecordInternal(r3)
            if (r0 == 0) goto La
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord.access$300(r0)
            goto L15
        La:
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord r0 = new com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord
            r1 = 0
            r0.<init>(r2, r3, r4, r1)
            java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord> r3 = r2.processRecords
            r3.add(r0)
        L15:
            boolean r3 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.DEBUG
            if (r3 == 0) goto L33
            java.lang.String r3 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "[addNewRecordInternal] remaining ref count: "
            r4.append(r0)
            int r0 = r2.getTotalRefCountInternal()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            android.util.Log.d(r3, r4)
        L33:
            return
    }

    private com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord getProcessRecordInternal(int r4) {
            r3 = this;
            java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord> r0 = r3.processRecords
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L17
            java.lang.Object r1 = r0.next()
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord r1 = (com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord) r1
            int r2 = r1.pid
            if (r2 != r4) goto L6
            return r1
        L17:
            r4 = 0
            return r4
    }

    private int getTotalRefCountInternal() {
            r3 = this;
            java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord> r0 = r3.processRecords
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        L7:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L19
            java.lang.Object r2 = r0.next()
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord r2 = (com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord) r2
            int r2 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord.access$500(r2)
            int r1 = r1 + r2
            goto L7
        L19:
            return r1
    }

    int decrementProcessRef(int r3) {
            r2 = this;
            r2.lock()
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord r3 = r2.getProcessRecordInternal(r3)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            if (r3 == 0) goto L14
            int r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.ProcessRecord.access$200(r3)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            if (r0 > 0) goto L14
            java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord> r0 = r2.processRecords     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r0.remove(r3)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
        L14:
            boolean r3 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.DEBUG     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            if (r3 == 0) goto L32
            java.lang.String r3 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.TAG     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r0.<init>()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            java.lang.String r1 = "[decrementProcessRef] remaining ref count: "
            r0.append(r1)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            int r1 = r2.getTotalRefCountInternal()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r0.append(r1)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            android.util.Log.d(r3, r0)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
        L32:
            int r3 = r2.getTotalRefCountInternal()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r2.unlock()
            return r3
        L3a:
            r3 = move-exception
            goto L4d
        L3c:
            r3 = move-exception
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.DEBUG     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L48
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.TAG     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "Error decrement reference: "
            android.util.Log.d(r0, r1, r3)     // Catch: java.lang.Throwable -> L3a
        L48:
            r2.unlock()
            r3 = -1
            return r3
        L4d:
            r2.unlock()
            throw r3
    }

    android.os.IBinder getService(int r5, android.os.IBinder r6) {
            r4 = this;
            r4.lock()
            r0 = 0
            com.qihoo360.loader2.MP$PluginBinder r1 = r4.mPluginBinder     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            if (r1 != 0) goto L14
            java.lang.String r1 = r4.mPluginName     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            java.lang.String r3 = r4.mServiceName     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            com.qihoo360.loader2.MP$PluginBinder r1 = com.qihoo360.loader2.MP.fetchPluginBinder(r1, r2, r3)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            r4.mPluginBinder = r1     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
        L14:
            com.qihoo360.loader2.MP$PluginBinder r1 = r4.mPluginBinder     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            if (r1 != 0) goto L1c
            r4.unlock()
            return r0
        L1c:
            r4.addNewRecordInternal(r5, r6)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            com.qihoo360.loader2.MP$PluginBinder r5 = r4.mPluginBinder     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            android.os.IBinder r5 = r5.binder     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            r4.unlock()
            return r5
        L27:
            r5 = move-exception
            goto L39
        L29:
            r5 = move-exception
            boolean r6 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.DEBUG     // Catch: java.lang.Throwable -> L27
            if (r6 == 0) goto L35
            java.lang.String r6 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.TAG     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "Error getting plugin service: "
            android.util.Log.d(r6, r1, r5)     // Catch: java.lang.Throwable -> L27
        L35:
            r4.unlock()
            return r0
        L39:
            r4.unlock()
            throw r5
    }

    boolean isServiceAlive() {
            r1 = this;
            com.qihoo360.loader2.MP$PluginBinder r0 = r1.mPluginBinder
            if (r0 == 0) goto L1e
            android.os.IBinder r0 = r0.binder
            if (r0 == 0) goto L1e
            com.qihoo360.loader2.MP$PluginBinder r0 = r1.mPluginBinder
            android.os.IBinder r0 = r0.binder
            boolean r0 = r0.isBinderAlive()
            if (r0 == 0) goto L1e
            com.qihoo360.loader2.MP$PluginBinder r0 = r1.mPluginBinder
            android.os.IBinder r0 = r0.binder
            boolean r0 = r0.pingBinder()
            if (r0 == 0) goto L1e
            r0 = 1
            goto L1f
        L1e:
            r0 = 0
        L1f:
            return r0
    }

    int refProcessDied(int r3) {
            r2 = this;
            r2.lock()
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord r3 = r2.getProcessRecordInternal(r3)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            if (r3 == 0) goto Le
            java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord$ProcessRecord> r0 = r2.processRecords     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            r0.remove(r3)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
        Le:
            int r3 = r2.getTotalRefCountInternal()     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L18
            r2.unlock()
            return r3
        L16:
            r3 = move-exception
            goto L29
        L18:
            r3 = move-exception
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.DEBUG     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L24
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord.TAG     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = "Error decrement reference: "
            android.util.Log.d(r0, r1, r3)     // Catch: java.lang.Throwable -> L16
        L24:
            r2.unlock()
            r3 = -1
            return r3
        L29:
            r2.unlock()
            throw r3
    }
}
