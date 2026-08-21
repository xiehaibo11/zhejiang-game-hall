package com.huawei.hms.aaid.utils;

public class PushPreferences {
    public static final java.lang.String TAG = "PushPreferences";
    public android.content.SharedPreferences a;

    public PushPreferences(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            r4.<init>()
            if (r5 == 0) goto L45
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            r2 = 0
            if (r0 < r1) goto L2f
            android.content.Context r0 = r5.createDeviceProtectedStorageContext()
            java.lang.String r1 = "move_to_de_records"
            android.content.SharedPreferences r1 = r0.getSharedPreferences(r1, r2)
            boolean r3 = r1.getBoolean(r6, r2)
            if (r3 != 0) goto L2e
            boolean r3 = r0.moveSharedPreferencesFrom(r5, r6)
            if (r3 != 0) goto L23
            goto L2f
        L23:
            android.content.SharedPreferences$Editor r5 = r1.edit()
            r1 = 1
            r5.putBoolean(r6, r1)
            r5.apply()
        L2e:
            r5 = r0
        L2f:
            android.content.SharedPreferences r0 = r4.b(r5, r6)
            r4.a = r0
            if (r0 != 0) goto L44
            java.lang.String r0 = "PushPreferences"
            java.lang.String r1 = "get new sharedPreferences failed,start to get from context. "
            com.huawei.hms.support.log.HMSLog.w(r0, r1)
            android.content.SharedPreferences r5 = r5.getSharedPreferences(r6, r2)
            r4.a = r5
        L44:
            return
        L45:
            java.lang.NullPointerException r5 = new java.lang.NullPointerException
            java.lang.String r6 = "context is null!"
            r5.<init>(r6)
            throw r5
    }

