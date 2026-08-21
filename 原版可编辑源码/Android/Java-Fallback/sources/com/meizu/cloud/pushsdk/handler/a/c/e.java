package com.meizu.cloud.pushsdk.handler.a.c;

public class e {
    private int a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private int e;
    private java.lang.String f;

    public class a {
        public java.lang.String a;
        public java.lang.String b;
        java.lang.String c;

        public a(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "value"
                java.lang.String r1 = "message"
                java.lang.String r2 = "code"
                r4.<init>()
                boolean r3 = android.text.TextUtils.isEmpty(r5)
                if (r3 != 0) goto L57
                org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3c
                r3.<init>(r5)     // Catch: org.json.JSONException -> L3c
                boolean r5 = r3.isNull(r2)     // Catch: org.json.JSONException -> L3c
                if (r5 != 0) goto L21
                java.lang.String r5 = r3.getString(r2)     // Catch: org.json.JSONException -> L3c
                r4.a(r5)     // Catch: org.json.JSONException -> L3c
            L21:
                boolean r5 = r3.isNull(r1)     // Catch: org.json.JSONException -> L3c
                if (r5 != 0) goto L2e
                java.lang.String r5 = r3.getString(r1)     // Catch: org.json.JSONException -> L3c
                r4.b(r5)     // Catch: org.json.JSONException -> L3c
            L2e:
                boolean r5 = r3.isNull(r0)     // Catch: org.json.JSONException -> L3c
                if (r5 != 0) goto L57
                java.lang.String r5 = r3.getString(r0)     // Catch: org.json.JSONException -> L3c
                r4.c(r5)     // Catch: org.json.JSONException -> L3c
                goto L57
            L3c:
                r5 = move-exception
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "covert json error "
                r0.append(r1)
                java.lang.String r5 = r5.getMessage()
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                java.lang.String r0 = "SecurityMessage"
                com.meizu.cloud.pushinternal.DebugLogger.e(r0, r5)
            L57:
                return
        }

        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.c
                return r0
        }

        public void a(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public void b(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public void c(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return
        }

        public java.lang.String toString() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "PublicKeyStatus{code='"
                r0.append(r1)
                java.lang.String r1 = r3.a
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                java.lang.String r2 = ", message='"
                r0.append(r2)
                java.lang.String r2 = r3.b
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = ", publicKey='"
                r0.append(r2)
                java.lang.String r2 = r3.c
                r0.append(r2)
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public e() {
            r2 = this;
            r2.<init>()
            r0 = -1
            java.lang.String r1 = java.lang.String.valueOf(r0)
            r2.b = r1
            java.lang.String r1 = ""
            r2.c = r1
            r2.d = r1
            r2.e = r0
            r2.f = r1
            return
    }

    public static java.lang.String a(com.meizu.cloud.pushsdk.handler.MessageV3 r6) {
            java.lang.String r0 = "extra"
            java.lang.String r1 = "se"
            java.lang.String r6 = r6.getNotificationMessage()
            boolean r2 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r3 = "SecurityMessage"
            r4 = 0
            if (r2 != 0) goto L76
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L40 org.json.JSONException -> L42
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L40 org.json.JSONException -> L42
            java.lang.String r5 = "data"
            org.json.JSONObject r2 = r2.getJSONObject(r5)     // Catch: java.lang.Throwable -> L40 org.json.JSONException -> L42
            boolean r5 = r2.isNull(r0)     // Catch: java.lang.Throwable -> L40 org.json.JSONException -> L42
            if (r5 != 0) goto L30
            org.json.JSONObject r0 = r2.getJSONObject(r0)     // Catch: java.lang.Throwable -> L40 org.json.JSONException -> L42
            boolean r2 = r0.isNull(r1)     // Catch: java.lang.Throwable -> L40 org.json.JSONException -> L42
            if (r2 != 0) goto L30
            java.lang.String r4 = r0.getString(r1)     // Catch: java.lang.Throwable -> L40 org.json.JSONException -> L42
        L30:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L76
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L76
            r0.<init>(r6)     // Catch: java.lang.Exception -> L76
        L3b:
            java.lang.String r4 = r0.getString(r1)     // Catch: java.lang.Exception -> L76
            goto L76
        L40:
            r0 = move-exception
            goto L67
        L42:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L40
            r2.<init>()     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = "parse notification message error "
            r2.append(r5)     // Catch: java.lang.Throwable -> L40
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L40
            r2.append(r0)     // Catch: java.lang.Throwable -> L40
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L40
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r0)     // Catch: java.lang.Throwable -> L40
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L76
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L76
            r0.<init>(r6)     // Catch: java.lang.Exception -> L76
            goto L3b
        L67:
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto L75
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L75
            r2.<init>(r6)     // Catch: java.lang.Exception -> L75
            r2.getString(r1)     // Catch: java.lang.Exception -> L75
        L75:
            throw r0
        L76:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "encrypt message "
            r6.append(r0)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r6)
            return r4
    }

