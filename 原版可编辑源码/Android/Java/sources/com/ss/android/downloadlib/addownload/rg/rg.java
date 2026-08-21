package com.ss.android.downloadlib.addownload.rg;

import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.text.TextUtils;
import com.ss.android.download.api.config.hq;
import com.ss.android.download.api.model.DownloadAlertDialogInfo;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.activity.TTDelegateActivity;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.downloadlib.ux;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import java.io.File;
import java.util.List;
import java.util.ListIterator;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

public class rg {
    private static rg df;
    private static final String rg = rg.class.getSimpleName();
    private df c;
    private String pp;
    private boolean pt = false;
    private CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> q;

    public interface rg {
        void rg();
    }

    private rg() {
        df dfVar = new df();
        this.c = dfVar;
        this.q = dfVar.rg("sp_ad_install_back_dialog", "key_uninstalled_list");
    }

    public static rg rg() {
        if (df == null) {
            df = new rg();
        }
        return df;
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0051 A[Catch: Exception -> 0x0014, TryCatch #0 {Exception -> 0x0014, blocks: (B:4:0x000b, B:10:0x0019, B:15:0x0024, B:17:0x002c, B:21:0x0051, B:22:0x005e, B:23:0x006a, B:25:0x0070, B:28:0x0079, B:30:0x0085, B:33:0x008e, B:35:0x009d, B:38:0x00c3, B:36:0x00a1), top: B:42:0x000b }] */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0070 A[Catch: Exception -> 0x0014, TryCatch #0 {Exception -> 0x0014, blocks: (B:4:0x000b, B:10:0x0019, B:15:0x0024, B:17:0x002c, B:21:0x0051, B:22:0x005e, B:23:0x006a, B:25:0x0070, B:28:0x0079, B:30:0x0085, B:33:0x008e, B:35:0x009d, B:38:0x00c3, B:36:0x00a1), top: B:42:0x000b }] */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00c2 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean rg(Activity activity, DownloadInfo downloadInfo, boolean z, rg rgVar) {
        boolean z2;
        ListIterator<com.ss.android.downloadlib.addownload.model.rg> listIterator;
        if (downloadInfo == null) {
            try {
                if (this.q.isEmpty()) {
                    return false;
                }
                if (activity != null && !activity.isFinishing()) {
                    z2 = true;
                    if (downloadInfo == null && this.q.isEmpty()) {
                        rg(activity, new com.ss.android.downloadlib.addownload.model.rg(downloadInfo.getId(), 0L, 0L, downloadInfo.getPackageName(), downloadInfo.getTitle(), null, downloadInfo.getTargetFilePath()), z, rgVar);
                        return true;
                    }
                    long jLastModified = downloadInfo != null ? new File(downloadInfo.getTargetFilePath()).lastModified() : 0L;
                    listIterator = this.q.listIterator(this.q.size());
                    while (true) {
                        if (listIterator.hasPrevious()) {
                            z2 = false;
                            break;
                        }
                        com.ss.android.downloadlib.addownload.model.rg rgVarPrevious = listIterator.previous();
                        if (rgVarPrevious != null && !b.pt(bm.getContext(), rgVarPrevious.pt) && b.rg(rgVarPrevious.fw)) {
                            if (new File(rgVarPrevious.fw).lastModified() >= jLastModified) {
                                rg(activity, rgVarPrevious, z, rgVar);
                            } else {
                                rg(activity, new com.ss.android.downloadlib.addownload.model.rg(downloadInfo.getId(), 0L, 0L, downloadInfo.getPackageName(), downloadInfo.getTitle(), null, downloadInfo.getTargetFilePath()), z, rgVar);
                            }
                        }
                    }
                    com.ss.android.downloadlib.utils.bm.rg(rg, "tryShowInstallDialog isShow:" + z2, null);
                    return z2;
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        } else if (activity != null) {
            z2 = true;
            if (downloadInfo == null) {
            }
            if (downloadInfo != null) {
            }
            listIterator = this.q.listIterator(this.q.size());
            while (true) {
                if (listIterator.hasPrevious()) {
                }
            }
            com.ss.android.downloadlib.utils.bm.rg(rg, "tryShowInstallDialog isShow:" + z2, null);
            return z2;
        }
        return false;
    }

    public boolean rg(Activity activity, boolean z, rg rgVar) {
        if (bm.rz().optInt("disable_install_app_dialog") == 1 || this.pt) {
            return false;
        }
        return rg(activity, rg(activity), z, rgVar);
    }

    public void rg(Context context, com.ss.android.downloadlib.addownload.model.rg rgVar, boolean z, rg rgVar2) {
        this.q.clear();
        rg(context, rgVar, rgVar2, z);
        this.pt = true;
        ux.rg(context).q();
        this.c.df("sp_ad_install_back_dialog", "key_uninstalled_list");
        com.ss.android.downloadlib.utils.bm.rg(rg, "tryShowInstallDialog isShow:true", null);
    }

    public DownloadInfo rg(Context context) {
        long jDf;
        List<DownloadInfo> successedDownloadInfosWithMimeType;
        DownloadInfo downloadInfo = null;
        try {
            jDf = ux.rg(context).df();
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (bm.rz().optInt("enable_miniapp_dialog", 0) != 0 && (successedDownloadInfosWithMimeType = Downloader.getInstance(context).getSuccessedDownloadInfosWithMimeType(AdBaseConstants.MIME_APK)) != null && !successedDownloadInfosWithMimeType.isEmpty()) {
            long j = 0;
            for (DownloadInfo downloadInfo2 : successedDownloadInfosWithMimeType) {
                if (downloadInfo2 != null && !b.pt(context, downloadInfo2.getPackageName()) && b.rg(downloadInfo2.getTargetFilePath())) {
                    long jLastModified = new File(downloadInfo2.getTargetFilePath()).lastModified();
                    if (jLastModified >= jDf && downloadInfo2.getExtra() != null) {
                        try {
                            if (new JSONObject(downloadInfo2.getExtra()).has("isMiniApp") && (j == 0 || jLastModified > j)) {
                                downloadInfo = downloadInfo2;
                                j = jLastModified;
                            }
                        } catch (Exception e2) {
                            e2.printStackTrace();
                        }
                    }
                }
            }
            return downloadInfo;
        }
        return null;
    }

    public void rg(long j, long j2, long j3, String str, String str2, String str3, String str4) {
        for (int i = 0; i < this.q.size(); i++) {
            com.ss.android.downloadlib.addownload.model.rg rgVar = this.q.get(i);
            if (rgVar != null && rgVar.df == j2) {
                this.q.set(i, new com.ss.android.downloadlib.addownload.model.rg(j, j2, j3, str, str2, str3, str4));
                this.c.rg("sp_ad_install_back_dialog", "key_uninstalled_list", this.q);
                return;
            }
        }
        this.q.add(new com.ss.android.downloadlib.addownload.model.rg(j, j2, j3, str, str2, str3, str4));
        this.c.rg("sp_ad_install_back_dialog", "key_uninstalled_list", this.q);
    }

    private void rg(final Context context, final com.ss.android.downloadlib.addownload.model.rg rgVar, final rg rgVar2, boolean z) {
        final com.ss.android.downloadad.api.rg.df dfVarPt = c.rg().pt(rgVar.df);
        if (dfVarPt == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("showBackInstallDialog nativeModel null");
            return;
        }
        hq hqVarQ = bm.q();
        DownloadAlertDialogInfo.rg rgVarRg = new DownloadAlertDialogInfo.rg(context).rg(z ? "应用安装确认" : "退出确认");
        Object[] objArr = new Object[1];
        objArr[0] = TextUtils.isEmpty(rgVar.pp) ? "刚刚下载的应用" : rgVar.pp;
        hqVarQ.df(rgVarRg.df(String.format("%1$s下载完成，是否立即安装？", objArr)).q("立即安装").pt(z ? "暂不安装" : String.format("退出%1$s", context.getResources().getString(context.getApplicationContext().getApplicationInfo().labelRes))).rg(false).rg(b.rg(context, rgVar.fw)).rg(new DownloadAlertDialogInfo.df() {
            @Override
            public void rg(DialogInterface dialogInterface) {
                AdEventHandler.rg().df(EventConstants.Label.BACK_DIALOG_INSTALL, dfVarPt);
                com.ss.android.socialbase.appdownloader.pt.rg(context, (int) rgVar.rg);
                dialogInterface.dismiss();
            }

            @Override
            public void df(DialogInterface dialogInterface) {
                AdEventHandler.rg().df(EventConstants.Label.BACK_DIALOG_EXIT, dfVarPt);
                rg rgVar3 = rgVar2;
                if (rgVar3 != null) {
                    rgVar3.rg();
                }
                rg.this.df("");
                dialogInterface.dismiss();
            }

            @Override
            public void q(DialogInterface dialogInterface) {
                rg.this.df("");
            }
        }).rg(1).rg());
        AdEventHandler.rg().df(EventConstants.Label.BACK_DIALOG_SHOW, dfVarPt);
        this.pp = rgVar.pt;
    }

    public boolean rg(String str) {
        return TextUtils.equals(this.pp, str);
    }

    public void df(String str) {
        if (TextUtils.isEmpty(str)) {
            this.pp = "";
        } else if (TextUtils.equals(this.pp, str)) {
            this.pp = "";
        }
    }

    public void rg(com.ss.android.downloadad.api.rg.df dfVar) {
        if (bm.rz().optInt("enable_open_app_dialog", 0) == 1 && !dfVar.ey() && dfVar.z()) {
            dfVar.b(true);
            TTDelegateActivity.rg(dfVar);
        }
    }
}
