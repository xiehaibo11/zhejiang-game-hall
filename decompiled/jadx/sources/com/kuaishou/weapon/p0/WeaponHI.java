package com.kuaishou.weapon.p0;

import android.app.Application;
import android.content.Context;
import android.content.IntentFilter;
import android.text.TextUtils;
import android.util.Log;
import com.kuaishou.weapon.p0.receiver.WeaponRECE;
import java.util.Arrays;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class WeaponHI {
    public static boolean as = false;
    public static String cookieData = "";
    public static String encryENV = "";
    public static String hostVersionName = "";
    public static int ii = 0;
    public static List<Integer> isList = null;
    public static Context mContext = null;
    public static IWeaponInitParams mParams = null;
    public static String sChannel = "";
    public static String sKDeviceId = "";
    public static String sKSAppkey = "";
    public static String sKSSdkver = "";
    public static String sKSSecKey = "";
    public static String sUserId = "";
    public static String skProductName = "";

    public static void iD() {
        try {
            iP(mContext);
            WeaponRECE weaponRECE = new WeaponRECE();
            Application application = mContext instanceof Application ? (Application) mContext : null;
            if (application != null) {
                IntentFilter intentFilter = new IntentFilter(bp.f);
                intentFilter.addDataScheme("env");
                application.registerReceiver(weaponRECE, intentFilter);
            }
        } catch (Throwable unused) {
        }
        try {
            db.a(mContext).a(100);
            cw.a(mContext).a(100);
            dc.a(mContext).a(100);
            da.a(mContext).a(100, 0);
            cx.a(mContext).a(100);
            cy.a(mContext).a(100);
            dd.a(mContext).a(100);
            cz.a(mContext).a();
        } catch (Exception unused2) {
        }
    }

    public static void iP(Context context) {
        try {
            long jB = df.a(context).b();
            long jCurrentTimeMillis = (System.currentTimeMillis() - jB) - (((long) h.a(context, "re_po_rt").c(df.h, 12)) * 3600000);
            if (jB < 1 || jCurrentTimeMillis > 0) {
                n.a().a(new cv(context));
            }
        } catch (Throwable unused) {
        }
    }

    public static void init(Context context, final IWeaponInitParams iWeaponInitParams) {
        try {
            Context applicationContext = context.getApplicationContext();
            mContext = applicationContext;
            if (applicationContext instanceof Application) {
                n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.WeaponHI.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        try {
                            WeaponHI.mParams = iWeaponInitParams;
                            WeaponHI.sKSAppkey = iWeaponInitParams.getAppKey();
                            WeaponHI.sKSSecKey = iWeaponInitParams.getSecKey();
                            WeaponHI.sKSSdkver = "5.2.1";
                            WeaponHI.hostVersionName = bg.q(WeaponHI.mContext);
                            WeaponHI.sKDeviceId = iWeaponInitParams.getDeviceId();
                            WeaponHI.skProductName = iWeaponInitParams.getProductName();
                            WeaponHI.sUserId = iWeaponInitParams.getUserId();
                            WeaponHI.sChannel = iWeaponInitParams.getChannel();
                            WeaponHI.as = iWeaponInitParams.getAPPLISTSwitch();
                            WeaponHI.cookieData = bg.B(WeaponHI.mContext);
                            try {
                                h hVarA = h.a(WeaponHI.mContext, "re_po_rt");
                                JSONObject jSONObject = new JSONObject();
                                jSONObject.put("k", cl.m());
                                jSONObject.put("d", cl.b(WeaponHI.mContext));
                                jSONObject.put("a", bg.q(WeaponHI.mContext));
                                jSONObject.put("p", bg.s(WeaponHI.mContext));
                                jSONObject.put("s", "5.2.1");
                                jSONObject.put(t.h, TextUtils.isEmpty(hVarA.a(df.g)) ? 1 : 0);
                                WeaponHI.encryENV = new bm(WeaponHI.mContext).c(jSONObject.toString());
                                String strA = hVarA.a(df.u);
                                if (!TextUtils.isEmpty(strA)) {
                                    WeaponHI.isList = Arrays.asList(strA.split("\\|"));
                                    WeaponHI.ii = hVarA.c(df.v, 5);
                                }
                            } catch (Throwable unused) {
                            }
                            WeaponHI.init(WeaponHI.sKSAppkey, WeaponHI.sKSSecKey, iWeaponInitParams.getPrivacySwitch());
                        } catch (Throwable unused2) {
                        }
                    }
                });
            } else {
                Log.e("Risk", "context  is not application！！！");
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void init(String str, String str2, boolean z) {
        try {
            h.a(mContext, "re_po_rt").a("a1_p_s_p_s", Boolean.valueOf(z));
            n.a();
            bs.a(mContext);
            br.a(mContext);
        } catch (Exception unused) {
        }
        n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.WeaponHI.3
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    q qVarA = q.a(WeaponHI.mContext);
                    if (qVarA == null) {
                        return;
                    }
                    qVarA.a();
                } catch (Exception unused2) {
                }
            }
        });
    }

    public static void setPS(final boolean z) {
        try {
            n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.WeaponHI.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (WeaponHI.mContext != null) {
                        h hVarA = h.a(WeaponHI.mContext, "re_po_rt");
                        boolean z2 = z;
                        if (!z2) {
                            hVarA.a("a1_p_s_p_s_c_b", Boolean.valueOf(z2));
                            return;
                        }
                        if (hVarA.e("a1_p_s_p_s_c_b")) {
                            return;
                        }
                        hVarA.a("a1_p_s_p_s_c_b", Boolean.valueOf(z));
                        try {
                            if (hVarA.c(df.bk, 1) == 1) {
                                db.a(WeaponHI.mContext).a(103);
                                dc.a(WeaponHI.mContext).a(103);
                                da.a(WeaponHI.mContext).a(103, 0);
                                cx.a(WeaponHI.mContext).a(103);
                            }
                        } catch (Throwable unused) {
                        }
                    }
                }
            });
        } catch (Exception unused) {
        }
    }
}
