package com.ss.android.downloadlib;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.net.Uri;
import android.text.TextUtils;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.download.DownloadStatusChangeListener;
import com.ss.android.download.api.model.DownloadAlertDialogInfo;
import com.ss.android.downloadad.api.download.AdDownloadController;
import com.ss.android.downloadad.api.download.AdDownloadEventConfig;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.addownload.model.OpenAppResult;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.exception.df;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import org.json.JSONObject;

public class df implements com.ss.android.downloadad.api.df {
    private static volatile df df;
    private static String rg = df.class.getSimpleName();
    private ux q = ux.rg(bm.getContext());

    private df() {
    }

    public static df rg() {
        if (df == null) {
            synchronized (df.class) {
                if (df == null) {
                    df = new df();
                }
            }
        }
        return df;
    }

    @Override
    public Dialog rg(Context context, String str, boolean z, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, DownloadStatusChangeListener downloadStatusChangeListener, int i) {
        return rg(context, str, z, downloadModel, downloadEventConfig, downloadController, downloadStatusChangeListener, i, false);
    }

    @Override
    public Dialog rg(Context context, String str, boolean z, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, DownloadStatusChangeListener downloadStatusChangeListener, int i, IDownloadButtonClickListener iDownloadButtonClickListener) {
        return rg(context, str, z, downloadModel, downloadEventConfig, downloadController, downloadStatusChangeListener, i, false, iDownloadButtonClickListener);
    }

    public Dialog rg(Context context, String str, boolean z, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, DownloadStatusChangeListener downloadStatusChangeListener, int i, boolean z2) {
        return rg(context, str, z, downloadModel, downloadEventConfig, downloadController, downloadStatusChangeListener, i, z2, null);
    }

    public Dialog rg(final Context context, final String str, final boolean z, final DownloadModel downloadModel, final DownloadEventConfig downloadEventConfig, final DownloadController downloadController, final DownloadStatusChangeListener downloadStatusChangeListener, final int i, final boolean z2, final IDownloadButtonClickListener iDownloadButtonClickListener) {
        return (Dialog) com.ss.android.downloadlib.exception.df.rg(new df.rg<Dialog>() {
            @Override
            public Dialog df() {
                return df.this.df(context, str, z, downloadModel, downloadEventConfig, downloadController, downloadStatusChangeListener, i, z2, iDownloadButtonClickListener);
            }
        });
    }

    public Dialog df(Context context, String str, boolean z, final DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, DownloadStatusChangeListener downloadStatusChangeListener, int i, boolean z2, IDownloadButtonClickListener iDownloadButtonClickListener) {
        if (rg(downloadModel.getId())) {
            if (z2) {
                rg(downloadModel.getId(), downloadEventConfig, downloadController);
            } else {
                df(downloadModel.getId());
            }
            return null;
        }
        if (context == null || TextUtils.isEmpty(downloadModel.getDownloadUrl())) {
            return null;
        }
        this.q.rg(context, i, downloadStatusChangeListener, downloadModel);
        final DownloadEventConfig downloadEventConfig2 = (DownloadEventConfig) b.rg(downloadEventConfig, q());
        final DownloadController downloadController2 = (DownloadController) b.rg(downloadController, df());
        downloadEventConfig2.setDownloadScene(1);
        if ((downloadController2.enableShowComplianceDialog() && com.ss.android.downloadlib.addownload.compliance.df.rg().rg(downloadModel)) ? true : (bm.rz().optInt("disable_lp_dialog", 0) == 1) | z) {
            this.q.rg(downloadModel.getDownloadUrl(), downloadModel.getId(), 2, downloadEventConfig2, downloadController2, iDownloadButtonClickListener);
            return null;
        }
        com.ss.android.downloadlib.utils.bm.rg(rg, "tryStartDownload show dialog appName:" + downloadModel.getDownloadUrl(), null);
        Dialog dialogDf = bm.q().df(new DownloadAlertDialogInfo.rg(context).rg(downloadModel.getName()).df("确认要下载此应用吗？").q("确认").pt("取消").rg(new DownloadAlertDialogInfo.df() {
            @Override
            public void rg(DialogInterface dialogInterface) {
                df.this.q.rg(downloadModel.getDownloadUrl(), downloadModel.getId(), 2, downloadEventConfig2, downloadController2);
                AdEventHandler.rg().rg(EventConstants.Label.LP_DOWNLOAD_DIALOG_CONFIRM, downloadModel, downloadEventConfig2, downloadController2);
                dialogInterface.dismiss();
            }

            @Override
            public void df(DialogInterface dialogInterface) {
                AdEventHandler.rg().rg(EventConstants.Label.LP_DOWNLOAD_DIALOG_CANCEL, downloadModel, downloadEventConfig2, downloadController2);
                dialogInterface.dismiss();
            }

            @Override
            public void q(DialogInterface dialogInterface) {
                AdEventHandler.rg().rg(EventConstants.Label.LP_DOWNLOAD_DIALOG_CANCEL, downloadModel, downloadEventConfig2, downloadController2);
            }
        }).rg(0).rg());
        AdEventHandler.rg().rg(EventConstants.Label.LP_DOWNLOAD_DIALOG_SHOW, downloadModel, downloadEventConfig2, downloadController2);
        return dialogDf;
    }

