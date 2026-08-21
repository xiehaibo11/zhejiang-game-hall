package com.kwad.sdk.utils;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.i;
import com.kwad.sdk.service.ServiceProvider;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes2.dex */
public final class x {
    private static volatile boolean aIG;
    private static AtomicInteger aIF = new AtomicInteger(0);
    private static volatile boolean aGN = false;

    private static int Ig() {
        com.kwad.sdk.service.a.f fVar = (com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class);
        if (fVar == null) {
            com.kwad.sdk.core.e.c.w("Ks_UnionHelper", "sdkConfigProvider == null");
            return 0;
        }
        int iXH = fVar.xH();
        com.kwad.sdk.core.e.c.d("Ks_UnionHelper", "config mode:" + iXH);
        return iXH;
    }

    private static void Ih() {
        if (aGN) {
            return;
        }
        aIF.set(Ik());
        aIG = bb.m("kssdk_kv_mode", "downgrade", false);
        aGN = true;
    }

    public static void Ii() {
        if (Il() || Ig() == 0) {
            return;
        }
        g.execute(new Runnable() { // from class: com.kwad.sdk.utils.x.3
            @Override // java.lang.Runnable
            public final void run() {
                com.kwad.sdk.utils.b.a aVarIj = x.Ij();
                if (aVarIj == null) {
                    return;
                }
                x.c(aVarIj);
                com.kwad.sdk.utils.b.b bVar = (com.kwad.sdk.utils.b.b) ServiceProvider.get(com.kwad.sdk.utils.b.b.class);
                if (bVar != null) {
                    bVar.a(aVarIj);
                }
            }
        });
    }

    public static com.kwad.sdk.utils.b.a Ij() {
        com.kwad.sdk.utils.b.a aVar = new com.kwad.sdk.utils.b.a();
        SharedPreferences sharedPreferencesFH = bb.fH("ksadsdk_kv_perf");
        if (sharedPreferencesFH == null) {
            return null;
        }
        try {
            Map<String, ?> all = sharedPreferencesFH.getAll();
            if (all == null) {
                return null;
            }
            Iterator<Map.Entry<String, ?>> it = all.entrySet().iterator();
            int iIntValue = 0;
            while (it.hasNext()) {
                iIntValue += ((Integer) it.next().getValue()).intValue();
            }
            aVar.aLC = iIntValue;
            SharedPreferences.Editor editorEdit = sharedPreferencesFH.edit();
            Iterator<Map.Entry<String, ?>> it2 = all.entrySet().iterator();
            while (it2.hasNext()) {
                editorEdit.putInt(it2.next().getKey(), 0);
            }
            editorEdit.apply();
            d(aVar);
            e(aVar);
        } catch (Throwable unused) {
        }
        return aVar;
    }

    private static int Ik() {
        int iC = bb.c("kssdk_kv_mode", "mode", 0);
        com.kwad.sdk.core.e.c.d("Ks_UnionHelper", "local mode:" + iC);
        return iC;
    }

    public static boolean Il() {
        Ih();
        return aIF.get() == 0;
    }

    private static boolean Im() {
        return Build.VERSION.SDK_INT > 23;
    }

    private static int In() {
        Ih();
        int iIg = (aIG || !Im()) ? 0 : Ig();
        com.kwad.sdk.core.e.c.d("Ks_UnionHelper", "targetMode:" + iIg);
        return iIg;
    }

    public static void Io() {
        Ih();
        int i = aIF.get();
        int iIn = In();
        boolean z = i != iIn;
        com.kwad.sdk.core.e.c.d("Ks_UnionHelper", "needTransfer:" + z);
        if (z) {
            transfer(iIn);
        }
    }

