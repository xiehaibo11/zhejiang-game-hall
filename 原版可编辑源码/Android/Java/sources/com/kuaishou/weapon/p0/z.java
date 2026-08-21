package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Collection;
import java.util.HashSet;
import java.util.Set;
import org.json.JSONArray;
import org.json.JSONObject;

public class z {
    private Set<String> e = new HashSet();
    private Set<String> f = new HashSet();
    private Set<String> g = new HashSet();
    private Set<String> h = new HashSet();
    private String a = i.a("f118f1f9431de3a626df48d7302911", "0820");
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
    */
    public JSONArray a(Context context) throws Throwable {
        BufferedReader bufferedReader;
        int iIndexOf;
        Set<String> set;
        BufferedReader bufferedReader2 = null;
        try {
            bufferedReader = new BufferedReader(new FileReader("/proc/self/maps"));
        } catch (Exception unused) {
            bufferedReader = null;
        } catch (Throwable th) {
            th = th;
        }
        try {
            HashSet hashSet = new HashSet();
            HashSet hashSet2 = new HashSet();
            hashSet2.add("/system/fr");
            hashSet2.add("/system/em");
            hashSet2.add("/apex/com.");
            hashSet2.add("/data/dalv");
            hashSet2.add("/system/li");
            hashSet2.add("/vendor/li");
            hashSet2.add("/system/ve");
            String packageName = context.getPackageName();
            if (TextUtils.isEmpty(packageName)) {
                try {
                    bufferedReader.close();
                } catch (IOException unused2) {
                }
                return null;
            }
            this.e.clear();
            this.f.clear();
            this.g.clear();
            this.h.clear();
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                if ((line.endsWith(com.tkay.china.common.a.a.g) || line.endsWith(".jar") || line.endsWith(".dex") || line.endsWith(".odex") || line.endsWith(".so")) && !line.contains("gson.jar") && !line.contains("volley.jar") && !line.contains("FwkPlugin") && (iIndexOf = line.indexOf(47)) >= 0) {
                    String strSubstring = line.substring(iIndexOf);
                    if (strSubstring.contains(this.a) || strSubstring.contains(this.b) || strSubstring.contains(this.c)) {
                        set = this.e;
                    } else {
                        if (strSubstring.contains(this.d) && !strSubstring.contains("libart.so") && !strSubstring.contains("libart64.so")) {
                            this.h.add(strSubstring);
                        }
                        if (!strSubstring.contains("es/.0/") && !strSubstring.contains("app_DvaPlugin") && !strSubstring.contains("/system_ext/") && (!strSubstring.contains(packageName) || strSubstring.contains("odex_cache") || strSubstring.contains("app_"))) {
                            String strSubstring2 = strSubstring.length() > 10 ? strSubstring.substring(0, 10) : strSubstring;
                            if (!strSubstring.contains("FeatureFramework") && !strSubstring.contains("GmsConfigOverlay") && !strSubstring.contains("/system/app/") && !strSubstring.contains("/system/vendor/lib/") && !strSubstring.contains("/hw_") && !strSubstring.contains("/system/product/lib")) {
                                if (strSubstring.contains("mokee-") || strSubstring.contains("mokee.")) {
                                    set = this.f;
                                } else {
                                    if (!strSubstring.contains("lineageos-") && !strSubstring.contains("lineageos.") && !strSubstring.contains("Hook") && !strSubstring.contains("hook")) {
                                        if (strSubstring.contains("posedBridge") || !hashSet2.contains(strSubstring2)) {
                                            hashSet.add(strSubstring);
                                            if (hashSet.size() > 15 || this.e.size() > 10 || this.f.size() > 10 || this.g.size() > 10) {
                                                break;
                                            }
                                        }
                                    }
                                    set = this.g;
                                }
                            }
                        }
                    }
                    set.add(strSubstring);
                }
            }
            if (hashSet.size() > 0) {
                JSONArray jSONArray = new JSONArray((Collection<Object>) hashSet);
                try {
                    bufferedReader.close();
                } catch (IOException unused3) {
                }
                return jSONArray;
            }
        } catch (Exception unused4) {
            if (bufferedReader != null) {
            }
            return null;
        } catch (Throwable th2) {
            th = th2;
            bufferedReader2 = bufferedReader;
            if (bufferedReader2 != null) {
                try {
                    bufferedReader2.close();
                } catch (IOException unused5) {
                }
            }
            throw th;
        }
        bufferedReader.close();
        return null;
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
                if (str2.contains(this.a)) {
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
