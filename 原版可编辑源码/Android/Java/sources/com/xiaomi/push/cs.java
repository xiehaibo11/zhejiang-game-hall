package com.xiaomi.push;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONObject;

class cs {
    private String a;
    private final ArrayList<cr> a = new ArrayList<>();

    public cs() {
    }

    public cs(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("the host is empty");
        }
        this.a = str;
    }

    public synchronized cr a() {
        for (int size = this.a.size() - 1; size >= 0; size--) {
            cr crVar = this.a.get(size);
            if (crVar.a()) {
                cv.a().a(crVar.a());
                return crVar;
            }
        }
        return null;
    }

    public synchronized cs a(JSONObject jSONObject) {
        this.a = jSONObject.getString("host");
        JSONArray jSONArray = jSONObject.getJSONArray("fbs");
        for (int i = 0; i < jSONArray.length(); i++) {
            this.a.add(new cr(this.a).a(jSONArray.getJSONObject(i)));
        }
        return this;
    }

    public String a() {
        return this.a;
    }

    public ArrayList<cr> a() {
        return this.a;
    }

    public synchronized JSONObject a() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        jSONObject.put("host", this.a);
        JSONArray jSONArray = new JSONArray();
        Iterator<cr> it = this.a.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next().a());
        }
        jSONObject.put("fbs", jSONArray);
        return jSONObject;
    }

    public synchronized void a(cr crVar) {
        int i = 0;
        while (true) {
            if (i >= this.a.size()) {
                break;
            }
            if (this.a.get(i).a(crVar)) {
                this.a.set(i, crVar);
                break;
            }
            i++;
        }
        if (i >= this.a.size()) {
            this.a.add(crVar);
        }
    }

    public synchronized void a(boolean z) {
        ArrayList<cr> arrayList;
        for (int size = this.a.size() - 1; size >= 0; size--) {
            cr crVar = this.a.get(size);
            if (z) {
                if (crVar.c()) {
                    arrayList = this.a;
                    arrayList.remove(size);
                }
            } else if (!crVar.b()) {
                arrayList = this.a;
                arrayList.remove(size);
            }
        }
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.a);
        sb.append("\n");
        Iterator<cr> it = this.a.iterator();
        while (it.hasNext()) {
            sb.append(it.next());
        }
        return sb.toString();
    }
}
