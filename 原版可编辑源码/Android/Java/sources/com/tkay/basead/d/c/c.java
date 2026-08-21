package com.tkay.basead.d.c;

import android.content.Context;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.aa;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.j;
import com.tkay.core.common.l.p;
import java.util.ArrayList;
import java.util.Collection;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;

public class c {
    private static volatile c b;
    ConcurrentHashMap<String, ArrayList<String>> a = new ConcurrentHashMap<>();

    private c() {
    }

    public static c a() {
        if (b == null) {
            synchronized (c.class) {
                if (b == null) {
                    b = new c();
                }
            }
        }
        return b;
    }

    public final synchronized void a(Context context, String str, h hVar, j jVar) {
        if (hVar.d() == 3 && (jVar instanceof aa)) {
            if (((aa) jVar).X() <= 0) {
                return;
            }
            aa aaVar = (aa) jVar;
            ArrayList<String> arrayList = this.a.get(str);
            if (arrayList == null) {
                arrayList = new ArrayList<>();
                try {
                    JSONArray jSONArray = new JSONArray(p.b(context, f.z, str, ""));
                    if (jSONArray.length() > 0) {
                        for (int i = 0; i < jSONArray.length(); i++) {
                            arrayList.add(jSONArray.optString(i));
                        }
                    }
                } catch (Exception unused) {
                }
                this.a.put(str, arrayList);
            }
            if (arrayList.size() >= aaVar.X()) {
                arrayList.remove(arrayList.size() - 1);
            }
            arrayList.add(0, hVar.p());
            p.a(context, f.z, str, new JSONArray((Collection<Object>) arrayList).toString());
        }
    }

    public final String[] a(Context context, String str) {
        ArrayList<String> arrayList = this.a.get(str);
        if (arrayList == null) {
            try {
                JSONArray jSONArray = new JSONArray(p.b(context, f.z, str, ""));
                if (jSONArray.length() > 0) {
                    ArrayList<String> arrayList2 = new ArrayList<>();
                    for (int i = 0; i < jSONArray.length(); i++) {
                        try {
                            arrayList2.add(jSONArray.optString(i));
                        } catch (Exception unused) {
                        }
                    }
                    arrayList = arrayList2;
                }
            } catch (Exception unused2) {
            }
        }
        if (arrayList == null) {
            return null;
        }
        this.a.put(str, arrayList);
        String[] strArr = new String[arrayList.size()];
        arrayList.toArray(strArr);
        return strArr;
    }

    public static String a(String str, String str2) {
        return str + str2;
    }
}