    @Override
    public boolean rg(Context context, long j, String str, DownloadStatusChangeListener downloadStatusChangeListener, int i) {
        com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(j);
        if (dfVarPt != null) {
            this.q.rg(context, i, downloadStatusChangeListener, dfVarPt.oi());
            return true;
        }
        DownloadModel downloadModelRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(j);
        if (downloadModelRg == null) {
            return false;
        }
        this.q.rg(context, i, downloadStatusChangeListener, downloadModelRg);
        return true;
    }

    @Override
    public boolean rg(long j, int i) {
        DownloadModel downloadModelRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(j);
        if (downloadModelRg == null) {
            return false;
        }
        this.q.rg(downloadModelRg.getDownloadUrl(), i);
        return true;
    }

    public void rg(long j, DownloadEventConfig downloadEventConfig, DownloadController downloadController) {
        DownloadModel downloadModelRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(j);
        com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(j);
        if (downloadModelRg == null && dfVarPt != null) {
            downloadModelRg = dfVarPt.oi();
        }
        if (downloadModelRg == null) {
            return;
        }
        if (downloadEventConfig == null || downloadController == null || (downloadEventConfig instanceof com.ss.android.download.api.download.q) || (downloadController instanceof com.ss.android.download.api.download.df)) {
            df(j);
        } else {
            downloadEventConfig.setDownloadScene(1);
            this.q.rg(downloadModelRg.getDownloadUrl(), j, 2, downloadEventConfig, downloadController);
        }
    }

    public void df(long j) {
        DownloadModel downloadModelRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(j);
        com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(j);
        if (downloadModelRg == null && dfVarPt != null) {
            downloadModelRg = dfVarPt.oi();
        }
        if (downloadModelRg == null) {
            return;
        }
        DownloadEventConfig downloadEventConfigDf = com.ss.android.downloadlib.addownload.model.c.rg().df(j);
        DownloadController downloadControllerQ = com.ss.android.downloadlib.addownload.model.c.rg().q(j);
        if (downloadEventConfigDf instanceof com.ss.android.download.api.download.q) {
            downloadEventConfigDf = null;
        }
        if (downloadControllerQ instanceof com.ss.android.download.api.download.df) {
            downloadControllerQ = null;
        }
        if (dfVarPt == null) {
            if (downloadEventConfigDf == null) {
                downloadEventConfigDf = q();
            }
            if (downloadControllerQ == null) {
                downloadControllerQ = df();
            }
        } else {
            if (downloadEventConfigDf == null) {
                downloadEventConfigDf = new AdDownloadEventConfig.Builder().setClickButtonTag(dfVarPt.bm()).setRefer(dfVarPt.rz()).setIsEnableV3Event(dfVarPt.oh()).setIsEnableClickEvent(false).setClickStartLabel("click_start_detail").setClickPauseLabel("click_pause_detail").setClickContinueLabel("click_continue_detail").setClickInstallLabel("click_install_detail").setStorageDenyLabel("storage_deny_detail").build();
            }
            if (downloadControllerQ == null) {
                downloadControllerQ = dfVarPt.ls();
            }
        }
        DownloadEventConfig downloadEventConfig = downloadEventConfigDf;
        downloadEventConfig.setDownloadScene(1);
        this.q.rg(downloadModelRg.getDownloadUrl(), j, 2, downloadEventConfig, downloadControllerQ);
    }

    @Override
    public boolean rg(long j) {
        return (com.ss.android.downloadlib.addownload.model.c.rg().rg(j) == null && com.ss.android.downloadlib.addownload.model.c.rg().pt(j) == null) ? false : true;
    }

    @Override
    public boolean rg(Context context, Uri uri, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController) {
        return rg(context, uri, downloadModel, downloadEventConfig, downloadController, null);
    }

    @Override
    public boolean rg(final Context context, final Uri uri, final DownloadModel downloadModel, final DownloadEventConfig downloadEventConfig, final DownloadController downloadController, final IDownloadButtonClickListener iDownloadButtonClickListener) {
        return ((Boolean) com.ss.android.downloadlib.exception.df.rg(new df.rg<Boolean>() {
            @Override
            public Boolean df() {
                return Boolean.valueOf(df.this.df(context, uri, downloadModel, downloadEventConfig, downloadController, iDownloadButtonClickListener));
            }
        })).booleanValue();
    }

