package com.czhj.sdk.common.network;

public class SigmobRequestUtil {

    private static class DNSResolver implements java.lang.Runnable {
        private java.lang.String a;
        private java.net.InetAddress b;

        public DNSResolver(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public synchronized java.net.InetAddress get() {
                r1 = this;
                monitor-enter(r1)
                java.net.InetAddress r0 = r1.b     // Catch: java.lang.Throwable -> L5
                monitor-exit(r1)
                return r0
            L5:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        @Override
        public void run() {
                r1 = this;
                java.lang.String r0 = r1.a     // Catch: java.lang.Throwable -> L9
                java.net.InetAddress r0 = java.net.InetAddress.getByName(r0)     // Catch: java.lang.Throwable -> L9
                r1.set(r0)     // Catch: java.lang.Throwable -> L9
            L9:
                return
        }

        public synchronized void set(java.net.InetAddress r1) {
                r0 = this;
                monitor-enter(r0)
                r0.b = r1     // Catch: java.lang.Throwable -> L5
                monitor-exit(r0)
                return
            L5:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
        }
    }

    private SigmobRequestUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean a(java.lang.String r2) {
            r0 = 0
            java.util.HashSet r1 = com.czhj.sdk.common.network.Networking.getSigmobServerURLS()     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Throwable -> Lf
            if (r2 == 0) goto Le
            r0 = 1
        Le:
            return r0
        Lf:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> convertQueryToMap(android.content.Context r4, java.lang.String r5) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r4)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r5)
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r0 = com.czhj.sdk.common.network.Networking.getUrlRewriter()
            java.lang.String r5 = r0.rewriteUrl(r5)
            android.net.Uri r5 = android.net.Uri.parse(r5)
            java.util.Set r0 = r5.getQueryParameterNames()
            java.util.Iterator r0 = r0.iterator()
        L1f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L39
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.List r2 = r5.getQueryParameters(r1)
            java.lang.String r3 = ","
            java.lang.String r2 = android.text.TextUtils.join(r3, r2)
            r4.put(r1, r2)
            goto L1f
        L39:
            return r4
    }

    public static java.lang.String generateBodyFromParams(java.util.Map<java.lang.String, java.lang.String> r4, java.lang.String r5) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r5)
            if (r4 == 0) goto L4c
            boolean r5 = r4.isEmpty()
            if (r5 == 0) goto Lc
            goto L4c
        Lc:
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.util.Set r0 = r4.keySet()
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L47
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r2 = r4.get(r1)     // Catch: java.lang.Throwable -> L2d
            r5.put(r1, r2)     // Catch: java.lang.Throwable -> L2d
            goto L19
        L2d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unable to add "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = " to JSON body."
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            goto L19
        L47:
            java.lang.String r4 = r5.toString()
            return r4
        L4c:
            r4 = 0
            return r4
    }

    public static boolean isConnection(java.lang.String r0) {
            r0 = 1
            return r0
    }

    public static java.lang.String truncateQueryParamsIfPost(java.lang.String r2) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            r0 = 63
            int r0 = r2.indexOf(r0)
            r1 = -1
            if (r0 != r1) goto Ld
            return r2
        Ld:
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
            return r2
    }
}
