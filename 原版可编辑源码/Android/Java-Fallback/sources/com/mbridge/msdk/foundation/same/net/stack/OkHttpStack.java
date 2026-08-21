package com.mbridge.msdk.foundation.same.net.stack;

public class OkHttpStack implements com.mbridge.msdk.foundation.same.net.stack.a {
    private final com.mbridge.msdk.thrid.okhttp.OkHttpClient mClient;

    private static class DefaultEventListener extends com.mbridge.msdk.thrid.okhttp.EventListener {
        private long callDuring;
        private long callStart;
        private long connectDuring;
        private java.lang.String connectErrorMessage;
        private long connectStart;
        private long connectionDuring;
        private long connectionStart;
        private long dnsDuring;
        private java.lang.String dnsResult;
        private long dnsStart;
        private java.lang.String hostName;
        private com.mbridge.msdk.foundation.same.net.stack.b.b httpStatus;
        private boolean isReportHttpStatus;
        private java.lang.String method;

        public DefaultEventListener(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                com.mbridge.msdk.foundation.same.net.stack.b r0 = com.mbridge.msdk.foundation.same.net.stack.b.a()     // Catch: java.lang.Exception -> L1a
                boolean r2 = r0.a(r2)     // Catch: java.lang.Exception -> L1a
                r1.isReportHttpStatus = r2     // Catch: java.lang.Exception -> L1a
                if (r2 == 0) goto L20
                com.mbridge.msdk.foundation.same.net.stack.b r2 = com.mbridge.msdk.foundation.same.net.stack.b.a()     // Catch: java.lang.Exception -> L1a
                com.mbridge.msdk.foundation.same.net.stack.b$b r2 = r2.c()     // Catch: java.lang.Exception -> L1a
                r1.httpStatus = r2     // Catch: java.lang.Exception -> L1a
                goto L20
            L1a:
                r2 = 0
                r1.isReportHttpStatus = r2
                r2 = 0
                r1.httpStatus = r2
            L20:
                return
        }

        @Override
        public void callEnd(com.mbridge.msdk.thrid.okhttp.Call r5) {
                r4 = this;
                super.callEnd(r5)
                com.mbridge.msdk.foundation.same.net.a r5 = com.mbridge.msdk.foundation.same.net.a.a()     // Catch: java.lang.Exception -> La
                r5.c()     // Catch: java.lang.Exception -> La
            La:
                boolean r5 = r4.isReportHttpStatus
                if (r5 == 0) goto L5e
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus
                if (r5 == 0) goto L5e
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L54
                long r2 = r4.callStart     // Catch: java.lang.Exception -> L54
                long r0 = r0 - r2
                r4.callDuring = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                r0 = 0
                r5.a = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                java.lang.String r0 = r4.method     // Catch: java.lang.Exception -> L54
                r5.d = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                long r0 = r4.callDuring     // Catch: java.lang.Exception -> L54
                r5.b = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                java.lang.String r0 = r4.hostName     // Catch: java.lang.Exception -> L54
                r5.e = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                long r0 = r4.dnsDuring     // Catch: java.lang.Exception -> L54
                r5.g = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                java.lang.String r0 = r4.dnsResult     // Catch: java.lang.Exception -> L54
                r5.h = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                long r0 = r4.connectDuring     // Catch: java.lang.Exception -> L54
                r5.i = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                long r0 = r4.connectionDuring     // Catch: java.lang.Exception -> L54
                r5.k = r0     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b r5 = com.mbridge.msdk.foundation.same.net.stack.b.a()     // Catch: java.lang.Exception -> L54
                com.mbridge.msdk.foundation.same.net.stack.b$b r0 = r4.httpStatus     // Catch: java.lang.Exception -> L54
                r5.a(r0)     // Catch: java.lang.Exception -> L54
                goto L5e
            L54:
                r5 = move-exception
                java.lang.String r5 = r5.getMessage()
                java.lang.String r0 = "OkHttpStack"
                com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            L5e:
                return
        }

