package com.loc;

public final class u {
    public final com.loc.t.c a;
    public final java.lang.String b;

    static class 1 {
        static final int[] a = null;

        static {
                com.loc.t$c[] r0 = com.loc.t.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.loc.u.1.a = r0
                com.loc.t$c r1 = com.loc.t.c.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.loc.u.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.loc.t$c r1 = com.loc.t.c.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.loc.u.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.loc.t$c r1 = com.loc.t.c.d     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.loc.u.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.loc.t$c r1 = com.loc.t.c.e     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.loc.u.1.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.loc.t$c r1 = com.loc.t.c.f     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.loc.u.1.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.loc.t$c r1 = com.loc.t.c.g     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.loc.u.1.a     // Catch: java.lang.NoSuchFieldError -> L54
                com.loc.t$c r1 = com.loc.t.c.h     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                int[] r0 = com.loc.u.1.a     // Catch: java.lang.NoSuchFieldError -> L60
                com.loc.t$c r1 = com.loc.t.c.i     // Catch: java.lang.NoSuchFieldError -> L60
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L60
                r2 = 8
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L60
            L60:
                int[] r0 = com.loc.u.1.a     // Catch: java.lang.NoSuchFieldError -> L6c
                com.loc.t$c r1 = com.loc.t.c.a     // Catch: java.lang.NoSuchFieldError -> L6c
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L6c
                r2 = 9
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L6c
            L6c:
                return
        }
    }

    u(com.loc.t.c r3, com.loc.w r4) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            int[] r0 = com.loc.u.1.a
            int r3 = r3.ordinal()
            r3 = r0[r3]
            r0 = 1
            r1 = 0
            switch(r3) {
                case 1: goto L83;
                case 2: goto L74;
                case 3: goto L65;
                case 4: goto L56;
                case 5: goto L47;
                case 6: goto L38;
                case 7: goto L29;
                case 8: goto L20;
                case 9: goto L16;
                default: goto L12;
            }
        L12:
            java.lang.String r3 = ""
            goto L91
        L16:
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.String r4 = "设置隐私政策成功"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L91
        L20:
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.String r4 = "***确保调用SDK任何接口前先调用更新隐私合规updatePrivacyShow、updatePrivacyAgree两个接口并且参数值都为true，若未正确设置有崩溃风险***\n参数非法，context 或 sdkInfo为空"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L91
        L29:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = r4.a()
            r3[r1] = r4
            java.lang.String r4 = "***确保调用SDK任何接口前先调用更新隐私合规updatePrivacyShow、updatePrivacyAgree两个接口并且参数值都为true，若未正确设置有崩溃风险***\n使用%s SDK 功能使用前请确保已经正确设置apiKey，如有疑问请在高德开放平台官网中搜索【INVALID_USER_KEY】相关内容进行解决。"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L91
        L38:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = r4.a()
            r3[r1] = r4
            java.lang.String r4 = "***确保调用SDK任何接口前先调用更新隐私合规updatePrivacyShow、updatePrivacyAgree两个接口并且参数值都为true，若未正确设置有崩溃风险***\n使用%s SDK 功能前请确保隐私权政策已取得用户同意"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L91
        L47:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = r4.a()
            r3[r1] = r4
            java.lang.String r4 = "***确保调用SDK任何接口前先调用更新隐私合规updatePrivacyShow、updatePrivacyAgree两个接口并且参数值都为true，若未正确设置有崩溃风险***\n使用%s SDK 功能前请确保设置隐私权政策是否取得用户同意"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L91
        L56:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = r4.a()
            r3[r1] = r4
            java.lang.String r4 = "***确保调用SDK任何接口前先调用更新隐私合规updatePrivacyShow、updatePrivacyAgree两个接口并且参数值都为true，若未正确设置有崩溃风险***\n使用%s SDK 功能前请确保隐私权政策已经包含高德开平隐私权政策"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L91
        L65:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = r4.a()
            r3[r1] = r4
            java.lang.String r4 = "***确保调用SDK任何接口前先调用更新隐私合规updatePrivacyShow、updatePrivacyAgree两个接口并且参数值都为true，若未正确设置有崩溃风险***\n使用%s SDK 功能前请确保设置隐私权政策是否包含高德开平隐私权政策"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L91
        L74:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = r4.a()
            r3[r1] = r4
            java.lang.String r4 = "***确保调用SDK任何接口前先调用更新隐私合规updatePrivacyShow、updatePrivacyAgree两个接口并且参数值都为true，若未正确设置有崩溃风险***\n使用%s SDK 功能前请确保隐私权政策已弹窗告知用户"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L91
        L83:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = r4.a()
            r3[r1] = r4
            java.lang.String r4 = "***确保调用SDK任何接口前先调用更新隐私合规updatePrivacyShow、updatePrivacyAgree两个接口并且参数值都为true，若未正确设置有崩溃风险***\n使用%s SDK 功能前请设置隐私权政策是否弹窗告知用户"
            java.lang.String r3 = java.lang.String.format(r4, r3)
        L91:
            r2.b = r3
            return
    }
}
