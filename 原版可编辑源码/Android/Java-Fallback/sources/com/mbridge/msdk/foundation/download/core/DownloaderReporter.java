package com.mbridge.msdk.foundation.download.core;

public final class DownloaderReporter {
    private static final java.lang.String KEY = "key=";
    private static final java.lang.String TAG = "DownloaderReporter";
    private final java.util.Map<java.lang.String, java.lang.String> _params;
    private final java.lang.String _reportKey;

    static class 1 {
    }

    public static class Builder {
        private final java.util.Map<java.lang.String, java.lang.String> _params;
        private final java.lang.String _reportKey;

        public Builder(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L13
                r1._reportKey = r2
                java.util.HashMap r2 = new java.util.HashMap
                r2.<init>()
                r1._params = r2
                return
            L13:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "reportKey can not be empty"
                r2.<init>(r0)
                throw r2
        }

        static java.lang.String access$000(com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder r0) {
                java.lang.String r0 = r0._reportKey
                return r0
        }

        static java.util.Map access$100(com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder r0) {
                java.util.Map<java.lang.String, java.lang.String> r0 = r0._params
                return r0
        }

        public com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder add(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L12
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto Ld
                goto L12
            Ld:
                java.util.Map<java.lang.String, java.lang.String> r0 = r1._params     // Catch: java.lang.Exception -> L12
                r0.put(r2, r3)     // Catch: java.lang.Exception -> L12
            L12:
                return r1
        }

        public com.mbridge.msdk.foundation.download.core.DownloaderReporter build() {
                r2 = this;
                com.mbridge.msdk.foundation.download.core.DownloaderReporter r0 = new com.mbridge.msdk.foundation.download.core.DownloaderReporter
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    private DownloaderReporter(com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder.access$000(r2)
            r1._reportKey = r0
            java.util.Map r2 = com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder.access$100(r2)
            r1._params = r2
            return
    }

    DownloaderReporter(com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder r1, com.mbridge.msdk.foundation.download.core.DownloaderReporter.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private java.lang.String asUrlParams(java.util.Map<java.lang.String, java.lang.String> r7) {
            r6 = this;
            java.lang.String r0 = ""
            if (r7 == 0) goto L44
            int r1 = r7.size()
            if (r1 != 0) goto Lb
            goto L44
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Set r2 = r7.keySet()     // Catch: java.lang.Exception -> L44
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L44
        L18:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L44
            if (r3 == 0) goto L3f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L44
            java.lang.Object r4 = r7.get(r3)     // Catch: java.lang.Exception -> L44
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L44
            java.lang.String r4 = r6.encodeValue(r4)     // Catch: java.lang.Exception -> L44
            java.lang.String r5 = "&"
            r1.append(r5)     // Catch: java.lang.Exception -> L44
            r1.append(r3)     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = "="
            r1.append(r3)     // Catch: java.lang.Exception -> L44
            r1.append(r4)     // Catch: java.lang.Exception -> L44
            goto L18
        L3f:
            java.lang.String r7 = r1.toString()
            return r7
        L44:
            return r0
    }

    private java.lang.String encodeValue(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.lang.Exception -> L6
        L6:
            return r2
    }

    public final void report() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "key="
            r0.append(r1)
            java.lang.String r1 = r5._reportKey
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r5._params
            java.lang.String r1 = r5.asUrlParams(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r1 = r1.c()
            if (r1 == 0) goto L2e
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()
            r1.a(r0)
            goto L70
        L2e:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L55
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = ""
            com.mbridge.msdk.foundation.same.net.g.d r0 = com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2)     // Catch: java.lang.Exception -> L55
            com.mbridge.msdk.foundation.same.report.d.a r1 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L55
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L55
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L55
            r1.<init>(r2)     // Catch: java.lang.Exception -> L55
            r2 = 0
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L55
            java.lang.String r3 = r3.a     // Catch: java.lang.Exception -> L55
            r4 = 0
            r1.post(r2, r3, r0, r4)     // Catch: java.lang.Exception -> L55
            goto L70
        L55:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "report exception: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "DownloaderReporter"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L70:
            return
    }
}
