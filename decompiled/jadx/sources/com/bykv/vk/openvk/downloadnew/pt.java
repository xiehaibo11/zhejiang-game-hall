package com.bykv.vk.openvk.downloadnew;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Environment;
import android.text.TextUtils;
import android.widget.Toast;
import com.bykv.vk.openvk.TTAppContextHolder;
import com.bykv.vk.openvk.TTDownloadEventLogger;
import com.bykv.vk.openvk.TTVfConstant;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfSdk;
import com.bykv.vk.openvk.downloadnew.core.DialogBuilder;
import com.bykv.vk.openvk.downloadnew.core.ExitInstallListener;
import com.bykv.vk.openvk.downloadnew.core.IDialogStatusChangedListener;
import com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter;
import com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor;
import com.bykv.vk.openvk.downloadnew.core.ITTHttpCallback;
import com.bykv.vk.openvk.downloadnew.core.ITTPermissionCallback;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.bykv.vk.openvk.downloadnew.q;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.config.fw;
import com.ss.android.download.api.config.hq;
import com.ss.android.download.api.config.n;
import com.ss.android.download.api.config.r;
import com.ss.android.download.api.config.rz;
import com.ss.android.download.api.config.z;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.model.DownloadAlertDialogInfo;
import com.ss.android.download.api.model.rg;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.downloadlib.addownload.rg.rg;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.df.bm;
import com.ss.android.downloadlib.ux;
import com.ss.android.socialbase.downloader.depend.IDownloadSettings;
import com.ss.android.socialbase.downloader.depend.IInstallAppHandler;
import com.ss.android.socialbase.downloader.downloader.DownloaderBuilder;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import com.ss.android.socialbase.downloader.network.IDownloadHttpConnection;
import com.ss.android.socialbase.downloader.network.IDownloadHttpService;
import java.io.IOException;
import java.io.InputStream;
import java.lang.ref.WeakReference;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class pt {
    private static Map<Integer, ITTDownloadAdapter.OnEventLogHandler> c;
    private static final com.ss.android.download.api.download.rg.rg fw;
    private static Context pp;
    public static ITTDownloadVisitor q;
    public static volatile String rg;
    private static final AtomicBoolean pt = new AtomicBoolean(false);
    public static boolean df = true;

    private static boolean c() {
        return false;
    }

    static {
        try {
            rg = Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS).getPath();
        } catch (Throwable unused) {
        }
        fw = new com.ss.android.download.api.download.rg.rg() { // from class: com.bykv.vk.openvk.downloadnew.pt.6
            @Override // com.ss.android.download.api.download.rg.rg
            public void rg(DownloadModel downloadModel, DownloadController downloadController, DownloadEventConfig downloadEventConfig) {
                com.bykv.vk.openvk.api.rg.df("TTDownloadVisitor", "completeListener: onDownloadStart");
            }

            @Override // com.ss.android.download.api.download.rg.rg
            public void rg(DownloadInfo downloadInfo, String str) {
                com.bykv.vk.openvk.api.rg.df("TTDownloadVisitor", "completeListener: onDownloadFinished");
            }

            @Override // com.ss.android.download.api.download.rg.rg
            public void df(DownloadInfo downloadInfo, String str) {
                com.bykv.vk.openvk.api.rg.df("TTDownloadVisitor", "completeListener: onInstalled");
                pt.q(str);
            }

            @Override // com.ss.android.download.api.download.rg.rg
            public void rg(DownloadInfo downloadInfo, BaseException baseException, String str) {
                com.bykv.vk.openvk.api.rg.df("TTDownloadVisitor", "completeListener: onDownloadFailed");
            }

            @Override // com.ss.android.download.api.download.rg.rg
            public void rg(DownloadInfo downloadInfo) {
                com.bykv.vk.openvk.api.rg.df("TTDownloadVisitor", "completeListener: onCanceled");
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static ITTDownloadVisitor pp() {
        ITTDownloadVisitor iTTDownloadVisitor = q;
        if (iTTDownloadVisitor != null) {
            return iTTDownloadVisitor;
        }
        TTVfManager vfManager = TTVfSdk.getVfManager();
        if (vfManager == null) {
            return null;
        }
        return (ITTDownloadVisitor) vfManager.getExtra(ITTDownloadVisitor.class, com.bykv.vk.openvk.downloadnew.df.rg(1));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void q(String str) {
        com.ss.android.downloadad.api.rg.df dfVarRg;
        JSONObject jSONObjectFw;
        if (TextUtils.isEmpty(str) || (dfVarRg = c.rg().rg(str)) == null || (jSONObjectFw = dfVarRg.fw()) == null || pp() == null) {
            return;
        }
        pp().checkAutoControl(jSONObjectFw, str);
    }

    public static void rg(Context context) {
        if (context == null) {
            context = TTAppContextHolder.getContext();
        }
        if (context == null || pt.get()) {
            return;
        }
        synchronized (pt.class) {
            if (!pt.get()) {
                pp = context.getApplicationContext();
                if (pp() != null) {
                    String strInitPath = pp().initPath(df);
                    if (!TextUtils.isEmpty(strInitPath)) {
                        rg = strInitPath;
                    }
                }
                pt.set(df(pp));
            }
        }
    }

    public static void rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        rg = str;
    }

    public static ux rg() {
        rg(getContext());
        return ux.rg(getContext());
    }

    public static boolean rg(Context context, Uri uri, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, IDownloadButtonClickListener iDownloadButtonClickListener) {
        return rg().pp().rg(context, uri, downloadModel, downloadEventConfig, downloadController, iDownloadButtonClickListener);
    }

    public static boolean rg(Context context, Uri uri, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController) {
        return rg().pp().rg(context, uri, downloadModel, downloadEventConfig, downloadController);
    }

    public static boolean rg(Uri uri) {
        return bm.rg(uri);
    }

    public static void df() {
        rg().fw();
        if (pp() != null) {
            pp().clearAllData(rg);
        }
    }

    public static void rg(int i) {
        Map<Integer, ITTDownloadAdapter.OnEventLogHandler> map = c;
        if (map != null) {
            map.remove(Integer.valueOf(i));
        }
    }

    public static void rg(int i, ITTDownloadAdapter.OnEventLogHandler onEventLogHandler) {
        if (onEventLogHandler != null) {
            if (c == null) {
                c = Collections.synchronizedMap(new WeakHashMap());
            }
            c.put(Integer.valueOf(i), onEventLogHandler);
        }
    }

    public static Map<Integer, ITTDownloadAdapter.OnEventLogHandler> q() {
        return c;
    }

    public static boolean rg(String str, String str2, JSONObject jSONObject, Object obj) {
        Map<Integer, ITTDownloadAdapter.OnEventLogHandler> mapQ;
        boolean z = false;
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2) && jSONObject != null && (mapQ = q()) != null) {
            for (Map.Entry<Integer, ITTDownloadAdapter.OnEventLogHandler> entry : mapQ.entrySet()) {
                int iIntValue = entry.getKey().intValue();
                ITTDownloadAdapter.OnEventLogHandler value = entry.getValue();
                if (value != null) {
                    boolean zOnEventLog = value.onEventLog(iIntValue, jSONObject.toString(), str, str2, obj);
                    if (!z && !zOnEventLog) {
                        z = true;
                    }
                }
            }
        }
        return z;
    }

    private static boolean df(Context context) {
        com.ss.android.download.api.rg rgVarRg;
        if (context == null) {
            return false;
        }
        Context applicationContext = context.getApplicationContext();
        String packageName = applicationContext.getPackageName();
        if (TextUtils.isEmpty(packageName)) {
            packageName = "";
        }
        if (c()) {
            try {
                rgVarRg = ux.rg(applicationContext).rg(AdBaseConstants.DownloadConfigureName.PANGOLIN);
            } catch (Throwable unused) {
                rgVarRg = ux.rg(applicationContext).rg();
            }
        } else {
            rgVarRg = ux.rg(applicationContext).rg();
        }
        if (rgVarRg == null) {
            return false;
        }
        rgVarRg.rg(new q()).rg(new rg()).rg(new C0049pt(applicationContext)).rg(new df()).rg(new com.ss.android.download.api.config.bm() { // from class: com.bykv.vk.openvk.downloadnew.pt.3
            @Override // com.ss.android.download.api.config.bm
            public JSONObject rg() {
                if (pt.pp() != null) {
                    return pt.pp().getDownloadSettings();
                }
                return new JSONObject();
            }
        }).rg(new com.ss.android.download.api.config.df() { // from class: com.bykv.vk.openvk.downloadnew.pt.2
            @Override // com.ss.android.download.api.config.df
            public boolean rg() {
                if (pt.pp() != null) {
                    return pt.pp().getAppIsBackground();
                }
                return false;
            }
        }).rg(new rg.C0346rg().df("143").rg(TTVfConstant.APP_NAME).q("5.1.1.4").pt(String.valueOf(5114)).rg()).rg(new z() { // from class: com.bykv.vk.openvk.downloadnew.pt.1
            @Override // com.ss.android.download.api.config.z
            public byte[] rg(byte[] bArr, int i) {
                return new byte[0];
            }
        }).rg(packageName + ".TTFileProvider").rg(rg(applicationContext, pp() != null ? pp().getDownloadSettings() : new JSONObject())).rg();
        com.ss.android.downloadlib.utils.rg.rg();
        ux.rg(applicationContext).pt().rg(1);
        ux.rg(applicationContext).rg(fw);
        com.ss.android.socialbase.appdownloader.pt.bm().rg(new IInstallAppHandler() { // from class: com.bykv.vk.openvk.downloadnew.pt.4
            @Override // com.ss.android.socialbase.downloader.depend.IInstallAppHandler
            public boolean installApp(Intent intent) {
                return false;
            }
        });
        TTDownloadEventLogger tTDownloadEventLogger = pp().getTTDownloadEventLogger();
        if (tTDownloadEventLogger != null) {
            tTDownloadEventLogger.onDownloadConfigReady();
        }
        return true;
    }

    private static DownloaderBuilder rg(Context context, JSONObject jSONObject) {
        return new DownloaderBuilder(context).downloadSetting(new IDownloadSettings() { // from class: com.bykv.vk.openvk.downloadnew.pt.5
            @Override // com.ss.android.socialbase.downloader.depend.IDownloadSettings
            public JSONObject get() {
                if (pt.pp() != null) {
                    return pt.pp().getDownloadSettings();
                }
                return new JSONObject();
            }
        }).downloadExpSwitch(jSONObject.optInt("download_exp_switch_temp", 1040187391)).httpService(new pp());
    }

    public static boolean rg(Context context, String str) {
        if (context != null && !TextUtils.isEmpty(str)) {
            List<DownloadInfo> listDf = com.ss.android.socialbase.appdownloader.pt.bm().df(context);
            if (!listDf.isEmpty()) {
                for (DownloadInfo downloadInfo : listDf) {
                    if (downloadInfo != null && str.equals(downloadInfo.getUrl())) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    private static Context getContext() {
        Context context = pp;
        return context == null ? TTAppContextHolder.getContext() : context;
    }

    private static class q implements rz {
        @Override // com.ss.android.download.api.config.rz
        public void rg(Activity activity, int i, String[] strArr, int[] iArr) {
        }

        @Override // com.ss.android.download.api.config.rz
        public void rg(Activity activity, String[] strArr, final n nVar) {
            if (pt.pp() != null) {
                pt.pp().requestPermission(activity, strArr, new ITTPermissionCallback() { // from class: com.bykv.vk.openvk.downloadnew.pt.q.1
                    @Override // com.bykv.vk.openvk.downloadnew.core.ITTPermissionCallback
                    public void onGranted() {
                        n nVar2 = nVar;
                        if (nVar2 != null) {
                            nVar2.rg();
                        }
                    }

                    @Override // com.bykv.vk.openvk.downloadnew.core.ITTPermissionCallback
                    public void onDenied(String str) {
                        n nVar2 = nVar;
                        if (nVar2 != null) {
                            nVar2.rg(str);
                        }
                    }
                });
            }
        }

        @Override // com.ss.android.download.api.config.rz
        public boolean rg(Context context, String str) {
            if (pt.pp() != null) {
                return pt.pp().hasPermission(context, str);
            }
            return false;
        }
    }

    private static class df implements com.ss.android.download.api.config.ux {
        private df() {
        }

        /* JADX WARN: Removed duplicated region for block: B:13:0x0025  */
        @Override // com.ss.android.download.api.config.ux
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public void rg(java.lang.String r5, java.lang.String r6, java.util.Map<java.lang.String, java.lang.Object> r7, final com.ss.android.download.api.config.r r8) {
            /*
                r4 = this;
                int r0 = r5.hashCode()
                r1 = 70454(0x11336, float:9.8727E-41)
                r2 = 1
                r3 = 0
                if (r0 == r1) goto L1b
                r1 = 2461856(0x2590a0, float:3.449795E-39)
                if (r0 == r1) goto L11
                goto L25
            L11:
                java.lang.String r0 = "POST"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L25
                r5 = r2
                goto L26
            L1b:
                java.lang.String r0 = "GET"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L25
                r5 = r3
                goto L26
            L25:
                r5 = -1
            L26:
                if (r5 == 0) goto L2a
                if (r5 == r2) goto L2b
            L2a:
                r2 = r3
            L2b:
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r5 = com.bykv.vk.openvk.downloadnew.pt.pt()
                if (r5 == 0) goto L3d
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r5 = com.bykv.vk.openvk.downloadnew.pt.pt()
                com.bykv.vk.openvk.downloadnew.pt$df$1 r0 = new com.bykv.vk.openvk.downloadnew.pt$df$1
                r0.<init>()
                r5.execute(r2, r6, r7, r0)
            L3d:
                return
            */
            throw new UnsupportedOperationException("Method not decompiled: com.bykv.vk.openvk.downloadnew.pt.df.rg(java.lang.String, java.lang.String, java.util.Map, com.ss.android.download.api.config.r):void");
        }

        @Override // com.ss.android.download.api.config.ux
        public void rg(String str, byte[] bArr, String str2, int i, final r rVar) {
            if (pt.pp() != null) {
                pt.pp().postBody(str, bArr, str2, new ITTHttpCallback() { // from class: com.bykv.vk.openvk.downloadnew.pt.df.2
                    @Override // com.bykv.vk.openvk.downloadnew.core.ITTHttpCallback
                    public void onResponse(String str3) {
                        r rVar2 = rVar;
                        if (rVar2 != null) {
                            rVar2.rg(str3);
                        }
                    }

                    @Override // com.bykv.vk.openvk.downloadnew.core.ITTHttpCallback
                    public void onError(Throwable th) {
                        r rVar2 = rVar;
                        if (rVar2 != null) {
                            rVar2.rg(th);
                        }
                    }
                });
            }
        }
    }

    public static class pp implements IDownloadHttpService {
        @Override // com.ss.android.socialbase.downloader.network.IDownloadHttpService
        public IDownloadHttpConnection downloadWithConnection(int i, String str, List<HttpHeader> list) throws IOException {
            final q.rg rgVarRg = com.bykv.vk.openvk.downloadnew.q.rg(str, list);
            if (rgVarRg != null) {
                return new IDownloadHttpConnection() { // from class: com.bykv.vk.openvk.downloadnew.pt.pp.1
                    @Override // com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection
                    public void cancel() {
                    }

                    @Override // com.ss.android.socialbase.downloader.network.IDownloadHttpConnection
                    public InputStream getInputStream() {
                        return rgVarRg.rg;
                    }

                    @Override // com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection
                    public String getResponseHeaderField(String str2) {
                        if (rgVarRg.df != null) {
                            return rgVarRg.df.get(str2);
                        }
                        return null;
                    }

                    @Override // com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection
                    public int getResponseCode() {
                        return rgVarRg.q;
                    }

                    @Override // com.ss.android.socialbase.downloader.network.IDownloadHttpConnection
                    public void end() {
                        try {
                            rgVarRg.pt.disconnect();
                        } catch (Exception unused) {
                        }
                    }
                };
            }
            return null;
        }
    }

    /* JADX INFO: renamed from: com.bykv.vk.openvk.downloadnew.pt$pt, reason: collision with other inner class name */
    public static class C0049pt implements hq {
        private final WeakReference<Context> rg;

        public C0049pt(Context context) {
            this.rg = new WeakReference<>(context);
        }

        @Override // com.ss.android.download.api.config.hq
        public void rg(int i, Context context, DownloadModel downloadModel, String str, Drawable drawable, int i2) {
            try {
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                Toast.makeText(context, str, 0).show();
            } catch (Exception e) {
                Logger.e("LibUIFactory", "showToastWithDuration e " + e.getMessage());
            }
        }

        @Override // com.ss.android.download.api.config.hq
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public AlertDialog df(DownloadAlertDialogInfo downloadAlertDialogInfo) {
            if (downloadAlertDialogInfo != null && pt.pp() != null) {
                if (downloadAlertDialogInfo.rg != null && (downloadAlertDialogInfo.rg instanceof Activity)) {
                    return pt.pp().showDialogBySelf((Activity) downloadAlertDialogInfo.rg, downloadAlertDialogInfo.bm == 1, q(downloadAlertDialogInfo));
                }
                pt.pp().showDialogByDelegate(this.rg, downloadAlertDialogInfo.bm == 1, q(downloadAlertDialogInfo));
            }
            return null;
        }

        private DialogBuilder q(final DownloadAlertDialogInfo downloadAlertDialogInfo) {
            return DialogBuilder.builder().setTitle(downloadAlertDialogInfo.df).setMessage(downloadAlertDialogInfo.q).setNegativeBtnText(downloadAlertDialogInfo.pp).setPositiveBtnText(downloadAlertDialogInfo.pt).setIcon(downloadAlertDialogInfo.fw).setDialogStatusChangedListener(new IDialogStatusChangedListener() { // from class: com.bykv.vk.openvk.downloadnew.pt.pt.1
                @Override // com.bykv.vk.openvk.downloadnew.core.IDialogStatusChangedListener
                public void onPositiveBtnClick(DialogInterface dialogInterface) {
                    if (downloadAlertDialogInfo.ux != null) {
                        downloadAlertDialogInfo.ux.rg(dialogInterface);
                    }
                }

                @Override // com.bykv.vk.openvk.downloadnew.core.IDialogStatusChangedListener
                public void onNegativeBtnClick(DialogInterface dialogInterface) {
                    if (downloadAlertDialogInfo.ux != null) {
                        try {
                            downloadAlertDialogInfo.ux.df(dialogInterface);
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                }

                @Override // com.bykv.vk.openvk.downloadnew.core.IDialogStatusChangedListener
                public void onCancel(DialogInterface dialogInterface) {
                    if (downloadAlertDialogInfo.ux != null) {
                        downloadAlertDialogInfo.ux.q(dialogInterface);
                    }
                }
            });
        }
    }

    public static class rg implements fw {
        @Override // com.ss.android.download.api.config.fw
        public void rg(com.ss.android.download.api.model.df dfVar) {
            com.bykv.vk.openvk.api.rg.df("LibEventLogger", "onV3Event");
            rg(dfVar, true);
        }

        @Override // com.ss.android.download.api.config.fw
        public void df(com.ss.android.download.api.model.df dfVar) {
            com.bykv.vk.openvk.api.rg.df("LibEventLogger", "onEvent called");
            rg(dfVar, false);
            q(dfVar);
        }

        private void q(com.ss.android.download.api.model.df dfVar) {
            if (dfVar == null) {
                return;
            }
            Object objHq = dfVar.hq();
            TTDownloadEventModel label = TTDownloadEventModel.builder().setTag(dfVar.df()).setExtJson(dfVar.ux()).setMaterialMeta(objHq instanceof JSONObject ? (JSONObject) objHq : null).setLabel(dfVar.q());
            boolean z = EventConstants.Tag.NOTIFICATION.equals(dfVar.df()) || EventConstants.Tag.LANDING_H5_DOWNLOAD_AD_BUTTON.equals(dfVar.df());
            if (pt.pp() != null) {
                pt.pp().executeLogUpload(label, z);
            }
        }

        private void rg(com.ss.android.download.api.model.df dfVar, boolean z) {
            TTDownloadEventLogger tTDownloadEventLogger;
            if (pt.pp() == null || (tTDownloadEventLogger = pt.pp().getTTDownloadEventLogger()) == null || dfVar == null) {
                return;
            }
            if (tTDownloadEventLogger.shouldFilterOpenSdkLog() && pt.pp().isOpenSdkEvent(dfVar.toString())) {
                return;
            }
            if (z) {
                tTDownloadEventLogger.onV3Event(pt.df(dfVar));
            } else {
                tTDownloadEventLogger.onEvent(pt.df(dfVar));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static JSONObject df(com.ss.android.download.api.model.df dfVar) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("category", dfVar.rg());
            jSONObject.put(RemoteMessageConst.Notification.TAG, dfVar.df());
            jSONObject.put(TTDownloadField.TT_LABEL, dfVar.q());
            jSONObject.put("isAd", dfVar.pt());
            jSONObject.put("adId", dfVar.pp());
            jSONObject.put(TTDownloadField.TT_LOG_EXTRA, dfVar.c());
            jSONObject.put("extValue", dfVar.fw());
            jSONObject.put("extJson", dfVar.ux());
            jSONObject.put("paramsJson", dfVar.rz());
            jSONObject.put("eventSource", dfVar.b());
            jSONObject.put("extraObject", dfVar.hq());
            jSONObject.put("clickTrackUrl", (Object) dfVar.bm());
            jSONObject.put("isV3", dfVar.oh());
            jSONObject.put("V3EventName", dfVar.f());
            jSONObject.put("V3EventParams", dfVar.v());
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    public static boolean rg(Activity activity, final ExitInstallListener exitInstallListener) {
        return com.ss.android.downloadlib.addownload.rg.rg.rg().rg(activity, false, new rg.InterfaceC0347rg() { // from class: com.bykv.vk.openvk.downloadnew.pt.7
            @Override // com.ss.android.downloadlib.addownload.rg.rg.InterfaceC0347rg
            public void rg() {
                ExitInstallListener exitInstallListener2 = exitInstallListener;
                if (exitInstallListener2 != null) {
                    exitInstallListener2.onExitInstall();
                }
            }
        });
    }
}
