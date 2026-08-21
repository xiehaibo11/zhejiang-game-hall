package com.kwad.sdk.core.config;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.kwad.sdk.utils.bb;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArraySet;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    public static final Map<String, Set<com.kwad.sdk.core.config.item.b>> akk = new ConcurrentHashMap();
    private static SharedPreferences akl = null;

    static void a(Context context, com.kwad.sdk.core.config.item.b<?> bVar) {
        SharedPreferences sharedPreferencesYW;
        if (bVar == null || (sharedPreferencesYW = yW()) == null) {
            return;
        }
        try {
            bVar.a(sharedPreferencesYW);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    private static void a(SharedPreferences.Editor editor) {
        if (editor != null) {
            Iterator<String> it = akk.keySet().iterator();
            while (it.hasNext()) {
                Set<com.kwad.sdk.core.config.item.b> set = akk.get(it.next());
                if (set != null && !set.isEmpty()) {
                    for (com.kwad.sdk.core.config.item.b bVar : set) {
                        if (bVar != null) {
                            bVar.b(editor);
                        }
                    }
                }
            }
        }
    }

    private static void a(SharedPreferences sharedPreferences) {
        if (sharedPreferences != null) {
            Iterator<String> it = akk.keySet().iterator();
            while (it.hasNext()) {
                Set<com.kwad.sdk.core.config.item.b> set = akk.get(it.next());
                if (set != null && !set.isEmpty()) {
                    for (com.kwad.sdk.core.config.item.b bVar : set) {
                        if (bVar != null) {
                            try {
                                bVar.a(sharedPreferences);
                            } catch (Exception e) {
                                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                            }
                        }
                    }
                }
            }
        }
    }

    public static <T> void a(com.kwad.sdk.core.config.item.b<T> bVar) {
        String key = bVar.getKey();
        if (TextUtils.isEmpty(key)) {
            return;
        }
        Set<com.kwad.sdk.core.config.item.b> setCv = cv(key);
        if (setCv == null) {
            setCv = new CopyOnWriteArraySet<>();
            akk.put(key, setCv);
        }
        setCv.add(bVar);
    }

    public static synchronized boolean aO(Context context) {
        SharedPreferences sharedPreferencesYW = yW();
        if (sharedPreferencesYW == null) {
            return false;
        }
        SharedPreferences.Editor editorEdit = sharedPreferencesYW.edit();
        a(editorEdit);
        return editorEdit.commit();
    }

    public static synchronized void aP(Context context) {
        SharedPreferences sharedPreferencesYW = yW();
        if (sharedPreferencesYW != null) {
            a(sharedPreferencesYW);
        }
    }

    private static Set<com.kwad.sdk.core.config.item.b> cv(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return akk.get(str);
    }

    public static void f(JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        for (String str : akk.keySet()) {
            Set<com.kwad.sdk.core.config.item.b> set = akk.get(str);
            if (set != null && !set.isEmpty() && jSONObject.has(str)) {
                for (com.kwad.sdk.core.config.item.b bVar : set) {
                    if (bVar != null) {
                        bVar.g(jSONObject);
                    }
                }
            }
        }
    }

    private static SharedPreferences yW() {
        if (akl == null) {
            akl = bb.fH("ksadsdk_config");
        }
        return akl;
    }
}
