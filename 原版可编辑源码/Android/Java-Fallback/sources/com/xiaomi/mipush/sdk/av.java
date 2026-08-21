package com.xiaomi.mipush.sdk;

public class av {
    static java.lang.String a(java.util.List r0) {
            java.lang.String r0 = c(r0)
            return r0
    }

    public static void a(android.content.Context r11) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r0 = r11.getSharedPreferences(r0, r1)
            r1 = -1
            java.lang.String r3 = "last_sync_info"
            long r4 = r0.getLong(r3, r1)
            long r6 = java.lang.System.currentTimeMillis()
            r8 = 1000(0x3e8, double:4.94E-321)
            long r6 = r6 / r8
            com.xiaomi.push.service.ba r8 = com.xiaomi.push.service.ba.a(r11)
            com.xiaomi.push.ho r9 = com.xiaomi.push.ho.B
            int r9 = r9.a()
            r10 = 1209600(0x127500, float:1.69501E-39)
            int r8 = r8.a(r9, r10)
            long r8 = (long) r8
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 != 0) goto L38
        L2c:
            android.content.SharedPreferences$Editor r11 = r0.edit()
            android.content.SharedPreferences$Editor r11 = r11.putLong(r3, r6)
            r11.commit()
            goto L47
        L38:
            long r1 = r6 - r4
            long r1 = java.lang.Math.abs(r1)
            int r1 = (r1 > r8 ? 1 : (r1 == r8 ? 0 : -1))
            if (r1 <= 0) goto L47
            r1 = 1
            a(r11, r1)
            goto L2c
        L47:
            return
    }

    public static void a(android.content.Context r7, com.xiaomi.push.ii r8) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "need to update local info with: "
            r0.append(r1)
            java.util.Map r1 = r8.a()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.util.Map r0 = r8.a()
            java.lang.String r1 = "accept_time"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            r1 = 0
            if (r0 == 0) goto L5d
            com.xiaomi.mipush.sdk.MiPushClient.removeAcceptTime(r7)
            java.lang.String r2 = "-"
            java.lang.String[] r0 = r0.split(r2)
            int r2 = r0.length
            r3 = 2
            if (r2 != r3) goto L5d
            r2 = r0[r1]
            r3 = 1
            r4 = r0[r3]
            com.xiaomi.mipush.sdk.MiPushClient.addAcceptTime(r7, r2, r4)
            r2 = r0[r1]
            java.lang.String r4 = "00:00"
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L56
            r0 = r0[r3]
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L56
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r7)
            r0.a(r3)
            goto L5d
        L56:
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r7)
            r0.a(r1)
        L5d:
            java.util.Map r0 = r8.a()
            java.lang.String r2 = "aliases"
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r2 = ","
            java.lang.String r3 = ""
            if (r0 == 0) goto L88
            com.xiaomi.mipush.sdk.MiPushClient.removeAllAliases(r7)
            boolean r4 = r3.equals(r0)
            if (r4 != 0) goto L88
            java.lang.String[] r0 = r0.split(r2)
            int r4 = r0.length
            r5 = r1
        L7e:
            if (r5 >= r4) goto L88
            r6 = r0[r5]
            com.xiaomi.mipush.sdk.MiPushClient.addAlias(r7, r6)
            int r5 = r5 + 1
            goto L7e
        L88:
            java.util.Map r0 = r8.a()
            java.lang.String r4 = "topics"
            java.lang.Object r0 = r0.get(r4)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto Laf
            com.xiaomi.mipush.sdk.MiPushClient.removeAllTopics(r7)
            boolean r4 = r3.equals(r0)
            if (r4 != 0) goto Laf
            java.lang.String[] r0 = r0.split(r2)
            int r4 = r0.length
            r5 = r1
        La5:
            if (r5 >= r4) goto Laf
            r6 = r0[r5]
            com.xiaomi.mipush.sdk.MiPushClient.addTopic(r7, r6)
            int r5 = r5 + 1
            goto La5
        Laf:
            java.util.Map r8 = r8.a()
            java.lang.String r0 = "user_accounts"
            java.lang.Object r8 = r8.get(r0)
            java.lang.String r8 = (java.lang.String) r8
            if (r8 == 0) goto Ld5
            com.xiaomi.mipush.sdk.MiPushClient.removeAllAccounts(r7)
            boolean r0 = r3.equals(r8)
            if (r0 != 0) goto Ld5
            java.lang.String[] r8 = r8.split(r2)
            int r0 = r8.length
        Lcb:
            if (r1 >= r0) goto Ld5
            r2 = r8[r1]
            com.xiaomi.mipush.sdk.MiPushClient.addAccount(r7, r2)
            int r1 = r1 + 1
            goto Lcb
        Ld5:
            return
    }

    public static void a(android.content.Context r2, boolean r3) {
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r2)
            com.xiaomi.mipush.sdk.aw r1 = new com.xiaomi.mipush.sdk.aw
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    static java.lang.String b(java.util.List r0) {
            java.lang.String r0 = d(r0)
            return r0
    }

    private static java.lang.String c(java.util.List<java.lang.String> r2) {
            java.lang.String r2 = d(r2)
            java.lang.String r2 = com.xiaomi.push.bp.a(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L20
            int r0 = r2.length()
            r1 = 4
            if (r0 > r1) goto L16
            goto L20
        L16:
            r0 = 0
            java.lang.String r2 = r2.substring(r0, r1)
            java.lang.String r2 = r2.toLowerCase()
            return r2
        L20:
            java.lang.String r2 = ""
            return r2
    }

    private static java.lang.String d(java.util.List<java.lang.String> r3) {
            boolean r0 = com.xiaomi.push.ag.a(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r3)
            java.util.Locale r3 = java.util.Locale.CHINA
            java.text.Collator r3 = java.text.Collator.getInstance(r3)
            java.util.Collections.sort(r0, r3)
            java.util.Iterator r3 = r0.iterator()
        L1b:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L4e
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L3e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = ","
            r2.append(r1)
            java.lang.String r1 = r2.toString()
        L3e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r0)
            java.lang.String r1 = r2.toString()
            goto L1b
        L4e:
            return r1
    }
}
