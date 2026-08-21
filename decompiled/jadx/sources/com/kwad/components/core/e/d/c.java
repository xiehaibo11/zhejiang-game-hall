package com.kwad.components.core.e.d;

import android.content.Context;
import android.content.DialogInterface;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.kwad.components.core.e.c.b;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.page.AdWebViewVideoActivityProxy;
import com.kwad.components.core.page.DownloadLandPageActivity;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.KsApkDownloadListener;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.NetworkMonitor;
import com.kwad.sdk.core.diskcache.ApkCacheManager;
import com.kwad.sdk.core.download.f;
import com.kwad.sdk.core.report.a;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ad;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.v;
import com.kwad.sdk.utils.w;
import java.io.File;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class c implements NetworkMonitor.a, com.kwad.sdk.core.download.d, com.kwad.sdk.core.webview.a {
    private AdTemplate JU;
    private long JV;
    private boolean JW;
    private a JX;
    private DialogInterface.OnShowListener JY;
    private List<KsAppDownloadListener> JZ;
    private boolean downloadPauseEnable;
    private AdInfo mAdInfo;
    private Handler mHandler;
    private DialogInterface.OnDismissListener mOnDismissListener;
    private JSONObject mReportExtData;

    public interface a {
        boolean handleDownloadDialog(DialogInterface.OnClickListener onClickListener);
    }

    public c(AdTemplate adTemplate) {
        this(adTemplate, null, null);
    }

    public c(AdTemplate adTemplate, KsAppDownloadListener ksAppDownloadListener) {
        this(adTemplate, null, ksAppDownloadListener);
    }

    public c(AdTemplate adTemplate, KsAppDownloadListener ksAppDownloadListener, String str, String str2) {
        this(adTemplate, null, null);
        this.mAdInfo.adConversionInfo.appDownloadUrl = str;
        this.mAdInfo.adBaseInfo.appPackageName = str2;
        this.mAdInfo.downloadId = ad.bp(str);
    }

    public c(AdTemplate adTemplate, JSONObject jSONObject) {
        this(adTemplate, jSONObject, null);
    }

    public c(AdTemplate adTemplate, JSONObject jSONObject, KsAppDownloadListener ksAppDownloadListener) {
        this.mHandler = new Handler(Looper.getMainLooper());
        this.JZ = new ArrayList();
        this.JU = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mReportExtData = jSONObject;
        if (ksAppDownloadListener != null) {
            b(ksAppDownloadListener);
        }
        nv();
        com.kwad.sdk.core.download.c.Aw().a(this, this.JU);
        com.kwad.sdk.core.download.c.Aw().aq(this.JU);
        this.downloadPauseEnable = com.kwad.sdk.core.response.b.a.cm(com.kwad.sdk.core.response.b.d.cg(this.JU));
        if (com.kwad.sdk.core.config.d.zG()) {
            NetworkMonitor.getInstance().a(KsAdSDKImpl.get().getContext(), this);
        }
        com.kwad.sdk.a.a.c.yb().ak(this.JU);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(KsAppDownloadListener ksAppDownloadListener) {
        int i = this.mAdInfo.progress;
        int i2 = this.mAdInfo.status;
        if (i2 == 0) {
            ksAppDownloadListener.onIdle();
            return;
        }
        if (i2 == 1) {
            ksAppDownloadListener.onProgressUpdate(0);
            if (ksAppDownloadListener instanceof com.kwad.sdk.core.download.a.a) {
                ((com.kwad.sdk.core.download.a.a) ksAppDownloadListener).onDownloadStarted();
                return;
            }
            try {
                ksAppDownloadListener.onDownloadStarted();
                return;
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                return;
            }
        }
        if (i2 == 2 || i2 == 3) {
            ksAppDownloadListener.onProgressUpdate(i);
            return;
        }
        if (i2 == 4) {
            if (ksAppDownloadListener instanceof com.kwad.sdk.core.download.a.a) {
                ((com.kwad.sdk.core.download.a.a) ksAppDownloadListener).onPaused(i);
            }
            try {
                if (ksAppDownloadListener instanceof KsApkDownloadListener) {
                    ((KsApkDownloadListener) ksAppDownloadListener).onPaused(i);
                    return;
                }
                return;
            } catch (Throwable unused) {
                return;
            }
        }
        if (i2 == 7) {
            ksAppDownloadListener.onDownloadFailed();
            return;
        }
        if (i2 == 8 || i2 == 9) {
            ksAppDownloadListener.onDownloadFinished();
        } else {
            if (i2 != 12) {
                return;
            }
            ksAppDownloadListener.onInstalled();
        }
    }

    private static void d(Context context, AdTemplate adTemplate) {
        if (context == null || adTemplate == null) {
            return;
        }
        DownloadLandPageActivity.launch(context, adTemplate, false);
    }

    private int n(a.C0150a c0150a) {
        Context context = c0150a.getContext();
        String strCz = com.kwad.sdk.core.response.b.a.cz(this.mAdInfo);
        if (com.kwad.sdk.utils.d.a(context, strCz, this.JU)) {
            com.kwad.sdk.core.report.a.l(this.JU, 1);
            return 0;
        }
        if (com.kwad.sdk.utils.d.f(context, strCz, com.kwad.sdk.core.response.b.a.aq(this.mAdInfo))) {
            com.kwad.sdk.core.report.a.l(this.JU, 0);
            return 0;
        }
        if (nG()) {
            return 0;
        }
        if (!ag.isNetworkConnected(context)) {
            v.L(context, w.bX(context));
            return 0;
        }
        if (c0150a.ns() && com.kwad.sdk.core.config.d.zj()) {
            return o(c0150a);
        }
        if (com.kwad.sdk.core.response.b.d.cw(this.JU) && c0150a.nu() != 2) {
            d(c0150a.getContext(), c0150a.getAdTemplate());
            return 0;
        }
        if (c0150a.no()) {
            return p(c0150a);
        }
        if (q(c0150a)) {
            return 0;
        }
        return nK();
    }

    private void nA() {
        this.mHandler.post(new Runnable() { // from class: com.kwad.components.core.e.d.c.3
            @Override // java.lang.Runnable
            public final void run() {
                ArrayList<KsAppDownloadListener> arrayList = new ArrayList(c.this.JZ.size());
                arrayList.addAll(c.this.JZ);
                for (KsAppDownloadListener ksAppDownloadListener : arrayList) {
                    if (ksAppDownloadListener != null) {
                        c.this.a(ksAppDownloadListener);
                    }
                }
            }
        });
    }

    private void nB() {
        String str = this.mAdInfo.adBaseInfo.appPackageName;
        Context context = KsAdSDKImpl.get().getContext();
        if (context == null) {
            return;
        }
        if (ak.ak(context, str)) {
            this.mAdInfo.status = 12;
            return;
        }
        if (this.mAdInfo.status == 12) {
            this.mAdInfo.status = 0;
            this.mAdInfo.progress = 0;
        }
        if (this.mAdInfo.status == 8 || this.mAdInfo.status == 9) {
            String str2 = this.mAdInfo.downloadFilePath;
            if (TextUtils.isEmpty(str2) || !new File(str2).exists()) {
                this.mAdInfo.status = 0;
                this.mAdInfo.progress = 0;
            }
        }
        if (this.mAdInfo.status == 0) {
            String strB = com.kwad.sdk.core.download.a.B(this.mAdInfo);
            if (TextUtils.isEmpty(strB) || !new File(strB).exists()) {
                return;
            }
            this.mAdInfo.downloadFilePath = strB;
            this.mAdInfo.status = 8;
        }
    }

    private boolean nD() {
        String str = this.mAdInfo.adConversionInfo.marketUrl;
        com.kwad.sdk.core.e.c.i("ApkDownloadHelper", "isMarKet URL Schema=" + str);
        boolean zF = !TextUtils.isEmpty(str) ? com.kwad.sdk.utils.d.f(KsAdSDKImpl.get().getContext(), str, this.mAdInfo.adBaseInfo.appPackageName) : false;
        if (zF) {
            com.kwad.sdk.core.report.a.l(this.JU, 0);
        }
        return zF;
    }

    private boolean nG() {
        a aVar = this.JX;
        if (aVar != null) {
            return aVar.handleDownloadDialog(new DialogInterface.OnClickListener() { // from class: com.kwad.components.core.e.d.c.4
                @Override // android.content.DialogInterface.OnClickListener
                public final void onClick(DialogInterface dialogInterface, int i) {
                    if (i == -1) {
                        switch (c.this.mAdInfo.status) {
                            case 0:
                            case 1:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                                c.this.nK();
                                break;
                            case 8:
                            case 9:
                            case 11:
                                c.this.nJ();
                                break;
                            case 12:
                                c.this.nH();
                                break;
                        }
                    }
                }
            });
        }
        return false;
    }

    private boolean nI() {
        Context context = KsAdSDKImpl.get().getContext();
        if (d.b(new a.C0150a(context).P(this.JU), 1) == 1) {
            return true;
        }
        boolean zAm = ak.am(context, com.kwad.sdk.core.response.b.a.aq(this.mAdInfo));
        if (zAm) {
            com.kwad.sdk.core.report.a.ax(this.JU);
        }
        return zAm;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int nK() {
        com.kwad.sdk.core.download.a.C(this.mAdInfo);
        return 1;
    }

    private void nv() {
        com.kwad.sdk.core.download.c.Aw();
        int iCI = com.kwad.sdk.core.download.c.cI(nx());
        if (iCI != 0) {
            this.mAdInfo.status = iCI;
        }
        nB();
        nA();
    }

    private boolean nz() {
        if (Build.VERSION.SDK_INT < 29) {
            if (this.JU.mIsFromContent && com.kwad.sdk.core.config.d.yX()) {
                zNI = nI();
                if (zNI) {
                    com.kwad.sdk.core.report.a.ay(this.JU);
                }
            } else if (!this.JU.mIsFromContent && com.kwad.sdk.core.config.d.zu()) {
                boolean zAe = com.kwad.components.core.k.b.ae(KsAdSDKImpl.get().getContext());
                com.kwad.sdk.core.e.c.d("ApkDownloadHelper", "handleForceOpenApp enableForceOpen: " + zAe);
                zNI = zAe ? nI() : false;
                if (zNI) {
                    com.kwad.sdk.core.report.a.az(this.JU);
                }
            }
        }
        return zNI;
    }

    private int o(a.C0150a c0150a) {
        Context context = c0150a.getContext();
        AdTemplate adTemplate = c0150a.getAdTemplate();
        int iNt = c0150a.nt();
        if (iNt == 1) {
            return nK();
        }
        if (iNt == 2 && com.kwad.sdk.core.response.b.b.bH(adTemplate)) {
            com.kwad.components.core.e.c.b.a(context, new b.a().O(adTemplate).ak(com.kwad.sdk.core.response.b.b.bG(adTemplate)).a(this.JY).c(this.mOnDismissListener).nc());
        }
        return 0;
    }

    private int p(a.C0150a c0150a) {
        Context context = c0150a.getContext();
        AdTemplate adTemplate = c0150a.getAdTemplate();
        int iS = s(c0150a);
        if (iS == 1) {
            if (com.kwad.sdk.core.response.b.b.bH(adTemplate)) {
                com.kwad.components.core.e.c.b.a(context, new b.a().O(adTemplate).ak(com.kwad.sdk.core.response.b.b.bG(adTemplate)).a(this.JY).c(this.mOnDismissListener).nc());
            }
            return 0;
        }
        if (iS == 2) {
            d(c0150a.getContext(), c0150a.getAdTemplate());
            return 0;
        }
        if (iS == 3 || q(c0150a)) {
            return 0;
        }
        return nK();
    }

    private boolean q(a.C0150a c0150a) {
        if (c0150a.nm() || this.mAdInfo.status == 4 || !com.kwad.sdk.core.response.b.b.bK(this.JU) || !r(c0150a)) {
            return false;
        }
        return com.kwad.components.core.e.c.b.a(c0150a.getContext(), new b.a().O(this.JU).ak(com.kwad.sdk.core.response.b.b.bJ(this.JU)).a(this.JY).c(this.mOnDismissListener).nc());
    }

    private static boolean r(a.C0150a c0150a) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(c0150a.getAdTemplate());
        if (com.kwad.sdk.core.response.b.a.bk(adInfoCg) && (DownloadLandPageActivity.showingAdWebViewLandPage || AdWebViewVideoActivityProxy.showingAdWebViewVideoActivity || c0150a.getAdTemplate().isWebViewDownload)) {
            return true;
        }
        return com.kwad.sdk.core.response.b.a.bl(adInfoCg) && !ag.isWifiConnected(c0150a.getContext());
    }

    public static int s(a.C0150a c0150a) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(c0150a.getAdTemplate());
        if (adInfoCg.downloadSafeInfo.complianceInfo == null) {
            return 0;
        }
        int iCV = c0150a.cV();
        return iCV != 2 ? iCV != 3 ? adInfoCg.downloadSafeInfo.complianceInfo.actionBarType : adInfoCg.downloadSafeInfo.complianceInfo.materialJumpType : adInfoCg.downloadSafeInfo.complianceInfo.describeBarType;
    }

    public final void a(a aVar) {
        this.JX = aVar;
    }

    @Override // com.kwad.sdk.core.NetworkMonitor.a
    public final void a(NetworkMonitor.NetworkState networkState) {
        if (this.mAdInfo.status == 7 && networkState == NetworkMonitor.NetworkState.NETWORK_WIFI) {
            nK();
        }
    }

    @Override // com.kwad.sdk.core.download.d
    public final void a(String str, int i, int i2, int i3) {
        if (this.mAdInfo.downloadId.equals(str)) {
            this.mAdInfo.status = 3;
            this.mAdInfo.progress = i;
            this.mAdInfo.soFarBytes = i2;
            this.mAdInfo.totalBytes = i3;
            nA();
        }
    }

    @Override // com.kwad.sdk.core.download.d
    public final void a(String str, int i, f fVar) {
        final boolean zNz;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.JU);
        if (fVar.Az()) {
            com.kwad.sdk.core.report.a.av(this.JU);
            fVar.Ay();
            zNz = nz();
            com.kwad.sdk.a.a.c.yb().an(this.JU);
            com.kwad.sdk.a.a.c.yb().al(this.JU);
            com.kwad.sdk.a.a.b.xY().ag(this.JU);
        } else {
            zNz = false;
        }
        g.execute(new Runnable() { // from class: com.kwad.components.core.e.d.c.2
            @Override // java.lang.Runnable
            public final void run() {
                com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
            }
        });
        com.kwad.sdk.core.a.yT().cs(adInfoCg.downloadId);
        this.mAdInfo.status = 12;
        nA();
        com.kwad.components.core.e.a.e.mN().L(this.JU);
    }

    @Override // com.kwad.sdk.core.download.d
    public final void a(String str, int i, String str2, f fVar) {
        if (this.mAdInfo.downloadId.equals(str)) {
            this.mAdInfo.status = 7;
            nA();
            if (fVar.Az()) {
                a.C0214a c0214a = new a.C0214a(i, str2);
                com.kwad.sdk.core.report.a.a(this.JU, c0214a);
                com.kwad.components.core.o.a.pA().a(this.JU, this.mAdInfo.adConversionInfo.appDownloadUrl, c0214a.toJson().toString());
                fVar.Ay();
            }
            if (this.mAdInfo.adConversionInfo.retryH5TimeStep <= 0 || this.JW || System.currentTimeMillis() - this.JV >= this.mAdInfo.adConversionInfo.retryH5TimeStep || TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.aK(this.mAdInfo))) {
                return;
            }
            AdWebViewActivityProxy.launch(KsAdSDKImpl.get().getContext(), this.JU);
            this.JW = true;
        }
    }

    @Override // com.kwad.sdk.core.download.d
    public final void a(String str, f fVar) {
        if (this.mAdInfo.downloadId.equals(str)) {
            if (this.mAdInfo.status != 1) {
                if (fVar.Az()) {
                    com.kwad.sdk.core.report.a.au(this.JU);
                    fVar.Ay();
                }
                this.JV = System.currentTimeMillis();
            }
            this.mAdInfo.status = 1;
            nA();
        }
    }

    @Override // com.kwad.sdk.core.download.d
    public final void a(String str, String str2, f fVar) {
        if (this.mAdInfo.downloadId.equals(str)) {
            this.mAdInfo.downloadFilePath = str2;
            this.mAdInfo.progress = 100;
            if (this.mAdInfo.status != 8 && !this.JU.mDownloadFinishReported) {
                g.execute(new Runnable() { // from class: com.kwad.components.core.e.d.c.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
                    }
                });
                if (fVar.Az()) {
                    com.kwad.sdk.core.report.a.e(this.JU, this.mReportExtData);
                    fVar.Ay();
                }
                com.kwad.sdk.a.a.c.yb().am(this.JU);
                com.kwad.sdk.a.a.c.yb().ak(this.JU);
                com.kwad.sdk.a.a.b.xY().af(this.JU);
                this.JU.mDownloadFinishReported = true;
            }
            this.mAdInfo.status = 8;
            nA();
            ApkCacheManager.getInstance().Aj();
        }
    }

    @Override // com.kwad.sdk.core.download.d
    public final void am(String str) {
        if (this.mAdInfo.downloadId.equals(str)) {
            com.kwad.sdk.core.report.a.aw(this.JU);
        }
    }

    public final void ar(int i) {
        this.JU.downloadSource = i;
    }

    public final void b(final KsAppDownloadListener ksAppDownloadListener) {
        if (ksAppDownloadListener == null) {
            return;
        }
        if (Looper.myLooper() != Looper.getMainLooper()) {
            this.mHandler.post(new Runnable() { // from class: com.kwad.components.core.e.d.c.6
                @Override // java.lang.Runnable
                public final void run() {
                    if (c.this.JZ.contains(ksAppDownloadListener)) {
                        return;
                    }
                    c.this.JZ.add(0, ksAppDownloadListener);
                }
            });
        } else if (!this.JZ.contains(ksAppDownloadListener)) {
            this.JZ.add(0, ksAppDownloadListener);
        }
        nB();
        a(ksAppDownloadListener);
    }

    @Override // com.kwad.sdk.core.download.d
    public final void b(String str, f fVar) {
        if (this.mAdInfo.downloadId.equals(str)) {
            if (this.mAdInfo.status != 4 && fVar.Az()) {
                com.kwad.sdk.core.report.a.c(this.JU, this.mReportExtData);
                fVar.Ay();
            }
            this.mAdInfo.status = 4;
            nA();
        }
    }

    public final void c(final KsAppDownloadListener ksAppDownloadListener) {
        if (ksAppDownloadListener == null) {
            return;
        }
        if (Looper.myLooper() == Looper.getMainLooper()) {
            this.JZ.remove(ksAppDownloadListener);
        } else {
            this.mHandler.post(new Runnable() { // from class: com.kwad.components.core.e.d.c.7
                @Override // java.lang.Runnable
                public final void run() {
                    c.this.JZ.remove(ksAppDownloadListener);
                }
            });
        }
    }

    @Override // com.kwad.sdk.core.download.d
    public final void c(String str, f fVar) {
        if (this.mAdInfo.downloadId.equals(str)) {
            if (this.mAdInfo.status != 2 && fVar.Az()) {
                com.kwad.sdk.core.report.a.d(this.JU, this.mReportExtData);
                fVar.Ay();
            }
            this.mAdInfo.status = 2;
            nA();
        }
    }

    public final void clear() {
        nL();
        com.kwad.sdk.core.download.c.Aw().a(this);
        if (com.kwad.sdk.core.config.d.zG()) {
            NetworkMonitor.getInstance().a(this);
        }
    }

    public final void d(KsAppDownloadListener ksAppDownloadListener) {
        if (ksAppDownloadListener == null) {
            return;
        }
        nB();
        a(ksAppDownloadListener);
    }

    @Override // com.kwad.sdk.core.download.d
    public final void d(String str, f fVar) {
        if (this.mAdInfo.downloadId.equals(str)) {
            if (this.mAdInfo.status != 5 && fVar.Az()) {
                com.kwad.sdk.core.report.a.f(this.JU, this.mReportExtData);
                fVar.Ay();
            }
            this.mAdInfo.status = 5;
            nA();
        }
    }

    @Override // com.kwad.sdk.core.download.d
    public final void e(String str, f fVar) {
        if (this.mAdInfo.downloadId.equals(str)) {
            if (fVar.Az()) {
                com.kwad.sdk.core.report.a.i(this.JU, 2);
                fVar.Ay();
            }
            this.mAdInfo.status = 9;
            nA();
        }
    }

    public final int m(a.C0150a c0150a) {
        this.JW = false;
        nB();
        switch (this.mAdInfo.status) {
            case 0:
            case 1:
            case 5:
            case 6:
            case 7:
                return n(c0150a);
            case 2:
            case 3:
                if (!c0150a.nk() || !this.downloadPauseEnable) {
                    return 0;
                }
                com.kwad.sdk.core.download.a.cH(this.mAdInfo.downloadId);
                return 0;
            case 4:
                return nK();
            case 8:
            case 9:
            case 11:
                nJ();
                return 0;
            case 10:
            default:
                return 0;
            case 12:
                nH();
                return 0;
        }
    }

    public final boolean nC() {
        switch (this.mAdInfo.status) {
            case 8:
            case 9:
            case 11:
                nJ();
                break;
            case 12:
                nH();
                break;
        }
        return true;
    }

    public final AdTemplate nE() {
        return this.JU;
    }

    public final boolean nF() {
        if (this.mAdInfo.status == 0) {
            return nD();
        }
        return false;
    }

    public final void nH() {
        g.execute(new Runnable() { // from class: com.kwad.components.core.e.d.c.5
            @Override // java.lang.Runnable
            public final void run() {
                com.kwad.sdk.components.c.f(com.kwad.components.a.a.a.class);
            }
        });
        if (ak.am(KsAdSDKImpl.get().getContext(), com.kwad.sdk.core.response.b.a.aq(this.mAdInfo))) {
            com.kwad.sdk.core.report.a.ax(this.JU);
        }
    }

    public final void nJ() {
        if (ak.an(KsAdSDKImpl.get().getContext(), this.mAdInfo.downloadFilePath)) {
            com.kwad.sdk.core.report.a.i(this.JU, 1);
        }
    }

    @Override // com.kwad.sdk.core.webview.a
    public final void nL() {
        List<KsAppDownloadListener> list = this.JZ;
        if (list != null) {
            list.clear();
        }
    }

    public final int nw() {
        nB();
        if (this.mAdInfo.status == 3) {
            return 2;
        }
        return this.mAdInfo.status;
    }

    @Override // com.kwad.sdk.core.download.d
    public final String nx() {
        return this.mAdInfo.downloadId;
    }

    @Override // com.kwad.sdk.core.download.d
    public final String ny() {
        return this.mAdInfo.adBaseInfo.appPackageName;
    }

    public final void setOnDismissListener(DialogInterface.OnDismissListener onDismissListener) {
        this.mOnDismissListener = onDismissListener;
    }

    public final void setOnShowListener(DialogInterface.OnShowListener onShowListener) {
        this.JY = onShowListener;
    }
}
