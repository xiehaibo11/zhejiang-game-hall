package com.huawei.hms.common.internal;

import com.huawei.hms.api.Api.ApiOptions;

public class ConnectionManagerKey<TOption extends com.huawei.hms.api.Api.ApiOptions> {
    private final com.huawei.hms.api.Api<TOption> mApi;
    private final java.lang.ref.WeakReference<android.content.Context> mContextRef;
    private final int mHashKey;
    private final boolean mHaveOption;
    private final TOption mOption;
    private final java.lang.String subAppId;

    private ConnectionManagerKey(android.content.Context r3, com.huawei.hms.api.Api<TOption> r4, TOption r5, java.lang.String r6) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mHaveOption = r0
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r2.mContextRef = r1
            r2.mApi = r4
            r2.mOption = r5
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Object r4 = r1.get()
            r3[r0] = r4
            com.huawei.hms.api.Api<TOption extends com.huawei.hms.api.Api$ApiOptions> r4 = r2.mApi
            r5 = 1
            r3[r5] = r4
            TOption extends com.huawei.hms.api.Api$ApiOptions r4 = r2.mOption
            r5 = 2
            r3[r5] = r4
            int r3 = com.huawei.hms.common.internal.Objects.hashCode(r3)
            r2.mHashKey = r3
            r2.subAppId = r6
            return
    }

    private ConnectionManagerKey(com.huawei.hms.api.Api<TOption> r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mHaveOption = r0
            r1.mApi = r2
            r2 = 0
            r1.mOption = r2
            int r0 = java.lang.System.identityHashCode(r1)
            r1.mHashKey = r0
            r1.subAppId = r3
            r1.mContextRef = r2
            return
    }

    public static <TOption extends com.huawei.hms.api.Api.ApiOptions> com.huawei.hms.common.internal.ConnectionManagerKey<TOption> createConnectionManagerKey(android.content.Context r1, com.huawei.hms.api.Api<TOption> r2, TOption r3, java.lang.String r4) {
            com.huawei.hms.common.internal.ConnectionManagerKey r0 = new com.huawei.hms.common.internal.ConnectionManagerKey
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    public static <TOption extends com.huawei.hms.api.Api.ApiOptions> com.huawei.hms.common.internal.ConnectionManagerKey<TOption> createConnectionManagerKey(com.huawei.hms.api.Api<TOption> r1, java.lang.String r2) {
            com.huawei.hms.common.internal.ConnectionManagerKey r0 = new com.huawei.hms.common.internal.ConnectionManagerKey
            r0.<init>(r1, r2)
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.huawei.hms.common.internal.ConnectionManagerKey
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.huawei.hms.common.internal.ConnectionManagerKey r5 = (com.huawei.hms.common.internal.ConnectionManagerKey) r5
            java.lang.ref.WeakReference<android.content.Context> r1 = r4.mContextRef
            if (r1 == 0) goto L4d
            java.lang.ref.WeakReference<android.content.Context> r1 = r5.mContextRef
            if (r1 == 0) goto L4d
            boolean r1 = r4.mHaveOption
            boolean r3 = r5.mHaveOption
            if (r1 != r3) goto L4b
            com.huawei.hms.api.Api<TOption extends com.huawei.hms.api.Api$ApiOptions> r1 = r4.mApi
            com.huawei.hms.api.Api<TOption extends com.huawei.hms.api.Api$ApiOptions> r3 = r5.mApi
            boolean r1 = com.huawei.hms.common.internal.Objects.equal(r1, r3)
            if (r1 == 0) goto L4b
            TOption extends com.huawei.hms.api.Api$ApiOptions r1 = r4.mOption
            TOption extends com.huawei.hms.api.Api$ApiOptions r3 = r5.mOption
            boolean r1 = com.huawei.hms.common.internal.Objects.equal(r1, r3)
            if (r1 == 0) goto L4b
            java.lang.String r1 = r4.subAppId
            java.lang.String r3 = r5.subAppId
            boolean r1 = com.huawei.hms.common.internal.Objects.equal(r1, r3)
            if (r1 == 0) goto L4b
            java.lang.ref.WeakReference<android.content.Context> r1 = r4.mContextRef
            java.lang.Object r1 = r1.get()
            java.lang.ref.WeakReference<android.content.Context> r5 = r5.mContextRef
            java.lang.Object r5 = r5.get()
            boolean r5 = com.huawei.hms.common.internal.Objects.equal(r1, r5)
            if (r5 == 0) goto L4b
            goto L4c
        L4b:
            r0 = r2
        L4c:
            return r0
        L4d:
            java.lang.ref.WeakReference<android.content.Context> r1 = r4.mContextRef
            if (r1 != 0) goto L7c
            java.lang.ref.WeakReference<android.content.Context> r1 = r5.mContextRef
            if (r1 != 0) goto L7c
            boolean r1 = r4.mHaveOption
            boolean r3 = r5.mHaveOption
            if (r1 != r3) goto L7a
            com.huawei.hms.api.Api<TOption extends com.huawei.hms.api.Api$ApiOptions> r1 = r4.mApi
            com.huawei.hms.api.Api<TOption extends com.huawei.hms.api.Api$ApiOptions> r3 = r5.mApi
            boolean r1 = com.huawei.hms.common.internal.Objects.equal(r1, r3)
            if (r1 == 0) goto L7a
            TOption extends com.huawei.hms.api.Api$ApiOptions r1 = r4.mOption
            TOption extends com.huawei.hms.api.Api$ApiOptions r3 = r5.mOption
            boolean r1 = com.huawei.hms.common.internal.Objects.equal(r1, r3)
            if (r1 == 0) goto L7a
            java.lang.String r1 = r4.subAppId
            java.lang.String r5 = r5.subAppId
            boolean r5 = com.huawei.hms.common.internal.Objects.equal(r1, r5)
            if (r5 == 0) goto L7a
            goto L7b
        L7a:
            r0 = r2
        L7b:
            return r0
        L7c:
            return r2
    }

    public final int hashCode() {
            r1 = this;
            int r0 = r1.mHashKey
            return r0
    }
}
