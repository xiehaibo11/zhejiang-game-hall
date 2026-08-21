package com.bytedance.pangle;

public final class b {
    public static void a() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 1
            r3 = 30
            if (r0 >= r3) goto L15
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            if (r0 != r3) goto L13
            int r0 = android.os.Build.VERSION.PREVIEW_SDK_INT
            if (r0 <= 0) goto L13
            goto L15
        L13:
            r0 = r1
            goto L16
        L15:
            r0 = r2
        L16:
            if (r0 == 0) goto L1e
            com.bytedance.pangle.flipped.FlippedV2Impl r0 = new com.bytedance.pangle.flipped.FlippedV2Impl
            r0.<init>()
            goto L3c
        L1e:
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 28
            if (r0 >= r3) goto L2e
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 27
            if (r0 != r3) goto L2f
            int r0 = android.os.Build.VERSION.PREVIEW_SDK_INT
            if (r0 <= 0) goto L2f
        L2e:
            r1 = r2
        L2f:
            if (r1 == 0) goto L37
            com.bytedance.pangle.flipped.b r0 = new com.bytedance.pangle.flipped.b
            r0.<init>()
            goto L3c
        L37:
            com.bytedance.pangle.flipped.a r0 = new com.bytedance.pangle.flipped.a
            r0.<init>()
        L3c:
            r0.invokeHiddenApiRestrictions()
            return
    }
}
