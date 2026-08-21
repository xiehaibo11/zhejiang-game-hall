package com.ss.android.socialbase.appdownloader;

import android.content.Context;
import android.content.IntentFilter;
import android.os.Build;
import android.os.Environment;
import android.text.TextUtils;
import com.igexin.sdk.PushConsts;
import com.sigmob.sdk.base.h;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.appdownloader.q.bm;
import com.ss.android.socialbase.appdownloader.q.f;
import com.ss.android.socialbase.appdownloader.q.oh;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler;
import com.ss.android.socialbase.downloader.depend.IDownloadDepend;
import com.ss.android.socialbase.downloader.depend.IDownloadListener;
import com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener;
import com.ss.android.socialbase.downloader.depend.IInstallAppHandler;
import com.ss.android.socialbase.downloader.depend.IOpenInstallerListener;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.impls.RetryScheduler;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.model.DownloadTask;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import com.tkay.china.common.a.a;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public class pt {
    private com.ss.android.socialbase.appdownloader.q.ux b;
    private com.ss.android.socialbase.appdownloader.q.pt bm;
    private com.ss.android.socialbase.appdownloader.q.c f;
    private com.ss.android.socialbase.appdownloader.q.fw hq;
    private oh oh;
    private DownloadReceiver pp;
    private String pt;
    private String q;
    private com.ss.android.socialbase.appdownloader.q.q rz;
    private IInstallAppHandler un;
    private boolean ux = false;
    private bm v;
    private IOpenInstallerListener z;
    private static final String rg = pt.class.getSimpleName();
    private static volatile pt df = null;
    private static boolean c = false;
    private static boolean fw = false;

    public com.ss.android.socialbase.appdownloader.q.q rg() {
        return this.rz;
    }

    public com.ss.android.socialbase.appdownloader.q.pt df() {
        return this.bm;
    }

    public com.ss.android.socialbase.appdownloader.q.ux q() {
        return this.b;
    }

    public void rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.pt = str;
    }

    public String pt() {
        return this.pt;
    }

    public com.ss.android.socialbase.appdownloader.q.c pp() {
        return this.f;
    }

    public boolean c() {
        return DownloadSetting.getGlobalSettings().optInt(DownloadSettingKeys.PACKAGE_FLAG_CONFIG, 1) == 1;
    }

    public bm fw() {
        return this.v;
    }

    public void rg(bm bmVar) {
        this.v = bmVar;
    }

    public File ux() {
        return Downloader.getInstance(DownloadComponentManager.getAppContext()).getGlobalSaveDir();
    }

    public String rz() {
        return this.q;
    }

    private pt() {
    }

    public static pt bm() {
        if (df == null) {
            synchronized (pt.class) {
                if (df == null) {
                    df = new pt();
                }
            }
        }
        return df;
    }

    @Deprecated
    public void rg(Context context, String str, com.ss.android.socialbase.appdownloader.q.q qVar, com.ss.android.socialbase.appdownloader.q.pt ptVar, com.ss.android.socialbase.appdownloader.q.ux uxVar) {
        if (qVar != null) {
            this.rz = qVar;
        }
        if (ptVar != null) {
            this.bm = ptVar;
        }
        if (uxVar != null) {
            this.b = uxVar;
        }
        q(context);
    }

    private void q(Context context) {
        if (context == null || c) {
            return;
        }
        DownloadConstants.setMimeApk(AdBaseConstants.MIME_APK);
        DownloadComponentManager.setAppContext(context);
        DownloadComponentManager.setDownloadLaunchHandler(new com.ss.android.socialbase.appdownloader.pt.df());
        z();
        r();
        c = true;
    }

    public void df(String str) {
        Downloader.getInstance(DownloadComponentManager.getAppContext()).setDefaultSavePath(str);
    }

    private void z() {
        if (fw) {
            return;
        }
        if (this.pp == null) {
            this.pp = new DownloadReceiver();
        }
        try {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            intentFilter.addAction(PushConsts.ACTION_BROADCAST_TO_BOOT);
            intentFilter.addAction("android.ss.intent.action.DOWNLOAD_COMPLETE");
            IntentFilter intentFilter2 = new IntentFilter();
            intentFilter2.addAction("android.intent.action.PACKAGE_ADDED");
            intentFilter2.addAction("android.intent.action.PACKAGE_REPLACED");
            intentFilter2.addDataScheme("package");
            IntentFilter intentFilter3 = new IntentFilter();
            intentFilter3.addAction("android.intent.action.MEDIA_MOUNTED");
            intentFilter3.addDataScheme(h.x);
            DownloadComponentManager.getAppContext().registerReceiver(this.pp, intentFilter);
            DownloadComponentManager.getAppContext().registerReceiver(this.pp, intentFilter2);
            DownloadComponentManager.getAppContext().registerReceiver(this.pp, intentFilter3);
            fw = true;
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void r() {
        if (Build.VERSION.SDK_INT >= 21) {
            RetryScheduler.setRetryScheduleHandler(new RetryScheduler.RetryScheduleHandler() {
                @Override
                public void scheduleRetry(DownloadInfo downloadInfo, long j, boolean z, int i) {
                    RetryJobSchedulerService.rg(downloadInfo, j, z, i);
                }

                @Override
                public void cancelRetry(int i) {
                    RetryJobSchedulerService.rg(i);
                }
            });
        }
    }

    public static boolean rg(Context context, int i) {
        return q.rg(context, i, true) == 1;
    }

    public void rg(Context context, int i, int i2) {
        try {
            switch (i2) {
                case -4:
                case -1:
                    Downloader.getInstance(context).restart(i);
                    break;
                case -3:
                    q.rg(context, i, true);
                    break;
                case -2:
                    Downloader.getInstance(context).resume(i);
                    break;
                case 0:
                case 6:
                default:
                    return;
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 7:
                case 8:
                    Downloader.getInstance(context).pause(i);
                    break;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public int rg(c cVar) {
        int i;
        String str;
        int i2;
        JSONObject jSONObject;
        DownloadInfo downloadInfo;
        if (cVar == null || cVar.getContext() == null) {
            return 0;
        }
        try {
            List<HttpHeader> listRg = rg(cVar.pt());
            String strRg = cVar.rg();
            if (TextUtils.isEmpty(strRg)) {
                return 0;
            }
            final int iQx = cVar.qx();
            final boolean z = iQx == 0;
            String strCd = cVar.cd();
            final String strDf = cVar.df();
            if (TextUtils.isEmpty(strCd)) {
                strCd = q.rg(strRg, strDf, cVar.hq(), z);
            }
            if (strCd.length() > 255) {
                strCd = strCd.substring(strCd.length() - 255);
            }
            if (TextUtils.isEmpty(strDf)) {
                strDf = strCd;
            }
            String strHq = cVar.hq();
            if (strCd.endsWith(a.g) && !q.q(cVar.hq())) {
                strHq = AdBaseConstants.MIME_APK;
            }
            String strQ = cVar.q();
            if (TextUtils.isEmpty(cVar.q())) {
                strQ = q.df();
            }
            String str2 = strQ;
            if (!TextUtils.isEmpty(str2) && !TextUtils.isEmpty(strCd)) {
                int downloadId = DownloadComponentManager.getDownloadId(strRg, str2);
                if (DownloadSetting.obtain(cVar.vd()).optBugFix(DownloadSettingKeys.BugFix.FIX_RESUME_TASK_OVERRIDE_SETTINGS) && (downloadInfo = Downloader.getInstance(DownloadComponentManager.getAppContext()).getDownloadInfo(downloadId)) != null) {
                    try {
                        cVar.rg(new JSONObject(downloadInfo.getDownloadSettingString()));
                    } catch (Throwable unused) {
                    }
                }
                DownloadSetting.addTaskDownloadSetting(downloadId, cVar.vd());
                boolean zEv = cVar.ev();
                boolean z2 = (DownloadSetting.obtain(downloadId).optInt("modify_force", 1) == 1 && !zEv && DownloadUtils.isFileExist(str2, strCd) && Downloader.getInstance(cVar.getContext()).getDownloadInfo(downloadId) == null) ? true : zEv;
                IDownloadListener iDownloadListenerBm = cVar.bm();
                if (iDownloadListenerBm != null || (!cVar.pp() && !cVar.c())) {
                    i = downloadId;
                    str = str2;
                } else if (cVar.f() != null) {
                    iDownloadListenerBm = new com.ss.android.socialbase.appdownloader.pp.df(cVar.f());
                    i = downloadId;
                    str = str2;
                } else {
                    i = downloadId;
                    str = str2;
                    iDownloadListenerBm = new com.ss.android.socialbase.appdownloader.pp.df(cVar.getContext(), downloadId, strDf, str, strCd, cVar.b());
                }
                IDownloadDepend iDownloadDependMs = cVar.ms();
                if (iDownloadDependMs == null) {
                    iDownloadDependMs = new IDownloadDepend() {
                        @Override
                        public void monitorLogSend(DownloadInfo downloadInfo2, BaseException baseException, int i3) {
                            if (pt.this.b != null) {
                                pt.this.b.rg(downloadInfo2, baseException, i3);
                            }
                        }
                    };
                }
                List<IDownloadCompleteHandler> downloadCompleteHandlers = DownloadComponentManager.getDownloadCompleteHandlers();
                if (!downloadCompleteHandlers.isEmpty()) {
                    Iterator<IDownloadCompleteHandler> it = downloadCompleteHandlers.iterator();
                    while (it.hasNext()) {
                        cVar.rg(it.next());
                    }
                }
                String strB = cVar.b();
                try {
                    if (!TextUtils.isEmpty(strB)) {
                        jSONObject = new JSONObject(strB);
                    } else {
                        jSONObject = new JSONObject();
                    }
                    jSONObject.put("auto_install_with_notification", cVar.fw());
                    jSONObject.put(DownloadConstants.AUTO_INSTALL_WITHOUT_NOTIFICATION, cVar.c());
                    strB = jSONObject.toString();
                } catch (Throwable unused2) {
                }
                boolean z3 = cVar.pp() || cVar.c();
                if (!z3 || DownloadSetting.obtain(i).optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) < 1) {
                    i2 = i;
                } else {
                    i2 = i;
                    com.ss.android.socialbase.appdownloader.pp.q.rg().rg(i2, cVar.fg());
                }
                final DownloadTask autoInstall = Downloader.with(cVar.getContext()).url(strRg).backUpUrls(cVar.xv()).name(strCd).title(strDf).savePath(str).onlyWifi(cVar.ux()).extraHeaders(listRg).depend(iDownloadDependMs).retryCount(cVar.fo()).backUpUrlRetryCount(cVar.re()).showNotification(z3).extra(strB).mimeType(strHq).minProgressTimeMsInterval(cVar.dj()).maxProgressCount(cVar.go()).mainThreadListener(cVar.rz()).notificationListener(iDownloadListenerBm).notificationEventListener(rg(cVar.om())).force(z2).autoResumed(cVar.z()).showNotificationForAutoResumed(cVar.r()).chunkStategy(cVar.v()).chunkAdjustCalculator(cVar.un()).needHttpsToHttpRetry(cVar.oh()).packageName(cVar.n()).md5(cVar.ou()).expectFileLength(cVar.y()).needRetryDelay(cVar.l()).retryDelayTimeArray(cVar.p()).needDefaultHttpServiceBackUp(cVar.i()).needReuseFirstConnection(cVar.lc()).needReuseChunkRunnable(cVar.k()).needIndependentProcess(cVar.lu()).enqueueType(cVar.oy()).monitorDepend(cVar.ax()).retryDelayTimeCalculator(cVar.d()).headConnectionAvailable(cVar.bj()).fileUriProvider(cVar.m()).diskSpaceHandler(cVar.t()).needChunkDowngradeRetry(cVar.g()).notificationClickCallback(cVar.mc()).downloadSetting(cVar.vd()).iconUrl(cVar.fg()).needSDKMonitor(cVar.fl()).monitorScene(cVar.h()).extraMonitorStatus(cVar.j()).executorGroup(cVar.s()).throttleNetSpeed(cVar.su()).distinctDirectory(cVar.ka()).setAutoInstall(cVar.ey());
                if (autoInstall != null && !cVar.bl().isEmpty()) {
                    autoInstall.setDownloadCompleteHandlers(cVar.bl());
                }
                if (autoInstall != null) {
                    if (z3 && cVar.gk() && cVar.getActivity() != null && !cVar.getActivity().isFinishing() && !com.ss.android.socialbase.appdownloader.pp.pt.rg()) {
                        com.ss.android.socialbase.appdownloader.pp.pt.rg(cVar.getActivity(), new f() {
                            @Override
                            public void rg() {
                                Logger.d(pt.rg, "notification permission granted, start download :" + strDf);
                                pt.this.rg(autoInstall, iQx, z);
                            }

                            @Override
                            public void df() {
                                Logger.d(pt.rg, "notification permission denied, start download :" + strDf);
                                pt.this.rg(autoInstall, iQx, z);
                            }
                        });
                    } else {
                        Logger.d(rg, "notification permission need not request, start download :" + strDf);
                        rg(autoInstall, iQx, z);
                        autoInstall.getDownloadInfo();
                    }
                }
                return i2;
            }
            return 0;
        } catch (Throwable th) {
            DownloadMonitorHelper.monitorSendWithTaskMonitor(cVar.ax(), null, new BaseException(1003, DownloadUtils.getErrorMsgWithTagPrefix(th, "addDownloadTask")), 0);
            Logger.e(rg, String.format("add download task error:%s", th));
            return 0;
        }
    }

    private void rg(DownloadTask downloadTask, int i, boolean z) {
        if (downloadTask == null) {
            return;
        }
        downloadTask.download();
        DownloadInfo downloadInfo = downloadTask.getDownloadInfo();
        if (downloadInfo != null) {
            downloadInfo.setAntiHijackErrorCode(i);
        }
        if (downloadInfo == null || !z) {
            return;
        }
        downloadInfo.setSavePathRedirected(z);
    }

    private List<HttpHeader> rg(List<HttpHeader> list) {
        ArrayList arrayList = new ArrayList();
        boolean z = false;
        if (list != null && list.size() > 0) {
            for (HttpHeader httpHeader : list) {
                if (httpHeader != null && !TextUtils.isEmpty(httpHeader.getName()) && !TextUtils.isEmpty(httpHeader.getValue())) {
                    if (httpHeader.getName().equals("User-Agent")) {
                        z = true;
                    }
                    arrayList.add(new HttpHeader(httpHeader.getName(), httpHeader.getValue()));
                }
            }
        }
        if (!z) {
            arrayList.add(new HttpHeader("User-Agent", com.ss.android.socialbase.appdownloader.df.rg.rg));
        }
        return arrayList;
    }

    public String rg(String str, String str2) {
        return (TextUtils.isEmpty(str) || !str.endsWith(a.g) || q.q(str2)) ? str2 : AdBaseConstants.MIME_APK;
    }

    private IDownloadNotificationEventListener rg(final com.ss.android.socialbase.appdownloader.q.pp ppVar) {
        if (ppVar == null) {
            return null;
        }
        return new IDownloadNotificationEventListener() {
            @Override
            public void onNotificationEvent(int i, DownloadInfo downloadInfo, String str, String str2) {
                if (i != 1 && i != 3) {
                    switch (i) {
                        case 8:
                            ppVar.rg(i, downloadInfo.getPackageName(), str, str2);
                            break;
                        case 9:
                            ppVar.rg(DownloadComponentManager.getAppContext(), str);
                            break;
                        case 10:
                            ppVar.rg(downloadInfo);
                            break;
                    }
                }
                ppVar.rg(i, str, downloadInfo.getStatus(), downloadInfo.getDownloadTime());
            }

            @Override
            public boolean interceptAfterNotificationSuccess(boolean z) {
                return ppVar.rg(z);
            }

            @Override
            public String getNotifyProcessName() {
                return ppVar.rg();
            }
        };
    }

    public DownloadInfo rg(Context context, String str) {
        if (!TextUtils.isEmpty(str) && context != null) {
            try {
                DownloadInfo downloadInfoRg = rg(context, str, ux());
                if (downloadInfoRg == null) {
                    downloadInfoRg = rg(context, str, context.getExternalFilesDir(Environment.DIRECTORY_DOWNLOADS));
                }
                if (downloadInfoRg == null) {
                    downloadInfoRg = rg(context, str, Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS));
                }
                if (downloadInfoRg == null) {
                    downloadInfoRg = rg(context, str, context.getFilesDir());
                }
                return (downloadInfoRg == null && DownloadSetting.obtainGlobal().optBugFix(DownloadSettingKeys.BugFix.BUGFIX_GET_DOWNLOAD_INFO_BY_LIST)) ? df(context, str) : downloadInfoRg;
            } catch (Throwable th) {
                Logger.d(rg, String.format("getAppDownloadInfo error:%s", th.getMessage()));
            }
        }
        return null;
    }

    private DownloadInfo rg(Context context, String str, File file) {
        if (context == null || TextUtils.isEmpty(str) || file == null) {
            return null;
        }
        return Downloader.getInstance(context).getDownloadInfo(str, file.getAbsolutePath());
    }

    private DownloadInfo df(Context context, String str) {
        List<DownloadInfo> downloadInfoList = Downloader.getInstance(context).getDownloadInfoList(str);
        if (downloadInfoList == null) {
            return null;
        }
        for (DownloadInfo downloadInfo : downloadInfoList) {
            if (downloadInfo != null && downloadInfo.isSavePathRedirected()) {
                return downloadInfo;
            }
        }
        return null;
    }

    public List<DownloadInfo> rg(Context context) {
        return Downloader.getInstance(context).getUnCompletedDownloadInfosWithMimeType(AdBaseConstants.MIME_APK);
    }

    public List<DownloadInfo> df(Context context) {
        return Downloader.getInstance(context).getDownloadingDownloadInfosWithMimeType(AdBaseConstants.MIME_APK);
    }

    public oh b() {
        return this.oh;
    }

    public com.ss.android.socialbase.appdownloader.q.fw hq() {
        return this.hq;
    }

    public void rg(com.ss.android.socialbase.appdownloader.q.fw fwVar) {
        this.hq = fwVar;
    }

    public IReserveWifiStatusListener oh() {
        return Downloader.getInstance(DownloadComponentManager.getAppContext()).getReserveWifiStatusListener();
    }

    public void rg(IReserveWifiStatusListener iReserveWifiStatusListener) {
        Downloader.getInstance(DownloadComponentManager.getAppContext()).setReserveWifiStatusListener(iReserveWifiStatusListener);
    }

    public void rg(IInstallAppHandler iInstallAppHandler) {
        this.un = iInstallAppHandler;
    }

    public IInstallAppHandler f() {
        return this.un;
    }

    public void rg(IOpenInstallerListener iOpenInstallerListener) {
        this.z = iOpenInstallerListener;
    }

    public IOpenInstallerListener v() {
        return this.z;
    }
}
