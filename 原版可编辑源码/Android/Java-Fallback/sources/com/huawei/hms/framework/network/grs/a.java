package com.huawei.hms.framework.network.grs;

public class a {
    private static final java.lang.String a = "a";
    private com.huawei.hms.framework.network.grs.GrsBaseInfo b;
    private com.huawei.hms.framework.network.grs.a.a c;
    private com.huawei.hms.framework.network.grs.c.m d;
    private com.huawei.hms.framework.network.grs.a.c e;

    private static class a implements com.huawei.hms.framework.network.grs.b {
        java.lang.String a;
        java.util.Map<java.lang.String, java.lang.String> b;
        com.huawei.hms.framework.network.grs.IQueryUrlsCallBack c;
        android.content.Context d;
        com.huawei.hms.framework.network.grs.GrsBaseInfo e;
        com.huawei.hms.framework.network.grs.a.a f;

        a(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r3, android.content.Context r4, com.huawei.hms.framework.network.grs.GrsBaseInfo r5, com.huawei.hms.framework.network.grs.a.a r6) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                return
        }

        @Override
        public void a() {
                r8 = this;
                java.util.Map<java.lang.String, java.lang.String> r0 = r8.b
                if (r0 == 0) goto L12
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L12
                com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r0 = r8.c
                java.util.Map<java.lang.String, java.lang.String> r1 = r8.b
                r0.onCallBackSuccess(r1)
                goto L44
            L12:
                java.util.Map<java.lang.String, java.lang.String> r0 = r8.b
                if (r0 != 0) goto L3e
                java.lang.String r0 = com.huawei.hms.framework.network.grs.a.a()
                java.lang.String r1 = "access local config for return a domain."
                com.huawei.hms.framework.common.Logger.i(r0, r1)
                android.content.Context r0 = r8.d
                java.lang.String r0 = r0.getPackageName()
                com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r8.e
                com.huawei.hms.framework.network.grs.b.b r2 = com.huawei.hms.framework.network.grs.b.b.a(r0, r1)
                android.content.Context r3 = r8.d
                com.huawei.hms.framework.network.grs.a.a r4 = r8.f
                com.huawei.hms.framework.network.grs.GrsBaseInfo r5 = r8.e
                java.lang.String r6 = r8.a
                r7 = 1
                java.util.Map r0 = r2.a(r3, r4, r5, r6, r7)
                com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r1 = r8.c
                r1.onCallBackSuccess(r0)
                goto L44
            L3e:
                com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r0 = r8.c
                r1 = -3
                r0.onCallBackFail(r1)
            L44:
                return
        }

