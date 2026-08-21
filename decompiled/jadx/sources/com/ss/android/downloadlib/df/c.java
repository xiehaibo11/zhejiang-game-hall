package com.ss.android.downloadlib.df;

import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.common.AppStatusManager;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class c {
    private static Handler rg = new Handler(Looper.getMainLooper());

    public static void rg(final com.ss.android.downloadad.api.rg.df dfVar, final ux uxVar) {
        boolean zIsAppForeground = AppStatusManager.getInstance().isAppForeground();
        if (!zIsAppForeground && Build.VERSION.SDK_INT >= 29) {
            b.df();
        }
        boolean zIsAppForeground2 = AppStatusManager.getInstance().isAppForeground();
        boolean z = !zIsAppForeground && zIsAppForeground2;
        if (dfVar != null) {
            dfVar.hq(z);
        }
        uxVar.rg(z);
        if (dfVar == null) {
            return;
        }
        df(dfVar, bm(dfVar));
        if (zIsAppForeground2) {
            return;
        }
        final long jCurrentTimeMillis = System.currentTimeMillis();
        AppStatusManager.getInstance().registerAppSwitchListener(new AppStatusManager.AppStatusChangeListener() { // from class: com.ss.android.downloadlib.df.c.1
            @Override // com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener
            public void onAppBackground() {
            }

            @Override // com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener
            public void onAppForeground() {
                AppStatusManager.getInstance().unregisterAppSwitchListener(this);
                com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.df.c.1.1
                    @Override // java.lang.Runnable
                    public void run() {
                        boolean zQ = b.q(dfVar.pp());
                        long jPp = c.pp(dfVar);
                        if (!zQ || jPp >= System.currentTimeMillis() - jCurrentTimeMillis) {
                            if (System.currentTimeMillis() - jCurrentTimeMillis > c.ux(dfVar)) {
                                AdEventHandler.rg().rg(EventConstants.UnityLabel.DEEPLINK_DELAY_TIMEOUT, dfVar);
                                return;
                            }
                            dfVar.hq(true);
                            AdEventHandler.rg().rg(EventConstants.UnityLabel.DEEPLINK_DELAY_INVOKE, dfVar);
                            uxVar.rg(true);
                            c.df(dfVar, c.bm(dfVar));
                        }
                    }
                });
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void df(final com.ss.android.downloadad.api.rg.df dfVar, final int i) {
        if (i <= 0) {
            return;
        }
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.df.c.2
            @Override // java.lang.Runnable
            public void run() {
                int i2 = 1;
                if (b.q(dfVar.pp())) {
                    JSONObject jSONObject = new JSONObject();
                    try {
                        if (!dfVar.fg()) {
                            i2 = 2;
                        }
                        jSONObject.putOpt(EventConstants.ExtraJson.KEY_DEEPLINK_SOURCE, Integer.valueOf(i2));
                    } catch (JSONException e) {
                        e.printStackTrace();
                    }
                    AdEventHandler.rg().rg(EventConstants.UnityLabel.DEEPLINK_SUCCESS_2, jSONObject, dfVar);
                    return;
                }
                c.df(dfVar, i - 1);
            }
        }, rz(dfVar) * 1000);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static long ux(com.ss.android.downloadad.api.rg.df dfVar) {
        return com.ss.android.downloadlib.utils.pt.rg(dfVar).optLong("app_link_check_timeout", 300000L);
    }

    private static int rz(com.ss.android.downloadad.api.rg.df dfVar) {
        return com.ss.android.downloadlib.utils.pt.rg(dfVar).optInt("app_link_check_delay", 1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int bm(com.ss.android.downloadad.api.rg.df dfVar) {
        return com.ss.android.downloadlib.utils.pt.rg(dfVar).optInt("app_link_check_count", 10);
    }

    public static boolean rg(com.ss.android.downloadad.api.rg.df dfVar) {
        return com.ss.android.downloadlib.utils.pt.rg(dfVar).optInt("app_link_opt_switch") == 1;
    }

    public static boolean df(com.ss.android.downloadad.api.rg.df dfVar) {
        return com.ss.android.downloadlib.utils.pt.rg(dfVar).optInt("app_link_opt_install_switch") == 1;
    }

    public static boolean q(com.ss.android.downloadad.api.rg.df dfVar) {
        return com.ss.android.downloadlib.utils.pt.rg(dfVar).optInt("app_link_opt_invoke_switch") == 1;
    }

    public static boolean pt(com.ss.android.downloadad.api.rg.df dfVar) {
        return com.ss.android.downloadlib.utils.pt.rg(dfVar).optInt("app_link_opt_dialog_switch") == 1;
    }

    public static long pp(com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar == null) {
            return 3000L;
        }
        return com.ss.android.downloadlib.utils.pt.rg(dfVar).optInt("app_link_opt_back_time_limit", 3) * 1000;
    }
}
