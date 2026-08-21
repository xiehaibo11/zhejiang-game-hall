package com.sigmob.sdk.base.common;

public class ac {
    static final int a = 1;
    private static final java.lang.String b = "LocalBroadcastManager";
    private static final boolean c = false;
    private static final java.lang.Object d = null;
    private static com.sigmob.sdk.base.common.ac e;
    private final android.content.Context f;
    private final java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.sigmob.sdk.base.common.ac.b>> g;
    private final java.util.HashMap<java.lang.String, java.util.ArrayList<com.sigmob.sdk.base.common.ac.b>> h;
    private final java.util.ArrayList<com.sigmob.sdk.base.common.ac.a> i;
    private final android.os.Handler j;


    private static final class a {
        final android.content.Intent a;
        final java.util.ArrayList<com.sigmob.sdk.base.common.ac.b> b;

        a(android.content.Intent r1, java.util.ArrayList<com.sigmob.sdk.base.common.ac.b> r2) {
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

        public java.lang.String toString() {
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
            com.sigmob.sdk.base.common.ac.d = r0
            return
    }

    private ac(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.g = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.h = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.i = r0
            r1.f = r2
            com.sigmob.sdk.base.common.ac$1 r0 = new com.sigmob.sdk.base.common.ac$1
            android.os.Looper r2 = r2.getMainLooper()
            r0.<init>(r1, r2)
            r1.j = r0
            return
    }

    public static com.sigmob.sdk.base.common.ac a(android.content.Context r2) {
            java.lang.Object r0 = com.sigmob.sdk.base.common.ac.d
            monitor-enter(r0)
            com.sigmob.sdk.base.common.ac r1 = com.sigmob.sdk.base.common.ac.e     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.sigmob.sdk.base.common.ac r1 = new com.sigmob.sdk.base.common.ac     // Catch: java.lang.Throwable -> L16
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            com.sigmob.sdk.base.common.ac.e = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.sigmob.sdk.base.common.ac r2 = com.sigmob.sdk.base.common.ac.e     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r2
    }

    void a() {
            r10 = this;
        L0:
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r0 = r10.g
            monitor-enter(r0)
            java.util.ArrayList<com.sigmob.sdk.base.common.ac$a> r1 = r10.i     // Catch: java.lang.Throwable -> L44
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L44
            if (r1 > 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            return
        Ld:
            com.sigmob.sdk.base.common.ac$a[] r2 = new com.sigmob.sdk.base.common.ac.a[r1]     // Catch: java.lang.Throwable -> L44
            java.util.ArrayList<com.sigmob.sdk.base.common.ac$a> r3 = r10.i     // Catch: java.lang.Throwable -> L44
            r3.toArray(r2)     // Catch: java.lang.Throwable -> L44
            java.util.ArrayList<com.sigmob.sdk.base.common.ac$a> r3 = r10.i     // Catch: java.lang.Throwable -> L44
            r3.clear()     // Catch: java.lang.Throwable -> L44
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            r0 = 0
            r3 = r0
        L1c:
            if (r3 >= r1) goto L0
            r4 = r2[r3]
            java.util.ArrayList<com.sigmob.sdk.base.common.ac$b> r5 = r4.b
            int r5 = r5.size()
            r6 = r0
        L27:
            if (r6 >= r5) goto L41
            java.util.ArrayList<com.sigmob.sdk.base.common.ac$b> r7 = r4.b
            java.lang.Object r7 = r7.get(r6)
            com.sigmob.sdk.base.common.ac$b r7 = (com.sigmob.sdk.base.common.ac.b) r7
            boolean r8 = r7.d
            if (r8 != 0) goto L3e
            android.content.BroadcastReceiver r7 = r7.b
            android.content.Context r8 = r10.f
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
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            throw r1
    }

    public void a(android.content.BroadcastReceiver r12) {
            r11 = this;
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r0 = r11.g
            monitor-enter(r0)
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r1 = r11.g     // Catch: java.lang.Throwable -> L64
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
            com.sigmob.sdk.base.common.ac$b r4 = (com.sigmob.sdk.base.common.ac.b) r4     // Catch: java.lang.Throwable -> L64
            r4.d = r3     // Catch: java.lang.Throwable -> L64
            r5 = 0
        L20:
            android.content.IntentFilter r6 = r4.a     // Catch: java.lang.Throwable -> L64
            int r6 = r6.countActions()     // Catch: java.lang.Throwable -> L64
            if (r5 >= r6) goto L5f
            android.content.IntentFilter r6 = r4.a     // Catch: java.lang.Throwable -> L64
            java.lang.String r6 = r6.getAction(r5)     // Catch: java.lang.Throwable -> L64
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r7 = r11.h     // Catch: java.lang.Throwable -> L64
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Throwable -> L64
            java.util.ArrayList r7 = (java.util.ArrayList) r7     // Catch: java.lang.Throwable -> L64
            if (r7 == 0) goto L5c
            int r8 = r7.size()     // Catch: java.lang.Throwable -> L64
            int r8 = r8 - r3
        L3d:
            if (r8 < 0) goto L51
            java.lang.Object r9 = r7.get(r8)     // Catch: java.lang.Throwable -> L64
            com.sigmob.sdk.base.common.ac$b r9 = (com.sigmob.sdk.base.common.ac.b) r9     // Catch: java.lang.Throwable -> L64
            android.content.BroadcastReceiver r10 = r9.b     // Catch: java.lang.Throwable -> L64
            if (r10 != r12) goto L4e
            r9.d = r3     // Catch: java.lang.Throwable -> L64
            r7.remove(r8)     // Catch: java.lang.Throwable -> L64
        L4e:
            int r8 = r8 + (-1)
            goto L3d
        L51:
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L64
            if (r7 > 0) goto L5c
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r7 = r11.h     // Catch: java.lang.Throwable -> L64
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

    public void a(android.content.BroadcastReceiver r7, android.content.IntentFilter r8) {
            r6 = this;
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r0 = r6.g
            monitor-enter(r0)
            com.sigmob.sdk.base.common.ac$b r1 = new com.sigmob.sdk.base.common.ac$b     // Catch: java.lang.Throwable -> L47
            r1.<init>(r8, r7)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r2 = r6.g     // Catch: java.lang.Throwable -> L47
            java.lang.Object r2 = r2.get(r7)     // Catch: java.lang.Throwable -> L47
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L47
            r3 = 1
            if (r2 != 0) goto L1d
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L47
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r4 = r6.g     // Catch: java.lang.Throwable -> L47
            r4.put(r7, r2)     // Catch: java.lang.Throwable -> L47
        L1d:
            r2.add(r1)     // Catch: java.lang.Throwable -> L47
            r7 = 0
        L21:
            int r2 = r8.countActions()     // Catch: java.lang.Throwable -> L47
            if (r7 >= r2) goto L45
            java.lang.String r2 = r8.getAction(r7)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r4 = r6.h     // Catch: java.lang.Throwable -> L47
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L47
            java.util.ArrayList r4 = (java.util.ArrayList) r4     // Catch: java.lang.Throwable -> L47
            if (r4 != 0) goto L3f
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L47
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L47
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r5 = r6.h     // Catch: java.lang.Throwable -> L47
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

    public boolean a(android.content.Intent r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.a(r2, r0)
            return r2
    }

    public boolean a(android.content.Intent r23, int r24) {
            r22 = this;
            r1 = r22
            r0 = r23
            r2 = r24
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r3 = r1.g
            monitor-enter(r3)
            java.lang.String r11 = r23.getAction()     // Catch: java.lang.Throwable -> L187
            android.content.Context r4 = r1.f     // Catch: java.lang.Throwable -> L187
            android.content.ContentResolver r4 = r4.getContentResolver()     // Catch: java.lang.Throwable -> L187
            java.lang.String r12 = r0.resolveTypeIfNeeded(r4)     // Catch: java.lang.Throwable -> L187
            android.net.Uri r13 = r23.getData()     // Catch: java.lang.Throwable -> L187
            java.lang.String r14 = r23.getScheme()     // Catch: java.lang.Throwable -> L187
            java.util.Set r15 = r23.getCategories()     // Catch: java.lang.Throwable -> L187
            int r4 = r23.getFlags()     // Catch: java.lang.Throwable -> L187
            r4 = r4 & 8
            if (r4 == 0) goto L2e
            r16 = 1
            goto L30
        L2e:
            r16 = 0
        L30:
            if (r16 == 0) goto L58
            java.lang.String r4 = "LocalBroadcastManager"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L187
            r5.<init>()     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = "Resolving type "
            r5.append(r6)     // Catch: java.lang.Throwable -> L187
            r5.append(r12)     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = " scheme "
            r5.append(r6)     // Catch: java.lang.Throwable -> L187
            r5.append(r14)     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = " of intent "
            r5.append(r6)     // Catch: java.lang.Throwable -> L187
            r5.append(r0)     // Catch: java.lang.Throwable -> L187
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L187
            android.util.Log.v(r4, r5)     // Catch: java.lang.Throwable -> L187
        L58:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.sigmob.sdk.base.common.ac$b>> r4 = r1.h     // Catch: java.lang.Throwable -> L187
            java.lang.String r5 = r23.getAction()     // Catch: java.lang.Throwable -> L187
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L187
            r8 = r4
            java.util.ArrayList r8 = (java.util.ArrayList) r8     // Catch: java.lang.Throwable -> L187
            if (r8 == 0) goto L184
            if (r16 == 0) goto L7f
            java.lang.String r4 = "LocalBroadcastManager"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L187
            r5.<init>()     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = "Action list: "
            r5.append(r6)     // Catch: java.lang.Throwable -> L187
            r5.append(r8)     // Catch: java.lang.Throwable -> L187
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L187
            android.util.Log.v(r4, r5)     // Catch: java.lang.Throwable -> L187
        L7f:
            r4 = 0
            r7 = r4
            r6 = 0
        L82:
            int r4 = r8.size()     // Catch: java.lang.Throwable -> L187
            if (r6 >= r4) goto L14b
            java.lang.Object r4 = r8.get(r6)     // Catch: java.lang.Throwable -> L187
            r5 = r4
            com.sigmob.sdk.base.common.ac$b r5 = (com.sigmob.sdk.base.common.ac.b) r5     // Catch: java.lang.Throwable -> L187
            if (r16 == 0) goto La9
            java.lang.String r4 = "LocalBroadcastManager"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L187
            r9.<init>()     // Catch: java.lang.Throwable -> L187
            java.lang.String r10 = "Matching against filter "
            r9.append(r10)     // Catch: java.lang.Throwable -> L187
            android.content.IntentFilter r10 = r5.a     // Catch: java.lang.Throwable -> L187
            r9.append(r10)     // Catch: java.lang.Throwable -> L187
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L187
            android.util.Log.v(r4, r9)     // Catch: java.lang.Throwable -> L187
        La9:
            boolean r4 = r5.c     // Catch: java.lang.Throwable -> L187
            if (r4 == 0) goto Lc4
            if (r16 == 0) goto Lb6
            java.lang.String r4 = "LocalBroadcastManager"
            java.lang.String r5 = "  Filter's target already added"
            android.util.Log.v(r4, r5)     // Catch: java.lang.Throwable -> L187
        Lb6:
            r18 = r6
            r20 = r8
            r19 = r11
            r21 = r12
            r17 = r13
            r13 = 1
            r11 = r7
            goto L13e
        Lc4:
            android.content.IntentFilter r4 = r5.a     // Catch: java.lang.Throwable -> L187
            java.lang.String r10 = "LocalBroadcastManager"
            r9 = r5
            r5 = r11
            r18 = r6
            r6 = r12
            r19 = r11
            r11 = r7
            r7 = r14
            r20 = r8
            r8 = r13
            r21 = r12
            r17 = r13
            r13 = 1
            r12 = r9
            r9 = r15
            int r4 = r4.match(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L187
            if (r4 < 0) goto L10c
            if (r16 == 0) goto Lfd
            java.lang.String r5 = "LocalBroadcastManager"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L187
            r6.<init>()     // Catch: java.lang.Throwable -> L187
            java.lang.String r7 = "  Filter matched!  match=0x"
            r6.append(r7)     // Catch: java.lang.Throwable -> L187
            java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.lang.Throwable -> L187
            r6.append(r4)     // Catch: java.lang.Throwable -> L187
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L187
            android.util.Log.v(r5, r4)     // Catch: java.lang.Throwable -> L187
        Lfd:
            if (r11 != 0) goto L105
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L187
            r7.<init>()     // Catch: java.lang.Throwable -> L187
            goto L106
        L105:
            r7 = r11
        L106:
            r7.add(r12)     // Catch: java.lang.Throwable -> L187
            r12.c = r13     // Catch: java.lang.Throwable -> L187
            goto L13f
        L10c:
            if (r16 == 0) goto L13e
            r5 = -4
            if (r4 == r5) goto L126
            r5 = -3
            if (r4 == r5) goto L123
            r5 = -2
            if (r4 == r5) goto L120
            r5 = -1
            if (r4 == r5) goto L11d
            java.lang.String r4 = "unknown reason"
            goto L128
        L11d:
            java.lang.String r4 = "type"
            goto L128
        L120:
            java.lang.String r4 = "data"
            goto L128
        L123:
            java.lang.String r4 = "action"
            goto L128
        L126:
            java.lang.String r4 = "category"
        L128:
            java.lang.String r5 = "LocalBroadcastManager"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L187
            r6.<init>()     // Catch: java.lang.Throwable -> L187
            java.lang.String r7 = "  Filter did not match: "
            r6.append(r7)     // Catch: java.lang.Throwable -> L187
            r6.append(r4)     // Catch: java.lang.Throwable -> L187
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L187
            android.util.Log.v(r5, r4)     // Catch: java.lang.Throwable -> L187
        L13e:
            r7 = r11
        L13f:
            int r6 = r18 + 1
            r13 = r17
            r11 = r19
            r8 = r20
            r12 = r21
            goto L82
        L14b:
            r11 = r7
            r13 = 1
            if (r11 == 0) goto L184
            r10 = 0
        L150:
            int r4 = r11.size()     // Catch: java.lang.Throwable -> L187
            if (r10 >= r4) goto L162
            java.lang.Object r4 = r11.get(r10)     // Catch: java.lang.Throwable -> L187
            com.sigmob.sdk.base.common.ac$b r4 = (com.sigmob.sdk.base.common.ac.b) r4     // Catch: java.lang.Throwable -> L187
            r5 = 0
            r4.c = r5     // Catch: java.lang.Throwable -> L187
            int r10 = r10 + 1
            goto L150
        L162:
            java.util.ArrayList<com.sigmob.sdk.base.common.ac$a> r4 = r1.i     // Catch: java.lang.Throwable -> L187
            com.sigmob.sdk.base.common.ac$a r5 = new com.sigmob.sdk.base.common.ac$a     // Catch: java.lang.Throwable -> L187
            r5.<init>(r0, r11)     // Catch: java.lang.Throwable -> L187
            r4.add(r5)     // Catch: java.lang.Throwable -> L187
            android.os.Handler r0 = r1.j     // Catch: java.lang.Throwable -> L187
            boolean r0 = r0.hasMessages(r13)     // Catch: java.lang.Throwable -> L187
            if (r0 != 0) goto L182
            if (r2 <= 0) goto L17d
            android.os.Handler r0 = r1.j     // Catch: java.lang.Throwable -> L187
            long r4 = (long) r2     // Catch: java.lang.Throwable -> L187
            r0.sendEmptyMessageDelayed(r13, r4)     // Catch: java.lang.Throwable -> L187
            goto L182
        L17d:
            android.os.Handler r0 = r1.j     // Catch: java.lang.Throwable -> L187
            r0.sendEmptyMessage(r13)     // Catch: java.lang.Throwable -> L187
        L182:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L187
            return r13
        L184:
            r5 = 0
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L187
            return r5
        L187:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L187
            throw r0
    }

    public void b(android.content.Intent r1) {
            r0 = this;
            boolean r1 = r0.a(r1)
            if (r1 == 0) goto L9
            r0.a()
        L9:
            return
    }
}
