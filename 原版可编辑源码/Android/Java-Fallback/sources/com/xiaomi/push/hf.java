package com.xiaomi.push;

public class hf {
    private static java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.push.hn>> a(android.content.Context r4, java.util.List<com.xiaomi.push.hn> r5) {
            if (r5 == 0) goto L3e
            int r0 = r5.size()
            if (r0 != 0) goto L9
            goto L3e
        L9:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Iterator r5 = r5.iterator()
        L12:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r5.next()
            com.xiaomi.push.hn r1 = (com.xiaomi.push.hn) r1
            a(r4, r1)
            java.lang.String r2 = r1.c()
            java.lang.Object r2 = r0.get(r2)
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            if (r2 != 0) goto L39
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.String r3 = r1.c()
            r0.put(r3, r2)
        L39:
            r2.add(r1)
            goto L12
        L3d:
            return r0
        L3e:
            r4 = 0
            return r4
    }

    private static void a(android.content.Context r2, com.xiaomi.push.hh r3, java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.push.hn>> r4) {
            java.util.Set r2 = r4.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L8:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto L38
            java.lang.Object r4 = r2.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r0 = r4.getValue()     // Catch: java.lang.Exception -> L8
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Exception -> L8
            if (r0 == 0) goto L8
            int r1 = r0.size()     // Catch: java.lang.Exception -> L8
            if (r1 != 0) goto L23
            goto L8
        L23:
            r1 = 0
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L8
            com.xiaomi.push.hn r1 = (com.xiaomi.push.hn) r1     // Catch: java.lang.Exception -> L8
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L8
            java.lang.Object r4 = r4.getKey()     // Catch: java.lang.Exception -> L8
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L8
            r3.a(r0, r1, r4)     // Catch: java.lang.Exception -> L8
            goto L8
        L38:
            return
    }

    public static void a(android.content.Context r1, com.xiaomi.push.hh r2, java.util.List<com.xiaomi.push.hn> r3) {
            java.util.HashMap r3 = a(r1, r3)
            if (r3 == 0) goto L11
            int r0 = r3.size()
            if (r0 != 0) goto Ld
            goto L11
        Ld:
            a(r1, r2, r3)
            return
        L11:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "TinyData TinyDataCacheUploader.uploadTinyData itemsUploading == null || itemsUploading.size() == 0  ts:"
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            return
    }

    private static void a(android.content.Context r2, com.xiaomi.push.hn r3) {
            boolean r0 = r3.a
            if (r0 == 0) goto L9
            java.lang.String r0 = "push_sdk_channel"
            r3.a(r0)
        L9:
            java.lang.String r0 = r3.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1a
            java.lang.String r0 = com.xiaomi.push.service.bz.a()
            r3.f(r0)
        L1a:
            long r0 = java.lang.System.currentTimeMillis()
            r3.b(r0)
            java.lang.String r0 = r3.e()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L32
            java.lang.String r2 = r2.getPackageName()
            r3.e(r2)
        L32:
            java.lang.String r2 = r3.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L43
            java.lang.String r2 = r3.e()
            r3.e(r2)
        L43:
            return
    }
}
