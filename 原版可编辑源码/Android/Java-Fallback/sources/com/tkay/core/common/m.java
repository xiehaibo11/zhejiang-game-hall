package com.tkay.core.common;

public final class m {
    static final int a = 1;
    private static final java.lang.String b = "InnerBroadcastManager";
    private static final boolean c = false;
    private static final java.lang.Object i = null;
    private static com.tkay.core.common.m j;
    private final android.content.Context d;
    private final java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.tkay.core.common.m.b>> e;
    private final java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.core.common.m.b>> f;
    private final java.util.ArrayList<com.tkay.core.common.m.a> g;
    private final android.os.Handler h;


    private static final class a {
        final android.content.Intent a;
        final java.util.ArrayList<com.tkay.core.common.m.b> b;

        a(android.content.Intent r1, java.util.ArrayList<com.tkay.core.common.m.b> r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    private static final class b {
        final android.content.IntentFilter a;
        final android.content.BroadcastReceiver b;
        boolean c;
        boolean d;

        b(android.content.IntentFilter r1, android.content.BroadcastReceiver r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public final java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r1 = 128(0x80, float:1.8E-43)
                r0.<init>(r1)
                java.lang.String r1 = "Receiver{"
                r0.append(r1)
                android.content.BroadcastReceiver r1 = r2.b
                r0.append(r1)
                java.lang.String r1 = " filter="
                r0.append(r1)
                android.content.IntentFilter r1 = r2.a
                r0.append(r1)
                boolean r1 = r2.d
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
            com.tkay.core.common.m.i = r0
            return
    }

    private m(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.e = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.f = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.g = r0
            r1.d = r2
            com.tkay.core.common.m$1 r0 = new com.tkay.core.common.m$1
            android.os.Looper r2 = r2.getMainLooper()
            r0.<init>(r1, r2)
            r1.h = r0
            return
    }

    public static com.tkay.core.common.m a(android.content.Context r2) {
            java.lang.Object r0 = com.tkay.core.common.m.i
            monitor-enter(r0)
            com.tkay.core.common.m r1 = com.tkay.core.common.m.j     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.tkay.core.common.m r1 = new com.tkay.core.common.m     // Catch: java.lang.Throwable -> L16
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            com.tkay.core.common.m.j = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.tkay.core.common.m r2 = com.tkay.core.common.m.j     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private void b(android.content.Intent r1) {
            r0 = this;
            boolean r1 = r0.a(r1)
            if (r1 == 0) goto L9
            r0.a()
        L9:
            return
    }

    final void a() {
            r10 = this;
        L0:
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.tkay.core.common.m$b>> r0 = r10.e
            monitor-enter(r0)
            java.util.ArrayList<com.tkay.core.common.m$a> r1 = r10.g     // Catch: java.lang.Throwable -> L44
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L44
            if (r1 > 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            return
        Ld:
            com.tkay.core.common.m$a[] r2 = new com.tkay.core.common.m.a[r1]     // Catch: java.lang.Throwable -> L44
            java.util.ArrayList<com.tkay.core.common.m$a> r3 = r10.g     // Catch: java.lang.Throwable -> L44
            r3.toArray(r2)     // Catch: java.lang.Throwable -> L44
            java.util.ArrayList<com.tkay.core.common.m$a> r3 = r10.g     // Catch: java.lang.Throwable -> L44
            r3.clear()     // Catch: java.lang.Throwable -> L44
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            r0 = 0
            r3 = r0
        L1c:
            if (r3 >= r1) goto L0
            r4 = r2[r3]
            java.util.ArrayList<com.tkay.core.common.m$b> r5 = r4.b
            int r5 = r5.size()
            r6 = r0
        L27:
            if (r6 >= r5) goto L41
            java.util.ArrayList<com.tkay.core.common.m$b> r7 = r4.b
            java.lang.Object r7 = r7.get(r6)
            com.tkay.core.common.m$b r7 = (com.tkay.core.common.m.b) r7
            boolean r8 = r7.d
            if (r8 != 0) goto L3e
            android.content.BroadcastReceiver r7 = r7.b
            android.content.Context r8 = r10.d
            android.content.Intent r9 = r4.a
            r7.onReceive(r8, r9)
        L3e:
            int r6 = r6 + 1
            goto L27
        L41:
            int r3 = r3 + 1
            goto L1c
        L44:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final void a(android.content.BroadcastReceiver r12) {
            r11 = this;
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.tkay.core.common.m$b>> r0 = r11.e
            monitor-enter(r0)
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.tkay.core.common.m$b>> r1 = r11.e     // Catch: java.lang.Throwable -> L62
            java.lang.Object r1 = r1.remove(r12)     // Catch: java.lang.Throwable -> L62
            java.util.ArrayList r1 = (java.util.ArrayList) r1     // Catch: java.lang.Throwable -> L62
            if (r1 == 0) goto L60
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L62
            r3 = 1
            int r2 = r2 - r3
        L13:
            if (r2 < 0) goto L60
            java.lang.Object r4 = r1.get(r2)     // Catch: java.lang.Throwable -> L62
            com.tkay.core.common.m$b r4 = (com.tkay.core.common.m.b) r4     // Catch: java.lang.Throwable -> L62
            r4.d = r3     // Catch: java.lang.Throwable -> L62
            r5 = 0
        L1e:
            android.content.IntentFilter r6 = r4.a     // Catch: java.lang.Throwable -> L62
            int r6 = r6.countActions()     // Catch: java.lang.Throwable -> L62
            if (r5 >= r6) goto L5d
            android.content.IntentFilter r6 = r4.a     // Catch: java.lang.Throwable -> L62
            java.lang.String r6 = r6.getAction(r5)     // Catch: java.lang.Throwable -> L62
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.core.common.m$b>> r7 = r11.f     // Catch: java.lang.Throwable -> L62
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Throwable -> L62
            java.util.ArrayList r7 = (java.util.ArrayList) r7     // Catch: java.lang.Throwable -> L62
            if (r7 == 0) goto L5a
            int r8 = r7.size()     // Catch: java.lang.Throwable -> L62
            int r8 = r8 - r3
        L3b:
            if (r8 < 0) goto L4f
            java.lang.Object r9 = r7.get(r8)     // Catch: java.lang.Throwable -> L62
            com.tkay.core.common.m$b r9 = (com.tkay.core.common.m.b) r9     // Catch: java.lang.Throwable -> L62
            android.content.BroadcastReceiver r10 = r9.b     // Catch: java.lang.Throwable -> L62
            if (r10 != r12) goto L4c
            r9.d = r3     // Catch: java.lang.Throwable -> L62
            r7.remove(r8)     // Catch: java.lang.Throwable -> L62
        L4c:
            int r8 = r8 + (-1)
            goto L3b
        L4f:
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L62
            if (r7 > 0) goto L5a
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.core.common.m$b>> r7 = r11.f     // Catch: java.lang.Throwable -> L62
            r7.remove(r6)     // Catch: java.lang.Throwable -> L62
        L5a:
            int r5 = r5 + 1
            goto L1e
        L5d:
            int r2 = r2 + (-1)
            goto L13
        L60:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L62
            return
        L62:
            r12 = move-exception
            monitor-exit(r0)
            throw r12
    }

    public final void a(android.content.BroadcastReceiver r7, android.content.IntentFilter r8) {
            r6 = this;
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.tkay.core.common.m$b>> r0 = r6.e
            monitor-enter(r0)
            com.tkay.core.common.m$b r1 = new com.tkay.core.common.m$b     // Catch: java.lang.Throwable -> L47
            r1.<init>(r8, r7)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.tkay.core.common.m$b>> r2 = r6.e     // Catch: java.lang.Throwable -> L47
            java.lang.Object r2 = r2.get(r7)     // Catch: java.lang.Throwable -> L47
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L47
            r3 = 1
            if (r2 != 0) goto L1d
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L47
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.tkay.core.common.m$b>> r4 = r6.e     // Catch: java.lang.Throwable -> L47
            r4.put(r7, r2)     // Catch: java.lang.Throwable -> L47
        L1d:
            r2.add(r1)     // Catch: java.lang.Throwable -> L47
            r7 = 0
        L21:
            int r2 = r8.countActions()     // Catch: java.lang.Throwable -> L47
            if (r7 >= r2) goto L45
            java.lang.String r2 = r8.getAction(r7)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.core.common.m$b>> r4 = r6.f     // Catch: java.lang.Throwable -> L47
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L47
            java.util.ArrayList r4 = (java.util.ArrayList) r4     // Catch: java.lang.Throwable -> L47
            if (r4 != 0) goto L3f
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L47
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.core.common.m$b>> r5 = r6.f     // Catch: java.lang.Throwable -> L47
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
            monitor-exit(r0)
            throw r7
    }

    public final boolean a(android.content.Intent r22) {
            r21 = this;
            r1 = r21
            r0 = r22
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.tkay.core.common.m$b>> r2 = r1.e
            monitor-enter(r2)
            java.lang.String r10 = r22.getAction()     // Catch: java.lang.Throwable -> L15a
            android.content.Context r3 = r1.d     // Catch: java.lang.Throwable -> L15a
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r11 = r0.resolveTypeIfNeeded(r3)     // Catch: java.lang.Throwable -> L15a
            android.net.Uri r12 = r22.getData()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r13 = r22.getScheme()     // Catch: java.lang.Throwable -> L15a
            java.util.Set r14 = r22.getCategories()     // Catch: java.lang.Throwable -> L15a
            int r3 = r22.getFlags()     // Catch: java.lang.Throwable -> L15a
            r3 = r3 & 8
            if (r3 == 0) goto L2c
            r16 = 1
            goto L2e
        L2c:
            r16 = 0
        L2e:
            if (r16 == 0) goto L53
            java.lang.String r3 = "LocalBroadcastManager"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            java.lang.String r5 = "Resolving type "
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L15a
            r4.append(r11)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r5 = " scheme "
            r4.append(r5)     // Catch: java.lang.Throwable -> L15a
            r4.append(r13)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r5 = " of intent "
            r4.append(r5)     // Catch: java.lang.Throwable -> L15a
            r4.append(r0)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L15a
            android.util.Log.v(r3, r4)     // Catch: java.lang.Throwable -> L15a
        L53:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.core.common.m$b>> r3 = r1.f     // Catch: java.lang.Throwable -> L15a
            java.lang.String r4 = r22.getAction()     // Catch: java.lang.Throwable -> L15a
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L15a
            r8 = r3
            java.util.ArrayList r8 = (java.util.ArrayList) r8     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto L157
            if (r16 == 0) goto L73
            java.lang.String r3 = "LocalBroadcastManager"
            java.lang.String r4 = "Action list: "
            java.lang.String r5 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r4 = r4.concat(r5)     // Catch: java.lang.Throwable -> L15a
            android.util.Log.v(r3, r4)     // Catch: java.lang.Throwable -> L15a
        L73:
            r3 = 0
            r7 = r3
            r6 = 0
        L76:
            int r3 = r8.size()     // Catch: java.lang.Throwable -> L15a
            if (r6 >= r3) goto L127
            java.lang.Object r3 = r8.get(r6)     // Catch: java.lang.Throwable -> L15a
            r5 = r3
            com.tkay.core.common.m$b r5 = (com.tkay.core.common.m.b) r5     // Catch: java.lang.Throwable -> L15a
            if (r16 == 0) goto L9a
            java.lang.String r3 = "LocalBroadcastManager"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = "Matching against filter "
            r4.<init>(r9)     // Catch: java.lang.Throwable -> L15a
            android.content.IntentFilter r9 = r5.a     // Catch: java.lang.Throwable -> L15a
            r4.append(r9)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L15a
            android.util.Log.v(r3, r4)     // Catch: java.lang.Throwable -> L15a
        L9a:
            boolean r3 = r5.c     // Catch: java.lang.Throwable -> L15a
            if (r3 == 0) goto Lb3
            if (r16 == 0) goto La7
            java.lang.String r3 = "LocalBroadcastManager"
            java.lang.String r4 = "  Filter's target already added"
            android.util.Log.v(r3, r4)     // Catch: java.lang.Throwable -> L15a
        La7:
            r17 = r6
            r19 = r8
            r18 = r10
            r20 = r11
            r11 = 1
            r10 = r7
            goto L11c
        Lb3:
            android.content.IntentFilter r3 = r5.a     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = "LocalBroadcastManager"
            r4 = r10
            r15 = r5
            r5 = r11
            r17 = r6
            r6 = r13
            r18 = r10
            r10 = r7
            r7 = r12
            r19 = r8
            r8 = r14
            r20 = r11
            r11 = 1
            int r3 = r3.match(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L15a
            if (r3 < 0) goto Lf5
            if (r16 == 0) goto Le6
            java.lang.String r4 = "LocalBroadcastManager"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            java.lang.String r6 = "  Filter matched!  match=0x"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r3 = java.lang.Integer.toHexString(r3)     // Catch: java.lang.Throwable -> L15a
            r5.append(r3)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L15a
            android.util.Log.v(r4, r3)     // Catch: java.lang.Throwable -> L15a
        Le6:
            if (r10 != 0) goto Lee
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L15a
            r7.<init>()     // Catch: java.lang.Throwable -> L15a
            goto Lef
        Lee:
            r7 = r10
        Lef:
            r7.add(r15)     // Catch: java.lang.Throwable -> L15a
            r15.c = r11     // Catch: java.lang.Throwable -> L15a
            goto L11d
        Lf5:
            if (r16 == 0) goto L11c
            r4 = -4
            if (r3 == r4) goto L10f
            r4 = -3
            if (r3 == r4) goto L10c
            r4 = -2
            if (r3 == r4) goto L109
            r4 = -1
            if (r3 == r4) goto L106
            java.lang.String r3 = "unknown reason"
            goto L111
        L106:
            java.lang.String r3 = "type"
            goto L111
        L109:
            java.lang.String r3 = "data"
            goto L111
        L10c:
            java.lang.String r3 = "action"
            goto L111
        L10f:
            java.lang.String r3 = "category"
        L111:
            java.lang.String r4 = "LocalBroadcastManager"
            java.lang.String r5 = "  Filter did not match: "
            java.lang.String r3 = r5.concat(r3)     // Catch: java.lang.Throwable -> L15a
            android.util.Log.v(r4, r3)     // Catch: java.lang.Throwable -> L15a
        L11c:
            r7 = r10
        L11d:
            int r6 = r17 + 1
            r10 = r18
            r8 = r19
            r11 = r20
            goto L76
        L127:
            r10 = r7
            r11 = 1
            if (r10 == 0) goto L157
            r3 = 0
        L12c:
            int r4 = r10.size()     // Catch: java.lang.Throwable -> L15a
            if (r3 >= r4) goto L13e
            java.lang.Object r4 = r10.get(r3)     // Catch: java.lang.Throwable -> L15a
            com.tkay.core.common.m$b r4 = (com.tkay.core.common.m.b) r4     // Catch: java.lang.Throwable -> L15a
            r5 = 0
            r4.c = r5     // Catch: java.lang.Throwable -> L15a
            int r3 = r3 + 1
            goto L12c
        L13e:
            java.util.ArrayList<com.tkay.core.common.m$a> r3 = r1.g     // Catch: java.lang.Throwable -> L15a
            com.tkay.core.common.m$a r4 = new com.tkay.core.common.m$a     // Catch: java.lang.Throwable -> L15a
            r4.<init>(r0, r10)     // Catch: java.lang.Throwable -> L15a
            r3.add(r4)     // Catch: java.lang.Throwable -> L15a
            android.os.Handler r0 = r1.h     // Catch: java.lang.Throwable -> L15a
            boolean r0 = r0.hasMessages(r11)     // Catch: java.lang.Throwable -> L15a
            if (r0 != 0) goto L155
            android.os.Handler r0 = r1.h     // Catch: java.lang.Throwable -> L15a
            r0.sendEmptyMessage(r11)     // Catch: java.lang.Throwable -> L15a
        L155:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15a
            return r11
        L157:
            monitor-exit(r2)
            r0 = 0
            return r0
        L15a:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
