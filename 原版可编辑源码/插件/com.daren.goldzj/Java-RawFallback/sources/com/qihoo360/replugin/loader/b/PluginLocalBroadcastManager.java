package com.qihoo360.replugin.loader.b;

public class PluginLocalBroadcastManager {
    private static final java.lang.Object f = null;
    private static com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager g;
    private static java.lang.Object h;
    private final android.content.Context a;
    private final java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> b;
    private final java.util.HashMap<java.lang.String, java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ReceiverRecord>> c;
    private final java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.BroadcastRecord> d;
    private final android.os.Handler e;


    private static class BroadcastRecord {
        final android.content.Intent a;
        final java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ReceiverRecord> b;

        BroadcastRecord(android.content.Intent r1, java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ReceiverRecord> r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    public static class ProxyLocalBroadcastManagerVar {
        static com.qihoo360.replugin.b a;
        static com.qihoo360.replugin.b b;
        static com.qihoo360.replugin.b c;
        static com.qihoo360.replugin.b d;
        static com.qihoo360.replugin.b e;

        public ProxyLocalBroadcastManagerVar() {
                r0 = this;
                r0.<init>()
                return
        }

        public static void initLocked(java.lang.ClassLoader r6) {
                boolean r0 = library.b.a
                if (r0 == 0) goto L7
                java.lang.String r0 = "androidx.localbroadcastmanager.content.LocalBroadcastManager"
                goto L9
            L7:
                java.lang.String r0 = "android.support.v4.content.LocalBroadcastManager"
            L9:
                com.qihoo360.replugin.b r1 = new com.qihoo360.replugin.b
                r2 = 1
                java.lang.Class[] r3 = new java.lang.Class[r2]
                java.lang.Class<android.content.Context> r4 = android.content.Context.class
                r5 = 0
                r3[r5] = r4
                java.lang.String r4 = "getInstance"
                r1.<init>(r6, r0, r4, r3)
                com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.a = r1
                com.qihoo360.replugin.b r1 = new com.qihoo360.replugin.b
                r3 = 2
                java.lang.Class[] r3 = new java.lang.Class[r3]
                java.lang.Class<android.content.BroadcastReceiver> r4 = android.content.BroadcastReceiver.class
                r3[r5] = r4
                java.lang.Class<android.content.IntentFilter> r4 = android.content.IntentFilter.class
                r3[r2] = r4
                java.lang.String r4 = "registerReceiver"
                r1.<init>(r6, r0, r4, r3)
                com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.b = r1
                com.qihoo360.replugin.b r1 = new com.qihoo360.replugin.b
                java.lang.Class[] r3 = new java.lang.Class[r2]
                java.lang.Class<android.content.BroadcastReceiver> r4 = android.content.BroadcastReceiver.class
                r3[r5] = r4
                java.lang.String r4 = "unregisterReceiver"
                r1.<init>(r6, r0, r4, r3)
                com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.c = r1
                com.qihoo360.replugin.b r1 = new com.qihoo360.replugin.b
                java.lang.Class[] r3 = new java.lang.Class[r2]
                java.lang.Class<android.content.Intent> r4 = android.content.Intent.class
                r3[r5] = r4
                java.lang.String r4 = "sendBroadcast"
                r1.<init>(r6, r0, r4, r3)
                com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.d = r1
                com.qihoo360.replugin.b r1 = new com.qihoo360.replugin.b
                java.lang.Class[] r2 = new java.lang.Class[r2]
                java.lang.Class<android.content.Intent> r3 = android.content.Intent.class
                r2[r5] = r3
                java.lang.String r3 = "sendBroadcastSync"
                r1.<init>(r6, r0, r3, r2)
                com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.e = r1
                return
        }
    }

    private static class ReceiverRecord {
        final android.content.IntentFilter a;
        final android.content.BroadcastReceiver b;
        boolean c;

        ReceiverRecord(android.content.IntentFilter r1, android.content.BroadcastReceiver r2) {
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
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.f = r0
            return
    }

    private PluginLocalBroadcastManager(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.d = r0
            r1.a = r2
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$1 r0 = new com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$1
            android.os.Looper r2 = r2.getMainLooper()
            r0.<init>(r1, r2)
            r1.e = r0
            return
    }

    private void a() {
            r9 = this;
        L0:
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> r0 = r9.b
            monitor-enter(r0)
            java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$BroadcastRecord> r1 = r9.d     // Catch: java.lang.Throwable -> L41
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L41
            if (r1 > 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            return
        Ld:
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$BroadcastRecord[] r1 = new com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.BroadcastRecord[r1]     // Catch: java.lang.Throwable -> L41
            java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$BroadcastRecord> r2 = r9.d     // Catch: java.lang.Throwable -> L41
            r2.toArray(r1)     // Catch: java.lang.Throwable -> L41
            java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$BroadcastRecord> r2 = r9.d     // Catch: java.lang.Throwable -> L41
            r2.clear()     // Catch: java.lang.Throwable -> L41
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            int r0 = r1.length
            r2 = 0
            r3 = 0
        L1d:
            if (r3 >= r0) goto L0
            r4 = r1[r3]
            r5 = 0
        L22:
            java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord> r6 = r4.b
            int r6 = r6.size()
            if (r5 >= r6) goto L3e
            java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord> r6 = r4.b
            java.lang.Object r6 = r6.get(r5)
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord r6 = (com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ReceiverRecord) r6
            android.content.BroadcastReceiver r6 = r6.b
            android.content.Context r7 = r9.a
            android.content.Intent r8 = r4.a
            r6.onReceive(r7, r8)
            int r5 = r5 + 1
            goto L22
        L3e:
            int r3 = r3 + 1
            goto L1d
        L41:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            throw r1
    }

    static void a(com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager r0) {
            r0.a()
            return
    }

    public static java.lang.Object getInstance(android.content.Context r5) {
            java.lang.Object r0 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.f
            monitor-enter(r0)
            boolean r1 = com.qihoo360.replugin.e.a     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L1b
            com.qihoo360.replugin.b r1 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.a     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L34
            r2 = 0
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L34
            r4 = 0
            r3[r4] = r5     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L34
            java.lang.Object r1 = r1.a(r2, r3)     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L34
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.h = r1     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L34
            goto L1b
        L17:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L34
        L1b:
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager r1 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.g     // Catch: java.lang.Throwable -> L34
            if (r1 != 0) goto L30
            android.content.Context r1 = com.qihoo360.replugin.d.a()     // Catch: java.lang.Throwable -> L34
            if (r1 != 0) goto L29
            android.content.Context r1 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L34
        L29:
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager r5 = new com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager     // Catch: java.lang.Throwable -> L34
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L34
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.g = r5     // Catch: java.lang.Throwable -> L34
        L30:
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager r5 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.g     // Catch: java.lang.Throwable -> L34
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            return r5
        L34:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            throw r5
    }

    public static void registerReceiver(java.lang.Object r0, android.content.BroadcastReceiver r1, android.content.IntentFilter r2) {
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager r0 = (com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager) r0
            r0.registerReceiver(r1, r2)
            return
    }

    public static boolean sendBroadcast(java.lang.Object r0, android.content.Intent r1) {
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager r0 = (com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager) r0
            boolean r0 = r0.sendBroadcast(r1)
            return r0
    }

    public static void sendBroadcastSync(java.lang.Object r0, android.content.Intent r1) {
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager r0 = (com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager) r0
            r0.sendBroadcastSync(r1)
            return
    }

    public static void unregisterReceiver(java.lang.Object r0, android.content.BroadcastReceiver r1) {
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager r0 = (com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager) r0
            r0.unregisterReceiver(r1)
            return
    }

    public void registerReceiver(android.content.BroadcastReceiver r7, android.content.IntentFilter r8) {
            r6 = this;
            boolean r0 = com.qihoo360.replugin.e.a
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L1a
            com.qihoo360.replugin.b r0 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.b     // Catch: java.lang.Exception -> L15
            java.lang.Object r3 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.h     // Catch: java.lang.Exception -> L15
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L15
            r4[r1] = r7     // Catch: java.lang.Exception -> L15
            r4[r2] = r8     // Catch: java.lang.Exception -> L15
            r0.a(r3, r4)     // Catch: java.lang.Exception -> L15
            goto L19
        L15:
            r7 = move-exception
            r7.printStackTrace()
        L19:
            return
        L1a:
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> r0 = r6.b
            monitor-enter(r0)
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord r3 = new com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord     // Catch: java.lang.Throwable -> L5f
            r3.<init>(r8, r7)     // Catch: java.lang.Throwable -> L5f
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> r4 = r6.b     // Catch: java.lang.Throwable -> L5f
            java.lang.Object r4 = r4.get(r7)     // Catch: java.lang.Throwable -> L5f
            java.util.ArrayList r4 = (java.util.ArrayList) r4     // Catch: java.lang.Throwable -> L5f
            if (r4 != 0) goto L36
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L5f
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L5f
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> r5 = r6.b     // Catch: java.lang.Throwable -> L5f
            r5.put(r7, r4)     // Catch: java.lang.Throwable -> L5f
        L36:
            r4.add(r8)     // Catch: java.lang.Throwable -> L5f
        L39:
            int r7 = r8.countActions()     // Catch: java.lang.Throwable -> L5f
            if (r1 >= r7) goto L5d
            java.lang.String r7 = r8.getAction(r1)     // Catch: java.lang.Throwable -> L5f
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord>> r4 = r6.c     // Catch: java.lang.Throwable -> L5f
            java.lang.Object r4 = r4.get(r7)     // Catch: java.lang.Throwable -> L5f
            java.util.ArrayList r4 = (java.util.ArrayList) r4     // Catch: java.lang.Throwable -> L5f
            if (r4 != 0) goto L57
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L5f
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L5f
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord>> r5 = r6.c     // Catch: java.lang.Throwable -> L5f
            r5.put(r7, r4)     // Catch: java.lang.Throwable -> L5f
        L57:
            r4.add(r3)     // Catch: java.lang.Throwable -> L5f
            int r1 = r1 + 1
            goto L39
        L5d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            return
        L5f:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            throw r7
    }

    public boolean sendBroadcast(android.content.Intent r22) {
            r21 = this;
            r1 = r21
            r0 = r22
            boolean r2 = com.qihoo360.replugin.e.a
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L22
            com.qihoo360.replugin.b r2 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.d     // Catch: java.lang.Exception -> L1d
            java.lang.Object r5 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.h     // Catch: java.lang.Exception -> L1d
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L1d
            r4[r3] = r0     // Catch: java.lang.Exception -> L1d
            java.lang.Object r0 = r2.a(r5, r4)     // Catch: java.lang.Exception -> L1d
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> L1d
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> L1d
            return r0
        L1d:
            r0 = move-exception
            r0.printStackTrace()
            return r3
        L22:
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> r2 = r1.b
            monitor-enter(r2)
            java.lang.String r12 = r22.getAction()     // Catch: java.lang.Throwable -> L18a
            android.content.Context r5 = r1.a     // Catch: java.lang.Throwable -> L18a
            android.content.ContentResolver r5 = r5.getContentResolver()     // Catch: java.lang.Throwable -> L18a
            java.lang.String r13 = r0.resolveTypeIfNeeded(r5)     // Catch: java.lang.Throwable -> L18a
            android.net.Uri r14 = r22.getData()     // Catch: java.lang.Throwable -> L18a
            java.lang.String r15 = r22.getScheme()     // Catch: java.lang.Throwable -> L18a
            java.util.Set r16 = r22.getCategories()     // Catch: java.lang.Throwable -> L18a
            int r5 = r22.getFlags()     // Catch: java.lang.Throwable -> L18a
            r5 = r5 & 8
            if (r5 == 0) goto L4a
            r17 = 1
            goto L4c
        L4a:
            r17 = 0
        L4c:
            if (r17 == 0) goto L74
            java.lang.String r5 = "PluginLocalBroadcastManager"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18a
            r6.<init>()     // Catch: java.lang.Throwable -> L18a
            java.lang.String r7 = "Resolving type "
            r6.append(r7)     // Catch: java.lang.Throwable -> L18a
            r6.append(r13)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r7 = " scheme "
            r6.append(r7)     // Catch: java.lang.Throwable -> L18a
            r6.append(r15)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r7 = " of intent "
            r6.append(r7)     // Catch: java.lang.Throwable -> L18a
            r6.append(r0)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L18a
            android.util.Log.v(r5, r6)     // Catch: java.lang.Throwable -> L18a
        L74:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord>> r5 = r1.c     // Catch: java.lang.Throwable -> L18a
            java.lang.String r6 = r22.getAction()     // Catch: java.lang.Throwable -> L18a
            java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Throwable -> L18a
            r11 = r5
            java.util.ArrayList r11 = (java.util.ArrayList) r11     // Catch: java.lang.Throwable -> L18a
            if (r11 == 0) goto L187
            if (r17 == 0) goto L9b
            java.lang.String r5 = "PluginLocalBroadcastManager"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18a
            r6.<init>()     // Catch: java.lang.Throwable -> L18a
            java.lang.String r7 = "Action list: "
            r6.append(r7)     // Catch: java.lang.Throwable -> L18a
            r6.append(r11)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L18a
            android.util.Log.v(r5, r6)     // Catch: java.lang.Throwable -> L18a
        L9b:
            r5 = 0
            r9 = r5
            r10 = 0
        L9e:
            int r5 = r11.size()     // Catch: java.lang.Throwable -> L18a
            if (r10 >= r5) goto L157
            java.lang.Object r5 = r11.get(r10)     // Catch: java.lang.Throwable -> L18a
            r8 = r5
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord r8 = (com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ReceiverRecord) r8     // Catch: java.lang.Throwable -> L18a
            if (r17 == 0) goto Lc5
            java.lang.String r5 = "PluginLocalBroadcastManager"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18a
            r6.<init>()     // Catch: java.lang.Throwable -> L18a
            java.lang.String r7 = "Matching against filter "
            r6.append(r7)     // Catch: java.lang.Throwable -> L18a
            android.content.IntentFilter r7 = r8.a     // Catch: java.lang.Throwable -> L18a
            r6.append(r7)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L18a
            android.util.Log.v(r5, r6)     // Catch: java.lang.Throwable -> L18a
        Lc5:
            boolean r5 = r8.c     // Catch: java.lang.Throwable -> L18a
            if (r5 == 0) goto Ld9
            if (r17 == 0) goto Ld2
            java.lang.String r5 = "PluginLocalBroadcastManager"
            java.lang.String r6 = "  Filter's target already added"
            android.util.Log.v(r5, r6)     // Catch: java.lang.Throwable -> L18a
        Ld2:
            r4 = r9
            r19 = r10
            r20 = r11
            goto L14e
        Ld9:
            android.content.IntentFilter r5 = r8.a     // Catch: java.lang.Throwable -> L18a
            java.lang.String r18 = "PluginLocalBroadcastManager"
            r6 = r12
            r7 = r13
            r3 = r8
            r8 = r15
            r4 = r9
            r9 = r14
            r19 = r10
            r10 = r16
            r20 = r11
            r11 = r18
            int r5 = r5.match(r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L18a
            if (r5 < 0) goto L11c
            if (r17 == 0) goto L10d
            java.lang.String r6 = "PluginLocalBroadcastManager"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18a
            r7.<init>()     // Catch: java.lang.Throwable -> L18a
            java.lang.String r8 = "  Filter matched!  match=0x"
            r7.append(r8)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r5 = java.lang.Integer.toHexString(r5)     // Catch: java.lang.Throwable -> L18a
            r7.append(r5)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r5 = r7.toString()     // Catch: java.lang.Throwable -> L18a
            android.util.Log.v(r6, r5)     // Catch: java.lang.Throwable -> L18a
        L10d:
            if (r4 != 0) goto L115
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L18a
            r9.<init>()     // Catch: java.lang.Throwable -> L18a
            r4 = r9
        L115:
            r4.add(r3)     // Catch: java.lang.Throwable -> L18a
            r5 = 1
            r3.c = r5     // Catch: java.lang.Throwable -> L18a
            goto L14e
        L11c:
            if (r17 == 0) goto L14e
            r3 = -4
            if (r5 == r3) goto L136
            r3 = -3
            if (r5 == r3) goto L133
            r3 = -2
            if (r5 == r3) goto L130
            r3 = -1
            if (r5 == r3) goto L12d
            java.lang.String r3 = "unknown reason"
            goto L138
        L12d:
            java.lang.String r3 = "type"
            goto L138
        L130:
            java.lang.String r3 = "data"
            goto L138
        L133:
            java.lang.String r3 = "action"
            goto L138
        L136:
            java.lang.String r3 = "category"
        L138:
            java.lang.String r5 = "PluginLocalBroadcastManager"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18a
            r6.<init>()     // Catch: java.lang.Throwable -> L18a
            java.lang.String r7 = "  Filter did not match: "
            r6.append(r7)     // Catch: java.lang.Throwable -> L18a
            r6.append(r3)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> L18a
            android.util.Log.v(r5, r3)     // Catch: java.lang.Throwable -> L18a
        L14e:
            r9 = r4
            int r10 = r19 + 1
            r11 = r20
            r3 = 0
            r4 = 1
            goto L9e
        L157:
            r4 = r9
            if (r4 == 0) goto L187
            r3 = 0
        L15b:
            int r5 = r4.size()     // Catch: java.lang.Throwable -> L18a
            if (r3 >= r5) goto L16d
            java.lang.Object r5 = r4.get(r3)     // Catch: java.lang.Throwable -> L18a
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord r5 = (com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ReceiverRecord) r5     // Catch: java.lang.Throwable -> L18a
            r6 = 0
            r5.c = r6     // Catch: java.lang.Throwable -> L18a
            int r3 = r3 + 1
            goto L15b
        L16d:
            java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$BroadcastRecord> r3 = r1.d     // Catch: java.lang.Throwable -> L18a
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$BroadcastRecord r5 = new com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$BroadcastRecord     // Catch: java.lang.Throwable -> L18a
            r5.<init>(r0, r4)     // Catch: java.lang.Throwable -> L18a
            r3.add(r5)     // Catch: java.lang.Throwable -> L18a
            android.os.Handler r0 = r1.e     // Catch: java.lang.Throwable -> L18a
            r3 = 1
            boolean r0 = r0.hasMessages(r3)     // Catch: java.lang.Throwable -> L18a
            if (r0 != 0) goto L185
            android.os.Handler r0 = r1.e     // Catch: java.lang.Throwable -> L18a
            r0.sendEmptyMessage(r3)     // Catch: java.lang.Throwable -> L18a
        L185:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L18a
            return r3
        L187:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L18a
            r2 = 0
            return r2
        L18a:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L18a
            throw r0
    }

    public void sendBroadcastSync(android.content.Intent r5) {
            r4 = this;
            boolean r0 = com.qihoo360.replugin.e.a
            if (r0 == 0) goto L12
            com.qihoo360.replugin.b r0 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.e     // Catch: java.lang.Exception -> L11
            java.lang.Object r1 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.h     // Catch: java.lang.Exception -> L11
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L11
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.Exception -> L11
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L11
        L11:
            return
        L12:
            boolean r5 = r4.sendBroadcast(r5)
            if (r5 == 0) goto L1b
            r4.a()
        L1b:
            return
    }

    public void unregisterReceiver(android.content.BroadcastReceiver r12) {
            r11 = this;
            boolean r0 = com.qihoo360.replugin.e.a
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L17
            com.qihoo360.replugin.b r0 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.c     // Catch: java.lang.Exception -> L12
            java.lang.Object r3 = com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.h     // Catch: java.lang.Exception -> L12
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L12
            r2[r1] = r12     // Catch: java.lang.Exception -> L12
            r0.a(r3, r2)     // Catch: java.lang.Exception -> L12
            goto L16
        L12:
            r12 = move-exception
            r12.printStackTrace()
        L16:
            return
        L17:
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> r0 = r11.b
            monitor-enter(r0)
            java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> r3 = r11.b     // Catch: java.lang.Throwable -> L73
            java.lang.Object r3 = r3.remove(r12)     // Catch: java.lang.Throwable -> L73
            java.util.ArrayList r3 = (java.util.ArrayList) r3     // Catch: java.lang.Throwable -> L73
            if (r3 != 0) goto L26
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L73
            return
        L26:
            r4 = 0
        L27:
            int r5 = r3.size()     // Catch: java.lang.Throwable -> L73
            if (r4 >= r5) goto L71
            java.lang.Object r5 = r3.get(r4)     // Catch: java.lang.Throwable -> L73
            android.content.IntentFilter r5 = (android.content.IntentFilter) r5     // Catch: java.lang.Throwable -> L73
            r6 = 0
        L34:
            int r7 = r5.countActions()     // Catch: java.lang.Throwable -> L73
            if (r6 >= r7) goto L6e
            java.lang.String r7 = r5.getAction(r6)     // Catch: java.lang.Throwable -> L73
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord>> r8 = r11.c     // Catch: java.lang.Throwable -> L73
            java.lang.Object r8 = r8.get(r7)     // Catch: java.lang.Throwable -> L73
            java.util.ArrayList r8 = (java.util.ArrayList) r8     // Catch: java.lang.Throwable -> L73
            if (r8 == 0) goto L6b
            r9 = 0
        L49:
            int r10 = r8.size()     // Catch: java.lang.Throwable -> L73
            if (r9 >= r10) goto L60
            java.lang.Object r10 = r8.get(r9)     // Catch: java.lang.Throwable -> L73
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord r10 = (com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ReceiverRecord) r10     // Catch: java.lang.Throwable -> L73
            android.content.BroadcastReceiver r10 = r10.b     // Catch: java.lang.Throwable -> L73
            if (r10 != r12) goto L5e
            r8.remove(r9)     // Catch: java.lang.Throwable -> L73
            int r9 = r9 + (-1)
        L5e:
            int r9 = r9 + r2
            goto L49
        L60:
            int r8 = r8.size()     // Catch: java.lang.Throwable -> L73
            if (r8 > 0) goto L6b
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager$ReceiverRecord>> r8 = r11.c     // Catch: java.lang.Throwable -> L73
            r8.remove(r7)     // Catch: java.lang.Throwable -> L73
        L6b:
            int r6 = r6 + 1
            goto L34
        L6e:
            int r4 = r4 + 1
            goto L27
        L71:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L73
            return
        L73:
            r12 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L73
            throw r12
    }
}
