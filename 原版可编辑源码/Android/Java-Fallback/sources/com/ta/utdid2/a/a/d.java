package com.ta.utdid2.a.a;

public class d {
    private static java.lang.String a() {
            java.lang.String r0 = ""
            java.lang.String r1 = "ro.aliyun.clouduuid"
            java.lang.String r1 = com.ta.utdid2.a.a.g.get(r1, r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L14
            java.lang.String r1 = "ro.sys.aliyun.clouduuid"
            java.lang.String r1 = com.ta.utdid2.a.a.g.get(r1, r0)
        L14:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L1f
            java.lang.String r0 = b()
            return r0
        L1f:
            return r1
    }

    private static java.lang.String b() {
            java.lang.String r0 = "com.yunos.baseservice.clouduuid.CloudUUID"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = "getCloudUUID"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L19
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L19
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L19
            java.lang.Object r0 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L19
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L19
            goto L1b
        L19:
            java.lang.String r0 = ""
        L1b:
            return r0
    }

    public static java.lang.String getImei(android.content.Context r2) {
            r0 = 0
            if (r2 == 0) goto L14
            java.lang.String r1 = "phone"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L13
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Exception -> L13
            if (r2 == 0) goto L14
            java.lang.String r2 = r2.getDeviceId()     // Catch: java.lang.Exception -> L13
            r0 = r2
            goto L14
        L13:
        L14:
            boolean r2 = com.ta.utdid2.a.a.f.isEmpty(r0)
            if (r2 == 0) goto L1e
            java.lang.String r0 = a()
        L1e:
            boolean r2 = com.ta.utdid2.a.a.f.isEmpty(r0)
            if (r2 == 0) goto L28
            java.lang.String r0 = getUniqueID()
        L28:
            return r0
    }

    public static java.lang.String getImsi(android.content.Context r2) {
            r0 = 0
            if (r2 == 0) goto L14
            java.lang.String r1 = "phone"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L13
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Exception -> L13
            if (r2 == 0) goto L14
            java.lang.String r2 = r2.getSubscriberId()     // Catch: java.lang.Exception -> L13
            r0 = r2
            goto L14
        L13:
        L14:
            boolean r2 = com.ta.utdid2.a.a.f.isEmpty(r0)
            if (r2 == 0) goto L1e
            java.lang.String r0 = getUniqueID()
        L1e:
            return r0
    }

    public static java.lang.String getUniqueID() {
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            int r1 = (int) r0
            long r2 = java.lang.System.nanoTime()
            int r0 = (int) r2
            java.util.Random r2 = new java.util.Random
            r2.<init>()
            int r2 = r2.nextInt()
            java.util.Random r3 = new java.util.Random
            r3.<init>()
            int r3 = r3.nextInt()
            byte[] r1 = com.ta.utdid2.a.a.c.getBytes(r1)
            byte[] r0 = com.ta.utdid2.a.a.c.getBytes(r0)
            byte[] r2 = com.ta.utdid2.a.a.c.getBytes(r2)
            byte[] r3 = com.ta.utdid2.a.a.c.getBytes(r3)
            r4 = 16
            byte[] r4 = new byte[r4]
            r5 = 4
            r6 = 0
            java.lang.System.arraycopy(r1, r6, r4, r6, r5)
            java.lang.System.arraycopy(r0, r6, r4, r5, r5)
            r0 = 8
            java.lang.System.arraycopy(r2, r6, r4, r0, r5)
            r0 = 12
            java.lang.System.arraycopy(r3, r6, r4, r0, r5)
            r0 = 2
            java.lang.String r0 = com.ta.utdid2.a.a.b.encodeToString(r4, r0)
            return r0
    }
}