    private boolean df(Context context, Uri uri, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, IDownloadButtonClickListener iDownloadButtonClickListener) {
        DownloadController downloadControllerDf = downloadController;
        if (!com.ss.android.download.api.q.rg.rg(uri) || bm.rz().optInt("disable_market") == 1) {
            return false;
        }
        Context context2 = context == null ? bm.getContext() : context;
        String strDf = com.ss.android.download.api.q.rg.df(uri);
        if (downloadModel == null) {
            return com.ss.android.downloadlib.utils.ux.rg(context2, strDf).getType() == 5;
        }
        if (!TextUtils.isEmpty(strDf) && (downloadModel instanceof AdDownloadModel)) {
            ((AdDownloadModel) downloadModel).setPackageName(strDf);
        }
        if (downloadControllerDf != null) {
            downloadControllerDf.setDownloadMode(2);
        } else if ((downloadModel instanceof AdDownloadModel) && TextUtils.isEmpty(downloadModel.getDownloadUrl())) {
            ((AdDownloadModel) downloadModel).setDownloadUrl(uri.toString());
            downloadControllerDf = rg(true);
        } else if (downloadModel.getDownloadUrl().startsWith("market")) {
            downloadControllerDf = rg(true);
        } else {
            downloadControllerDf = df();
        }
        com.ss.android.downloadlib.addownload.model.pp ppVar = new com.ss.android.downloadlib.addownload.model.pp(downloadModel.getId(), downloadModel, (DownloadEventConfig) b.rg(downloadEventConfig, q()), downloadControllerDf);
        com.ss.android.downloadlib.addownload.model.c.rg().rg(ppVar.df);
        com.ss.android.downloadlib.addownload.model.c.rg().rg(ppVar.rg, ppVar.q);
        com.ss.android.downloadlib.addownload.model.c.rg().rg(ppVar.rg, ppVar.pt);
        if (b.rg(downloadModel) && DownloadSetting.obtainGlobal().optInt("app_link_opt") == 1 && com.ss.android.downloadlib.df.rg.rg(ppVar)) {
            return true;
        }
        JSONObject jSONObject = new JSONObject();
        b.rg(jSONObject, EventConstants.ExtraJson.MARKET_URL, uri.toString());
        b.rg(jSONObject, EventConstants.ExtraJson.DOWNLOAD_SCENE, (Object) 1);
        AdEventHandler.rg().df(EventConstants.Label.MARKET_CLICK_OPEN, jSONObject, ppVar);
        OpenAppResult openAppResultRg = com.ss.android.downloadlib.utils.ux.rg(context2, ppVar, strDf);
        String strRg = b.rg(openAppResultRg.df(), "open_market");
        if (openAppResultRg.getType() == 5) {
            com.ss.android.downloadlib.df.rg.rg(strRg, jSONObject, ppVar, true);
            return true;
        }
        if (openAppResultRg.getType() != 6) {
            return true;
        }
        b.rg(jSONObject, "error_code", Integer.valueOf(openAppResultRg.rg()));
        AdEventHandler.rg().df(EventConstants.Label.MARKET_OPEN_FAILED, jSONObject, ppVar);
        if (com.ss.android.downloadlib.addownload.ux.rg(downloadModel, iDownloadButtonClickListener)) {
            iDownloadButtonClickListener.handleMarketFailedComplianceDialog();
        }
        return false;
    }

    public static DownloadController df() {
        return rg(false);
    }

    public static DownloadController rg(boolean z) {
        AdDownloadController.Builder shouldUseNewWebView = new AdDownloadController.Builder().setLinkMode(0).setIsEnableBackDialog(true).setIsEnableMultipleDownload(false).setShouldUseNewWebView(false);
        if (z) {
            shouldUseNewWebView.setDownloadMode(2);
        } else {
            shouldUseNewWebView.setDownloadMode(0);
        }
        return shouldUseNewWebView.build();
    }

    public static DownloadEventConfig q() {
        return new AdDownloadEventConfig.Builder().setClickButtonTag(EventConstants.Tag.LANDING_H5_DOWNLOAD_AD_BUTTON).setClickItemTag(EventConstants.Tag.LANDING_H5_DOWNLOAD_AD_BUTTON).setClickStartLabel("click_start_detail").setClickPauseLabel("click_pause_detail").setClickContinueLabel("click_continue_detail").setClickInstallLabel("click_install_detail").setClickOpenLabel("click_open_detail").setStorageDenyLabel("storage_deny_detail").setDownloadScene(1).setIsEnableClickEvent(false).setIsEnableNoChargeClickEvent(true).setIsEnableV3Event(false).build();
    }
}
