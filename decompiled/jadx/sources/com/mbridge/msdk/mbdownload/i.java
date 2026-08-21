package com.mbridge.msdk.mbdownload;

import android.content.Context;
import android.content.SharedPreferences;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: NotificationRuntimeCache.java */
/* JADX INFO: loaded from: classes2.dex */
public class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3677a = i.class.getName();
    private final Context b;
    private final boolean c = com.mbridge.msdk.foundation.controller.b.a().d();
    private FastKV d;

    public i(Context context) {
        this.b = context;
    }

    public final void a(int i) {
        if (this.c && this.d == null) {
            try {
                this.d = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "MB_RUNTIME_CACHE").build();
            } catch (Exception unused) {
                this.d = null;
            }
        }
        FastKV fastKV = this.d;
        if (fastKV != null) {
            try {
                fastKV.putString("" + i, "");
                return;
            } catch (Exception e) {
                z.c(f3677a, "addNid error", e);
                return;
            }
        }
        try {
            SharedPreferences sharedPreferences = this.b.getSharedPreferences("MB_RUNTIME_CACHE", 0);
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            synchronized (sharedPreferences) {
                editorEdit.putString("" + i, "");
                editorEdit.apply();
            }
            z.b(f3677a, "add nid [" + i + "] to runtime cache.");
        } catch (Exception unused2) {
        }
    }

    public final List<Integer> a() {
        ArrayList arrayList = new ArrayList();
        Map<String, Object> all = null;
        if (this.c && this.d == null) {
            try {
                this.d = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "MB_RUNTIME_CACHE").build();
            } catch (Exception unused) {
                this.d = null;
            }
        }
        FastKV fastKV = this.d;
        if (fastKV != null) {
            try {
                all = fastKV.getAll();
            } catch (Exception unused2) {
            }
            if (all != null) {
                Iterator<String> it = all.keySet().iterator();
                while (it.hasNext()) {
                    try {
                        int i = Integer.parseInt(it.next());
                        arrayList.add(Integer.valueOf(i));
                        z.b(f3677a, "get nid [" + i + "]");
                    } catch (NumberFormatException unused3) {
                    }
                }
            }
            this.d.clear();
        } else {
            try {
                SharedPreferences sharedPreferences = this.b.getSharedPreferences("MB_RUNTIME_CACHE", 0);
                Iterator<String> it2 = sharedPreferences.getAll().keySet().iterator();
                while (it2.hasNext()) {
                    try {
                        int i2 = Integer.parseInt(it2.next());
                        arrayList.add(Integer.valueOf(i2));
                        z.b(f3677a, "get nid [" + i2 + "]");
                    } catch (NumberFormatException unused4) {
                    }
                }
                sharedPreferences.edit().clear().apply();
            } catch (Exception unused5) {
            }
        }
        return arrayList;
    }

    public final boolean b() {
        if (this.c && this.d == null) {
            try {
                this.d = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "MB_RUNTIME_CACHE").build();
            } catch (Exception unused) {
                this.d = null;
            }
        }
        FastKV fastKV = this.d;
        if (fastKV == null) {
            return this.b.getSharedPreferences("MB_RUNTIME_CACHE", 0).getAll().size() > 0;
        }
        try {
            return fastKV.getAll().size() > 0;
        } catch (Exception unused2) {
            return false;
        }
    }

    public final void b(int i) {
        try {
            SharedPreferences sharedPreferences = this.b.getSharedPreferences("MB_RUNTIME_CACHE", 0);
            if (sharedPreferences.contains("" + i)) {
                SharedPreferences.Editor editorEdit = sharedPreferences.edit();
                editorEdit.remove("" + i);
                editorEdit.apply();
            }
            z.b(f3677a, "remove nid [" + i + "] to runtime cache.");
        } catch (Exception unused) {
        }
    }
}
