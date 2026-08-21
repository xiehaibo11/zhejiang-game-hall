package com.xiaomi.push.service;

public class ServiceClient {
    private static long a;
    private static com.xiaomi.push.service.ServiceClient a;
    private static java.lang.String a;
    private static java.lang.String b;
    private android.content.Context a;
    private android.os.Messenger a;
    private java.util.List<android.os.Message> a;
    private boolean a;
    private android.os.Messenger b;
    private boolean b;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 5
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.push.service.ServiceClient.b = r0
            r0 = 0
            com.xiaomi.push.service.ServiceClient.a = r0
            return
    }

    private ServiceClient(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r0 = 0
            r2.a = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.a = r1
            r2.b = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.a = r3
            boolean r3 = r2.a()
            if (r3 == 0) goto L26
            java.lang.String r3 = "use miui push service"
            com.xiaomi.channel.commonutils.logger.b.c(r3)
            r3 = 1
            r2.a = r3
        L26:
            return
    }

    private android.content.Intent a() {
            r3 = this;
            boolean r0 = r3.isMiuiPushServiceEnabled()
            if (r0 == 0) goto L26
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.xiaomi.xmsf"
            r0.setPackage(r1)
            java.lang.String r2 = r3.a()
            r0.setClassName(r1, r2)
            android.content.Context r1 = r3.a
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = com.xiaomi.push.service.bk.B
            r0.putExtra(r2, r1)
            r3.a()
            goto L3d
        L26:
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = r3.a
            java.lang.Class<com.xiaomi.push.service.XMPushService> r2 = com.xiaomi.push.service.XMPushService.class
            r0.<init>(r1, r2)
            android.content.Context r1 = r3.a
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = com.xiaomi.push.service.bk.B
            r0.putExtra(r2, r1)
            r3.b()
        L3d:
            return r0
    }

    private android.os.Message a(android.content.Intent r3) {
            r2 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r1 = 17
            r0.what = r1
            r0.obj = r3
            return r0
    }

    static android.os.Messenger a(com.xiaomi.push.service.ServiceClient r0) {
            android.os.Messenger r0 = r0.b
            return r0
    }

    static android.os.Messenger a(com.xiaomi.push.service.ServiceClient r0, android.os.Messenger r1) {
            r0.b = r1
            return r1
    }

    private java.lang.String a() {
            r3 = this;
            android.content.Context r0 = r3.a     // Catch: java.lang.Exception -> L16
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "com.xiaomi.xmsf"
            r2 = 4
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L16
            int r0 = r0.versionCode     // Catch: java.lang.Exception -> L16
            r1 = 106(0x6a, float:1.49E-43)
            if (r0 < r1) goto L16
            java.lang.String r0 = "com.xiaomi.push.service.XMPushService"
            return r0
        L16:
            java.lang.String r0 = "com.xiaomi.xmsf.push.service.XMPushService"
            return r0
    }

    private java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Set r1 = r6.entrySet()
            java.util.Iterator r1 = r1.iterator()
            r2 = 1
        Le:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L3f
            java.lang.Object r3 = r1.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getKey()
            java.lang.String r4 = (java.lang.String) r4
            r0.append(r4)
            java.lang.String r4 = ":"
            r0.append(r4)
            java.lang.Object r3 = r3.getValue()
            java.lang.String r3 = (java.lang.String) r3
            r0.append(r3)
            int r3 = r6.size()
            if (r2 >= r3) goto L3c
            java.lang.String r3 = ","
            r0.append(r3)
        L3c:
            int r2 = r2 + 1
            goto Le
        L3f:
            java.lang.String r6 = r0.toString()
            return r6
    }

    static java.util.List a(com.xiaomi.push.service.ServiceClient r0) {
            java.util.List<android.os.Message> r0 = r0.a
            return r0
    }

    private java.util.Map<java.lang.String, java.lang.String> a(java.util.List<org.apache.http.NameValuePair> r4) {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 == 0) goto L2c
            int r1 = r4.size()
            if (r1 <= 0) goto L2c
            java.util.Iterator r4 = r4.iterator()
        L11:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r4.next()
            org.apache.http.NameValuePair r1 = (org.apache.http.NameValuePair) r1
            if (r1 != 0) goto L20
            goto L11
        L20:
            java.lang.String r2 = r1.getName()
            java.lang.String r1 = r1.getValue()
            r0.put(r2, r1)
            goto L11
        L2c:
            return r0
    }

    private void a() {
            r4 = this;
            android.content.Context r0 = r4.a
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.content.ComponentName r1 = new android.content.ComponentName
            android.content.Context r2 = r4.a
            java.lang.Class<com.xiaomi.push.service.XMPushService> r3 = com.xiaomi.push.service.XMPushService.class
            r1.<init>(r2, r3)
            r2 = 2
            r3 = 1
            r0.setComponentEnabledSetting(r1, r2, r3)
            return
    }

    private synchronized void a(android.content.Intent r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.b     // Catch: java.lang.Throwable -> L51
            r1 = 0
            if (r0 == 0) goto L20
            android.os.Message r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L51
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L51
            r2 = 50
            if (r0 < r2) goto L19
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            r0.remove(r1)     // Catch: java.lang.Throwable -> L51
        L19:
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            r0.add(r4)     // Catch: java.lang.Throwable -> L51
            monitor-exit(r3)
            return
        L20:
            android.os.Messenger r0 = r3.b     // Catch: java.lang.Throwable -> L51
            if (r0 != 0) goto L40
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L51
            com.xiaomi.push.service.bu r1 = new com.xiaomi.push.service.bu     // Catch: java.lang.Throwable -> L51
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L51
            r2 = 1
            r0.bindService(r4, r1, r2)     // Catch: java.lang.Throwable -> L51
            r3.b = r2     // Catch: java.lang.Throwable -> L51
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            r0.clear()     // Catch: java.lang.Throwable -> L51
            android.os.Message r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L51
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            r0.add(r4)     // Catch: java.lang.Throwable -> L51
            goto L4f
        L40:
            android.os.Message r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L51
            android.os.Messenger r0 = r3.b     // Catch: android.os.RemoteException -> L4a java.lang.Throwable -> L51
            r0.send(r4)     // Catch: android.os.RemoteException -> L4a java.lang.Throwable -> L51
            goto L4f
        L4a:
            r4 = 0
            r3.b = r4     // Catch: java.lang.Throwable -> L51
            r3.b = r1     // Catch: java.lang.Throwable -> L51
        L4f:
            monitor-exit(r3)
            return
        L51:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private void a(android.content.Intent r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, boolean r8, java.util.Map<java.lang.String, java.lang.String> r9, java.util.Map<java.lang.String, java.lang.String> r10) {
            r1 = this;
            java.lang.String r0 = com.xiaomi.push.service.bk.q
            r2.putExtra(r0, r3)
            java.lang.String r3 = com.xiaomi.push.service.bk.t
            r2.putExtra(r3, r4)
            java.lang.String r3 = com.xiaomi.push.service.bk.v
            r2.putExtra(r3, r5)
            java.lang.String r3 = com.xiaomi.push.service.bk.x
            r2.putExtra(r3, r7)
            java.lang.String r3 = com.xiaomi.push.service.bk.w
            r2.putExtra(r3, r6)
            java.lang.String r3 = com.xiaomi.push.service.bk.y
            r2.putExtra(r3, r8)
            java.lang.String r3 = com.xiaomi.push.service.bk.F
            java.lang.String r4 = com.xiaomi.push.service.ServiceClient.a
            r2.putExtra(r3, r4)
            java.lang.String r3 = com.xiaomi.push.service.bk.J
            android.os.Messenger r4 = r1.a
            r2.putExtra(r3, r4)
            if (r9 == 0) goto L43
            int r3 = r9.size()
            if (r3 <= 0) goto L43
            java.lang.String r3 = r1.a(r9)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L43
            java.lang.String r4 = com.xiaomi.push.service.bk.z
            r2.putExtra(r4, r3)
        L43:
            if (r10 == 0) goto L5a
            int r3 = r10.size()
            if (r3 <= 0) goto L5a
            java.lang.String r3 = r1.a(r10)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L5a
            java.lang.String r4 = com.xiaomi.push.service.bk.A
            r2.putExtra(r4, r3)
        L5a:
            return
    }

    private boolean a() {
            r4 = this;
            boolean r0 = com.xiaomi.push.ae.e
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            android.content.Context r0 = r4.a
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            java.lang.String r2 = "com.xiaomi.xmsf"
            r3 = 4
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L1f
            if (r0 != 0) goto L16
            return r1
        L16:
            int r0 = r0.versionCode     // Catch: java.lang.Exception -> L1f
            r2 = 104(0x68, float:1.46E-43)
            if (r0 >= r2) goto L1d
            return r1
        L1d:
            r0 = 1
            return r0
        L1f:
            return r1
    }

    static boolean a(com.xiaomi.push.service.ServiceClient r0, boolean r1) {
            r0.b = r1
            return r1
    }

    private void b() {
            r4 = this;
            android.content.Context r0 = r4.a
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.content.ComponentName r1 = new android.content.ComponentName
            android.content.Context r2 = r4.a
            java.lang.Class<com.xiaomi.push.service.XMPushService> r3 = com.xiaomi.push.service.XMPushService.class
            r1.<init>(r2, r3)
            r2 = 1
            r0.setComponentEnabledSetting(r1, r2, r2)
            return
    }

    public static com.xiaomi.push.service.ServiceClient getInstance(android.content.Context r1) {
            com.xiaomi.push.service.ServiceClient r0 = com.xiaomi.push.service.ServiceClient.a
            if (r0 != 0) goto Lb
            com.xiaomi.push.service.ServiceClient r0 = new com.xiaomi.push.service.ServiceClient
            r0.<init>(r1)
            com.xiaomi.push.service.ServiceClient.a = r0
        Lb:
            com.xiaomi.push.service.ServiceClient r1 = com.xiaomi.push.service.ServiceClient.a
            return r1
    }

    public static java.lang.String getSession() {
            java.lang.String r0 = com.xiaomi.push.service.ServiceClient.a
            return r0
    }

    public static void setSession(java.lang.String r0) {
            com.xiaomi.push.service.ServiceClient.a = r0
            return
    }

    public boolean batchSendMessage(com.xiaomi.push.gm[] r12, boolean r13) {
            r11 = this;
            android.content.Context r0 = r11.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            android.content.Intent r0 = r11.a()
            int r2 = r12.length
            android.os.Bundle[] r3 = new android.os.Bundle[r2]
            r4 = r1
        L12:
            int r5 = r12.length
            if (r4 >= r5) goto L61
            java.lang.String r5 = com.xiaomi.push.et.a()
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L3c
            com.xiaomi.push.gk r6 = new com.xiaomi.push.gk
            r7 = 0
            r8 = r7
            java.lang.String[] r8 = (java.lang.String[]) r8
            java.lang.String r9 = "pf"
            r6.<init>(r9, r7, r8, r8)
            com.xiaomi.push.gk r9 = new com.xiaomi.push.gk
            java.lang.String r10 = "sent"
            r9.<init>(r10, r7, r8, r8)
            r9.a(r5)
            r6.a(r9)
            r5 = r12[r4]
            r5.a(r6)
        L3c:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "SEND:"
            r5.append(r6)
            r6 = r12[r4]
            java.lang.String r6 = r6.a()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r5)
            r5 = r12[r4]
            android.os.Bundle r5 = r5.a()
            r3[r4] = r5
            int r4 = r4 + 1
            goto L12
        L61:
            if (r2 <= 0) goto L7e
            java.lang.String r12 = com.xiaomi.push.service.bk.g
            r0.setAction(r12)
            java.lang.String r12 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = com.xiaomi.push.service.ServiceClient.a
            r0.putExtra(r12, r1)
            java.lang.String r12 = "ext_packets"
            r0.putExtra(r12, r3)
            java.lang.String r12 = "ext_encrypt"
            r0.putExtra(r12, r13)
            boolean r12 = r11.startServiceSafely(r0)
            return r12
        L7e:
            return r1
    }

    public void checkAlive() {
            r2 = this;
            android.content.Intent r0 = r2.a()
            java.lang.String r1 = "com.xiaomi.push.check_alive"
            r0.setAction(r1)
            r2.startServiceSafely(r0)
            return
    }

    public boolean closeChannel() {
            r2 = this;
            android.content.Intent r0 = r2.a()
            java.lang.String r1 = com.xiaomi.push.service.bk.i
            r0.setAction(r1)
            boolean r0 = r2.startServiceSafely(r0)
            return r0
    }

    public boolean closeChannel(java.lang.String r3) {
            r2 = this;
            android.content.Intent r0 = r2.a()
            java.lang.String r1 = com.xiaomi.push.service.bk.i
            r0.setAction(r1)
            java.lang.String r1 = com.xiaomi.push.service.bk.t
            r0.putExtra(r1, r3)
            boolean r3 = r2.startServiceSafely(r0)
            return r3
    }

    public boolean closeChannel(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.content.Intent r0 = r2.a()
            java.lang.String r1 = com.xiaomi.push.service.bk.i
            r0.setAction(r1)
            java.lang.String r1 = com.xiaomi.push.service.bk.t
            r0.putExtra(r1, r3)
            java.lang.String r3 = com.xiaomi.push.service.bk.q
            r0.putExtra(r3, r4)
            boolean r3 = r2.startServiceSafely(r0)
            return r3
    }

    @java.lang.Deprecated
    public boolean forceReconnection(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, boolean r16, java.util.List<org.apache.http.NameValuePair> r17, java.util.List<org.apache.http.NameValuePair> r18) {
            r10 = this;
            r9 = r10
            r0 = r17
            java.util.Map r7 = r10.a(r0)
            r0 = r18
            java.util.Map r8 = r10.a(r0)
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            boolean r0 = r0.forceReconnection(r1, r2, r3, r4, r5, r6, r7, r8)
            return r0
    }

    public boolean forceReconnection(java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, boolean r17, java.util.Map<java.lang.String, java.lang.String> r18, java.util.Map<java.lang.String, java.lang.String> r19) {
            r11 = this;
            android.content.Intent r10 = r11.a()
            java.lang.String r0 = com.xiaomi.push.service.bk.j
            r10.setAction(r0)
            r0 = r11
            r1 = r10
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r9 = r19
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            boolean r1 = r11.startServiceSafely(r10)
            return r1
    }

    public boolean isMiuiPushServiceEnabled() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public int openChannel(java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.util.Map<java.lang.String, java.lang.String> r17, java.util.Map<java.lang.String, java.lang.String> r18, boolean r19) {
            r11 = this;
            android.content.Intent r10 = r11.a()
            java.lang.String r0 = com.xiaomi.push.service.bk.d
            r10.setAction(r0)
            r0 = r11
            r1 = r10
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r19
            r8 = r17
            r9 = r18
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r11.startServiceSafely(r10)
            r1 = 0
            return r1
    }

    @java.lang.Deprecated
    public int openChannel(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, boolean r16, java.util.List<org.apache.http.NameValuePair> r17, java.util.List<org.apache.http.NameValuePair> r18) {
            r10 = this;
            r9 = r10
            r0 = r17
            java.util.Map r6 = r10.a(r0)
            r0 = r18
            java.util.Map r7 = r10.a(r0)
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r8 = r16
            int r0 = r0.openChannel(r1, r2, r3, r4, r5, r6, r7, r8)
            return r0
    }

    @java.lang.Deprecated
    public void resetConnection(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, boolean r16, java.util.List<org.apache.http.NameValuePair> r17, java.util.List<org.apache.http.NameValuePair> r18) {
            r10 = this;
            r9 = r10
            r0 = r17
            java.util.Map r7 = r10.a(r0)
            r0 = r18
            java.util.Map r8 = r10.a(r0)
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r0.resetConnection(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public void resetConnection(java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, boolean r17, java.util.Map<java.lang.String, java.lang.String> r18, java.util.Map<java.lang.String, java.lang.String> r19) {
            r11 = this;
            android.content.Intent r10 = r11.a()
            java.lang.String r0 = com.xiaomi.push.service.bk.k
            r10.setAction(r0)
            r0 = r11
            r1 = r10
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r9 = r19
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r11.startServiceSafely(r10)
            return
    }

    public boolean sendIQ(com.xiaomi.push.gl r5) {
            r4 = this;
            android.content.Context r0 = r4.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            android.content.Intent r0 = r4.a()
            android.os.Bundle r2 = r5.a()
            if (r2 == 0) goto L42
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "SEND:"
            r1.append(r3)
            java.lang.String r5 = r5.a()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r5)
            java.lang.String r5 = com.xiaomi.push.service.bk.f
            r0.setAction(r5)
            java.lang.String r5 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = com.xiaomi.push.service.ServiceClient.a
            r0.putExtra(r5, r1)
            java.lang.String r5 = "ext_packet"
            r0.putExtra(r5, r2)
            boolean r5 = r4.startServiceSafely(r0)
            return r5
        L42:
            return r1
    }

    public boolean sendMessage(com.xiaomi.push.gm r9, boolean r10) {
            r8 = this;
            android.content.Context r0 = r8.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            android.content.Intent r0 = r8.a()
            java.lang.String r2 = com.xiaomi.push.et.a()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L33
            com.xiaomi.push.gk r3 = new com.xiaomi.push.gk
            r4 = 0
            r5 = r4
            java.lang.String[] r5 = (java.lang.String[]) r5
            java.lang.String r6 = "pf"
            r3.<init>(r6, r4, r5, r5)
            com.xiaomi.push.gk r6 = new com.xiaomi.push.gk
            java.lang.String r7 = "sent"
            r6.<init>(r7, r4, r5, r5)
            r6.a(r2)
            r3.a(r6)
            r9.a(r3)
        L33:
            android.os.Bundle r2 = r9.a()
            if (r2 == 0) goto L6c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "SEND:"
            r1.append(r3)
            java.lang.String r9 = r9.a()
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r9)
            java.lang.String r9 = com.xiaomi.push.service.bk.e
            r0.setAction(r9)
            java.lang.String r9 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = com.xiaomi.push.service.ServiceClient.a
            r0.putExtra(r9, r1)
            java.lang.String r9 = "ext_packet"
            r0.putExtra(r9, r2)
            java.lang.String r9 = "ext_encrypt"
            r0.putExtra(r9, r10)
            boolean r9 = r8.startServiceSafely(r0)
            return r9
        L6c:
            return r1
    }

    public boolean sendMessage(byte[] r6, java.lang.String r7, java.lang.String r8) {
            r5 = this;
            android.content.Context r0 = r5.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            r1 = 0
            if (r0 == 0) goto La9
            if (r6 == 0) goto La9
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto La9
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L19
            goto La9
        L19:
            android.content.Intent r0 = r5.a()
            if (r6 == 0) goto La8
            java.lang.String r2 = com.xiaomi.push.service.bk.e
            r0.setAction(r2)
            java.lang.String r2 = com.xiaomi.push.service.bk.F
            java.lang.String r3 = com.xiaomi.push.service.ServiceClient.a
            r0.putExtra(r2, r3)
            java.lang.String r2 = "ext_raw_packet"
            r0.putExtra(r2, r6)
            java.lang.String r6 = "@"
            int r6 = r7.indexOf(r6)
            r2 = -1
            r3 = 0
            if (r6 == r2) goto L3f
            java.lang.String r1 = r7.substring(r1, r6)
            goto L40
        L3f:
            r1 = r3
        L40:
            java.lang.String r4 = "/"
            int r4 = r7.lastIndexOf(r4)
            if (r4 == r2) goto L55
            int r6 = r6 + 1
            java.lang.String r3 = r7.substring(r6, r4)
            int r4 = r4 + 1
            java.lang.String r6 = r7.substring(r4)
            goto L56
        L55:
            r6 = r3
        L56:
            java.lang.String r7 = com.xiaomi.push.service.bk.q
            r0.putExtra(r7, r1)
            java.lang.String r7 = com.xiaomi.push.service.bk.r
            r0.putExtra(r7, r3)
            java.lang.String r7 = com.xiaomi.push.service.bk.s
            r0.putExtra(r7, r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = com.xiaomi.push.service.ServiceClient.b
            r6.append(r7)
            long r1 = com.xiaomi.push.service.ServiceClient.a
            r3 = 1
            long r3 = r3 + r1
            com.xiaomi.push.service.ServiceClient.a = r3
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "ext_pkt_id"
            r0.putExtra(r7, r6)
            java.lang.String r7 = "ext_chid"
            r0.putExtra(r7, r8)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "SEND: chid="
            r7.append(r1)
            r7.append(r8)
            java.lang.String r8 = ", packetId="
            r7.append(r8)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r6)
            boolean r6 = r5.startServiceSafely(r0)
            return r6
        La8:
            return r1
        La9:
            java.lang.String r6 = "Failed to send message: message|userId|chid may be empty, or the network is unavailable."
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            return r1
    }

    public boolean sendPresence(com.xiaomi.push.gp r5) {
            r4 = this;
            android.content.Context r0 = r4.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            android.content.Intent r0 = r4.a()
            android.os.Bundle r2 = r5.a()
            if (r2 == 0) goto L42
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "SEND:"
            r1.append(r3)
            java.lang.String r5 = r5.a()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r5)
            java.lang.String r5 = com.xiaomi.push.service.bk.h
            r0.setAction(r5)
            java.lang.String r5 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = com.xiaomi.push.service.ServiceClient.a
            r0.putExtra(r5, r1)
            java.lang.String r5 = "ext_packet"
            r0.putExtra(r5, r2)
            boolean r5 = r4.startServiceSafely(r0)
            return r5
        L42:
            return r1
    }

    public void setMessenger(android.os.Messenger r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public boolean startServiceSafely(android.content.Intent r3) {
            r2 = this;
            boolean r0 = com.xiaomi.push.m.a()     // Catch: java.lang.Exception -> L17
            if (r0 != 0) goto L10
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L17
            r1 = 26
            if (r0 < r1) goto L10
            r2.a(r3)     // Catch: java.lang.Exception -> L17
            goto L15
        L10:
            android.content.Context r0 = r2.a     // Catch: java.lang.Exception -> L17
            r0.startService(r3)     // Catch: java.lang.Exception -> L17
        L15:
            r3 = 1
            return r3
        L17:
            r3 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            r3 = 0
            return r3
    }

    @java.lang.Deprecated
    public void updateChannelInfo(java.lang.String r1, java.util.List<org.apache.http.NameValuePair> r2, java.util.List<org.apache.http.NameValuePair> r3) {
            r0 = this;
            java.util.Map r2 = r0.a(r2)
            java.util.Map r3 = r0.a(r3)
            r0.updateChannelInfo(r1, r2, r3)
            return
    }

    public void updateChannelInfo(java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4, java.util.Map<java.lang.String, java.lang.String> r5) {
            r2 = this;
            android.content.Intent r0 = r2.a()
            java.lang.String r1 = com.xiaomi.push.service.bk.l
            r0.setAction(r1)
            if (r4 == 0) goto L1a
            java.lang.String r4 = r2.a(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L1a
            java.lang.String r1 = com.xiaomi.push.service.bk.z
            r0.putExtra(r1, r4)
        L1a:
            if (r5 == 0) goto L2b
            java.lang.String r4 = r2.a(r5)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L2b
            java.lang.String r5 = com.xiaomi.push.service.bk.A
            r0.putExtra(r5, r4)
        L2b:
            java.lang.String r4 = com.xiaomi.push.service.bk.t
            r0.putExtra(r4, r3)
            r2.startServiceSafely(r0)
            return
    }
}