    public final java.io.File a(android.content.Context r6, java.lang.String r7) {
            r5 = this;
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L66
            r2 = 24
            java.lang.String r3 = ".xml"
            java.lang.String r4 = "/shared_prefs"
            if (r1 < r2) goto L33
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r2.<init>()     // Catch: java.lang.Exception -> L66
            java.io.File r6 = r6.getDataDir()     // Catch: java.lang.Exception -> L66
            r2.append(r6)     // Catch: java.lang.Exception -> L66
            r2.append(r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r2.<init>()     // Catch: java.lang.Exception -> L66
            r2.append(r7)     // Catch: java.lang.Exception -> L66
            r2.append(r3)     // Catch: java.lang.Exception -> L66
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Exception -> L66
            r1.<init>(r6, r7)     // Catch: java.lang.Exception -> L66
            goto L5e
        L33:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r2.<init>()     // Catch: java.lang.Exception -> L66
            java.io.File r6 = r6.getFilesDir()     // Catch: java.lang.Exception -> L66
            java.lang.String r6 = r6.getParent()     // Catch: java.lang.Exception -> L66
            r2.append(r6)     // Catch: java.lang.Exception -> L66
            r2.append(r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r2.<init>()     // Catch: java.lang.Exception -> L66
            r2.append(r7)     // Catch: java.lang.Exception -> L66
            r2.append(r3)     // Catch: java.lang.Exception -> L66
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Exception -> L66
            r1.<init>(r6, r7)     // Catch: java.lang.Exception -> L66
        L5e:
            boolean r6 = r1.exists()     // Catch: java.lang.Exception -> L66
            if (r6 != 0) goto L65
            return r0
        L65:
            return r1
        L66:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "get failed error."
            r7.append(r1)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            java.lang.String r7 = "PushPreferences"
            com.huawei.hms.support.log.HMSLog.e(r7, r6)
            return r0
    }

    public final android.content.SharedPreferences b(android.content.Context r7, java.lang.String r8) {
            r6 = this;
            java.io.File r7 = r6.a(r7, r8)
            r8 = 0
            if (r7 != 0) goto L8
            return r8
        L8:
            java.lang.String r0 = "android.app.SharedPreferencesImpl"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L34
            r1 = 2
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L34
            java.lang.Class<java.io.File> r3 = java.io.File.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Exception -> L34
            java.lang.Class r3 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L34
            r5 = 1
            r2[r5] = r3     // Catch: java.lang.Exception -> L34
            java.lang.reflect.Constructor r0 = r0.getDeclaredConstructor(r2)     // Catch: java.lang.Exception -> L34
            r0.setAccessible(r5)     // Catch: java.lang.Exception -> L34
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L34
            r1[r4] = r7     // Catch: java.lang.Exception -> L34
            java.lang.Integer r7 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L34
            r1[r5] = r7     // Catch: java.lang.Exception -> L34
            java.lang.Object r7 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L34
            android.content.SharedPreferences r7 = (android.content.SharedPreferences) r7     // Catch: java.lang.Exception -> L34
            r8 = r7
            goto L4f
        L34:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "get SharedPreferences error."
            r0.append(r1)
            java.lang.String r7 = r7.getMessage()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            java.lang.String r0 = "PushPreferences"
            com.huawei.hms.support.log.HMSLog.e(r0, r7)
        L4f:
            return r8
    }

    public boolean clear() {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a
            if (r0 == 0) goto L11
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.clear()
            boolean r0 = r0.commit()
            return r0
        L11:
            r0 = 0
            return r0
    }

    public boolean containsKey(java.lang.String r2) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a
            if (r0 == 0) goto Lc
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public java.util.Map<java.lang.String, ?> getAll() {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a
            if (r0 == 0) goto L9
            java.util.Map r0 = r0.getAll()
            return r0
        L9:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return r0
    }

    public boolean getBoolean(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a
            r1 = 0
            if (r0 == 0) goto Lc
            boolean r3 = r0.getBoolean(r3, r1)
            if (r3 == 0) goto Lc
            r1 = 1
        Lc:
            return r1
    }

    public int getInt(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a
            r1 = 0
            if (r0 == 0) goto L9
            int r1 = r0.getInt(r3, r1)
        L9:
            return r1
    }

    public long getLong(java.lang.String r4) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            r1 = 0
            if (r0 == 0) goto La
            long r1 = r0.getLong(r4, r1)
        La:
            return r1
    }

    public java.lang.String getString(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a
            java.lang.String r1 = ""
            if (r0 == 0) goto La
            java.lang.String r1 = r0.getString(r3, r1)
        La:
            return r1
    }

    public android.content.ContentValues read() {
            r6 = this;
            android.content.SharedPreferences r0 = r6.a
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.Map r0 = r0.getAll()
            if (r0 != 0) goto Ld
            return r1
        Ld:
            android.content.ContentValues r1 = new android.content.ContentValues
            r1.<init>()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L1a:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L80
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            boolean r4 = r2 instanceof java.lang.String
            if (r4 == 0) goto L3c
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.put(r3, r2)
            goto L1a
        L3c:
            boolean r4 = r2 instanceof java.lang.Integer
            if (r4 != 0) goto L7a
            boolean r4 = r2 instanceof java.lang.Short
            if (r4 != 0) goto L7a
            boolean r4 = r2 instanceof java.lang.Byte
            if (r4 == 0) goto L49
            goto L7a
        L49:
            boolean r4 = r2 instanceof java.lang.Long
            if (r4 == 0) goto L53
            java.lang.Long r2 = (java.lang.Long) r2
            r1.put(r3, r2)
            goto L1a
        L53:
            boolean r4 = r2 instanceof java.lang.Float
            if (r4 == 0) goto L5d
            java.lang.Float r2 = (java.lang.Float) r2
            r1.put(r3, r2)
            goto L1a
        L5d:
            boolean r4 = r2 instanceof java.lang.Double
            if (r4 == 0) goto L70
            java.lang.Double r2 = (java.lang.Double) r2
            double r4 = r2.doubleValue()
            float r2 = (float) r4
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            r1.put(r3, r2)
            goto L1a
        L70:
            boolean r4 = r2 instanceof java.lang.Boolean
            if (r4 == 0) goto L1a
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            r1.put(r3, r2)
            goto L1a
        L7a:
            java.lang.Integer r2 = (java.lang.Integer) r2
            r1.put(r3, r2)
            goto L1a
        L80:
            return r1
    }

    public boolean removeKey(java.lang.String r2) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a
            if (r0 == 0) goto L1b
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L1b
            android.content.SharedPreferences r0 = r1.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            if (r0 == 0) goto L1b
            android.content.SharedPreferences$Editor r2 = r0.remove(r2)
            boolean r2 = r2.commit()
            return r2
        L1b:
            r2 = 0
            return r2
    }