    private static void Ip() {
        g.execute(new Runnable() { // from class: com.kwad.sdk.utils.x.4
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    Context context = y.getContext();
                    if (context == null) {
                        return;
                    }
                    Iterator<String> it = i.a.aha.iterator();
                    while (it.hasNext()) {
                        x.N(context, it.next());
                    }
                } catch (Exception e) {
                    com.kwad.sdk.core.e.c.e("Ks_UnionHelper", Log.getStackTraceString(e));
                }
                x.dc(0);
                x.aIF.set(0);
            }
        });
    }

    private static void Iq() {
        com.kwad.sdk.core.e.c.d("Ks_UnionHelper", "transferToKv");
        g.execute(new Runnable() { // from class: com.kwad.sdk.utils.x.5
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    Context context = y.getContext();
                    if (context != null) {
                        Iterator<String> it = i.a.aha.iterator();
                        while (it.hasNext()) {
                            x.M(context, it.next());
                        }
                        x.dc(1);
                        x.aIF.set(1);
                    }
                } catch (Exception e) {
                    com.kwad.sdk.core.e.c.e("Ks_UnionHelper", Log.getStackTraceString(e));
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void M(Context context, String str) {
        SharedPreferences sharedPreferencesFH;
        com.kwad.sdk.utils.a.c cVarAt = com.kwad.sdk.utils.a.e.at(context, str);
        if ("ksadsdk_splash_preload_id_list".equals(str) && (sharedPreferencesFH = bb.fH(str)) == null) {
            SharedPreferences.Editor editorEdit = sharedPreferencesFH.edit();
            if (editorEdit != null) {
                editorEdit.remove("kv_to_sp_transfer_flag").remove("sp_to_kv_transfer_flag").apply();
                return;
            }
            return;
        }
        if (cVarAt.contains("sp_to_kv_transfer_flag")) {
            return;
        }
        SharedPreferences sharedPreferencesFH2 = bb.fH(str);
        if (sharedPreferencesFH2 == null) {
            cVarAt.putBoolean("sp_to_kv_transfer_flag", true);
            return;
        }
        cVarAt.putAll(sharedPreferencesFH2.getAll());
        cVarAt.putBoolean("sp_to_kv_transfer_flag", true);
        bb.ar(str, "kv_to_sp_transfer_flag");
        a(str, cVarAt);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void N(Context context, String str) {
        SharedPreferences sharedPreferencesFH = bb.fH(str);
        if (sharedPreferencesFH == null) {
            return;
        }
        if ("ksadsdk_splash_preload_id_list".equals(str)) {
            SharedPreferences.Editor editorEdit = sharedPreferencesFH.edit();
            if (editorEdit != null) {
                editorEdit.remove("kv_to_sp_transfer_flag").remove("sp_to_kv_transfer_flag").apply();
                return;
            }
            return;
        }
        if (sharedPreferencesFH.contains("kv_to_sp_transfer_flag")) {
            return;
        }
        com.kwad.sdk.utils.a.c cVarAt = com.kwad.sdk.utils.a.e.at(context, str);
        Map<String, Object> all = cVarAt.getAll();
        if (all.isEmpty()) {
            bb.l(str, "kv_to_sp_transfer_flag", true);
            return;
        }
        bb.a(str, all);
        bb.l(str, "kv_to_sp_transfer_flag", true);
        cVarAt.remove("sp_to_kv_transfer_flag");
        cVarAt.release();
    }

    private static void a(String str, com.kwad.sdk.utils.a.c cVar) {
        if (i.a.ahb.contains(str)) {
            return;
        }
        cVar.release();
    }

    public static void ap(final String str, final String str2) {
        g.execute(new Runnable() { // from class: com.kwad.sdk.utils.x.1
            @Override // java.lang.Runnable
            public final void run() {
                int iC = bb.c("ksadsdk_kv_perf", str, 0);
                if (TextUtils.isEmpty(str2)) {
                    bb.ar("ksadsdk_kv_perf", str);
                } else {
                    bb.b("ksadsdk_kv_perf", str, iC + 1);
                }
            }
        });
    }

    public static void aq(final String str, final String str2) {
        g.execute(new Runnable() { // from class: com.kwad.sdk.utils.x.2
            @Override // java.lang.Runnable
            public final void run() {
                SharedPreferences sharedPreferencesFH = bb.fH("ksadsdk_kv_perf");
                if (sharedPreferencesFH != null && sharedPreferencesFH.contains(str)) {
                    if (TextUtils.isEmpty(str2)) {
                        bb.b("ksadsdk_kv_perf_failed", str, bb.c("ksadsdk_kv_perf_failed", str, 0) + 1);
                    } else {
                        bb.b("ksadsdk_kv_perf_success", str, bb.c("ksadsdk_kv_perf_success", str, 0) + 1);
                    }
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void c(com.kwad.sdk.utils.b.a aVar) {
        if (((double) aVar.aLD) / ((double) (aVar.aLD + aVar.aLE)) > 0.10000000149011612d) {
            aIG = true;
            com.kwad.sdk.core.e.c.d("Ks_UnionHelper", "need downgrade");
            bb.l("kssdk_kv_mode", "downgrade", true);
        }
        if (aIG) {
            Io();
        }
    }

    private static void d(com.kwad.sdk.utils.b.a aVar) {
        SharedPreferences sharedPreferencesFH = bb.fH("ksadsdk_kv_perf_failed");
        int iIntValue = 0;
        if (sharedPreferencesFH == null) {
            aVar.aLD = 0;
            return;
        }
        Map<String, ?> all = sharedPreferencesFH.getAll();
        if (all != null) {
            Iterator<Map.Entry<String, ?>> it = all.entrySet().iterator();
            while (it.hasNext()) {
                iIntValue += ((Integer) it.next().getValue()).intValue();
            }
        }
        aVar.aLD = iIntValue;
        SharedPreferences.Editor editorEdit = sharedPreferencesFH.edit();
        editorEdit.clear();
        editorEdit.apply();
    }

    static void dc(int i) {
        bb.b("kssdk_kv_mode", "mode", i);
    }

    private static void e(com.kwad.sdk.utils.b.a aVar) {
        SharedPreferences sharedPreferencesFH = bb.fH("ksadsdk_kv_perf_success");
        int iIntValue = 0;
        if (sharedPreferencesFH == null) {
            aVar.aLE = 0;
            return;
        }
        Map<String, ?> all = sharedPreferencesFH.getAll();
        if (all != null) {
            Iterator<Map.Entry<String, ?>> it = all.entrySet().iterator();
            while (it.hasNext()) {
                iIntValue += ((Integer) it.next().getValue()).intValue();
            }
        }
        aVar.aLE = iIntValue;
        SharedPreferences.Editor editorEdit = sharedPreferencesFH.edit();
        editorEdit.clear();
        editorEdit.apply();
    }

    private static void transfer(int i) {
        if (i == 0) {
            Ip();
        } else if (i == 1) {
            Iq();
        }
    }
}
