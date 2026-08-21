package com.ss.android.downloadlib.addownload;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.config.OnItemClickListener;
import com.ss.android.download.api.config.n;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.download.DownloadStatusChangeListener;
import com.ss.android.download.api.download.q;
import com.ss.android.download.api.model.DownloadShortInfo;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import com.ss.android.downloadlib.addownload.fw;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.hq;
import com.ss.android.socialbase.appdownloader.DownloadHandlerService;
import com.ss.android.socialbase.downloader.depend.IDownloadListener;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.lang.ref.SoftReference;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

public class pp implements c, hq.rg {
    private static final String rg = pp.class.getSimpleName();
    private boolean b;
    private DownloadShortInfo fw;
    private long hq;
    private SoftReference<IDownloadButtonClickListener> n;
    private WeakReference<Context> pp;
    private boolean r;
    private q rz;
    private DownloadInfo ux;
    private SoftReference<OnItemClickListener> z;
    private final com.ss.android.downloadlib.utils.hq df = new com.ss.android.downloadlib.utils.hq(Looper.getMainLooper(), this);
    private final Map<Integer, Object> c = new ConcurrentHashMap();
    private final IDownloadListener bm = new fw.rg(this.df);
    private long oh = -1;
    private DownloadModel f = null;
    private DownloadEventConfig v = null;
    private DownloadController un = null;
    private fw q = new fw(this);
    private pt pt = new pt(this.df);
    private final boolean qx = DownloadSetting.obtainGlobal().optBugFix("ttdownloader_callback_twice");

    interface df {
        void rg(long j);
    }

    interface rg {
        void rg();
    }

    @Override
    public pp df(Context context) {
        if (context != null) {
            this.pp = new WeakReference<>(context);
        }
        bm.df(context);
        return this;
    }

    @Override
    public pp df(int i, DownloadStatusChangeListener downloadStatusChangeListener) {
        if (downloadStatusChangeListener != null) {
            if (bm.rz().optInt("back_use_softref_listener") == 1) {
                this.c.put(Integer.valueOf(i), downloadStatusChangeListener);
            } else {
                this.c.put(Integer.valueOf(i), new SoftReference(downloadStatusChangeListener));
            }
        }
        return this;
    }

