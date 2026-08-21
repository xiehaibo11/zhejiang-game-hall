package com.mbridge.msdk.videocommon.download;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.s;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.download.DownloadError;
import com.mbridge.msdk.foundation.download.DownloadMessage;
import com.mbridge.msdk.foundation.download.DownloadPriority;
import com.mbridge.msdk.foundation.download.DownloadProgress;
import com.mbridge.msdk.foundation.download.DownloadResourceType;
import com.mbridge.msdk.foundation.download.DownloadStatus;
import com.mbridge.msdk.foundation.download.MBDownloadManager;
import com.mbridge.msdk.foundation.download.OnDownloadStateListener;
import com.mbridge.msdk.foundation.download.OnProgressStateListener;
import com.mbridge.msdk.foundation.download.core.DownloadRequest;
import com.mbridge.msdk.foundation.download.utils.Objects;
import com.mbridge.msdk.foundation.download.utils.Utils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.o;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.w;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import java.io.File;
import java.io.Serializable;
import java.net.URL;
import java.net.URLEncoder;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: compiled from: CampaignDownLoadTask.java */
/* JADX INFO: loaded from: classes3.dex */
public final class a implements Serializable {
    private DownloadRequest A;
    private int B;
    private boolean C;
    private int D;
    private File E;
    private int G;
    private int H;
    private int I;
    private boolean J;
    private com.mbridge.msdk.c.d K;
    private com.mbridge.msdk.videocommon.d.c L;
    private com.mbridge.msdk.c.d M;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f4395a;
    private int c;
    private int d;
    private volatile int f;
    private com.mbridge.msdk.videocommon.listener.a h;
    private com.mbridge.msdk.videocommon.listener.a i;
    private CampaignEx j;
    private String k;
    private Context l;
    private long m;
    private String n;
    private String o;
    private long p;
    private String q;
    private long s;
    private s v;
    private String x;
    private DownloadRequest y;
    private DownloadMessage z;
    private boolean b = false;
    private boolean e = false;
    private CopyOnWriteArrayList<c> g = new CopyOnWriteArrayList<>();
    private boolean r = false;
    private int t = 100;
    private boolean u = false;
    private boolean w = false;
    private int F = 1;
    private OnDownloadStateListener N = new OnDownloadStateListener() { // from class: com.mbridge.msdk.videocommon.download.a.1
        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onCancelDownload(DownloadMessage downloadMessage) {
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadStart(DownloadMessage downloadMessage) {
            try {
                a.this.f = 1;
                if (a.this.v == null) {
                    a.this.v = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                }
                a.this.v.a(a.this.j, a.this.m, a.this.q, a.this.f);
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d("CampaignDownLoadTask", e.getMessage());
                }
            }
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadComplete(DownloadMessage downloadMessage) {
            try {
                if (a.this.v == null) {
                    a.this.v = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                }
                a.this.v.a(a.this.n, a.this.p, 5);
                a.this.a(a.this.p, false);
                if (a.this.B != 0 && a.this.B != 100) {
                    a.this.c(a.this.f(1));
                }
                if (a.this.B == 100) {
                    a.this.c(a.this.f(3));
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d("CampaignDownLoadTask", e.getMessage());
                }
            }
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadError(DownloadMessage downloadMessage, DownloadError downloadError) {
            try {
                if (a.this.A == null || a.this.A.getStatus() == DownloadStatus.CANCELLED) {
                    return;
                }
                String message = "Video Download Error";
                if (downloadError != null && downloadError.getException() != null) {
                    message = downloadError.getException().getMessage();
                }
                a.this.p();
                a.this.a(3, message);
                a.this.a(message);
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d("CampaignDownLoadTask", e.getMessage());
                }
            }
        }
    };
    private OnProgressStateListener O = new OnProgressStateListener() { // from class: com.mbridge.msdk.videocommon.download.a.2
        @Override // com.mbridge.msdk.foundation.download.OnProgressStateListener
        public final void onProgress(DownloadMessage downloadMessage, DownloadProgress downloadProgress) {
            try {
                a.this.p = downloadProgress.getCurrent();
                a.this.m = downloadProgress.getTotal();
                a.this.B = downloadProgress.getCurrentDownloadRate();
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d("CampaignDownLoadTask", e.getMessage());
                }
            }
            if (MBridgeConstans.DEBUG) {
                z.d("CampaignDownLoadTask", "name：" + a.this.j.getAppName() + " Rate : " + downloadProgress.getCurrentDownloadRate() + " ReadyRate & cdRate: " + a.this.t + " - " + a.this.d + " total & current: " + downloadProgress.getTotal() + " - " + downloadProgress.getCurrent());
            }
        }
    };
    private OnDownloadStateListener P = new OnDownloadStateListener() { // from class: com.mbridge.msdk.videocommon.download.a.3
        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onCancelDownload(DownloadMessage downloadMessage) {
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadStart(DownloadMessage downloadMessage) {
            a.this.f = 1;
            if (a.this.v == null) {
                a.this.v = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
            }
            a.this.v.a(a.this.j, a.this.m, a.this.q, a.this.f);
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadComplete(DownloadMessage downloadMessage) {
            try {
                z.d("CampaignDownLoadTask", "onDownloadComplete callback : " + a.this.p + "    " + a.this.m);
                if (a.this.v == null) {
                    a.this.v = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                }
                a.this.v.a(a.this.n, a.this.p, 5);
                String videoMD5Value = a.this.j.getVideoMD5Value();
                if (TextUtils.isEmpty(videoMD5Value)) {
                    a.this.a(a.this.p, false);
                    a.this.c(a.this.f(3));
                } else {
                    try {
                        if (videoMD5Value.equals(w.a(new File(a.this.q)))) {
                            a.this.a(a.this.p, true);
                            a.this.c(a.this.f(3));
                            return;
                        }
                    } catch (Throwable th) {
                        z.c("CampaignDownLoadTask", th.getMessage(), th);
                    }
                    a.this.a("Video download complete but MD5 check failed");
                }
                try {
                    if (downloadMessage.getFrom() != 1 || a.this.j == null || TextUtils.isEmpty(a.this.k) || TextUtils.isEmpty(a.this.n)) {
                        return;
                    }
                    com.mbridge.msdk.foundation.same.f.b.b().execute(new RunnableC0310a(a.this.j.getId(), a.this.n, a.this.k, a.this.p, a.this.j.getRequestId(), a.this.j.getRequestIdNotice()));
                } catch (Exception e) {
                    e.printStackTrace();
                }
            } catch (Exception e2) {
                z.d("CampaignDownLoadTask", e2.getMessage());
            }
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadError(DownloadMessage downloadMessage, DownloadError downloadError) {
            if (a.this.y == null || a.this.y.getStatus() == DownloadStatus.CANCELLED) {
                return;
            }
            String message = (downloadError == null || downloadError.getException() == null) ? "Video Download Error" : downloadError.getException().getMessage();
            a.this.p();
            a.this.a(3, message);
            a.this.a(message);
        }
    };
    private OnProgressStateListener Q = new OnProgressStateListener() { // from class: com.mbridge.msdk.videocommon.download.a.4
        @Override // com.mbridge.msdk.foundation.download.OnProgressStateListener
        public final void onProgress(DownloadMessage downloadMessage, DownloadProgress downloadProgress) {
            try {
                a.this.p = downloadProgress.getCurrent();
                a.this.m = downloadProgress.getTotal();
                a.this.B = downloadProgress.getCurrentDownloadRate();
                if (a.this.t != 100 && downloadProgress.getCurrentDownloadRate() >= a.this.t) {
                    z.d("CampaignDownLoadTask", "Rate : " + downloadProgress.getCurrentDownloadRate() + " ReadyRate & cdRate & ctnType = " + a.this.t + " " + a.this.d + " " + a.this.F);
                    if (a.this.e) {
                        return;
                    }
                    a.this.e = true;
                    if (!a.this.C) {
                        a.this.c(a.this.f(1));
                        a.this.a(downloadProgress.getCurrent(), false);
                    }
                    if (a.this.y == null || a.this.F != 2 || a.this.C) {
                        return;
                    }
                    a.this.y.cancel(downloadMessage);
                }
            } catch (Exception e) {
                z.d("CampaignDownLoadTask", e.getMessage());
            }
        }
    };

    public a(Context context, CampaignEx campaignEx, String str, int i) {
        int iB;
        this.f4395a = false;
        this.c = 1;
        this.f = 0;
        this.p = 0L;
        this.J = false;
        if (context == null && campaignEx == null) {
            return;
        }
        com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarG != null) {
            this.J = aVarG.r();
        }
        this.G = com.mbridge.msdk.foundation.same.a.Q;
        this.H = com.mbridge.msdk.foundation.same.a.R;
        this.I = com.mbridge.msdk.foundation.same.a.P;
        this.s = System.currentTimeMillis();
        this.l = com.mbridge.msdk.foundation.controller.a.f().j();
        this.j = campaignEx;
        this.k = str;
        this.c = i;
        if (campaignEx != null) {
            this.n = campaignEx.getVideoUrlEncode();
        }
        this.x = x.d(this.n);
        this.o = e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_VC) + File.separator;
        this.q = this.o + this.x;
        this.f4395a = ab.a().a("u_n_d_r_r", false);
        z.b("CampaignDownLoadTask", this.j.getAppName() + " videoLocalPath:" + this.q + " videoUrl: " + this.j.getVideoUrlEncode() + " " + this.t);
        try {
            if (TextUtils.isEmpty(this.n)) {
                return;
            }
            File file = null;
            if (!TextUtils.isEmpty(this.o)) {
                file = new File(this.o);
                if (!file.exists()) {
                    file.mkdirs();
                }
            }
            if (file != null && file.exists() && (this.E == null || !this.E.exists())) {
                File file2 = new File(file + "/.nomedia");
                this.E = file2;
                if (!file2.exists()) {
                    this.E.createNewFile();
                }
            }
            s sVarA = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
            o oVarA = sVarA.a(this.n, "");
            if (oVarA != null) {
                this.p = oVarA.b();
                if (this.f != 2) {
                    this.f = oVarA.d();
                }
                if (this.f == 1) {
                    this.f = 2;
                }
                this.m = oVarA.c();
                if (oVarA.a() > 0) {
                    this.s = oVarA.a();
                }
                if (this.f == 5) {
                    if (Objects.exists(new File(this.o + this.x), this.o, this.x)) {
                        this.q = this.o + this.x;
                    } else {
                        o();
                    }
                } else if (this.f != 0) {
                    this.q = this.o + this.x;
                }
            } else {
                sVarA.a(this.n, this.s);
            }
            String str2 = this.n;
            if (TextUtils.isEmpty(str2)) {
                this.i.a("VideoUrl is NULL, Please check it.", "");
                return;
            }
            if (this.f == 1) {
                z.a("CampaignDownLoadTask", "Run : Task is RUNNING, Will return.");
                return;
            }
            if (this.f == 5 && Utils.getDownloadRate(this.m, this.p) >= this.t) {
                z.a("CampaignDownLoadTask", "Run : Video Done, Will callback.");
                if (this.h != null) {
                    this.h.a(this.n);
                }
                if (this.i != null) {
                    this.i.a(this.n);
                }
                try {
                    File file3 = new File(this.q);
                    if (Objects.exists(file3, this.o, this.x) && file3.isFile()) {
                        file3.setLastModified(System.currentTimeMillis());
                        return;
                    }
                    return;
                } catch (Exception e) {
                    z.d("CampaignDownLoadTask", e.getMessage());
                    return;
                }
            }
            if (this.c == 3) {
                z.a("CampaignDownLoadTask", "Run : Dlnet is 3, Will callback.");
                a(0L, false);
                return;
            }
            try {
                iB = b(this.j);
            } catch (Exception unused) {
                iB = 100;
            }
            if (iB == 0) {
                if (this.h != null) {
                    this.h.a(this.n);
                }
                if (this.i != null) {
                    this.i.a(this.n);
                }
            }
            if (iB != 100 && this.f4395a) {
                this.A = a(new DownloadMessage(new Object(), str2, this.x, iB, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO), this.N, this.O);
            }
            this.y = a(new DownloadMessage(new Object(), str2, this.x, 100, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO), this.P, this.Q);
        } catch (Exception e2) {
            z.b("CampaignDownLoadTask", e2.getMessage());
        }
    }

    public final String a() {
        return this.n;
    }

    public final void a(int i) {
        this.c = i;
    }

    public final void b(int i) {
        this.d = i;
    }

    public final boolean b() {
        return this.w;
    }

    public final void a(boolean z) {
        this.w = z;
    }

    public final long c() {
        return this.s;
    }

    public final void b(boolean z) {
        this.r = z;
    }

    public final String d() {
        return this.q;
    }

    public final long e() {
        return this.m;
    }

    public final int f() {
        return this.f;
    }

    public final void a(int i, int i2) {
        this.f = i;
        if (this.v == null) {
            this.v = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        this.v.a(this.n, i2, i);
    }

    public final CampaignEx g() {
        return this.j;
    }

    public final void a(CampaignEx campaignEx) {
        this.j = campaignEx;
    }

    public final void c(int i) {
        this.t = i;
        z.a("CampaignDownLoadTask", "setReadyRate:" + this.t);
    }

    public final long h() {
        return this.p;
    }

    public final void d(int i) {
        this.D = i;
    }

    public final void e(int i) {
        this.F = i;
    }

    private DownloadRequest<?> a(DownloadMessage downloadMessage, OnDownloadStateListener onDownloadStateListener, OnProgressStateListener onProgressStateListener) {
        return MBDownloadManager.getInstance().download(downloadMessage).withReadTimeout(this.G).withConnectTimeout(this.I).withWriteTimeout(this.H).withDownloadPriority(DownloadPriority.HIGH).withHttpRetryCounter(1).withDirectoryPathInternal(this.o).withDownloadStateListener(onDownloadStateListener).withProgressStateListener(onProgressStateListener).with("do_us_fi_re", Boolean.toString(this.J)).build();
    }

    public final void a(long j, boolean z) {
        s sVar;
        z.d("CampaignDownLoadTask", "setStateToDone 下载完成  ： mProgressSize" + this.p + "  progressSize " + j + "  " + this.B + "%   FileSize : " + this.m + "  " + this.j.getAppName());
        if (this.t == 100 && this.c != 3 && j != this.m && !z) {
            File file = new File(this.q);
            z.d("CampaignDownLoadTask", "progressSize = " + j + " fileSize = " + this.m + " " + z + " absFileSize = " + (Objects.exists(file, this.o, this.x) ? file.length() : 0L));
            a("File size is not match witch download size.");
            return;
        }
        this.f = 5;
        a(1, "");
        long j2 = this.m;
        if (j2 != 0 && (sVar = this.v) != null) {
            sVar.b(this.n, j2);
        }
        this.b = false;
        a(j, this.f);
    }

    public final void a(String str) {
        com.mbridge.msdk.videocommon.listener.a aVar = this.h;
        if (aVar != null) {
            aVar.a(str, this.n);
        }
        com.mbridge.msdk.videocommon.listener.a aVar2 = this.i;
        if (aVar2 != null) {
            aVar2.a(str, this.n);
        }
        z.d("CampaignDownLoadTask", "Video download stop : " + str);
        CampaignEx campaignEx = this.j;
        if (campaignEx != null && campaignEx.getRsIgnoreCheckRule() != null && this.j.getRsIgnoreCheckRule().size() > 0 && this.j.getRsIgnoreCheckRule().contains(0)) {
            z.b("CampaignDownLoadTask", "Is not check video download status");
        } else {
            if (this.f == 4 || this.f == 2 || this.f == 5) {
                return;
            }
            this.f = 4;
            a(this.p, this.f);
        }
    }

    public final void i() {
        z.d("CampaignDownLoadTask", "start()");
        try {
            if (TextUtils.isEmpty(this.n)) {
                return;
            }
            if (this.n != null) {
                z.d("CampaignDownLoadTask", new URL(this.n).getPath());
            }
            if (this.t == 0 && this.F == 2) {
                z.d("CampaignDownLoadTask", "Can not start download because readyRate is 0 and videoCtnType is 2");
                return;
            }
            boolean z = this.f4395a && this.F == 2 && this.t != 100;
            z.d("CampaignDownLoadTask", "start: ready rate is " + this.t + " and video ctn type is " + this.F + " and isUseNewDownloadReadyRate " + z);
            if (z) {
                DownloadRequest downloadRequest = this.A;
                if (downloadRequest != null) {
                    downloadRequest.start();
                    return;
                }
                DownloadRequest downloadRequest2 = this.y;
                if (downloadRequest2 != null) {
                    downloadRequest2.start();
                    return;
                }
                return;
            }
            DownloadRequest downloadRequest3 = this.y;
            if (downloadRequest3 != null) {
                downloadRequest3.start();
                return;
            }
            DownloadRequest downloadRequest4 = this.A;
            if (downloadRequest4 != null) {
                downloadRequest4.start();
            }
        } catch (Throwable unused) {
            com.mbridge.msdk.videocommon.listener.a aVar = this.h;
            if (aVar != null) {
                aVar.a("VideoUrl is not illegal, Please check it.", "");
            }
            com.mbridge.msdk.videocommon.listener.a aVar2 = this.i;
            if (aVar2 != null) {
                aVar2.a("VideoUrl is not illegal, Please check it.", "");
            }
        }
    }

    private int b(CampaignEx campaignEx) {
        int iC;
        if (campaignEx == null) {
            return 100;
        }
        if (campaignEx.getReady_rate() != -1) {
            iC = campaignEx.getReady_rate();
            z.a("CampaignDownLoadTask", "ready_rate(campaign): " + iC);
        } else {
            iC = c(campaignEx);
            z.a("CampaignDownLoadTask", "ready_rate(reward_unit_setting): " + iC);
        }
        try {
            return Math.max(iC, 0);
        } catch (Exception unused) {
            return 100;
        }
    }

    private int c(CampaignEx campaignEx) {
        if (campaignEx == null) {
            return 100;
        }
        try {
            if (campaignEx.getAdType() == 298) {
                if (this.K == null) {
                    this.K = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k(), this.k);
                }
                return this.K.f();
            }
            if (campaignEx.getAdType() == 42) {
                if (this.M == null) {
                    this.M = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), this.k);
                }
                return d((CampaignEx) null);
            }
            if (this.L == null) {
                this.L = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.k, false);
            }
            return this.L.r();
        } catch (Throwable th) {
            z.c("CampaignDownLoadTask", th.getMessage(), th);
            return 100;
        }
    }

    private int d(CampaignEx campaignEx) {
        try {
            if (this.M != null) {
                return this.M.f();
            }
            return 100;
        } catch (Exception unused) {
            return 100;
        }
    }

    public final void j() {
        boolean z = true;
        try {
            this.C = true;
            if (this.F == 1) {
                z.d("CampaignDownLoadTask", "Can not call resume(), because videoCtnType = " + this.F);
                return;
            }
            z.d("CampaignDownLoadTask", "resume()");
            if (!this.f4395a || this.F != 2 || this.t == 100) {
                z = false;
            }
            z.d("CampaignDownLoadTask", "resume: ready rate is " + this.t + " and video ctn type is " + this.F + " and isUseNewDownloadReadyRate " + z);
            if (this.z == null) {
                this.z = new DownloadMessage(new Object(), this.n, this.x, 100, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO);
            }
            if (z) {
                DownloadRequest<?> downloadRequestA = a(new DownloadMessage(new Object(), this.n, this.x, 100, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO), this.N, this.O);
                this.A = downloadRequestA;
                downloadRequestA.start();
            } else {
                DownloadRequest<?> downloadRequestA2 = a(new DownloadMessage(new Object(), this.n, this.x, 100, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO), this.P, this.Q);
                this.y = downloadRequestA2;
                downloadRequestA2.start();
            }
            c(f(2));
        } catch (Exception e) {
            z.d("CampaignDownLoadTask", e.getMessage());
        }
    }

    public final void b(String str) {
        p();
        a(2, str);
        this.f = 4;
    }

    public final void a(c cVar) {
        CopyOnWriteArrayList<c> copyOnWriteArrayList = this.g;
        if (copyOnWriteArrayList != null) {
            copyOnWriteArrayList.add(cVar);
        }
    }

    public final String k() {
        String message = "";
        if (this.c == 3) {
            return "";
        }
        String str = this.o + this.x;
        File file = new File(str);
        try {
            if (!Objects.exists(file, this.o, this.x)) {
                message = "file is not exist ";
            } else if (!file.isFile()) {
                message = "file is not file ";
            } else if (!file.canRead()) {
                message = "file can not read ";
            } else if (file.length() > 0) {
                this.q = str;
            } else {
                message = "file length is 0 ";
            }
        } catch (Throwable th) {
            z.d("CampaignDownLoadTask", th.getMessage());
            message = th.getMessage();
        }
        if (this.f == 5 && !TextUtils.isEmpty(message)) {
            o();
        }
        return message;
    }

    public final void a(com.mbridge.msdk.videocommon.listener.a aVar) {
        this.h = aVar;
    }

    public final void b(com.mbridge.msdk.videocommon.listener.a aVar) {
        this.i = aVar;
    }

    private void a(long j, int i) {
        this.p = j;
        int i2 = this.t;
        if (100 * j >= ((long) i2) * this.m && !this.u && i != 4) {
            if (i2 == 100 && i != 5) {
                this.f = 5;
                return;
            }
            this.u = true;
            z.d("CampaignDownLoadTask", "UpdateListener : state: " + i + " progress : " + j);
            String strK = k();
            if (TextUtils.isEmpty(strK)) {
                com.mbridge.msdk.videocommon.listener.a aVar = this.h;
                if (aVar != null) {
                    aVar.a(this.n);
                }
                com.mbridge.msdk.videocommon.listener.a aVar2 = this.i;
                if (aVar2 != null) {
                    aVar2.a(this.n);
                }
            } else {
                com.mbridge.msdk.videocommon.listener.a aVar3 = this.h;
                if (aVar3 != null) {
                    aVar3.a("file is not effective " + strK, this.n);
                }
                com.mbridge.msdk.videocommon.listener.a aVar4 = this.i;
                if (aVar4 != null) {
                    aVar4.a("file is not effective " + strK, this.n);
                }
            }
        }
        if (!this.b && j > 0) {
            this.b = true;
            if (this.v == null) {
                this.v = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
            }
            this.v.a(this.n, j, this.f);
        }
        CopyOnWriteArrayList<c> copyOnWriteArrayList = this.g;
        if (copyOnWriteArrayList != null) {
            for (c cVar : copyOnWriteArrayList) {
                if (cVar != null) {
                    cVar.a(j, i);
                }
            }
        }
    }

    public final void l() {
        if (this.g != null) {
            this.g = null;
        }
    }

    private void o() {
        if (this.v == null) {
            this.v = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        try {
            try {
                this.v.b(this.n);
                if (!ab.a().a("r_d_v_b_l", true)) {
                    File file = new File(this.q);
                    if (file.exists() && file.isFile()) {
                        file.delete();
                    }
                }
            } catch (Throwable unused) {
                z.d("CampaignDownLoadTask", "del DB or file failed");
            }
        } finally {
            this.f = 0;
        }
    }

    public final void m() {
        try {
            try {
                o();
            } catch (Exception unused) {
                z.d("CampaignDownLoadTask", "del file is failed");
            }
            if (this.j == null || this.j.getPlayable_ads_without_video() != 2) {
                com.mbridge.msdk.videocommon.a.a aVarA = com.mbridge.msdk.videocommon.a.a.a();
                if (aVarA != null) {
                    aVarA.a(this.j);
                }
            }
        } finally {
            this.f = 0;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void p() {
        try {
            Class<?> cls = Class.forName("com.mbridge.msdk.reward.a.a");
            cls.getMethod("insertExcludeId", String.class, CampaignEx.class).invoke(cls.newInstance(), this.k, this.j);
            Class<?> cls2 = Class.forName("com.mbridge.msdk.mbnative.controller.NativeController");
            cls2.getMethod("insertExcludeId", String.class, CampaignEx.class).invoke(cls2.newInstance(), this.k, this.j);
        } catch (Exception e) {
            z.d("CampaignDownLoadTask", e.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i, String str) {
        t tVarA = t.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        p pVar = new p(this.l, this.j, i, Long.toString(this.s != 0 ? System.currentTimeMillis() - this.s : 0L), this.m, this.D);
        pVar.n(this.j.getId());
        pVar.e(this.j.getVideoUrlEncode());
        pVar.p(str);
        pVar.k(this.j.getRequestId());
        pVar.l(this.j.getRequestIdNotice());
        pVar.m(this.k);
        tVarA.a(pVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(str);
                return;
            }
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j());
            com.mbridge.msdk.foundation.same.net.g.d dVarA = com.mbridge.msdk.foundation.same.report.e.a(str, com.mbridge.msdk.foundation.controller.a.f().j(), this.k);
            if (this.j != null && this.j.getAdType() != 42) {
                dVarA.a(com.tkay.expressad.foundation.g.a.an, com.mbridge.msdk.videocommon.d.b.a().b().b());
            }
            aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, dVarA, null);
        } catch (Exception e) {
            z.d("CampaignDownLoadTask", e.getMessage());
        }
    }

    public final String n() {
        try {
            File file = new File(this.q);
            if (Objects.exists(file, this.o, this.x) && file.isFile()) {
                return this.q;
            }
        } catch (Exception e) {
            z.d("CampaignDownLoadTask", e.getMessage());
        }
        return this.n;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String f(int i) {
        if (this.j == null || TextUtils.isEmpty(this.k) || TextUtils.isEmpty(this.j.getRequestId()) || TextUtils.isEmpty(this.j.getVideoUrlEncode())) {
            return "";
        }
        return "key=" + com.tkay.expressad.videocommon.b.a.f7453a + "&unit_id=" + this.k + "&rid=" + this.j.getRequestId() + "&rid_n=" + this.j.getRequestIdNotice() + "&package_name=" + com.mbridge.msdk.foundation.controller.a.f().d() + "&app_id=" + com.mbridge.msdk.foundation.controller.a.f().k() + "&video_url=" + URLEncoder.encode(this.j.getVideoUrlEncode()) + "&process_size=" + this.p + "&file_size=" + this.m + "&ready_rate=" + this.t + "&cd_rate=" + this.d + "&cid=" + this.j.getId() + "&type=" + this.f + "&video_download_status=" + i;
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.videocommon.download.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: CampaignDownLoadTask.java */
    private static final class RunnableC0310a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f4400a;
        private final String b;
        private final String c;
        private final long d;
        private final String e;
        private String f;

        public RunnableC0310a(String str, String str2, String str3, long j, String str4, String str5) {
            this.f4400a = str;
            this.b = str2;
            this.c = str3;
            this.d = j;
            this.e = str4;
            this.f = str5;
        }

        @Override // java.lang.Runnable
        public final void run() {
            StringBuilder sb;
            com.mbridge.msdk.foundation.same.net.g.d dVarA;
            if (TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.f4400a) || TextUtils.isEmpty(this.e) || TextUtils.isEmpty(this.f) || this.d <= 0) {
                return;
            }
            try {
                sb = new StringBuilder("key=2000110&");
                sb.append("unit_id=");
                sb.append(this.c);
                sb.append("&");
                sb.append("video_url=");
                sb.append(this.b);
                sb.append("&");
                sb.append("c_id=");
                sb.append(this.f4400a);
                sb.append("&");
                sb.append("r_id=");
                sb.append(this.e);
                sb.append("&");
                sb.append("r_id_n=");
                sb.append(this.f);
                sb.append("&");
                sb.append("video_size=");
                sb.append(this.d);
            } catch (Exception unused) {
                sb = null;
            }
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                if (sb != null) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(sb.toString());
                }
            } else {
                if (sb == null || (dVarA = com.mbridge.msdk.foundation.same.report.e.a(sb.toString(), com.mbridge.msdk.foundation.controller.a.f().j(), this.c)) == null) {
                    return;
                }
                try {
                    new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j()).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.videocommon.download.a.a.1
                        @Override // com.mbridge.msdk.foundation.same.report.d.b
                        public final void onFailed(String str) {
                        }

                        @Override // com.mbridge.msdk.foundation.same.report.d.b
                        public final void onSuccess(String str) {
                        }
                    });
                } catch (Exception unused2) {
                }
            }
        }
    }
}
