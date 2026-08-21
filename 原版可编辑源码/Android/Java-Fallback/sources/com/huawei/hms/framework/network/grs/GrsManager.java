package com.huawei.hms.framework.network.grs;

public class GrsManager implements com.huawei.hms.framework.network.restclient.hwhttp.plugin.BasePlugin {
    private static final int GRS_KEY_INDEX = 1;
    private static final int GRS_PATH_INDEX = 2;
    private static final java.lang.String GRS_SCHEMA = "grs://";
    private static final int GRS_SERVICE_INDEX = 0;
    private static final int MAX_GRS_SPLIT = 3;
    private static final java.lang.String SEPARATOR = "/";
    private static final java.lang.String TAG = "GrsManager";
    private static volatile com.huawei.hms.framework.network.grs.GrsManager instance;
    private com.huawei.hms.framework.network.grs.GrsConfig grsConfig;
    private com.huawei.hms.framework.network.grs.f grsInterceptor;

    private GrsManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.framework.network.grs.GrsManager getInstance() {
            com.huawei.hms.framework.network.grs.GrsManager r0 = com.huawei.hms.framework.network.grs.GrsManager.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.huawei.hms.framework.network.grs.GrsManager> r0 = com.huawei.hms.framework.network.grs.GrsManager.class
            monitor-enter(r0)
            com.huawei.hms.framework.network.grs.GrsManager r1 = com.huawei.hms.framework.network.grs.GrsManager.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.huawei.hms.framework.network.grs.GrsManager r1 = new com.huawei.hms.framework.network.grs.GrsManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.huawei.hms.framework.network.grs.GrsManager.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.huawei.hms.framework.network.grs.GrsManager r0 = com.huawei.hms.framework.network.grs.GrsManager.instance
            return r0
    }

    private java.lang.String getServiceNameUrl(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = com.huawei.hms.framework.network.grs.GrsApi.synGetGrsUrl(r1, r2)
            return r1
    }

    public static boolean isGRSSchema(java.lang.String r1) {
            if (r1 == 0) goto Lc
            java.lang.String r0 = "grs://"
            boolean r1 = r1.startsWith(r0)
            if (r1 == 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    private java.lang.String[] parseGRSSchema(java.lang.String r3) {
            r2 = this;
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r0 = r3.toLowerCase(r0)
            java.lang.String r1 = "grs://"
            int r0 = r0.indexOf(r1)
            int r0 = r0 + 6
            java.lang.String r3 = com.huawei.hms.framework.common.StringUtils.substring(r3, r0)
            java.lang.String r0 = "/"
            r1 = 3
            java.lang.String[] r3 = r3.split(r0, r1)
            return r3
    }

    public com.huawei.hms.framework.network.restclient.hwhttp.plugin.PluginInterceptor getInterceptor() {
            r1 = this;
            com.huawei.hms.framework.network.grs.f r0 = r1.grsInterceptor
            if (r0 != 0) goto Lb
            com.huawei.hms.framework.network.grs.f r0 = new com.huawei.hms.framework.network.grs.f
            r0.<init>()
            r1.grsInterceptor = r0
        Lb:
            com.huawei.hms.framework.network.grs.f r0 = r1.grsInterceptor
            return r0
    }

    public boolean initGrs(android.content.Context r2, com.huawei.hms.framework.network.grs.GrsConfig r3) {
            r1 = this;
            com.huawei.hms.framework.network.grs.GrsConfig r0 = r1.grsConfig
            if (r0 == 0) goto La
            boolean r0 = r0.equal(r3)
            if (r0 != 0) goto L20
        La:
            r1.grsConfig = r3
            r3 = 0
            if (r2 == 0) goto L14
            android.content.Context r2 = r2.getApplicationContext()
            goto L15
        L14:
            r2 = r3
        L15:
            com.huawei.hms.framework.network.grs.GrsConfig r0 = r1.grsConfig
            if (r0 == 0) goto L1d
            com.huawei.hms.framework.network.grs.GrsBaseInfo r3 = r0.getGrsBaseInfo(r2)
        L1d:
            com.huawei.hms.framework.network.grs.GrsApi.grsSdkInit(r2, r3)
        L20:
            r2 = 1
            return r2
    }

    protected java.lang.String parseGrs(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "/"
            boolean r1 = r6.endsWith(r0)
            r2 = 1
            if (r1 == 0) goto L18
            java.lang.String r1 = "grs://"
            int r1 = r6.indexOf(r1)
            int r3 = r6.length()
            int r3 = r3 - r2
            java.lang.String r6 = com.huawei.hms.framework.common.StringUtils.substring(r6, r1, r3)
        L18:
            java.lang.String[] r6 = r5.parseGRSSchema(r6)
            int r1 = r6.length
            r3 = 0
            r4 = 2
            if (r1 != r2) goto L2a
            r1 = r6[r3]
            java.lang.String r2 = "ROOT"
        L25:
            java.lang.String r1 = r5.getServiceNameUrl(r1, r2)
            goto L3b
        L2a:
            int r1 = r6.length
            if (r1 < r4) goto L32
            r1 = r6[r3]
            r2 = r6[r2]
            goto L25
        L32:
            java.lang.String r1 = "GrsManager"
            java.lang.String r2 = "parseGrs params.length<1."
            com.huawei.hms.framework.common.Logger.i(r1, r2)
            java.lang.String r1 = ""
        L3b:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L71
            int r2 = r6.length
            if (r2 <= r4) goto L70
            boolean r2 = r1.endsWith(r0)
            if (r2 == 0) goto L5c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r6 = r6[r4]
            r0.append(r6)
            java.lang.String r1 = r0.toString()
            goto L70
        L5c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r0)
            r6 = r6[r4]
            r2.append(r6)
            java.lang.String r1 = r2.toString()
        L70:
            return r1
        L71:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r0 = "can not get url, do grsUrl(serviceName or key) error?"
            r6.<init>(r0)
            throw r6
    }
}
