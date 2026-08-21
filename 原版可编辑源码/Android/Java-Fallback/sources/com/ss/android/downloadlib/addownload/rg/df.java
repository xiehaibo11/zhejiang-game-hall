package com.ss.android.downloadlib.addownload.rg;

class df {
    df() {
            r0 = this;
            r0.<init>()
            return
    }

    void df(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L23
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Ld
            goto L23
        Ld:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            r1 = 0
            android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r1)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            java.lang.String r0 = ""
            android.content.SharedPreferences$Editor r3 = r3.putString(r4, r0)
            r3.apply()
        L23:
            return
    }

    java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> rg(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L3d
            r2 = 0
            android.content.SharedPreferences r4 = r1.getSharedPreferences(r4, r2)     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = ""
            java.lang.String r4 = r4.getString(r5, r1)     // Catch: java.lang.Exception -> L3d
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L3d
            if (r5 != 0) goto L41
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3d
            r5.<init>(r4)     // Catch: java.lang.Exception -> L3d
            java.util.Iterator r4 = r5.keys()     // Catch: java.lang.Exception -> L3d
        L23:
            boolean r1 = r4.hasNext()     // Catch: java.lang.Exception -> L3d
            if (r1 == 0) goto L41
            java.lang.Object r1 = r4.next()     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L3d
            org.json.JSONObject r1 = r5.optJSONObject(r1)     // Catch: java.lang.Exception -> L3d
            com.ss.android.downloadlib.addownload.model.rg r1 = com.ss.android.downloadlib.addownload.model.rg.rg(r1)     // Catch: java.lang.Exception -> L3d
            if (r1 == 0) goto L23
            r0.add(r1)     // Catch: java.lang.Exception -> L3d
            goto L23
        L3d:
            r4 = move-exception
            r4.printStackTrace()
        L41:
            return r0
    }

    void rg(java.lang.String r5, java.lang.String r6, java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r7) {
            r4 = this;
            if (r7 != 0) goto L3
            return
        L3:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Exception -> L28
        Lc:
            boolean r1 = r7.hasNext()     // Catch: java.lang.Exception -> L28
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r7.next()     // Catch: java.lang.Exception -> L28
            com.ss.android.downloadlib.addownload.model.rg r1 = (com.ss.android.downloadlib.addownload.model.rg) r1     // Catch: java.lang.Exception -> L28
            if (r1 == 0) goto Lc
            long r2 = r1.df     // Catch: java.lang.Exception -> L28
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L28
            org.json.JSONObject r1 = r1.rg()     // Catch: java.lang.Exception -> L28
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L28
            goto Lc
        L28:
            r7 = move-exception
            r7.printStackTrace()
        L2c:
            android.content.Context r7 = com.ss.android.downloadlib.addownload.bm.getContext()
            r1 = 0
            android.content.SharedPreferences r5 = r7.getSharedPreferences(r5, r1)
            android.content.SharedPreferences$Editor r5 = r5.edit()
            java.lang.String r7 = r0.toString()
            android.content.SharedPreferences$Editor r5 = r5.putString(r6, r7)
            r5.apply()
            return
    }
}
