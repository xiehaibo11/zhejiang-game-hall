package com.xiaomi.push.service;

public class an {
    private static java.lang.Object a;
    private static java.util.Map<java.lang.String, java.util.Queue<java.lang.String>> a;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.xiaomi.push.service.an.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.service.an.a = r0
            return
    }

    public static boolean a(com.xiaomi.push.service.XMPushService r7, java.lang.String r8, java.lang.String r9) {
            java.lang.Object r0 = com.xiaomi.push.service.an.a
            monitor-enter(r0)
            java.lang.String r1 = "push_message_ids"
            r2 = 0
            android.content.SharedPreferences r7 = r7.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L60
            java.util.Map<java.lang.String, java.util.Queue<java.lang.String>> r1 = com.xiaomi.push.service.an.a     // Catch: java.lang.Throwable -> L60
            java.lang.Object r1 = r1.get(r8)     // Catch: java.lang.Throwable -> L60
            java.util.Queue r1 = (java.util.Queue) r1     // Catch: java.lang.Throwable -> L60
            if (r1 != 0) goto L37
            java.lang.String r1 = ""
            java.lang.String r1 = r7.getString(r8, r1)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = ","
            java.lang.String[] r1 = r1.split(r3)     // Catch: java.lang.Throwable -> L60
            java.util.LinkedList r3 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L60
            r3.<init>()     // Catch: java.lang.Throwable -> L60
            int r4 = r1.length     // Catch: java.lang.Throwable -> L60
            r5 = r2
        L27:
            if (r5 >= r4) goto L31
            r6 = r1[r5]     // Catch: java.lang.Throwable -> L60
            r3.add(r6)     // Catch: java.lang.Throwable -> L60
            int r5 = r5 + 1
            goto L27
        L31:
            java.util.Map<java.lang.String, java.util.Queue<java.lang.String>> r1 = com.xiaomi.push.service.an.a     // Catch: java.lang.Throwable -> L60
            r1.put(r8, r3)     // Catch: java.lang.Throwable -> L60
            r1 = r3
        L37:
            boolean r3 = r1.contains(r9)     // Catch: java.lang.Throwable -> L60
            if (r3 == 0) goto L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            r7 = 1
            return r7
        L40:
            r1.add(r9)     // Catch: java.lang.Throwable -> L60
            int r9 = r1.size()     // Catch: java.lang.Throwable -> L60
            r3 = 25
            if (r9 <= r3) goto L4e
            r1.poll()     // Catch: java.lang.Throwable -> L60
        L4e:
            java.lang.String r9 = ","
            java.lang.String r9 = com.xiaomi.push.bp.a(r1, r9)     // Catch: java.lang.Throwable -> L60
            android.content.SharedPreferences$Editor r7 = r7.edit()     // Catch: java.lang.Throwable -> L60
            r7.putString(r8, r9)     // Catch: java.lang.Throwable -> L60
            r7.commit()     // Catch: java.lang.Throwable -> L60
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            return r2
        L60:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            throw r7
    }
}
