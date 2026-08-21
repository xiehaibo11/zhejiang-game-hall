package com.ss.android.downloadlib.addownload.model;

public class rg {
    public java.lang.String c;
    public long df;
    public java.lang.String fw;
    public java.lang.String pp;
    public java.lang.String pt;
    public long q;
    public long rg;
    public volatile long ux;

    public rg() {
            r0 = this;
            r0.<init>()
            return
    }

    public rg(long r1, long r3, long r5, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r0 = this;
            r0.<init>()
            r0.rg = r1
            r0.df = r3
            r0.q = r5
            r0.pt = r7
            r0.pp = r8
            r0.c = r9
            r0.fw = r10
            return
    }

    public static com.ss.android.downloadlib.addownload.model.rg rg(org.json.JSONObject r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.ss.android.downloadlib.addownload.model.rg r1 = new com.ss.android.downloadlib.addownload.model.rg
            r1.<init>()
            java.lang.String r2 = "mDownloadId"
            long r2 = com.ss.android.downloadlib.utils.b.rg(r4, r2)     // Catch: java.lang.Exception -> L4a
            r1.rg = r2     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "mAdId"
            long r2 = com.ss.android.downloadlib.utils.b.rg(r4, r2)     // Catch: java.lang.Exception -> L4a
            r1.df = r2     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "mExtValue"
            long r2 = com.ss.android.downloadlib.utils.b.rg(r4, r2)     // Catch: java.lang.Exception -> L4a
            r1.q = r2     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "mPackageName"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> L4a
            r1.pt = r2     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "mAppName"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> L4a
            r1.pp = r2     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "mLogExtra"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> L4a
            r1.c = r2     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "mFileName"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> L4a
            r1.fw = r2     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "mTimeStamp"
            long r2 = com.ss.android.downloadlib.utils.b.rg(r4, r2)     // Catch: java.lang.Exception -> L4a
            r1.ux = r2     // Catch: java.lang.Exception -> L4a
            return r1
        L4a:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    public org.json.JSONObject rg() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "mDownloadId"
            long r2 = r4.rg     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "mAdId"
            long r2 = r4.df     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "mExtValue"
            long r2 = r4.q     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "mPackageName"
            java.lang.String r2 = r4.pt     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "mAppName"
            java.lang.String r2 = r4.pp     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "mLogExtra"
            java.lang.String r2 = r4.c     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "mFileName"
            java.lang.String r2 = r4.fw     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "mTimeStamp"
            long r2 = r4.ux     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            goto L42
        L3e:
            r1 = move-exception
            r1.printStackTrace()
        L42:
            return r0
    }
}
