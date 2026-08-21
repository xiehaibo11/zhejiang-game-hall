package com.kuaishou.weapon.p0;

import java.util.HashSet;
import java.util.Set;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class z {
    private Set<String> e = new HashSet();
    private Set<String> f = new HashSet();
    private Set<String> g = new HashSet();
    private Set<String> h = new HashSet();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2811a = i.a("f118f1f9431de3a626df48d7302911", "0820");
    private String b = i.a("f118f1ef4616f3fc27d1", "0820");
    private String c = i.a("f118f1e84f0bf5ba3bd1579c6d35", "0820");
    private String d = i.a("fc03e7a44510", "0820");

    public int a() {
        try {
            if (this.f == null || this.f.size() <= 0) {
                return 0;
            }
            return this.f.size();
        } catch (Exception unused) {
            return 0;
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(8:0|2|(2:136|3)|(3:138|4|(3:128|6|7)(4:8|(2:9|(1:140)(4:11|(1:23)(1:22)|(1:179)(5:145|33|(1:105)(4:40|(1:46)|47|(1:183)(5:154|59|(1:61)(1:62)|63|(1:189)(3:160|75|(1:104)(3:80|(3:173|89|(3:168|93|(1:172)(2:101|192))(1:191))|102))))|103|190)|174))|106|(4:108|130|109|110)))|134|111|122|(1:(0))) */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public org.json.JSONArray a(android.content.Context r9) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 492
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kuaishou.weapon.p0.z.a(android.content.Context):org.json.JSONArray");
    }

    public Set<String> b() {
        try {
            if (this.g == null || this.g.size() <= 0) {
                return null;
            }
            return this.g;
        } catch (Exception unused) {
            return null;
        }
    }

    public Set<String> c() {
        try {
            if (this.h == null || this.h.size() <= 0) {
                return null;
            }
            return this.h;
        } catch (Exception unused) {
            return null;
        }
    }

    public JSONObject d() {
        String str;
        try {
            if (this.e == null || this.e.size() <= 0) {
                return null;
            }
            JSONObject jSONObject = new JSONObject();
            for (String str2 : this.e) {
                if (str2.contains(this.f2811a)) {
                    str = "0";
                } else if (str2.contains(this.b)) {
                    str = "1";
                } else if (str2.contains(this.c)) {
                    str = "2";
                }
                jSONObject.put(str, 1);
            }
            if (jSONObject.length() > 0) {
                return jSONObject;
            }
            return null;
        } catch (Exception unused) {
            return null;
        }
    }

    public Set e() {
        try {
            HashSet hashSet = new HashSet();
            if (this.e == null || this.e.size() <= 0) {
                return null;
            }
            for (String str : this.e) {
                if (str.endsWith("dex")) {
                    hashSet.add(str);
                }
                if (hashSet.size() > 5) {
                    break;
                }
            }
            if (hashSet.size() > 0) {
                return hashSet;
            }
            return null;
        } catch (Exception unused) {
            return null;
        }
    }
}
