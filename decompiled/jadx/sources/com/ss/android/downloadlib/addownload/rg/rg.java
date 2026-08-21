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
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class rg {
    private static rg df;
    private static final String rg = rg.class.getSimpleName();
    private df c;
    private String pp;
    private boolean pt = false;
    private CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> q;

    /* JADX INFO: renamed from: com.ss.android.downloadlib.addownload.rg.rg$rg, reason: collision with other inner class name */
    public interface InterfaceC0347rg {
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
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean rg(android.app.Activity r22, com.ss.android.socialbase.downloader.model.DownloadInfo r23, boolean r24, com.ss.android.downloadlib.addownload.rg.rg.InterfaceC0347rg r25) {
        /*
            Method dump skipped, instruction units count: 223
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.downloadlib.addownload.rg.rg.rg(android.app.Activity, com.ss.android.socialbase.downloader.model.DownloadInfo, boolean, com.ss.android.downloadlib.addownload.rg.rg$rg):boolean");
    }

    public boolean rg(Activity activity, boolean z, InterfaceC0347rg interfaceC0347rg) {
        if (bm.rz().optInt("disable_install_app_dialog") == 1 || this.pt) {
            return false;
        }
        return rg(activity, rg(activity), z, interfaceC0347rg);
    }

    public void rg(Context context, com.ss.android.downloadlib.addownload.model.rg rgVar, boolean z, InterfaceC0347rg interfaceC0347rg) {
        this.q.clear();
        rg(context, rgVar, interfaceC0347rg, z);
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

    private void rg(final Context context, final com.ss.android.downloadlib.addownload.model.rg rgVar, final InterfaceC0347rg interfaceC0347rg, boolean z) {
        final com.ss.android.downloadad.api.rg.df dfVarPt = c.rg().pt(rgVar.df);
        if (dfVarPt == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("showBackInstallDialog nativeModel null");
            return;
        }
        hq hqVarQ = bm.q();
        DownloadAlertDialogInfo.rg rgVarRg = new DownloadAlertDialogInfo.rg(context).rg(z ? "应用安装确认" : "退出确认");
        Object[] objArr = new Object[1];
        objArr[0] = TextUtils.isEmpty(rgVar.pp) ? "刚刚下载的应用" : rgVar.pp;
        hqVarQ.df(rgVarRg.df(String.format("%1$s下载完成，是否立即安装？", objArr)).q("立即安装").pt(z ? "暂不安装" : String.format("退出%1$s", context.getResources().getString(context.getApplicationContext().getApplicationInfo().labelRes))).rg(false).rg(b.rg(context, rgVar.fw)).rg(new DownloadAlertDialogInfo.df() { // from class: com.ss.android.downloadlib.addownload.rg.rg.1
            @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
            public void rg(DialogInterface dialogInterface) {
                AdEventHandler.rg().df(EventConstants.Label.BACK_DIALOG_INSTALL, dfVarPt);
                com.ss.android.socialbase.appdownloader.pt.rg(context, (int) rgVar.rg);
                dialogInterface.dismiss();
            }

            @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
            public void df(DialogInterface dialogInterface) {
                AdEventHandler.rg().df(EventConstants.Label.BACK_DIALOG_EXIT, dfVarPt);
                InterfaceC0347rg interfaceC0347rg2 = interfaceC0347rg;
                if (interfaceC0347rg2 != null) {
                    interfaceC0347rg2.rg();
                }
                rg.this.df("");
                dialogInterface.dismiss();
            }

            @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
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
