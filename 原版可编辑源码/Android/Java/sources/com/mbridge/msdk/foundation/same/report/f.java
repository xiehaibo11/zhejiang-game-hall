package com.mbridge.msdk.foundation.same.report;

import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.same.report.g;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.z;
import com.qihoo360.replugin.RePlugin;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;

public final class f {
    private static AtomicBoolean c;
    private final Executor a;
    private Boolean b;

    private f() {
        this.a = Executors.newSingleThreadExecutor();
    }

    public static f a() {
        return a.a;
    }

    private boolean b() {
        if (this.b == null) {
            try {
                this.b = Boolean.valueOf(ab.a().a("r_v_r_i_a", false));
            } catch (Throwable th) {
                if (MBridgeConstans.DEBUG) {
                    z.d("RewardVideoReportManager", th.getMessage());
                }
                this.b = false;
            }
        }
        if (this.b == null) {
            this.b = false;
        }
        return this.b.booleanValue();
    }

    public final void a(String str, String str2, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c(PointCategory.LOAD, "", str2, z, str));
    }

    public final void b(String str, String str2, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c("campaign_success", "", str2, z, str));
    }

    public final void c(String str, String str2, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c("load_success", "", str2, z, str));
    }

    public final void d(String str, String str2, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c("is_ready_true", "", str2, z, str));
    }

    public final void e(String str, String str2, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c("is_ready_false", "", str2, z, str));
    }

    public final void a(String str, String str2, String str3, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c("load_failed", str2, str3, z, str));
    }

    public final void f(String str, String str2, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c(PointCategory.SHOW, "", str2, z, str));
    }

    public final void g(String str, String str2, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c("show_success", "", str2, z, str));
    }

    public final void b(String str, String str2, String str3, boolean z) {
        if (!b() || TextUtils.isEmpty(str) || this.a == null) {
            return;
        }
        this.a.execute(c("show_failed", str2, str3, z, str));
    }

    private static g b(String str, String str2, String str3, boolean z, String str4) {
        try {
            if (c == null) {
                c = new AtomicBoolean(ab.a().a("c_r_a_l_c", 0) == 0);
            }
            g.a aVarA = new g.a("2000119").a("event", str);
            if (TextUtils.isEmpty(str2)) {
                str2 = "";
            }
            g.a aVarA2 = aVarA.a("message", str2).a("background", c.get() ? com.mbridge.msdk.foundation.controller.a.f().b() >= 1 ? "1" : "0" : RePlugin.PROCESS_UI);
            if (TextUtils.isEmpty(str3)) {
                str3 = "";
            }
            g.a aVarA3 = aVarA2.a("ad_type", str3).a("hb", z ? "0" : "1");
            if (TextUtils.isEmpty(str4)) {
                str4 = "";
            }
            return aVarA3.a("unit_id", str4).a();
        } catch (Throwable th) {
            if (MBridgeConstans.DEBUG) {
                z.d("RewardVideoReportManager", th.getMessage());
            }
            return null;
        }
    }

    private Runnable c(final String str, final String str2, final String str3, final boolean z, final String str4) {
        return new Runnable() {
            @Override
            public final void run() {
                g gVarB = f.b(str, str2, str3, z, str4);
                if (gVarB != null) {
                    try {
                        gVarB.a(str4);
                    } catch (Throwable th) {
                        if (MBridgeConstans.DEBUG) {
                            z.d("RewardVideoReportManager", th.getMessage());
                        }
                    }
                }
            }
        };
    }

    private static final class a {
        private static final f a = new f();
    }
}