        @Override
        public void callFailed(com.mbridge.msdk.thrid.okhttp.Call r5, java.io.IOException r6) {
                r4 = this;
                super.callFailed(r5, r6)
                com.mbridge.msdk.foundation.same.net.a r5 = com.mbridge.msdk.foundation.same.net.a.a()     // Catch: java.lang.Exception -> La
                r5.d()     // Catch: java.lang.Exception -> La
            La:
                boolean r5 = r4.isReportHttpStatus
                if (r5 == 0) goto L7f
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus
                if (r5 == 0) goto L7f
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L75
                long r2 = r4.callStart     // Catch: java.lang.Exception -> L75
                long r0 = r0 - r2
                r4.callDuring = r0     // Catch: java.lang.Exception -> L75
                java.lang.String r5 = r4.connectErrorMessage     // Catch: java.lang.Exception -> L75
                boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L75
                if (r5 != 0) goto L2f
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                r0 = 1
                r5.a = r0     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                java.lang.String r0 = r4.connectErrorMessage     // Catch: java.lang.Exception -> L75
                r5.j = r0     // Catch: java.lang.Exception -> L75
                goto L34
            L2f:
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                r0 = 2
                r5.a = r0     // Catch: java.lang.Exception -> L75
            L34:
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                if (r6 == 0) goto L3d
                java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Exception -> L75
                goto L3f
            L3d:
                java.lang.String r6 = "IO Exception"
            L3f:
                r5.c = r6     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                long r0 = r4.callDuring     // Catch: java.lang.Exception -> L75
                r5.b = r0     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                java.lang.String r6 = r4.hostName     // Catch: java.lang.Exception -> L75
                r5.e = r6     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                java.lang.String r6 = r4.method     // Catch: java.lang.Exception -> L75
                r5.d = r6     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                long r0 = r4.dnsDuring     // Catch: java.lang.Exception -> L75
                r5.g = r0     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                java.lang.String r6 = r4.dnsResult     // Catch: java.lang.Exception -> L75
                r5.h = r6     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                long r0 = r4.connectDuring     // Catch: java.lang.Exception -> L75
                r5.i = r0     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                long r0 = r4.connectionDuring     // Catch: java.lang.Exception -> L75
                r5.k = r0     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b r5 = com.mbridge.msdk.foundation.same.net.stack.b.a()     // Catch: java.lang.Exception -> L75
                com.mbridge.msdk.foundation.same.net.stack.b$b r6 = r4.httpStatus     // Catch: java.lang.Exception -> L75
                r5.a(r6)     // Catch: java.lang.Exception -> L75
                goto L7f
            L75:
                r5 = move-exception
                java.lang.String r5 = r5.getMessage()
                java.lang.String r6 = "OkHttpStack"
                com.mbridge.msdk.foundation.tools.z.d(r6, r5)
            L7f:
                return
        }

        @Override
        public void callStart(com.mbridge.msdk.thrid.okhttp.Call r3) {
                r2 = this;
                super.callStart(r3)
                com.mbridge.msdk.foundation.same.net.a r0 = com.mbridge.msdk.foundation.same.net.a.a()     // Catch: java.lang.Exception -> La
                r0.b()     // Catch: java.lang.Exception -> La
            La:
                boolean r0 = r2.isReportHttpStatus
                if (r0 == 0) goto L29
                com.mbridge.msdk.foundation.same.net.stack.b$b r0 = r2.httpStatus
                if (r0 == 0) goto L29
                long r0 = java.lang.System.currentTimeMillis()
                r2.callStart = r0
                if (r3 == 0) goto L29
                com.mbridge.msdk.thrid.okhttp.Request r3 = r3.request()     // Catch: java.lang.Exception -> L25
                java.lang.String r3 = r3.method()     // Catch: java.lang.Exception -> L25
                r2.method = r3     // Catch: java.lang.Exception -> L25
                goto L29
            L25:
                java.lang.String r3 = ""
                r2.method = r3
            L29:
                return
        }

