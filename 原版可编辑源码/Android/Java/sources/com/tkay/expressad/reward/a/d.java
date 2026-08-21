package com.tkay.expressad.reward.a;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.WebView;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.reward.a.c;
import com.tkay.expressad.reward.a.e;
import com.tkay.expressad.reward.player.TYRewardVideoActivity;
import com.tkay.expressad.videocommon.a;
import com.tkay.expressad.videocommon.b.g;
import java.io.File;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONException;
import org.json.JSONObject;

public final class d implements com.tkay.expressad.reward.a.a {
    private static final int L = 8;
    private static final int M = 9;
    private static final int N = 16;
    private static final int O = 17;
    private static final int P = 5000;
    private static final int Q = 30000;
    public static final String a = "APP ALREADY INSTALLED";
    public static final String b = "Offer list is empty";
    public static final String d = "1";
    public static final String e = "1";
    public static final int f = 1;
    public static final int g = 2;
    public static final int h = 3;
    public static final int i = 4;
    public static final int j = 5;
    public static final int k = 6;
    public static final int l = 7;
    private static final String u = "RewardMVVideoAdapter";
    private int A;
    private int B;
    private boolean C;
    private String D;
    private String E;
    private com.tkay.expressad.video.bt.module.b.h F;
    private volatile com.tkay.expressad.reward.a.b G;
    private Runnable H;
    private com.tkay.expressad.videocommon.e.d I;
    private boolean T;
    private boolean U;
    private int W;
    private int X;
    private int Y;
    private com.tkay.expressad.foundation.d.d Z;
    private CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> aa;
    private List<com.tkay.expressad.foundation.d.c> ag;
    private List<com.tkay.expressad.foundation.d.c> ah;
    private Context v;
    private String w;
    private String x;
    private int y;
    private int z;
    private boolean J = false;
    private boolean K = false;
    public Object c = new Object();
    private CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> R = new CopyOnWriteArrayList<>();
    private int S = 2;
    private String V = "";
    private boolean ab = false;
    public String m = "";
    public String n = "";
    private long ac = 0;
    private Handler ad = new Handler(Looper.getMainLooper()) {
        /* JADX WARN: Removed duplicated region for block: B:78:0x01db  */
        /* JADX WARN: Removed duplicated region for block: B:79:0x01dd  */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void handleMessage(Message message) {
            boolean z;
            try {
                try {
                    int i2 = message.what;
                    if (i2 == 8) {
                        if (d.this.G == null || ((com.tkay.expressad.foundation.d.c) message.obj) == null || TextUtils.isEmpty(d.this.w)) {
                            return;
                        }
                        d.this.c();
                        return;
                    }
                    if (i2 == 9 || i2 == 16) {
                        try {
                            Object[] objArr = (Object[]) message.obj;
                            com.tkay.expressad.foundation.d.c cVar = (com.tkay.expressad.foundation.d.c) objArr[0];
                            String str = (String) objArr[2];
                            com.tkay.expressad.videocommon.e.d dVar = (com.tkay.expressad.videocommon.e.d) objArr[3];
                            String str2 = (String) objArr[4];
                            WindVaneWebView windVaneWebView = objArr.length == 7 ? (WindVaneWebView) objArr[6] : null;
                            if (cVar != null) {
                                if (d.this.R == null) {
                                    if (d.this.ah != null) {
                                        d.a(d.this, windVaneWebView, str2, cVar, d.this.ah, "", str, dVar);
                                        return;
                                    }
                                    return;
                                }
                                d.a(d.this, windVaneWebView, str2, cVar, d.this.R, "", str, dVar);
                                return;
                            }
                            return;
                        } catch (Exception e2) {
                            e2.getLocalizedMessage();
                            if (com.tkay.expressad.b.a) {
                                e2.printStackTrace();
                                return;
                            }
                            return;
                        }
                    }
                    if (i2 != 17) {
                        switch (i2) {
                            case 1:
                                StringBuilder sb = new StringBuilder("handler id obtain success,start load mTtcIds:");
                                sb.append(d.this.D);
                                sb.append("  mExcludes:");
                                sb.append(d.this.E);
                                if (message.obj != null) {
                                    Object obj = message.obj;
                                }
                                break;
                            case 2:
                                StringBuilder sb2 = new StringBuilder("handler id obtain timeout,start load mTtcIds:");
                                sb2.append(d.this.D);
                                sb2.append("  mExcludes:");
                                sb2.append(d.this.E);
                                if (message.obj != null) {
                                    Object obj2 = message.obj;
                                }
                                break;
                            case 3:
                                if (d.this.G != null) {
                                    d.this.G.b();
                                }
                                sendEmptyMessageDelayed(5, com.tkay.expressad.foundation.g.a.cq);
                                break;
                            case 4:
                                if (d.this.G != null) {
                                    String unused = d.this.w;
                                    List unused2 = d.this.ag;
                                    boolean unused3 = d.this.U;
                                    if (d.this.ag != null && d.this.ag.size() > 0) {
                                        d.this.ag.get(0);
                                    }
                                    try {
                                        if (message.obj == null) {
                                            if (d.this.ad != null) {
                                                d.this.ad.removeMessages(5);
                                            }
                                            removeMessages(6);
                                            if (!d.this.t) {
                                                d.this.t = true;
                                                d.this.G.a("errorCode: 3506 errorMessage: data load failed");
                                            }
                                        } else {
                                            String str3 = (String) message.obj;
                                            if (TextUtils.isEmpty(str3)) {
                                                if (d.this.ad != null) {
                                                    d.this.ad.removeMessages(5);
                                                }
                                                removeMessages(6);
                                                if (!d.this.t) {
                                                    d.this.t = true;
                                                    d.this.G.a("errorCode: 3507 errorMessage: data load failed, errorMsg null");
                                                }
                                            } else {
                                                if (d.this.ad != null) {
                                                    d.this.ad.removeMessages(5);
                                                }
                                                removeMessages(6);
                                                StringBuilder sb3 = new StringBuilder("=====================onVideoLoadFail=====================3333333 + ");
                                                sb3.append(str3);
                                                sb3.append(" isCalledLoadFailed: ");
                                                sb3.append(d.this.t);
                                                if (!d.this.t) {
                                                    d.this.t = true;
                                                    d.this.G.a("errorCode: 3507 errorMessage: data load failed, errorMsg is ".concat(String.valueOf(str3)));
                                                }
                                            }
                                        }
                                    } catch (Exception e3) {
                                        if (d.this.ad != null) {
                                            d.this.ad.removeMessages(5);
                                        }
                                        removeMessages(6);
                                        String unused4 = d.this.w;
                                        List unused5 = d.this.ag;
                                        boolean unused6 = d.this.U;
                                        if (d.this.t) {
                                            return;
                                        }
                                        d.this.t = true;
                                        d.this.G.a("errorCode: 3508 errorMessage: data load failed, exception is " + e3.getMessage());
                                        return;
                                    }
                                }
                                break;
                            case 5:
                                if (d.this.G != null) {
                                    if (d.this.ag != null && d.this.ag.size() > 0) {
                                        com.tkay.expressad.foundation.d.c cVar2 = (com.tkay.expressad.foundation.d.c) d.this.ag.get(0);
                                        if (d.this.b(d.this.aa, !TextUtils.isEmpty(cVar2.ar()), cVar2.ap())) {
                                            String str4 = d.this.w;
                                            List unused7 = d.this.ag;
                                            List list = d.this.ah;
                                            boolean unused8 = d.this.U;
                                            d.a(str4, list);
                                            sendEmptyMessage(6);
                                            removeMessages(5);
                                            if (!d.this.s) {
                                                d.this.s = true;
                                                TextUtils.isEmpty(d.this.w);
                                                d.this.G.a();
                                            }
                                        }
                                    }
                                    String unused9 = d.this.w;
                                    List unused10 = d.this.ag;
                                    boolean unused11 = d.this.U;
                                    if (d.this.ad != null) {
                                        d.this.ad.removeMessages(5);
                                        d.this.ad.removeMessages(6);
                                    }
                                    if (!d.this.t) {
                                        d.this.t = true;
                                        if (d.this.ag != null && d.this.ag.size() > 0) {
                                            d.this.ag.get(0);
                                        }
                                        d.this.G.a("errorCode: 3401 errorMessage: resource load timeout");
                                        if (d.this.aa != null && d.this.aa.size() > 0) {
                                            boolean z2 = false;
                                            for (com.tkay.expressad.foundation.d.c cVar3 : d.this.aa) {
                                                if (cVar3 != null) {
                                                    try {
                                                        if (!TextUtils.isEmpty(cVar3.S()) && !com.tkay.expressad.videocommon.b.j.a().a(cVar3.S())) {
                                                            z = true;
                                                        }
                                                        if (cVar3 != null && !TextUtils.isEmpty(cVar3.I()) && !com.tkay.expressad.videocommon.b.j.a().b(cVar3.I())) {
                                                            z = true;
                                                        }
                                                        if (cVar3 != null && !TextUtils.isEmpty(cVar3.ar())) {
                                                            if (com.tkay.expressad.videocommon.b.j.a().b(cVar3.ar())) {
                                                                z = true;
                                                            } else if (!z2 && !z) {
                                                                if (com.tkay.expressad.videocommon.a.a(d.this.w + "_" + cVar3.Z() + "_" + cVar3.ar()) == null) {
                                                                    z2 = true;
                                                                }
                                                            }
                                                        }
                                                        if (cVar3 == null && cVar3.M() != null && !TextUtils.isEmpty(cVar3.M().e()) && !cVar3.M().e().contains("cmpt=1") && com.tkay.expressad.videocommon.b.j.a().b(cVar3.M().e()) && TextUtils.isEmpty(cVar3.ar()) && !z) {
                                                            com.tkay.expressad.videocommon.a.a(cVar3.w(), cVar3);
                                                        }
                                                    } catch (Exception unused12) {
                                                    }
                                                }
                                                z = false;
                                                if (cVar3 != null) {
                                                    z = true;
                                                }
                                                if (cVar3 != null) {
                                                    if (com.tkay.expressad.videocommon.b.j.a().b(cVar3.ar())) {
                                                    }
                                                }
                                                if (cVar3 == null) {
                                                }
                                            }
                                            break;
                                        }
                                    }
                                }
                                break;
                            case 6:
                                String str5 = d.this.w;
                                List unused13 = d.this.ag;
                                List list2 = d.this.ah;
                                boolean unused14 = d.this.U;
                                d.a(str5, list2);
                                if (d.this.G != null) {
                                    removeMessages(6);
                                    if (d.this.ad != null) {
                                        d.this.ad.removeMessages(5);
                                    }
                                    if (d.this.G != null && !d.this.s) {
                                        d.this.s = true;
                                        TextUtils.isEmpty(d.this.w);
                                        d.this.G.a();
                                        break;
                                    }
                                }
                                break;
                        }
                        return;
                    }
                    try {
                        Object[] objArr2 = (Object[]) message.obj;
                        com.tkay.expressad.foundation.d.c cVar4 = (com.tkay.expressad.foundation.d.c) objArr2[0];
                        String str6 = (String) objArr2[1];
                        String str7 = (String) objArr2[2];
                        com.tkay.expressad.videocommon.e.d dVar2 = (com.tkay.expressad.videocommon.e.d) objArr2[3];
                        String str8 = (String) objArr2[4];
                        if (cVar4 == null || TextUtils.isEmpty(str6)) {
                            return;
                        }
                        d.a(d.this, str8, cVar4, str6, str7, dVar2);
                    } catch (Exception e4) {
                        e4.getLocalizedMessage();
                        if (com.tkay.expressad.b.a) {
                            e4.printStackTrace();
                        }
                    }
                } catch (Exception e5) {
                    e5.printStackTrace();
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    };
    boolean o = false;
    private long ae = 0;
    volatile boolean p = false;
    volatile boolean q = false;
    volatile boolean r = false;
    volatile boolean s = false;
    volatile boolean t = false;
    private String af = "";

    private static void i() {
    }

    private static void j() {
    }

    private static void l() {
    }

    private static void m() {
    }

    private static void n() {
    }

    private static void o() {
    }

    private static void p() {
    }

    private static String t() {
        return "";
    }

    private static void v() {
    }

    private static void w() {
    }

    private static void x() {
    }

    @Override
    public final boolean a() {
        return false;
    }

    @Override
    public final void b() {
    }

    @Override
    public final void d() {
    }

    public final void a(boolean z) {
        this.T = z;
    }

    public final void b(boolean z) {
        this.U = z;
    }

    private void a(String str) {
        this.V = str;
    }

    private void g() {
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.R;
        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() <= 0) {
            return;
        }
        this.R.clear();
    }

    private int h() {
        return this.S;
    }

    public final void a(int i2) {
        this.S = i2;
    }

    public final String e() {
        return this.w;
    }

    public final String c(boolean z) {
        List<com.tkay.expressad.foundation.d.c> listA;
        com.tkay.expressad.foundation.d.c cVar;
        if (z) {
            if (TextUtils.isEmpty(this.n) && (listA = com.tkay.expressad.videocommon.b.c.a().a(this.w)) != null && listA.size() > 0 && (cVar = listA.get(0)) != null) {
                this.n = cVar.Z();
            }
            return this.n;
        }
        return this.m;
    }

    private class g implements Runnable {
        private String b;
        private com.tkay.expressad.foundation.d.c c;
        private String d;
        private String e;
        private com.tkay.expressad.videocommon.e.d f;
        private int g;
        private d h;

        public g(String str, com.tkay.expressad.foundation.d.c cVar, String str2, String str3, com.tkay.expressad.videocommon.e.d dVar, int i, d dVar2) {
            this.b = str;
            this.c = cVar;
            this.d = str2;
            this.e = str3;
            this.f = dVar;
            this.g = i;
            this.h = dVar2;
        }

        @Override
        public final void run() {
            com.tkay.expressad.video.signal.a.j jVar;
            try {
                new StringBuilder("retry load tpl url = ").append(this.d);
                a.a aVar = new a.a();
                WindVaneWebView windVaneWebView = new WindVaneWebView(m.a().f());
                aVar.a(windVaneWebView);
                com.tkay.expressad.video.bt.a.c.a();
                String strB = com.tkay.expressad.video.bt.a.c.b();
                aVar.a(strB);
                if (d.this.Z.J != null && d.this.Z.J.size() > 0) {
                    jVar = new com.tkay.expressad.video.signal.a.j(null, this.c, d.this.Z.J);
                } else {
                    jVar = new com.tkay.expressad.video.signal.a.j(null, this.c);
                }
                com.tkay.expressad.video.signal.a.j jVar2 = jVar;
                jVar2.a(this.g);
                jVar2.a(this.e);
                jVar2.c(strB);
                jVar2.a(this.f);
                jVar2.b(d.this.ab);
                windVaneWebView.setWebViewListener(new a(this.d, this.b, aVar, this.c, this.h, null, null));
                windVaneWebView.setObject(jVar2);
                windVaneWebView.loadUrl(this.d);
            } catch (Exception e) {
                if (com.tkay.expressad.b.a) {
                    e.printStackTrace();
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private class h implements Runnable {
        private WindVaneWebView b;
        private String c;
        private com.tkay.expressad.foundation.d.c d;
        private List<com.tkay.expressad.foundation.d.c> e;
        private String f;
        private String g;
        private com.tkay.expressad.videocommon.e.d h;
        private int i;
        private d j;

        public h(WindVaneWebView windVaneWebView, String str, com.tkay.expressad.foundation.d.c cVar, List<com.tkay.expressad.foundation.d.c> list, String str2, String str3, com.tkay.expressad.videocommon.e.d dVar, int i, d dVar2) {
            this.b = windVaneWebView;
            this.c = str;
            this.d = cVar;
            this.e = list;
            this.f = str2;
            this.g = str3;
            this.h = dVar;
            this.i = i;
            this.j = dVar2;
        }

        @Override
        public final void run() {
            com.tkay.expressad.video.signal.a.j jVar;
            try {
                new StringBuilder("retry load template url = ").append(this.f);
                a.a aVar = new a.a();
                WindVaneWebView windVaneWebView = new WindVaneWebView(m.a().f());
                aVar.a(windVaneWebView);
                if (this.e != null && this.e.size() > 0) {
                    jVar = new com.tkay.expressad.video.signal.a.j(null, this.d, this.e);
                } else {
                    jVar = new com.tkay.expressad.video.signal.a.j(null, this.d);
                }
                jVar.a(this.i);
                jVar.a(this.g);
                jVar.a(this.h);
                jVar.b(d.this.ab);
                windVaneWebView.setWebViewListener(new j(this.b, this.f, this.c, aVar, this.d, this.j, null, null));
                windVaneWebView.setObject(jVar);
                windVaneWebView.loadUrl(this.f);
            } catch (Exception e) {
                if (com.tkay.expressad.b.a) {
                    e.printStackTrace();
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private void a(String str, com.tkay.expressad.foundation.d.c cVar, String str2, String str3, com.tkay.expressad.videocommon.e.d dVar) {
        com.tkay.expressad.video.signal.a.j jVar;
        try {
            a.a aVar = new a.a();
            WindVaneWebView windVaneWebView = new WindVaneWebView(m.a().f());
            aVar.a(windVaneWebView);
            com.tkay.expressad.video.bt.a.c.a();
            String strB = com.tkay.expressad.video.bt.a.c.b();
            aVar.a(strB);
            if (this.Z != null && this.Z.J != null && this.Z.J.size() > 0) {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar, this.Z.J);
            } else {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar);
            }
            com.tkay.expressad.video.signal.a.j jVar2 = jVar;
            jVar2.a(this.S);
            jVar2.a(str3);
            jVar2.c(strB);
            jVar2.a(dVar);
            jVar2.b(this.ab);
            g gVar = new g(str3, cVar, str2, str3, dVar, this.S, this);
            windVaneWebView.setWebViewListener(new a(str, str3, aVar, cVar, this, gVar, this.ad));
            windVaneWebView.setObject(jVar2);
            windVaneWebView.loadUrl(str2);
            this.ad.postDelayed(gVar, 5000L);
        } catch (Exception e2) {
            if (com.tkay.expressad.b.a) {
                e2.printStackTrace();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private void a(WindVaneWebView windVaneWebView, String str, com.tkay.expressad.foundation.d.c cVar, List<com.tkay.expressad.foundation.d.c> list, String str2, String str3, com.tkay.expressad.videocommon.e.d dVar) {
        com.tkay.expressad.video.signal.a.j jVar;
        try {
            a.a aVar = new a.a();
            WindVaneWebView windVaneWebView2 = new WindVaneWebView(m.a().f());
            aVar.a(windVaneWebView2);
            if (list != null && list.size() > 0) {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar, list);
            } else {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar);
            }
            com.tkay.expressad.video.signal.a.j jVar2 = jVar;
            jVar2.a(this.S);
            jVar2.a(str3);
            jVar2.a(dVar);
            jVar2.b(this.ab);
            h hVar = new h(windVaneWebView, str3, cVar, list, str2, str3, dVar, this.S, this);
            windVaneWebView2.setWebViewListener(new j(windVaneWebView, str, str3, aVar, cVar, this, hVar, this.ad));
            windVaneWebView2.setObject(jVar2);
            windVaneWebView2.loadUrl(str2);
            this.ad.postDelayed(hVar, 5000L);
        } catch (Exception e2) {
            if (com.tkay.expressad.b.a) {
                e2.printStackTrace();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static class a extends com.tkay.expressad.atsignalcommon.a.a {
        private d b;
        private String c;
        private String d;
        private a.a e;
        private com.tkay.expressad.foundation.d.c f;
        private boolean g;
        private boolean h;
        private g i;
        private Handler j;

        @Override
        public final void a(String str, int i, int i2) {
        }

        public a(String str, String str2, a.a aVar, com.tkay.expressad.foundation.d.c cVar, d dVar, g gVar, Handler handler) {
            this.c = str;
            this.d = str2;
            this.e = aVar;
            if (dVar != null) {
                this.b = dVar;
            }
            this.f = cVar;
            this.i = gVar;
            this.j = handler;
        }

        @Override
        public final void readyState(WebView webView, int i) {
            Handler handler;
            if (this.h) {
                return;
            }
            g gVar = this.i;
            if (gVar != null && (handler = this.j) != null) {
                handler.removeCallbacks(gVar);
            }
            com.tkay.expressad.videocommon.b.j.a().c(this.c, true);
            StringBuilder sb = new StringBuilder();
            sb.append(this.d);
            sb.append("_");
            sb.append(this.c);
            a.a aVar = this.e;
            if (aVar != null) {
                aVar.a(true);
            }
            this.h = true;
        }

        @Override
        public final String a(String str) {
            return com.tkay.expressad.videocommon.b.g.a().c(str);
        }

        @Override
        public final void onPageFinished(WebView webView, String str) {
            super.onPageFinished(webView, str);
            if (this.g) {
                return;
            }
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.b(webView);
            this.g = true;
        }

        @Override
        public final void onReceivedError(WebView webView, int i, String str, String str2) {
            super.onReceivedError(webView, i, str, str2);
            try {
                if (this.b != null) {
                    synchronized (this.b) {
                        d.a(this.b, str, str2);
                        this.b = null;
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private static class j extends com.tkay.expressad.atsignalcommon.a.b {
        public static final int a = 0;
        public static final int b = 1;
        private d c;
        private WindVaneWebView e;
        private String f;
        private String g;
        private a.a h;
        private com.tkay.expressad.foundation.d.c i;
        private boolean j;
        private boolean k;
        private h l;
        private Handler m;

        public j(WindVaneWebView windVaneWebView, String str, String str2, a.a aVar, com.tkay.expressad.foundation.d.c cVar, d dVar, h hVar, Handler handler) {
            this.e = windVaneWebView;
            this.f = str;
            this.g = str2;
            this.h = aVar;
            if (dVar != null) {
                this.c = dVar;
            }
            this.i = cVar;
            this.l = hVar;
            this.m = handler;
        }

        @Override
        public final void readyState(WebView webView, int i) {
            Handler handler;
            if (this.k) {
                return;
            }
            h hVar = this.l;
            if (hVar != null && (handler = this.m) != null) {
                handler.removeCallbacks(hVar);
            }
            String str = this.g + "_" + this.f;
            a.a aVar = this.h;
            if (aVar != null) {
                aVar.a(true);
            }
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("type", 1);
                jSONObject.put("id", str);
                jSONObject.put("unitid", this.g);
            } catch (JSONException e) {
                e.printStackTrace();
            }
            com.tkay.expressad.videocommon.b.j.a().c(this.f, true);
            d dVar = this.c;
            if (dVar != null && dVar.T) {
                if (this.i.A()) {
                    com.tkay.expressad.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.i.aa(), this.h);
                }
            } else if (this.i.A()) {
                com.tkay.expressad.videocommon.a.a(94, this.i.aa(), this.h);
            }
            try {
                if (this.c != null) {
                    synchronized (this.c) {
                        if (this.c != null && this.c.c() && this.c.ad != null) {
                            Message messageObtain = Message.obtain();
                            messageObtain.what = 6;
                            messageObtain.obj = this.i;
                            this.c.ad.sendMessage(messageObtain);
                            this.c.ad.removeMessages(5);
                            this.c = null;
                        }
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
            this.k = true;
        }

        @Override
        public final void onPageFinished(WebView webView, String str) {
            super.onPageFinished(webView, str);
            if (this.j) {
                return;
            }
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.b(webView);
            this.j = true;
        }

        @Override
        public final void onReceivedError(WebView webView, int i, String str, String str2) {
            super.onReceivedError(webView, i, str, str2);
            try {
                if (this.c != null) {
                    synchronized (this.c) {
                        d.a(this.c, str, str2);
                        this.c = null;
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    public d(Context context, String str, String str2) {
        try {
            this.v = context.getApplicationContext();
            this.w = str2;
            this.x = str;
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public final void a(com.tkay.expressad.videocommon.e.d dVar) {
        try {
            this.I = dVar;
            if (dVar == null || dVar.V() * 1000 == com.tkay.expressad.foundation.g.a.cq) {
                return;
            }
            com.tkay.expressad.foundation.g.a.cq = this.I.V() * 1000;
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public final boolean a(List<com.tkay.expressad.foundation.d.c> list, boolean z, int i2) {
        return b(list, z, i2);
    }

    private boolean b(List<com.tkay.expressad.foundation.d.c> list, boolean z, int i2) {
        if (list != null && list.size() > 0) {
            com.tkay.expressad.foundation.d.c cVar = list.get(0);
            if (com.tkay.expressad.videocommon.b.c.a().b(this.w, this.U, list.size(), z, i2, list)) {
                if (z) {
                    if (cVar.j()) {
                        return true;
                    }
                    if (cVar.aB() != null && cVar.aB().size() > 0) {
                        if (cVar.aB().contains(3)) {
                            return true;
                        }
                        if (cVar.ar().equals(cVar.I()) && cVar.aB().contains(2)) {
                            return true;
                        }
                    }
                    if (com.tkay.expressad.videocommon.b.j.a().d(this.w + "_" + cVar.Z() + "_" + cVar.ar())) {
                        return true;
                    }
                } else {
                    if (cVar != null && cVar.j()) {
                        return true;
                    }
                    if ((cVar.aB() == null || cVar.aB().size() <= 0 || !cVar.aB().contains(1)) && cVar.M() != null && !TextUtils.isEmpty(cVar.M().e())) {
                        if (com.tkay.expressad.videocommon.b.j.a().d(this.w + "_" + cVar.Z() + "_" + cVar.M().e())) {
                        }
                    }
                    return true;
                }
            }
        }
        return false;
    }

    @Override
    public final boolean c() {
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.aa;
        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() == 0) {
            return false;
        }
        return b(this.aa, !TextUtils.isEmpty(r0.ar()), this.aa.get(0).ap());
    }

    public final void a(Activity activity, com.tkay.expressad.video.bt.module.b.h hVar, String str, String str2, int i2, String str3, com.tkay.core.common.f.i iVar) {
        Context context;
        try {
            this.F = hVar;
            if (this.v != null && !w.a(this.w)) {
                Context context2 = this.v;
                if (activity == null || activity.isFinishing()) {
                    Log.i("tkay_BaseAdActivity", "Activity is null");
                    context = context2;
                } else {
                    context = activity;
                }
                Intent intent = new Intent(context, (Class<?>) TYRewardVideoActivity.class);
                if (!(context instanceof Activity)) {
                    intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                }
                intent.putExtra(TYRewardVideoActivity.a, this.w);
                intent.putExtra(com.tkay.expressad.b.y, this.x);
                intent.putExtra(TYRewardVideoActivity.c, str);
                intent.putExtra(TYRewardVideoActivity.d, i2);
                intent.putExtra(TYRewardVideoActivity.e, this.T);
                intent.putExtra(TYRewardVideoActivity.f, this.U);
                intent.putExtra(TYRewardVideoActivity.l, str3);
                intent.putExtra(TYRewardVideoActivity.m, iVar);
                List<com.tkay.expressad.foundation.d.c> listA = com.tkay.expressad.videocommon.b.c.a().a(this.w);
                boolean z = false;
                new StringBuilder("cur showing Offer requestId").append(listA.get(0).Z());
                if (listA != null && listA.size() > 0) {
                    new StringBuilder("can show data: ").append(listA.size());
                    com.tkay.expressad.foundation.d.c cVar = listA.get(0);
                    if (cVar != null) {
                        this.n = cVar.Z();
                    }
                    if (cVar != null && !TextUtils.isEmpty(cVar.ar())) {
                        z = true;
                    }
                } else if (this.F != null) {
                    this.F.a("load failed");
                    return;
                }
                intent.putExtra(TYRewardVideoActivity.g, z);
                if (this.T) {
                    intent.putExtra(TYRewardVideoActivity.i, this.W);
                    intent.putExtra(TYRewardVideoActivity.j, this.X);
                    intent.putExtra(TYRewardVideoActivity.k, this.Y);
                }
                if (!TextUtils.isEmpty(str2)) {
                    intent.putExtra(TYRewardVideoActivity.b, str2);
                }
                e.a.a.a(this.x, this.w, this.I);
                context.startActivity(intent);
                return;
            }
            if (this.F != null) {
                this.F.a("context or unitid is null");
            }
        } catch (Exception e2) {
            e2.printStackTrace();
            com.tkay.expressad.video.bt.module.b.h hVar2 = this.F;
            if (hVar2 != null) {
                hVar2.a("show failed, exception is " + e2.getMessage());
            }
        }
    }

    public final void a(com.tkay.expressad.foundation.d.d dVar) {
        this.z = 1;
        this.B = 8;
        this.C = true;
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.aa;
        if (copyOnWriteArrayList != null) {
            copyOnWriteArrayList.clear();
        }
        List<com.tkay.expressad.foundation.d.c> list = this.ag;
        if (list != null) {
            list.clear();
        }
        this.p = false;
        this.q = false;
        synchronized (this.c) {
            if (this.r) {
                this.r = false;
            }
        }
        this.t = false;
        this.s = false;
        if (this.v == null) {
            b("Context is null");
            return;
        }
        if (w.a(this.w)) {
            b("UnitId is null");
            return;
        }
        if (this.I == null) {
            b("RewardUnitSetting is null");
            return;
        }
        try {
            if (com.tkay.expressad.foundation.g.a.f.h != null && com.tkay.expressad.foundation.g.a.f.h.size() > 0) {
                com.tkay.expressad.foundation.g.a.f.h.clear();
            }
        } catch (Exception e2) {
            if (com.tkay.expressad.b.a) {
                e2.printStackTrace();
            }
        }
        try {
            this.Z = dVar;
            new StringBuilder("V3 data just requested back,requestId ").append(this.Z.f());
            if (this.Z != null && this.Z.J != null) {
                this.Z.J.size();
            }
            c(this.Z);
            this.m = this.Z.f();
        } catch (Exception e3) {
            if (com.tkay.expressad.b.a) {
                e3.printStackTrace();
            }
            CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList2 = this.aa;
            if (copyOnWriteArrayList2 != null) {
                copyOnWriteArrayList2.clear();
            }
            List<com.tkay.expressad.foundation.d.c> list2 = this.ag;
            if (list2 != null) {
                list2.clear();
            }
            this.p = false;
            this.q = false;
            synchronized (this.c) {
                if (this.r) {
                    this.r = false;
                }
                this.t = false;
                this.s = false;
                b("exception after load success");
                r();
            }
        }
    }

    private void b(com.tkay.expressad.foundation.d.d dVar) {
        try {
            this.Z = dVar;
            new StringBuilder("V3 data just requested back,requestId ").append(this.Z.f());
            if (this.Z != null && this.Z.J != null) {
                this.Z.J.size();
            }
            c(this.Z);
            this.m = this.Z.f();
        } catch (Exception e2) {
            if (com.tkay.expressad.b.a) {
                e2.printStackTrace();
            }
            CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.aa;
            if (copyOnWriteArrayList != null) {
                copyOnWriteArrayList.clear();
            }
            List<com.tkay.expressad.foundation.d.c> list = this.ag;
            if (list != null) {
                list.clear();
            }
            this.p = false;
            this.q = false;
            synchronized (this.c) {
                if (this.r) {
                    this.r = false;
                }
                this.t = false;
                this.s = false;
                b("exception after load success");
                r();
            }
        }
    }

    private void k() {
        Handler handler = this.ad;
        if (handler != null) {
            handler.sendEmptyMessage(3);
        }
    }

    private void b(String str) {
        if (this.ad != null) {
            if (TextUtils.isEmpty(str)) {
                this.ad.sendEmptyMessage(4);
                return;
            }
            Message messageObtain = Message.obtain();
            messageObtain.what = 4;
            messageObtain.obj = str;
            if (str.contains(com.tkay.expressad.foundation.d.f.i)) {
                this.ad.sendMessageAtFrontOfQueue(messageObtain);
            } else {
                this.ad.sendMessage(messageObtain);
            }
        }
    }

    private void a(List<com.tkay.expressad.foundation.d.c> list) {
        if (this.v == null || list == null || list.size() == 0) {
            return;
        }
        for (int i2 = 0; i2 < list.size(); i2++) {
            com.tkay.expressad.foundation.d.c cVar = list.get(i2);
            if (cVar != null) {
                t.a(this.v, cVar.ba());
            }
        }
    }

    private static boolean a(com.tkay.expressad.foundation.d.c cVar) {
        try {
            if (com.tkay.expressad.videocommon.a.a.a() == null) {
                return true;
            }
            com.tkay.expressad.videocommon.a.a.a();
            return com.tkay.expressad.videocommon.a.a.a(cVar);
        } catch (Exception e2) {
            e2.printStackTrace();
            return true;
        }
    }

    @Override
    public final void a(com.tkay.expressad.reward.a.b bVar) {
        this.G = bVar;
    }

    private void a(Runnable runnable) {
        this.H = runnable;
    }

    private void c(com.tkay.expressad.foundation.d.d dVar) {
        this.Z = dVar;
        new StringBuilder("Campaign request success: ").append(dVar.J.size());
        this.aa = d(dVar);
        com.tkay.core.common.l.b.a.a().a(new 5(dVar));
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.aa;
        if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
            new StringBuilder("onload load success,size:").append(this.aa.size());
            Handler handler = this.ad;
            if (handler != null) {
                handler.sendEmptyMessage(3);
            }
            if (dVar != null) {
                String strC = dVar.c();
                if (w.b(strC)) {
                    com.tkay.expressad.reward.b.a.b = strC;
                }
            }
            CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList2 = this.aa;
            if (copyOnWriteArrayList2 != null) {
                try {
                    if (copyOnWriteArrayList2.size() > 0) {
                        this.y += copyOnWriteArrayList2.size();
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            if (this.I == null || this.y > this.I.D()) {
                this.y = 0;
            }
            new StringBuilder("onload 算出 下次的offset是:").append(this.y);
            if (w.b(this.w)) {
                com.tkay.expressad.reward.b.a.a(this.w, this.y);
            }
            CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList3 = this.aa;
            if (copyOnWriteArrayList3 != null && copyOnWriteArrayList3.size() > 0) {
                new StringBuilder("#######onload,save the ad data locally,size:").append(this.aa.size());
            }
            final com.tkay.expressad.foundation.d.c cVar = this.aa.get(0);
            final boolean z = !TextUtils.isEmpty(cVar.ar());
            final int iAp = cVar.ap();
            this.p = false;
            this.q = false;
            synchronized (this.c) {
                if (this.r) {
                    this.r = false;
                }
            }
            this.t = false;
            this.s = false;
            c.m.a.a(this.v, z, iAp, this.U, this.T ? com.tkay.expressad.foundation.g.a.aU : 94, this.x, this.w, cVar.Z(), this.aa, new 2(z, cVar, iAp), new c.i() {
                @Override
                public final void a(String str, String str2, String str3) {
                }

                @Override
                public final void a(final String str) {
                    if (!z && d.this.G != null && d.this.ad != null) {
                        if (cVar.aB() == null || cVar.aB().size() <= 0 || !cVar.aB().contains(1)) {
                            d.this.ad.post(new Runnable() {
                                @Override
                                public final void run() {
                                    List unused = d.this.ag;
                                    boolean unused2 = d.this.U;
                                    if (d.this.ad != null) {
                                        d.this.ad.removeMessages(5);
                                    }
                                    if (d.this.t || d.this.G == null) {
                                        return;
                                    }
                                    d.this.t = true;
                                    d.this.G.a("errorCode: 3202 errorMessage: temp resource download failed");
                                }
                            });
                            return;
                        }
                        return;
                    }
                    if (iAp == 1) {
                        if (cVar.aB() != null && cVar.aB().size() > 0) {
                            if (cVar.aB().contains(3)) {
                                return;
                            }
                            if (cVar.ar().equals(cVar.I()) && cVar.aB().contains(2)) {
                                return;
                            }
                        }
                        if (d.this.G == null || d.this.ad == null) {
                            return;
                        }
                        d.this.ad.post(new Runnable() {
                            @Override
                            public final void run() {
                                List unused = d.this.ag;
                                boolean unused2 = d.this.U;
                                if (d.this.ad != null) {
                                    d.this.ad.removeMessages(5);
                                }
                                if (d.this.t || d.this.G == null) {
                                    return;
                                }
                                d.this.t = true;
                                d.this.G.a("errorCode: 3203 errorMessage: tpl temp resource download failed");
                            }
                        });
                    }
                }
            });
            if (z) {
                c.m.a.a(this.v, cVar, this.x, this.w, cVar.Z(), new 4(cVar, z, iAp));
                return;
            }
            return;
        }
        if (TextUtils.isEmpty(this.af)) {
            this.af = b;
        }
        b(this.af);
    }

    final class 2 implements c.c {
        final boolean a;
        final com.tkay.expressad.foundation.d.c b;
        final int c;

        2(boolean z, com.tkay.expressad.foundation.d.c cVar, int i) {
            this.a = z;
            this.b = cVar;
            this.c = i;
        }

        @Override
        public final void a(final String str, final String str2, final String str3, final CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList) {
            new StringBuilder("Campaign download sucess: ").append(copyOnWriteArrayList.size());
            d.this.p = true;
            if (copyOnWriteArrayList != null) {
                copyOnWriteArrayList.size();
            }
            if (!this.a) {
                for (final com.tkay.expressad.foundation.d.c cVar : copyOnWriteArrayList) {
                    if (cVar != null && cVar.M() != null && !TextUtils.isEmpty(cVar.M().e()) && !cVar.M().e().contains("cmpt=1") && d.this.ad != null) {
                        d.this.ad.post(new Runnable() {
                            @Override
                            public final void run() {
                                com.tkay.expressad.reward.a.c cVar2 = c.m.a;
                                boolean z = d.this.ab;
                                Handler handler = d.this.ad;
                                boolean z2 = d.this.T;
                                boolean z3 = d.this.U;
                                String strE = cVar.M().e();
                                int i = d.this.S;
                                com.tkay.expressad.foundation.d.c cVar3 = 2.this.b;
                                CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList2 = d.this.aa;
                                String strC = com.tkay.expressad.videocommon.b.g.a().c(cVar.M().e());
                                String str4 = str;
                                String str5 = str2;
                                String str6 = str3;
                                cVar.aa();
                                cVar2.a(z, handler, z2, z3, (WindVaneWebView) null, strE, i, cVar3, copyOnWriteArrayList2, strC, str4, str5, str6, d.this.I, new c.j() {
                                    @Override
                                    public final void a() {
                                        if (d.this.a(d.this.aa, 2.this.a, 2.this.c)) {
                                            String str7 = d.this.w;
                                            List list = d.this.ah;
                                            boolean unused = d.this.U;
                                            d.a(str7, list);
                                            if (d.this.ad != null) {
                                                d.this.ad.removeMessages(5);
                                            }
                                            if (d.this.G == null || d.this.s) {
                                                return;
                                            }
                                            d.this.s = true;
                                            TextUtils.isEmpty(d.this.w);
                                            d.this.G.a();
                                            return;
                                        }
                                        List unused2 = d.this.ag;
                                        boolean unused3 = d.this.U;
                                        if (d.this.ad != null) {
                                            d.this.ad.removeMessages(5);
                                        }
                                        if (d.this.G == null || d.this.t) {
                                            return;
                                        }
                                        d.this.t = true;
                                        TextUtils.isEmpty(d.this.w);
                                        d.this.G.a("errorCode: 3502 errorMessage: temp preload success but isReady false");
                                    }

                                    @Override
                                    public final void a(String str7) {
                                        if (2.this.b.aB() == null || 2.this.b.aB().size() <= 0 || !2.this.b.aB().contains(1)) {
                                            List unused = d.this.ag;
                                            boolean unused2 = d.this.U;
                                            if (d.this.ad != null) {
                                                d.this.ad.removeMessages(5);
                                            }
                                            if (d.this.G == null || d.this.t) {
                                                return;
                                            }
                                            d.this.t = true;
                                            TextUtils.isEmpty(d.this.w);
                                            d.this.G.a("errorCode: 3301 errorMessage: temp preload failed: ".concat(String.valueOf(str7)));
                                        }
                                    }
                                });
                            }
                        });
                    } else {
                        d dVar = d.this;
                        if (dVar.a(dVar.aa, this.a, this.c)) {
                            new StringBuilder("模板加载成功 requestId ").append(copyOnWriteArrayList.get(0).Z());
                            String str4 = d.this.w;
                            List list = d.this.ah;
                            boolean unused = d.this.U;
                            d.a(str4, list);
                            if (d.this.ad != null) {
                                d.this.ad.removeMessages(5);
                            }
                            if (d.this.G != null && !d.this.s) {
                                d.this.s = true;
                                TextUtils.isEmpty(d.this.w);
                                d.this.G.a();
                            }
                        } else {
                            new StringBuilder("temp load fail requestId ").append(copyOnWriteArrayList.get(0).Z());
                            List unused2 = d.this.ag;
                            boolean unused3 = d.this.U;
                            if (d.this.ad != null) {
                                d.this.ad.removeMessages(5);
                            }
                            if (d.this.G != null && !d.this.t) {
                                d.this.t = true;
                                if (!TextUtils.isEmpty(d.this.w) && cVar != null && !TextUtils.isEmpty(cVar.aa())) {
                                    cVar.aa();
                                }
                                d.this.G.a("errorCode: 3503 errorMessage: have no temp but isReady false");
                            }
                        }
                    }
                }
                return;
            }
            if (d.this.q && !d.this.r && d.this.ad != null) {
                synchronized (d.this.c) {
                    if (d.this.r) {
                        return;
                    }
                    d.this.r = true;
                    d.this.ad.post(new Runnable() {
                        @Override
                        public final void run() {
                            com.tkay.expressad.reward.a.c cVar2 = c.m.a;
                            boolean z = d.this.ab;
                            Handler handler = d.this.ad;
                            boolean z2 = d.this.T;
                            boolean z3 = d.this.U;
                            String str5 = str3;
                            2.this.b.aa();
                            cVar2.a(z, handler, z2, z3, str5, d.this.x, str2, 2.this.b.ar(), d.this.S, 2.this.b, d.this.aa, com.tkay.expressad.videocommon.b.g.a().c(2.this.b.ar()), str2, d.this.I, new c.j() {
                                @Override
                                public final void a() {
                                    if (d.this.a(d.this.aa, 2.this.a, 2.this.c)) {
                                        String str6 = d.this.w;
                                        List list2 = d.this.ah;
                                        boolean unused4 = d.this.U;
                                        d.a(str6, list2);
                                        if (d.this.ad != null) {
                                            d.this.ad.removeMessages(5);
                                        }
                                        if (d.this.G == null || d.this.s) {
                                            return;
                                        }
                                        d.this.s = true;
                                        TextUtils.isEmpty(d.this.w);
                                        d.this.G.a();
                                        return;
                                    }
                                    List unused5 = d.this.ag;
                                    boolean unused6 = d.this.U;
                                    if (d.this.ad != null) {
                                        d.this.ad.removeMessages(5);
                                    }
                                    if (d.this.G == null || d.this.t) {
                                        return;
                                    }
                                    d.this.t = true;
                                    TextUtils.isEmpty(d.this.w);
                                    d.this.G.a("errorCode: 3505 errorMessage: tpl temp preload success but isReady false");
                                }

                                @Override
                                public final void a(String str6) {
                                    if (2.this.b.aB() == null || 2.this.b.aB().size() <= 0 || !2.this.b.aB().contains(3)) {
                                        List unused4 = d.this.ag;
                                        boolean unused5 = d.this.U;
                                        if (d.this.ad != null) {
                                            d.this.ad.removeMessages(5);
                                        }
                                        if (d.this.G == null || d.this.t) {
                                            return;
                                        }
                                        d.this.t = true;
                                        d.this.G.a("errorCode: 3303 errorMessage: tpl temp preload failed: ".concat(String.valueOf(str6)));
                                    }
                                }
                            });
                        }
                    });
                    return;
                }
            }
            StringBuilder sb = new StringBuilder("Campaign download success:bid temp,big temp download fail: isCampaignTPLDownloadSuccess: ");
            sb.append(d.this.q);
            sb.append("  isCampaignTPLProLoad: ");
            sb.append(d.this.r);
        }

        @Override
        public final void a(final String str, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList) {
            new StringBuilder("Campaign download fail: ").append(copyOnWriteArrayList.size());
            d.this.p = false;
            if (copyOnWriteArrayList != null) {
                copyOnWriteArrayList.size();
            }
            if (d.this.G == null || d.this.ad == null) {
                return;
            }
            d.this.ad.post(new Runnable() {
                @Override
                public final void run() {
                    List unused = d.this.ag;
                    boolean unused2 = d.this.U;
                    if (d.this.ad != null) {
                        d.this.ad.removeMessages(5);
                    }
                    if (d.this.t || d.this.G == null) {
                        return;
                    }
                    d.this.t = true;
                    TextUtils.isEmpty(d.this.w);
                    d.this.G.a("errorCode: 3201 errorMessage: campaign resource download failed");
                }
            });
        }
    }

    final class 4 implements c.i {
        final com.tkay.expressad.foundation.d.c a;
        final boolean b;
        final int c;

        4(com.tkay.expressad.foundation.d.c cVar, boolean z, int i) {
            this.a = cVar;
            this.b = z;
            this.c = i;
        }

        @Override
        public final void a(final String str, final String str2, final String str3) {
            d.this.q = true;
            if (d.this.p && !d.this.r && d.this.ad != null) {
                synchronized (d.this.c) {
                    if (d.this.r) {
                        return;
                    }
                    d.this.r = true;
                    d.this.ad.post(new Runnable() {
                        @Override
                        public final void run() {
                            com.tkay.expressad.reward.a.c cVar = c.m.a;
                            boolean z = d.this.ab;
                            Handler handler = d.this.ad;
                            boolean z2 = d.this.T;
                            boolean z3 = d.this.U;
                            String str4 = str3;
                            4.this.a.aa();
                            cVar.a(z, handler, z2, z3, str4, str, str2, 4.this.a.ar(), d.this.S, 4.this.a, d.this.aa, com.tkay.expressad.videocommon.b.g.a().c(4.this.a.ar()), str2, d.this.I, new c.j() {
                                @Override
                                public final void a() {
                                    if (d.this.a(d.this.aa, 4.this.b, 4.this.c)) {
                                        String str5 = d.this.w;
                                        List unused = d.this.ag;
                                        List list = d.this.ah;
                                        boolean unused2 = d.this.U;
                                        d.a(str5, list);
                                        if (d.this.ad != null) {
                                            d.this.ad.removeMessages(5);
                                        }
                                        if (d.this.G == null || d.this.s) {
                                            return;
                                        }
                                        d.this.s = true;
                                        TextUtils.isEmpty(d.this.w);
                                        d.this.G.a();
                                        return;
                                    }
                                    List unused3 = d.this.ag;
                                    boolean unused4 = d.this.U;
                                    if (d.this.ad != null) {
                                        d.this.ad.removeMessages(5);
                                    }
                                    if (d.this.G == null || d.this.t) {
                                        return;
                                    }
                                    d.this.t = true;
                                    d.this.G.a("errorCode: 3505 errorMessage: tpl temp preload success but isReady false");
                                }

                                @Override
                                public final void a(String str5) {
                                    List unused = d.this.ag;
                                    boolean unused2 = d.this.U;
                                    if (d.this.ad != null) {
                                        d.this.ad.removeMessages(5);
                                    }
                                    if (d.this.G == null || d.this.t) {
                                        return;
                                    }
                                    d.this.t = true;
                                    d.this.G.a("errorCode: 3303 errorMessage: tpl temp preload failed: ".concat(String.valueOf(str5)));
                                }
                            });
                        }
                    });
                    return;
                }
            }
            StringBuilder sb = new StringBuilder("bid temp,big temp download success，Campaign 下载不成功，isCampaignsDownloadSuccess: ");
            sb.append(d.this.p);
            sb.append("  isCampaignTPLProLoad: ");
            sb.append(d.this.r);
        }

        @Override
        public final void a(String str) {
            if (d.this.ag.get(0) != null) {
                d.this.ag.size();
            }
            if (this.a.aB() != null && this.a.aB().size() > 0) {
                if (this.a.aB().contains(3)) {
                    return;
                }
                if (this.a.ar().equals(this.a.I()) && this.a.aB().contains(2)) {
                    return;
                }
            }
            d.this.q = false;
            List unused = d.this.ag;
            boolean unused2 = d.this.U;
            if (d.this.ad != null) {
                d.this.ad.removeMessages(5);
            }
            if (d.this.G == null || d.this.t) {
                return;
            }
            d.this.t = true;
            d.this.G.a("errorCode: 3203 errorMessage: tpl temp resource download failed");
        }
    }

    private boolean b(com.tkay.expressad.foundation.d.c cVar) {
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.aa;
        if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
            Iterator<com.tkay.expressad.foundation.d.c> it = this.aa.iterator();
            while (it.hasNext()) {
                if (it.next().aZ().equals(cVar.aZ())) {
                    return true;
                }
            }
        }
        return false;
    }

    public final void d(boolean z) {
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList;
        if (z || (copyOnWriteArrayList = this.aa) == null || copyOnWriteArrayList.size() <= 0) {
            return;
        }
        com.tkay.expressad.videocommon.a.a.a();
    }

    public final void e(boolean z) {
        if (z) {
            List<com.tkay.expressad.foundation.d.c> list = this.ah;
            if (list == null || list.size() <= 0) {
                return;
            }
            for (com.tkay.expressad.foundation.d.c cVar : this.ah) {
                if (cVar != null) {
                    cVar.l(0);
                    if (cVar.M() != null && !TextUtils.isEmpty(cVar.M().e())) {
                        com.tkay.expressad.videocommon.b.j.a().c(this.w + "_" + cVar.Z() + "_" + cVar.M().e(), false);
                    }
                }
            }
            return;
        }
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.aa;
        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() <= 0) {
            return;
        }
        for (com.tkay.expressad.foundation.d.c cVar2 : this.aa) {
            if (cVar2 != null) {
                cVar2.l(0);
                if (cVar2.M() != null && !TextUtils.isEmpty(cVar2.M().e())) {
                    com.tkay.expressad.videocommon.b.j.a().c(this.w + "_" + cVar2.Z() + "_" + cVar2.M().e(), false);
                }
            }
        }
    }

    public final boolean f(boolean z) {
        if (z) {
            List<com.tkay.expressad.foundation.d.c> list = this.ah;
            if (list == null || list.size() <= 0) {
                return false;
            }
            for (com.tkay.expressad.foundation.d.c cVar : this.ah) {
                if (cVar != null) {
                    cVar.l(1);
                    if (cVar.M() != null && !TextUtils.isEmpty(cVar.M().e())) {
                        com.tkay.expressad.videocommon.b.j.a().c(this.w + "_" + cVar.Z() + "_" + cVar.M().e(), true);
                    }
                }
            }
            return true;
        }
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.aa;
        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() <= 0) {
            return false;
        }
        for (com.tkay.expressad.foundation.d.c cVar2 : this.aa) {
            if (cVar2 != null) {
                cVar2.l(1);
                if (cVar2.M() != null && !TextUtils.isEmpty(cVar2.M().e())) {
                    com.tkay.expressad.videocommon.b.j.a().c(this.w + "_" + cVar2.Z() + "_" + cVar2.M().e(), true);
                }
            }
        }
        return true;
    }

    private static void b(String str, List<com.tkay.expressad.foundation.d.c> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        new StringBuilder("mark cache data: ").append(list.size());
        for (com.tkay.expressad.foundation.d.c cVar : list) {
            if (cVar.M() != null && !TextUtils.isEmpty(cVar.M().e())) {
                com.tkay.expressad.videocommon.a.b(str + "_" + cVar.aZ() + "_" + cVar.Z() + "_" + cVar.M().e());
                com.tkay.expressad.videocommon.a.b(cVar.w(), cVar);
            }
        }
    }

    private void a(String str, String str2) {
        try {
            if (this.R != null && !TextUtils.isEmpty(str2)) {
                Iterator<com.tkay.expressad.foundation.d.c> it = this.R.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    com.tkay.expressad.foundation.d.c next = it.next();
                    if (next != null) {
                        String strS = next.S();
                        if (!TextUtils.isEmpty(strS) && str2.equals(strS)) {
                            this.R.remove(next);
                            break;
                        }
                        String strI = next.I();
                        if (!TextUtils.isEmpty(strI) && str2.equals(strI)) {
                            this.R.remove(next);
                            break;
                        }
                        c.c cVarM = next.M();
                        if (cVarM != null) {
                            List<c.c.a> listF = cVarM.f();
                            if (listF != null) {
                                Iterator<c.c.a> it2 = listF.iterator();
                                while (true) {
                                    if (!it2.hasNext()) {
                                        break;
                                    }
                                    c.c.a next2 = it2.next();
                                    if (next2 != null && next2.b != null && next2.b.contains(str2)) {
                                        this.R.remove(next);
                                        break;
                                    }
                                }
                            }
                            String strE = cVarM.e();
                            if (!TextUtils.isEmpty(strE) && str2.equals(strE)) {
                                this.R.remove(next);
                                break;
                            }
                        } else {
                            continue;
                        }
                    }
                }
                if (this.G == null || this.R == null || this.R.size() != 0) {
                    return;
                }
                if (this.ad != null) {
                    this.ad.removeMessages(5);
                }
                b(str);
                this.G.a(str);
                return;
            }
            if (this.G != null) {
                if (this.ad != null) {
                    this.ad.removeMessages(5);
                }
                b(str);
                this.G.a(str);
            }
        } catch (Throwable th) {
            th.getMessage();
            try {
                if (this.G != null) {
                    if (this.ad != null) {
                        this.ad.removeMessages(5);
                    }
                    b(str);
                }
            } catch (Throwable th2) {
                th2.getMessage();
            }
        }
    }

    private void c(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar == null) {
            return;
        }
        if (!TextUtils.isEmpty(cVar.P())) {
            com.tkay.expressad.videocommon.b.g.a().b(cVar.P());
        }
        if (cVar.M() != null) {
            c.c cVarM = cVar.M();
            if (!TextUtils.isEmpty(cVarM.d())) {
                if (cVarM.d().contains(".zip")) {
                    com.tkay.expressad.videocommon.b.g.a().b(cVarM.d(), (g.a) new i(cVar, this, this.w, 313, this.I, false));
                } else {
                    com.tkay.expressad.videocommon.b.g.a().b(cVarM.d(), (g.a) null);
                }
            }
            if (TextUtils.isEmpty(cVarM.e()) || cVarM.e().contains("cmpt=1")) {
                return;
            }
            if (cVarM.e().contains(".zip")) {
                com.tkay.expressad.videocommon.b.g.a().b(cVarM.e(), (g.a) new i(cVar, this, this.w, 859, this.I, false));
            } else {
                com.tkay.expressad.videocommon.b.g.a().b(cVarM.e(), new d(this, cVar, this.w, this.I));
            }
        }
    }

    private void b(List<com.tkay.expressad.foundation.d.c> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        for (com.tkay.expressad.foundation.d.c cVar : list) {
            if (cVar != null) {
                if (!TextUtils.isEmpty(cVar.P())) {
                    com.tkay.expressad.videocommon.b.g.a().b(cVar.P());
                }
                if (cVar.M() != null) {
                    c.c cVarM = cVar.M();
                    if (!TextUtils.isEmpty(cVarM.d())) {
                        if (cVarM.d().contains(".zip")) {
                            com.tkay.expressad.videocommon.b.g.a().b(cVarM.d(), (g.a) new i(cVar, this, this.w, 313, this.I, false));
                        } else {
                            com.tkay.expressad.videocommon.b.g.a().b(cVarM.d(), (g.a) null);
                        }
                    }
                    if (!TextUtils.isEmpty(cVarM.e()) && !cVarM.e().contains("cmpt=1")) {
                        if (cVarM.e().contains(".zip")) {
                            com.tkay.expressad.videocommon.b.g.a().b(cVarM.e(), (g.a) new i(cVar, this, this.w, 859, this.I, false));
                        } else {
                            com.tkay.expressad.videocommon.b.g.a().b(cVarM.e(), new d(this, cVar, this.w, this.I));
                        }
                    }
                }
            }
        }
    }

    private static class d implements g.b {
        private com.tkay.expressad.foundation.d.c a;
        private String b;
        private com.tkay.expressad.videocommon.e.d c;
        private d d;

        public d(d dVar, com.tkay.expressad.foundation.d.c cVar, String str, com.tkay.expressad.videocommon.e.d dVar2) {
            this.a = cVar;
            this.b = str;
            this.c = dVar2;
            this.d = dVar;
        }

        @Override
        public final void a(String str) {
            d dVar = this.d;
            if (dVar != null) {
                dVar.a(this.a, str, this.b, this.c);
            }
        }

        @Override
        public final void a(String str, String str2) {
            d dVar = this.d;
            if (dVar != null) {
                d.a(dVar, "TemplateUrl source download failed", str);
            }
        }
    }

    private void d(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar == null || TextUtils.isEmpty(cVar.ar())) {
            return;
        }
        String strAr = cVar.ar();
        com.tkay.expressad.videocommon.b.g.a().b(strAr, (g.a) new i(cVar, this, this.w, 502, this.I, TextUtils.isEmpty(com.tkay.expressad.videocommon.b.g.a().c(strAr))));
    }

    private void c(List<com.tkay.expressad.foundation.d.c> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        for (com.tkay.expressad.foundation.d.c cVar : list) {
            String strI = cVar.I();
            if (!TextUtils.isEmpty(strI) && !cVar.H()) {
                if (strI.contains(".zip") && strI.contains("md5filename")) {
                    com.tkay.expressad.videocommon.b.g.a().b(strI, (g.a) new i(cVar, this, this.w, 497, this.I, TextUtils.isEmpty(com.tkay.expressad.videocommon.b.g.a().c(strI))));
                } else {
                    com.tkay.expressad.videocommon.b.g.a().b(strI, new f(this, cVar, this.w, TextUtils.isEmpty(com.tkay.expressad.videocommon.b.h.a().b(strI))));
                }
            }
        }
    }

    private static final class f implements g.b {
        private d a;
        private com.tkay.expressad.foundation.d.c b;
        private long c = System.currentTimeMillis();
        private String d;
        private boolean e;

        public f(d dVar, com.tkay.expressad.foundation.d.c cVar, String str, boolean z) {
            this.e = true;
            this.d = str;
            this.a = dVar;
            this.b = cVar;
            this.e = z;
        }

        @Override
        public final void a(String str) {
            try {
                if (this.a.ad != null) {
                    StringBuilder sb = new StringBuilder("H5SourceDownloadListener source code download success cid:");
                    sb.append(this.b.aZ());
                    sb.append("  url:");
                    sb.append(str);
                    this.a.ad.removeMessages(5);
                    Message messageObtain = Message.obtain();
                    messageObtain.what = 8;
                    messageObtain.obj = this.b;
                    this.a.ad.sendMessage(messageObtain);
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }

        @Override
        public final void a(String str, String str2) {
            try {
                StringBuilder sb = new StringBuilder("H5SourceDownloadListener source code download fail cid:");
                sb.append(this.b.aZ());
                sb.append("  url:");
                sb.append(str);
                if (this.a != null) {
                    d.a(this.a, "H5 code resource download failed ", str);
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private void a(List<com.tkay.expressad.foundation.d.c> list, com.tkay.expressad.videocommon.e.d dVar) {
        if (list != null) {
            try {
                Iterator<com.tkay.expressad.foundation.d.c> it = list.iterator();
                while (it.hasNext()) {
                    com.tkay.expressad.foundation.d.c next = it.next();
                    boolean z = true;
                    boolean z2 = next != null;
                    if (next.M() == null) {
                        z = false;
                    }
                    if ((z & z2) && !TextUtils.isEmpty(next.M().e())) {
                        a(next, next.M().e(), this.w, dVar);
                    }
                    if (next != null && !TextUtils.isEmpty(next.ar())) {
                        a(next, next.ar(), this.w, dVar);
                    }
                }
            } catch (Exception e2) {
                if (com.tkay.expressad.b.a) {
                    e2.printStackTrace();
                }
            }
        }
    }

    private void a(com.tkay.expressad.foundation.d.c cVar, String str, String str2, com.tkay.expressad.videocommon.e.d dVar) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            String strC = com.tkay.expressad.videocommon.b.g.a().c(str);
            Message messageObtain = Message.obtain();
            messageObtain.what = 16;
            messageObtain.obj = new Object[]{cVar, strC, str2, dVar, str};
            if (this.ad != null) {
                this.ad.sendMessage(messageObtain);
            }
        } catch (Exception unused) {
        }
    }

    private void b(com.tkay.expressad.foundation.d.c cVar, String str, String str2, com.tkay.expressad.videocommon.e.d dVar) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            Object[] objArr = new Object[5];
            if (!str.contains(com.sigmob.sdk.archives.d.e) || this.ad == null) {
                return;
            }
            String strC = com.tkay.expressad.videocommon.b.g.a().c(str);
            Message messageObtain = Message.obtain();
            messageObtain.what = 17;
            objArr[0] = cVar;
            objArr[1] = strC;
            objArr[2] = str2;
            objArr[3] = dVar;
            objArr[4] = str;
            messageObtain.obj = objArr;
            this.ad.sendMessage(messageObtain);
        } catch (Exception unused) {
        }
    }

    private static final class i implements g.d {
        public static final int a = 497;
        public static final int b = 859;
        public static final int c = 313;
        public static final int d = 502;
        private com.tkay.expressad.foundation.d.c e;
        private d f;
        private long g = System.currentTimeMillis();
        private String h;
        private int i;
        private com.tkay.expressad.videocommon.e.d j;
        private boolean k;

        public i(com.tkay.expressad.foundation.d.c cVar, d dVar, String str, int i, com.tkay.expressad.videocommon.e.d dVar2, boolean z) {
            this.i = 0;
            this.k = true;
            this.h = str;
            this.e = cVar;
            this.i = i;
            this.j = dVar2;
            this.f = dVar;
            this.k = z;
        }

        @Override
        public final void a(String str) {
            Context context;
            try {
                com.tkay.expressad.videocommon.b.j.a().b(str, true);
                long jCurrentTimeMillis = System.currentTimeMillis() - this.g;
                if (this.i == 497) {
                    if (this.k) {
                        r rVar = new r(r.k, 14, String.valueOf(jCurrentTimeMillis), str, this.e.aZ(), this.h, "", "1");
                        rVar.d(this.e.Z());
                        rVar.e(this.e.aa());
                        rVar.g(this.e.aZ());
                        rVar.b(this.e.f());
                        if (this.e.w() == 287) {
                            rVar.a("3");
                        } else if (this.e.w() == 94) {
                            rVar.a("1");
                        }
                    }
                } else if (this.i == 859) {
                    r rVar2 = new r();
                    rVar2.h(r.m);
                    if (this.f != null) {
                        if (TextUtils.isEmpty(this.e.ar())) {
                            this.f.a(this.e, str, this.h, this.j);
                        }
                        Context context2 = this.f.v;
                        if (context2 != null) {
                            context2.getApplicationContext();
                            rVar2.c(k.a());
                        }
                    }
                    rVar2.d(1);
                    if (this.e != null) {
                        rVar2.g(this.e.aZ());
                        rVar2.d(this.e.Z());
                        rVar2.e(this.e.aa());
                    }
                    rVar2.b(str);
                    rVar2.i("");
                    rVar2.f(this.h);
                } else if (this.i == 502) {
                    r rVar3 = new r();
                    rVar3.h(r.m);
                    if (this.f != null && (context = this.f.v) != null) {
                        context.getApplicationContext();
                        rVar3.c(k.a());
                    }
                    rVar3.d(1);
                    if (this.e != null) {
                        rVar3.g(this.e.aZ());
                        rVar3.d(this.e.Z());
                        rVar3.e(this.e.aa());
                    }
                    rVar3.b(str);
                    rVar3.i("");
                    rVar3.f(this.h);
                } else if (this.i == 313) {
                    return;
                }
                if (this.f != null) {
                    synchronized (this.f) {
                        if (this.f.c() && this.f.ad != null) {
                            this.f.ad.sendEmptyMessage(6);
                            this.f.ad.removeMessages(5);
                            this.f = null;
                        }
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }

        @Override
        public final void a(String str, String str2) {
            Context context;
            try {
                long jCurrentTimeMillis = System.currentTimeMillis() - this.g;
                if (this.i == 497) {
                    if (this.k) {
                        r rVar = new r(r.k, 3, String.valueOf(jCurrentTimeMillis), str2, this.e.aZ(), this.h, "zip download failed", "1");
                        rVar.d(this.e.Z());
                        rVar.e(this.e.aa());
                        rVar.g(this.e.aZ());
                        rVar.b(this.e.f());
                        if (this.e.w() == 287) {
                            rVar.a("3");
                        } else if (this.e.w() == 94) {
                            rVar.a("1");
                        }
                    }
                } else if (this.i == 859) {
                    r rVar2 = new r();
                    rVar2.h(r.m);
                    if (this.f != null && (context = this.f.v) != null) {
                        context.getApplicationContext();
                        rVar2.c(k.a());
                    }
                    rVar2.d(3);
                    if (this.e != null) {
                        rVar2.g(this.e.aZ());
                        rVar2.d(this.e.Z());
                        rVar2.e(this.e.aa());
                    }
                    rVar2.b(str2);
                    rVar2.i(str);
                    rVar2.f(this.h);
                } else if (this.i == 313) {
                    return;
                }
                if (this.f != null) {
                    d.a(this.f, str, str2);
                }
            } catch (Exception e) {
                try {
                    if (this.f != null) {
                        this.f.b("clear error info failed");
                    }
                } catch (Throwable th) {
                    th.getMessage();
                }
                e.getMessage();
            }
            if (this.f != null) {
                this.f = null;
            }
        }
    }

    private void d(List<com.tkay.expressad.foundation.d.c> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        for (com.tkay.expressad.foundation.d.c cVar : list) {
            if (!TextUtils.isEmpty(cVar.bd())) {
                com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.bd(), new c(this, cVar, this.w));
            }
            if (!TextUtils.isEmpty(cVar.be())) {
                com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.be(), new c(this, cVar, this.w));
            }
        }
    }

    private void e(List<com.tkay.expressad.foundation.d.c> list) {
        List<c.c.a> listF;
        if (list != null) {
            try {
                if (list.size() > 0) {
                    for (com.tkay.expressad.foundation.d.c cVar : list) {
                        if (cVar.M() != null && cVar.M().f() != null && (listF = cVar.M().f()) != null) {
                            for (c.c.a aVar : listF) {
                                if (aVar != null && aVar.b != null) {
                                    for (String str : aVar.b) {
                                        if (w.b(str)) {
                                            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(str, new e(this, cVar, this.w));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } catch (Throwable th) {
                if (com.tkay.expressad.b.a) {
                    th.printStackTrace();
                }
            }
        }
    }

    private static final class e implements com.tkay.expressad.foundation.g.d.c {
        private d a;
        private com.tkay.expressad.foundation.d.c b;
        private String c;

        public e(d dVar, com.tkay.expressad.foundation.d.c cVar, String str) {
            this.a = dVar;
            this.b = cVar;
            this.c = str;
        }

        @Override
        public final void a(Bitmap bitmap, String str) {
            try {
                com.tkay.expressad.videocommon.b.j.a();
                com.tkay.expressad.videocommon.b.j.c(str);
                if (this.a != null) {
                    synchronized (this.a) {
                        if (this.a.c() && this.a.ad != null) {
                            Message messageObtain = Message.obtain();
                            messageObtain.what = 6;
                            messageObtain.obj = this.b;
                            this.a.ad.sendMessage(messageObtain);
                            this.a.ad.removeMessages(5);
                            this.a = null;
                        }
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }

        @Override
        public final void a(String str, String str2) {
            try {
                if (this.a != null) {
                    synchronized (this.a) {
                        d.a(this.a, str, str2);
                        this.a = null;
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private static final class c implements com.tkay.expressad.foundation.g.d.c {
        private d a;
        private com.tkay.expressad.foundation.d.c b;
        private String c;

        @Override
        public final void a(Bitmap bitmap, String str) {
        }

        @Override
        public final void a(String str, String str2) {
        }

        public c(d dVar, com.tkay.expressad.foundation.d.c cVar, String str) {
            this.a = dVar;
            this.b = cVar;
            this.c = str;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:62:0x0128  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> d(com.tkay.expressad.foundation.d.d dVar) throws Throwable {
        boolean z;
        File file;
        FileOutputStream fileOutputStream;
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        try {
            if (this.I != null) {
                this.I.A();
            }
            if (dVar != null && dVar.J != null && dVar.J.size() > 0) {
                ArrayList<com.tkay.expressad.foundation.d.c> arrayList = dVar.J;
                this.ag = arrayList;
                if (dVar != null && dVar.J != null && dVar.J.size() > 0) {
                    ArrayList<com.tkay.expressad.foundation.d.c> arrayList2 = dVar.J;
                    for (int i2 = 0; i2 < arrayList2.size(); i2++) {
                        com.tkay.expressad.foundation.d.c cVar = arrayList2.get(i2);
                        cVar.l(this.w);
                        arrayList2.set(i2, cVar);
                    }
                }
                for (int i3 = 0; i3 < arrayList.size() && i3 < Integer.MAX_VALUE; i3++) {
                    com.tkay.expressad.foundation.d.c cVar2 = arrayList.get(i3);
                    if (cVar2.H()) {
                        if (!TextUtils.isEmpty(cVar2.G().trim())) {
                            FileOutputStream fileOutputStream2 = null;
                            if (cVar2.w() != 287 && cVar2.w() != 94) {
                                cVar2.w();
                            }
                            try {
                                try {
                                    String strB = com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.i);
                                    String strA = p.a(cVar2.G());
                                    if (TextUtils.isEmpty(strA)) {
                                        strA = String.valueOf(System.currentTimeMillis());
                                    }
                                    file = new File(strB, strA.concat(".html"));
                                    fileOutputStream = new FileOutputStream(file);
                                } catch (Throwable th) {
                                    th = th;
                                }
                            } catch (Exception e2) {
                                e = e2;
                            }
                            try {
                                StringBuilder sb = new StringBuilder();
                                sb.append("<script>");
                                com.tkay.expressad.d.b.a.a();
                                sb.append(com.tkay.expressad.d.b.a.b());
                                sb.append("</script>");
                                sb.append(cVar2.G());
                                fileOutputStream.write(sb.toString().getBytes());
                                fileOutputStream.flush();
                                cVar2.j(file.getAbsolutePath());
                                fileOutputStream.close();
                            } catch (Exception e3) {
                                e = e3;
                                fileOutputStream2 = fileOutputStream;
                                e.printStackTrace();
                                cVar2.j("");
                                if (fileOutputStream2 != null) {
                                    fileOutputStream2.close();
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                fileOutputStream2 = fileOutputStream;
                                if (fileOutputStream2 != null) {
                                    fileOutputStream2.close();
                                }
                                throw th;
                            }
                            File file2 = new File(cVar2.G());
                            if (!file2.exists() || !file2.isFile() || !file2.canRead()) {
                                b("mraid resource write fail");
                            }
                        }
                    } else if (cVar2 != null && cVar2.O() != 99) {
                        if (e(cVar2)) {
                            if (w.a(cVar2.I()) && TextUtils.isEmpty(cVar2.G())) {
                            }
                        } else {
                            z = !w.a(cVar2.S());
                        }
                        if (z) {
                            if (t.a(cVar2)) {
                                cVar2.i(t.a(this.v, cVar2.ba()) ? 1 : 2);
                            }
                            if (cVar2.ae() == 1 || !t.a(this.v, cVar2.ba())) {
                                copyOnWriteArrayList.add(cVar2);
                            } else if (t.a(cVar2)) {
                                copyOnWriteArrayList.add(cVar2);
                            } else {
                                this.af = a;
                            }
                        } else {
                            this.af = "No video campaign";
                        }
                    }
                }
                new StringBuilder("onload,return campaign with the following video resources:").append(copyOnWriteArrayList.size());
            }
        } catch (Exception e4) {
            e4.printStackTrace();
        }
        return copyOnWriteArrayList;
    }

    private void f(List<com.tkay.expressad.foundation.d.c> list) {
        if (list != null) {
            try {
                if (list.size() > 0) {
                    new StringBuilder("onload 开始下载视频素材 size:").append(list.size());
                    this.R.clear();
                    this.R.addAll(list);
                    com.tkay.expressad.videocommon.b.j.a().a(list);
                    if (com.tkay.expressad.videocommon.b.c.a() != null) {
                        com.tkay.expressad.videocommon.b.c.a().a(this.w, list, 94, new b(this, list.get(0)));
                        com.tkay.expressad.videocommon.b.c.a().d(this.w);
                    }
                }
            } catch (Exception e2) {
                e2.getMessage();
            }
        }
    }

    private static final class b implements com.tkay.expressad.videocommon.d.b {
        private d a;
        private com.tkay.expressad.foundation.d.c b;

        public b(d dVar, com.tkay.expressad.foundation.d.c cVar) {
            this.a = dVar;
            this.b = cVar;
        }

        @Override
        public final void a(String str) {
            try {
                com.tkay.expressad.videocommon.b.j.a().a(str, true);
                if (this.a != null) {
                    synchronized (this.a) {
                        if (this.a != null && this.a.c() && this.a.ad != null) {
                            Message messageObtain = Message.obtain();
                            messageObtain.what = 6;
                            messageObtain.obj = this.b;
                            this.a.ad.sendMessage(messageObtain);
                            this.a.ad.removeMessages(5);
                            this.a = null;
                        }
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }

        @Override
        public final void a(String str, String str2) {
            try {
                if (this.a != null) {
                    synchronized (this.a) {
                        d.a(this.a, str, str2);
                        this.a = null;
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    final class 5 implements Runnable {
        final com.tkay.expressad.foundation.d.d a;

        5(com.tkay.expressad.foundation.d.d dVar) {
            this.a = dVar;
        }

        @Override
        public final void run() {
            com.tkay.expressad.foundation.d.d dVar = this.a;
            if (dVar == null || dVar.J == null || this.a.J.size() <= 0) {
                return;
            }
            d.a(d.this, this.a.J);
        }
    }

    private void e(com.tkay.expressad.foundation.d.d dVar) {
        com.tkay.core.common.l.b.a.a().a(new 5(dVar));
    }

    private void g(List<com.tkay.expressad.foundation.d.c> list) {
        if (list != null) {
            try {
                if (list.size() > 0) {
                    this.y += list.size();
                }
            } catch (Exception e2) {
                e2.printStackTrace();
                return;
            }
        }
        if (this.I == null || this.y > this.I.D()) {
            this.y = 0;
        }
        new StringBuilder("onload 算出 下次的offset是:").append(this.y);
        if (w.b(this.w)) {
            com.tkay.expressad.reward.b.a.a(this.w, this.y);
        }
    }

    private int q() {
        try {
            int iA = w.b(this.w) ? com.tkay.expressad.reward.b.a.a(this.w) : 0;
            if (this.I == null) {
                return 0;
            }
            if (iA > this.I.D()) {
                return 0;
            }
            return iA;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    private void r() {
        try {
            if (w.b(this.w)) {
                com.tkay.expressad.reward.b.a.a(this.w, 0);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private static String s() {
        try {
            return w.b(com.tkay.expressad.reward.b.a.b) ? com.tkay.expressad.reward.b.a.b : "";
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    private static void c(String str) {
        if (w.b(str)) {
            com.tkay.expressad.reward.b.a.b = str;
        }
    }

    private static void u() {
        try {
            if (com.tkay.expressad.foundation.g.a.f.h == null || com.tkay.expressad.foundation.g.a.f.h.size() <= 0) {
                return;
            }
            com.tkay.expressad.foundation.g.a.f.h.clear();
        } catch (Exception e2) {
            if (com.tkay.expressad.b.a) {
                e2.printStackTrace();
            }
        }
    }

    private static boolean e(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar == null) {
            return false;
        }
        try {
            return cVar.J() == 2;
        } catch (Throwable th) {
            if (!com.tkay.expressad.b.a) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    private void h(List<com.tkay.expressad.foundation.d.c> list) {
        this.ah = list;
    }

    public final CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> f() {
        return this.aa;
    }

    public final void a(int i2, int i3, int i4) {
        this.W = i2;
        this.X = i3;
        this.Y = i4;
    }

    static void a(String str, List list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        new StringBuilder("mark cache data: ").append(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            com.tkay.expressad.foundation.d.c cVar = (com.tkay.expressad.foundation.d.c) it.next();
            if (cVar.M() != null && !TextUtils.isEmpty(cVar.M().e())) {
                com.tkay.expressad.videocommon.a.b(str + "_" + cVar.aZ() + "_" + cVar.Z() + "_" + cVar.M().e());
                com.tkay.expressad.videocommon.a.b(cVar.w(), cVar);
            }
        }
    }

    static void a(d dVar, WindVaneWebView windVaneWebView, String str, com.tkay.expressad.foundation.d.c cVar, List list, String str2, String str3, com.tkay.expressad.videocommon.e.d dVar2) {
        com.tkay.expressad.video.signal.a.j jVar;
        try {
            a.a aVar = new a.a();
            WindVaneWebView windVaneWebView2 = new WindVaneWebView(m.a().f());
            aVar.a(windVaneWebView2);
            if (list != null && list.size() > 0) {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar, list);
            } else {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar);
            }
            com.tkay.expressad.video.signal.a.j jVar2 = jVar;
            jVar2.a(dVar.S);
            jVar2.a(str3);
            jVar2.a(dVar2);
            jVar2.b(dVar.ab);
            h hVar = dVar.new h(windVaneWebView, str3, cVar, list, str2, str3, dVar2, dVar.S, dVar);
            windVaneWebView2.setWebViewListener(new j(windVaneWebView, str, str3, aVar, cVar, dVar, hVar, dVar.ad));
            windVaneWebView2.setObject(jVar2);
            windVaneWebView2.loadUrl(str2);
            dVar.ad.postDelayed(hVar, 5000L);
        } catch (Exception e2) {
            if (com.tkay.expressad.b.a) {
                e2.printStackTrace();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    static void a(d dVar, String str, com.tkay.expressad.foundation.d.c cVar, String str2, String str3, com.tkay.expressad.videocommon.e.d dVar2) {
        com.tkay.expressad.video.signal.a.j jVar;
        try {
            a.a aVar = new a.a();
            WindVaneWebView windVaneWebView = new WindVaneWebView(m.a().f());
            aVar.a(windVaneWebView);
            com.tkay.expressad.video.bt.a.c.a();
            String strB = com.tkay.expressad.video.bt.a.c.b();
            aVar.a(strB);
            if (dVar.Z != null && dVar.Z.J != null && dVar.Z.J.size() > 0) {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar, dVar.Z.J);
            } else {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar);
            }
            com.tkay.expressad.video.signal.a.j jVar2 = jVar;
            jVar2.a(dVar.S);
            jVar2.a(str3);
            jVar2.c(strB);
            jVar2.a(dVar2);
            jVar2.b(dVar.ab);
            g gVar = dVar.new g(str3, cVar, str2, str3, dVar2, dVar.S, dVar);
            windVaneWebView.setWebViewListener(new a(str, str3, aVar, cVar, dVar, gVar, dVar.ad));
            windVaneWebView.setObject(jVar2);
            windVaneWebView.loadUrl(str2);
            dVar.ad.postDelayed(gVar, 5000L);
        } catch (Exception e2) {
            if (com.tkay.expressad.b.a) {
                e2.printStackTrace();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    static void a(d dVar, String str, String str2) {
        try {
            if (dVar.R != null && !TextUtils.isEmpty(str2)) {
                Iterator<com.tkay.expressad.foundation.d.c> it = dVar.R.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    com.tkay.expressad.foundation.d.c next = it.next();
                    if (next != null) {
                        String strS = next.S();
                        if (!TextUtils.isEmpty(strS) && str2.equals(strS)) {
                            dVar.R.remove(next);
                            break;
                        }
                        String strI = next.I();
                        if (!TextUtils.isEmpty(strI) && str2.equals(strI)) {
                            dVar.R.remove(next);
                            break;
                        }
                        c.c cVarM = next.M();
                        if (cVarM != null) {
                            List<c.c.a> listF = cVarM.f();
                            if (listF != null) {
                                Iterator<c.c.a> it2 = listF.iterator();
                                while (true) {
                                    if (!it2.hasNext()) {
                                        break;
                                    }
                                    c.c.a next2 = it2.next();
                                    if (next2 != null && next2.b != null && next2.b.contains(str2)) {
                                        dVar.R.remove(next);
                                        break;
                                    }
                                }
                            }
                            String strE = cVarM.e();
                            if (!TextUtils.isEmpty(strE) && str2.equals(strE)) {
                                dVar.R.remove(next);
                                break;
                            }
                        } else {
                            continue;
                        }
                    }
                }
                if (dVar.G == null || dVar.R == null || dVar.R.size() != 0) {
                    return;
                }
                if (dVar.ad != null) {
                    dVar.ad.removeMessages(5);
                }
                dVar.b(str);
                dVar.G.a(str);
                return;
            }
            if (dVar.G != null) {
                if (dVar.ad != null) {
                    dVar.ad.removeMessages(5);
                }
                dVar.b(str);
                dVar.G.a(str);
            }
        } catch (Throwable th) {
            th.getMessage();
            try {
                if (dVar.G != null) {
                    if (dVar.ad != null) {
                        dVar.ad.removeMessages(5);
                    }
                    dVar.b(str);
                }
            } catch (Throwable th2) {
                th2.getMessage();
            }
        }
    }

    static void a(d dVar, List list) {
        if (dVar.v == null || list == null || list.size() == 0) {
            return;
        }
        for (int i2 = 0; i2 < list.size(); i2++) {
            com.tkay.expressad.foundation.d.c cVar = (com.tkay.expressad.foundation.d.c) list.get(i2);
            if (cVar != null) {
                t.a(dVar.v, cVar.ba());
            }
        }
    }
}
