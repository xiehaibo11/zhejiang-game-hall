package com.huawei.hms.framework.network.grs.b;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.Logger;
import com.huawei.hms.framework.network.grs.GrsBaseInfo;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.regex.Pattern;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public abstract class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected com.huawei.hms.framework.network.grs.local.model.a f2056a;
    protected List<com.huawei.hms.framework.network.grs.local.model.b> b;
    protected Map<String, String> c = new ConcurrentHashMap(16);
    protected boolean d = false;
    protected boolean e = false;
    protected Set<String> f = new HashSet(16);

    private int a(Context context) {
        int i = -1;
        try {
            String[] list = context.getAssets().list("");
            if (list != null && list.length > 0) {
                for (String str : list) {
                    if (Pattern.matches("^grs_sdk_global_route_config_[a-zA-Z]+\\.json$", str) && g(com.huawei.hms.framework.network.grs.d.c.a(str, context)) == 0) {
                        Logger.i("AbstractLocalManager", "load SDK_CONFIG_FILE sucess.");
                        i = 0;
                    }
                }
            }
        } catch (IOException unused) {
            Logger.w("AbstractLocalManager", "list assets files fail,please check if according to our standard config json files.");
        }
        return i;
    }

    private int a(String str, Context context) {
        if (f(com.huawei.hms.framework.network.grs.d.c.a(str, context)) != 0) {
            return -1;
        }
        Logger.i("AbstractLocalManager", "load APP_CONFIG_FILE success.");
        return 0;
    }

    private Map<String, String> a(List<com.huawei.hms.framework.network.grs.local.model.b> list, GrsBaseInfo grsBaseInfo, String str) {
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap(16);
        concurrentHashMap.put("no_route_country", "no-country");
        for (com.huawei.hms.framework.network.grs.local.model.b bVar : list) {
            if (bVar.a().contains(grsBaseInfo.getIssueCountry())) {
                concurrentHashMap.put(grsBaseInfo.getIssueCountry(), bVar.b());
            }
            if (bVar.a().contains(grsBaseInfo.getRegCountry())) {
                concurrentHashMap.put(grsBaseInfo.getRegCountry(), bVar.b());
            }
            if (bVar.a().contains(grsBaseInfo.getSerCountry())) {
                concurrentHashMap.put(grsBaseInfo.getSerCountry(), bVar.b());
            }
            if (bVar.a().contains(str)) {
                Logger.v("AbstractLocalManager", "get countryGroupID from geoIp");
                concurrentHashMap.put(str, bVar.b());
            }
        }
        return concurrentHashMap;
    }

    private int f(String str) {
        int iB;
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        if (this.e && (iB = b(str)) != 0) {
            return iB;
        }
        int iA = a(str);
        return iA != 0 ? iA : e(str);
    }

    private int g(String str) {
        List<com.huawei.hms.framework.network.grs.local.model.b> list;
        int iC;
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        return (!this.e || !((list = this.b) == null || list.isEmpty()) || (iC = c(str)) == 0) ? d(str) : iC;
    }

    public abstract int a(String str);

    int a(String str, Context context, boolean z) {
        if (a(str, context) != 0 && z) {
            return -1;
        }
        a(context);
        return 0;
    }

    public com.huawei.hms.framework.network.grs.local.model.a a() {
        return this.f2056a;
    }

    public String a(Context context, com.huawei.hms.framework.network.grs.a.a aVar, GrsBaseInfo grsBaseInfo, String str, String str2, boolean z) {
        Map<String, String> mapA = a(context, aVar, grsBaseInfo, str, z);
        if (mapA != null) {
            return mapA.get(str2);
        }
        Logger.w("AbstractLocalManager", "addresses not found by routeby in local config{%s}", str);
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x0071 A[Catch: JSONException -> 0x008d, LOOP:1: B:32:0x006b->B:34:0x0071, LOOP_END, TryCatch #0 {JSONException -> 0x008d, blocks: (B:7:0x000e, B:8:0x0017, B:10:0x001d, B:12:0x0028, B:14:0x0031, B:16:0x003a, B:22:0x0052, B:26:0x005c, B:28:0x0063, B:32:0x006b, B:34:0x0071, B:35:0x007d, B:36:0x0086, B:20:0x004c, B:25:0x0059), top: B:44:0x000e }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.util.List<com.huawei.hms.framework.network.grs.local.model.b> a(org.json.JSONArray r12) {
        /*
            r11 = this;
            java.lang.String r0 = "countriesOrAreas"
            java.lang.String r1 = "AbstractLocalManager"
            if (r12 == 0) goto L99
            int r2 = r12.length()
            if (r2 != 0) goto Le
            goto L99
        Le:
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: org.json.JSONException -> L8d
            r3 = 16
            r2.<init>(r3)     // Catch: org.json.JSONException -> L8d
            r4 = 0
            r5 = r4
        L17:
            int r6 = r12.length()     // Catch: org.json.JSONException -> L8d
            if (r5 >= r6) goto L8c
            org.json.JSONObject r6 = r12.getJSONObject(r5)     // Catch: org.json.JSONException -> L8d
            com.huawei.hms.framework.network.grs.local.model.b r7 = new com.huawei.hms.framework.network.grs.local.model.b     // Catch: org.json.JSONException -> L8d
            r7.<init>()     // Catch: org.json.JSONException -> L8d
            java.lang.String r8 = "id"
            java.lang.String r8 = r6.getString(r8)     // Catch: org.json.JSONException -> L8d
            r7.b(r8)     // Catch: org.json.JSONException -> L8d
            java.lang.String r8 = "name"
            java.lang.String r8 = r6.getString(r8)     // Catch: org.json.JSONException -> L8d
            r7.c(r8)     // Catch: org.json.JSONException -> L8d
            java.lang.String r8 = "description"
            java.lang.String r8 = r6.getString(r8)     // Catch: org.json.JSONException -> L8d
            r7.a(r8)     // Catch: org.json.JSONException -> L8d
            r8 = 0
            boolean r9 = r6.has(r0)     // Catch: org.json.JSONException -> L8d
            java.lang.String r10 = "countries"
            if (r9 == 0) goto L4c
            r10 = r0
            goto L52
        L4c:
            boolean r9 = r6.has(r10)     // Catch: org.json.JSONException -> L8d
            if (r9 == 0) goto L57
        L52:
            org.json.JSONArray r8 = r6.getJSONArray(r10)     // Catch: org.json.JSONException -> L8d
            goto L5c
        L57:
            java.lang.String r6 = "current country or area group has not config countries or areas."
            com.huawei.hms.framework.common.Logger.w(r1, r6)     // Catch: org.json.JSONException -> L8d
        L5c:
            java.util.HashSet r6 = new java.util.HashSet     // Catch: org.json.JSONException -> L8d
            r6.<init>(r3)     // Catch: org.json.JSONException -> L8d
            if (r8 == 0) goto L86
            int r9 = r8.length()     // Catch: org.json.JSONException -> L8d
            if (r9 != 0) goto L6a
            goto L86
        L6a:
            r9 = r4
        L6b:
            int r10 = r8.length()     // Catch: org.json.JSONException -> L8d
            if (r9 >= r10) goto L7d
            java.lang.Object r10 = r8.get(r9)     // Catch: org.json.JSONException -> L8d
            java.lang.String r10 = (java.lang.String) r10     // Catch: org.json.JSONException -> L8d
            r6.add(r10)     // Catch: org.json.JSONException -> L8d
            int r9 = r9 + 1
            goto L6b
        L7d:
            r7.a(r6)     // Catch: org.json.JSONException -> L8d
            r2.add(r7)     // Catch: org.json.JSONException -> L8d
            int r5 = r5 + 1
            goto L17
        L86:
            java.util.ArrayList r12 = new java.util.ArrayList     // Catch: org.json.JSONException -> L8d
            r12.<init>()     // Catch: org.json.JSONException -> L8d
            return r12
        L8c:
            return r2
        L8d:
            r12 = move-exception
            java.lang.String r0 = "parse countrygroup failed maybe json style is wrong."
            com.huawei.hms.framework.common.Logger.w(r1, r0, r12)
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>()
            return r12
        L99:
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>()
            return r12
        */
        throw new UnsupportedOperationException("Method not decompiled: com.huawei.hms.framework.network.grs.b.a.a(org.json.JSONArray):java.util.List");
    }

    public Map<String, String> a(Context context, com.huawei.hms.framework.network.grs.a.a aVar, GrsBaseInfo grsBaseInfo, String str, boolean z) {
        if (!this.d) {
            return null;
        }
        com.huawei.hms.framework.network.grs.local.model.a aVar2 = this.f2056a;
        if (aVar2 == null) {
            Logger.w("AbstractLocalManager", "application data is null.");
            return null;
        }
        com.huawei.hms.framework.network.grs.local.model.c cVarA = aVar2.a(str);
        if (cVarA == null) {
            Logger.w("AbstractLocalManager", "service not found in local config{%s}", str);
            return null;
        }
        String strA = f.a(context, aVar, cVarA.b(), grsBaseInfo, z);
        if (strA == null) {
            Logger.w("AbstractLocalManager", "country not found by routeby in local config{%s}", cVarA.b());
            return null;
        }
        List<com.huawei.hms.framework.network.grs.local.model.b> listA = cVarA.a();
        com.huawei.hms.framework.network.grs.local.model.d dVarA = cVarA.a(((listA == null || listA.size() == 0) ? this.c : a(listA, grsBaseInfo, strA)).get(strA));
        if (dVarA == null) {
            return null;
        }
        return dVarA.a();
    }

    public void a(GrsBaseInfo grsBaseInfo) {
        this.c.put("no_route_country", "no-country");
        List<com.huawei.hms.framework.network.grs.local.model.b> list = this.b;
        if (list == null || list.isEmpty()) {
            return;
        }
        for (com.huawei.hms.framework.network.grs.local.model.b bVar : this.b) {
            if (bVar.a().contains(grsBaseInfo.getIssueCountry())) {
                this.c.put(grsBaseInfo.getIssueCountry(), bVar.b());
            }
            if (bVar.a().contains(grsBaseInfo.getRegCountry())) {
                this.c.put(grsBaseInfo.getRegCountry(), bVar.b());
            }
            if (bVar.a().contains(grsBaseInfo.getSerCountry())) {
                this.c.put(grsBaseInfo.getSerCountry(), bVar.b());
            }
        }
        this.b = null;
    }

    public abstract int b(String str);

    public Set<String> b() {
        return this.f;
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0060 A[PHI: r10
      0x0060: PHI (r10v5 java.lang.String) = (r10v0 java.lang.String), (r10v1 java.lang.String) binds: [B:17:0x005e, B:20:0x006b] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00b3 A[PHI: r6
      0x00b3: PHI (r6v4 java.lang.String) = (r6v2 java.lang.String), (r6v3 java.lang.String) binds: [B:29:0x00b1, B:32:0x00c2] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00d1  */
    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected void b(org.json.JSONArray r14) {
        /*
            Method dump skipped, instruction units count: 226
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.huawei.hms.framework.network.grs.b.a.b(org.json.JSONArray):void");
    }

    public int c(String str) {
        String str2 = "countryOrAreaGroups";
        this.b = new ArrayList(16);
        try {
            JSONObject jSONObject = new JSONObject(str);
            JSONArray jSONArray = null;
            if (jSONObject.has("countryOrAreaGroups")) {
                jSONArray = jSONObject.getJSONArray(str2);
            } else if (jSONObject.has("countryGroups")) {
                str2 = "countryGroups";
                jSONArray = jSONObject.getJSONArray(str2);
            } else {
                Logger.e("AbstractLocalManager", "maybe local config json is wrong because the default countryOrAreaGroups isn't config.");
            }
            if (jSONArray == null) {
                return -1;
            }
            this.b.addAll(a(jSONArray));
            return 0;
        } catch (JSONException e) {
            Logger.w("AbstractLocalManager", "parse countrygroup failed maybe json style is wrong.", e);
            return -1;
        }
    }

    public boolean c() {
        return this.d;
    }

    public int d(String str) {
        try {
            b(new JSONObject(str).getJSONArray("services"));
            return 0;
        } catch (JSONException e) {
            Logger.w("AbstractLocalManager", "parse 2.0 services failed maybe because of json style.please check!", e);
            return -1;
        }
    }

    public abstract int e(String str);
}
