package com.huawei.hms.framework.network.grs.b;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.Logger;
import com.huawei.hms.framework.network.grs.GrsBaseInfo;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.regex.Pattern;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public abstract class a {
    protected com.huawei.hms.framework.network.grs.local.model.a a;
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
        return this.a;
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
    */
    public List<com.huawei.hms.framework.network.grs.local.model.b> a(JSONArray jSONArray) {
        HashSet hashSet;
        int i;
        if (jSONArray == null || jSONArray.length() == 0) {
            return new ArrayList();
        }
        try {
            ArrayList arrayList = new ArrayList(16);
            for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                JSONObject jSONObject = jSONArray.getJSONObject(i2);
                com.huawei.hms.framework.network.grs.local.model.b bVar = new com.huawei.hms.framework.network.grs.local.model.b();
                bVar.b(jSONObject.getString("id"));
                bVar.c(jSONObject.getString("name"));
                bVar.a(jSONObject.getString("description"));
                JSONArray jSONArray2 = null;
                String str = "countries";
                if (!jSONObject.has("countriesOrAreas")) {
                    if (!jSONObject.has("countries")) {
                        Logger.w("AbstractLocalManager", "current country or area group has not config countries or areas.");
                    }
                    hashSet = new HashSet(16);
                    if (jSONArray2 != null && jSONArray2.length() != 0) {
                        for (i = 0; i < jSONArray2.length(); i++) {
                            hashSet.add((String) jSONArray2.get(i));
                        }
                        bVar.a(hashSet);
                        arrayList.add(bVar);
                    }
                    return new ArrayList();
                }
                str = "countriesOrAreas";
                jSONArray2 = jSONObject.getJSONArray(str);
                hashSet = new HashSet(16);
                if (jSONArray2 != null) {
                    while (i < jSONArray2.length()) {
                    }
                    bVar.a(hashSet);
                    arrayList.add(bVar);
                }
                return new ArrayList();
            }
            return arrayList;
        } catch (JSONException e) {
            Logger.w("AbstractLocalManager", "parse countrygroup failed maybe json style is wrong.", e);
            return new ArrayList();
        }
    }

    public Map<String, String> a(Context context, com.huawei.hms.framework.network.grs.a.a aVar, GrsBaseInfo grsBaseInfo, String str, boolean z) {
        if (!this.d) {
            return null;
        }
        com.huawei.hms.framework.network.grs.local.model.a aVar2 = this.a;
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
    */
    protected void b(JSONArray jSONArray) {
        String string;
        if (jSONArray == null || jSONArray.length() == 0) {
            return;
        }
        for (int i = 0; i < jSONArray.length(); i++) {
            JSONObject jSONObject = jSONArray.getJSONObject(i);
            com.huawei.hms.framework.network.grs.local.model.c cVar = new com.huawei.hms.framework.network.grs.local.model.c();
            String string2 = jSONObject.getString("name");
            cVar.b(string2);
            if (!this.f.contains(string2)) {
                this.f.add(string2);
                if (this.e) {
                    cVar.c(jSONObject.getString("routeBy"));
                    JSONArray jSONArray2 = jSONObject.getJSONArray("servings");
                    for (int i2 = 0; i2 < jSONArray2.length(); i2++) {
                        JSONObject jSONObject2 = (JSONObject) jSONArray2.get(i2);
                        com.huawei.hms.framework.network.grs.local.model.d dVar = new com.huawei.hms.framework.network.grs.local.model.d();
                        String str = "countryOrAreaGroup";
                        if (jSONObject2.has("countryOrAreaGroup")) {
                            string = jSONObject2.getString(str);
                        } else {
                            str = "countryGroup";
                            if (!jSONObject2.has("countryGroup")) {
                                Logger.v("AbstractLocalManager", "maybe this service routeBy is unconditional.");
                                string = "no-country";
                            }
                        }
                        dVar.a(string);
                        JSONObject jSONObject3 = jSONObject2.getJSONObject("addresses");
                        HashMap map = new HashMap(16);
                        Iterator<String> itKeys = jSONObject3.keys();
                        while (itKeys.hasNext()) {
                            String next = itKeys.next();
                            map.put(next, jSONObject3.getString(next));
                        }
                        dVar.a(map);
                        cVar.a(dVar.b(), dVar);
                    }
                    List<com.huawei.hms.framework.network.grs.local.model.b> listA = null;
                    String str2 = "countryOrAreaGroups";
                    if (jSONObject.has("countryOrAreaGroups")) {
                        listA = a(jSONObject.getJSONArray(str2));
                        cVar.a(listA);
                        if (this.a == null) {
                            this.a = new com.huawei.hms.framework.network.grs.local.model.a();
                        }
                        this.a.a(string2, cVar);
                    } else {
                        str2 = "countryGroups";
                        if (!jSONObject.has("countryGroups")) {
                            Logger.i("AbstractLocalManager", "service use default countryOrAreaGroup");
                        }
                        cVar.a(listA);
                        if (this.a == null) {
                        }
                        this.a.a(string2, cVar);
                    }
                }
            }
        }
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
