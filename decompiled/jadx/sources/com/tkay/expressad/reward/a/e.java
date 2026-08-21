package com.tkay.expressad.reward.a;

import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public final class e implements com.tkay.expressad.e.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7071a = "RewardUnitCacheManager";
    private ConcurrentHashMap<String, com.tkay.expressad.videocommon.e.d> b;

    /* synthetic */ e(byte b) {
        this();
    }

    private e() {
        this.b = new ConcurrentHashMap<>();
    }

    public static e a() {
        return a.f7072a;
    }

    public final void a(String str, String str2, com.tkay.expressad.videocommon.e.d dVar) {
        try {
            String str3 = str + "_" + str2;
            if (dVar != null && this.b.containsKey(str3)) {
                this.b.remove(str3);
            }
            this.b.put(str3, dVar);
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public final com.tkay.expressad.videocommon.e.d a(String str, String str2) {
        try {
            try {
                return this.b.remove(str + "_" + str2);
            } catch (Exception e) {
                e.getMessage();
                return null;
            }
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final e f7072a = new e(0);

        private a() {
        }
    }
}