    public static boolean a(java.lang.String r6, com.meizu.cloud.pushsdk.handler.MessageV3 r7) {
            com.meizu.cloud.pushsdk.handler.a.c.e r6 = e(r6)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "securityMessage "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SecurityMessage"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            long r2 = java.lang.System.currentTimeMillis()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            int r0 = r6.a()
            long r4 = (long) r0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r2 = 0
            if (r0 <= 0) goto L31
            java.lang.String r6 = "message expire"
        L2d:
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r6)
            return r2
        L31:
            java.lang.String r0 = r7.getTitle()
            java.lang.String r3 = r6.c()
            boolean r0 = r0.contains(r3)
            if (r0 != 0) goto L42
            java.lang.String r6 = "invalid title"
            goto L2d
        L42:
            java.lang.String r0 = r7.getContent()
            java.lang.String r3 = r6.d()
            boolean r0 = r0.contains(r3)
            if (r0 != 0) goto L53
            java.lang.String r6 = "invalid content"
            goto L2d
        L53:
            r0 = -1
            java.lang.String r3 = java.lang.String.valueOf(r0)
            java.lang.String r4 = r6.b()
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L73
            java.lang.String r3 = r6.b()
            java.lang.String r4 = r7.getTaskId()
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L73
            java.lang.String r6 = "invalid taskId"
            goto L2d
        L73:
            int r3 = r6.e()
            if (r3 == r0) goto Lc0
            int r0 = r6.e()
            r3 = 1
            if (r0 == r3) goto Lad
            r4 = 2
            if (r0 == r4) goto L9c
            r4 = 3
            if (r0 == r4) goto L87
            goto Lbf
        L87:
            com.meizu.cloud.pushsdk.handler.MzPushMessage r7 = com.meizu.cloud.pushsdk.handler.MzPushMessage.fromMessageV3(r7)
            java.lang.String r7 = r7.getSelfDefineContentString()
            java.lang.String r6 = r6.f()
            boolean r6 = r7.contains(r6)
            if (r6 != 0) goto Lbf
            java.lang.String r6 = "invalid self define"
            goto L2d
        L9c:
            java.lang.String r7 = r7.getWebUrl()
            java.lang.String r6 = r6.f()
            boolean r6 = r7.contains(r6)
            if (r6 != 0) goto Lbf
            java.lang.String r6 = "invalid web url"
            goto L2d
        Lad:
            java.lang.String r7 = r7.getActivity()
            java.lang.String r6 = r6.f()
            boolean r6 = r7.contains(r6)
            if (r6 != 0) goto Lbf
            java.lang.String r6 = "invalid click activity"
            goto L2d
        Lbf:
            return r3
        Lc0:
            java.lang.String r6 = "invalid click type"
            goto L2d
    }

    private static com.meizu.cloud.pushsdk.handler.a.c.e e(java.lang.String r8) {
            java.lang.String r0 = "pm"
            java.lang.String r1 = "ct"
            java.lang.String r2 = "cont"
            java.lang.String r3 = "tl"
            java.lang.String r4 = "ti"
            java.lang.String r5 = "tt"
            com.meizu.cloud.pushsdk.handler.a.c.e r6 = new com.meizu.cloud.pushsdk.handler.a.c.e
            r6.<init>()
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Exception -> L65
            r7.<init>(r8)     // Catch: java.lang.Exception -> L65
            boolean r8 = r7.isNull(r5)     // Catch: java.lang.Exception -> L65
            if (r8 != 0) goto L23
            int r8 = r7.getInt(r5)     // Catch: java.lang.Exception -> L65
            r6.a(r8)     // Catch: java.lang.Exception -> L65
        L23:
            boolean r8 = r7.isNull(r4)     // Catch: java.lang.Exception -> L65
            if (r8 != 0) goto L30
            java.lang.String r8 = r7.getString(r4)     // Catch: java.lang.Exception -> L65
            r6.a(r8)     // Catch: java.lang.Exception -> L65
        L30:
            boolean r8 = r7.isNull(r3)     // Catch: java.lang.Exception -> L65
            if (r8 != 0) goto L3d
            java.lang.String r8 = r7.getString(r3)     // Catch: java.lang.Exception -> L65
            r6.b(r8)     // Catch: java.lang.Exception -> L65
        L3d:
            boolean r8 = r7.isNull(r2)     // Catch: java.lang.Exception -> L65
            if (r8 != 0) goto L4a
            java.lang.String r8 = r7.getString(r2)     // Catch: java.lang.Exception -> L65
            r6.c(r8)     // Catch: java.lang.Exception -> L65
        L4a:
            boolean r8 = r7.isNull(r1)     // Catch: java.lang.Exception -> L65
            if (r8 != 0) goto L57
            int r8 = r7.getInt(r1)     // Catch: java.lang.Exception -> L65
            r6.b(r8)     // Catch: java.lang.Exception -> L65
        L57:
            boolean r8 = r7.isNull(r0)     // Catch: java.lang.Exception -> L65
            if (r8 != 0) goto L80
            java.lang.String r8 = r7.getString(r0)     // Catch: java.lang.Exception -> L65
            r6.d(r8)     // Catch: java.lang.Exception -> L65
            goto L80
        L65:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse decryptSign error "
            r0.append(r1)
            java.lang.String r8 = r8.getMessage()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            java.lang.String r0 = "SecurityMessage"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r8)
        L80:
            return r6
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public int e() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SecurityMessage{timestamp="
            r0.append(r1)
            int r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", taskId='"
            r0.append(r1)
            java.lang.String r1 = r3.b
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", title='"
            r0.append(r2)
            java.lang.String r2 = r3.c
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", content='"
            r0.append(r2)
            java.lang.String r2 = r3.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", clickType="
            r0.append(r2)
            int r2 = r3.e
            r0.append(r2)
            java.lang.String r2 = ", params='"
            r0.append(r2)
            java.lang.String r2 = r3.f
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
