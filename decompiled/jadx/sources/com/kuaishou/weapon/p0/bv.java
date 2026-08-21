package com.kuaishou.weapon.p0;

import android.content.Context;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class bv {
    private static final byte[] d = new byte[0];

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2718a;
    private boolean b;
    private int c;

    public bv(Context context, int i, boolean z) {
        this.f2718a = context;
        this.b = z;
        this.c = i;
    }

    public String a(String str) {
        try {
            synchronized (d) {
                JSONObject jSONObjectA = new cl(str, cj.j).a(this.f2718a);
                if (jSONObjectA == null) {
                    return null;
                }
                JSONObject jSONObjectA2 = a();
                if (jSONObjectA2 == null) {
                    return null;
                }
                jSONObjectA.put("module_section", jSONObjectA2);
                return jSONObjectA.toString();
            }
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:145:0x04f9 A[Catch: all -> 0x055c, TRY_ENTER, TryCatch #4 {all -> 0x055c, blocks: (B:94:0x039e, B:96:0x03a6, B:97:0x03ab, B:100:0x03c3, B:102:0x03d0, B:104:0x03d9, B:106:0x03e2, B:108:0x03eb, B:110:0x03f4, B:112:0x03fd, B:114:0x0406, B:116:0x040f, B:118:0x0418, B:120:0x0421, B:122:0x042a, B:124:0x0433, B:126:0x043c, B:128:0x0445, B:130:0x044e, B:132:0x0457, B:134:0x0460, B:136:0x0469, B:138:0x0472, B:140:0x047b, B:142:0x04bf, B:145:0x04f9, B:147:0x0506, B:149:0x050c, B:151:0x0515, B:153:0x051b, B:155:0x0524, B:157:0x052a, B:159:0x0533, B:160:0x0537, B:162:0x053b, B:139:0x0477, B:135:0x0465, B:131:0x0453, B:127:0x0441, B:123:0x042f, B:119:0x041d, B:115:0x040b, B:111:0x03f9, B:107:0x03e7, B:103:0x03d5, B:141:0x047f), top: B:182:0x039e }] */
    /* JADX WARN: Removed duplicated region for block: B:174:0x053b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public org.json.JSONObject a() {
        /*
            Method dump skipped, instruction units count: 1412
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kuaishou.weapon.p0.bv.a():org.json.JSONObject");
    }
}
