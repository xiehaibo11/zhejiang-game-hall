package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class l {
    private static l b;
    private Context a;
    private SharedPreferences c;
    private boolean d;
    private FastKV e = null;

    public static l a(Context context) {
        if (b == null) {
            synchronized (l.class) {
                if (b == null) {
                    b = new l(context);
                }
            }
        }
        return b;
    }

    private l(Context context) {
        this.d = false;
        this.a = context;
        this.d = com.mbridge.msdk.foundation.controller.b.a().d();
    }

    public final CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> a(String str) {
        CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> copyOnWriteArraySet = new CopyOnWriteArraySet<>();
        String string = null;
        if (this.d && this.e == null) {
            try {
                this.e = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.m), "installed").build();
            } catch (Exception unused) {
                this.e = null;
            }
        }
        FastKV fastKV = this.e;
        int i = 0;
        if (fastKV != null) {
            try {
                try {
                    string = fastKV.getString(str + "_installed", "");
                } catch (Exception unused2) {
                }
                if (!TextUtils.isEmpty(string)) {
                    JSONArray jSONArray = new JSONArray(string);
                    while (i < jSONArray.length()) {
                        com.mbridge.msdk.foundation.entity.i iVar = new com.mbridge.msdk.foundation.entity.i();
                        JSONObject jSONObject = jSONArray.getJSONObject(i);
                        iVar.a(jSONObject.optString("campaignId"));
                        iVar.b(jSONObject.optString(DBDefinition.PACKAGE_NAME));
                        copyOnWriteArraySet.add(iVar);
                        i++;
                    }
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        } else {
            Context context = this.a;
            if (context != null) {
                try {
                    SharedPreferences sharedPreferences = context.getSharedPreferences("installed", 0);
                    this.c = sharedPreferences;
                    if (sharedPreferences != null) {
                        String string2 = sharedPreferences.getString(str + "_installed", "");
                        if (!TextUtils.isEmpty(string2)) {
                            JSONArray jSONArray2 = new JSONArray(string2);
                            while (i < jSONArray2.length()) {
                                com.mbridge.msdk.foundation.entity.i iVar2 = new com.mbridge.msdk.foundation.entity.i();
                                JSONObject jSONObject2 = jSONArray2.getJSONObject(i);
                                iVar2.a(jSONObject2.optString("campaignId"));
                                iVar2.b(jSONObject2.optString(DBDefinition.PACKAGE_NAME));
                                copyOnWriteArraySet.add(iVar2);
                                i++;
                            }
                        }
                    }
                } catch (JSONException e2) {
                    e2.printStackTrace();
                }
            }
        }
        return copyOnWriteArraySet;
    }

    public final void a(Set<com.mbridge.msdk.foundation.entity.i> set) {
        SharedPreferences.Editor editorEdit;
        if (set == null || set.size() < 0) {
            return;
        }
        if (this.d && this.e == null) {
            try {
                this.e = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.m), "installed").build();
            } catch (Exception unused) {
                this.e = null;
            }
        }
        if (this.e != null) {
            try {
                String strA = com.mbridge.msdk.foundation.entity.i.a(set);
                try {
                    this.e.putString(com.mbridge.msdk.foundation.controller.a.f().k() + "_installed", strA);
                    return;
                } catch (Exception unused2) {
                    return;
                }
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        try {
            String strA2 = com.mbridge.msdk.foundation.entity.i.a(set);
            if (this.a != null) {
                SharedPreferences sharedPreferences = this.a.getSharedPreferences("installed", 0);
                this.c = sharedPreferences;
                if (sharedPreferences == null || (editorEdit = sharedPreferences.edit()) == null) {
                    return;
                }
                editorEdit.putString(com.mbridge.msdk.foundation.controller.a.f().k() + "_installed", strA2);
                editorEdit.apply();
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }
}
