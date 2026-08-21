package android.support.v4.content;

public final class LocalBroadcastManager {
    private static final boolean DEBUG = false;
    static final int MSG_EXEC_PENDING_BROADCASTS = 1;
    private static final java.lang.String TAG = "LocalBroadcastManager";
    private static android.support.v4.content.LocalBroadcastManager mInstance;
    private static final java.lang.Object mLock = null;
    private final java.util.HashMap<java.lang.String, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord>> mActions;
    private final android.content.Context mAppContext;
    private final android.os.Handler mHandler;
    private final java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.BroadcastRecord> mPendingBroadcasts;
    private final java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord>> mReceivers;


    private static final class BroadcastRecord {
        final android.content.Intent intent;
        final java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord> receivers;

        BroadcastRecord(android.content.Intent r1, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord> r2) {
                r0 = this;
                r0.<init>()
                r0.intent = r1
                r0.receivers = r2
                return
        }
    }

    private static final class ReceiverRecord {
        boolean broadcasting;
        boolean dead;
        final android.content.IntentFilter filter;
        final android.content.BroadcastReceiver receiver;

        ReceiverRecord(android.content.IntentFilter r1, android.content.BroadcastReceiver r2) {
                r0 = this;
                r0.<init>()
                r0.filter = r1
                r0.receiver = r2
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r1 = 128(0x80, float:1.8E-43)
                r0.<init>(r1)
                java.lang.String r1 = "Receiver{"
                r0.append(r1)
                android.content.BroadcastReceiver r1 = r2.receiver
                r0.append(r1)
                java.lang.String r1 = " filter="
                r0.append(r1)
                android.content.IntentFilter r1 = r2.filter
                r0.append(r1)
                boolean r1 = r2.dead
                if (r1 == 0) goto L24
                java.lang.String r1 = " DEAD"
                r0.append(r1)
            L24:
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.content.LocalBroadcastManager.mLock = r0
            return
    }

    private LocalBroadcastManager(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mReceivers = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mActions = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mPendingBroadcasts = r0
            r1.mAppContext = r2
            android.support.v4.content.LocalBroadcastManager$1 r0 = new android.support.v4.content.LocalBroadcastManager$1
            android.os.Looper r2 = r2.getMainLooper()
            r0.<init>(r1, r2)
            r1.mHandler = r0
            return
    }

    @android.support.annotation.NonNull
    public static android.support.v4.content.LocalBroadcastManager getInstance(@android.support.annotation.NonNull android.content.Context r2) {
            java.lang.Object r0 = android.support.v4.content.LocalBroadcastManager.mLock
            monitor-enter(r0)
            android.support.v4.content.LocalBroadcastManager r1 = android.support.v4.content.LocalBroadcastManager.mInstance     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            android.support.v4.content.LocalBroadcastManager r1 = new android.support.v4.content.LocalBroadcastManager     // Catch: java.lang.Throwable -> L16
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            android.support.v4.content.LocalBroadcastManager.mInstance = r1     // Catch: java.lang.Throwable -> L16
        L12:
            android.support.v4.content.LocalBroadcastManager r2 = android.support.v4.content.LocalBroadcastManager.mInstance     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r2
    }

