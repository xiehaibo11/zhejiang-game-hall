package com.mbridge.msdk.video.dynview.i;

public final class b {
    public static int a(com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r0 = -3
            if (r3 == 0) goto L2e
            com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r3.getRewardTemplateMode()
            if (r1 == 0) goto L2e
            com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r3.getRewardTemplateMode()
            int r1 = r1.b()
            r2 = 302(0x12e, float:4.23E-43)
            if (r1 == r2) goto L30
            r2 = 802(0x322, float:1.124E-42)
            if (r1 == r2) goto L30
            r2 = 904(0x388, float:1.267E-42)
            if (r1 == r2) goto L1e
            goto L2e
        L1e:
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r3.getRewardTemplateMode()
            java.lang.String r3 = r3.e()
            boolean r3 = a(r3)
            if (r3 != 0) goto L30
            r0 = -1
            goto L30
        L2e:
            r0 = 100
        L30:
            return r0
    }

    public static java.lang.String a(android.content.Context r1, int r2) {
            r0 = 1
            if (r2 != r0) goto L6
            java.lang.String r2 = "_por"
            goto L8
        L6:
            java.lang.String r2 = "_land"
        L8:
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.s(r1)
            java.lang.String r0 = "zh"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L2d
            java.lang.String r2 = "TW"
            boolean r2 = r1.contains(r2)
            if (r2 != 0) goto L29
            java.lang.String r2 = "HK"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L25
            goto L29
        L25:
            java.lang.String r1 = "mbridge_reward_two_title_zh"
            goto Ldc
        L29:
            java.lang.String r1 = "mbridge_reward_two_title_zh_trad"
            goto Ldc
        L2d:
            java.lang.String r0 = "ja"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L48
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "mbridge_reward_two_title_japan"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto Ldc
        L48:
            java.lang.String r0 = "de"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L63
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "mbridge_reward_two_title_germany"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto Ldc
        L63:
            java.lang.String r0 = "ko"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L7d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "mbridge_reward_two_title_korea"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto Ldc
        L7d:
            java.lang.String r0 = "fr"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L97
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "mbridge_reward_two_title_france"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto Ldc
        L97:
            java.lang.String r0 = "ar"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto Lb1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "mbridge_reward_two_title_arabia"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto Ldc
        Lb1:
            java.lang.String r0 = "ru"
            boolean r1 = r1.startsWith(r0)
            if (r1 == 0) goto Lcb
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "mbridge_reward_two_title_russian"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto Ldc
        Lcb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "mbridge_reward_two_title_en"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
        Ldc:
            return r1
    }

    public static boolean a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L23
            java.lang.String r0 = "alecfc"
            java.lang.String r2 = r2.getQueryParameter(r0)     // Catch: java.lang.Throwable -> L23
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L23
            java.lang.String r0 = "1"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L23
            r1 = 1
        L23:
            return r1
    }
}
