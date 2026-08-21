package com.ss.android.downloadlib.df;

import android.os.Build;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.common.AppStatusManager;
import com.ss.android.socialbase.downloader.logger.Logger;

public class q {
    public static void rg(final com.ss.android.downloadad.api.rg.df dfVar, final com.ss.android.downloadlib.guide.install.rg rgVar) {
        boolean zIsAppForeground = AppStatusManager.getInstance().isAppForeground();
        if (!zIsAppForeground && Build.VERSION.SDK_INT >= 29) {
            b.df();
        }
        boolean zIsAppForeground2 = AppStatusManager.getInstance().isAppForeground();
        if (!zIsAppForeground && zIsAppForeground2 && dfVar != null) {
            dfVar.hq(true);
        }
        rgVar.rg();
        Logger.d("AppInstallOptimiseHelper", "AppInstallOptimiseHelper-->isAppForegroundSecond:::" + zIsAppForeground2);
        if (zIsAppForeground2) {
            return;
        }
        AppStatusManager.getInstance().registerAppSwitchListener(new AppStatusManager.AppStatusChangeListener() {
            @Override
            public void onAppBackground() {
            }

            @Override
            public void onAppForeground() {
                Logger.d("AppInstallOptimiseHelper", "AppInstallOptimiseHelper-->onAppForeground");
                AppStatusManager.getInstance().unregisterAppSwitchListener(this);
                if (b.df(dfVar)) {
                    return;
                }
                dfVar.oh(true);
                AdEventHandler.rg().rg(EventConstants.UnityLabel.INSTALL_DELAY_INVOKE, dfVar);
                rgVar.rg();
            }
        });
    }
}