        @Override
        public void connectEnd(com.mbridge.msdk.thrid.okhttp.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3, com.mbridge.msdk.thrid.okhttp.Protocol r4) {
                r0 = this;
                super.connectEnd(r1, r2, r3, r4)
                boolean r1 = r0.isReportHttpStatus
                if (r1 == 0) goto L18
                com.mbridge.msdk.foundation.same.net.stack.b$b r1 = r0.httpStatus
                if (r1 == 0) goto L18
                long r1 = java.lang.System.currentTimeMillis()
                long r3 = r0.connectStart
                long r1 = r1 - r3
                r0.connectDuring = r1
                java.lang.String r1 = ""
                r0.connectErrorMessage = r1
            L18:
                return
        }

        @Override
        public void connectFailed(com.mbridge.msdk.thrid.okhttp.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3, com.mbridge.msdk.thrid.okhttp.Protocol r4, java.io.IOException r5) {
                r0 = this;
                super.connectFailed(r1, r2, r3, r4, r5)
                boolean r1 = r0.isReportHttpStatus
                if (r1 == 0) goto L1f
                com.mbridge.msdk.foundation.same.net.stack.b$b r1 = r0.httpStatus
                if (r1 == 0) goto L1f
                long r1 = java.lang.System.currentTimeMillis()
                long r3 = r0.connectStart
                long r1 = r1 - r3
                r0.connectDuring = r1
                if (r5 == 0) goto L1b
                java.lang.String r1 = r5.getMessage()
                goto L1d
            L1b:
                java.lang.String r1 = "IO Exception"
            L1d:
                r0.connectErrorMessage = r1
            L1f:
                return
        }

        @Override
        public void connectStart(com.mbridge.msdk.thrid.okhttp.Call r1, java.net.InetSocketAddress r2, java.net.Proxy r3) {
                r0 = this;
                super.connectStart(r1, r2, r3)
                boolean r1 = r0.isReportHttpStatus
                if (r1 == 0) goto L11
                com.mbridge.msdk.foundation.same.net.stack.b$b r1 = r0.httpStatus
                if (r1 == 0) goto L11
                long r1 = java.lang.System.currentTimeMillis()
                r0.connectStart = r1
            L11:
                return
        }

        @Override
        public void connectionAcquired(com.mbridge.msdk.thrid.okhttp.Call r1, com.mbridge.msdk.thrid.okhttp.Connection r2) {
                r0 = this;
                super.connectionAcquired(r1, r2)
                boolean r1 = r0.isReportHttpStatus
                if (r1 == 0) goto L11
                com.mbridge.msdk.foundation.same.net.stack.b$b r1 = r0.httpStatus
                if (r1 == 0) goto L11
                long r1 = java.lang.System.currentTimeMillis()
                r0.connectionStart = r1
            L11:
                return
        }

        @Override
        public void connectionReleased(com.mbridge.msdk.thrid.okhttp.Call r3, com.mbridge.msdk.thrid.okhttp.Connection r4) {
                r2 = this;
                super.connectionReleased(r3, r4)
                boolean r3 = r2.isReportHttpStatus
                if (r3 == 0) goto L14
                com.mbridge.msdk.foundation.same.net.stack.b$b r3 = r2.httpStatus
                if (r3 == 0) goto L14
                long r3 = java.lang.System.currentTimeMillis()
                long r0 = r2.connectionStart
                long r3 = r3 - r0
                r2.connectionDuring = r3
            L14:
                return
        }

