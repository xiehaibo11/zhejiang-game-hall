package com.ss.android.downloadlib.df;

import com.bianfeng.ymnsdk.sysfunc.SysfuncInterface;
import com.ss.android.socialbase.downloader.common.AppStatusManager;

/* JADX INFO: loaded from: classes3.dex */
public class pp implements AppStatusManager.AppStatusChangeListener {
    private long rg;

    @Override // com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener
    public void onAppBackground() {
    }

    private static class rg {
        private static pp rg = new pp();
    }

    public static pp rg() {
        return rg.rg;
    }

    private pp() {
        this.rg = 0L;
        AppStatusManager.getInstance().registerAppSwitchListener(this);
    }

    @Override // com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener
    public void onAppForeground() {
        this.rg = System.currentTimeMillis();
    }

    public void rg(final pt ptVar, final long j) {
        if (ptVar == null) {
            return;
        }
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.df.pp.1
            @Override // java.lang.Runnable
            public void run() {
                if (!AppStatusManager.getInstance().isAppFocus() || System.currentTimeMillis() - pp.this.rg <= j) {
                    ptVar.rg(true);
                } else {
                    ptVar.rg(false);
                }
            }
        }, j);
    }

    public void rg(pt ptVar) {
        rg(ptVar, 5000L);
    }

    public void df(pt ptVar) {
        if (ptVar == null) {
            return;
        }
        int i = SysfuncInterface.SYSFUNC_GET_PACKAGE_ID_SUCCESS;
        int iOptInt = com.ss.android.downloadlib.addownload.bm.rz().optInt("check_an_result_delay", SysfuncInterface.SYSFUNC_GET_PACKAGE_ID_SUCCESS);
        if (iOptInt > 0) {
            i = iOptInt;
        }
        rg(ptVar, i);
    }
}
