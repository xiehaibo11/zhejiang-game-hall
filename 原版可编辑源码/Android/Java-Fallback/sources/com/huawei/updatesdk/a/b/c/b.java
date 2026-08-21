package com.huawei.updatesdk.a.b.c;

public class b extends android.os.AsyncTask<com.huawei.updatesdk.a.b.c.c.c, java.lang.Void, com.huawei.updatesdk.a.b.c.c.d> {
    protected com.huawei.updatesdk.a.b.c.c.c a;
    private com.huawei.updatesdk.a.b.c.c.d b;
    private com.huawei.updatesdk.a.b.c.c.a c;
    private com.huawei.updatesdk.a.a.b.b d;
    private int e;

    public b(com.huawei.updatesdk.a.b.c.c.c r2, com.huawei.updatesdk.a.b.c.c.a r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r0 = 0
            r1.e = r0
            r1.a = r2
            r1.c = r3
            return
    }

    private com.huawei.updatesdk.a.b.c.c.d a(java.lang.String r3, com.huawei.updatesdk.a.b.c.c.d r4) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld
            r0.<init>(r3)     // Catch: java.lang.Exception -> Ld
            r4.fromJson(r0)     // Catch: java.lang.Exception -> Ld
            r3 = 0
            r4.b(r3)     // Catch: java.lang.Exception -> Ld
            goto L15
        Ld:
            r3 = move-exception
            java.lang.String r0 = "StoreTask"
            java.lang.String r1 = "parse json error"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r1, r3)
        L15:
            return r4
    }

    private void a(com.huawei.updatesdk.a.b.c.c.d r1, int r2, com.huawei.updatesdk.a.b.c.c.d.a r3, java.lang.Throwable r4) {
            r0 = this;
            if (r1 == 0) goto Lf
            r1.b(r2)
            r1.a(r3)
            java.lang.String r2 = r4.toString()
            r1.a(r2)
        Lf:
            return
    }

    private void a(com.huawei.updatesdk.a.b.c.c.d r3, java.lang.Throwable r4, java.lang.String r5) {
            r2 = this;
            boolean r0 = r4 instanceof java.net.ConnectException
            r1 = 1
            if (r0 == 0) goto Lb
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.f
        L7:
            r2.a(r3, r1, r0, r4)
            goto L56
        Lb:
            boolean r0 = r4 instanceof java.net.SocketTimeoutException
            if (r0 == 0) goto L10
            goto L14
        L10:
            boolean r0 = r4 instanceof org.apache.http.conn.ConnectTimeoutException
            if (r0 == 0) goto L18
        L14:
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.f
            r1 = 2
            goto L7
        L18:
            boolean r0 = r4 instanceof java.lang.IllegalArgumentException
            if (r0 == 0) goto L20
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.d
            r1 = 5
            goto L7
        L20:
            boolean r0 = r4 instanceof java.lang.IllegalAccessException
            if (r0 == 0) goto L27
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.g
            goto L7
        L27:
            boolean r0 = r4 instanceof java.lang.ArrayIndexOutOfBoundsException
            if (r0 == 0) goto L2f
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.h
            r1 = 6
            goto L7
        L2f:
            boolean r0 = r4 instanceof java.lang.InterruptedException
            if (r0 != 0) goto L49
            boolean r0 = r4 instanceof java.io.InterruptedIOException
            if (r0 == 0) goto L38
            goto L49
        L38:
            boolean r0 = r4 instanceof java.io.IOException
            if (r0 == 0) goto L3f
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.e
            goto L7
        L3f:
            if (r3 == 0) goto L56
            java.lang.String r0 = r4.toString()
            r3.a(r0)
            goto L56
        L49:
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.a
            r1 = 0
            r2.a(r3, r1, r0, r4)
            java.lang.String r3 = "StoreTask"
            java.lang.String r0 = "UpdateSDK task is canceled"
            com.huawei.updatesdk.a.a.a.a(r3, r0)
        L56:
            r2.a(r5, r4)
            return
    }

    private void a(java.lang.String r3, java.lang.Throwable r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invoke store error"
            r0.append(r1)
            java.lang.String r1 = ", exceptionType:"
            r0.append(r1)
            java.lang.Class r1 = r4.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = ", url:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ", method:"
            r0.append(r3)
            com.huawei.updatesdk.a.b.c.c.c r3 = r2.a
            java.lang.String r3 = r3.b()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = ", retryTimes:"
            r3.append(r1)
            int r1 = r2.e
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "StoreTask"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r3, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "UpdateSDK call store error: "
            r4.append(r1)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.updatesdk.a.a.a.a(r0, r3)
            return
    }

    private boolean a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lf
            boolean r2 = com.huawei.updatesdk.a.a.d.g.d(r2)
            if (r2 != 0) goto Ld
            goto Lf
        Ld:
            r2 = 0
            goto L10
        Lf:
            r2 = 1
        L10:
            return r2
    }

    private void b(com.huawei.updatesdk.a.b.c.c.d r5) {
            r4 = this;
            java.lang.String r0 = "notifyResult, create response error, method:"
            boolean r1 = r4.isCancelled()
            if (r1 != 0) goto L5a
            com.huawei.updatesdk.a.b.c.c.a r1 = r4.c
            if (r1 == 0) goto L5a
            if (r5 != 0) goto L53
            java.lang.String r1 = "StoreTask"
            java.lang.String r2 = "notifyResult, response is null"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r2)
            com.huawei.updatesdk.a.b.c.c.c r2 = r4.a     // Catch: java.lang.IllegalAccessException -> L20 java.lang.InstantiationException -> L27
            java.lang.String r2 = r2.b()     // Catch: java.lang.IllegalAccessException -> L20 java.lang.InstantiationException -> L27
            com.huawei.updatesdk.a.b.c.c.d r5 = com.huawei.updatesdk.a.b.c.a.a(r2)     // Catch: java.lang.IllegalAccessException -> L20 java.lang.InstantiationException -> L27
            goto L40
        L20:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            goto L2d
        L27:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
        L2d:
            r3.append(r0)
            com.huawei.updatesdk.a.b.c.c.c r0 = r4.a
            java.lang.String r0 = r0.b()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r0, r2)
        L40:
            if (r5 != 0) goto L4a
            com.huawei.updatesdk.a.b.c.c.d r5 = new com.huawei.updatesdk.a.b.c.c.d
            r5.<init>()
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.d
            goto L4c
        L4a:
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.g
        L4c:
            r5.a(r0)
            r0 = 1
            r5.b(r0)
        L53:
            com.huawei.updatesdk.a.b.c.c.a r0 = r4.c
            com.huawei.updatesdk.a.b.c.c.c r1 = r4.a
            r0.b(r1, r5)
        L5a:
            return
    }

    private void b(java.lang.String r2) {
            r1 = this;
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r0 = "StoreTask"
            if (r2 == 0) goto Lb
            java.lang.String r2 = "UpdateSDK response error, resData == null"
            goto Ld
        Lb:
            java.lang.String r2 = "UpdateSDK response error, resData is not json string"
        Ld:
            com.huawei.updatesdk.a.a.a.a(r0, r2)
            return
    }

    private boolean c(com.huawei.updatesdk.a.b.c.c.d r7) {
            r6 = this;
            boolean r0 = r6.isCancelled()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            int r0 = r7.d()
            r2 = 1
            if (r0 == r2) goto L17
            int r0 = r7.d()
            r3 = 2
            if (r0 == r3) goto L17
            return r1
        L17:
            int r0 = r6.e
            int r3 = r0 + 1
            r6.e = r3
            r3 = 3
            java.lang.String r4 = "StoreTask"
            java.lang.String r5 = ",response.responseCode = "
            if (r0 < r3) goto L45
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "retry completed total times = "
            r0.append(r2)
            int r2 = r6.e
            r0.append(r2)
            r0.append(r5)
            int r7 = r7.d()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.a(r4, r7)
            return r1
        L45:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "retry times = "
            r0.append(r1)
            int r1 = r6.e
            r0.append(r1)
            r0.append(r5)
            int r7 = r7.d()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.a(r4, r7)
            return r2
    }

    private java.lang.String d() {
            r2 = this;
            java.lang.String r0 = com.huawei.updatesdk.b.g.a.a()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lc
            java.lang.String r0 = "Android/1.0"
        Lc:
            return r0
    }

    private void e() {
            r1 = this;
            com.huawei.updatesdk.a.b.c.c.d r0 = r1.b
            r1.b(r0)
            return
    }

    protected com.huawei.updatesdk.a.b.c.c.d a() {
            r13 = this;
            java.lang.String r0 = ", body:"
            java.lang.String r1 = ", url:"
            java.lang.String r2 = "StoreTask"
            r3 = 5
            r4 = 0
            com.huawei.updatesdk.a.b.c.c.c r5 = r13.a     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r5 = r5.b()     // Catch: java.lang.Throwable -> Lf6
            com.huawei.updatesdk.a.b.c.c.d r5 = com.huawei.updatesdk.a.b.c.a.a(r5)     // Catch: java.lang.Throwable -> Lf6
            com.huawei.updatesdk.a.b.a.a r6 = com.huawei.updatesdk.a.b.a.a.c()     // Catch: java.lang.Throwable -> Lf2
            android.content.Context r6 = r6.a()     // Catch: java.lang.Throwable -> Lf2
            boolean r6 = com.huawei.updatesdk.a.a.d.i.a.d(r6)     // Catch: java.lang.Throwable -> Lf2
            if (r6 != 0) goto L2b
            r0 = 3
            r5.b(r0)     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.b     // Catch: java.lang.Throwable -> Lf2
            r5.a(r0)     // Catch: java.lang.Throwable -> Lf2
            goto Lfc
        L2b:
            com.huawei.updatesdk.a.b.c.c.c r6 = r13.a     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r6 = r6.a()     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.b.c.c.c r7 = r13.a     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r4 = r7.d()     // Catch: java.lang.Throwable -> Lf2
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf2
            r7.<init>()     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r8 = "callStore, method:"
            r7.append(r8)     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.b.c.c.c r8 = r13.a     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r8 = r8.b()     // Catch: java.lang.Throwable -> Lf2
            r7.append(r8)     // Catch: java.lang.Throwable -> Lf2
            r7.append(r1)     // Catch: java.lang.Throwable -> Lf2
            r7.append(r4)     // Catch: java.lang.Throwable -> Lf2
            r7.append(r0)     // Catch: java.lang.Throwable -> Lf2
            r7.append(r6)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.a.c.a.a.a.a(r2, r7)     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.a.b.b r7 = new com.huawei.updatesdk.a.a.b.b     // Catch: java.lang.Throwable -> Lf2
            r7.<init>()     // Catch: java.lang.Throwable -> Lf2
            r13.d = r7     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r10 = "UTF-8"
            java.lang.String r11 = r13.d()     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.b.a.a r8 = com.huawei.updatesdk.a.b.a.a.c()     // Catch: java.lang.Throwable -> Lf2
            android.content.Context r12 = r8.a()     // Catch: java.lang.Throwable -> Lf2
            r8 = r4
            r9 = r6
            com.huawei.updatesdk.a.a.b.b$a r7 = r7.a(r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r8 = r7.b()     // Catch: java.lang.Throwable -> Lf2
            int r9 = r7.a()     // Catch: java.lang.Throwable -> Lf2
            r5.a(r9)     // Catch: java.lang.Throwable -> Lf2
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf2
            r9.<init>()     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r10 = "UpdateSDK call store responsecode: "
            r9.append(r10)     // Catch: java.lang.Throwable -> Lf2
            int r10 = r5.b()     // Catch: java.lang.Throwable -> Lf2
            r9.append(r10)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.a.a.b(r2, r9)     // Catch: java.lang.Throwable -> Lf2
            int r7 = r7.a()     // Catch: java.lang.Throwable -> Lf2
            int r7 = r7 / 100
            if (r7 != r3) goto La8
            r0 = 0
            r5.b(r0)     // Catch: java.lang.Throwable -> Lf2
            return r5
        La8:
            boolean r7 = r13.a(r8)     // Catch: java.lang.Throwable -> Lf2
            if (r7 == 0) goto Lbb
            r0 = 1
            r5.b(r0)     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.c     // Catch: java.lang.Throwable -> Lf2
            r5.a(r0)     // Catch: java.lang.Throwable -> Lf2
            r13.b(r8)     // Catch: java.lang.Throwable -> Lf2
            goto Lfc
        Lbb:
            com.huawei.updatesdk.a.b.c.c.d r5 = r13.a(r8, r5)     // Catch: java.lang.Throwable -> Lf2
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf2
            r7.<init>()     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r8 = "callStore response, method:"
            r7.append(r8)     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.b.c.c.c r8 = r13.a     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r8 = r8.b()     // Catch: java.lang.Throwable -> Lf2
            r7.append(r8)     // Catch: java.lang.Throwable -> Lf2
            r7.append(r1)     // Catch: java.lang.Throwable -> Lf2
            r7.append(r4)     // Catch: java.lang.Throwable -> Lf2
            r7.append(r0)     // Catch: java.lang.Throwable -> Lf2
            r7.append(r6)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r0 = ", Receive Json msg:"
            r7.append(r0)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r0 = r5.toJson()     // Catch: java.lang.Throwable -> Lf2
            r7.append(r0)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> Lf2
            com.huawei.updatesdk.a.a.c.a.a.a.a(r2, r0)     // Catch: java.lang.Throwable -> Lf2
            goto Lfc
        Lf2:
            r0 = move-exception
            r1 = r4
            r4 = r5
            goto Lf8
        Lf6:
            r0 = move-exception
            r1 = r4
        Lf8:
            r13.a(r4, r0, r1)
            r5 = r4
        Lfc:
            if (r5 != 0) goto L10b
            com.huawei.updatesdk.a.b.c.c.d r5 = new com.huawei.updatesdk.a.b.c.c.d
            r5.<init>()
            r5.b(r3)
            com.huawei.updatesdk.a.b.c.c.d$a r0 = com.huawei.updatesdk.a.b.c.c.d.a.d
            r5.a(r0)
        L10b:
            return r5
    }

    protected com.huawei.updatesdk.a.b.c.c.d a(com.huawei.updatesdk.a.b.c.c.c... r3) {
            r2 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "doInBackground, method:"
            r3.append(r0)
            com.huawei.updatesdk.a.b.c.c.c r0 = r2.a
            java.lang.String r0 = r0.b()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "StoreTask"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r3)
            com.huawei.updatesdk.b.g.b.a(r2)
            com.huawei.updatesdk.a.b.c.c.d r3 = r2.c()
            com.huawei.updatesdk.a.b.c.c.a r0 = r2.c
            if (r0 == 0) goto L2c
            com.huawei.updatesdk.a.b.c.c.c r1 = r2.a
            r0.a(r1, r3)
        L2c:
            return r3
    }

    protected void a(com.huawei.updatesdk.a.b.c.c.d r2) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onPostExecute, method:"
            r2.append(r0)
            com.huawei.updatesdk.a.b.c.c.c r0 = r1.a
            java.lang.String r0 = r0.b()
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "StoreTask"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r2)
            java.util.List r2 = com.huawei.updatesdk.b.g.b.a()
            r2.remove(r1)
            r1.e()
            return
    }

    public final void a(java.util.concurrent.Executor r4) {
            r3 = this;
            r0 = 1
            com.huawei.updatesdk.a.b.c.c.c[] r0 = new com.huawei.updatesdk.a.b.c.c.c[r0]
            com.huawei.updatesdk.a.b.c.c.c r1 = r3.a
            r2 = 0
            r0[r2] = r1
            r3.executeOnExecutor(r4, r0)
            return
    }

    public void b() {
            r1 = this;
            com.huawei.updatesdk.a.a.b.b r0 = r1.d
            if (r0 == 0) goto La
            r0.a()
            r0 = 0
            r1.d = r0
        La:
            return
    }

    public final com.huawei.updatesdk.a.b.c.c.d c() {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r3.e
            if (r1 <= 0) goto L2b
            if (r0 == 0) goto L2b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "call store error! responseCode:"
            r1.append(r2)
            int r0 = r0.d()
            r1.append(r0)
            java.lang.String r0 = ", retryTimes:"
            r1.append(r0)
            int r0 = r3.e
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "StoreTask"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r0)
        L2b:
            com.huawei.updatesdk.a.b.c.c.d r0 = r3.a()
            boolean r1 = r3.c(r0)
            if (r1 != 0) goto L1
            r3.b = r0
            return r0
    }

    @Override
    protected com.huawei.updatesdk.a.b.c.c.d doInBackground(com.huawei.updatesdk.a.b.c.c.c[] r1) {
            r0 = this;
            com.huawei.updatesdk.a.b.c.c.c[] r1 = (com.huawei.updatesdk.a.b.c.c.c[]) r1
            com.huawei.updatesdk.a.b.c.c.d r1 = r0.a(r1)
            return r1
    }

    @Override
    protected void onPostExecute(com.huawei.updatesdk.a.b.c.c.d r1) {
            r0 = this;
            com.huawei.updatesdk.a.b.c.c.d r1 = (com.huawei.updatesdk.a.b.c.c.d) r1
            r0.a(r1)
            return
    }
}
