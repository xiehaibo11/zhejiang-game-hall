package com.mbridge.msdk.mbdownload.manager;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.e;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.download.DownloadError;
import com.mbridge.msdk.foundation.download.DownloadMessage;
import com.mbridge.msdk.foundation.download.DownloadPriority;
import com.mbridge.msdk.foundation.download.DownloadProgress;
import com.mbridge.msdk.foundation.download.DownloadResourceType;
import com.mbridge.msdk.foundation.download.MBDownloadManager;
import com.mbridge.msdk.foundation.download.OnDownloadStateListener;
import com.mbridge.msdk.foundation.download.OnProgressStateListener;
import com.mbridge.msdk.foundation.download.core.DownloadRequest;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ak;
import java.util.Observable;

/* JADX INFO: compiled from: ApkDownloadTaskObservable.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a extends Observable {
    private String d;
    private String e;
    private String f;
    private String h;
    private DownloadRequest k;
    private e l;
    private String o;
    private DownloadMessage<Object> p;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3681a = getClass().getSimpleName();
    private volatile int b = -1;
    private volatile int c = 0;
    private String g = "";
    private String i = com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_APK);
    private c j = new c();
    private OnDownloadStateListener m = new OnDownloadStateListener() { // from class: com.mbridge.msdk.mbdownload.manager.a.1
        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadStart(DownloadMessage downloadMessage) {
            a.this.setChanged();
            a.this.b = 2;
            a.this.j.a(a.this.b);
            a aVar = a.this;
            aVar.a(aVar.b);
            a aVar2 = a.this;
            aVar2.notifyObservers(aVar2.j);
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onCancelDownload(DownloadMessage downloadMessage) {
            a.this.setChanged();
            a.this.b = 5;
            a.this.j.a(a.this.b);
            a aVar = a.this;
            aVar.a(aVar.b);
            a aVar2 = a.this;
            aVar2.notifyObservers(aVar2.j);
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadComplete(DownloadMessage downloadMessage) {
            a.this.setChanged();
            a.this.b = 1;
            a.this.j.a(a.this.b);
            a aVar = a.this;
            aVar.a(aVar.b);
            a.this.h = downloadMessage.getSaveFilePath();
            a aVar2 = a.this;
            a.b(aVar2, aVar2.h);
            a.this.j.a(a.this.h);
            a aVar3 = a.this;
            aVar3.notifyObservers(aVar3.j);
        }

        @Override // com.mbridge.msdk.foundation.download.OnDownloadStateListener
        public final void onDownloadError(DownloadMessage downloadMessage, DownloadError downloadError) {
            a.this.setChanged();
            a.this.b = 8;
            a.this.j.a(a.this.b);
            a aVar = a.this;
            aVar.a(aVar.b);
            a aVar2 = a.this;
            aVar2.notifyObservers(aVar2.j);
        }
    };
    private OnProgressStateListener n = new OnProgressStateListener() { // from class: com.mbridge.msdk.mbdownload.manager.a.2
        @Override // com.mbridge.msdk.foundation.download.OnProgressStateListener
        public final void onProgress(DownloadMessage downloadMessage, DownloadProgress downloadProgress) {
            int currentDownloadRate = downloadProgress.getCurrentDownloadRate();
            if (a.this.b != 2 || a.this.c == currentDownloadRate) {
                return;
            }
            a.this.c = currentDownloadRate;
            a.this.setChanged();
            a.this.j.a(a.this.b);
            a aVar = a.this;
            a.d(aVar, aVar.c);
            a.this.j.b(a.this.c);
            a.this.j.a(downloadMessage.getSaveFilePath());
            a aVar2 = a.this;
            aVar2.notifyObservers(aVar2.j);
        }
    };
    private int q = -1;

    public a(String str, String str2) {
        this.d = "";
        this.e = "";
        this.f = "";
        this.o = "";
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        this.d = str;
        this.e = str2;
        this.o = this.i + "/";
        this.f = str;
        if (TextUtils.isEmpty(str)) {
            this.f = SameMD5.getMD5(ak.a(str2));
        }
        this.p = new DownloadMessage<>(new Object(), str2, this.f + com.tkay.china.common.a.a.g, 100, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_APK);
        e eVarA = e.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        this.l = eVarA;
        eVarA.a(str, str2);
    }

    public final void a() {
        DownloadRequest downloadRequestBuild = MBDownloadManager.getInstance().download(this.p).withReadTimeout(30000L).withConnectTimeout(20000L).withDownloadPriority(DownloadPriority.HIGH).withHttpRetryCounter(1).withDirectoryPathInternal(this.o).withDownloadStateListener(this.m).withProgressStateListener(this.n).build();
        this.k = downloadRequestBuild;
        downloadRequestBuild.start();
        this.g = this.k.getDownloadId();
    }

    public final void b() {
        MBDownloadManager.getInstance().cancel(this.g);
    }

    public final void c() {
        this.b = 9;
        setChanged();
        this.j.a(this.b);
        a(this.b);
        notifyObservers(this.j);
    }

    public final int d() {
        return this.b;
    }

    public final int e() {
        return this.c;
    }

    public final String f() {
        return this.h;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i) {
        e eVar = this.l;
        if (eVar != null) {
            eVar.a(this.d, i);
        }
    }

    static /* synthetic */ void b(a aVar, String str) {
        e eVar = aVar.l;
        if (eVar != null) {
            eVar.b(aVar.d, str);
        }
    }

    static /* synthetic */ void d(a aVar, int i) {
        e eVar = aVar.l;
        if (eVar == null || i <= aVar.q) {
            return;
        }
        aVar.q = i;
        eVar.b(aVar.d, i);
    }
}
