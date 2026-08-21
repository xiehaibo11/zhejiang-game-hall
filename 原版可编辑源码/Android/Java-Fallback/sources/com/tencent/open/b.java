package com.tencent.open;

public class b {
    protected java.util.HashMap<java.lang.String, com.tencent.open.b.b> a;

    public static class a {
        protected java.lang.ref.WeakReference<android.webkit.WebView> a;
        protected long b;
        protected java.lang.String c;

        public a(android.webkit.WebView r2, long r3, java.lang.String r5) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                r1.b = r3
                r1.c = r5
                return
        }

        public void a() {
                r4 = this;
                java.lang.ref.WeakReference<android.webkit.WebView> r0 = r4.a
                java.lang.Object r0 = r0.get()
                android.webkit.WebView r0 = (android.webkit.WebView) r0
                if (r0 != 0) goto Lb
                return
            Lb:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "javascript:window.JsBridge&&JsBridge.callback("
                r1.append(r2)
                long r2 = r4.b
                r1.append(r2)
                java.lang.String r2 = ",{'r':1,'result':'no such method'})"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.loadUrl(r1)
                return
        }

        public void a(java.lang.Object r5) {
                r4 = this;
                java.lang.ref.WeakReference<android.webkit.WebView> r0 = r4.a
                java.lang.Object r0 = r0.get()
                android.webkit.WebView r0 = (android.webkit.WebView) r0
                if (r0 != 0) goto Lb
                return
            Lb:
                boolean r1 = r5 instanceof java.lang.String
                if (r1 == 0) goto L34
                java.lang.String r5 = (java.lang.String) r5
                java.lang.String r1 = "\\"
                java.lang.String r2 = "\\\\"
                java.lang.String r5 = r5.replace(r1, r2)
                java.lang.String r1 = "'"
                java.lang.String r2 = "\\'"
                java.lang.String r5 = r5.replace(r1, r2)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r1)
                r2.append(r5)
                r2.append(r1)
                java.lang.String r5 = r2.toString()
                goto L59
            L34:
                boolean r1 = r5 instanceof java.lang.Number
                if (r1 != 0) goto L55
                boolean r1 = r5 instanceof java.lang.Long
                if (r1 != 0) goto L55
                boolean r1 = r5 instanceof java.lang.Integer
                if (r1 != 0) goto L55
                boolean r1 = r5 instanceof java.lang.Double
                if (r1 != 0) goto L55
                boolean r1 = r5 instanceof java.lang.Float
                if (r1 == 0) goto L49
                goto L55
            L49:
                boolean r1 = r5 instanceof java.lang.Boolean
                if (r1 == 0) goto L52
                java.lang.String r5 = r5.toString()
                goto L59
            L52:
                java.lang.String r5 = "'undefined'"
                goto L59
            L55:
                java.lang.String r5 = r5.toString()
            L59:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "javascript:window.JsBridge&&JsBridge.callback("
                r1.append(r2)
                long r2 = r4.b
                r1.append(r2)
                java.lang.String r2 = ",{'r':0,'result':"
                r1.append(r2)
                r1.append(r5)
                java.lang.String r5 = "});"
                r1.append(r5)
                java.lang.String r5 = r1.toString()
                r0.loadUrl(r5)
                return
        }

        public void a(java.lang.String r4) {
                r3 = this;
                java.lang.ref.WeakReference<android.webkit.WebView> r0 = r3.a
                java.lang.Object r0 = r0.get()
                android.webkit.WebView r0 = (android.webkit.WebView) r0
                if (r0 == 0) goto L1e
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "javascript:"
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.loadUrl(r4)
            L1e:
                return
        }
    }

    public static class b {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public void call(java.lang.String r11, java.util.List<java.lang.String> r12, com.tencent.open.b.a r13) {
                r10 = this;
                java.lang.String r0 = "openSDK_LOG.JsBridge"
                java.lang.Class r1 = r10.getClass()
                java.lang.reflect.Method[] r1 = r1.getDeclaredMethods()
                int r2 = r1.length
                r3 = 0
                r4 = 0
            Ld:
                r5 = 0
                if (r4 >= r2) goto L2b
                r6 = r1[r4]
                java.lang.String r7 = r6.getName()
                boolean r7 = r7.equals(r11)
                if (r7 == 0) goto L28
                java.lang.Class[] r7 = r6.getParameterTypes()
                int r7 = r7.length
                int r8 = r12.size()
                if (r7 != r8) goto L28
                goto L2c
            L28:
                int r4 = r4 + 1
                goto Ld
            L2b:
                r6 = r5
            L2c:
                if (r6 == 0) goto L15b
                int r11 = r12.size()     // Catch: java.lang.Exception -> L140
                if (r11 == 0) goto Led
                r1 = 1
                if (r11 == r1) goto Le0
                r2 = 2
                if (r11 == r2) goto Lcd
                r4 = 3
                if (r11 == r4) goto Lb4
                r7 = 4
                if (r11 == r7) goto L95
                r8 = 5
                if (r11 == r8) goto L70
                r11 = 6
                java.lang.Object[] r11 = new java.lang.Object[r11]     // Catch: java.lang.Exception -> L140
                java.lang.Object r9 = r12.get(r3)     // Catch: java.lang.Exception -> L140
                r11[r3] = r9     // Catch: java.lang.Exception -> L140
                java.lang.Object r3 = r12.get(r1)     // Catch: java.lang.Exception -> L140
                r11[r1] = r3     // Catch: java.lang.Exception -> L140
                java.lang.Object r1 = r12.get(r2)     // Catch: java.lang.Exception -> L140
                r11[r2] = r1     // Catch: java.lang.Exception -> L140
                java.lang.Object r1 = r12.get(r4)     // Catch: java.lang.Exception -> L140
                r11[r4] = r1     // Catch: java.lang.Exception -> L140
                java.lang.Object r1 = r12.get(r7)     // Catch: java.lang.Exception -> L140
                r11[r7] = r1     // Catch: java.lang.Exception -> L140
                java.lang.Object r12 = r12.get(r8)     // Catch: java.lang.Exception -> L140
                r11[r8] = r12     // Catch: java.lang.Exception -> L140
                java.lang.Object r11 = r6.invoke(r10, r11)     // Catch: java.lang.Exception -> L140
                goto Lf3
            L70:
                java.lang.Object[] r11 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L140
                java.lang.Object r8 = r12.get(r3)     // Catch: java.lang.Exception -> L140
                r11[r3] = r8     // Catch: java.lang.Exception -> L140
                java.lang.Object r3 = r12.get(r1)     // Catch: java.lang.Exception -> L140
                r11[r1] = r3     // Catch: java.lang.Exception -> L140
                java.lang.Object r1 = r12.get(r2)     // Catch: java.lang.Exception -> L140
                r11[r2] = r1     // Catch: java.lang.Exception -> L140
                java.lang.Object r1 = r12.get(r4)     // Catch: java.lang.Exception -> L140
                r11[r4] = r1     // Catch: java.lang.Exception -> L140
                java.lang.Object r12 = r12.get(r7)     // Catch: java.lang.Exception -> L140
                r11[r7] = r12     // Catch: java.lang.Exception -> L140
                java.lang.Object r11 = r6.invoke(r10, r11)     // Catch: java.lang.Exception -> L140
                goto Lf3
            L95:
                java.lang.Object[] r11 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L140
                java.lang.Object r7 = r12.get(r3)     // Catch: java.lang.Exception -> L140
                r11[r3] = r7     // Catch: java.lang.Exception -> L140
                java.lang.Object r3 = r12.get(r1)     // Catch: java.lang.Exception -> L140
                r11[r1] = r3     // Catch: java.lang.Exception -> L140
                java.lang.Object r1 = r12.get(r2)     // Catch: java.lang.Exception -> L140
                r11[r2] = r1     // Catch: java.lang.Exception -> L140
                java.lang.Object r12 = r12.get(r4)     // Catch: java.lang.Exception -> L140
                r11[r4] = r12     // Catch: java.lang.Exception -> L140
                java.lang.Object r11 = r6.invoke(r10, r11)     // Catch: java.lang.Exception -> L140
                goto Lf3
            Lb4:
                java.lang.Object[] r11 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L140
                java.lang.Object r4 = r12.get(r3)     // Catch: java.lang.Exception -> L140
                r11[r3] = r4     // Catch: java.lang.Exception -> L140
                java.lang.Object r3 = r12.get(r1)     // Catch: java.lang.Exception -> L140
                r11[r1] = r3     // Catch: java.lang.Exception -> L140
                java.lang.Object r12 = r12.get(r2)     // Catch: java.lang.Exception -> L140
                r11[r2] = r12     // Catch: java.lang.Exception -> L140
                java.lang.Object r11 = r6.invoke(r10, r11)     // Catch: java.lang.Exception -> L140
                goto Lf3
            Lcd:
                java.lang.Object[] r11 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L140
                java.lang.Object r2 = r12.get(r3)     // Catch: java.lang.Exception -> L140
                r11[r3] = r2     // Catch: java.lang.Exception -> L140
                java.lang.Object r12 = r12.get(r1)     // Catch: java.lang.Exception -> L140
                r11[r1] = r12     // Catch: java.lang.Exception -> L140
                java.lang.Object r11 = r6.invoke(r10, r11)     // Catch: java.lang.Exception -> L140
                goto Lf3
            Le0:
                java.lang.Object[] r11 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L140
                java.lang.Object r12 = r12.get(r3)     // Catch: java.lang.Exception -> L140
                r11[r3] = r12     // Catch: java.lang.Exception -> L140
                java.lang.Object r11 = r6.invoke(r10, r11)     // Catch: java.lang.Exception -> L140
                goto Lf3
            Led:
                java.lang.Object[] r11 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L140
                java.lang.Object r11 = r6.invoke(r10, r11)     // Catch: java.lang.Exception -> L140
            Lf3:
                java.lang.Class r12 = r6.getReturnType()     // Catch: java.lang.Exception -> L140
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L140
                r1.<init>()     // Catch: java.lang.Exception -> L140
                java.lang.String r2 = "-->call, result: "
                r1.append(r2)     // Catch: java.lang.Exception -> L140
                r1.append(r11)     // Catch: java.lang.Exception -> L140
                java.lang.String r2 = " | ReturnType: "
                r1.append(r2)     // Catch: java.lang.Exception -> L140
                java.lang.String r2 = r12.getName()     // Catch: java.lang.Exception -> L140
                r1.append(r2)     // Catch: java.lang.Exception -> L140
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L140
                com.tencent.open.log.SLog.d(r0, r1)     // Catch: java.lang.Exception -> L140
                java.lang.String r1 = "void"
                java.lang.String r2 = r12.getName()     // Catch: java.lang.Exception -> L140
                boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L140
                if (r1 != 0) goto L13a
                java.lang.Class<java.lang.Void> r1 = java.lang.Void.class
                if (r12 != r1) goto L128
                goto L13a
            L128:
                if (r13 == 0) goto L13f
                boolean r12 = r10.customCallback()     // Catch: java.lang.Exception -> L140
                if (r12 == 0) goto L13f
                if (r11 == 0) goto L136
                java.lang.String r5 = r11.toString()     // Catch: java.lang.Exception -> L140
            L136:
                r13.a(r5)     // Catch: java.lang.Exception -> L140
                goto L13f
            L13a:
                if (r13 == 0) goto L13f
                r13.a(r5)     // Catch: java.lang.Exception -> L140
            L13f:
                return
            L140:
                r11 = move-exception
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                r12.<init>()
                java.lang.String r1 = "-->handler call mehtod ex. targetMethod: "
                r12.append(r1)
                r12.append(r6)
                java.lang.String r12 = r12.toString()
                com.tencent.open.log.SLog.e(r0, r12, r11)
                if (r13 == 0) goto L15a
                r13.a()
            L15a:
                return
            L15b:
                if (r13 == 0) goto L160
                r13.a()
            L160:
                return
        }

        public boolean customCallback() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    public b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public void a(com.tencent.open.b.b r2, java.lang.String r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, com.tencent.open.b$b> r0 = r1.a
            r0.put(r3, r2)
            return
    }

    public void a(java.lang.String r6, java.lang.String r7, java.util.List<java.lang.String> r8, com.tencent.open.b.a r9) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getResult---objName = "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r1 = " methodName = "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.JsBridge"
            com.tencent.open.log.SLog.v(r1, r0)
            int r0 = r8.size()
            r2 = 0
        L23:
            if (r2 >= r0) goto L3c
            java.lang.Object r3 = r8.get(r2)     // Catch: java.io.UnsupportedEncodingException -> L35
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.io.UnsupportedEncodingException -> L35
            java.lang.String r4 = "UTF-8"
            java.lang.String r3 = java.net.URLDecoder.decode(r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L35
            r8.set(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L35
            goto L39
        L35:
            r3 = move-exception
            r3.printStackTrace()
        L39:
            int r2 = r2 + 1
            goto L23
        L3c:
            java.util.HashMap<java.lang.String, com.tencent.open.b$b> r0 = r5.a
            java.lang.Object r6 = r0.get(r6)
            com.tencent.open.b$b r6 = (com.tencent.open.b.b) r6
            if (r6 == 0) goto L4f
            java.lang.String r0 = "call----"
            com.tencent.open.log.SLog.d(r1, r0)
            r6.call(r7, r8, r9)
            goto L59
        L4f:
            java.lang.String r6 = "not call----objName NOT FIND"
            com.tencent.open.log.SLog.d(r1, r6)
            if (r9 == 0) goto L59
            r9.a()
        L59:
            return
    }

    public boolean a(android.webkit.WebView r9, java.lang.String r10) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->canHandleUrl---url = "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.JsBridge"
            com.tencent.open.log.SLog.v(r1, r0)
            r0 = 0
            if (r10 != 0) goto L1a
            return r0
        L1a:
            android.net.Uri r1 = android.net.Uri.parse(r10)
            java.lang.String r1 = r1.getScheme()
            java.lang.String r2 = "jsbridge"
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L2b
            return r0
        L2b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            java.lang.String r2 = "/#"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "/"
            java.lang.String[] r1 = r1.split(r2)
            java.util.ArrayList r2 = new java.util.ArrayList
            java.util.List r1 = java.util.Arrays.asList(r1)
            r2.<init>(r1)
            int r1 = r2.size()
            r3 = 6
            if (r1 >= r3) goto L53
            return r0
        L53:
            r0 = 2
            java.lang.Object r0 = r2.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r1 = 3
            java.lang.Object r1 = r2.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r3 = 4
            r5 = 4
            int r6 = r2.size()
            r7 = 1
            int r6 = r6 - r7
            java.util.List r2 = r2.subList(r5, r6)
            com.tencent.open.b$a r5 = new com.tencent.open.b$a
            r5.<init>(r9, r3, r10)
            r9.getUrl()
            r8.a(r0, r1, r2, r5)
            return r7
    }
}
