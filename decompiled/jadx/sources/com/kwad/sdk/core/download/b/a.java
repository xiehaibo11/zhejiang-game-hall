package com.kwad.sdk.core.download.b;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.SparseArray;
import android.widget.RemoteViews;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.kwad.sdk.DownloadTask;
import com.kwad.sdk.api.push.KsNotificationCompat;
import com.kwad.sdk.core.download.DownloadParams;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.d;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import com.kwad.sdk.utils.ar;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.io.File;
import java.lang.ref.WeakReference;
import java.util.HashMap;

/* JADX INFO: loaded from: classes2.dex */
public final class a implements d {
    private static c anU;
    private static HashMap<String, WeakReference<Bitmap>> anT = new HashMap<>();
    private static final Handler anV = new HandlerC0209a();

    /* JADX INFO: renamed from: com.kwad.sdk.core.download.b.a$a, reason: collision with other inner class name */
    static class HandlerC0209a extends Handler {
        private final SparseArray<Long> anW;

        HandlerC0209a() {
            super(Looper.getMainLooper());
            this.anW = new SparseArray<>();
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            boolean z = message.arg1 == 1;
            boolean z2 = message.arg2 == 1;
            boolean z3 = message.arg2 == 2;
            Long l = this.anW.get(message.what);
            NotificationManager notificationManager = (NotificationManager) com.kwad.sdk.c.wP().getContext().getSystemService(RemoteMessageConst.NOTIFICATION);
            if (notificationManager == null) {
                return;
            }
            if (com.kwad.sdk.c.wP().bL(message.what) == null && !z3) {
                removeMessages(message.what);
                notificationManager.cancel(message.what);
            } else {
                if (!z && l != null && System.currentTimeMillis() - l.longValue() < 110) {
                    sendMessageDelayed(Message.obtain(message), (l.longValue() + 110) - System.currentTimeMillis());
                    return;
                }
                if (z2) {
                    notificationManager.cancel(message.what);
                }
                a.a(message.what, (Notification) message.obj);
                this.anW.put(message.what, Long.valueOf(System.currentTimeMillis()));
            }
        }
    }

    static class b {
        private static String anX = "ksad_notification_default_icon";
        private String Xj;
        private String anY;
        private String anZ;
        private String aob;
        private String name;
        private int progress;
        private File aoa = null;
        private boolean aoc = false;

        private b() {
        }

