package com.huawei.hms.framework.network.grs.b;

import android.content.Context;
import com.huawei.hms.framework.common.Logger;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class c extends a {
    public c(Context context, boolean z) {
        this.e = z;
        if (a("grs_sdk_global_route_config.json", context, false) == 0) {
            this.d = true;
        }
    }

    @Override
    public int a(String str) {
        this.a = new com.huawei.hms.framework.network.grs.local.model.a();
        try {
            JSONObject jSONObject = new JSONObject(str).getJSONObject("application");
            String string = jSONObject.getString("name");
            long j = jSONObject.getLong("cacheControl");
            JSONArray jSONArray = jSONObject.getJSONArray("services");
            this.a.b(string);
            this.a.a(j);
            if (jSONArray != null) {
                if (jSONArray.length() != 0) {
                    return 0;
                }
            }
            return -1;
        } catch (JSONException e) {
            Logger.w("LocalManagerV1", "parse appbean failed maybe json style is wrong.", e);
            return -1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x0073 A[Catch: JSONException -> 0x008d, LOOP:1: B:30:0x006d->B:32:0x0073, LOOP_END, TryCatch #0 {JSONException -> 0x008d, blocks: (B:7:0x000e, B:8:0x0019, B:10:0x001f, B:12:0x0033, B:14:0x003c, B:20:0x0054, B:24:0x005e, B:26:0x0065, B:30:0x006d, B:32:0x0073, B:33:0x007f, B:34:0x0086, B:18:0x004e, B:23:0x005b), top: B:42:0x000e }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public List<com.huawei.hms.framework.network.grs.local.model.b> a(JSONArray jSONArray, JSONObject jSONObject) {
        HashSet hashSet;
        int i;
        if (jSONObject == null || jSONObject.length() == 0) {
            return new ArrayList();
        }
        try {
            ArrayList arrayList = new ArrayList(16);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                com.huawei.hms.framework.network.grs.local.model.b bVar = new com.huawei.hms.framework.network.grs.local.model.b();
                bVar.b(next);
                JSONObject jSONObject2 = jSONObject.getJSONObject(next);
                bVar.c(jSONObject2.getString("name"));
                bVar.a(jSONObject2.getString("description"));
                JSONArray jSONArray2 = null;
                String str = "countries";
                if (!jSONObject2.has("countriesOrAreas")) {
                    if (!jSONObject2.has("countries")) {
                        Logger.w("LocalManagerV1", "current country or area group has not config countries or areas.");
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
                jSONArray2 = jSONObject2.getJSONArray(str);
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
            Logger.w("LocalManagerV1", "parse countryGroups failed maybe json style is wrong.", e);
            return new ArrayList();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x0099 A[Catch: JSONException -> 0x00b0, LOOP:1: B:41:0x0093->B:43:0x0099, LOOP_END, TryCatch #0 {JSONException -> 0x00b0, blocks: (B:3:0x0010, B:7:0x001f, B:13:0x002d, B:16:0x0034, B:18:0x003b, B:19:0x003f, B:21:0x0045, B:23:0x0059, B:25:0x0062, B:31:0x0079, B:35:0x0084, B:37:0x008b, B:41:0x0093, B:43:0x0099, B:44:0x00a5, B:29:0x0073, B:34:0x0080, B:10:0x0026), top: B:51:0x0010 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int b(String str) {
        JSONObject jSONObject;
        JSONArray jSONArray;
        HashSet hashSet;
        int i;
        String str2 = "countryOrAreaGroups";
        this.b = new ArrayList(16);
        try {
            JSONObject jSONObject2 = new JSONObject(str);
            if (jSONObject2.has("countryOrAreaGroups")) {
                jSONObject = jSONObject2.getJSONObject(str2);
            } else if (jSONObject2.has("countryGroups")) {
                str2 = "countryGroups";
                jSONObject = jSONObject2.getJSONObject(str2);
            } else {
                Logger.e("LocalManagerV1", "maybe local config json is wrong because the default countryOrAreaGroups isn't config.");
                jSONObject = null;
            }
            if (jSONObject == null) {
                return -1;
            }
            if (jSONObject.length() != 0) {
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    com.huawei.hms.framework.network.grs.local.model.b bVar = new com.huawei.hms.framework.network.grs.local.model.b();
                    bVar.b(next);
                    JSONObject jSONObject3 = jSONObject.getJSONObject(next);
                    bVar.c(jSONObject3.getString("name"));
                    bVar.a(jSONObject3.getString("description"));
                    String str3 = "countries";
                    if (!jSONObject3.has("countriesOrAreas")) {
                        if (!jSONObject3.has("countries")) {
                            Logger.w("LocalManagerV1", "current country or area group has not config countries or areas.");
                            jSONArray = null;
                        }
                        hashSet = new HashSet(16);
                        if (jSONArray != null && jSONArray.length() != 0) {
                            for (i = 0; i < jSONArray.length(); i++) {
                                hashSet.add((String) jSONArray.get(i));
                            }
                            bVar.a(hashSet);
                            this.b.add(bVar);
                        }
                        return -1;
                    }
                    str3 = "countriesOrAreas";
                    jSONArray = jSONObject3.getJSONArray(str3);
                    hashSet = new HashSet(16);
                    if (jSONArray != null) {
                        while (i < jSONArray.length()) {
                        }
                        bVar.a(hashSet);
                        this.b.add(bVar);
                    }
                    return -1;
                }
            }
            return 0;
        } catch (JSONException e) {
            Logger.w("LocalManagerV1", "parse countrygroup failed maybe json style is wrong.", e);
            return -1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x009b A[Catch: JSONException -> 0x0106, LOOP:2: B:33:0x0095->B:35:0x009b, LOOP_END, TryCatch #0 {JSONException -> 0x0106, blocks: (B:3:0x000a, B:5:0x0013, B:6:0x001b, B:8:0x0022, B:10:0x0038, B:12:0x0041, B:14:0x0047, B:16:0x0050, B:17:0x0054, B:19:0x005a, B:25:0x0075, B:30:0x0081, B:32:0x0086, B:33:0x0095, B:35:0x009b, B:36:0x00b3, B:23:0x006f, B:28:0x007c, B:37:0x00c8, B:39:0x00d3, B:43:0x00e2, B:47:0x00ec, B:49:0x00f3, B:50:0x00fa, B:40:0x00d8, B:42:0x00de, B:46:0x00e9), top: B:56:0x000a }] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00f3 A[Catch: JSONException -> 0x0106, TryCatch #0 {JSONException -> 0x0106, blocks: (B:3:0x000a, B:5:0x0013, B:6:0x001b, B:8:0x0022, B:10:0x0038, B:12:0x0041, B:14:0x0047, B:16:0x0050, B:17:0x0054, B:19:0x005a, B:25:0x0075, B:30:0x0081, B:32:0x0086, B:33:0x0095, B:35:0x009b, B:36:0x00b3, B:23:0x006f, B:28:0x007c, B:37:0x00c8, B:39:0x00d3, B:43:0x00e2, B:47:0x00ec, B:49:0x00f3, B:50:0x00fa, B:40:0x00d8, B:42:0x00de, B:46:0x00e9), top: B:56:0x000a }] */
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int e(String str) {
        JSONObject jSONObject;
        String string;
        Iterator<String> itKeys;
        String str2 = "countryOrAreaGroup";
        try {
            JSONObject jSONObject2 = new JSONObject(str).getJSONObject("services");
            Iterator<String> itKeys2 = jSONObject2.keys();
            while (true) {
                int i = 0;
                if (!itKeys2.hasNext()) {
                    return 0;
                }
                String next = itKeys2.next();
                com.huawei.hms.framework.network.grs.local.model.c cVar = new com.huawei.hms.framework.network.grs.local.model.c();
                cVar.b(next);
                if (!this.f.contains(next)) {
                    this.f.add(next);
                    if (this.e) {
                        JSONObject jSONObject3 = jSONObject2.getJSONObject(next);
                        cVar.c(jSONObject3.getString("routeBy"));
                        JSONArray jSONArray = jSONObject3.getJSONArray("servings");
                        while (i < jSONArray.length()) {
                            JSONObject jSONObject4 = (JSONObject) jSONArray.get(i);
                            com.huawei.hms.framework.network.grs.local.model.d dVar = new com.huawei.hms.framework.network.grs.local.model.d();
                            String str3 = "countryGroup";
                            if (jSONObject4.has(str2)) {
                                str3 = str2;
                            } else {
                                if (!jSONObject4.has("countryGroup")) {
                                    Logger.v("LocalManagerV1", "maybe this service routeBy is unconditional.");
                                    string = "no-country";
                                }
                                dVar.a(string);
                                JSONObject jSONObject5 = jSONObject4.getJSONObject("addresses");
                                HashMap map = new HashMap(16);
                                itKeys = jSONObject5.keys();
                                while (itKeys.hasNext()) {
                                    String str4 = str2;
                                    String next2 = itKeys.next();
                                    map.put(next2, jSONObject5.getString(next2));
                                    jSONObject2 = jSONObject2;
                                    str2 = str4;
                                }
                                dVar.a(map);
                                cVar.a(dVar.b(), dVar);
                                i++;
                                jSONObject2 = jSONObject2;
                                str2 = str2;
                            }
                            string = jSONObject4.getString(str3);
                            dVar.a(string);
                            JSONObject jSONObject52 = jSONObject4.getJSONObject("addresses");
                            HashMap map2 = new HashMap(16);
                            itKeys = jSONObject52.keys();
                            while (itKeys.hasNext()) {
                            }
                            dVar.a(map2);
                            cVar.a(dVar.b(), dVar);
                            i++;
                            jSONObject2 = jSONObject2;
                            str2 = str2;
                        }
                        String str5 = str2;
                        JSONObject jSONObject6 = jSONObject2;
                        List<com.huawei.hms.framework.network.grs.local.model.b> listA = null;
                        if (jSONObject3.has("countryOrAreaGroups")) {
                            jSONObject = jSONObject3.getJSONObject("countryOrAreaGroups");
                        } else if (jSONObject3.has("countryGroups")) {
                            jSONObject = jSONObject3.getJSONObject("countryGroups");
                        } else {
                            Logger.v("LocalManagerV1", "service use default countryOrAreaGroup");
                            cVar.a(listA);
                            if (this.a == null) {
                                this.a = new com.huawei.hms.framework.network.grs.local.model.a();
                            }
                            this.a.a(next, cVar);
                            jSONObject2 = jSONObject6;
                            str2 = str5;
                        }
                        listA = a((JSONArray) null, jSONObject);
                        cVar.a(listA);
                        if (this.a == null) {
                        }
                        this.a.a(next, cVar);
                        jSONObject2 = jSONObject6;
                        str2 = str5;
                    }
                }
            }
        } catch (JSONException e) {
            Logger.w("LocalManagerV1", "parse 1.0 services failed maybe because of json style.please check!", e);
            return -1;
        }
    }
}