    public boolean removeKey(java.lang.String[] r5) {
            r4 = this;
            android.content.SharedPreferences r0 = r4.a
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r0 = r5.length
        L7:
            if (r1 >= r0) goto L1f
            r2 = r5[r1]
            android.content.SharedPreferences r3 = r4.a
            boolean r3 = r3.contains(r2)
            if (r3 == 0) goto L1c
            android.content.SharedPreferences r3 = r4.a
            android.content.SharedPreferences$Editor r3 = r3.edit()
            r3.remove(r2)
        L1c:
            int r1 = r1 + 1
            goto L7
        L1f:
            android.content.SharedPreferences r5 = r4.a
            android.content.SharedPreferences$Editor r5 = r5.edit()
            r5.commit()
            r5 = 1
            return r5
    }

    public boolean save(java.lang.String r4, java.lang.Object r5) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            if (r0 != 0) goto L6
            r4 = 0
            return r4
        L6:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            boolean r1 = r5 instanceof java.lang.String
            if (r1 == 0) goto L16
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r0.putString(r4, r5)
            goto L78
        L16:
            boolean r1 = r5 instanceof java.lang.Integer
            if (r1 == 0) goto L24
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            r0.putInt(r4, r5)
            goto L78
        L24:
            boolean r1 = r5 instanceof java.lang.Short
            if (r1 == 0) goto L32
            java.lang.Short r5 = (java.lang.Short) r5
            short r5 = r5.shortValue()
            r0.putInt(r4, r5)
            goto L78
        L32:
            boolean r1 = r5 instanceof java.lang.Byte
            if (r1 == 0) goto L40
            java.lang.Byte r5 = (java.lang.Byte) r5
            byte r5 = r5.byteValue()
            r0.putInt(r4, r5)
            goto L78
        L40:
            boolean r1 = r5 instanceof java.lang.Long
            if (r1 == 0) goto L4e
            java.lang.Long r5 = (java.lang.Long) r5
            long r1 = r5.longValue()
            r0.putLong(r4, r1)
            goto L78
        L4e:
            boolean r1 = r5 instanceof java.lang.Float
            if (r1 == 0) goto L5c
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            r0.putFloat(r4, r5)
            goto L78
        L5c:
            boolean r1 = r5 instanceof java.lang.Double
            if (r1 == 0) goto L6b
            java.lang.Double r5 = (java.lang.Double) r5
            double r1 = r5.doubleValue()
            float r5 = (float) r1
            r0.putFloat(r4, r5)
            goto L78
        L6b:
            boolean r1 = r5 instanceof java.lang.Boolean
            if (r1 == 0) goto L78
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            r0.putBoolean(r4, r5)
        L78:
            boolean r4 = r0.commit()
            return r4
    }

    public void saveBoolean(java.lang.String r2, boolean r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a
            if (r0 != 0) goto L5
            return
        L5:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            if (r0 == 0) goto L12
            android.content.SharedPreferences$Editor r2 = r0.putBoolean(r2, r3)
            r2.commit()
        L12:
            return
    }

    public void saveInt(java.lang.String r2, java.lang.Integer r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a
            if (r0 != 0) goto L5
            return
        L5:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            if (r0 == 0) goto L16
            int r3 = r3.intValue()
            android.content.SharedPreferences$Editor r2 = r0.putInt(r2, r3)
            r2.commit()
        L16:
            return
    }

    public void saveLong(java.lang.String r4, java.lang.Long r5) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            if (r0 != 0) goto L5
            return
        L5:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            if (r0 == 0) goto L16
            long r1 = r5.longValue()
            android.content.SharedPreferences$Editor r4 = r0.putLong(r4, r1)
            r4.commit()
        L16:
            return
    }

    public void saveMap(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L22
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            r2.save(r1, r0)
            goto L8
        L22:
            return
    }

    public boolean saveString(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            if (r0 == 0) goto L15
            android.content.SharedPreferences$Editor r3 = r0.putString(r3, r4)
            boolean r3 = r3.commit()
            return r3
        L15:
            return r1
    }

    public boolean write(android.content.ContentValues r5) {
            r4 = this;
            android.content.SharedPreferences r0 = r4.a
            r1 = 0
            if (r0 == 0) goto L30
            if (r5 != 0) goto L8
            goto L30
        L8:
            r0 = 1
            java.util.Set r5 = r5.valueSet()
            java.util.Iterator r5 = r5.iterator()
        L11:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L2f
            java.lang.Object r2 = r5.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            boolean r2 = r4.save(r3, r2)
            if (r2 != 0) goto L11
            r0 = r1
            goto L11
        L2f:
            return r0
        L30:
            return r1
    }
}
