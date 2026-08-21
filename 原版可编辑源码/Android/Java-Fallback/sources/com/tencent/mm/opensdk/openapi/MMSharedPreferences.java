package com.tencent.mm.opensdk.openapi;

class MMSharedPreferences implements android.content.SharedPreferences {
    private static final java.lang.String TAG = "MicroMsg.SDK.SharedPreferences";
    private final java.lang.String[] columns;
    private final android.content.ContentResolver cr;
    private com.tencent.mm.opensdk.openapi.MMSharedPreferences.REditor editor;
    private final java.util.HashMap<java.lang.String, java.lang.Object> values;

    private static class REditor implements android.content.SharedPreferences.Editor {
        private boolean clear;
        private android.content.ContentResolver cr;
        private java.util.Set<java.lang.String> remove;
        private java.util.Map<java.lang.String, java.lang.Object> values;

        public REditor(android.content.ContentResolver r2) {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.values = r0
                java.util.HashSet r0 = new java.util.HashSet
                r0.<init>()
                r1.remove = r0
                r0 = 0
                r1.clear = r0
                r1.cr = r2
                return
        }

        @Override
        public void apply() {
                r0 = this;
                return
        }

        @Override
        public android.content.SharedPreferences.Editor clear() {
                r1 = this;
                r0 = 1
                r1.clear = r0
                return r1
        }

        @Override
        public boolean commit() {
                r10 = this;
                android.content.ContentValues r0 = new android.content.ContentValues
                r0.<init>()
                boolean r1 = r10.clear
                r2 = 0
                if (r1 == 0) goto L14
                android.content.ContentResolver r1 = r10.cr
                android.net.Uri r3 = com.tencent.mm.opensdk.utils.a.a
                r4 = 0
                r1.delete(r3, r4, r4)
                r10.clear = r2
            L14:
                java.util.Set<java.lang.String> r1 = r10.remove
                java.util.Iterator r1 = r1.iterator()
            L1a:
                boolean r3 = r1.hasNext()
                java.lang.String r4 = "key = ?"
                r5 = 1
                if (r3 == 0) goto L35
                java.lang.Object r3 = r1.next()
                java.lang.String r3 = (java.lang.String) r3
                android.content.ContentResolver r6 = r10.cr
                android.net.Uri r7 = com.tencent.mm.opensdk.utils.a.a
                java.lang.String[] r5 = new java.lang.String[r5]
                r5[r2] = r3
                r6.delete(r7, r4, r5)
                goto L1a
            L35:
                java.util.Map<java.lang.String, java.lang.Object> r1 = r10.values
                java.util.Set r1 = r1.entrySet()
                java.util.Iterator r1 = r1.iterator()
            L3f:
                boolean r3 = r1.hasNext()
                if (r3 == 0) goto Lc4
                java.lang.Object r3 = r1.next()
                java.util.Map$Entry r3 = (java.util.Map.Entry) r3
                java.lang.Object r6 = r3.getValue()
                java.lang.String r7 = "MicroMsg.SDK.PluginProvider.Resolver"
                if (r6 != 0) goto L5a
                java.lang.String r8 = "unresolve failed, null value"
            L55:
                com.tencent.mm.opensdk.utils.Log.e(r7, r8)
                r7 = 0
                goto L98
            L5a:
                boolean r8 = r6 instanceof java.lang.Integer
                if (r8 == 0) goto L60
                r7 = 1
                goto L98
            L60:
                boolean r8 = r6 instanceof java.lang.Long
                if (r8 == 0) goto L66
                r7 = 2
                goto L98
            L66:
                boolean r8 = r6 instanceof java.lang.String
                if (r8 == 0) goto L6c
                r7 = 3
                goto L98
            L6c:
                boolean r8 = r6 instanceof java.lang.Boolean
                if (r8 == 0) goto L72
                r7 = 4
                goto L98
            L72:
                boolean r8 = r6 instanceof java.lang.Float
                if (r8 == 0) goto L78
                r7 = 5
                goto L98
            L78:
                boolean r8 = r6 instanceof java.lang.Double
                if (r8 == 0) goto L7e
                r7 = 6
                goto L98
            L7e:
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                java.lang.String r9 = "unresolve failed, unknown type="
                r8.append(r9)
                java.lang.Class r9 = r6.getClass()
                java.lang.String r9 = r9.toString()
                r8.append(r9)
                java.lang.String r8 = r8.toString()
                goto L55
            L98:
                if (r7 != 0) goto L9c
                r6 = 0
                goto Laf
            L9c:
                java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
                java.lang.String r8 = "type"
                r0.put(r8, r7)
                java.lang.String r6 = r6.toString()
                java.lang.String r7 = "value"
                r0.put(r7, r6)
                r6 = 1
            Laf:
                if (r6 == 0) goto L3f
                android.content.ContentResolver r6 = r10.cr
                android.net.Uri r7 = com.tencent.mm.opensdk.utils.a.a
                java.lang.String[] r8 = new java.lang.String[r5]
                java.lang.Object r3 = r3.getKey()
                java.lang.String r3 = (java.lang.String) r3
                r8[r2] = r3
                r6.update(r7, r0, r4, r8)
                goto L3f
            Lc4:
                return r5
        }

