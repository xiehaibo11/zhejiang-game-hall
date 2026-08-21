package com.kuaishou.weapon.p0;

import android.content.Context;
import java.io.File;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class ae {
    public static String a(Context context) {
        try {
            return f.b(context.getPackageManager().getPackageInfo(context.getPackageName(), 64).signatures[0].toByteArray());
        } catch (Exception unused) {
            return null;
        }
    }

    public JSONObject a() {
        try {
            JSONObject jSONObject = new JSONObject();
            int i = 1;
            jSONObject.put("0", a("/data", true) ? 1 : 0);
            jSONObject.put("1", a("/system/bin", true) ? 1 : 0);
            if (!a("/system/lib", true)) {
                i = 0;
            }
            jSONObject.put("2", i);
            return jSONObject;
        } catch (Exception unused) {
            return null;
        }
    }

    public boolean a(String str) {
        return new File(File.separator + "proc" + File.separator + str).canWrite();
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x0053 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:29:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean a(java.lang.String r4, boolean r5) {
        /*
            r3 = this;
            java.lang.String r0 = ""
            if (r5 == 0) goto L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r0.<init>()     // Catch: java.lang.Throwable -> L50
            r0.append(r4)     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = "/-"
            r0.append(r4)     // Catch: java.lang.Throwable -> L50
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L50
            r0.append(r1)     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L50
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r0.<init>()     // Catch: java.lang.Throwable -> L50
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L50
            r0.append(r1)     // Catch: java.lang.Throwable -> L50
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L50
        L2c:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L50
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L50
            r1.exists()     // Catch: java.lang.Throwable -> L50
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L50
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L50
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L51
            r4.write(r0)     // Catch: java.lang.Throwable -> L51
            r4.flush()     // Catch: java.lang.Throwable -> L51
            r4.close()     // Catch: java.lang.Throwable -> L51
            if (r5 == 0) goto L4b
            r1.delete()     // Catch: java.lang.Throwable -> L51
        L4b:
            r4.close()     // Catch: java.lang.Exception -> L4e
        L4e:
            r4 = 1
            return r4
        L50:
            r4 = 0
        L51:
            if (r4 == 0) goto L56
            r4.close()     // Catch: java.lang.Exception -> L56
        L56:
            r4 = 0
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kuaishou.weapon.p0.ae.a(java.lang.String, boolean):boolean");
    }

    public JSONObject b() {
        try {
            JSONObject jSONObject = new JSONObject();
            int i = 1;
            jSONObject.put("0", a("/sys", true) ? 1 : 0);
            jSONObject.put("1", a("/sbin", true) ? 1 : 0);
            jSONObject.put("2", a("/etc", true) ? 1 : 0);
            if (!a("/dev", true)) {
                i = 0;
            }
            jSONObject.put("3", i);
            return jSONObject;
        } catch (Exception unused) {
            return null;
        }
    }

    public boolean b(String str) {
        return a(str, false);
    }
}
