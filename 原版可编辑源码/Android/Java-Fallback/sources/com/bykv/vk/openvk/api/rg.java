package com.bykv.vk.openvk.api;

public class rg {
    private static int df = 4;
    private static boolean rg;

    static {
            return
    }

    public static void df(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto L8
            return
        L8:
            int r0 = com.bykv.vk.openvk.api.rg.df
            r1 = 3
            if (r0 > r1) goto L10
            android.util.Log.d(r2, r3)
        L10:
            return
    }

    public static void df(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto La
            if (r4 != 0) goto La
            return
        La:
            int r0 = com.bykv.vk.openvk.api.rg.df
            r1 = 6
            if (r0 > r1) goto L12
            android.util.Log.e(r2, r3, r4)
        L12:
            return
    }

    public static void pp(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto L8
            return
        L8:
            int r0 = com.bykv.vk.openvk.api.rg.df
            r1 = 6
            if (r0 > r1) goto L10
            android.util.Log.e(r2, r3)
        L10:
            return
    }

    public static void pt(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto L8
            return
        L8:
            int r0 = com.bykv.vk.openvk.api.rg.df
            r1 = 5
            if (r0 > r1) goto L10
            android.util.Log.w(r2, r3)
        L10:
            return
    }

    public static void q(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto L8
            return
        L8:
            int r0 = com.bykv.vk.openvk.api.rg.df
            r1 = 4
            if (r0 > r1) goto L10
            android.util.Log.i(r2, r3)
        L10:
            return
    }

    private static java.lang.String rg(java.lang.Object... r4) {
            if (r4 == 0) goto L2d
            int r0 = r4.length
            if (r0 != 0) goto L6
            goto L2d
        L6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r4.length
            r2 = 0
        Ld:
            if (r2 >= r1) goto L28
            r3 = r4[r2]
            if (r3 == 0) goto L1b
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            goto L20
        L1b:
            java.lang.String r3 = " null "
            r0.append(r3)
        L20:
            java.lang.String r3 = " "
            r0.append(r3)
            int r2 = r2 + 1
            goto Ld
        L28:
            java.lang.String r4 = r0.toString()
            return r4
        L2d:
            java.lang.String r4 = ""
            return r4
    }

    public static void rg() {
            r0 = 1
            com.bykv.vk.openvk.api.rg.rg = r0
            r0 = 3
            rg(r0)
            return
    }

    public static void rg(int r0) {
            com.bykv.vk.openvk.api.rg.df = r0
            return
    }

    public static void rg(java.lang.String r1) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r0 = "TTLogger"
            pt(r0, r1)
            return
    }

    public static void rg(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto L8
            return
        L8:
            int r0 = com.bykv.vk.openvk.api.rg.df
            r1 = 2
            if (r0 > r1) goto L10
            android.util.Log.v(r2, r3)
        L10:
            return
    }

    public static void rg(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto La
            if (r4 != 0) goto La
            return
        La:
            int r0 = com.bykv.vk.openvk.api.rg.df
            r1 = 5
            if (r0 > r1) goto L12
            android.util.Log.w(r2, r3, r4)
        L12:
            return
    }

    public static void rg(java.lang.String r2, java.lang.Object... r3) {
            boolean r0 = com.bykv.vk.openvk.api.rg.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto L8
            return
        L8:
            int r0 = com.bykv.vk.openvk.api.rg.df
            r1 = 5
            if (r0 > r1) goto L14
            java.lang.String r3 = rg(r3)
            android.util.Log.v(r2, r3)
        L14:
            return
    }
}
