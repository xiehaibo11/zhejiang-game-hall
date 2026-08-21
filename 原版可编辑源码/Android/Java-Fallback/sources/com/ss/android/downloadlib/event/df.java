package com.ss.android.downloadlib.event;

public class df {
    private static volatile com.ss.android.downloadlib.event.df df;
    private android.database.sqlite.SQLiteDatabase rg;

    private df() {
            r3 = this;
            r3.<init>()
            com.ss.android.downloadlib.event.rg r0 = new com.ss.android.downloadlib.event.rg
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            r0.<init>(r1)
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L13
            r3.rg = r0     // Catch: java.lang.Throwable -> L13
            goto L1d
        L13:
            r0 = move-exception
            com.ss.android.downloadlib.exception.q r1 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r2 = "ClickEventHelper"
            r1.rg(r0, r2)
        L1d:
            return
    }

    private void q(long r8, java.lang.String r10) {
            r7 = this;
            android.database.sqlite.SQLiteDatabase r0 = r7.rg
            if (r0 == 0) goto L54
            boolean r0 = r0.isOpen()
            if (r0 != 0) goto Lb
            goto L54
        Lb:
            r0 = 0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 <= 0) goto L54
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto L18
            goto L54
        L18:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L50
            r0.<init>(r10)     // Catch: java.lang.Exception -> L50
            java.lang.String r10 = "req_id"
            java.lang.String r10 = r0.optString(r10)     // Catch: java.lang.Exception -> L50
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L2a
            return
        L2a:
            java.lang.String r0 = "time < ? AND ad_id = ? AND req_id = ?"
            r1 = 3
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Exception -> L50
            r2 = 0
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L50
            r5 = 1209600000(0x48190800, double:5.97621805E-315)
            long r3 = r3 - r5
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L50
            r1[r2] = r3     // Catch: java.lang.Exception -> L50
            r2 = 1
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> L50
            r1[r2] = r8     // Catch: java.lang.Exception -> L50
            r8 = 2
            r1[r8] = r10     // Catch: java.lang.Exception -> L50
            android.database.sqlite.SQLiteDatabase r8 = r7.rg     // Catch: java.lang.Exception -> L50
            java.lang.String r9 = "click_event"
            r8.delete(r9, r0, r1)     // Catch: java.lang.Exception -> L50
            goto L54
        L50:
            r8 = move-exception
            r8.printStackTrace()
        L54:
            return
    }

    public static com.ss.android.downloadlib.event.df rg() {
            com.ss.android.downloadlib.event.df r0 = com.ss.android.downloadlib.event.df.df
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.event.df> r0 = com.ss.android.downloadlib.event.df.class
            monitor-enter(r0)
            com.ss.android.downloadlib.event.df r1 = com.ss.android.downloadlib.event.df.df     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.event.df r1 = new com.ss.android.downloadlib.event.df     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.event.df.df = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.event.df r0 = com.ss.android.downloadlib.event.df.df
            return r0
    }

    public boolean df() {
            r3 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r1 = 0
            java.lang.String r2 = "click_event_switch"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 != r2) goto Lf
            r1 = r2
        Lf:
            return r1
    }

    public boolean df(long r13, java.lang.String r15) {
            r12 = this;
            android.database.sqlite.SQLiteDatabase r0 = r12.rg
            r1 = 0
            if (r0 == 0) goto L76
            boolean r0 = r0.isOpen()
            if (r0 != 0) goto Lc
            goto L76
        Lc:
            r2 = 0
            int r0 = (r13 > r2 ? 1 : (r13 == r2 ? 0 : -1))
            if (r0 <= 0) goto L76
            boolean r0 = android.text.TextUtils.isEmpty(r15)
            if (r0 == 0) goto L19
            goto L76
        L19:
            r0 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            r2.<init>(r15)     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            java.lang.String r15 = "req_id"
            java.lang.String r15 = r2.optString(r15)     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            boolean r2 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            if (r2 == 0) goto L2c
            return r1
        L2c:
            java.lang.String r6 = "time > ? AND ad_id = ? AND req_id = ?"
            r2 = 3
            java.lang.String[] r7 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            r4 = 1209600000(0x48190800, double:5.97621805E-315)
            long r2 = r2 - r4
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            r7[r1] = r2     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            java.lang.String r13 = java.lang.String.valueOf(r13)     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            r14 = 1
            r7[r14] = r13     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            r13 = 2
            r7[r13] = r15     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            android.database.sqlite.SQLiteDatabase r3 = r12.rg     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            java.lang.String r4 = "click_event"
            java.lang.String[] r5 = com.ss.android.downloadlib.event.rg.rg     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            android.database.Cursor r0 = r3.query(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            int r13 = r0.getCount()     // Catch: java.lang.Throwable -> L64 java.lang.Exception -> L66
            if (r13 <= 0) goto L5e
            r1 = r14
        L5e:
            if (r0 == 0) goto L63
            r0.close()
        L63:
            return r1
        L64:
            r13 = move-exception
            goto L70
        L66:
            r13 = move-exception
            r13.printStackTrace()     // Catch: java.lang.Throwable -> L64
            if (r0 == 0) goto L6f
            r0.close()
        L6f:
            return r1
        L70:
            if (r0 == 0) goto L75
            r0.close()
        L75:
            throw r13
        L76:
            return r1
    }

    public boolean q() {
            r3 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r1 = 0
            java.lang.String r2 = "click_event_switch"
            int r0 = r0.optInt(r2, r1)
            r2 = 2
            if (r0 != r2) goto Lf
            r1 = 1
        Lf:
            return r1
    }

    public void rg(long r6, java.lang.String r8) {
            r5 = this;
            java.lang.String r0 = "req_id"
            android.database.sqlite.SQLiteDatabase r1 = r5.rg
            if (r1 == 0) goto L58
            boolean r1 = r1.isOpen()
            if (r1 != 0) goto Ld
            goto L58
        Ld:
            r1 = 0
            int r1 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r1 <= 0) goto L58
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 == 0) goto L1a
            goto L58
        L1a:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L51
            r1.<init>(r8)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = r1.optString(r0)     // Catch: java.lang.Exception -> L51
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L51
            if (r2 == 0) goto L2a
            return
        L2a:
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Exception -> L51
            r2.<init>()     // Catch: java.lang.Exception -> L51
            java.lang.String r3 = "ad_id"
            java.lang.Long r4 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Exception -> L51
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L51
            r2.put(r0, r1)     // Catch: java.lang.Exception -> L51
            java.lang.String r0 = "time"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L51
            java.lang.Long r1 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> L51
            r2.put(r0, r1)     // Catch: java.lang.Exception -> L51
            android.database.sqlite.SQLiteDatabase r0 = r5.rg     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "click_event"
            r3 = 0
            r0.insert(r1, r3, r2)     // Catch: java.lang.Exception -> L51
            goto L55
        L51:
            r0 = move-exception
            r0.printStackTrace()
        L55:
            r5.q(r6, r8)
        L58:
            return
    }
}
