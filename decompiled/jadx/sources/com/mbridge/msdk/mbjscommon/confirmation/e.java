package com.mbridge.msdk.mbjscommon.confirmation;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.view.ViewGroup;
import android.webkit.WebView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.widget.custom.CustomViewMessageWrap;
import com.mbridge.msdk.widget.custom.DownloadMessageDialog;
import com.mbridge.msdk.widget.custom.a;
import com.mbridge.msdk.widget.custom.baseview.MBButton;
import com.mbridge.msdk.widget.dialog.MBAlertDialog;
import java.io.Serializable;
import java.util.HashMap;
import java.util.Timer;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: compiled from: SecondaryConfirmationManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class e implements Serializable {
    public static int b = 1;
    public static int c = 0;
    public static int d = 2;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    HashMap<String, Integer> f3710a;
    private WindVaneWebView e;
    private WindVaneWebView f;
    private com.mbridge.msdk.mbjscommon.confirmation.b g;
    private com.mbridge.msdk.mbjscommon.confirmation.b h;
    private c i;
    private int j;
    private MBAlertDialog k;
    private DownloadMessageDialog l;
    private AtomicBoolean m;
    private AtomicBoolean n;
    private volatile boolean o;
    private Timer p;
    private a q;
    private final Handler r;

    private e() {
        this.f3710a = new HashMap<>();
        this.j = 1;
        this.m = new AtomicBoolean(false);
        this.n = new AtomicBoolean(false);
        this.o = false;
        this.p = new Timer();
        this.r = new Handler(Looper.getMainLooper()) { // from class: com.mbridge.msdk.mbjscommon.confirmation.e.1
            @Override // android.os.Handler
            public final void handleMessage(Message message) {
                super.handleMessage(message);
                int i = message.what;
                if (i != 1) {
                    if (i == 2 && e.this.h != null) {
                        e.this.h.a(1, "render is time out");
                        return;
                    }
                    return;
                }
                if (e.this.g != null) {
                    e.this.g.a(1, "render is time out");
                } else {
                    e.this.b();
                }
            }
        };
    }

    /* JADX INFO: compiled from: SecondaryConfirmationManager.java */
    static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final e f3718a = new e();
    }

    public static e a() {
        return b.f3718a;
    }

    private String a(String str, String str2) {
        if (!TextUtils.isEmpty(str)) {
            return str;
        }
        if (com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), str2) != null) {
            str = com.mbridge.msdk.c.d.f3132a;
        }
        return !TextUtils.isEmpty(str) ? str : "";
    }

    public final void b() {
        this.p.cancel();
        this.o = false;
    }

    /* JADX WARN: Removed duplicated region for block: B:68:0x014e  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x0181  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x0186 A[Catch: all -> 0x0208, TryCatch #0 {all -> 0x0208, blocks: (B:49:0x00f5, B:51:0x00f9, B:53:0x00ff, B:54:0x010d, B:56:0x0113, B:57:0x0121, B:59:0x0126, B:61:0x012e, B:63:0x0138, B:65:0x0146, B:70:0x0151, B:72:0x0155, B:74:0x015d, B:76:0x0167, B:78:0x0175, B:80:0x017b, B:82:0x0182, B:84:0x0186, B:89:0x01a9, B:91:0x01c4, B:92:0x01eb, B:86:0x018e, B:88:0x01a0, B:94:0x0204), top: B:105:0x00f5, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:86:0x018e A[Catch: all -> 0x0208, TryCatch #0 {all -> 0x0208, blocks: (B:49:0x00f5, B:51:0x00f9, B:53:0x00ff, B:54:0x010d, B:56:0x0113, B:57:0x0121, B:59:0x0126, B:61:0x012e, B:63:0x0138, B:65:0x0146, B:70:0x0151, B:72:0x0155, B:74:0x015d, B:76:0x0167, B:78:0x0175, B:80:0x017b, B:82:0x0182, B:84:0x0186, B:89:0x01a9, B:91:0x01c4, B:92:0x01eb, B:86:0x018e, B:88:0x01a0, B:94:0x0204), top: B:105:0x00f5, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:88:0x01a0 A[Catch: all -> 0x0208, TryCatch #0 {all -> 0x0208, blocks: (B:49:0x00f5, B:51:0x00f9, B:53:0x00ff, B:54:0x010d, B:56:0x0113, B:57:0x0121, B:59:0x0126, B:61:0x012e, B:63:0x0138, B:65:0x0146, B:70:0x0151, B:72:0x0155, B:74:0x015d, B:76:0x0167, B:78:0x0175, B:80:0x017b, B:82:0x0182, B:84:0x0186, B:89:0x01a9, B:91:0x01c4, B:92:0x01eb, B:86:0x018e, B:88:0x01a0, B:94:0x0204), top: B:105:0x00f5, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:91:0x01c4 A[Catch: all -> 0x0208, TryCatch #0 {all -> 0x0208, blocks: (B:49:0x00f5, B:51:0x00f9, B:53:0x00ff, B:54:0x010d, B:56:0x0113, B:57:0x0121, B:59:0x0126, B:61:0x012e, B:63:0x0138, B:65:0x0146, B:70:0x0151, B:72:0x0155, B:74:0x015d, B:76:0x0167, B:78:0x0175, B:80:0x017b, B:82:0x0182, B:84:0x0186, B:89:0x01a9, B:91:0x01c4, B:92:0x01eb, B:86:0x018e, B:88:0x01a0, B:94:0x0204), top: B:105:0x00f5, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:92:0x01eb A[Catch: all -> 0x0208, TryCatch #0 {all -> 0x0208, blocks: (B:49:0x00f5, B:51:0x00f9, B:53:0x00ff, B:54:0x010d, B:56:0x0113, B:57:0x0121, B:59:0x0126, B:61:0x012e, B:63:0x0138, B:65:0x0146, B:70:0x0151, B:72:0x0155, B:74:0x015d, B:76:0x0167, B:78:0x0175, B:80:0x017b, B:82:0x0182, B:84:0x0186, B:89:0x01a9, B:91:0x01c4, B:92:0x01eb, B:86:0x018e, B:88:0x01a0, B:94:0x0204), top: B:105:0x00f5, outer: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized void a(java.lang.String r20, final com.mbridge.msdk.foundation.entity.CampaignEx r21, android.content.Context r22, final java.lang.String r23, com.mbridge.msdk.widget.dialog.a r24) {
        /*
            Method dump skipped, instruction units count: 543
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbjscommon.confirmation.e.a(java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx, android.content.Context, java.lang.String, com.mbridge.msdk.widget.dialog.a):void");
    }

    public final void a(String str, final CampaignEx campaignEx, Context context, final String str2, c cVar) {
        final String strA = a(str, str2);
        this.h = new com.mbridge.msdk.mbjscommon.confirmation.b() { // from class: com.mbridge.msdk.mbjscommon.confirmation.e.3
            @Override // com.mbridge.msdk.mbjscommon.confirmation.b
            public final void a() {
                com.mbridge.msdk.mbjscommon.confirmation.a aVar;
                e.this.r.removeMessages(2);
                if (e.this.f != null && (aVar = (com.mbridge.msdk.mbjscommon.confirmation.a) e.this.f.getObject()) != null) {
                    aVar.a(e.b);
                    e.this.f.setObject(aVar);
                }
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, strA, str2, 1, "", 2);
            }

            @Override // com.mbridge.msdk.mbjscommon.confirmation.b
            public final void a(int i, String str3) {
                com.mbridge.msdk.mbjscommon.confirmation.a aVar;
                e.this.r.removeMessages(2);
                if (e.this.f != null && (aVar = (com.mbridge.msdk.mbjscommon.confirmation.a) e.this.f.getObject()) != null) {
                    aVar.a(e.d);
                    e.this.f.setObject(aVar);
                }
                if (i != 5) {
                    com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, strA, str2, 2, str3, 2);
                }
            }
        };
        if (TextUtils.isEmpty(str)) {
            this.h.a(2, "url is null");
            return;
        }
        if (!str.contains("ldtm=1")) {
            this.h.a(5, "unwanted prerender");
            return;
        }
        WindVaneWebView windVaneWebView = this.f;
        if (windVaneWebView == null || windVaneWebView.isDestoryed()) {
            WindVaneWebView windVaneWebView2 = new WindVaneWebView(context);
            this.f = windVaneWebView2;
            windVaneWebView2.setBackgroundColor(0);
            if (this.f.getBackground() != null) {
                this.f.getBackground().setAlpha(0);
            }
        }
        this.n.compareAndSet(true, false);
        this.r.sendEmptyMessageDelayed(2, 500L);
        a(this.f, str, campaignEx, context, str2, cVar, this.h);
    }

    /* JADX WARN: Removed duplicated region for block: B:8:0x0033  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8, java.lang.String r9, com.mbridge.msdk.foundation.entity.CampaignEx r10, android.content.Context r11, java.lang.String r12, com.mbridge.msdk.mbjscommon.confirmation.c r13, final com.mbridge.msdk.mbjscommon.confirmation.b r14) {
        /*
            Method dump skipped, instruction units count: 223
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbjscommon.confirmation.e.a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView, java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx, android.content.Context, java.lang.String, com.mbridge.msdk.mbjscommon.confirmation.c, com.mbridge.msdk.mbjscommon.confirmation.b):void");
    }

    private String a(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        Uri.Builder builderBuildUpon = Uri.parse(str).buildUpon();
        builderBuildUpon.appendQueryParameter("dialogRenderMode", "default");
        return builderBuildUpon.toString();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(CampaignEx campaignEx, Context context, String str, String str2, c cVar) {
        MBAlertDialog mBAlertDialog = this.k;
        if (mBAlertDialog != null) {
            mBAlertDialog.makeDownloadAlert(campaignEx.getAppName());
            if (context instanceof Activity) {
                Activity activity = (Activity) context;
                if (Build.VERSION.SDK_INT >= 17 && activity.isDestroyed()) {
                    com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, str, str2, 4, 2);
                    b();
                    return;
                } else {
                    if (!activity.isFinishing()) {
                        this.k.show();
                        this.j = 1;
                        a(1);
                        cVar.a(this.j);
                        com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, str, str2, 1, 2);
                        return;
                    }
                    com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, str, str2, 4, 2);
                    b();
                    return;
                }
            }
            b();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(WindVaneWebView windVaneWebView, String str, CampaignEx campaignEx, Context context, String str2, c cVar) {
        if (windVaneWebView != null && !windVaneWebView.isDestoryed()) {
            a(windVaneWebView);
            if (windVaneWebView.getParent() != null) {
                ((ViewGroup) windVaneWebView.getParent()).removeView(windVaneWebView);
            }
            this.k.setContentView(windVaneWebView);
            if (context instanceof Activity) {
                Activity activity = (Activity) context;
                if (Build.VERSION.SDK_INT >= 17 && activity.isDestroyed()) {
                    com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, str, str2, 4, 2);
                    b();
                    return;
                } else {
                    if (!activity.isFinishing()) {
                        this.k.show();
                        this.j = 2;
                        a(2);
                        cVar.a(this.j);
                        com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, str, str2, 2, 2);
                        return;
                    }
                    com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, str, str2, 4, 2);
                    b();
                    return;
                }
            }
            b();
            return;
        }
        b(str, campaignEx, context, str2, cVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(final String str, final CampaignEx campaignEx, final Context context, final String str2, final c cVar) {
        CloseDialogBroadcastReceiver closeDialogBroadcastReceiver;
        final d[] dVarArr = {null};
        this.l = new DownloadMessageDialog(context, true, new CustomViewMessageWrap(campaignEx, CustomViewMessageWrap.getViewFilePath("mbridge_download_dialog_view")), new com.mbridge.msdk.widget.custom.a() { // from class: com.mbridge.msdk.mbjscommon.confirmation.e.6
            @Override // com.mbridge.msdk.widget.custom.a
            public final void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap) {
            }

            @Override // com.mbridge.msdk.widget.custom.a
            public final void b(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap) {
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str, str2, 1, "", 2);
            }

            @Override // com.mbridge.msdk.widget.custom.a
            public final void c(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap) {
                if (e.this.k != null) {
                    e.this.k.clear();
                    e.this.k.setOnDismissListener(null);
                    e.this.k = null;
                }
            }

            @Override // com.mbridge.msdk.widget.custom.a
            public final void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap, Exception exc) {
                e.this.a(campaignEx, context, str, str2, cVar);
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str, str2, 2, exc.getMessage(), 2);
            }

            @Override // com.mbridge.msdk.widget.custom.a
            public final void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap, a.EnumC0311a enumC0311a) {
                if (enumC0311a == a.EnumC0311a.CLICK_EVENT_CLOSE) {
                    if (downloadMessageDialog != null) {
                        downloadMessageDialog.dismiss();
                    }
                    d[] dVarArr2 = dVarArr;
                    if (dVarArr2[0] != null) {
                        dVarArr2[0].b();
                        return;
                    }
                    return;
                }
                if (enumC0311a == a.EnumC0311a.CLICK_EVENT_DOWNLOAD) {
                    MBButton mBButton = (MBButton) customViewMessageWrap.getView("button_download");
                    d[] dVarArr3 = dVarArr;
                    if (dVarArr3[0] == null) {
                        dVarArr3[0] = new d(mBButton);
                        dVarArr[0].b(campaignEx.getLinkType());
                        dVarArr[0].a(campaignEx.getAkdlui());
                        dVarArr[0].b(str);
                    }
                    dVarArr[0].a();
                    c cVar2 = cVar;
                    if (cVar2 != null) {
                        cVar2.a(e.this.j);
                        cVar.c();
                        return;
                    }
                    return;
                }
                if (enumC0311a == a.EnumC0311a.CLICK_EVENT_OPEN_PRIVACY) {
                    String applicationPrivacy = customViewMessageWrap.getApplicationPrivacy();
                    if (TextUtils.isEmpty(applicationPrivacy)) {
                        return;
                    }
                    com.mbridge.msdk.click.c.b(com.mbridge.msdk.foundation.controller.a.f().j(), applicationPrivacy);
                }
            }
        });
        if (context == null || campaignEx == null || !ae.a(campaignEx)) {
            closeDialogBroadcastReceiver = null;
        } else {
            try {
                IntentFilter intentFilter = new IntentFilter();
                intentFilter.addAction("mb_dp_close_broadcast_receiver");
                CloseDialogBroadcastReceiver closeDialogBroadcastReceiver2 = new CloseDialogBroadcastReceiver(this.l);
                try {
                    context.registerReceiver(closeDialogBroadcastReceiver2, intentFilter);
                } catch (Exception unused) {
                }
                closeDialogBroadcastReceiver = closeDialogBroadcastReceiver2;
            } catch (Exception e) {
                z.a("SecondaryConfirmationManager", e.getMessage());
                closeDialogBroadcastReceiver = null;
            }
        }
        this.j = 1;
        this.l.setOnDismissListener(new a(closeDialogBroadcastReceiver, str + campaignEx.getApkDisplayInfo().toString(), cVar, this.e, this.f, this.j));
        if (context instanceof Activity) {
            Activity activity = (Activity) context;
            if (Build.VERSION.SDK_INT >= 17 && activity.isDestroyed()) {
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str, str2, 4, 2);
                b();
                return;
            } else if (!activity.isFinishing()) {
                this.l.show();
                cVar.a(this.j);
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str, str2, 3, 2);
                return;
            } else {
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str, str2, 4, 2);
                b();
                return;
            }
        }
        b();
    }

    public final void a(Object obj, int i) {
        com.mbridge.msdk.mbjscommon.confirmation.b bVar;
        com.mbridge.msdk.mbjscommon.confirmation.b bVar2;
        WindVaneWebView windVaneWebView = this.e;
        if (windVaneWebView != null && windVaneWebView.getObject() != null && this.e.getObject().equals(a(obj)) && !this.m.compareAndSet(true, true) && (bVar2 = this.g) != null) {
            if (i == b) {
                bVar2.a();
            } else {
                bVar2.a(0, "webview render error and undefault");
            }
        }
        WindVaneWebView windVaneWebView2 = this.f;
        if (windVaneWebView2 == null || windVaneWebView2.getObject() == null || !this.f.getObject().equals(a(obj)) || this.n.compareAndSet(true, true) || (bVar = this.h) == null) {
            return;
        }
        if (i == b) {
            bVar.a();
        } else {
            bVar.a(0, "webview render error and undefault");
        }
    }

    public final void a(Object obj, String str) {
        z.a("SecondaryConfirmationManager", "closeDialog");
        MBAlertDialog mBAlertDialog = this.k;
        if (mBAlertDialog == null || !mBAlertDialog.isShowing()) {
            return;
        }
        this.k.dismiss();
        this.k.clear();
    }

    private void a(WindVaneWebView windVaneWebView) {
        if (windVaneWebView != null) {
            h.a().a((WebView) windVaneWebView, "webviewshow", "");
        }
    }

    public final void b(Object obj, String str) {
        MBAlertDialog mBAlertDialog = this.k;
        if (mBAlertDialog == null || !mBAlertDialog.isShowing() || this.k.getListener() == null) {
            return;
        }
        this.k.getListener().c();
    }

    /* JADX INFO: compiled from: SecondaryConfirmationManager.java */
    private static final class a implements DialogInterface.OnDismissListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private BroadcastReceiver f3717a;
        private final String b;
        private final c c;
        private final WindVaneWebView d;
        private final WindVaneWebView e;
        private int f;

        public a(BroadcastReceiver broadcastReceiver, String str, c cVar, WindVaneWebView windVaneWebView, WindVaneWebView windVaneWebView2, int i) {
            this.f3717a = broadcastReceiver;
            this.b = str;
            this.c = cVar;
            this.d = windVaneWebView;
            this.e = windVaneWebView2;
            this.f = i;
        }

        public a(String str, c cVar, WindVaneWebView windVaneWebView, WindVaneWebView windVaneWebView2, int i) {
            this.b = str;
            this.c = cVar;
            this.d = windVaneWebView;
            this.e = windVaneWebView2;
            this.f = i;
        }

        public final void a(int i) {
            this.f = i;
        }

        @Override // android.content.DialogInterface.OnDismissListener
        public final void onDismiss(DialogInterface dialogInterface) {
            if (this.f3717a != null) {
                try {
                    com.mbridge.msdk.foundation.controller.a.f().j().unregisterReceiver(this.f3717a);
                } catch (Exception e) {
                    z.a("SecondaryConfirmationManager", e.getMessage());
                }
            }
            String str = this.b;
            c cVar = this.c;
            WindVaneWebView windVaneWebView = this.d;
            if (windVaneWebView != null && !windVaneWebView.isDestoryed() && this.d.getObject() != null && this.d.getObject().equals(e.a().a((Object) str))) {
                e.a(e.a(), this.d);
            }
            WindVaneWebView windVaneWebView2 = this.e;
            if (windVaneWebView2 != null && windVaneWebView2.getObject() != null && this.e.getObject().equals(e.a().a((Object) str))) {
                e.a(e.a(), this.e);
            }
            if (cVar != null) {
                cVar.a(this.f);
                cVar.b();
            }
            e.i(e.a());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public com.mbridge.msdk.mbjscommon.confirmation.a a(Object obj) {
        if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
            Object object = ((com.mbridge.msdk.mbjscommon.windvane.a) obj).f3733a.getObject();
            if (object instanceof com.mbridge.msdk.mbjscommon.confirmation.a) {
                return (com.mbridge.msdk.mbjscommon.confirmation.a) object;
            }
        }
        return null;
    }

    private void a(int i) {
        a aVar = this.q;
        if (aVar != null) {
            aVar.a(i);
        }
    }

    public final void c() {
        try {
            if (this.l != null) {
                this.l.dismiss();
            }
            if (this.k != null) {
                this.k.dismiss();
            }
        } catch (Throwable th) {
            z.d("SecondaryConfirmationManager", th.getMessage());
        }
    }

    public final MBAlertDialog d() {
        return this.k;
    }

    static /* synthetic */ void a(e eVar, WindVaneWebView windVaneWebView) {
        MBAlertDialog mBAlertDialog = eVar.k;
        if (mBAlertDialog != null) {
            mBAlertDialog.clear();
        }
        if (windVaneWebView != null) {
            h.a().a((WebView) windVaneWebView, "close", "");
        }
    }

    static /* synthetic */ void i(e eVar) {
        if (eVar.i != null) {
            eVar.i = null;
        }
        if (eVar.g != null) {
            eVar.g = null;
        }
        WindVaneWebView windVaneWebView = eVar.e;
        if (windVaneWebView != null) {
            windVaneWebView.release();
        }
        WindVaneWebView windVaneWebView2 = eVar.f;
        if (windVaneWebView2 != null) {
            windVaneWebView2.release();
        }
        MBAlertDialog mBAlertDialog = eVar.k;
        if (mBAlertDialog != null && mBAlertDialog.isShowing()) {
            eVar.k.dismiss();
        }
        DownloadMessageDialog downloadMessageDialog = eVar.l;
        if (downloadMessageDialog != null && downloadMessageDialog.isShowing()) {
            eVar.l.dismiss();
        }
        eVar.b();
    }
}
