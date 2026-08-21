package com.tkay.core.common;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.common.f.ae;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class w {
    private static final String b = w.class.getSimpleName();
    private static volatile w f;
    Context a;
    private final Map<String, Integer> c = new ConcurrentHashMap(8);
    private final Map<String, ae> d = new ConcurrentHashMap(8);
    private final Map<String, Boolean> e = new ConcurrentHashMap(8);

    public static w a(Context context) {
        if (f == null) {
            synchronized (w.class) {
                if (f == null) {
                    f = new w(context);
                }
            }
        }
        return f;
    }

    private w(Context context) {
        this.a = context.getApplicationContext();
    }

    public final void a(String str, String str2, boolean z) {
        ae aeVar;
        if (TextUtils.isEmpty(str) || (aeVar = this.d.get(str)) == null || !TextUtils.equals(str2, aeVar.a())) {
            return;
        }
        StringBuilder sb = new StringBuilder("recordLoadResult: ");
        sb.append(str);
        sb.append(", requestId: ");
        sb.append(str2);
        sb.append(", load result: ");
        sb.append(z);
        aeVar.a(z);
    }

    private boolean c(String str) {
        Boolean boolValueOf = this.e.get(str);
        if (boolValueOf == null) {
            boolValueOf = Boolean.valueOf(com.tkay.core.common.l.p.c(this.a, com.tkay.core.common.b.f.E, str));
            if (boolValueOf.booleanValue()) {
                StringBuilder sb = new StringBuilder("checkFirstLoadAfterInstall: ");
                sb.append(str);
                sb.append(",  update to false");
                com.tkay.core.common.l.p.b(this.a, com.tkay.core.common.b.f.E, str);
            }
            this.e.put(str, Boolean.FALSE);
        }
        StringBuilder sb2 = new StringBuilder("checkFirstLoadAfterInstall: ");
        sb2.append(str);
        sb2.append(", is first load after install: ");
        sb2.append(boolValueOf);
        return boolValueOf.booleanValue();
    }

    public final void a(String str) {
        Integer num = this.c.get(str);
        if (num == null) {
            StringBuilder sb = new StringBuilder("updateBidCount: ");
            sb.append(str);
            sb.append(", it is first bid");
            this.c.put(str, 1);
            return;
        }
        StringBuilder sb2 = new StringBuilder("updateBidCount: ");
        sb2.append(str);
        sb2.append(", bid count: ");
        sb2.append(num.intValue() + 1);
        this.c.put(str, Integer.valueOf(num.intValue() + 1));
    }

    public final int b(String str) {
        Integer num = this.c.get(str);
        if (num == null) {
            return 1;
        }
        return num.intValue();
    }

    public final ae a(String str, String str2) {
        Boolean boolValueOf = this.e.get(str);
        if (boolValueOf == null) {
            boolValueOf = Boolean.valueOf(com.tkay.core.common.l.p.c(this.a, com.tkay.core.common.b.f.E, str));
            if (boolValueOf.booleanValue()) {
                StringBuilder sb = new StringBuilder("checkFirstLoadAfterInstall: ");
                sb.append(str);
                sb.append(",  update to false");
                com.tkay.core.common.l.p.b(this.a, com.tkay.core.common.b.f.E, str);
            }
            this.e.put(str, Boolean.FALSE);
        }
        StringBuilder sb2 = new StringBuilder("checkFirstLoadAfterInstall: ");
        sb2.append(str);
        sb2.append(", is first load after install: ");
        sb2.append(boolValueOf);
        boolean zBooleanValue = boolValueOf.booleanValue();
        ae aeVarRemove = this.d.remove(str);
        if (aeVarRemove == null) {
            StringBuilder sb3 = new StringBuilder("placementId: ");
            sb3.append(str);
            sb3.append(", first request after boot");
            aeVarRemove = new ae("", zBooleanValue);
        } else {
            StringBuilder sb4 = new StringBuilder("placementId: ");
            sb4.append(str);
            sb4.append(", not first request after boot");
        }
        this.d.put(str, new ae(str2, false));
        return aeVarRemove;
    }
}