        public static String AB() {
            return anX;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static b a(DownloadTask downloadTask, String str, String str2) {
            b bVar = new b();
            Object tag = downloadTask.getTag();
            if (tag instanceof DownloadParams) {
                DownloadParams downloadParams = (DownloadParams) tag;
                File fileBR = ((com.kwad.sdk.service.a.c) ServiceProvider.get(com.kwad.sdk.service.a.c.class)).bR(downloadParams.mAppIcon);
                if (fileBR != null && fileBR.exists()) {
                    bVar.aoa = fileBR;
                }
                bVar.name = downloadParams.mAppName;
            }
            bVar.aoc = downloadTask.isPaused();
            bVar.Xj = str;
            bVar.aob = str2;
            bVar.anY = a.W(downloadTask.getSmallFileSoFarBytes()) + " / " + a.W(downloadTask.getSmallFileTotalBytes());
            bVar.anZ = a.W((long) downloadTask.getSmallFileTotalBytes());
            bVar.progress = (int) ((((float) downloadTask.getSmallFileSoFarBytes()) * 100.0f) / ((float) downloadTask.getSmallFileTotalBytes()));
            return bVar;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static b a(DownloadParams downloadParams, String str, String str2) {
            File fileBR;
            b bVar = new b();
            bVar.name = downloadParams.mAppName;
            if (!TextUtils.isEmpty(downloadParams.mAppIcon) && (fileBR = ((com.kwad.sdk.service.a.c) ServiceProvider.get(com.kwad.sdk.service.a.c.class)).bR(downloadParams.mAppIcon)) != null && fileBR.exists()) {
                bVar.aoa = fileBR;
            }
            bVar.Xj = str;
            bVar.anZ = a.W(downloadParams.mAppSize);
            bVar.aob = str2;
            return bVar;
        }

        public final String AC() {
            return this.anY;
        }

        public final String AD() {
            return this.anZ;
        }

        public final String AE() {
            return this.Xj;
        }

        public final File AF() {
            return this.aoa;
        }

        public final String AG() {
            return "正在下载 " + this.progress + "%";
        }

        public final String AH() {
            return this.aob;
        }

        public final String getName() {
            String str = this.name;
            return str == null ? "" : str;
        }

        public final int getProgress() {
            return this.progress;
        }

        public final boolean isPaused() {
            return this.aoc;
        }
    }

    static class c extends BroadcastReceiver {
        private static void e(Intent intent) {
            DownloadTask downloadTaskG = g(intent);
            if (downloadTaskG == null) {
                return;
            }
            com.kwad.sdk.c.wP().bN(downloadTaskG.getId());
        }

        private static void f(Intent intent) {
            DownloadTask downloadTaskG = g(intent);
            if (downloadTaskG == null) {
                return;
            }
            downloadTaskG.setNotificationRemoved(true);
        }

        private static DownloadTask g(Intent intent) {
            int i = intent.getExtras().getInt(DBDefinition.TASK_ID, 0);
            if (i == 0) {
                return null;
            }
            return com.kwad.sdk.c.wP().bL(i);
        }

        @Override // android.content.BroadcastReceiver
        public final void onReceive(Context context, Intent intent) {
            if (intent == null || intent.getExtras() == null) {
                return;
            }
            String action = intent.getAction();
            if ("com.ksad.action.ACTION_NOTIFICATION_CLICK_CONTROL_BTN".equals(action)) {
                e(intent);
            } else if ("com.ksad.action.ACTION_NOTIFICATION_REMOVED".equals(action)) {
                f(intent);
            }
        }
    }

    private static Bitmap A(Context context, String str) {
        WeakReference<Bitmap> weakReference = anT.get(str);
        Bitmap bitmap = weakReference != null ? weakReference.get() : null;
        if (bitmap != null && !bitmap.isRecycled()) {
            return bitmap;
        }
        Bitmap bitmapDecodeResource = BitmapFactory.decodeResource(ar.ct(context), ar.ar(context, str));
        anT.put(str, new WeakReference<>(bitmapDecodeResource));
        return bitmapDecodeResource;
    }

    private static void AA() {
        if (anU != null) {
            return;
        }
        anU = new c();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.ksad.action.ACTION_NOTIFICATION_CLICK_CONTROL_BTN");
        intentFilter.addAction("com.ksad.action.ACTION_NOTIFICATION_REMOVED");
        ServiceProvider.HD().registerReceiver(anU, intentFilter);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String W(long j) {
        return String.format("%.2fMB", Float.valueOf((j / 1000.0f) / 1000.0f));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(int i, Notification notification) {
        AA();
        NotificationManager notificationManager = (NotificationManager) ServiceProvider.HD().getSystemService(RemoteMessageConst.NOTIFICATION);
        try {
            if (Build.VERSION.SDK_INT >= 26) {
                NotificationChannel notificationChannel = new NotificationChannel("download_channel", "ksad", 3);
                notificationChannel.enableLights(false);
                notificationChannel.enableVibration(false);
                notificationChannel.setSound(null, null);
                notificationChannel.setShowBadge(false);
                notificationManager.createNotificationChannel(notificationChannel);
            }
            notificationManager.notify(i, notification);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    private static void a(Context context, RemoteViews remoteViews, boolean z, boolean z2, PendingIntent pendingIntent, int i, int i2, int i3) {
        KsNotificationCompat.Builder builder = new KsNotificationCompat.Builder(context, "download_channel");
        builder.setContent(remoteViews).setWhen(System.currentTimeMillis()).setOngoing(false).setAutoCancel(false).setOnlyAlertOnce(true).setPriority(-1).setContentIntent(pendingIntent).setSmallIcon(ar.ar(context, "ksad_notification_small_icon"));
        if (z2) {
            builder.setDeleteIntent(b(context, "com.ksad.action.ACTION_NOTIFICATION_REMOVED", i));
        }
        anV.removeMessages(i);
        anV.obtainMessage(i, i2, i3, builder.build()).sendToTarget();
    }

    private void a(Context context, com.kwad.sdk.core.download.b.b bVar, b bVar2) {
        bVar.setName(bVar2.getName());
        File fileAF = bVar2.AF();
        if (!((fileAF == null || !fileAF.exists()) ? false : a(bVar, fileAF))) {
            a(context, bVar, b.AB());
        }
        bVar.setStatus(bVar2.AE());
        bVar.setSize(bVar2.AD());
        bVar.setInstallText(bVar2.AH());
    }

    private void a(Context context, com.kwad.sdk.core.download.b.c cVar, b bVar) {
        cVar.setName(bVar.getName());
        File fileAF = bVar.AF();
        if (!((fileAF == null || !fileAF.exists()) ? false : a(cVar, fileAF))) {
            a(context, cVar, b.AB());
        }
        cVar.setStatus(bVar.AE());
        cVar.setSize(bVar.AC());
        cVar.setPercentNum(bVar.AG());
        cVar.setProgress(100, bVar.getProgress(), false);
        cVar.setControlBtnPaused(bVar.isPaused());
    }

    private boolean a(Context context, com.kwad.sdk.core.download.b.b bVar, String str) {
        try {
            bVar.setIcon(A(context, str));
            return true;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            com.kwad.sdk.service.c.gatherException(e);
            return false;
        }
    }

    private boolean a(Context context, com.kwad.sdk.core.download.b.c cVar, String str) {
        try {
            cVar.setIcon(A(context, str));
            return true;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            com.kwad.sdk.service.c.gatherException(e);
            return false;
        }
    }

    private boolean a(com.kwad.sdk.core.download.b.b bVar, File file) {
        try {
            bVar.setIcon(q(file));
            return true;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            com.kwad.sdk.service.c.gatherException(e);
            return false;
        }
    }

    private boolean a(com.kwad.sdk.core.download.b.c cVar, File file) {
        try {
            cVar.setIcon(q(file));
            return true;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            com.kwad.sdk.service.c.gatherException(e);
            return false;
        }
    }

    private static PendingIntent b(Context context, String str, int i) {
        Intent intent = new Intent(str);
        intent.putExtra(DBDefinition.TASK_ID, i);
        return PendingIntent.getBroadcast(context, i, intent, 0);
    }

    private static DownloadParams n(DownloadTask downloadTask) {
        if (downloadTask == null) {
            return null;
        }
        Object tag = downloadTask.getTag();
        DownloadParams downloadParams = tag instanceof DownloadParams ? (DownloadParams) tag : new DownloadParams();
        downloadParams.mAppSize = downloadTask.getSmallFileTotalBytes();
        downloadParams.mTaskId = downloadTask.getId();
        downloadParams.filePath = downloadTask.getTargetFilePath();
        return downloadParams;
    }

    private static Bitmap q(File file) {
        String absolutePath = file.getAbsolutePath();
        WeakReference<Bitmap> weakReference = anT.get(absolutePath);
        Bitmap bitmap = weakReference != null ? weakReference.get() : null;
        if (bitmap != null && !bitmap.isRecycled()) {
            return bitmap;
        }
        Bitmap bitmapDecodeFile = BitmapFactory.decodeFile(absolutePath);
        anT.put(absolutePath, new WeakReference<>(bitmapDecodeFile));
        return bitmapDecodeFile;
    }

    @Override // com.kwad.sdk.d
    public final void a(DownloadTask downloadTask, boolean z) {
        com.kwad.sdk.core.download.b.c cVarA;
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null || downloadTask.isNotificationRemoved() || (cVarA = com.kwad.sdk.core.download.b.c.a(context, downloadTask.getId(), downloadTask.downloadEnablePause)) == null) {
            return;
        }
        a(context, cVarA, b.a(downloadTask, "正在下载", (String) null));
        a(context, cVarA.build(), false, true, null, downloadTask.getId(), z ? 1 : 0, downloadTask.isCompleted() ? 1 : 0);
    }

    @Override // com.kwad.sdk.d
    public final void bO(int i) {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null) {
            return;
        }
        ((NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION)).cancel(i);
    }

    @Override // com.kwad.sdk.d
    public final void bQ(String str) {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        DownloadParams downloadParamsCp = com.kwad.sdk.core.a.yT().cp(str);
        com.kwad.sdk.core.a.yT().cq(str);
        if (context == null || downloadParamsCp == null) {
            return;
        }
        com.kwad.sdk.core.a.yT().cq(downloadParamsCp.filePath);
        b bVarA = b.a(downloadParamsCp, "安装完成", "立刻打开");
        com.kwad.sdk.core.download.b.b bVarAW = com.kwad.sdk.core.download.b.b.aW(context);
        if (bVarAW == null) {
            return;
        }
        a(context, bVarAW, bVarA);
        a(context, bVarAW.build(), false, false, com.kwad.sdk.e.m(downloadParamsCp.mPkgname, downloadParamsCp.mTaskId), downloadParamsCp.mTaskId, 1, 2);
    }

    @Override // com.kwad.sdk.d
    public final void g(File file) {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        DownloadParams downloadParamsCp = com.kwad.sdk.core.a.yT().cp(file.getAbsolutePath());
        com.kwad.sdk.core.a.yT().cq(file.getAbsolutePath());
        if (context == null || downloadParamsCp == null) {
            return;
        }
        AdTemplate adTemplateCr = com.kwad.sdk.core.a.yT().cr(downloadParamsCp.mDownloadid);
        if (adTemplateCr != null) {
            adTemplateCr.installFrom = "recall";
            com.kwad.sdk.core.download.c.Aw().aq(adTemplateCr);
        }
        b bVarA = b.a(downloadParamsCp, "下载完成", "立即安装");
        com.kwad.sdk.core.download.b.b bVarAW = com.kwad.sdk.core.download.b.b.aW(context);
        if (bVarAW == null) {
            return;
        }
        a(context, bVarAW, bVarA);
        a(context, bVarAW.build(), false, false, com.kwad.sdk.e.a(file, downloadParamsCp.mTaskId, downloadParamsCp.requestInstallPermission), downloadParamsCp.mTaskId, 1, 2);
    }

    @Override // com.kwad.sdk.d
    public final void i(DownloadTask downloadTask) {
        Object tag = downloadTask.getTag();
        if (tag instanceof DownloadParams) {
            String str = ((DownloadParams) tag).mAppIcon;
            if (TextUtils.isEmpty(str)) {
                return;
            }
            File fileBR = ((com.kwad.sdk.service.a.c) ServiceProvider.get(com.kwad.sdk.service.a.c.class)).bR(str);
            if (fileBR == null || !fileBR.exists()) {
                ((com.kwad.sdk.service.a.c) ServiceProvider.get(com.kwad.sdk.service.a.c.class)).a(true, str, "", "");
            }
        }
    }

    @Override // com.kwad.sdk.d
    public final void j(DownloadTask downloadTask) {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null || downloadTask.isNotificationRemoved()) {
            return;
        }
        b bVarA = b.a(downloadTask, downloadTask.getSmallFileSoFarBytes() > 0 && downloadTask.getSmallFileTotalBytes() > 0 ? "正在下载" : "准备下载", (String) null);
        com.kwad.sdk.core.download.b.c cVarA = com.kwad.sdk.core.download.b.c.a(context, downloadTask.getId(), downloadTask.downloadEnablePause);
        if (cVarA == null) {
            return;
        }
        a(context, cVarA, bVarA);
        a(context, cVarA.build(), false, true, null, downloadTask.getId(), 1, downloadTask.isCompleted() ? 1 : 0);
    }

    @Override // com.kwad.sdk.d
    public final void k(DownloadTask downloadTask) {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null) {
            return;
        }
        DownloadParams downloadParamsN = n(downloadTask);
        com.kwad.sdk.core.download.b.b bVarAW = com.kwad.sdk.core.download.b.b.aW(context);
        if (bVarAW == null) {
            return;
        }
        a(context, bVarAW, b.a(downloadTask, "下载完成", "立即安装"));
        com.kwad.sdk.core.a.yT().a(downloadTask.getTargetFilePath(), downloadParamsN);
        com.kwad.sdk.core.a.yT().a(downloadParamsN.mPkgname, downloadParamsN);
        a(context, bVarAW.build(), false, false, com.kwad.sdk.e.l(downloadTask), downloadTask.getId(), 1, 1);
    }
}