    @Override
    public pp df(DownloadModel downloadModel) {
        if (downloadModel != null) {
            if (downloadModel.isAd()) {
                if (downloadModel.getId() <= 0 || TextUtils.isEmpty(downloadModel.getLogExtra())) {
                    com.ss.android.downloadlib.exception.q.rg().rg("setDownloadModel ad error");
                }
            } else if (downloadModel.getId() == 0 && (downloadModel instanceof AdDownloadModel)) {
                com.ss.android.downloadlib.exception.q.rg().rg(false, "setDownloadModel id=0");
                if (DownloadSetting.obtainGlobal().optBugFix("fix_model_id")) {
                    ((AdDownloadModel) downloadModel).setId(downloadModel.getDownloadUrl().hashCode());
                }
            }
            com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadModel);
            this.oh = downloadModel.getId();
            this.f = downloadModel;
            if (ux.rg(downloadModel)) {
                ((AdDownloadModel) downloadModel).setExtraValue(3L);
                com.ss.android.downloadad.api.rg.df dfVarPt = com.ss.android.downloadlib.addownload.model.c.rg().pt(this.oh);
                if (dfVarPt != null && dfVarPt.hq() != 3) {
                    dfVarPt.pp(3L);
                    com.ss.android.downloadlib.addownload.model.ux.rg().rg(dfVarPt);
                }
            }
        }
        return this;
    }

    @Override
    public pp df(DownloadController downloadController) {
        JSONObject extra;
        this.un = downloadController;
        if (com.ss.android.downloadlib.utils.pt.df(this.f).optInt("force_auto_open") == 1) {
            oh().setLinkMode(1);
        }
        if (DownloadSetting.obtainGlobal().optBugFix("fix_show_dialog") && (extra = this.f.getExtra()) != null && extra.optInt("subprocess") > 0) {
            oh().setEnableNewActivity(false);
        }
        com.ss.android.downloadlib.addownload.model.c.rg().rg(this.oh, oh());
        return this;
    }

    @Override
    public pp df(DownloadEventConfig downloadEventConfig) {
        this.v = downloadEventConfig;
        this.r = hq().getDownloadScene() == 0;
        com.ss.android.downloadlib.addownload.model.c.rg().rg(this.oh, hq());
        return this;
    }

    @Override
    public c rg(OnItemClickListener onItemClickListener) {
        if (onItemClickListener == null) {
            this.z = null;
        } else {
            this.z = new SoftReference<>(onItemClickListener);
        }
        return this;
    }

    @Override
    public void rg() {
        this.b = true;
        com.ss.android.downloadlib.addownload.model.c.rg().rg(this.oh, hq());
        com.ss.android.downloadlib.addownload.model.c.rg().rg(this.oh, oh());
        this.q.rg(this.oh);
        un();
        if (bm.rz().optInt("enable_empty_listener", 1) == 1 && this.c.get(Integer.MIN_VALUE) == null) {
            df(Integer.MIN_VALUE, new com.ss.android.download.api.config.rg());
        }
    }

    @Override
    public boolean rg(int i) {
        if (i == 0) {
            this.c.clear();
        } else {
            this.c.remove(Integer.valueOf(i));
        }
        if (this.c.isEmpty()) {
            this.b = false;
            this.hq = System.currentTimeMillis();
            if (this.ux != null) {
                Downloader.getInstance(bm.getContext()).removeTaskMainListener(this.ux.getId());
            }
            q qVar = this.rz;
            if (qVar != null && qVar.getStatus() != AsyncTask.Status.FINISHED) {
                this.rz.cancel(true);
            }
            this.q.rg(this.ux);
            String str = rg;
            StringBuilder sb = new StringBuilder();
            sb.append("onUnbind removeCallbacksAndMessages, downloadUrl:");
            DownloadInfo downloadInfo = this.ux;
            sb.append(downloadInfo == null ? "" : downloadInfo.getUrl());
            com.ss.android.downloadlib.utils.bm.rg(str, sb.toString(), null);
            this.df.removeCallbacksAndMessages(null);
            this.fw = null;
            this.ux = null;
            return true;
        }
        if (this.c.size() == 1 && this.c.containsKey(Integer.MIN_VALUE)) {
            this.q.df(this.ux);
        }
        return false;
    }

    @Override
    public void rg(boolean z) {
        if (this.ux != null) {
            if (z) {
                com.ss.android.socialbase.appdownloader.q.pt ptVarDf = com.ss.android.socialbase.appdownloader.pt.bm().df();
                if (ptVarDf != null) {
                    ptVarDf.rg(this.ux);
                }
                Downloader.getInstance(DownloadComponentManager.getAppContext()).cancel(this.ux.getId(), true);
                return;
            }
            Intent intent = new Intent(bm.getContext(), (Class<?>) DownloadHandlerService.class);
            intent.setAction("android.ss.intent.action.DOWNLOAD_DELETE");
            intent.putExtra("extra_click_download_ids", this.ux.getId());
            bm.getContext().startService(intent);
        }
    }

    @Override
    public boolean df() {
        return this.b;
    }

    public boolean q() {
        DownloadInfo downloadInfo = this.ux;
        return (downloadInfo == null || downloadInfo.getStatus() == 0) ? false : true;
    }

    @Override
    public long pt() {
        return this.hq;
    }

    @Override
    public c rg(long j) {
        if (j != 0) {
            DownloadModel downloadModelRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(j);
            if (downloadModelRg != null) {
                this.f = downloadModelRg;
                this.oh = j;
                this.q.rg(j);
            }
        } else {
            com.ss.android.downloadlib.exception.q.rg().rg(false, "setModelId");
        }
        return this;
    }

    @Override
    public void df(int i) {
        if (i != 1 && i != 2) {
            throw new IllegalArgumentException("error actionType");
        }
        this.q.rg(this.oh);
        if (!com.ss.android.downloadlib.addownload.model.c.rg().pp(this.oh).l()) {
            com.ss.android.downloadlib.exception.q.rg().rg("handleDownload ModelBox !isStrictValid");
        }
        if (this.q.rg(getContext(), i, this.r)) {
            return;
        }
        boolean zQ = q(i);
        if (i == 1) {
            if (zQ) {
                return;
            }
            com.ss.android.downloadlib.utils.bm.rg(rg, "handleDownload id:" + this.oh + ",pIC:", null);
            q(true);
            return;
        }
        if (i == 2 && !zQ) {
            com.ss.android.downloadlib.utils.bm.rg(rg, "handleDownload id:" + this.oh + ",pBC:", null);
            df(true);
        }
    }

    public boolean pp() {
        return bm.rz().optInt("quick_app_enable_switch", 0) == 0 && this.f.getQuickAppModel() != null && !TextUtils.isEmpty(this.f.getQuickAppModel().rg()) && com.ss.android.downloadlib.addownload.q.rg(this.ux) && com.ss.android.downloadlib.utils.b.rg(getContext(), new Intent("android.intent.action.VIEW", Uri.parse(this.f.getQuickAppModel().rg())));
    }

    private boolean q(int i) {
        if (!pp()) {
            return false;
        }
        int i2 = -1;
        String strRg = this.f.getQuickAppModel().rg();
        if (i == 1) {
            i2 = 5;
        } else if (i == 2) {
            i2 = 4;
        }
        DownloadModel downloadModel = this.f;
        if (downloadModel instanceof AdDownloadModel) {
            ((AdDownloadModel) downloadModel).setFunnelType(3);
        }
        boolean zQ = com.ss.android.downloadlib.utils.ux.q(bm.getContext(), strRg);
        if (zQ) {
            AdEventHandler.rg().rg(this.oh, i);
            Message messageObtain = Message.obtain();
            messageObtain.what = i2;
            messageObtain.obj = Long.valueOf(this.f.getId());
            com.ss.android.downloadlib.addownload.q.rg().rg(this, i2, this.f);
        } else {
            AdEventHandler.rg().rg(this.oh, false, 0);
        }
        return zQ;
    }

    public void df(boolean z) {
        pp(z);
    }

    private void b() {
        SoftReference<OnItemClickListener> softReference = this.z;
        if (softReference != null && softReference.get() != null) {
            this.z.get().onItemClick(this.f, hq(), oh());
            this.z = null;
        } else {
            bm.df().rg(getContext(), this.f, oh(), hq());
        }
    }

    public void q(boolean z) {
        if (z) {
            AdEventHandler.rg().rg(this.oh, 1);
        }
        f();
    }

    private void pp(boolean z) {
        if (com.ss.android.downloadlib.utils.pt.df(this.f).optInt("notification_opt_2") == 1 && this.ux != null) {
            DownloadNotificationManager.getInstance().cancelNotification(this.ux.getId());
        }
        c(z);
    }

    public void c() {
        this.df.post(new Runnable() {
            @Override
            public void run() {
                Iterator<DownloadStatusChangeListener> it = fw.rg((Map<Integer, Object>) pp.this.c).iterator();
                while (it.hasNext()) {
                    it.next().onInstalled(pp.this.z());
                }
            }
        });
    }

    @Override
    public void rg(Message message) {
        if (message != null && this.b && message.what == 3) {
            this.ux = (DownloadInfo) message.obj;
            this.q.rg(message, z(), this.c);
        }
    }

    private Context getContext() {
        WeakReference<Context> weakReference = this.pp;
        if (weakReference != null && weakReference.get() != null) {
            return this.pp.get();
        }
        return bm.getContext();
    }

    private DownloadEventConfig hq() {
        DownloadEventConfig downloadEventConfig = this.v;
        return downloadEventConfig == null ? new q.rg().rg() : downloadEventConfig;
    }

    private DownloadController oh() {
        if (this.un == null) {
            this.un = new com.ss.android.download.api.download.df();
        }
        return this.un;
    }

    private void f() {
        com.ss.android.downloadlib.utils.bm.rg(rg, "pICD", null);
        if (this.q.pt(this.ux)) {
            com.ss.android.downloadlib.utils.bm.rg(rg, "pICD BC", null);
            c(false);
        } else {
            com.ss.android.downloadlib.utils.bm.rg(rg, "pICD IC", null);
            b();
        }
    }

    private void c(final boolean z) {
        DownloadModel downloadModel;
        com.ss.android.downloadlib.utils.bm.rg(rg, "pBCD", null);
        if (v()) {
            com.ss.android.downloadlib.addownload.model.pp ppVarPp = com.ss.android.downloadlib.addownload.model.c.rg().pp(this.oh);
            if (this.r) {
                if (rz()) {
                    if (pt(false) && ppVarPp.pt != null && ppVarPp.pt.isAutoDownloadOnCardShow()) {
                        rg(z, true);
                        return;
                    }
                    return;
                }
                rg(z, true);
                return;
            }
            if (this.f.isAd() && ppVarPp.pt != null && ppVarPp.pt.enableShowComplianceDialog() && ppVarPp.df != null && com.ss.android.downloadlib.addownload.compliance.df.rg().rg(ppVarPp.df) && com.ss.android.downloadlib.addownload.compliance.df.rg().rg(ppVarPp)) {
                return;
            }
            rg(z, true);
            return;
        }
        com.ss.android.downloadlib.utils.bm.rg(rg, "pBCD continue download, status:" + this.ux.getStatus(), null);
        DownloadInfo downloadInfo = this.ux;
        if (downloadInfo != null && (downloadModel = this.f) != null) {
            downloadInfo.setOnlyWifi(downloadModel.isNeedWifi());
        }
        final int status = this.ux.getStatus();
        final int id = this.ux.getId();
        final com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(this.ux);
        if (status == -2 || status == -1) {
            this.q.rg(this.ux, z);
            if (dfVarRg != null) {
                dfVarRg.ux(System.currentTimeMillis());
                dfVarRg.rz(this.ux.getCurBytes());
            }
            this.ux.setDownloadFromReserveWifi(false);
            this.pt.rg(new com.ss.android.downloadlib.addownload.model.pp(this.oh, this.f, hq(), oh()));
            this.pt.rg(id, this.ux.getCurBytes(), this.ux.getTotalBytes(), new rg() {
                @Override
                public void rg() {
                    if (pp.this.pt.rg()) {
                        return;
                    }
                    pp ppVar = pp.this;
                    ppVar.rg(id, status, ppVar.ux);
                }
            });
            return;
        }
        if (hq.rg(status)) {
            if (this.f.enablePause()) {
                this.pt.rg(true);
                com.ss.android.downloadlib.q.ux.rg().df(com.ss.android.downloadlib.addownload.model.c.rg().pt(this.oh));
                com.ss.android.downloadlib.addownload.q.c.rg().rg(dfVarRg, status, new com.ss.android.downloadlib.addownload.q.q() {
                    @Override
                    public void rg(com.ss.android.downloadad.api.rg.df dfVar) {
                        if (pp.this.ux == null && DownloadSetting.obtainGlobal().optBugFix("fix_handle_pause")) {
                            pp.this.ux = Downloader.getInstance(bm.getContext()).getDownloadInfo(id);
                        }
                        pp.this.q.rg(pp.this.ux, z);
                        if (pp.this.ux != null && DownloadUtils.isWifi(bm.getContext()) && pp.this.ux.isPauseReserveOnWifi()) {
                            pp.this.ux.stopPauseReserveOnWifi();
                            AdEventHandler.rg().df(EventConstants.Label.PAUSE_RESERVE_WIFI_CANCEL_ON_WIFI, dfVarRg);
                        } else {
                            pp ppVar = pp.this;
                            ppVar.rg(id, status, ppVar.ux);
                        }
                    }
                });
                return;
            }
            return;
        }
        this.q.rg(this.ux, z);
        rg(id, status, this.ux);
    }

    public void rg(boolean z, final boolean z2) {
        if (z) {
            AdEventHandler.rg().rg(this.oh, 2);
        }
        if (!com.ss.android.downloadlib.utils.rz.df("android.permission.WRITE_EXTERNAL_STORAGE") && !oh().enableNewActivity()) {
            this.f.setFilePath(this.q.df());
        }
        if (com.ss.android.downloadlib.utils.pt.q(this.f) == 0) {
            com.ss.android.downloadlib.utils.bm.rg(rg, "pBCD not start", null);
            this.q.rg(new n() {
                @Override
                public void rg() {
                    com.ss.android.downloadlib.utils.bm.rg(pp.rg, "pBCD start download", null);
                    pp.this.fw(z2);
                }

                @Override
                public void rg(String str) {
                    com.ss.android.downloadlib.utils.bm.rg(pp.rg, "pBCD onDenied", null);
                }
            });
        } else {
            fw(z2);
        }
    }

    private boolean v() {
        if (DownloadSetting.obtainGlobal().optBugFix("fix_click_start")) {
            DownloadInfo downloadInfo = this.ux;
            if (downloadInfo == null) {
                return true;
            }
            if ((downloadInfo.getStatus() == -3 && this.ux.getCurBytes() <= 0) || this.ux.getStatus() == 0 || this.ux.getStatus() == -4) {
                return true;
            }
            return DownloadUtils.isDownloadSuccessAndFileNotExist(this.ux.getStatus(), this.ux.getSavePath(), this.ux.getName());
        }
        DownloadInfo downloadInfo2 = this.ux;
        if (downloadInfo2 == null) {
            return true;
        }
        return !(downloadInfo2.getStatus() == -3 || Downloader.getInstance(bm.getContext()).canResume(this.ux.getId())) || this.ux.getStatus() == 0;
    }

    private void rg(int i, int i2, DownloadInfo downloadInfo) {
        if (DownloadSetting.obtainGlobal().optBugFix("fix_click_start")) {
            if (i2 != -3 && !DownloadProcessDispatcher.getInstance().canResume(i)) {
                rg(false, false);
                return;
            } else {
                com.ss.android.socialbase.appdownloader.pt.bm().rg(bm.getContext(), i, i2);
                return;
            }
        }
        com.ss.android.socialbase.appdownloader.pt.bm().rg(bm.getContext(), i, i2);
    }

    private void fw(final boolean z) {
        this.pt.rg(new com.ss.android.downloadlib.addownload.model.pp(this.oh, this.f, hq(), oh()));
        this.pt.rg(0, 0L, 0L, new rg() {
            @Override
            public void rg() {
                if (pp.this.pt.rg()) {
                    return;
                }
                pp.this.ux(z);
            }
        });
    }

    private void ux(boolean z) {
        Iterator<DownloadStatusChangeListener> it = fw.rg(this.c).iterator();
        while (it.hasNext()) {
            it.next().onDownloadStart(this.f, oh());
        }
        int iRg = this.q.rg(bm.getContext(), this.bm);
        com.ss.android.downloadlib.utils.bm.rg(rg, "beginDown id:" + iRg, null);
        if (iRg != 0) {
            if (this.ux != null && !DownloadSetting.obtainGlobal().optBugFix("fix_click_start")) {
                this.q.rg(this.ux, false);
            } else if (z) {
                this.q.rg();
            }
        } else {
            DownloadInfo downloadInfoBuild = new DownloadInfo.Builder(this.f.getDownloadUrl()).build();
            downloadInfoBuild.setStatus(-1);
            rg(downloadInfoBuild);
            AdEventHandler.rg().rg(this.oh, new BaseException(2, "start download failed, id=0"));
            com.ss.android.downloadlib.exception.q.rg().df("beginDown");
        }
        if (this.q.rg(q())) {
            com.ss.android.downloadlib.utils.bm.rg(rg, "beginDown IC id:" + iRg, null);
            b();
        }
    }

    public void fw() {
        if (this.c.size() == 0) {
            return;
        }
        Iterator<DownloadStatusChangeListener> it = fw.rg(this.c).iterator();
        while (it.hasNext()) {
            it.next().onIdle();
        }
        DownloadInfo downloadInfo = this.ux;
        if (downloadInfo != null) {
            downloadInfo.setStatus(-4);
        }
    }

    private class q extends AsyncTask<String, Void, DownloadInfo> {
        private q() {
        }

        @Override
        protected DownloadInfo doInBackground(String... strArr) {
            DownloadInfo downloadInfo = null;
            if (strArr == null) {
                return null;
            }
            if (strArr.length >= 1 && TextUtils.isEmpty(strArr[0])) {
                return null;
            }
            String str = strArr[0];
            if (pp.this.f != null && !TextUtils.isEmpty(pp.this.f.getFilePath())) {
                downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(str, pp.this.f.getFilePath());
            }
            return downloadInfo == null ? com.ss.android.socialbase.appdownloader.pt.bm().rg(bm.getContext(), str) : downloadInfo;
        }

        @Override
        protected void onPostExecute(DownloadInfo downloadInfo) {
            super.onPostExecute(downloadInfo);
            if (isCancelled() || pp.this.f == null) {
                return;
            }
            try {
                com.ss.android.downloadlib.addownload.model.q qVarRg = com.ss.android.downloadlib.utils.b.rg(pp.this.f.getPackageName(), pp.this.f.getVersionCode(), pp.this.f.getVersionName());
                com.ss.android.downloadlib.addownload.model.fw.rg().rg(pp.this.f.getVersionCode(), qVarRg.df(), com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo));
                boolean zRg = qVarRg.rg();
                if (downloadInfo != null && downloadInfo.getId() != 0 && (zRg || !Downloader.getInstance(bm.getContext()).isDownloadSuccessAndFileNotExist(downloadInfo))) {
                    Downloader.getInstance(bm.getContext()).removeTaskMainListener(downloadInfo.getId());
                    if (pp.this.ux == null || pp.this.ux.getStatus() != -4) {
                        pp.this.ux = downloadInfo;
                        if (pp.this.qx) {
                            Downloader.getInstance(bm.getContext()).setMainThreadListener(pp.this.ux.getId(), pp.this.bm, false);
                        } else {
                            Downloader.getInstance(bm.getContext()).setMainThreadListener(pp.this.ux.getId(), pp.this.bm);
                        }
                    } else {
                        pp.this.ux = null;
                    }
                    pp.this.q.rg(pp.this.ux, pp.this.z(), fw.rg((Map<Integer, Object>) pp.this.c));
                } else {
                    if (downloadInfo != null && Downloader.getInstance(bm.getContext()).isDownloadSuccessAndFileNotExist(downloadInfo)) {
                        DownloadNotificationManager.getInstance().cancelNotification(downloadInfo.getId());
                        pp.this.ux = null;
                    }
                    if (pp.this.ux != null) {
                        Downloader.getInstance(bm.getContext()).removeTaskMainListener(pp.this.ux.getId());
                        if (pp.this.qx) {
                            Downloader.getInstance(pp.this.getContext()).setMainThreadListener(pp.this.ux.getId(), pp.this.bm, false);
                        } else {
                            Downloader.getInstance(pp.this.getContext()).setMainThreadListener(pp.this.ux.getId(), pp.this.bm);
                        }
                    }
                    if (!zRg) {
                        Iterator<DownloadStatusChangeListener> it = fw.rg((Map<Integer, Object>) pp.this.c).iterator();
                        while (it.hasNext()) {
                            it.next().onIdle();
                        }
                        pp.this.ux = null;
                    } else {
                        pp.this.ux = new DownloadInfo.Builder(pp.this.f.getDownloadUrl()).build();
                        pp.this.ux.setStatus(-3);
                        pp.this.q.rg(pp.this.ux, pp.this.z(), fw.rg((Map<Integer, Object>) pp.this.c));
                    }
                }
                pp.this.q.q(pp.this.ux);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    private void rg(DownloadInfo downloadInfo) {
        Message messageObtain = Message.obtain();
        messageObtain.what = 3;
        messageObtain.obj = downloadInfo;
        this.df.sendMessage(messageObtain);
    }

    private void un() {
        q qVar = this.rz;
        if (qVar != null && qVar.getStatus() != AsyncTask.Status.FINISHED) {
            this.rz.cancel(true);
        }
        q qVar2 = new q();
        this.rz = qVar2;
        com.ss.android.downloadlib.utils.df.rg(qVar2, this.f.getDownloadUrl(), this.f.getPackageName());
    }

    private DownloadShortInfo z() {
        if (this.fw == null) {
            this.fw = new DownloadShortInfo();
        }
        return this.fw;
    }

    @Override
    public void ux() {
        com.ss.android.downloadlib.addownload.model.c.rg().c(this.oh);
    }

    @Override
    public c rg(IDownloadButtonClickListener iDownloadButtonClickListener) {
        if (iDownloadButtonClickListener == null) {
            this.n = null;
        } else {
            this.n = new SoftReference<>(iDownloadButtonClickListener);
        }
        return this;
    }

    public boolean rz() {
        SoftReference<IDownloadButtonClickListener> softReference = this.n;
        if (softReference == null) {
            return false;
        }
        return ux.rg(this.f, softReference.get());
    }

    public boolean pt(boolean z) {
        SoftReference<IDownloadButtonClickListener> softReference = this.n;
        if (softReference != null && softReference.get() != null) {
            try {
                if (!z) {
                    this.n.get().handleComplianceDialog(true);
                } else {
                    this.n.get().handleMarketFailedComplianceDialog();
                }
                this.n = null;
                return true;
            } catch (Exception unused) {
                com.ss.android.downloadlib.exception.q.rg().df("mDownloadButtonClickListener has recycled");
                return false;
            }
        }
        com.ss.android.downloadlib.exception.q.rg().df("mDownloadButtonClickListener has recycled");
        return false;
    }
}
