package com.xiaomi.push;

import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.xiaomi.mipush.sdk.Constants;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class cr {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private long f194a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f195a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f197b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    protected String h;
    private String i;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ArrayList<da> f196a = new ArrayList<>();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private double f8089a = 0.1d;
    private String j = "s.mi1.cc";
    private long b = 86400000;

    public cr(String str) {
        this.f195a = "";
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("the host is empty");
        }
        this.f194a = System.currentTimeMillis();
        this.f196a.add(new da(str, -1));
        this.f195a = cv.m206a();
        this.f197b = str;
    }

    private synchronized void c(String str) {
        Iterator<da> it = this.f196a.iterator();
        while (it.hasNext()) {
            if (TextUtils.equals(it.next().f213a, str)) {
                it.remove();
            }
        }
    }

    public synchronized cr a(JSONObject jSONObject) {
        this.f195a = jSONObject.optString("net");
        this.b = jSONObject.getLong(RemoteMessageConst.TTL);
        this.f8089a = jSONObject.getDouble("pct");
        this.f194a = jSONObject.getLong("ts");
        this.d = jSONObject.optString("city");
        this.c = jSONObject.optString("prv");
        this.g = jSONObject.optString("cty");
        this.e = jSONObject.optString("isp");
        this.f = jSONObject.optString("ip");
        this.f197b = jSONObject.optString("host");
        this.h = jSONObject.optString("xf");
        JSONArray jSONArray = jSONObject.getJSONArray("fbs");
        for (int i = 0; i < jSONArray.length(); i++) {
            a(new da().a(jSONArray.getJSONObject(i)));
        }
        return this;
    }

    public synchronized String a() {
        if (!TextUtils.isEmpty(this.i)) {
            return this.i;
        }
        if (TextUtils.isEmpty(this.e)) {
            return "hardcode_isp";
        }
        String strA = bp.a(new String[]{this.e, this.c, this.d, this.g, this.f}, "_");
        this.i = strA;
        return strA;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized ArrayList<String> m197a() {
        return a(false);
    }

    public ArrayList<String> a(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("the url is empty.");
        }
        URL url = new URL(str);
        if (!TextUtils.equals(url.getHost(), this.f197b)) {
            throw new IllegalArgumentException("the url is not supported by the fallback");
        }
        ArrayList<String> arrayList = new ArrayList<>();
        Iterator<String> it = a(true).iterator();
        while (it.hasNext()) {
            ct ctVarA = ct.a(it.next(), url.getPort());
            arrayList.add(new URL(url.getProtocol(), ctVarA.m205a(), ctVarA.a(), url.getFile()).toString());
        }
        return arrayList;
    }

    public synchronized ArrayList<String> a(boolean z) {
        ArrayList<String> arrayList;
        int iIndexOf;
        int size = this.f196a.size();
        da[] daVarArr = new da[size];
        this.f196a.toArray(daVarArr);
        Arrays.sort(daVarArr);
        arrayList = new ArrayList<>();
        for (int i = 0; i < size; i++) {
            da daVar = daVarArr[i];
            String strSubstring = (z || (iIndexOf = daVar.f213a.indexOf(Constants.COLON_SEPARATOR)) == -1) ? daVar.f213a : daVar.f213a.substring(0, iIndexOf);
            arrayList.add(strSubstring);
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized JSONObject m198a() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        jSONObject.put("net", this.f195a);
        jSONObject.put(RemoteMessageConst.TTL, this.b);
        jSONObject.put("pct", this.f8089a);
        jSONObject.put("ts", this.f194a);
        jSONObject.put("city", this.d);
        jSONObject.put("prv", this.c);
        jSONObject.put("cty", this.g);
        jSONObject.put("isp", this.e);
        jSONObject.put("ip", this.f);
        jSONObject.put("host", this.f197b);
        jSONObject.put("xf", this.h);
        JSONArray jSONArray = new JSONArray();
        Iterator<da> it = this.f196a.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next().a());
        }
        jSONObject.put("fbs", jSONArray);
        return jSONObject;
    }

    public void a(double d) {
        this.f8089a = d;
    }

    public void a(long j) {
        if (j > 0) {
            this.b = j;
            return;
        }
        throw new IllegalArgumentException("the duration is invalid " + j);
    }

    synchronized void a(da daVar) {
        c(daVar.f213a);
        this.f196a.add(daVar);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m199a(String str) {
        a(new da(str));
    }

    public void a(String str, int i, long j, long j2, Exception exc) {
        a(str, new cq(i, j, j2, exc));
    }

    public void a(String str, long j, long j2) {
        try {
            b(new URL(str).getHost(), j, j2);
        } catch (MalformedURLException unused) {
        }
    }

    public void a(String str, long j, long j2, Exception exc) {
        try {
            b(new URL(str).getHost(), j, j2, exc);
        } catch (MalformedURLException unused) {
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x001b, code lost:
    
        r1.a(r5);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public synchronized void a(java.lang.String r4, com.xiaomi.push.cq r5) {
        /*
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList<com.xiaomi.push.da> r0 = r3.f196a     // Catch: java.lang.Throwable -> L20
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L20
        L7:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L20
            com.xiaomi.push.da r1 = (com.xiaomi.push.da) r1     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = r1.f213a     // Catch: java.lang.Throwable -> L20
            boolean r2 = android.text.TextUtils.equals(r4, r2)     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L7
            r1.a(r5)     // Catch: java.lang.Throwable -> L20
        L1e:
            monitor-exit(r3)
            return
        L20:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.cr.a(java.lang.String, com.xiaomi.push.cq):void");
    }

    public synchronized void a(String[] strArr) {
        int i;
        int size = this.f196a.size() - 1;
        while (true) {
            i = 0;
            if (size < 0) {
                break;
            }
            int length = strArr.length;
            while (true) {
                if (i < length) {
                    if (TextUtils.equals(this.f196a.get(size).f213a, strArr[i])) {
                        this.f196a.remove(size);
                        break;
                    }
                    i++;
                }
            }
            size--;
        }
        int i2 = 0;
        for (da daVar : this.f196a) {
            if (daVar.f8096a > i2) {
                i2 = daVar.f8096a;
            }
        }
        while (i < strArr.length) {
            a(new da(strArr[i], (strArr.length + i2) - i));
            i++;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m200a() {
        return TextUtils.equals(this.f195a, cv.m206a());
    }

    public boolean a(cr crVar) {
        return TextUtils.equals(this.f195a, crVar.f195a);
    }

    public void b(String str) {
        this.j = str;
    }

    public void b(String str, long j, long j2) {
        a(str, 0, j, j2, null);
    }

    public void b(String str, long j, long j2, Exception exc) {
        a(str, -1, j, j2, exc);
    }

    public boolean b() {
        return System.currentTimeMillis() - this.f194a < this.b;
    }

    boolean c() {
        long j = this.b;
        if (864000000 >= j) {
            j = 864000000;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j2 = this.f194a;
        return jCurrentTimeMillis - j2 > j || (jCurrentTimeMillis - j2 > this.b && this.f195a.startsWith("WIFI-"));
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.f195a);
        sb.append("\n");
        sb.append(a());
        for (da daVar : this.f196a) {
            sb.append("\n");
            sb.append(daVar.toString());
        }
        sb.append("\n");
        return sb.toString();
    }
}