        @Override
        public void dnsEnd(com.mbridge.msdk.thrid.okhttp.Call r5, java.lang.String r6, java.util.List<java.net.InetAddress> r7) {
                r4 = this;
                super.dnsEnd(r5, r6, r7)
                boolean r5 = r4.isReportHttpStatus
                if (r5 == 0) goto L5b
                com.mbridge.msdk.foundation.same.net.stack.b$b r5 = r4.httpStatus
                if (r5 == 0) goto L5b
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L4b
                long r2 = r4.dnsStart     // Catch: java.lang.Exception -> L4b
                long r0 = r0 - r2
                r4.dnsDuring = r0     // Catch: java.lang.Exception -> L4b
                boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L4b
                java.lang.String r0 = "unKnown"
                if (r5 == 0) goto L1f
                r4.hostName = r0     // Catch: java.lang.Exception -> L4b
                goto L21
            L1f:
                r4.hostName = r6     // Catch: java.lang.Exception -> L4b
            L21:
                if (r7 == 0) goto L48
                int r5 = r7.size()     // Catch: java.lang.Exception -> L4b
                if (r5 != 0) goto L2a
                goto L48
            L2a:
                r5 = 0
                java.lang.Object r5 = r7.get(r5)     // Catch: java.lang.Exception -> L4b
                java.net.InetAddress r5 = (java.net.InetAddress) r5     // Catch: java.lang.Exception -> L4b
                if (r5 == 0) goto L45
                java.lang.String r6 = r5.getHostAddress()     // Catch: java.lang.Exception -> L4b
                boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L4b
                if (r6 == 0) goto L3e
                goto L45
            L3e:
                java.lang.String r5 = r5.getHostAddress()     // Catch: java.lang.Exception -> L4b
                r4.dnsResult = r5     // Catch: java.lang.Exception -> L4b
                goto L5b
            L45:
                r4.dnsResult = r0     // Catch: java.lang.Exception -> L4b
                goto L5b
            L48:
                r4.dnsResult = r0     // Catch: java.lang.Exception -> L4b
                goto L5b
            L4b:
                r5 = move-exception
                java.lang.String r5 = r5.getMessage()
                java.lang.String r6 = "OkHttpStack"
                com.mbridge.msdk.foundation.tools.z.d(r6, r5)
                java.lang.String r5 = ""
                r4.hostName = r5
                r4.dnsResult = r5
            L5b:
                return
        }

        @Override
        public void dnsStart(com.mbridge.msdk.thrid.okhttp.Call r1, java.lang.String r2) {
                r0 = this;
                super.dnsStart(r1, r2)
                boolean r1 = r0.isReportHttpStatus
                if (r1 == 0) goto L11
                com.mbridge.msdk.foundation.same.net.stack.b$b r1 = r0.httpStatus
                if (r1 == 0) goto L11
                long r1 = java.lang.System.currentTimeMillis()
                r0.dnsStart = r1
            L11:
                return
        }
    }

