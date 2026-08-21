package com.xiaomi.push;

import com.xiaomi.mipush.sdk.Constants;
import java.util.Iterator;
import java.util.LinkedList;
import org.json.JSONArray;
import org.json.JSONObject;

class da implements Comparable<da> {
    protected int a;
    private long a;
    String a;
    private final LinkedList<cq> a;

    public da() {
        this(null, 0);
    }

    public da(String str) {
        this(str, 0);
    }

    public da(String str, int i) {
        this.a = new LinkedList<>();
        this.a = 0L;
        this.a = str;
        this.a = i;
    }

    @Override
    public int compareTo(da daVar) {
        if (daVar == null) {
            return 1;
        }
        return daVar.a - this.a;
    }

    public synchronized da a(JSONObject jSONObject) {
        this.a = jSONObject.getLong("tt");
        this.a = jSONObject.getInt(com.tkay.expressad.d.a.b.R);
        this.a = jSONObject.getString("host");
        JSONArray jSONArray = jSONObject.getJSONArray("ah");
        for (int i = 0; i < jSONArray.length(); i++) {
            this.a.add(new cq().a(jSONArray.getJSONObject(i)));
        }
        return this;
    }

    public synchronized JSONObject a() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        jSONObject.put("tt", this.a);
        jSONObject.put(com.tkay.expressad.d.a.b.R, this.a);
        jSONObject.put("host", this.a);
        JSONArray jSONArray = new JSONArray();
        Iterator<cq> it = this.a.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next().a());
        }
        jSONObject.put("ah", jSONArray);
        return jSONObject;
    }

    protected synchronized void a(cq cqVar) {
        if (cqVar != null) {
            this.a.add(cqVar);
            int iA = cqVar.a();
            if (iA > 0) {
                this.a += cqVar.a();
            } else {
                int i = 0;
                for (int size = this.a.size() - 1; size >= 0 && this.a.get(size).a() < 0; size--) {
                    i++;
                }
                this.a += iA * i;
            }
            if (this.a.size() > 30) {
                this.a -= this.a.remove().a();
            }
        }
    }

    public String toString() {
        return this.a + Constants.COLON_SEPARATOR + this.a;
    }
}
