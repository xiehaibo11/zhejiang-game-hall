package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.loc.bt;
import com.xiaomi.mipush.sdk.Constants;
import java.net.URL;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class fk {
    public static int a = 1;
    public static int b = 2;
    private static fk e;
    private Context j;
    private String k;
    private long c = 0;
    private boolean d = false;
    private ArrayList<String> f = new ArrayList<>();
    private et g = new et();
    private et h = new et();
    private long i = 120000;
    private boolean l = false;

    private fk(Context context) {
        this.j = context;
    }

    public static synchronized fk a(Context context) {
        if (e == null) {
            e = new fk(context);
        }
        return e;
    }

    private et b(int i) {
        return i == b ? this.h : this.g;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0017 A[Catch: all -> 0x0090, TRY_LEAVE, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0009, B:10:0x000f, B:12:0x0017, B:17:0x0027, B:22:0x0033, B:24:0x004d, B:25:0x0082), top: B:31:0x0003 }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x004d A[Catch: all -> 0x0090, LOOP:0: B:23:0x004b->B:24:0x004d, LOOP_END, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0009, B:10:0x000f, B:12:0x0017, B:17:0x0027, B:22:0x0033, B:24:0x004d, B:25:0x0082), top: B:31:0x0003 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized void b(boolean z, final int i) {
        if (z) {
            if (this.c != 0) {
            }
            this.c = System.currentTimeMillis();
            this.l = true;
            StackTraceElement[] stackTrace = Thread.currentThread().getStackTrace();
            StringBuffer stringBuffer = new StringBuffer();
            while (i < r1) {
            }
            cr.a().b(new cs() {
                @Override
                public final void a() {
                    int i2;
                    StringBuilder sb = new StringBuilder("http://");
                    sb.append(fq.r());
                    sb.append("?host=dualstack-a.apilocate.amap.com&query=");
                    sb.append(i == fk.b ? 6 : 4);
                    String string = sb.toString();
                    fl flVar = new fl();
                    flVar.b(string);
                    flVar.c(string);
                    flVar.a(bt.a.e);
                    flVar.a(bt.c.a);
                    try {
                        bo.a();
                        JSONObject jSONObject = new JSONObject(new String(bo.a(flVar).a));
                        String[] strArrB = fk.b(jSONObject.optJSONArray("ips"), fk.a);
                        if (strArrB != null && strArrB.length > 0 && !fk.b(strArrB, fk.this.b(fk.a).a())) {
                            fk.this.b(fk.a).a(strArrB);
                            fk.this.f(fk.a);
                        }
                        String[] strArrB2 = fk.b(jSONObject.optJSONArray("ipsv6"), fk.b);
                        if (strArrB2 != null && strArrB2.length > 0 && !fk.b(strArrB2, fk.this.b(fk.b).a())) {
                            fk.this.b(fk.b).a(strArrB2);
                            fk.this.f(fk.b);
                        }
                        if ((jSONObject.has("ips") || jSONObject.has("ipsv6")) && jSONObject.has(RemoteMessageConst.TTL) && (i2 = jSONObject.getInt(RemoteMessageConst.TTL)) > 30) {
                            fk.this.i = i2 * 1000;
                        }
                    } catch (Throwable th) {
                        JSONObject jSONObject2 = new JSONObject();
                        try {
                            jSONObject2.put("key", "dnsError");
                            jSONObject2.put(com.tkay.expressad.foundation.d.r.ac, th.getMessage());
                        } catch (Throwable unused) {
                        }
                        fx.a(fk.this.j, "O018", jSONObject2);
                    }
                }
            });
            return;
        }
        if (!fq.p() && this.l) {
            return;
        }
        if (this.c != 0) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (jCurrentTimeMillis - this.c < this.i) {
                return;
            }
            if (jCurrentTimeMillis - this.c < 60000) {
                return;
            }
        }
        this.c = System.currentTimeMillis();
        this.l = true;
        StackTraceElement[] stackTrace2 = Thread.currentThread().getStackTrace();
        StringBuffer stringBuffer2 = new StringBuffer();
        for (StackTraceElement stackTraceElement : stackTrace2) {
            stringBuffer2.append(stackTraceElement.getClassName() + "(" + stackTraceElement.getMethodName() + Constants.COLON_SEPARATOR + stackTraceElement.getLineNumber() + "),");
        }
        cr.a().b(new cs() {
            @Override
            public final void a() {
                int i2;
                StringBuilder sb = new StringBuilder("http://");
                sb.append(fq.r());
                sb.append("?host=dualstack-a.apilocate.amap.com&query=");
                sb.append(i == fk.b ? 6 : 4);
                String string = sb.toString();
                fl flVar = new fl();
                flVar.b(string);
                flVar.c(string);
                flVar.a(bt.a.e);
                flVar.a(bt.c.a);
                try {
                    bo.a();
                    JSONObject jSONObject = new JSONObject(new String(bo.a(flVar).a));
                    String[] strArrB = fk.b(jSONObject.optJSONArray("ips"), fk.a);
                    if (strArrB != null && strArrB.length > 0 && !fk.b(strArrB, fk.this.b(fk.a).a())) {
                        fk.this.b(fk.a).a(strArrB);
                        fk.this.f(fk.a);
                    }
                    String[] strArrB2 = fk.b(jSONObject.optJSONArray("ipsv6"), fk.b);
                    if (strArrB2 != null && strArrB2.length > 0 && !fk.b(strArrB2, fk.this.b(fk.b).a())) {
                        fk.this.b(fk.b).a(strArrB2);
                        fk.this.f(fk.b);
                    }
                    if ((jSONObject.has("ips") || jSONObject.has("ipsv6")) && jSONObject.has(RemoteMessageConst.TTL) && (i2 = jSONObject.getInt(RemoteMessageConst.TTL)) > 30) {
                        fk.this.i = i2 * 1000;
                    }
                } catch (Throwable th) {
                    JSONObject jSONObject2 = new JSONObject();
                    try {
                        jSONObject2.put("key", "dnsError");
                        jSONObject2.put(com.tkay.expressad.foundation.d.r.ac, th.getMessage());
                    } catch (Throwable unused) {
                    }
                    fx.a(fk.this.j, "O018", jSONObject2);
                }
            }
        });
        return;
    }

    private static boolean b(String[] strArr, String[] strArr2) {
        if (strArr == null || strArr.length == 0 || strArr2 == null || strArr2.length == 0 || strArr.length != strArr2.length) {
            return false;
        }
        int length = strArr.length;
        for (int i = 0; i < length; i++) {
            if (!strArr[i].equals(strArr2[i])) {
                return false;
            }
        }
        return true;
    }

    private static String[] b(JSONArray jSONArray, int i) throws JSONException {
        if (jSONArray == null || jSONArray.length() == 0) {
            return new String[0];
        }
        int length = jSONArray.length();
        String[] strArr = new String[length];
        for (int i2 = 0; i2 < length; i2++) {
            String string = jSONArray.getString(i2);
            if (!TextUtils.isEmpty(string)) {
                if (i == b) {
                    string = "[" + string + "]";
                }
                strArr[i2] = string;
            }
        }
        return strArr;
    }

    private static String c(int i) {
        return i == b ? "last_ip_6" : "last_ip_4";
    }

    private void d(int i) {
        if (b(i).d()) {
            SharedPreferences.Editor editorA = fy.a(this.j, "cbG9jaXA");
            fy.a(editorA, c(i));
            fy.a(editorA);
            b(i).a(false);
        }
    }

    private String e(int i) {
        String str;
        int i2 = 0;
        b(false, i);
        String[] strArrA = b(i).a();
        if (strArrA == null || strArrA.length <= 0) {
            g(i);
            return b(i).b();
        }
        int length = strArrA.length;
        while (true) {
            if (i2 >= length) {
                str = null;
                break;
            }
            str = strArrA[i2];
            if (!this.f.contains(str)) {
                break;
            }
            i2++;
        }
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        b(i).a(str);
        return str;
    }

    private void f(int i) {
        if (b(i).a() == null || b(i).a().length <= 0) {
            return;
        }
        String str = b(i).a()[0];
        if (str.equals(this.k) || this.f.contains(str)) {
            return;
        }
        this.k = str;
        SharedPreferences.Editor editorA = fy.a(this.j, "cbG9jaXA");
        fy.a(editorA, c(i), str);
        fy.a(editorA);
    }

    private void g(int i) {
        String strA = fy.a(this.j, "cbG9jaXA", c(i), (String) null);
        if (TextUtils.isEmpty(strA) || this.f.contains(strA)) {
            return;
        }
        b(i).a(strA);
        b(i).b(strA);
        b(i).a(true);
    }

    public final String a(fn fnVar, int i) {
        try {
            if (fq.q() && fnVar != null) {
                String strB = fnVar.b();
                String host = new URL(strB).getHost();
                if (!"http://abroad.apilocate.amap.com/mobile/binary".equals(strB) && !"abroad.apilocate.amap.com".equals(host)) {
                    String str = "apilocate.amap.com".equalsIgnoreCase(host) ? "httpdns.apilocate.amap.com" : host;
                    if (!m.g(str)) {
                        return null;
                    }
                    String strE = e(i);
                    if (!TextUtils.isEmpty(strE)) {
                        fnVar.d(strB.replace(host, strE));
                        fnVar.a().put("host", str);
                        fnVar.e(str);
                        fnVar.a(i == b);
                        return strE;
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public final void a(int i) {
        if (b(i).e()) {
            d(i);
            return;
        }
        this.f.add(b(i).b());
        d(i);
        b(true, i);
    }

    public final void a(boolean z, int i) {
        b(i).b(z);
        if (z) {
            String strC = b(i).c();
            String strB = b(i).b();
            if (TextUtils.isEmpty(strB) || strB.equals(strC)) {
                return;
            }
            SharedPreferences.Editor editorA = fy.a(this.j, "cbG9jaXA");
            fy.a(editorA, c(i), strB);
            fy.a(editorA);
        }
    }
}
