package com.tencent.mm.opensdk.diffdev;

public class DiffDevOAuthFactory {
    public static final int MAX_SUPPORTED_VERSION = 1;
    private static final java.lang.String TAG = "MicroMsg.SDK.DiffDevOAuthFactory";
    public static final int VERSION_1 = 1;
    private static com.tencent.mm.opensdk.diffdev.IDiffDevOAuth v1Instance;

    private DiffDevOAuthFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tencent.mm.opensdk.diffdev.IDiffDevOAuth getDiffDevOAuth() {
            r0 = 1
            com.tencent.mm.opensdk.diffdev.IDiffDevOAuth r0 = getDiffDevOAuth(r0)
            return r0
    }

    public static com.tencent.mm.opensdk.diffdev.IDiffDevOAuth getDiffDevOAuth(int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getDiffDevOAuth, version = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MicroMsg.SDK.DiffDevOAuthFactory"
            com.tencent.mm.opensdk.utils.Log.v(r1, r0)
            r0 = 0
            r2 = 1
            if (r4 <= r2) goto L2f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getDiffDevOAuth fail, unsupported version = "
            r2.append(r3)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.tencent.mm.opensdk.utils.Log.e(r1, r4)
            return r0
        L2f:
            if (r4 == r2) goto L32
            return r0
        L32:
            com.tencent.mm.opensdk.diffdev.IDiffDevOAuth r4 = com.tencent.mm.opensdk.diffdev.DiffDevOAuthFactory.v1Instance
            if (r4 != 0) goto L3d
            com.tencent.mm.opensdk.diffdev.a.a r4 = new com.tencent.mm.opensdk.diffdev.a.a
            r4.<init>()
            com.tencent.mm.opensdk.diffdev.DiffDevOAuthFactory.v1Instance = r4
        L3d:
            com.tencent.mm.opensdk.diffdev.IDiffDevOAuth r4 = com.tencent.mm.opensdk.diffdev.DiffDevOAuthFactory.v1Instance
            return r4
    }
}
