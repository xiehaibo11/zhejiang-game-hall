package com.xiaomi.push;

import com.xiaomi.mipush.sdk.Constants;
import java.util.Iterator;
import java.util.LinkedList;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
class da implements Comparable<da> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected int f8096a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private long f212a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    String f213a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final LinkedList<cq> f214a;

    public da() {
        this(null, 0);
    }

    public da(String str) {
        this(str, 0);
    }

    public da(String str, int i) {
        this.f214a = new LinkedList<>();
        this.f212a = 0L;
        this.f213a = str;
        this.f8096a = i;
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(da daVar) {
        if (daVar == null) {
            return 1;
        }
        return daVar.f8096a - this.f8096a;
    }

    public synchronized da a(JSONObject jSONObject) {
        this.f212a = jSONObject.getLong("tt");
        this.f8096a = jSONObject.getInt(com.tkay.expressad.d.a.b.R);
        this.f213a = jSONObject.getString("host");
        JSONArray jSONArray = jSONObject.getJSONArray("ah");
        for (int i = 0; i < jSONArray.length(); i++) {
            this.f214a.add(new cq().a(jSONArray.getJSONObject(i)));
        }
        return this;
    }

    public synchronized JSONObject a() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        jSONObject.put("tt", this.f212a);
        jSONObject.put(com.tkay.expressad.d.a.b.R, this.f8096a);
        jSONObject.put("host", this.f213a);
        JSONArray jSONArray = new JSONArray();
        Iterator<cq> it = this.f214a.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next().m196a());
        }
        jSONObject.put("ah", jSONArray);
        return jSONObject;
    }

    protected synchronized void a(cq cqVar) {
        if (cqVar != null) {
            this.f214a.add(cqVar);
            int iA = cqVar.a();
            if (iA > 0) {
                this.f8096a += cqVar.a();
            } else {
                int i = 0;
                for (int size = this.f214a.size() - 1; size >= 0 && this.f214a.get(size).a() < 0; size--) {
                    i++;
                }
                this.f8096a += iA * i;
            }
            if (this.f214a.size() > 30) {
                this.f8096a -= this.f214a.remove().a();
            }
        }
    }

    public String toString() {
        return this.f213a + Constants.COLON_SEPARATOR + this.f8096a;
    }
}
