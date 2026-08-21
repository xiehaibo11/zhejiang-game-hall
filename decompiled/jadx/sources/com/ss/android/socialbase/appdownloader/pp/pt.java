package com.ss.android.socialbase.appdownloader.pp;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.FragmentManager;
import android.content.DialogInterface;
import android.support.v4.app.NotificationManagerCompat;
import android.view.KeyEvent;
import com.ss.android.socialbase.appdownloader.q.f;
import com.ss.android.socialbase.appdownloader.rz;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class pt {
    private static AlertDialog pt;
    private static com.ss.android.socialbase.appdownloader.view.rg q;
    private static final String rg = pt.class.getSimpleName();
    private static List<f> df = new ArrayList();

    public static boolean rg() {
        try {
            return NotificationManagerCompat.from(DownloadComponentManager.getAppContext()).areNotificationsEnabled();
        } catch (Throwable th) {
            th.printStackTrace();
            return true;
        }
    }

    public static synchronized void rg(boolean z) {
        try {
            if (pt != null) {
                pt.cancel();
                pt = null;
            }
            for (f fVar : df) {
                if (fVar != null) {
                    if (z) {
                        fVar.rg();
                    } else {
                        fVar.df();
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static synchronized void rg(final Activity activity, final f fVar) {
        if (fVar == null) {
            return;
        }
        if (activity != null) {
            try {
            } catch (Throwable th) {
                th.printStackTrace();
                rg(false);
            }
            if (!activity.isFinishing()) {
                int iRg = rz.rg(DownloadComponentManager.getAppContext(), "tt_appdownloader_notification_request_title");
                int iRg2 = rz.rg(DownloadComponentManager.getAppContext(), "tt_appdownloader_notification_request_message");
                int iRg3 = rz.rg(DownloadComponentManager.getAppContext(), "tt_appdownloader_notification_request_btn_yes");
                int iRg4 = rz.rg(DownloadComponentManager.getAppContext(), "tt_appdownloader_notification_request_btn_no");
                df.add(fVar);
                if (pt == null || !pt.isShowing()) {
                    pt = new AlertDialog.Builder(activity).setTitle(iRg).setMessage(iRg2).setPositiveButton(iRg3, new DialogInterface.OnClickListener() { // from class: com.ss.android.socialbase.appdownloader.pp.pt.3
                        @Override // android.content.DialogInterface.OnClickListener
                        public void onClick(DialogInterface dialogInterface, int i) {
                            pt.df(activity, fVar);
                            dialogInterface.cancel();
                            AlertDialog unused = pt.pt = null;
                        }
                    }).setNegativeButton(iRg4, new DialogInterface.OnClickListener() { // from class: com.ss.android.socialbase.appdownloader.pp.pt.2
                        @Override // android.content.DialogInterface.OnClickListener
                        public void onClick(DialogInterface dialogInterface, int i) {
                            pt.rg(false);
                        }
                    }).setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.ss.android.socialbase.appdownloader.pp.pt.1
                        @Override // android.content.DialogInterface.OnKeyListener
                        public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                            if (i != 4) {
                                return false;
                            }
                            if (keyEvent.getAction() == 1) {
                                pt.rg(false);
                            }
                            return true;
                        }
                    }).setCancelable(false).show();
                }
                return;
            }
        }
        fVar.df();
    }

    public static void df(Activity activity, f fVar) {
        if (activity != null) {
            try {
                if (!activity.isFinishing()) {
                    FragmentManager fragmentManager = activity.getFragmentManager();
                    com.ss.android.socialbase.appdownloader.view.rg rgVar = (com.ss.android.socialbase.appdownloader.view.rg) fragmentManager.findFragmentByTag(rg);
                    q = rgVar;
                    if (rgVar == null) {
                        q = new com.ss.android.socialbase.appdownloader.view.rg();
                        fragmentManager.beginTransaction().add(q, rg).commitAllowingStateLoss();
                        try {
                            fragmentManager.executePendingTransactions();
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }
                    q.rg();
                    return;
                }
            } catch (Throwable th2) {
                try {
                    th2.printStackTrace();
                    fVar.rg();
                    return;
                } catch (Throwable th3) {
                    th3.printStackTrace();
                    return;
                }
            }
        }
        fVar.rg();
    }
}
