package com.huawei.updatesdk.a.a.d.h;

import android.content.Context;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Set;

public class b extends com.huawei.updatesdk.a.b.c.c.b {
    private String abis_;
    private String deviceFeatures_;
    private int dpi_;
    private String preferLan_;

    public static class b {
        private final Context a;
        private boolean b;
        private Set<String> c;
        private String[] d;
        private boolean e;

        public b(Context context) {
            this.a = context;
        }

        private String b() {
            ArrayList arrayList = new ArrayList(c.d(this.a));
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

        public b a(boolean z) {
            this.b = z;
            return this;
        }

        public b a() {
            b bVar = new b();
            bVar.abis_ = com.huawei.updatesdk.a.a.d.e.a(c.f(), Constants.ACCEPT_TIME_SEPARATOR_SP);
            bVar.dpi_ = Integer.parseInt(c.f(this.a));
            bVar.preferLan_ = b();
            if (this.b) {
                bVar.deviceFeatures_ = c.a(this.a);
            }
            return bVar;
        }
    }

    private b() {
    }
}
