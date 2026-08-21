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

public class cr {
    private long a;
    public String a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    protected String h;
    private String i;
    private ArrayList<da> a = new ArrayList<>();
    private double a = 0.1d;
    private String j = "s.mi1.cc";
    private long b = 86400000;

    public cr(String str) {
        this.a = "";
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("the host is empty");
        }
        this.a = System.currentTimeMillis();
        this.a.add(new da(str, -1));
        this.a = cv.a();
        this.b = str;
    }

    private synchronized void c(String str) {
        Iterator<da> it = this.a.iterator();
        while (it.hasNext()) {
            if (TextUtils.equals(it.next().a, str)) {
                it.remove();
            }
        }
    }

    public synchronized cr a(JSONObject jSONObject) {
        this.a = jSONObject.optString("net");
        this.b = jSONObject.getLong(RemoteMessageConst.TTL);
        this.a = jSONObject.getDouble("pct");
        this.a = jSONObject.getLong("ts");
        this.d = jSONObject.optString("city");
        this.c = jSONObject.optString("prv");
        this.g = jSONObject.optString("cty");
        this.e = jSONObject.optString("isp");
        this.f = jSONObject.optString("ip");
        this.b = jSONObject.optString("host");
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

    public synchronized ArrayList<String> a() {
        return a(false);
    }

    public ArrayList<String> a(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("the url is empty.");
        }
        URL url = new URL(str);
        if (!TextUtils.equals(url.getHost(), this.b)) {
            throw new IllegalArgumentException("the url is not supported by the fallback");
        }
        ArrayList<String> arrayList = new ArrayList<>();
        Iterator<String> it = a(true).iterator();
        while (it.hasNext()) {
            ct ctVarA = ct.a(it.next(), url.getPort());
            arrayList.add(new URL(url.getProtocol(), ctVarA.a(), ctVarA.a(), url.getFile()).toString());
        }
        return arrayList;
    }

    public synchronized ArrayList<String> a(boolean z) {
        ArrayList<String> arrayList;
        int iIndexOf;
        int size = this.a.size();
        da[] daVarArr = new da[size];
        this.a.toArray(daVarArr);
        Arrays.sort(daVarArr);
        arrayList = new ArrayList<>();
        for (int i = 0; i < size; i++) {
            da daVar = daVarArr[i];
            String strSubstring = (z || (iIndexOf = daVar.a.indexOf(Constants.COLON_SEPARATOR)) == -1) ? daVar.a : daVar.a.substring(0, iIndexOf);
            arrayList.add(strSubstring);
        }
        return arrayList;
    }

    public synchronized JSONObject a() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        jSONObject.put("net", this.a);
        jSONObject.put(RemoteMessageConst.TTL, this.b);
        jSONObject.put("pct", this.a);
        jSONObject.put("ts", this.a);
        jSONObject.put("city", this.d);
        jSONObject.put("prv", this.c);
        jSONObject.put("cty", this.g);
        jSONObject.put("isp", this.e);
        jSONObject.put("ip", this.f);
        jSONObject.put("host", this.b);
        jSONObject.put("xf", this.h);
        JSONArray jSONArray = new JSONArray();
        Iterator<da> it = this.a.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next().a());
        }
        jSONObject.put("fbs", jSONArray);
        return jSONObject;
    }

    public void a(double d) {
        this.a = d;
    }

    public void a(long j) {
        if (j > 0) {
            this.b = j;
            return;
        }
        throw new IllegalArgumentException("the duration is invalid " + j);
    }

    synchronized void a(da daVar) {
        c(daVar.a);
        this.a.add(daVar);
    }

    public synchronized void a(String str) {
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
    */
    public synchronized void a(String str, cq cqVar) {
        Iterator<da> it = this.a.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            da next = it.next();
            if (TextUtils.equals(str, next.a)) {
                break;
            }
        }
    }

    public synchronized void a(String[] strArr) {
        int i;
        int size = this.a.size() - 1;
        while (true) {
            i = 0;
            if (size < 0) {
                break;
            }
            int length = strArr.length;
            while (true) {
                if (i < length) {
                    if (TextUtils.equals(this.a.get(size).a, strArr[i])) {
                        this.a.remove(size);
                        break;
                    }
                    i++;
                }
            }
            size--;
        }
        int i2 = 0;
        for (da daVar : this.a) {
            if (daVar.a > i2) {
                i2 = daVar.a;
            }
        }
        while (i < strArr.length) {
            a(new da(strArr[i], (strArr.length + i2) - i));
            i++;
        }
    }

    public boolean a() {
        return TextUtils.equals(this.a, cv.a());
    }

    public boolean a(cr crVar) {
        return TextUtils.equals(this.a, crVar.a);
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
        return System.currentTimeMillis() - this.a < this.b;
    }

    boolean c() {
        long j = this.b;
        if (864000000 >= j) {
            j = 864000000;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j2 = this.a;
        return jCurrentTimeMillis - j2 > j || (jCurrentTimeMillis - j2 > this.b && this.a.startsWith("WIFI-"));
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.a);
        sb.append("\n");
        sb.append(a());
        for (da daVar : this.a) {
            sb.append("\n");
            sb.append(daVar.toString());
        }
        sb.append("\n");
        return sb.toString();
    }
}
