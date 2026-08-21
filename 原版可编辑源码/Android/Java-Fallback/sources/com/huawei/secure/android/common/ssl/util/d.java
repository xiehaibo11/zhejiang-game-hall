package com.huawei.secure.android.common.ssl.util;

public class d extends android.os.AsyncTask<android.content.Context, java.lang.Integer, java.lang.Boolean> {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.huawei.secure.android.common.ssl.util.d> r0 = com.huawei.secure.android.common.ssl.util.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.huawei.secure.android.common.ssl.util.d.a = r0
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    protected java.lang.Boolean a(android.content.Context... r8) {
            r7 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 0
            r8 = r8[r2]     // Catch: java.lang.Exception -> Lc
            java.io.InputStream r8 = com.huawei.secure.android.common.ssl.util.BksUtil.getBksFromTss(r8)     // Catch: java.lang.Exception -> Lc
            goto L28
        Lc:
            r8 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.ssl.util.d.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "doInBackground: exception : "
            r4.append(r5)
            java.lang.String r8 = r8.getMessage()
            r4.append(r8)
            java.lang.String r8 = r4.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r3, r8)
            r8 = 0
        L28:
            java.lang.String r3 = com.huawei.secure.android.common.ssl.util.d.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "doInBackground: get bks from hms tss cost : "
            r4.append(r5)
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 - r0
            r4.append(r5)
            java.lang.String r0 = " ms"
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r3, r0)
            if (r8 == 0) goto L53
            com.huawei.secure.android.common.ssl.util.f.a(r8)
            r8 = 1
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)
            return r8
        L53:
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r2)
            return r8
    }

    protected void a(java.lang.Boolean r2) {
            r1 = this;
            boolean r2 = r2.booleanValue()
            if (r2 == 0) goto Le
            java.lang.String r2 = com.huawei.secure.android.common.ssl.util.d.a
            java.lang.String r0 = "onPostExecute: upate done"
            com.huawei.secure.android.common.ssl.util.g.c(r2, r0)
            goto L15
        Le:
            java.lang.String r2 = com.huawei.secure.android.common.ssl.util.d.a
            java.lang.String r0 = "onPostExecute: upate failed"
            com.huawei.secure.android.common.ssl.util.g.b(r2, r0)
        L15:
            return
    }

    protected void a(java.lang.Integer... r2) {
            r1 = this;
            java.lang.String r2 = com.huawei.secure.android.common.ssl.util.d.a
            java.lang.String r0 = "onProgressUpdate"
            com.huawei.secure.android.common.ssl.util.g.c(r2, r0)
            return
    }

    @Override
    protected java.lang.Boolean doInBackground(android.content.Context[] r1) {
            r0 = this;
            android.content.Context[] r1 = (android.content.Context[]) r1
            java.lang.Boolean r1 = r0.a(r1)
            return r1
    }

    @Override
    protected void onPostExecute(java.lang.Boolean r1) {
            r0 = this;
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            r0.a(r1)
            return
    }

    @Override
    protected void onPreExecute() {
            r2 = this;
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.d.a
            java.lang.String r1 = "onPreExecute"
            com.huawei.secure.android.common.ssl.util.g.a(r0, r1)
            return
    }

    @Override
    protected void onProgressUpdate(java.lang.Integer[] r1) {
            r0 = this;
            java.lang.Integer[] r1 = (java.lang.Integer[]) r1
            r0.a(r1)
            return
    }
}
