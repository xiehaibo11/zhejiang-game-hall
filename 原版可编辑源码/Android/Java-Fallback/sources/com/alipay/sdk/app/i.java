package com.alipay.sdk.app;

public class i {
    public static java.util.List<com.alipay.sdk.data.a.a> a = null;
    private static java.lang.String b = "";
    private static final com.alipay.sdk.data.a.a c = null;
    private static final com.alipay.sdk.data.a.a d = null;

    static {
            com.alipay.sdk.data.a$a r0 = new com.alipay.sdk.data.a$a
            java.lang.String r1 = "com.eg.android.AlipayGphone"
            r2 = 73
            java.lang.String r3 = "b6cbad6cbd5ed0d209afc69ad3b7a617efaae9b3c47eabe0be42d924936fa78c8001b1fd74b079e5ff9690061dacfa4768e981a526b9ca77156ca36251cf2f906d105481374998a7e6e6e18f75ca98b8ed2eaf86ff402c874cca0a263053f22237858206867d210020daa38c48b20cc9dfd82b44a51aeb5db459b22794e2d649"
            r0.<init>(r1, r2, r3)
            com.alipay.sdk.app.i.c = r0
            com.alipay.sdk.data.a$a r0 = new com.alipay.sdk.data.a$a
            java.lang.String r1 = "hk.alipay.wallet"
            r2 = 40
            java.lang.String r3 = "e6b1bdcb890370f2f2419fe06d0fdf7628ad0083d52da1ecfe991164711bbf9297e75353de96f1740695d07610567b1240549af9cbd87d06919ac31c859ad37ab6907c311b4756e1e208775989a4f691bff4bbbc58174d2a96b1d0d970a05114d7ee57dfc33b1bafaf6e0d820e838427018b6435f903df04ba7fd34d73f843df9434b164e0220baabb10c8978c3f4c6b7da79d8220a968356d15090dea07df9606f665cbec14d218dd3d691cce2866a58840971b6a57b76af88b1a65fdffd2c080281a6ab20be5879e0330eb7ff70871ce684e7174ada5dc3159c461375a0796b17ce7beca83cf34f65976d237aee993db48d34a4e344f4d8b7e99119168bdd7"
            r0.<init>(r1, r2, r3)
            com.alipay.sdk.app.i.d = r0
            com.alipay.sdk.data.a$a r0 = com.alipay.sdk.app.i.c
            java.util.List r0 = java.util.Collections.singletonList(r0)
            com.alipay.sdk.app.i.a = r0
            return
    }

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = com.alipay.sdk.app.i.b
            return r0
    }

    public static void a(java.lang.String r2) {
            com.alipay.sdk.app.i.b = r2
            int r0 = r2.hashCode()
            r1 = 3331(0xd03, float:4.668E-42)
            if (r0 == r1) goto Lb
            goto L15
        Lb:
            java.lang.String r0 = "hk"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L15
            r2 = 0
            goto L16
        L15:
            r2 = -1
        L16:
            if (r2 == 0) goto L21
            com.alipay.sdk.data.a$a r2 = com.alipay.sdk.app.i.c
            java.util.List r2 = java.util.Collections.singletonList(r2)
            com.alipay.sdk.app.i.a = r2
            goto L29
        L21:
            com.alipay.sdk.data.a$a r2 = com.alipay.sdk.app.i.d
            java.util.List r2 = java.util.Collections.singletonList(r2)
            com.alipay.sdk.app.i.a = r2
        L29:
            return
    }

    public static boolean b() {
            java.lang.String r0 = com.alipay.sdk.app.i.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L15
            java.lang.String r0 = com.alipay.sdk.app.i.b
            java.lang.String r1 = "cn"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L13
            goto L15
        L13:
            r0 = 0
            goto L16
        L15:
            r0 = 1
        L16:
            return r0
    }
}