    public OkHttpStack() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.foundation.same.net.stack.b r0 = com.mbridge.msdk.foundation.same.net.stack.b.a.a()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r0.b()
            r1.mClient = r0
            return
    }

    private static com.mbridge.msdk.thrid.okhttp.RequestBody createRequestBody(com.mbridge.msdk.foundation.same.net.i r1) {
            byte[] r1 = r1.e()
            r0 = 0
            if (r1 != 0) goto L8
            return r0
        L8:
            com.mbridge.msdk.thrid.okhttp.RequestBody r1 = com.mbridge.msdk.thrid.okhttp.RequestBody.create(r0, r1)
            return r1
    }

    private static void setConnectionParametersForRequest(com.mbridge.msdk.thrid.okhttp.Request.Builder r2, com.mbridge.msdk.foundation.same.net.i<?> r3) throws java.io.IOException {
            int r0 = r3.a()
            r1 = 0
            switch(r0) {
                case 0: goto L3c;
                case 1: goto L34;
                case 2: goto L2c;
                case 3: goto L28;
                case 4: goto L24;
                case 5: goto L1e;
                case 6: goto L18;
                case 7: goto L10;
                default: goto L8;
            }
        L8:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "Unknown method type."
            r2.<init>(r3)
            throw r2
        L10:
            com.mbridge.msdk.thrid.okhttp.RequestBody r3 = createRequestBody(r3)
            r2.patch(r3)
            goto L3f
        L18:
            java.lang.String r3 = "TRACE"
            r2.method(r3, r1)
            goto L3f
        L1e:
            java.lang.String r3 = "OPTIONS"
            r2.method(r3, r1)
            goto L3f
        L24:
            r2.head()
            goto L3f
        L28:
            r2.delete()
            goto L3f
        L2c:
            com.mbridge.msdk.thrid.okhttp.RequestBody r3 = createRequestBody(r3)
            r2.put(r3)
            goto L3f
        L34:
            com.mbridge.msdk.thrid.okhttp.RequestBody r3 = createRequestBody(r3)
            r2.post(r3)
            goto L3f
        L3c:
            r2.get()
        L3f:
            return
    }

    @Override
    public com.mbridge.msdk.foundation.same.net.e.b performRequest(com.mbridge.msdk.foundation.same.net.i<?> r9) throws java.io.IOException {
            r8 = this;
            int r0 = r9.h()
            int r1 = r9.i()
            int r2 = r9.j()
            int r3 = r9.k()
            int r4 = r9.l()
            if (r1 != 0) goto L17
            r1 = r0
        L17:
            if (r2 != 0) goto L1a
            r2 = r0
        L1a:
            if (r3 != 0) goto L1d
            goto L1e
        L1d:
            r0 = r3
        L1e:
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            com.mbridge.msdk.thrid.okhttp.Protocol r5 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            r3.add(r5)
            com.mbridge.msdk.thrid.okhttp.Protocol r5 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_2
            r3.add(r5)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r5 = r8.mClient
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r5 = r5.newBuilder()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r3 = r5.protocols(r3)
            long r5 = (long) r2
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r3 = r3.readTimeout(r5, r7)
            long r5 = (long) r1
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r3 = r3.connectTimeout(r5, r7)
            long r5 = (long) r0
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r3 = r3.writeTimeout(r5, r7)
            com.mbridge.msdk.foundation.same.net.stack.OkHttpStack$DefaultEventListener r5 = new com.mbridge.msdk.foundation.same.net.stack.OkHttpStack$DefaultEventListener
            java.lang.String r6 = r9.b()
            r5.<init>(r6)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r3 = r3.eventListener(r5)
            if (r4 <= 0) goto L61
            long r5 = (long) r4
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS
            r3.callTimeout(r5, r7)
        L61:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "connectTimeout: "
            r5.append(r6)
            r5.append(r1)
            java.lang.String r1 = " readTimeout: "
            r5.append(r1)
            r5.append(r2)
            java.lang.String r1 = " writeTimeout: "
            r5.append(r1)
            r5.append(r0)
            java.lang.String r0 = " callTimeout: "
            r5.append(r0)
            if (r4 != 0) goto L88
            java.lang.String r0 = "not set"
            goto L8c
        L88:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r4)
        L8c:
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            java.lang.String r1 = "OkHttpStack"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = new com.mbridge.msdk.thrid.okhttp.Request$Builder
            r0.<init>()
            java.util.Map r1 = r9.d()
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        La9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lc5
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r4 = r2.getKey()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r0.addHeader(r4, r2)
            goto La9
        Lc5:
            setConnectionParametersForRequest(r0, r9)
            java.lang.String r9 = r9.b()
            com.mbridge.msdk.thrid.okhttp.Request$Builder r9 = r0.url(r9)
            com.mbridge.msdk.thrid.okhttp.Request r9 = r9.build()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r3.build()
            com.mbridge.msdk.thrid.okhttp.Call r9 = r0.newCall(r9)
            com.mbridge.msdk.thrid.okhttp.Response r9 = r9.execute()
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r9.headers()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
            int r3 = r0.size()
        Lee:
            if (r2 >= r3) goto L105
            java.lang.String r4 = r0.name(r2)
            java.lang.String r5 = r0.value(r2)
            if (r4 == 0) goto L102
            com.mbridge.msdk.foundation.same.net.c.b r6 = new com.mbridge.msdk.foundation.same.net.c.b
            r6.<init>(r4, r5)
            r1.add(r6)
        L102:
            int r2 = r2 + 1
            goto Lee
        L105:
            com.mbridge.msdk.foundation.same.net.e.b r0 = new com.mbridge.msdk.foundation.same.net.e.b
            int r2 = r9.code()
            com.mbridge.msdk.thrid.okhttp.ResponseBody r9 = r9.body()
            java.io.InputStream r9 = r9.byteStream()
            r0.<init>(r2, r1, r9)
            return r0
    }
}
