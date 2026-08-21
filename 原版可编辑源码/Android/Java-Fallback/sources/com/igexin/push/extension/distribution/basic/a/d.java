package com.igexin.push.extension.distribution.basic.a;

public class d {
    private static final java.lang.String a = null;
    private static com.igexin.push.extension.distribution.basic.a.d d;
    private java.lang.Long b;
    private java.net.ServerSocket c;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "EXT-"
            r0.append(r1)
            java.lang.Class<com.igexin.push.extension.distribution.basic.a.d> r1 = com.igexin.push.extension.distribution.basic.a.d.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.extension.distribution.basic.a.d.a = r0
            return
    }

    private d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.extension.distribution.basic.a.d a() {
            com.igexin.push.extension.distribution.basic.a.d r0 = com.igexin.push.extension.distribution.basic.a.d.d
            if (r0 != 0) goto Lb
            com.igexin.push.extension.distribution.basic.a.d r0 = new com.igexin.push.extension.distribution.basic.a.d
            r0.<init>()
            com.igexin.push.extension.distribution.basic.a.d.d = r0
        Lb:
            com.igexin.push.extension.distribution.basic.a.d r0 = com.igexin.push.extension.distribution.basic.a.d.d
            return r0
    }

    public void a(boolean r9) {
            r8 = this;
            r0 = 0
            if (r9 == 0) goto L168
            boolean r1 = com.igexin.push.core.d.l     // Catch: java.lang.Throwable -> L166
            if (r1 == 0) goto L168
            boolean r1 = com.igexin.push.core.d.k     // Catch: java.lang.Throwable -> L166
            if (r1 == 0) goto L168
            java.net.ServerSocket r1 = r8.c     // Catch: java.lang.Exception -> L1a java.lang.Throwable -> L166
            if (r1 != 0) goto L32
            java.net.ServerSocket r1 = new java.net.ServerSocket     // Catch: java.lang.Exception -> L1a java.lang.Throwable -> L166
            r2 = 51688(0xc9e8, float:7.243E-41)
            r1.<init>(r2)     // Catch: java.lang.Exception -> L1a java.lang.Throwable -> L166
            r8.c = r1     // Catch: java.lang.Exception -> L1a java.lang.Throwable -> L166
            goto L32
        L1a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L166
            r1.<init>()     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.a.d.a     // Catch: java.lang.Throwable -> L166
            r1.append(r2)     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = "|port 51688 has occupy by others"
            r1.append(r2)     // Catch: java.lang.Throwable -> L166
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L166
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L166
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L166
        L32:
            java.net.ServerSocket r1 = r8.c     // Catch: java.lang.Throwable -> L166
            if (r1 == 0) goto L168
            long r1 = com.igexin.push.extension.distribution.basic.c.e.h     // Catch: java.lang.Throwable -> L166
            r3 = 180000(0x2bf20, double:8.8932E-319)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L41
            com.igexin.push.extension.distribution.basic.c.e.h = r3     // Catch: java.lang.Throwable -> L166
        L41:
            long r1 = com.igexin.push.extension.distribution.basic.c.e.g     // Catch: java.lang.Throwable -> L166
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L49
            com.igexin.push.extension.distribution.basic.c.e.g = r3     // Catch: java.lang.Throwable -> L166
        L49:
            java.lang.Long r1 = r8.b     // Catch: java.lang.Throwable -> L166
            if (r1 != 0) goto L7d
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L166
            long r3 = com.igexin.push.extension.distribution.basic.c.e.i     // Catch: java.lang.Throwable -> L166
            long r1 = r1 - r3
            long r3 = com.igexin.push.extension.distribution.basic.c.e.h     // Catch: java.lang.Throwable -> L166
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 >= 0) goto L73
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L166
            r9.<init>()     // Catch: java.lang.Throwable -> L166
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.a.d.a     // Catch: java.lang.Throwable -> L166
            r9.append(r1)     // Catch: java.lang.Throwable -> L166
            java.lang.String r1 = "|lastReportInterval < reportCidRestartThreshold not report"
            r9.append(r1)     // Catch: java.lang.Throwable -> L166
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L166
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L166
            com.igexin.b.a.c.b.a(r9, r1)     // Catch: java.lang.Throwable -> L166
            return
        L73:
            long r3 = com.igexin.push.extension.distribution.basic.c.e.g     // Catch: java.lang.Throwable -> L166
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L7b
            r1 = 2
            goto L8f
        L7b:
            r1 = r0
            goto L8f
        L7d:
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L166
            java.lang.Long r3 = r8.b     // Catch: java.lang.Throwable -> L166
            long r3 = r3.longValue()     // Catch: java.lang.Throwable -> L166
            long r1 = r1 - r3
            long r3 = com.igexin.push.extension.distribution.basic.c.e.g     // Catch: java.lang.Throwable -> L166
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 < 0) goto L14d
            r1 = 1
        L8f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L166
            r2.<init>()     // Catch: java.lang.Throwable -> L166
            java.io.File r3 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L166
            r2.append(r3)     // Catch: java.lang.Throwable -> L166
            java.lang.String r3 = "/libs"
            r2.append(r3)     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L166
            java.util.List r2 = com.igexin.push.extension.distribution.basic.g.e.a(r2)     // Catch: java.lang.Throwable -> L166
            if (r2 != 0) goto Lb0
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L166
            r2.<init>()     // Catch: java.lang.Throwable -> L166
            goto Lbc
        Lb0:
            int r3 = r2.size()     // Catch: java.lang.Throwable -> L166
            if (r3 <= 0) goto L14c
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L166
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L166
            r2 = r3
        Lbc:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L166
            r3.<init>()     // Catch: java.lang.Throwable -> L166
            java.lang.String r4 = "appinfo"
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = "deviceid"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L166
            r4.<init>()     // Catch: java.lang.Throwable -> L166
            java.lang.String r5 = "ANDROID-"
            r4.append(r5)     // Catch: java.lang.Throwable -> L166
            java.lang.String r5 = com.igexin.push.core.d.A     // Catch: java.lang.Throwable -> L166
            r4.append(r5)     // Catch: java.lang.Throwable -> L166
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L166
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = "type"
            r3.put(r2, r1)     // Catch: java.lang.Throwable -> L166
            java.lang.String r1 = "pkg"
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L166
            r3.put(r1, r2)     // Catch: java.lang.Throwable -> L166
            r3.toString()     // Catch: java.lang.Throwable -> L166
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L166
            r1.<init>()     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = "action"
            java.lang.String r4 = "sendMessage"
            r1.putString(r2, r4)     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = "taskid"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L166
            r4.<init>()     // Catch: java.lang.Throwable -> L166
            java.lang.String r5 = "6T5@S_"
            r4.append(r5)     // Catch: java.lang.Throwable -> L166
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L166
            r5.<init>()     // Catch: java.lang.Throwable -> L166
            java.lang.String r6 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> L166
            r5.append(r6)     // Catch: java.lang.Throwable -> L166
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L166
            r5.append(r6)     // Catch: java.lang.Throwable -> L166
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L166
            java.lang.String r5 = com.igexin.b.b.a.a(r5)     // Catch: java.lang.Throwable -> L166
            r4.append(r5)     // Catch: java.lang.Throwable -> L166
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L166
            r1.putString(r2, r4)     // Catch: java.lang.Throwable -> L166
            java.lang.String r2 = "extraData"
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L166
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L166
            r1.putByteArray(r2, r3)     // Catch: java.lang.Throwable -> L166
            com.igexin.push.core.a.e r2 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L166
            r2.a(r1)     // Catch: java.lang.Throwable -> L166
            com.igexin.push.extension.distribution.basic.d.b r1 = com.igexin.push.extension.distribution.basic.d.b.a()     // Catch: java.lang.Throwable -> L166
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L166
            r1.a(r2)     // Catch: java.lang.Throwable -> L166
            goto L168
        L14c:
            return
        L14d:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L166
            r9.<init>()     // Catch: java.lang.Throwable -> L166
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.a.d.a     // Catch: java.lang.Throwable -> L166
            r9.append(r1)     // Catch: java.lang.Throwable -> L166
            java.lang.String r1 = "|offline time < reportCidOfflineThreshold not report"
            r9.append(r1)     // Catch: java.lang.Throwable -> L166
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L166
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L166
            com.igexin.b.a.c.b.a(r9, r1)     // Catch: java.lang.Throwable -> L166
            return
        L166:
            r9 = move-exception
            goto L175
        L168:
            if (r9 != 0) goto L194
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L166
            java.lang.Long r9 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L166
            r8.b = r9     // Catch: java.lang.Throwable -> L166
            goto L194
        L175:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.a.d.a
            r1.append(r2)
            java.lang.String r2 = "|do report exception:"
            r1.append(r2)
            java.lang.String r9 = r9.toString()
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r9, r0)
        L194:
            return
    }
}