        @Override
        public android.content.SharedPreferences.Editor putBoolean(java.lang.String r2, boolean r3) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.Object> r0 = r1.values
                java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
                r0.put(r2, r3)
                java.util.Set<java.lang.String> r3 = r1.remove
                r3.remove(r2)
                return r1
        }

        @Override
        public android.content.SharedPreferences.Editor putFloat(java.lang.String r2, float r3) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.Object> r0 = r1.values
                java.lang.Float r3 = java.lang.Float.valueOf(r3)
                r0.put(r2, r3)
                java.util.Set<java.lang.String> r3 = r1.remove
                r3.remove(r2)
                return r1
        }

        @Override
        public android.content.SharedPreferences.Editor putInt(java.lang.String r2, int r3) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.Object> r0 = r1.values
                java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
                r0.put(r2, r3)
                java.util.Set<java.lang.String> r3 = r1.remove
                r3.remove(r2)
                return r1
        }

        @Override
        public android.content.SharedPreferences.Editor putLong(java.lang.String r2, long r3) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.Object> r0 = r1.values
                java.lang.Long r3 = java.lang.Long.valueOf(r3)
                r0.put(r2, r3)
                java.util.Set<java.lang.String> r3 = r1.remove
                r3.remove(r2)
                return r1
        }

        @Override
        public android.content.SharedPreferences.Editor putString(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.Object> r0 = r1.values
                r0.put(r2, r3)
                java.util.Set<java.lang.String> r3 = r1.remove
                r3.remove(r2)
                return r1
        }

        @Override
        public android.content.SharedPreferences.Editor putStringSet(java.lang.String r1, java.util.Set<java.lang.String> r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public android.content.SharedPreferences.Editor remove(java.lang.String r2) {
                r1 = this;
                java.util.Set<java.lang.String> r0 = r1.remove
                r0.add(r2)
                return r1
        }
    }

    public MMSharedPreferences(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "_id"
            java.lang.String r1 = "key"
            java.lang.String r2 = "type"
            java.lang.String r3 = "value"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            r4.columns = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.values = r0
            r0 = 0
            r4.editor = r0
            android.content.ContentResolver r5 = r5.getContentResolver()
            r4.cr = r5
            return
    }

    private java.lang.Object getValue(java.lang.String r8) {
            r7 = this;
            r0 = 0
            android.content.ContentResolver r1 = r7.cr     // Catch: java.lang.Exception -> L3b
            android.net.Uri r2 = com.tencent.mm.opensdk.utils.a.a     // Catch: java.lang.Exception -> L3b
            java.lang.String[] r3 = r7.columns     // Catch: java.lang.Exception -> L3b
            java.lang.String r4 = "key = ?"
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Exception -> L3b
            r6 = 0
            r5[r6] = r8     // Catch: java.lang.Exception -> L3b
            r6 = 0
            android.database.Cursor r8 = r1.query(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L3b
            if (r8 != 0) goto L17
            return r0
        L17:
            java.lang.String r1 = "type"
            int r1 = r8.getColumnIndex(r1)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "value"
            int r2 = r8.getColumnIndex(r2)     // Catch: java.lang.Exception -> L3b
            boolean r3 = r8.moveToFirst()     // Catch: java.lang.Exception -> L3b
            if (r3 == 0) goto L36
            int r1 = r8.getInt(r1)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = r8.getString(r2)     // Catch: java.lang.Exception -> L3b
            java.lang.Object r1 = com.tencent.mm.opensdk.channel.a.a.a(r1, r2)     // Catch: java.lang.Exception -> L3b
            goto L37
        L36:
            r1 = r0
        L37:
            r8.close()     // Catch: java.lang.Exception -> L3b
            return r1
        L3b:
            r8 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getValue exception:"
            r1.append(r2)
            java.lang.String r8 = r8.getMessage()
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            java.lang.String r1 = "MicroMsg.SDK.SharedPreferences"
            com.tencent.mm.opensdk.utils.Log.e(r1, r8)
            return r0
    }

    @Override
    public boolean contains(java.lang.String r1) {
            r0 = this;
            java.lang.Object r1 = r0.getValue(r1)
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    @Override
    public android.content.SharedPreferences.Editor edit() {
            r2 = this;
            com.tencent.mm.opensdk.openapi.MMSharedPreferences$REditor r0 = r2.editor
            if (r0 != 0) goto Ld
            com.tencent.mm.opensdk.openapi.MMSharedPreferences$REditor r0 = new com.tencent.mm.opensdk.openapi.MMSharedPreferences$REditor
            android.content.ContentResolver r1 = r2.cr
            r0.<init>(r1)
            r2.editor = r0
        Ld:
            com.tencent.mm.opensdk.openapi.MMSharedPreferences$REditor r0 = r2.editor
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, ?> getAll() {
            r7 = this;
            android.content.ContentResolver r0 = r7.cr     // Catch: java.lang.Exception -> L45
            android.net.Uri r1 = com.tencent.mm.opensdk.utils.a.a     // Catch: java.lang.Exception -> L45
            java.lang.String[] r2 = r7.columns     // Catch: java.lang.Exception -> L45
            r3 = 0
            r4 = 0
            r5 = 0
            android.database.Cursor r0 = r0.query(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L45
            if (r0 != 0) goto L11
            r0 = 0
            return r0
        L11:
            java.lang.String r1 = "key"
            int r1 = r0.getColumnIndex(r1)     // Catch: java.lang.Exception -> L45
            java.lang.String r2 = "type"
            int r2 = r0.getColumnIndex(r2)     // Catch: java.lang.Exception -> L45
            java.lang.String r3 = "value"
            int r3 = r0.getColumnIndex(r3)     // Catch: java.lang.Exception -> L45
        L23:
            boolean r4 = r0.moveToNext()     // Catch: java.lang.Exception -> L45
            if (r4 == 0) goto L3f
            int r4 = r0.getInt(r2)     // Catch: java.lang.Exception -> L45
            java.lang.String r5 = r0.getString(r3)     // Catch: java.lang.Exception -> L45
            java.lang.Object r4 = com.tencent.mm.opensdk.channel.a.a.a(r4, r5)     // Catch: java.lang.Exception -> L45
            java.util.HashMap<java.lang.String, java.lang.Object> r5 = r7.values     // Catch: java.lang.Exception -> L45
            java.lang.String r6 = r0.getString(r1)     // Catch: java.lang.Exception -> L45
            r5.put(r6, r4)     // Catch: java.lang.Exception -> L45
            goto L23
        L3f:
            r0.close()     // Catch: java.lang.Exception -> L45
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r7.values     // Catch: java.lang.Exception -> L45
            return r0
        L45:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getAll exception:"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "MicroMsg.SDK.SharedPreferences"
            com.tencent.mm.opensdk.utils.Log.e(r1, r0)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r7.values
            return r0
    }

    @Override
    public boolean getBoolean(java.lang.String r2, boolean r3) {
            r1 = this;
            java.lang.Object r2 = r1.getValue(r2)
            if (r2 == 0) goto L10
            boolean r0 = r2 instanceof java.lang.Boolean
            if (r0 == 0) goto L10
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r3 = r2.booleanValue()
        L10:
            return r3
    }

    @Override
    public float getFloat(java.lang.String r2, float r3) {
            r1 = this;
            java.lang.Object r2 = r1.getValue(r2)
            if (r2 == 0) goto L10
            boolean r0 = r2 instanceof java.lang.Float
            if (r0 == 0) goto L10
            java.lang.Float r2 = (java.lang.Float) r2
            float r3 = r2.floatValue()
        L10:
            return r3
    }

    @Override
    public int getInt(java.lang.String r2, int r3) {
            r1 = this;
            java.lang.Object r2 = r1.getValue(r2)
            if (r2 == 0) goto L10
            boolean r0 = r2 instanceof java.lang.Integer
            if (r0 == 0) goto L10
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r3 = r2.intValue()
        L10:
            return r3
    }

    @Override
    public long getLong(java.lang.String r2, long r3) {
            r1 = this;
            java.lang.Object r2 = r1.getValue(r2)
            if (r2 == 0) goto L10
            boolean r0 = r2 instanceof java.lang.Long
            if (r0 == 0) goto L10
            java.lang.Long r2 = (java.lang.Long) r2
            long r3 = r2.longValue()
        L10:
            return r3
    }

    @Override
    public java.lang.String getString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.Object r2 = r1.getValue(r2)
            if (r2 == 0) goto Ld
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Ld
            r3 = r2
            java.lang.String r3 = (java.lang.String) r3
        Ld:
            return r3
    }

    @Override
    public java.util.Set<java.lang.String> getStringSet(java.lang.String r1, java.util.Set<java.lang.String> r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void registerOnSharedPreferenceChangeListener(android.content.SharedPreferences.OnSharedPreferenceChangeListener r1) {
            r0 = this;
            return
    }

    @Override
    public void unregisterOnSharedPreferenceChangeListener(android.content.SharedPreferences.OnSharedPreferenceChangeListener r1) {
            r0 = this;
            return
    }
}