        @Override
        public void a(com.huawei.hms.framework.network.grs.c.f r8) {
                r7 = this;
                java.lang.String r8 = r8.i()
                java.lang.String r0 = r7.a
                java.util.Map r8 = com.huawei.hms.framework.network.grs.a.a(r8, r0)
                boolean r0 = r8.isEmpty()
                if (r0 != 0) goto L16
            L10:
                com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r0 = r7.c
                r0.onCallBackSuccess(r8)
                goto L55
            L16:
                java.util.Map<java.lang.String, java.lang.String> r8 = r7.b
                if (r8 == 0) goto L28
                boolean r8 = r8.isEmpty()
                if (r8 != 0) goto L28
                com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r8 = r7.c
                java.util.Map<java.lang.String, java.lang.String> r0 = r7.b
                r8.onCallBackSuccess(r0)
                goto L55
            L28:
                java.util.Map<java.lang.String, java.lang.String> r8 = r7.b
                if (r8 != 0) goto L4f
                java.lang.String r8 = com.huawei.hms.framework.network.grs.a.a()
                java.lang.String r0 = "access local config for return a domain."
                com.huawei.hms.framework.common.Logger.i(r8, r0)
                android.content.Context r8 = r7.d
                java.lang.String r8 = r8.getPackageName()
                com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r7.e
                com.huawei.hms.framework.network.grs.b.b r1 = com.huawei.hms.framework.network.grs.b.b.a(r8, r0)
                android.content.Context r2 = r7.d
                com.huawei.hms.framework.network.grs.a.a r3 = r7.f
                com.huawei.hms.framework.network.grs.GrsBaseInfo r4 = r7.e
                java.lang.String r5 = r7.a
                r6 = 1
                java.util.Map r8 = r1.a(r2, r3, r4, r5, r6)
                goto L10
            L4f:
                com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r8 = r7.c
                r0 = -5
                r8.onCallBackFail(r0)
            L55:
                return
        }
    }

    private static class b implements com.huawei.hms.framework.network.grs.b {
        java.lang.String a;
        java.lang.String b;
        com.huawei.hms.framework.network.grs.IQueryUrlCallBack c;
        java.lang.String d;
        android.content.Context e;
        com.huawei.hms.framework.network.grs.GrsBaseInfo f;
        com.huawei.hms.framework.network.grs.a.a g;

        b(java.lang.String r1, java.lang.String r2, com.huawei.hms.framework.network.grs.IQueryUrlCallBack r3, java.lang.String r4, android.content.Context r5, com.huawei.hms.framework.network.grs.GrsBaseInfo r6, com.huawei.hms.framework.network.grs.a.a r7) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                return
        }

        @Override
        public void a() {
                r9 = this;
                java.lang.String r0 = r9.d
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L10
                com.huawei.hms.framework.network.grs.IQueryUrlCallBack r0 = r9.c
                java.lang.String r1 = r9.d
                r0.onCallBackSuccess(r1)
                goto L48
            L10:
                java.lang.String r0 = r9.d
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L42
                java.lang.String r0 = com.huawei.hms.framework.network.grs.a.a()
                java.lang.String r1 = "access local config for return a domain."
                com.huawei.hms.framework.common.Logger.i(r0, r1)
                android.content.Context r0 = r9.e
                java.lang.String r0 = r0.getPackageName()
                com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r9.f
                com.huawei.hms.framework.network.grs.b.b r2 = com.huawei.hms.framework.network.grs.b.b.a(r0, r1)
                android.content.Context r3 = r9.e
                com.huawei.hms.framework.network.grs.a.a r4 = r9.g
                com.huawei.hms.framework.network.grs.GrsBaseInfo r5 = r9.f
                java.lang.String r6 = r9.a
                java.lang.String r7 = r9.b
                r8 = 1
                java.lang.String r0 = r2.a(r3, r4, r5, r6, r7, r8)
                com.huawei.hms.framework.network.grs.IQueryUrlCallBack r1 = r9.c
                r1.onCallBackSuccess(r0)
                goto L48
            L42:
                com.huawei.hms.framework.network.grs.IQueryUrlCallBack r0 = r9.c
                r1 = -3
                r0.onCallBackFail(r1)
            L48:
                return
        }

        @Override
        public void a(com.huawei.hms.framework.network.grs.c.f r9) {
                r8 = this;
                java.lang.String r9 = r9.i()
                java.lang.String r0 = r8.a
                java.lang.String r1 = r8.b
                java.lang.String r9 = com.huawei.hms.framework.network.grs.a.a(r9, r0, r1)
                boolean r0 = android.text.TextUtils.isEmpty(r9)
                if (r0 != 0) goto L18
            L12:
                com.huawei.hms.framework.network.grs.IQueryUrlCallBack r0 = r8.c
                r0.onCallBackSuccess(r9)
                goto L5b
            L18:
                java.lang.String r9 = r8.d
                boolean r9 = android.text.TextUtils.isEmpty(r9)
                if (r9 != 0) goto L28
                com.huawei.hms.framework.network.grs.IQueryUrlCallBack r9 = r8.c
                java.lang.String r0 = r8.d
                r9.onCallBackSuccess(r0)
                goto L5b
            L28:
                java.lang.String r9 = r8.d
                boolean r9 = android.text.TextUtils.isEmpty(r9)
                if (r9 == 0) goto L55
                java.lang.String r9 = com.huawei.hms.framework.network.grs.a.a()
                java.lang.String r0 = "access local config for return a domain."
                com.huawei.hms.framework.common.Logger.i(r9, r0)
                android.content.Context r9 = r8.e
                java.lang.String r9 = r9.getPackageName()
                com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r8.f
                com.huawei.hms.framework.network.grs.b.b r1 = com.huawei.hms.framework.network.grs.b.b.a(r9, r0)
                android.content.Context r2 = r8.e
                com.huawei.hms.framework.network.grs.a.a r3 = r8.g
                com.huawei.hms.framework.network.grs.GrsBaseInfo r4 = r8.f
                java.lang.String r5 = r8.a
                java.lang.String r6 = r8.b
                r7 = 1
                java.lang.String r9 = r1.a(r2, r3, r4, r5, r6, r7)
                goto L12
            L55:
                com.huawei.hms.framework.network.grs.IQueryUrlCallBack r9 = r8.c
                r0 = -5
                r9.onCallBackFail(r0)
            L5b:
                return
        }
    }

    public a(com.huawei.hms.framework.network.grs.GrsBaseInfo r1, com.huawei.hms.framework.network.grs.a.a r2, com.huawei.hms.framework.network.grs.c.m r3, com.huawei.hms.framework.network.grs.a.c r4) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r3
            r0.e = r4
            return
    }

    public static com.huawei.hms.framework.network.grs.local.model.CountryCodeBean a(android.content.Context r1, boolean r2) {
            com.huawei.hms.framework.network.grs.local.model.CountryCodeBean r0 = new com.huawei.hms.framework.network.grs.local.model.CountryCodeBean
            r0.<init>(r1, r2)
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.huawei.hms.framework.network.grs.a.a
            return r0
    }

    private java.lang.String a(java.lang.String r9, java.lang.String r10, com.huawei.hms.framework.network.grs.a.b r11, android.content.Context r12) {
            r8 = this;
            com.huawei.hms.framework.network.grs.a.a r0 = r8.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r8.b
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            java.lang.String r11 = r0.a(r1, r2, r3, r4, r5)
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 != 0) goto L1f
            java.lang.String r9 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r10 = "get url from sp is not empty."
            com.huawei.hms.framework.common.Logger.i(r9, r10)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r9 = r8.b
            com.huawei.hms.framework.network.grs.b.b.a(r12, r9)
            return r11
        L1f:
            java.lang.String r11 = r12.getPackageName()
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r8.b
            com.huawei.hms.framework.network.grs.b.b r1 = com.huawei.hms.framework.network.grs.b.b.a(r11, r0)
            com.huawei.hms.framework.network.grs.a.a r3 = r8.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r4 = r8.b
            r7 = 0
            r2 = r12
            r5 = r9
            r6 = r10
            java.lang.String r9 = r1.a(r2, r3, r4, r5, r6, r7)
            return r9
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L17
            r0.<init>(r2)     // Catch: org.json.JSONException -> L17
            org.json.JSONObject r2 = r0.getJSONObject(r3)     // Catch: org.json.JSONException -> L17
            java.lang.String r2 = r2.getString(r4)     // Catch: org.json.JSONException -> L17
            return r2
        L17:
            r2 = move-exception
            java.lang.String r3 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r4 = "Method{getServiceNameUrl} query url from SP occur an JSONException"
            com.huawei.hms.framework.common.Logger.w(r3, r4, r2)
            return r1
    }

    public static java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> a(java.lang.String r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 16
            r0.<init>(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L15
            java.lang.String r4 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r1 = "isSpExpire jsonValue is null."
            com.huawei.hms.framework.common.Logger.v(r4, r1)
            return r0
        L15:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L39
            r1.<init>(r4)     // Catch: org.json.JSONException -> L39
            java.util.Iterator r4 = r1.keys()     // Catch: org.json.JSONException -> L39
        L1e:
            boolean r2 = r4.hasNext()     // Catch: org.json.JSONException -> L39
            if (r2 == 0) goto L38
            java.lang.Object r2 = r4.next()     // Catch: org.json.JSONException -> L39
            java.lang.String r2 = r2.toString()     // Catch: org.json.JSONException -> L39
            org.json.JSONObject r3 = r1.getJSONObject(r2)     // Catch: org.json.JSONException -> L39
            java.util.Map r3 = a(r3)     // Catch: org.json.JSONException -> L39
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L39
            goto L1e
        L38:
            return r0
        L39:
            r4 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r2 = "getServicesUrlsMap occur a JSONException"
            com.huawei.hms.framework.common.Logger.w(r1, r2, r4)
            return r0
    }

    private java.util.Map<java.lang.String, java.lang.String> a(java.lang.String r8, com.huawei.hms.framework.network.grs.a.b r9, android.content.Context r10) {
            r7 = this;
            com.huawei.hms.framework.network.grs.a.a r0 = r7.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r7.b
            java.util.Map r9 = r0.a(r1, r8, r9, r10)
            if (r9 == 0) goto L1d
            boolean r0 = r9.isEmpty()
            if (r0 != 0) goto L1d
            java.lang.String r8 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r0 = "get url from sp is not empty."
            com.huawei.hms.framework.common.Logger.i(r8, r0)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r8 = r7.b
            com.huawei.hms.framework.network.grs.b.b.a(r10, r8)
            return r9
        L1d:
            java.lang.String r9 = r10.getPackageName()
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r7.b
            com.huawei.hms.framework.network.grs.b.b r1 = com.huawei.hms.framework.network.grs.b.b.a(r9, r0)
            com.huawei.hms.framework.network.grs.a.a r3 = r7.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r4 = r7.b
            r6 = 0
            r2 = r10
            r5 = r8
            java.util.Map r8 = r1.a(r2, r3, r4, r5, r6)
            return r8
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(java.lang.String r3, java.lang.String r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto L13
            java.lang.String r3 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r4 = "isSpExpire jsonValue is null."
            com.huawei.hms.framework.common.Logger.v(r3, r4)
            return r0
        L13:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L45
            r1.<init>(r3)     // Catch: org.json.JSONException -> L45
            org.json.JSONObject r3 = r1.getJSONObject(r4)     // Catch: org.json.JSONException -> L45
            if (r3 != 0) goto L26
            java.lang.String r3 = com.huawei.hms.framework.network.grs.a.a     // Catch: org.json.JSONException -> L45
            java.lang.String r4 = "getServiceNameUrls jsObject null."
            com.huawei.hms.framework.common.Logger.v(r3, r4)     // Catch: org.json.JSONException -> L45
            return r0
        L26:
            java.util.Iterator r4 = r3.keys()     // Catch: org.json.JSONException -> L45
        L2a:
            boolean r1 = r4.hasNext()     // Catch: org.json.JSONException -> L45
            if (r1 == 0) goto L44
            java.lang.Object r1 = r4.next()     // Catch: org.json.JSONException -> L45
            java.lang.String r1 = r1.toString()     // Catch: org.json.JSONException -> L45
            java.lang.Object r2 = r3.get(r1)     // Catch: org.json.JSONException -> L45
            java.lang.String r2 = r2.toString()     // Catch: org.json.JSONException -> L45
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L45
            goto L2a
        L44:
            return r0
        L45:
            r3 = move-exception
            java.lang.String r4 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r1 = "Method{getServiceNameUrls} query url from SP occur an JSONException"
            com.huawei.hms.framework.common.Logger.w(r4, r1, r3)
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(org.json.JSONObject r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 16
            r0.<init>(r1)
            java.util.Iterator r1 = r4.keys()     // Catch: org.json.JSONException -> L26
        Lb:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L26
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L26
            java.lang.String r2 = r2.toString()     // Catch: org.json.JSONException -> L26
            java.lang.Object r3 = r4.get(r2)     // Catch: org.json.JSONException -> L26
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L26
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L26
            goto Lb
        L25:
            return r0
        L26:
            r4 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r2 = "getServiceUrls occur a JSONException"
            com.huawei.hms.framework.common.Logger.w(r1, r2, r4)
            return r0
    }

    private void a(java.lang.String r11, java.util.Map<java.lang.String, java.lang.String> r12, com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r13, android.content.Context r14) {
            r10 = this;
            com.huawei.hms.framework.network.grs.c.b.c r0 = new com.huawei.hms.framework.network.grs.c.b.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r10.b
            r0.<init>(r1, r14)
            com.huawei.hms.framework.network.grs.c.m r1 = r10.d
            com.huawei.hms.framework.network.grs.a$a r9 = new com.huawei.hms.framework.network.grs.a$a
            com.huawei.hms.framework.network.grs.GrsBaseInfo r7 = r10.b
            com.huawei.hms.framework.network.grs.a.a r8 = r10.c
            r2 = r9
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r2.<init>(r3, r4, r5, r6, r7, r8)
            com.huawei.hms.framework.network.grs.a.c r12 = r10.e
            r1.a(r0, r9, r11, r12)
            return
    }

    public java.lang.String a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            com.huawei.hms.framework.network.grs.c.m r0 = r3.d
            com.huawei.hms.framework.network.grs.c.b.c r1 = new com.huawei.hms.framework.network.grs.c.b.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r2 = r3.b
            r1.<init>(r2, r4)
            com.huawei.hms.framework.network.grs.a.c r4 = r3.e
            com.huawei.hms.framework.network.grs.c.f r4 = r0.a(r1, r5, r4)
            if (r4 != 0) goto L14
            java.lang.String r4 = ""
            goto L18
        L14:
            java.lang.String r4 = r4.i()
        L18:
            return r4
    }

    public java.lang.String a(java.lang.String r10, java.lang.String r11, android.content.Context r12) {
            r9 = this;
            com.huawei.hms.framework.network.grs.a.b r0 = new com.huawei.hms.framework.network.grs.a.b
            r0.<init>()
            java.lang.String r1 = r9.a(r10, r11, r0, r12)
            boolean r0 = r0.a()
            if (r0 == 0) goto L28
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L28
            java.lang.String r10 = com.huawei.hms.framework.network.grs.a.a
            r11 = 1
            java.lang.Object[] r11 = new java.lang.Object[r11]
            r0 = 0
            r11[r0] = r1
            java.lang.String r0 = "get unexpired cache localUrl{%s}"
            com.huawei.hms.framework.common.Logger.v(r10, r0, r11)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r10 = r9.b
            com.huawei.hms.framework.network.grs.b.b.a(r12, r10)
            return r1
        L28:
            java.lang.String r0 = r9.a(r12, r10)
            java.lang.String r0 = a(r0, r10, r11)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L43
            java.lang.String r10 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r11 = "get url is from remote server"
            com.huawei.hms.framework.common.Logger.i(r10, r11)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r10 = r9.b
            com.huawei.hms.framework.network.grs.b.b.a(r12, r10)
            return r0
        L43:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L66
            java.lang.String r0 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r1 = "access local config for return a domain."
            com.huawei.hms.framework.common.Logger.i(r0, r1)
            java.lang.String r0 = r12.getPackageName()
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r9.b
            com.huawei.hms.framework.network.grs.b.b r2 = com.huawei.hms.framework.network.grs.b.b.a(r0, r1)
            com.huawei.hms.framework.network.grs.a.a r4 = r9.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r5 = r9.b
            r8 = 1
            r3 = r12
            r6 = r10
            r7 = r11
            java.lang.String r1 = r2.a(r3, r4, r5, r6, r7, r8)
        L66:
            return r1
    }

    public java.util.Map<java.lang.String, java.lang.String> a(java.lang.String r9, android.content.Context r10) {
            r8 = this;
            com.huawei.hms.framework.network.grs.a.b r0 = new com.huawei.hms.framework.network.grs.a.b
            r0.<init>()
            java.util.Map r1 = r8.a(r9, r0, r10)
            boolean r0 = r0.a()
            if (r0 == 0) goto L1d
            if (r1 == 0) goto L1d
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L1d
            com.huawei.hms.framework.network.grs.GrsBaseInfo r9 = r8.b
            com.huawei.hms.framework.network.grs.b.b.a(r10, r9)
            return r1
        L1d:
            java.lang.String r0 = r8.a(r10, r9)
            java.util.Map r0 = a(r0, r9)
            boolean r2 = r0.isEmpty()
            if (r2 != 0) goto L31
            com.huawei.hms.framework.network.grs.GrsBaseInfo r9 = r8.b
            com.huawei.hms.framework.network.grs.b.b.a(r10, r9)
            return r0
        L31:
            if (r1 == 0) goto L55
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto L55
            java.lang.String r0 = com.huawei.hms.framework.network.grs.a.a
            java.lang.String r1 = "access local config for return a domain."
            com.huawei.hms.framework.common.Logger.i(r0, r1)
            java.lang.String r0 = r10.getPackageName()
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r8.b
            com.huawei.hms.framework.network.grs.b.b r2 = com.huawei.hms.framework.network.grs.b.b.a(r0, r1)
            com.huawei.hms.framework.network.grs.a.a r4 = r8.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r5 = r8.b
            r7 = 1
            r3 = r10
            r6 = r9
            java.util.Map r1 = r2.a(r3, r4, r5, r6, r7)
        L55:
            return r1
    }

    public void a(java.lang.String r3, com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r4, android.content.Context r5) {
            r2 = this;
            com.huawei.hms.framework.network.grs.a.b r0 = new com.huawei.hms.framework.network.grs.a.b
            r0.<init>()
            java.util.Map r1 = r2.a(r3, r0, r5)
            boolean r0 = r0.a()
            if (r0 == 0) goto L26
            if (r1 == 0) goto L21
            boolean r3 = r1.isEmpty()
            if (r3 == 0) goto L18
            goto L21
        L18:
            com.huawei.hms.framework.network.grs.GrsBaseInfo r3 = r2.b
            com.huawei.hms.framework.network.grs.b.b.a(r5, r3)
            r4.onCallBackSuccess(r1)
            goto L25
        L21:
            r3 = -5
            r4.onCallBackFail(r3)
        L25:
            return
        L26:
            r2.a(r3, r1, r4, r5)
            return
    }

    public void a(java.lang.String r12, java.lang.String r13, com.huawei.hms.framework.network.grs.IQueryUrlCallBack r14, android.content.Context r15) {
            r11 = this;
            com.huawei.hms.framework.network.grs.a.b r0 = new com.huawei.hms.framework.network.grs.a.b
            r0.<init>()
            java.lang.String r5 = r11.a(r12, r13, r0, r15)
            boolean r0 = r0.a()
            if (r0 == 0) goto L23
            boolean r12 = android.text.TextUtils.isEmpty(r5)
            if (r12 == 0) goto L1a
            r12 = -5
            r14.onCallBackFail(r12)
            goto L22
        L1a:
            com.huawei.hms.framework.network.grs.GrsBaseInfo r12 = r11.b
            com.huawei.hms.framework.network.grs.b.b.a(r15, r12)
            r14.onCallBackSuccess(r5)
        L22:
            return
        L23:
            com.huawei.hms.framework.network.grs.c.b.c r0 = new com.huawei.hms.framework.network.grs.c.b.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r11.b
            r0.<init>(r1, r15)
            com.huawei.hms.framework.network.grs.c.m r9 = r11.d
            com.huawei.hms.framework.network.grs.a$b r10 = new com.huawei.hms.framework.network.grs.a$b
            com.huawei.hms.framework.network.grs.GrsBaseInfo r7 = r11.b
            com.huawei.hms.framework.network.grs.a.a r8 = r11.c
            r1 = r10
            r2 = r12
            r3 = r13
            r4 = r14
            r6 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            com.huawei.hms.framework.network.grs.a.c r13 = r11.e
            r9.a(r0, r10, r12, r13)
            return
    }
}
