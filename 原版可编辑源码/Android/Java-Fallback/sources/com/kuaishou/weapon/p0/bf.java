package com.kuaishou.weapon.p0;

public class bf {
    private int a;

    public bf() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.a = r0
            return
    }

    private static org.json.JSONObject a(android.content.Context r7, java.lang.String r8) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = "content://settings/"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L66
            r1.append(r8)     // Catch: java.lang.Throwable -> L66
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L66
            android.net.Uri r2 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L66
            android.content.ContentResolver r1 = r7.getContentResolver()     // Catch: java.lang.Throwable -> L66
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            android.database.Cursor r7 = r1.query(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L66
        L23:
            boolean r8 = r7.moveToNext()     // Catch: java.lang.Throwable -> L67
            if (r8 == 0) goto L5d
            java.lang.String r8 = "name"
            int r8 = r7.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L67
            java.lang.String r8 = r7.getString(r8)     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = "value"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Throwable -> L67
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L67
            if (r2 != 0) goto L23
            java.lang.String r2 = "android_id"
            boolean r2 = r8.equals(r2)     // Catch: java.lang.Throwable -> L67
            if (r2 != 0) goto L23
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L67
            if (r2 != 0) goto L23
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L67
            r3 = 20
            if (r2 >= r3) goto L23
            r0.put(r8, r1)     // Catch: java.lang.Throwable -> L67
            goto L23
        L5d:
            r7.close()     // Catch: java.lang.Throwable -> L67
            if (r7 == 0) goto L6a
        L62:
            r7.close()     // Catch: java.lang.Throwable -> L6a
            goto L6a
        L66:
            r7 = 0
        L67:
            if (r7 == 0) goto L6a
            goto L62
        L6a:
            return r0
    }

    public static int d(android.content.Context r2) {
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> Ld
            java.lang.String r0 = "screen_brightness"
            r1 = 255(0xff, float:3.57E-43)
            int r2 = android.provider.Settings.System.getInt(r2, r0, r1)     // Catch: java.lang.Exception -> Ld
            goto Le
        Ld:
            r2 = 0
        Le:
            return r2
    }

    public static org.json.JSONObject g(android.content.Context r6) {
            java.lang.String r0 = "system"
            java.lang.String r1 = "global"
            java.lang.String r2 = "secure"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r2 = 0
        L10:
            r3 = 3
            if (r2 >= r3) goto L27
            r3 = r0[r2]     // Catch: java.lang.Exception -> L27
            org.json.JSONObject r4 = a(r6, r3)     // Catch: java.lang.Exception -> L27
            if (r4 == 0) goto L24
            int r5 = r4.length()     // Catch: java.lang.Exception -> L27
            if (r5 <= 0) goto L24
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L27
        L24:
            int r2 = r2 + 1
            goto L10
        L27:
            return r1
    }

    private boolean h(android.content.Context r6) {
            r5 = this;
            java.lang.String r0 = "com.android.internal.widget.LockPatternUtils"
            r1 = 0
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L2e
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L2e
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r1] = r4     // Catch: java.lang.Exception -> L2e
            java.lang.reflect.Constructor r3 = r0.getConstructor(r3)     // Catch: java.lang.Exception -> L2e
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L2e
            r2[r1] = r6     // Catch: java.lang.Exception -> L2e
            java.lang.Object r6 = r3.newInstance(r2)     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "isSecure"
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L2e
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> L2e
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L2e
            java.lang.Object r6 = r0.invoke(r6, r2)     // Catch: java.lang.Exception -> L2e
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Exception -> L2e
            boolean r1 = r6.booleanValue()     // Catch: java.lang.Exception -> L2e
        L2e:
            return r1
    }

    public java.lang.String a(android.content.Context r7) {
            r6 = this;
            java.lang.String r0 = ":"
            java.lang.String r1 = "audio"
            java.lang.Object r7 = r7.getSystemService(r1)     // Catch: java.lang.Throwable -> Lc1
            android.media.AudioManager r7 = (android.media.AudioManager) r7     // Catch: java.lang.Throwable -> Lc1
            if (r7 != 0) goto Lf
            java.lang.String r7 = "RISK_SERVICE_OBJECT_NULL"
            return r7
        Lf:
            r1 = 0
            int r2 = r7.getStreamMaxVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            int r1 = r7.getStreamVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc1
            r3.<init>()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r4 = "0"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r5.<init>()     // Catch: java.lang.Throwable -> Lc1
            r5.append(r2)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r0)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> Lc1
            r3.put(r4, r1)     // Catch: java.lang.Throwable -> Lc1
            r1 = 1
            int r2 = r7.getStreamMaxVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            int r1 = r7.getStreamVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r4 = "1"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r5.<init>()     // Catch: java.lang.Throwable -> Lc1
            r5.append(r2)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r0)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> Lc1
            r3.put(r4, r1)     // Catch: java.lang.Throwable -> Lc1
            r1 = 2
            int r2 = r7.getStreamMaxVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            int r1 = r7.getStreamVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r4 = "2"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r5.<init>()     // Catch: java.lang.Throwable -> Lc1
            r5.append(r2)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r0)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> Lc1
            r3.put(r4, r1)     // Catch: java.lang.Throwable -> Lc1
            r1 = 3
            int r2 = r7.getStreamMaxVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            int r1 = r7.getStreamVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r4 = "3"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r5.<init>()     // Catch: java.lang.Throwable -> Lc1
            r5.append(r2)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r0)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> Lc1
            r3.put(r4, r1)     // Catch: java.lang.Throwable -> Lc1
            r1 = 4
            int r2 = r7.getStreamMaxVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            int r7 = r7.getStreamVolume(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "4"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r4.<init>()     // Catch: java.lang.Throwable -> Lc1
            r4.append(r2)     // Catch: java.lang.Throwable -> Lc1
            r4.append(r0)     // Catch: java.lang.Throwable -> Lc1
            r4.append(r7)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> Lc1
            r3.put(r1, r7)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> Lc1
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lc1
            if (r0 == 0) goto Lc0
            java.lang.String r7 = "RISK_GET_FIELD_EMPTY"
        Lc0:
            return r7
        Lc1:
            java.lang.String r7 = "RISK_EXCEPTION_HAPPEN"
            return r7
    }

    public boolean a() {
            r2 = this;
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public int b() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public boolean b(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "keyguard"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.KeyguardManager r2 = (android.app.KeyguardManager) r2
            boolean r2 = r2.inKeyguardRestrictedInputMode()
            return r2
    }

    public boolean c(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "keyguard"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> L18
            android.app.KeyguardManager r3 = (android.app.KeyguardManager) r3     // Catch: java.lang.Exception -> L18
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L18
            r1 = 28
            if (r0 < r1) goto L13
            boolean r3 = r3.isKeyguardLocked()     // Catch: java.lang.Exception -> L18
            goto L17
        L13:
            boolean r3 = r3.inKeyguardRestrictedInputMode()     // Catch: java.lang.Exception -> L18
        L17:
            return r3
        L18:
            r3 = 0
            return r3
    }

    public boolean e(android.content.Context r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L13
            java.lang.String r0 = "keyguard"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.app.KeyguardManager r3 = (android.app.KeyguardManager) r3
            boolean r3 = r3.isKeyguardSecure()
            return r3
        L13:
            boolean r3 = r2.h(r3)
            return r3
    }

    public org.json.JSONObject f(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "sensor"
            java.lang.Object r4 = r4.getSystemService(r0)     // Catch: java.lang.Exception -> L39
            android.hardware.SensorManager r4 = (android.hardware.SensorManager) r4     // Catch: java.lang.Exception -> L39
            if (r4 == 0) goto L39
            r0 = -1
            java.util.List r4 = r4.getSensorList(r0)     // Catch: java.lang.Exception -> L39
            if (r4 == 0) goto L39
            int r0 = r4.size()     // Catch: java.lang.Exception -> L39
            if (r0 <= 0) goto L39
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L39
            r0.<init>()     // Catch: java.lang.Exception -> L39
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L39
        L20:
            boolean r1 = r4.hasNext()     // Catch: java.lang.Exception -> L39
            if (r1 == 0) goto L38
            java.lang.Object r1 = r4.next()     // Catch: java.lang.Exception -> L39
            android.hardware.Sensor r1 = (android.hardware.Sensor) r1     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = r1.getName()     // Catch: java.lang.Exception -> L39
            java.lang.String r1 = r1.getVendor()     // Catch: java.lang.Exception -> L39
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L39
            goto L20
        L38:
            return r0
        L39:
            r4 = 0
            return r4
    }
}
