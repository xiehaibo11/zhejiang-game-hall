package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class BuildCompat {
    public static final java.lang.String ARM = "arm";
    public static final java.lang.String ARM64 = "arm64";
    public static final java.lang.String[] SUPPORTED_32_BIT_ABIS = null;
    public static final java.lang.String[] SUPPORTED_64_BIT_ABIS = null;
    public static final java.lang.String[] SUPPORTED_ABIS = null;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            r2 = 1
            r3 = 2
            r4 = 0
            if (r0 < r1) goto L2a
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            if (r0 == 0) goto L1d
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            int r0 = r0.length
            java.lang.String[] r0 = new java.lang.String[r0]
            com.qihoo360.loader2.BuildCompat.SUPPORTED_ABIS = r0
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            java.lang.String[] r5 = com.qihoo360.loader2.BuildCompat.SUPPORTED_ABIS
            int r6 = r5.length
            java.lang.System.arraycopy(r0, r4, r5, r4, r6)
            goto L36
        L1d:
            java.lang.String[] r0 = new java.lang.String[r3]
            java.lang.String r5 = android.os.Build.CPU_ABI
            r0[r4] = r5
            java.lang.String r5 = android.os.Build.CPU_ABI2
            r0[r2] = r5
            com.qihoo360.loader2.BuildCompat.SUPPORTED_ABIS = r0
            goto L36
        L2a:
            java.lang.String[] r0 = new java.lang.String[r3]
            java.lang.String r5 = android.os.Build.CPU_ABI
            r0[r4] = r5
            java.lang.String r5 = android.os.Build.CPU_ABI2
            r0[r2] = r5
            com.qihoo360.loader2.BuildCompat.SUPPORTED_ABIS = r0
        L36:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L5b
            java.lang.String[] r0 = android.os.Build.SUPPORTED_32_BIT_ABIS
            if (r0 == 0) goto L4e
            java.lang.String[] r0 = android.os.Build.SUPPORTED_32_BIT_ABIS
            int r0 = r0.length
            java.lang.String[] r0 = new java.lang.String[r0]
            com.qihoo360.loader2.BuildCompat.SUPPORTED_32_BIT_ABIS = r0
            java.lang.String[] r0 = android.os.Build.SUPPORTED_32_BIT_ABIS
            java.lang.String[] r5 = com.qihoo360.loader2.BuildCompat.SUPPORTED_32_BIT_ABIS
            int r6 = r5.length
            java.lang.System.arraycopy(r0, r4, r5, r4, r6)
            goto L67
        L4e:
            java.lang.String[] r0 = new java.lang.String[r3]
            java.lang.String r5 = android.os.Build.CPU_ABI
            r0[r4] = r5
            java.lang.String r5 = android.os.Build.CPU_ABI2
            r0[r2] = r5
            com.qihoo360.loader2.BuildCompat.SUPPORTED_32_BIT_ABIS = r0
            goto L67
        L5b:
            java.lang.String[] r0 = new java.lang.String[r3]
            java.lang.String r5 = android.os.Build.CPU_ABI
            r0[r4] = r5
            java.lang.String r5 = android.os.Build.CPU_ABI2
            r0[r2] = r5
            com.qihoo360.loader2.BuildCompat.SUPPORTED_32_BIT_ABIS = r0
        L67:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L8c
            java.lang.String[] r0 = android.os.Build.SUPPORTED_64_BIT_ABIS
            if (r0 == 0) goto L7f
            java.lang.String[] r0 = android.os.Build.SUPPORTED_64_BIT_ABIS
            int r0 = r0.length
            java.lang.String[] r0 = new java.lang.String[r0]
            com.qihoo360.loader2.BuildCompat.SUPPORTED_64_BIT_ABIS = r0
            java.lang.String[] r0 = android.os.Build.SUPPORTED_64_BIT_ABIS
            java.lang.String[] r1 = com.qihoo360.loader2.BuildCompat.SUPPORTED_64_BIT_ABIS
            int r2 = r1.length
            java.lang.System.arraycopy(r0, r4, r1, r4, r2)
            goto L98
        L7f:
            java.lang.String[] r0 = new java.lang.String[r3]
            java.lang.String r1 = android.os.Build.CPU_ABI
            r0[r4] = r1
            java.lang.String r1 = android.os.Build.CPU_ABI2
            r0[r2] = r1
            com.qihoo360.loader2.BuildCompat.SUPPORTED_64_BIT_ABIS = r0
            goto L98
        L8c:
            java.lang.String[] r0 = new java.lang.String[r3]
            java.lang.String r1 = android.os.Build.CPU_ABI
            r0[r4] = r1
            java.lang.String r1 = android.os.Build.CPU_ABI2
            r0[r2] = r1
            com.qihoo360.loader2.BuildCompat.SUPPORTED_64_BIT_ABIS = r0
        L98:
            return
    }

    public BuildCompat() {
            r0 = this;
            r0.<init>()
            return
    }
}