    void executePendingBroadcasts() {
            r9 = this;
        L0:
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r0 = r9.mReceivers
            monitor-enter(r0)
            java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$BroadcastRecord> r1 = r9.mPendingBroadcasts     // Catch: java.lang.Throwable -> L45
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L45
            if (r1 > 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            return
        Ld:
            android.support.v4.content.LocalBroadcastManager$BroadcastRecord[] r1 = new android.support.v4.content.LocalBroadcastManager.BroadcastRecord[r1]     // Catch: java.lang.Throwable -> L45
            java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$BroadcastRecord> r2 = r9.mPendingBroadcasts     // Catch: java.lang.Throwable -> L45
            r2.toArray(r1)     // Catch: java.lang.Throwable -> L45
            java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$BroadcastRecord> r2 = r9.mPendingBroadcasts     // Catch: java.lang.Throwable -> L45
            r2.clear()     // Catch: java.lang.Throwable -> L45
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            r0 = 0
            r2 = 0
        L1c:
            int r3 = r1.length
            if (r2 >= r3) goto L0
            r3 = r1[r2]
            java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord> r4 = r3.receivers
            int r4 = r4.size()
            r5 = 0
        L28:
            if (r5 >= r4) goto L42
            java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord> r6 = r3.receivers
            java.lang.Object r6 = r6.get(r5)
            android.support.v4.content.LocalBroadcastManager$ReceiverRecord r6 = (android.support.v4.content.LocalBroadcastManager.ReceiverRecord) r6
            boolean r7 = r6.dead
            if (r7 != 0) goto L3f
            android.content.BroadcastReceiver r6 = r6.receiver
            android.content.Context r7 = r9.mAppContext
            android.content.Intent r8 = r3.intent
            r6.onReceive(r7, r8)
        L3f:
            int r5 = r5 + 1
            goto L28
        L42:
            int r2 = r2 + 1
            goto L1c
        L45:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            throw r1
    }

    public void registerReceiver(@android.support.annotation.NonNull android.content.BroadcastReceiver r7, @android.support.annotation.NonNull android.content.IntentFilter r8) {
            r6 = this;
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r0 = r6.mReceivers
            monitor-enter(r0)
            android.support.v4.content.LocalBroadcastManager$ReceiverRecord r1 = new android.support.v4.content.LocalBroadcastManager$ReceiverRecord     // Catch: java.lang.Throwable -> L47
            r1.<init>(r8, r7)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r2 = r6.mReceivers     // Catch: java.lang.Throwable -> L47
            java.lang.Object r2 = r2.get(r7)     // Catch: java.lang.Throwable -> L47
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L47
            r3 = 1
            if (r2 != 0) goto L1d
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L47
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r4 = r6.mReceivers     // Catch: java.lang.Throwable -> L47
            r4.put(r7, r2)     // Catch: java.lang.Throwable -> L47
        L1d:
            r2.add(r1)     // Catch: java.lang.Throwable -> L47
            r7 = 0
        L21:
            int r2 = r8.countActions()     // Catch: java.lang.Throwable -> L47
            if (r7 >= r2) goto L45
            java.lang.String r2 = r8.getAction(r7)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<java.lang.String, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r4 = r6.mActions     // Catch: java.lang.Throwable -> L47
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L47
            java.util.ArrayList r4 = (java.util.ArrayList) r4     // Catch: java.lang.Throwable -> L47
            if (r4 != 0) goto L3f
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L47
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<java.lang.String, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r5 = r6.mActions     // Catch: java.lang.Throwable -> L47
            r5.put(r2, r4)     // Catch: java.lang.Throwable -> L47
        L3f:
            r4.add(r1)     // Catch: java.lang.Throwable -> L47
            int r7 = r7 + 1
            goto L21
        L45:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L47
            return
        L47:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L47
            throw r7
    }

    public boolean sendBroadcast(@android.support.annotation.NonNull android.content.Intent r22) {
            r21 = this;
            r1 = r21
            r0 = r22
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r2 = r1.mReceivers
            monitor-enter(r2)
            java.lang.String r10 = r22.getAction()     // Catch: java.lang.Throwable -> L175
            android.content.Context r3 = r1.mAppContext     // Catch: java.lang.Throwable -> L175
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L175
            java.lang.String r11 = r0.resolveTypeIfNeeded(r3)     // Catch: java.lang.Throwable -> L175
            android.net.Uri r12 = r22.getData()     // Catch: java.lang.Throwable -> L175
            java.lang.String r13 = r22.getScheme()     // Catch: java.lang.Throwable -> L175
            java.util.Set r14 = r22.getCategories()     // Catch: java.lang.Throwable -> L175
            int r3 = r22.getFlags()     // Catch: java.lang.Throwable -> L175
            r3 = r3 & 8
            if (r3 == 0) goto L2c
            r16 = 1
            goto L2e
        L2c:
            r16 = 0
        L2e:
            if (r16 == 0) goto L56
            java.lang.String r3 = "LocalBroadcastManager"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L175
            r4.<init>()     // Catch: java.lang.Throwable -> L175
            java.lang.String r5 = "Resolving type "
            r4.append(r5)     // Catch: java.lang.Throwable -> L175
            r4.append(r11)     // Catch: java.lang.Throwable -> L175
            java.lang.String r5 = " scheme "
            r4.append(r5)     // Catch: java.lang.Throwable -> L175
            r4.append(r13)     // Catch: java.lang.Throwable -> L175
            java.lang.String r5 = " of intent "
            r4.append(r5)     // Catch: java.lang.Throwable -> L175
            r4.append(r0)     // Catch: java.lang.Throwable -> L175
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L175
            android.util.Log.v(r3, r4)     // Catch: java.lang.Throwable -> L175
        L56:
            java.util.HashMap<java.lang.String, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r3 = r1.mActions     // Catch: java.lang.Throwable -> L175
            java.lang.String r4 = r22.getAction()     // Catch: java.lang.Throwable -> L175
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L175
            r8 = r3
            java.util.ArrayList r8 = (java.util.ArrayList) r8     // Catch: java.lang.Throwable -> L175
            if (r8 == 0) goto L172
            if (r16 == 0) goto L7d
            java.lang.String r3 = "LocalBroadcastManager"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L175
            r4.<init>()     // Catch: java.lang.Throwable -> L175
            java.lang.String r5 = "Action list: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L175
            r4.append(r8)     // Catch: java.lang.Throwable -> L175
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L175
            android.util.Log.v(r3, r4)     // Catch: java.lang.Throwable -> L175
        L7d:
            r3 = 0
            r6 = r3
            r7 = 0
        L80:
            int r3 = r8.size()     // Catch: java.lang.Throwable -> L175
            if (r7 >= r3) goto L142
            java.lang.Object r3 = r8.get(r7)     // Catch: java.lang.Throwable -> L175
            r5 = r3
            android.support.v4.content.LocalBroadcastManager$ReceiverRecord r5 = (android.support.v4.content.LocalBroadcastManager.ReceiverRecord) r5     // Catch: java.lang.Throwable -> L175
            if (r16 == 0) goto La7
            java.lang.String r3 = "LocalBroadcastManager"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L175
            r4.<init>()     // Catch: java.lang.Throwable -> L175
            java.lang.String r9 = "Matching against filter "
            r4.append(r9)     // Catch: java.lang.Throwable -> L175
            android.content.IntentFilter r9 = r5.filter     // Catch: java.lang.Throwable -> L175
            r4.append(r9)     // Catch: java.lang.Throwable -> L175
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L175
            android.util.Log.v(r3, r4)     // Catch: java.lang.Throwable -> L175
        La7:
            boolean r3 = r5.broadcasting     // Catch: java.lang.Throwable -> L175
            if (r3 == 0) goto Lc0
            if (r16 == 0) goto Lb4
            java.lang.String r3 = "LocalBroadcastManager"
            java.lang.String r4 = "  Filter's target already added"
            android.util.Log.v(r3, r4)     // Catch: java.lang.Throwable -> L175
        Lb4:
            r18 = r7
            r19 = r8
            r17 = r10
            r20 = r11
            r11 = 1
            r10 = r6
            goto L137
        Lc0:
            android.content.IntentFilter r3 = r5.filter     // Catch: java.lang.Throwable -> L175
            java.lang.String r9 = "LocalBroadcastManager"
            r4 = r10
            r15 = r5
            r5 = r11
            r17 = r10
            r10 = r6
            r6 = r13
            r18 = r7
            r7 = r12
            r19 = r8
            r8 = r14
            r20 = r11
            r11 = 1
            int r3 = r3.match(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L175
            if (r3 < 0) goto L105
            if (r16 == 0) goto Lf6
            java.lang.String r4 = "LocalBroadcastManager"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L175
            r5.<init>()     // Catch: java.lang.Throwable -> L175
            java.lang.String r6 = "  Filter matched!  match=0x"
            r5.append(r6)     // Catch: java.lang.Throwable -> L175
            java.lang.String r3 = java.lang.Integer.toHexString(r3)     // Catch: java.lang.Throwable -> L175
            r5.append(r3)     // Catch: java.lang.Throwable -> L175
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L175
            android.util.Log.v(r4, r3)     // Catch: java.lang.Throwable -> L175
        Lf6:
            if (r10 != 0) goto Lfe
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L175
            r6.<init>()     // Catch: java.lang.Throwable -> L175
            goto Lff
        Lfe:
            r6 = r10
        Lff:
            r6.add(r15)     // Catch: java.lang.Throwable -> L175
            r15.broadcasting = r11     // Catch: java.lang.Throwable -> L175
            goto L138
        L105:
            if (r16 == 0) goto L137
            r4 = -4
            if (r3 == r4) goto L11f
            r4 = -3
            if (r3 == r4) goto L11c
            r4 = -2
            if (r3 == r4) goto L119
            r4 = -1
            if (r3 == r4) goto L116
            java.lang.String r3 = "unknown reason"
            goto L121
        L116:
            java.lang.String r3 = "type"
            goto L121
        L119:
            java.lang.String r3 = "data"
            goto L121
        L11c:
            java.lang.String r3 = "action"
            goto L121
        L11f:
            java.lang.String r3 = "category"
        L121:
            java.lang.String r4 = "LocalBroadcastManager"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L175
            r5.<init>()     // Catch: java.lang.Throwable -> L175
            java.lang.String r6 = "  Filter did not match: "
            r5.append(r6)     // Catch: java.lang.Throwable -> L175
            r5.append(r3)     // Catch: java.lang.Throwable -> L175
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L175
            android.util.Log.v(r4, r3)     // Catch: java.lang.Throwable -> L175
        L137:
            r6 = r10
        L138:
            int r7 = r18 + 1
            r10 = r17
            r8 = r19
            r11 = r20
            goto L80
        L142:
            r10 = r6
            r11 = 1
            if (r10 == 0) goto L172
            r3 = 0
        L147:
            int r4 = r10.size()     // Catch: java.lang.Throwable -> L175
            if (r3 >= r4) goto L159
            java.lang.Object r4 = r10.get(r3)     // Catch: java.lang.Throwable -> L175
            android.support.v4.content.LocalBroadcastManager$ReceiverRecord r4 = (android.support.v4.content.LocalBroadcastManager.ReceiverRecord) r4     // Catch: java.lang.Throwable -> L175
            r5 = 0
            r4.broadcasting = r5     // Catch: java.lang.Throwable -> L175
            int r3 = r3 + 1
            goto L147
        L159:
            java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$BroadcastRecord> r3 = r1.mPendingBroadcasts     // Catch: java.lang.Throwable -> L175
            android.support.v4.content.LocalBroadcastManager$BroadcastRecord r4 = new android.support.v4.content.LocalBroadcastManager$BroadcastRecord     // Catch: java.lang.Throwable -> L175
            r4.<init>(r0, r10)     // Catch: java.lang.Throwable -> L175
            r3.add(r4)     // Catch: java.lang.Throwable -> L175
            android.os.Handler r0 = r1.mHandler     // Catch: java.lang.Throwable -> L175
            boolean r0 = r0.hasMessages(r11)     // Catch: java.lang.Throwable -> L175
            if (r0 != 0) goto L170
            android.os.Handler r0 = r1.mHandler     // Catch: java.lang.Throwable -> L175
            r0.sendEmptyMessage(r11)     // Catch: java.lang.Throwable -> L175
        L170:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L175
            return r11
        L172:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L175
            r0 = 0
            return r0
        L175:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L175
            throw r0
    }

    public void sendBroadcastSync(@android.support.annotation.NonNull android.content.Intent r1) {
            r0 = this;
            boolean r1 = r0.sendBroadcast(r1)
            if (r1 == 0) goto L9
            r0.executePendingBroadcasts()
        L9:
            return
    }

    public void unregisterReceiver(@android.support.annotation.NonNull android.content.BroadcastReceiver r12) {
            r11 = this;
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r0 = r11.mReceivers
            monitor-enter(r0)
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r1 = r11.mReceivers     // Catch: java.lang.Throwable -> L64
            java.lang.Object r1 = r1.remove(r12)     // Catch: java.lang.Throwable -> L64
            java.util.ArrayList r1 = (java.util.ArrayList) r1     // Catch: java.lang.Throwable -> L64
            if (r1 != 0) goto Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L64
            return
        Lf:
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L64
            r3 = 1
            int r2 = r2 - r3
        L15:
            if (r2 < 0) goto L62
            java.lang.Object r4 = r1.get(r2)     // Catch: java.lang.Throwable -> L64
            android.support.v4.content.LocalBroadcastManager$ReceiverRecord r4 = (android.support.v4.content.LocalBroadcastManager.ReceiverRecord) r4     // Catch: java.lang.Throwable -> L64
            r4.dead = r3     // Catch: java.lang.Throwable -> L64
            r5 = 0
        L20:
            android.content.IntentFilter r6 = r4.filter     // Catch: java.lang.Throwable -> L64
            int r6 = r6.countActions()     // Catch: java.lang.Throwable -> L64
            if (r5 >= r6) goto L5f
            android.content.IntentFilter r6 = r4.filter     // Catch: java.lang.Throwable -> L64
            java.lang.String r6 = r6.getAction(r5)     // Catch: java.lang.Throwable -> L64
            java.util.HashMap<java.lang.String, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r7 = r11.mActions     // Catch: java.lang.Throwable -> L64
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Throwable -> L64
            java.util.ArrayList r7 = (java.util.ArrayList) r7     // Catch: java.lang.Throwable -> L64
            if (r7 == 0) goto L5c
            int r8 = r7.size()     // Catch: java.lang.Throwable -> L64
            int r8 = r8 - r3
        L3d:
            if (r8 < 0) goto L51
            java.lang.Object r9 = r7.get(r8)     // Catch: java.lang.Throwable -> L64
            android.support.v4.content.LocalBroadcastManager$ReceiverRecord r9 = (android.support.v4.content.LocalBroadcastManager.ReceiverRecord) r9     // Catch: java.lang.Throwable -> L64
            android.content.BroadcastReceiver r10 = r9.receiver     // Catch: java.lang.Throwable -> L64
            if (r10 != r12) goto L4e
            r9.dead = r3     // Catch: java.lang.Throwable -> L64
            r7.remove(r8)     // Catch: java.lang.Throwable -> L64
        L4e:
            int r8 = r8 + (-1)
            goto L3d
        L51:
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L64
            if (r7 > 0) goto L5c
            java.util.HashMap<java.lang.String, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord>> r7 = r11.mActions     // Catch: java.lang.Throwable -> L64
            r7.remove(r6)     // Catch: java.lang.Throwable -> L64
        L5c:
            int r5 = r5 + 1
            goto L20
        L5f:
            int r2 = r2 + (-1)
            goto L15
        L62:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L64
            return
        L64:
            r12 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L64
            throw r12
    }
}
