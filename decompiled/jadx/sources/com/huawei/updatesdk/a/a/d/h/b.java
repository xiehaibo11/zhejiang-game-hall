package com.huawei.updatesdk.a.a.d.h;

import android.content.Context;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public class b extends com.huawei.updatesdk.a.b.c.c.b {
    private String abis_;
    private String deviceFeatures_;
    private int dpi_;
    private String preferLan_;

    /* JADX INFO: renamed from: com.huawei.updatesdk.a.a.d.h.b$b, reason: collision with other inner class name */
    public static class C0083b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Context f2300a;
        private boolean b;
        private Set<String> c;
        private String[] d;
        private boolean e;

        public C0083b(Context context) {
            this.f2300a = context;
        }

        private String b() {
            ArrayList arrayList = new ArrayList(c.d(this.f2300a));
            Set<String> set = this.c;
            if (set != null) {
                for (String str : set) {
                    if (!arrayList.contains(str)) {
                        arrayList.add(str);
                    }
                }
            }
            return this.e ? com.huawei.updatesdk.a.a.d.e.a(c.a(arrayList, this.d), Constants.ACCEPT_TIME_SEPARATOR_SP) : com.huawei.updatesdk.a.a.d.e.a(arrayList, Constants.ACCEPT_TIME_SEPARATOR_SP);
        }

        public C0083b a(boolean z) {
            this.b = z;
            return this;
        }

        public b a() {
            b bVar = new b();
            bVar.abis_ = com.huawei.updatesdk.a.a.d.e.a(c.f(), Constants.ACCEPT_TIME_SEPARATOR_SP);
            bVar.dpi_ = Integer.parseInt(c.f(this.f2300a));
            bVar.preferLan_ = b();
            if (this.b) {
                bVar.deviceFeatures_ = c.a(this.f2300a);
            }
            return bVar;
        }
    }

    private b() {
    }
}
