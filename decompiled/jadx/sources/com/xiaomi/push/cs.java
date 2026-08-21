package com.xiaomi.push;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
class cs {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f8090a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final ArrayList<cr> f198a = new ArrayList<>();

    public cs() {
    }

    public cs(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("the host is empty");
        }
        this.f8090a = str;
    }

    public synchronized cr a() {
        for (int size = this.f198a.size() - 1; size >= 0; size--) {
            cr crVar = this.f198a.get(size);
            if (crVar.m200a()) {
                cv.a().m210a(crVar.a());
                return crVar;
            }
        }
        return null;
    }

    public synchronized cs a(JSONObject jSONObject) {
        this.f8090a = jSONObject.getString("host");
        JSONArray jSONArray = jSONObject.getJSONArray("fbs");
        for (int i = 0; i < jSONArray.length(); i++) {
            this.f198a.add(new cr(this.f8090a).a(jSONArray.getJSONObject(i)));
        }
        return this;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m201a() {
        return this.f8090a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public ArrayList<cr> m202a() {
        return this.f198a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized JSONObject m203a() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        jSONObject.put("host", this.f8090a);
        JSONArray jSONArray = new JSONArray();
        Iterator<cr> it = this.f198a.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next().m198a());
        }
        jSONObject.put("fbs", jSONArray);
        return jSONObject;
    }

    public synchronized void a(cr crVar) {
        int i = 0;
        while (true) {
            if (i >= this.f198a.size()) {
                break;
            }
            if (this.f198a.get(i).a(crVar)) {
                this.f198a.set(i, crVar);
                break;
            }
            i++;
        }
        if (i >= this.f198a.size()) {
            this.f198a.add(crVar);
        }
    }

    public synchronized void a(boolean z) {
        ArrayList<cr> arrayList;
        for (int size = this.f198a.size() - 1; size >= 0; size--) {
            cr crVar = this.f198a.get(size);
            if (z) {
                if (crVar.c()) {
                    arrayList = this.f198a;
                    arrayList.remove(size);
                }
            } else if (!crVar.b()) {
                arrayList = this.f198a;
                arrayList.remove(size);
            }
        }
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.f8090a);
        sb.append("\n");
        Iterator<cr> it = this.f198a.iterator();
        while (it.hasNext()) {
            sb.append(it.next());
        }
        return sb.toString();
    }
}
