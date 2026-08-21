package com.ta.utdid2.b.a;

public class c {
    private android.content.SharedPreferences.Editor a;
    private android.content.SharedPreferences a;
    private com.ta.utdid2.b.a.b.a a;
    private com.ta.utdid2.b.a.b a;
    private com.ta.utdid2.b.a.d a;
    private java.lang.String a;
    private java.lang.String b;
    private boolean c;
    private boolean d;
    private boolean e;
    private boolean f;
    private android.content.Context mContext;

    public c(android.content.Context r10, java.lang.String r11, java.lang.String r12, boolean r13, boolean r14) {
            r9 = this;
            r9.<init>()
            java.lang.String r0 = ""
            r9.a = r0
            r9.b = r0
            r0 = 0
            r9.c = r0
            r9.d = r0
            r9.e = r0
            r1 = 0
            r9.a = r1
            r9.a = r1
            r9.a = r1
            r9.a = r1
            r9.mContext = r1
            r9.a = r1
            r9.f = r0
            r9.c = r13
            r9.f = r14
            r9.a = r12
            r9.b = r11
            r9.mContext = r10
            java.lang.String r13 = "t"
            r2 = 0
            if (r10 == 0) goto L3c
            android.content.SharedPreferences r4 = r10.getSharedPreferences(r12, r0)
            r9.a = r4
            android.content.SharedPreferences r4 = r9.a
            long r4 = r4.getLong(r13, r2)
            goto L3d
        L3c:
            r4 = r2
        L3d:
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> L42
            goto L46
        L42:
            r6 = move-exception
            r6.printStackTrace()
        L46:
            boolean r6 = com.ta.utdid2.a.a.f.isEmpty(r1)
            if (r6 == 0) goto L51
            r9.e = r0
            r9.d = r0
            goto L70
        L51:
            java.lang.String r6 = "mounted"
            boolean r6 = r1.equals(r6)
            r7 = 1
            if (r6 == 0) goto L5f
            r9.e = r7
            r9.d = r7
            goto L70
        L5f:
            java.lang.String r6 = "mounted_ro"
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L6c
            r9.d = r7
            r9.e = r0
            goto L70
        L6c:
            r9.e = r0
            r9.d = r0
        L70:
            boolean r1 = r9.d
            java.lang.String r6 = "t2"
            if (r1 != 0) goto L7a
            boolean r1 = r9.e
            if (r1 == 0) goto L157
        L7a:
            if (r10 == 0) goto L157
            boolean r1 = com.ta.utdid2.a.a.f.isEmpty(r11)
            if (r1 != 0) goto L157
            com.ta.utdid2.b.a.d r11 = r9.a(r11)
            r9.a = r11
            com.ta.utdid2.b.a.d r11 = r9.a
            if (r11 == 0) goto L157
            com.ta.utdid2.b.a.b r11 = r11.a(r12, r0)     // Catch: java.lang.Exception -> L157
            r9.a = r11     // Catch: java.lang.Exception -> L157
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L157
            long r7 = r11.getLong(r13, r2)     // Catch: java.lang.Exception -> L157
            if (r14 != 0) goto Ld7
            int r11 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r11 <= 0) goto Laf
            android.content.SharedPreferences r10 = r9.a     // Catch: java.lang.Exception -> L155
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L155
            r9.a(r10, r11)     // Catch: java.lang.Exception -> L155
            com.ta.utdid2.b.a.d r10 = r9.a     // Catch: java.lang.Exception -> L155
            com.ta.utdid2.b.a.b r10 = r10.a(r12, r0)     // Catch: java.lang.Exception -> L155
            r9.a = r10     // Catch: java.lang.Exception -> L155
            goto L158
        Laf:
            int r11 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r11 >= 0) goto Lc2
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L155
            android.content.SharedPreferences r13 = r9.a     // Catch: java.lang.Exception -> L155
            r9.a(r11, r13)     // Catch: java.lang.Exception -> L155
            android.content.SharedPreferences r10 = r10.getSharedPreferences(r12, r0)     // Catch: java.lang.Exception -> L155
            r9.a = r10     // Catch: java.lang.Exception -> L155
            goto L158
        Lc2:
            int r10 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r10 != 0) goto L158
            android.content.SharedPreferences r10 = r9.a     // Catch: java.lang.Exception -> L155
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L155
            r9.a(r10, r11)     // Catch: java.lang.Exception -> L155
            com.ta.utdid2.b.a.d r10 = r9.a     // Catch: java.lang.Exception -> L155
            com.ta.utdid2.b.a.b r10 = r10.a(r12, r0)     // Catch: java.lang.Exception -> L155
            r9.a = r10     // Catch: java.lang.Exception -> L155
            goto L158
        Ld7:
            android.content.SharedPreferences r11 = r9.a     // Catch: java.lang.Exception -> L155
            long r13 = r11.getLong(r6, r2)     // Catch: java.lang.Exception -> L155
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L153
            long r4 = r11.getLong(r6, r2)     // Catch: java.lang.Exception -> L153
            int r11 = (r13 > r4 ? 1 : (r13 == r4 ? 0 : -1))
            if (r11 >= 0) goto Lfb
            int r11 = (r13 > r2 ? 1 : (r13 == r2 ? 0 : -1))
            if (r11 <= 0) goto Lfb
            android.content.SharedPreferences r10 = r9.a     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L152
            r9.a(r10, r11)     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.d r10 = r9.a     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.b r10 = r10.a(r12, r0)     // Catch: java.lang.Exception -> L152
            r9.a = r10     // Catch: java.lang.Exception -> L152
            goto L152
        Lfb:
            int r11 = (r13 > r4 ? 1 : (r13 == r4 ? 0 : -1))
            if (r11 <= 0) goto L111
            int r11 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r11 <= 0) goto L111
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L152
            android.content.SharedPreferences r1 = r9.a     // Catch: java.lang.Exception -> L152
            r9.a(r11, r1)     // Catch: java.lang.Exception -> L152
            android.content.SharedPreferences r10 = r10.getSharedPreferences(r12, r0)     // Catch: java.lang.Exception -> L152
            r9.a = r10     // Catch: java.lang.Exception -> L152
            goto L152
        L111:
            int r11 = (r13 > r2 ? 1 : (r13 == r2 ? 0 : -1))
            if (r11 != 0) goto L127
            int r11 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r11 <= 0) goto L127
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L152
            android.content.SharedPreferences r1 = r9.a     // Catch: java.lang.Exception -> L152
            r9.a(r11, r1)     // Catch: java.lang.Exception -> L152
            android.content.SharedPreferences r10 = r10.getSharedPreferences(r12, r0)     // Catch: java.lang.Exception -> L152
            r9.a = r10     // Catch: java.lang.Exception -> L152
            goto L152
        L127:
            int r10 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r10 != 0) goto L13f
            int r10 = (r13 > r2 ? 1 : (r13 == r2 ? 0 : -1))
            if (r10 <= 0) goto L13f
            android.content.SharedPreferences r10 = r9.a     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L152
            r9.a(r10, r11)     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.d r10 = r9.a     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.b r10 = r10.a(r12, r0)     // Catch: java.lang.Exception -> L152
            r9.a = r10     // Catch: java.lang.Exception -> L152
            goto L152
        L13f:
            int r10 = (r13 > r4 ? 1 : (r13 == r4 ? 0 : -1))
            if (r10 != 0) goto L152
            android.content.SharedPreferences r10 = r9.a     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.b r11 = r9.a     // Catch: java.lang.Exception -> L152
            r9.a(r10, r11)     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.d r10 = r9.a     // Catch: java.lang.Exception -> L152
            com.ta.utdid2.b.a.b r10 = r10.a(r12, r0)     // Catch: java.lang.Exception -> L152
            r9.a = r10     // Catch: java.lang.Exception -> L152
        L152:
            r7 = r4
        L153:
            r4 = r13
            goto L158
        L155:
            goto L158
        L157:
            r7 = r2
        L158:
            int r10 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r10 != 0) goto L164
            int r10 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r10 != 0) goto L194
            int r10 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r10 != 0) goto L194
        L164:
            long r10 = java.lang.System.currentTimeMillis()
            boolean r12 = r9.f
            if (r12 == 0) goto L176
            if (r12 == 0) goto L194
            int r12 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r12 != 0) goto L194
            int r12 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r12 != 0) goto L194
        L176:
            android.content.SharedPreferences r12 = r9.a
            if (r12 == 0) goto L184
            android.content.SharedPreferences$Editor r12 = r12.edit()
            r12.putLong(r6, r10)
            r12.commit()
        L184:
            com.ta.utdid2.b.a.b r12 = r9.a     // Catch: java.lang.Exception -> L194
            if (r12 == 0) goto L194
            com.ta.utdid2.b.a.b r12 = r9.a     // Catch: java.lang.Exception -> L194
            com.ta.utdid2.b.a.b$a r12 = r12.a()     // Catch: java.lang.Exception -> L194
            r12.a(r6, r10)     // Catch: java.lang.Exception -> L194
            r12.commit()     // Catch: java.lang.Exception -> L194
        L194:
            return
    }

    private com.ta.utdid2.b.a.d a(java.lang.String r2) {
            r1 = this;
            java.io.File r2 = r1.a(r2)
            if (r2 == 0) goto L14
            com.ta.utdid2.b.a.d r0 = new com.ta.utdid2.b.a.d
            java.lang.String r2 = r2.getAbsolutePath()
            r0.<init>(r2)
            r1.a = r0
            com.ta.utdid2.b.a.d r2 = r1.a
            return r2
        L14:
            r2 = 0
            return r2
    }

    private java.io.File a(java.lang.String r5) {
            r4 = this;
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            if (r0 == 0) goto L2d
            java.io.File r1 = new java.io.File
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String r0 = r0.getAbsolutePath()
            r2[r3] = r0
            r0 = 1
            java.lang.String r3 = java.io.File.separator
            r2[r0] = r3
            r0 = 2
            r2[r0] = r5
            java.lang.String r5 = "%s%s%s"
            java.lang.String r5 = java.lang.String.format(r5, r2)
            r1.<init>(r5)
            boolean r5 = r1.exists()
            if (r5 != 0) goto L2c
            r1.mkdirs()
        L2c:
            return r1
        L2d:
            r5 = 0
            return r5
    }

    private void a(android.content.SharedPreferences r5, com.ta.utdid2.b.a.b r6) {
            r4 = this;
            if (r5 == 0) goto L74
            if (r6 == 0) goto L74
            com.ta.utdid2.b.a.b$a r6 = r6.a()
            if (r6 == 0) goto L74
            r6.b()
            java.util.Map r5 = r5.getAll()
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L19:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L71
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            boolean r2 = r0 instanceof java.lang.String
            if (r2 == 0) goto L39
            java.lang.String r0 = (java.lang.String) r0
            r6.a(r1, r0)
            goto L19
        L39:
            boolean r2 = r0 instanceof java.lang.Integer
            if (r2 == 0) goto L47
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            r6.a(r1, r0)
            goto L19
        L47:
            boolean r2 = r0 instanceof java.lang.Long
            if (r2 == 0) goto L55
            java.lang.Long r0 = (java.lang.Long) r0
            long r2 = r0.longValue()
            r6.a(r1, r2)
            goto L19
        L55:
            boolean r2 = r0 instanceof java.lang.Float
            if (r2 == 0) goto L63
            java.lang.Float r0 = (java.lang.Float) r0
            float r0 = r0.floatValue()
            r6.a(r1, r0)
            goto L19
        L63:
            boolean r2 = r0 instanceof java.lang.Boolean
            if (r2 == 0) goto L19
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            r6.a(r1, r0)
            goto L19
        L71:
            r6.commit()
        L74:
            return
    }

    private void a(com.ta.utdid2.b.a.b r5, android.content.SharedPreferences r6) {
            r4 = this;
            if (r5 == 0) goto L74
            if (r6 == 0) goto L74
            android.content.SharedPreferences$Editor r6 = r6.edit()
            if (r6 == 0) goto L74
            r6.clear()
            java.util.Map r5 = r5.getAll()
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L19:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L71
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            boolean r2 = r0 instanceof java.lang.String
            if (r2 == 0) goto L39
            java.lang.String r0 = (java.lang.String) r0
            r6.putString(r1, r0)
            goto L19
        L39:
            boolean r2 = r0 instanceof java.lang.Integer
            if (r2 == 0) goto L47
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            r6.putInt(r1, r0)
            goto L19
        L47:
            boolean r2 = r0 instanceof java.lang.Long
            if (r2 == 0) goto L55
            java.lang.Long r0 = (java.lang.Long) r0
            long r2 = r0.longValue()
            r6.putLong(r1, r2)
            goto L19
        L55:
            boolean r2 = r0 instanceof java.lang.Float
            if (r2 == 0) goto L63
            java.lang.Float r0 = (java.lang.Float) r0
            float r0 = r0.floatValue()
            r6.putFloat(r1, r0)
            goto L19
        L63:
            boolean r2 = r0 instanceof java.lang.Boolean
            if (r2 == 0) goto L19
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            r6.putBoolean(r1, r0)
            goto L19
        L71:
            r6.commit()
        L74:
            return
    }

    private void b() {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.a
            if (r0 != 0) goto Le
            android.content.SharedPreferences r0 = r1.a
            if (r0 == 0) goto Le
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r1.a = r0
        Le:
            boolean r0 = r1.e
            if (r0 == 0) goto L20
            com.ta.utdid2.b.a.b$a r0 = r1.a
            if (r0 != 0) goto L20
            com.ta.utdid2.b.a.b r0 = r1.a
            if (r0 == 0) goto L20
            com.ta.utdid2.b.a.b$a r0 = r0.a()
            r1.a = r0
        L20:
            r1.b()
            return
    }

    private boolean b() {
            r1 = this;
            com.ta.utdid2.b.a.b r0 = r1.a
            if (r0 == 0) goto Le
            boolean r0 = r0.a()
            if (r0 != 0) goto Ld
            r1.commit()
        Ld:
            return r0
        Le:
            r0 = 0
            return r0
    }

    public boolean commit() {
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences$Editor r2 = r6.a
            r3 = 0
            if (r2 == 0) goto L20
            boolean r4 = r6.f
            if (r4 != 0) goto L16
            android.content.SharedPreferences r4 = r6.a
            if (r4 == 0) goto L16
            java.lang.String r4 = "t"
            r2.putLong(r4, r0)
        L16:
            android.content.SharedPreferences$Editor r0 = r6.a
            boolean r0 = r0.commit()
            if (r0 != 0) goto L20
            r0 = 0
            goto L21
        L20:
            r0 = 1
        L21:
            android.content.SharedPreferences r1 = r6.a
            if (r1 == 0) goto L31
            android.content.Context r1 = r6.mContext
            if (r1 == 0) goto L31
            java.lang.String r2 = r6.a
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)
            r6.a = r1
        L31:
            r1 = 0
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> L37
            goto L3b
        L37:
            r2 = move-exception
            r2.printStackTrace()
        L3b:
            boolean r2 = com.ta.utdid2.a.a.f.isEmpty(r1)
            if (r2 != 0) goto La4
            java.lang.String r2 = "mounted"
            boolean r4 = r1.equals(r2)
            if (r4 == 0) goto L84
            com.ta.utdid2.b.a.b r4 = r6.a
            if (r4 != 0) goto L79
            java.lang.String r4 = r6.b
            com.ta.utdid2.b.a.d r4 = r6.a(r4)
            if (r4 == 0) goto L84
            java.lang.String r5 = r6.a
            com.ta.utdid2.b.a.b r4 = r4.a(r5, r3)
            r6.a = r4
            boolean r4 = r6.f
            if (r4 != 0) goto L69
            android.content.SharedPreferences r4 = r6.a
            com.ta.utdid2.b.a.b r5 = r6.a
            r6.a(r4, r5)
            goto L70
        L69:
            com.ta.utdid2.b.a.b r4 = r6.a
            android.content.SharedPreferences r5 = r6.a
            r6.a(r4, r5)
        L70:
            com.ta.utdid2.b.a.b r4 = r6.a
            com.ta.utdid2.b.a.b$a r4 = r4.a()
            r6.a = r4
            goto L84
        L79:
            com.ta.utdid2.b.a.b$a r4 = r6.a
            if (r4 == 0) goto L84
            boolean r4 = r4.commit()
            if (r4 != 0) goto L84
            r0 = 0
        L84:
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto L96
            java.lang.String r2 = "mounted_ro"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto La4
            com.ta.utdid2.b.a.b r1 = r6.a
            if (r1 == 0) goto La4
        L96:
            com.ta.utdid2.b.a.d r1 = r6.a     // Catch: java.lang.Exception -> La4
            if (r1 == 0) goto La4
            com.ta.utdid2.b.a.d r1 = r6.a     // Catch: java.lang.Exception -> La4
            java.lang.String r2 = r6.a     // Catch: java.lang.Exception -> La4
            com.ta.utdid2.b.a.b r1 = r1.a(r2, r3)     // Catch: java.lang.Exception -> La4
            r6.a = r1     // Catch: java.lang.Exception -> La4
        La4:
            return r0
    }

    public java.lang.String getString(java.lang.String r4) {
            r3 = this;
            r3.b()
            android.content.SharedPreferences r0 = r3.a
            java.lang.String r1 = ""
            if (r0 == 0) goto L14
            java.lang.String r0 = r0.getString(r4, r1)
            boolean r2 = com.ta.utdid2.a.a.f.isEmpty(r0)
            if (r2 != 0) goto L14
            return r0
        L14:
            com.ta.utdid2.b.a.b r0 = r3.a
            if (r0 == 0) goto L1d
            java.lang.String r4 = r0.getString(r4, r1)
            return r4
        L1d:
            return r1
    }

    public void putString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.ta.utdid2.a.a.f.isEmpty(r2)
            if (r0 != 0) goto L1f
            java.lang.String r0 = "t"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L1f
            r1.b()
            android.content.SharedPreferences$Editor r0 = r1.a
            if (r0 == 0) goto L18
            r0.putString(r2, r3)
        L18:
            com.ta.utdid2.b.a.b$a r0 = r1.a
            if (r0 == 0) goto L1f
            r0.a(r2, r3)
        L1f:
            return
    }

    public void remove(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.ta.utdid2.a.a.f.isEmpty(r2)
            if (r0 != 0) goto L1f
            java.lang.String r0 = "t"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L1f
            r1.b()
            android.content.SharedPreferences$Editor r0 = r1.a
            if (r0 == 0) goto L18
            r0.remove(r2)
        L18:
            com.ta.utdid2.b.a.b$a r0 = r1.a
            if (r0 == 0) goto L1f
            r0.a(r2)
        L1f:
            return
    }
}
