package com.ta.utdid2.device;

public class c {
    private static com.ta.utdid2.device.c a;
    private static final java.lang.Object e = null;
    private static final java.lang.String j = null;
    private com.ta.utdid2.b.a.c a;
    private com.ta.utdid2.device.d a;
    private com.ta.utdid2.b.a.c b;
    private java.util.regex.Pattern b;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private android.content.Context mContext;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.ta.utdid2.device.c.e = r0
            r0 = 0
            com.ta.utdid2.device.c.a = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ".UTSystemConfig"
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "Global"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.ta.utdid2.device.c.j = r0
            return
    }

    private c(android.content.Context r14) {
            r13 = this;
            r13.<init>()
            r0 = 0
            r13.mContext = r0
            r13.g = r0
            r13.a = r0
            java.lang.String r1 = "xx_utdid_key"
            r13.h = r1
            java.lang.String r1 = "xx_utdid_domain"
            r13.i = r1
            r13.a = r0
            r13.b = r0
            java.lang.String r0 = "[^0-9a-zA-Z=/+]+"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            r13.b = r0
            r13.mContext = r14
            com.ta.utdid2.b.a.c r0 = new com.ta.utdid2.b.a.c
            java.lang.String r3 = com.ta.utdid2.device.c.j
            java.lang.String r4 = "Alvin2"
            r5 = 0
            r6 = 1
            r1 = r0
            r2 = r14
            r1.<init>(r2, r3, r4, r5, r6)
            r13.b = r0
            com.ta.utdid2.b.a.c r0 = new com.ta.utdid2.b.a.c
            java.lang.String r9 = ".DataStorage"
            java.lang.String r10 = "ContextData"
            r11 = 0
            r12 = 1
            r7 = r0
            r8 = r14
            r7.<init>(r8, r9, r10, r11, r12)
            r13.a = r0
            com.ta.utdid2.device.d r14 = new com.ta.utdid2.device.d
            r14.<init>()
            r13.a = r14
            r14 = 1
            java.lang.Object[] r0 = new java.lang.Object[r14]
            java.lang.String r1 = r13.h
            int r1 = com.ta.utdid2.a.a.f.hashCode(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "K_%d"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            r13.h = r0
            java.lang.Object[] r14 = new java.lang.Object[r14]
            java.lang.String r0 = r13.i
            int r0 = com.ta.utdid2.a.a.f.hashCode(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r14[r2] = r0
            java.lang.String r0 = "D_%d"
            java.lang.String r14 = java.lang.String.format(r0, r14)
            r13.i = r14
            return
    }

    public static com.ta.utdid2.device.c a(android.content.Context r2) {
            if (r2 == 0) goto L1e
            com.ta.utdid2.device.c r0 = com.ta.utdid2.device.c.a
            if (r0 != 0) goto L1e
            java.lang.Object r0 = com.ta.utdid2.device.c.e
            monitor-enter(r0)
            com.ta.utdid2.device.c r1 = com.ta.utdid2.device.c.a     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L19
            com.ta.utdid2.device.c r1 = new com.ta.utdid2.device.c     // Catch: java.lang.Throwable -> L1b
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1b
            com.ta.utdid2.device.c.a = r1     // Catch: java.lang.Throwable -> L1b
            com.ta.utdid2.device.c r2 = com.ta.utdid2.device.c.a     // Catch: java.lang.Throwable -> L1b
            r2.c()     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            goto L1e
        L1b:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r2
        L1e:
            com.ta.utdid2.device.c r2 = com.ta.utdid2.device.c.a
            return r2
    }

    private boolean a(java.lang.String r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L2a
            java.lang.String r1 = "\n"
            boolean r1 = r5.endsWith(r1)
            r2 = 1
            if (r1 == 0) goto L15
            int r1 = r5.length()
            int r1 = r1 - r2
            java.lang.String r5 = r5.substring(r0, r1)
        L15:
            r1 = 24
            int r3 = r5.length()
            if (r1 != r3) goto L2a
            java.util.regex.Pattern r1 = r4.b
            java.util.regex.Matcher r5 = r1.matcher(r5)
            boolean r5 = r5.find()
            if (r5 != 0) goto L2a
            return r2
        L2a:
            return r0
    }

    public static java.lang.String b(byte[] r4) throws java.lang.Exception {
            r0 = 44
            byte[] r0 = new byte[r0]
            r0 = {x0028: FILL_ARRAY_DATA , data: [69, 114, 116, -33, 125, -54, -31, 86, -11, 11, -78, -96, -17, -99, 64, 23, -95, -126, -82, -64, 113, 116, -16, -103, 49, -30, 9, -39, 33, -80, -68, -78, -117, 53, 30, -122, 64, -104, 74, -49, 106, 85, -38, -93} // fill-array
            java.lang.String r1 = "HmacSHA1"
            javax.crypto.Mac r1 = javax.crypto.Mac.getInstance(r1)
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec
            byte[] r0 = com.ta.utdid2.a.a.e.a(r0)
            java.lang.String r3 = r1.getAlgorithm()
            r2.<init>(r0, r3)
            r1.init(r2)
            byte[] r4 = r1.doFinal(r4)
            r0 = 2
            java.lang.String r4 = com.ta.utdid2.a.a.b.encodeToString(r4, r0)
            return r4
    }

    private byte[] b() throws java.lang.Exception {
            r5 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            int r2 = (int) r1
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            int r1 = r1.nextInt()
            byte[] r2 = com.ta.utdid2.a.a.c.getBytes(r2)
            byte[] r1 = com.ta.utdid2.a.a.c.getBytes(r1)
            r3 = 4
            r4 = 0
            r0.write(r2, r4, r3)
            r0.write(r1, r4, r3)
            r1 = 3
            r0.write(r1)
            r0.write(r4)
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L34
            java.lang.String r1 = com.ta.utdid2.a.a.d.getImei(r1)     // Catch: java.lang.Exception -> L34
            goto L4e
        L34:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            java.util.Random r2 = new java.util.Random
            r2.<init>()
            int r2 = r2.nextInt()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
        L4e:
            int r1 = com.ta.utdid2.a.a.f.hashCode(r1)
            byte[] r1 = com.ta.utdid2.a.a.c.getBytes(r1)
            r0.write(r1, r4, r3)
            byte[] r1 = r0.toByteArray()
            java.lang.String r1 = b(r1)
            int r1 = com.ta.utdid2.a.a.f.hashCode(r1)
            byte[] r1 = com.ta.utdid2.a.a.c.getBytes(r1)
            r0.write(r1)
            byte[] r0 = r0.toByteArray()
            return r0
    }

    private java.lang.String c() {
            r2 = this;
            com.ta.utdid2.b.a.c r0 = r2.b
            if (r0 == 0) goto L19
            java.lang.String r1 = "UTDID2"
            java.lang.String r0 = r0.getString(r1)
            boolean r1 = com.ta.utdid2.a.a.f.isEmpty(r0)
            if (r1 != 0) goto L19
            com.ta.utdid2.device.d r1 = r2.a
            java.lang.String r1 = r1.c(r0)
            if (r1 == 0) goto L19
            return r0
        L19:
            r0 = 0
            return r0
    }

    private void c() {
            r4 = this;
            com.ta.utdid2.b.a.c r0 = r4.b
            if (r0 == 0) goto L66
            java.lang.String r1 = "UTDID2"
            java.lang.String r0 = r0.getString(r1)
            boolean r0 = com.ta.utdid2.a.a.f.isEmpty(r0)
            if (r0 == 0) goto L21
            com.ta.utdid2.b.a.c r0 = r4.b
            java.lang.String r1 = "UTDID"
            java.lang.String r0 = r0.getString(r1)
            boolean r1 = com.ta.utdid2.a.a.f.isEmpty(r0)
            if (r1 != 0) goto L21
            r4.d(r0)
        L21:
            r0 = 0
            com.ta.utdid2.b.a.c r1 = r4.b
            java.lang.String r2 = "DID"
            java.lang.String r1 = r1.getString(r2)
            boolean r1 = com.ta.utdid2.a.a.f.isEmpty(r1)
            r3 = 1
            if (r1 != 0) goto L37
            com.ta.utdid2.b.a.c r0 = r4.b
            r0.remove(r2)
            r0 = 1
        L37:
            com.ta.utdid2.b.a.c r1 = r4.b
            java.lang.String r2 = "EI"
            java.lang.String r1 = r1.getString(r2)
            boolean r1 = com.ta.utdid2.a.a.f.isEmpty(r1)
            if (r1 != 0) goto L4b
            com.ta.utdid2.b.a.c r0 = r4.b
            r0.remove(r2)
            r0 = 1
        L4b:
            com.ta.utdid2.b.a.c r1 = r4.b
            java.lang.String r2 = "SI"
            java.lang.String r1 = r1.getString(r2)
            boolean r1 = com.ta.utdid2.a.a.f.isEmpty(r1)
            if (r1 != 0) goto L5f
            com.ta.utdid2.b.a.c r0 = r4.b
            r0.remove(r2)
            r0 = 1
        L5f:
            if (r0 == 0) goto L66
            com.ta.utdid2.b.a.c r0 = r4.b
            r0.commit()
        L66:
            return
    }

    private void d(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.a(r3)
            if (r0 == 0) goto L2f
            java.lang.String r0 = "\n"
            boolean r0 = r3.endsWith(r0)
            if (r0 == 0) goto L19
            r0 = 0
            int r1 = r3.length()
            int r1 = r1 + (-1)
            java.lang.String r3 = r3.substring(r0, r1)
        L19:
            int r0 = r3.length()
            r1 = 24
            if (r0 != r1) goto L2f
            com.ta.utdid2.b.a.c r0 = r2.b
            if (r0 == 0) goto L2f
            java.lang.String r1 = "UTDID2"
            r0.putString(r1, r3)
            com.ta.utdid2.b.a.c r3 = r2.b
            r3.commit()
        L2f:
            return
    }

    private void e(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L1e
            com.ta.utdid2.b.a.c r0 = r2.a
            if (r0 == 0) goto L1e
            java.lang.String r1 = r2.h
            java.lang.String r0 = r0.getString(r1)
            boolean r0 = r3.equals(r0)
            if (r0 != 0) goto L1e
            com.ta.utdid2.b.a.c r0 = r2.a
            java.lang.String r1 = r2.h
            r0.putString(r1, r3)
            com.ta.utdid2.b.a.c r3 = r2.a
            r3.commit()
        L1e:
            return
    }

    private boolean e() {
            r4 = this;
            android.content.Context r0 = r4.mContext
            int r1 = android.os.Binder.getCallingPid()
            int r2 = android.os.Binder.getCallingUid()
            java.lang.String r3 = "android.permission.WRITE_SETTINGS"
            int r0 = r0.checkPermission(r3, r1, r2)
            if (r0 != 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    private void f(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "mqBRboGZkQPcAkyk"
            boolean r1 = r3.e()
            if (r1 == 0) goto L45
            boolean r1 = r3.a(r4)
            if (r1 == 0) goto L45
            java.lang.String r1 = "\n"
            boolean r1 = r4.endsWith(r1)
            if (r1 == 0) goto L21
            r1 = 0
            int r2 = r4.length()
            int r2 = r2 + (-1)
            java.lang.String r4 = r4.substring(r1, r2)
        L21:
            r1 = 24
            int r2 = r4.length()
            if (r1 != r2) goto L45
            r1 = 0
            android.content.Context r2 = r3.mContext     // Catch: java.lang.Exception -> L35
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = android.provider.Settings.System.getString(r2, r0)     // Catch: java.lang.Exception -> L35
            goto L36
        L35:
        L36:
            boolean r1 = r3.a(r1)
            if (r1 != 0) goto L45
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Exception -> L45
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> L45
            android.provider.Settings.System.putString(r1, r0, r4)     // Catch: java.lang.Exception -> L45
        L45:
            return
    }

    private void g(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "dxCRMxhQkdGePGnp"
            android.content.Context r1 = r2.mContext     // Catch: java.lang.Exception -> Ld
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = android.provider.Settings.System.getString(r1, r0)     // Catch: java.lang.Exception -> Ld
            goto Le
        Ld:
            r1 = 0
        Le:
            boolean r1 = r3.equals(r1)
            if (r1 != 0) goto L1d
            android.content.Context r1 = r2.mContext     // Catch: java.lang.Exception -> L1d
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> L1d
            android.provider.Settings.System.putString(r1, r0, r3)     // Catch: java.lang.Exception -> L1d
        L1d:
            return
    }

    private void h(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.e()
            if (r0 == 0) goto Lb
            if (r2 == 0) goto Lb
            r1.g(r2)
        Lb:
            return
    }

    public synchronized java.lang.String d() {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = r2.e()     // Catch: java.lang.Throwable -> L3e
            r2.g = r0     // Catch: java.lang.Throwable -> L3e
            java.lang.String r0 = r2.g     // Catch: java.lang.Throwable -> L3e
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3e
            if (r0 != 0) goto L13
            java.lang.String r0 = r2.g     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r2)
            return r0
        L13:
            byte[] r0 = r2.b()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            if (r0 == 0) goto L3b
            r1 = 2
            java.lang.String r1 = com.ta.utdid2.a.a.b.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            r2.g = r1     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            java.lang.String r1 = r2.g     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            r2.d(r1)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            com.ta.utdid2.device.d r1 = r2.a     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            java.lang.String r0 = r1.c(r0)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            if (r0 == 0) goto L33
            r2.h(r0)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            r2.e(r0)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
        L33:
            java.lang.String r0 = r2.g     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3e
            monitor-exit(r2)
            return r0
        L37:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L3e
        L3b:
            r0 = 0
            monitor-exit(r2)
            return r0
        L3e:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized java.lang.String e() {
            r6 = this;
            monitor-enter(r6)
            java.lang.String r0 = ""
            android.content.Context r1 = r6.mContext     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> Le5
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> Le5
            java.lang.String r2 = "mqBRboGZkQPcAkyk"
            java.lang.String r0 = android.provider.Settings.System.getString(r1, r2)     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> Le5
        Lf:
            boolean r1 = r6.a(r0)     // Catch: java.lang.Throwable -> Le5
            if (r1 == 0) goto L17
            monitor-exit(r6)
            return r0
        L17:
            com.ta.utdid2.device.e r0 = new com.ta.utdid2.device.e     // Catch: java.lang.Throwable -> Le5
            r0.<init>()     // Catch: java.lang.Throwable -> Le5
            r1 = 0
            r2 = 0
            android.content.Context r3 = r6.mContext     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> Le5
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> Le5
            java.lang.String r4 = "dxCRMxhQkdGePGnp"
            java.lang.String r3 = android.provider.Settings.System.getString(r3, r4)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> Le5
            goto L2c
        L2b:
            r3 = r2
        L2c:
            boolean r4 = com.ta.utdid2.a.a.f.isEmpty(r3)     // Catch: java.lang.Throwable -> Le5
            if (r4 != 0) goto L83
            java.lang.String r4 = r0.e(r3)     // Catch: java.lang.Throwable -> Le5
            boolean r5 = r6.a(r4)     // Catch: java.lang.Throwable -> Le5
            if (r5 == 0) goto L41
            r6.f(r4)     // Catch: java.lang.Throwable -> Le5
            monitor-exit(r6)
            return r4
        L41:
            java.lang.String r4 = r0.d(r3)     // Catch: java.lang.Throwable -> Le5
            boolean r5 = r6.a(r4)     // Catch: java.lang.Throwable -> Le5
            if (r5 == 0) goto L66
            com.ta.utdid2.device.d r5 = r6.a     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = r5.c(r4)     // Catch: java.lang.Throwable -> Le5
            boolean r5 = com.ta.utdid2.a.a.f.isEmpty(r4)     // Catch: java.lang.Throwable -> Le5
            if (r5 != 0) goto L66
            r6.h(r4)     // Catch: java.lang.Throwable -> Le5
            android.content.Context r4 = r6.mContext     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> Le5
            android.content.ContentResolver r4 = r4.getContentResolver()     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> Le5
            java.lang.String r5 = "dxCRMxhQkdGePGnp"
            java.lang.String r3 = android.provider.Settings.System.getString(r4, r5)     // Catch: java.lang.Exception -> L66 java.lang.Throwable -> Le5
        L66:
            com.ta.utdid2.device.d r4 = r6.a     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = r4.d(r3)     // Catch: java.lang.Throwable -> Le5
            boolean r5 = r6.a(r4)     // Catch: java.lang.Throwable -> Le5
            if (r5 == 0) goto L84
            r6.g = r4     // Catch: java.lang.Throwable -> Le5
            r6.d(r4)     // Catch: java.lang.Throwable -> Le5
            r6.e(r3)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r0 = r6.g     // Catch: java.lang.Throwable -> Le5
            r6.f(r0)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r0 = r6.g     // Catch: java.lang.Throwable -> Le5
            monitor-exit(r6)
            return r0
        L83:
            r1 = 1
        L84:
            java.lang.String r3 = r6.c()     // Catch: java.lang.Throwable -> Le5
            boolean r4 = r6.a(r3)     // Catch: java.lang.Throwable -> Le5
            if (r4 == 0) goto La3
            com.ta.utdid2.device.d r0 = r6.a     // Catch: java.lang.Throwable -> Le5
            java.lang.String r0 = r0.c(r3)     // Catch: java.lang.Throwable -> Le5
            if (r1 == 0) goto L99
            r6.h(r0)     // Catch: java.lang.Throwable -> Le5
        L99:
            r6.f(r3)     // Catch: java.lang.Throwable -> Le5
            r6.e(r0)     // Catch: java.lang.Throwable -> Le5
            r6.g = r3     // Catch: java.lang.Throwable -> Le5
            monitor-exit(r6)
            return r3
        La3:
            com.ta.utdid2.b.a.c r3 = r6.a     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = r6.h     // Catch: java.lang.Throwable -> Le5
            java.lang.String r3 = r3.getString(r4)     // Catch: java.lang.Throwable -> Le5
            boolean r4 = com.ta.utdid2.a.a.f.isEmpty(r3)     // Catch: java.lang.Throwable -> Le5
            if (r4 != 0) goto Le3
            java.lang.String r0 = r0.d(r3)     // Catch: java.lang.Throwable -> Le5
            boolean r4 = r6.a(r0)     // Catch: java.lang.Throwable -> Le5
            if (r4 != 0) goto Lc1
            com.ta.utdid2.device.d r0 = r6.a     // Catch: java.lang.Throwable -> Le5
            java.lang.String r0 = r0.d(r3)     // Catch: java.lang.Throwable -> Le5
        Lc1:
            boolean r3 = r6.a(r0)     // Catch: java.lang.Throwable -> Le5
            if (r3 == 0) goto Le3
            com.ta.utdid2.device.d r3 = r6.a     // Catch: java.lang.Throwable -> Le5
            java.lang.String r3 = r3.c(r0)     // Catch: java.lang.Throwable -> Le5
            boolean r4 = com.ta.utdid2.a.a.f.isEmpty(r0)     // Catch: java.lang.Throwable -> Le5
            if (r4 != 0) goto Le3
            r6.g = r0     // Catch: java.lang.Throwable -> Le5
            if (r1 == 0) goto Lda
            r6.h(r3)     // Catch: java.lang.Throwable -> Le5
        Lda:
            java.lang.String r0 = r6.g     // Catch: java.lang.Throwable -> Le5
            r6.d(r0)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r0 = r6.g     // Catch: java.lang.Throwable -> Le5
            monitor-exit(r6)
            return r0
        Le3:
            monitor-exit(r6)
            return r2
        Le5:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public synchronized java.lang.String getValue() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.g     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto L9
            java.lang.String r0 = r1.g     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        L9:
            java.lang.String r0 = r1.d()     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
