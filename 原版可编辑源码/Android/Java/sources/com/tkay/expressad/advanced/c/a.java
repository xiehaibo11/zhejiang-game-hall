package com.tkay.expressad.advanced.c;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.http.SslError;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.tkay.core.common.b.m;
import com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.advanced.view.TYNativeAdvancedView;
import com.tkay.expressad.advanced.view.TYNativeAdvancedWebview;
import com.tkay.expressad.foundation.d.d;
import com.tkay.expressad.foundation.g.c.f;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.videocommon.b.g;
import java.io.File;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;

public final class a {
    private static String a = "NativeAdvancedLoadManager";
    private static final int j = 1;
    private static final int k = 2;
    private static final int l = 3;
    private static final int m = 4;
    private static final int n = 5;
    private int A;
    private String b;
    private String c;
    private long d;
    private com.tkay.expressad.advanced.b.a e;
    private TYNativeAdvancedView g;
    private com.tkay.expressad.d.c h;
    private com.tkay.expressad.foundation.d.c i;
    private int o;
    private int p;
    private int q;
    private int r;
    private String s;
    private int t;
    private boolean u;
    private volatile boolean v;
    private com.tkay.expressad.videocommon.d.b w;
    private g.d x;
    private g.d y;
    private String z;
    private String B = "";
    private Handler C = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) {
            Object obj;
            super.handleMessage(message);
            int i = message.what;
            if (i == 1) {
                Object obj2 = message.obj;
                int i2 = message.arg1;
                if (obj2 == null || !(obj2 instanceof com.tkay.expressad.foundation.d.c)) {
                    return;
                }
                com.tkay.expressad.foundation.d.c cVar = (com.tkay.expressad.foundation.d.c) obj2;
                a.a(a.this, g.a().c(cVar.c()), cVar, i2);
                return;
            }
            if (i == 2) {
                Object obj3 = message.obj;
                if (obj3 == null || !(obj3 instanceof String)) {
                    return;
                }
                a aVar = a.this;
                String string = obj3.toString();
                String unused = a.this.s;
                aVar.b(string, a.this.t);
                return;
            }
            if (i == 3) {
                Object obj4 = message.obj;
                if (obj4 == null || !(obj4 instanceof com.tkay.expressad.foundation.d.c)) {
                    return;
                }
                a aVar2 = a.this;
                aVar2.a((com.tkay.expressad.foundation.d.c) obj4, aVar2.t);
                return;
            }
            if (i == 4) {
                Object obj5 = message.obj;
                if (obj5 == null || !(obj5 instanceof com.tkay.expressad.foundation.d.c)) {
                    return;
                }
                if (a.this.g != null) {
                    a.this.g.setEndCardReady(true);
                }
                a aVar3 = a.this;
                aVar3.a((com.tkay.expressad.foundation.d.c) obj5, aVar3.t);
                return;
            }
            if (i == 5 && (obj = message.obj) != null && (obj instanceof com.tkay.expressad.foundation.d.c)) {
                if (a.this.g != null) {
                    a.this.g.setVideoReady(true);
                }
                a aVar4 = a.this;
                aVar4.a((com.tkay.expressad.foundation.d.c) obj, aVar4.t);
            }
        }
    };
    private Runnable D = new Runnable() {
        @Override
        public final void run() {
            a aVar = a.this;
            String unused = aVar.s;
            aVar.b("load timeout", a.this.t);
        }
    };
    private Context f = m.a().f();

    private static void g() {
    }

    private static void j() {
    }

    public a(String str, String str2) {
        this.c = str;
        this.b = str2;
    }

    public final void a(com.tkay.expressad.d.c cVar) {
        this.h = cVar;
    }

    public final void a(TYNativeAdvancedView tYNativeAdvancedView) {
        this.g = tYNativeAdvancedView;
    }

    public final void a(int i) {
        this.o = i;
    }

    private int e() {
        return this.p;
    }

    private void b(int i) {
        this.p = i;
    }

    public final void a(int i, int i2) {
        this.r = i;
        this.q = i2;
    }

    private void a(long j2) {
        this.C.postDelayed(this.D, j2);
    }

    private void f() {
        try {
            int i = this.A + 1;
            this.A = i;
            if (this.h == null || i > this.h.t()) {
                this.A = 0;
            }
            new StringBuilder("onload 算出 下次的offset是:").append(this.A);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final String a() {
        return this.B;
    }

    private void h() {
        this.A = 0;
    }

    public final void a(com.tkay.expressad.advanced.b.a aVar) {
        this.e = aVar;
    }

    public final void b() {
        if (this.e != null) {
            this.e = null;
        }
        b("LoadManager release", this.t);
        if (this.w != null) {
            this.w = null;
        }
        if (this.x != null) {
            this.x = null;
        }
    }

    public final com.tkay.expressad.foundation.d.c c() {
        return this.i;
    }

    private void a(com.tkay.expressad.foundation.d.c cVar) {
        this.i = cVar;
        if (c.a(this.g, cVar)) {
            a(cVar, 2);
            return;
        }
        TYNativeAdvancedView tYNativeAdvancedView = this.g;
        if (tYNativeAdvancedView != null) {
            tYNativeAdvancedView.clearResState();
        }
        if (!TextUtils.isEmpty(cVar.c())) {
            new StringBuilder("start download zip: ").append(cVar.c());
            this.x = new 8(cVar);
            g.a().b(cVar.c(), (g.a) this.x);
        }
        if (!TextUtils.isEmpty(cVar.d())) {
            new StringBuilder("start download HTML: ").append(cVar.d());
            com.tkay.core.common.l.b.a.a().a(new 7(cVar));
        }
        if (!TextUtils.isEmpty(cVar.S())) {
            new StringBuilder("start download Video: ").append(cVar.S());
            this.w = new 2(cVar);
            ArrayList arrayList = new ArrayList();
            arrayList.add(cVar);
            com.tkay.expressad.videocommon.b.c.a().a(this.b, arrayList, com.tkay.expressad.foundation.g.a.aX, this.w);
            if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aX, this.b, cVar.A())) {
                com.tkay.expressad.videocommon.b.c.a().d(this.b);
            } else {
                this.g.setVideoReady(true);
                a(cVar, 2);
            }
        }
        if (!TextUtils.isEmpty(cVar.be())) {
            new StringBuilder("start download image: ").append(cVar.be());
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.be(), new 6(cVar));
        }
        if (!TextUtils.isEmpty(cVar.I())) {
            new StringBuilder("start download EndCard: ").append(cVar.I());
            this.y = new 5(cVar);
            g.a().b(cVar.I(), (g.a) this.y);
        }
        if (TextUtils.isEmpty(cVar.y())) {
            return;
        }
        new StringBuilder("start download gitUrl: ").append(cVar.y());
        com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.y(), new 4(cVar));
    }

    private void a(com.tkay.expressad.foundation.d.c cVar, int i) {
        if (!c.a(this.g, cVar) || this.v) {
            return;
        }
        i();
        this.v = true;
        com.tkay.expressad.advanced.b.a aVar = this.e;
        if (aVar != null) {
            aVar.a(cVar, i);
        }
    }

    private void a(String str, int i) {
        b(str, i);
    }

    private void b(String str, int i) {
        if (this.v) {
            return;
        }
        i();
        this.v = true;
        com.tkay.expressad.advanced.b.a aVar = this.e;
        if (aVar != null) {
            aVar.a(str, i);
        }
    }

    private void i() {
        this.C.removeCallbacks(this.D);
    }

    private void b(com.tkay.expressad.foundation.d.c cVar) {
        TYNativeAdvancedView tYNativeAdvancedView = this.g;
        if (tYNativeAdvancedView != null) {
            tYNativeAdvancedView.clearResState();
        }
        if (!TextUtils.isEmpty(cVar.c())) {
            new StringBuilder("start download zip: ").append(cVar.c());
            this.x = new 8(cVar);
            g.a().b(cVar.c(), (g.a) this.x);
        }
        if (!TextUtils.isEmpty(cVar.d())) {
            new StringBuilder("start download HTML: ").append(cVar.d());
            com.tkay.core.common.l.b.a.a().a(new 7(cVar));
        }
        if (!TextUtils.isEmpty(cVar.S())) {
            new StringBuilder("start download Video: ").append(cVar.S());
            this.w = new 2(cVar);
            ArrayList arrayList = new ArrayList();
            arrayList.add(cVar);
            com.tkay.expressad.videocommon.b.c.a().a(this.b, arrayList, com.tkay.expressad.foundation.g.a.aX, this.w);
            if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aX, this.b, cVar.A())) {
                com.tkay.expressad.videocommon.b.c.a().d(this.b);
            } else {
                this.g.setVideoReady(true);
                a(cVar, 2);
            }
        }
        if (!TextUtils.isEmpty(cVar.be())) {
            new StringBuilder("start download image: ").append(cVar.be());
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.be(), new 6(cVar));
        }
        if (!TextUtils.isEmpty(cVar.I())) {
            new StringBuilder("start download EndCard: ").append(cVar.I());
            this.y = new 5(cVar);
            g.a().b(cVar.I(), (g.a) this.y);
        }
        if (TextUtils.isEmpty(cVar.y())) {
            return;
        }
        new StringBuilder("start download gitUrl: ").append(cVar.y());
        com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.y(), new 4(cVar));
    }

    final class 4 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.foundation.d.c a;
        final int b = 2;

        4(com.tkay.expressad.foundation.d.c cVar) {
            this.a = cVar;
        }

        @Override
        public final void a(Bitmap bitmap, String str) {
            String unused = a.a;
            if (a.this.C != null) {
                a.this.C.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.a(4.this.a, 4.this.b);
                    }
                });
            }
        }

        @Override
        public final void a(String str, String str2) {
            String unused = a.a;
            if (a.this.C != null) {
                a.this.C.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.a(4.this.a, 4.this.b);
                    }
                });
            }
        }
    }

    private void c(com.tkay.expressad.foundation.d.c cVar) {
        com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.y(), new 4(cVar));
    }

    final class 5 implements g.d {
        final com.tkay.expressad.foundation.d.c a;
        final int b = 2;

        5(com.tkay.expressad.foundation.d.c cVar) {
            this.a = cVar;
        }

        @Override
        public final void a(String str) {
            String unused = a.a;
            if (a.this.C != null) {
                Message messageObtain = Message.obtain();
                messageObtain.what = 4;
                messageObtain.obj = this.a;
                messageObtain.arg1 = this.b;
                a.this.C.sendMessage(messageObtain);
            }
        }

        @Override
        public final void a(String str, String str2) {
            String unused = a.a;
            if (a.this.g != null) {
                a.this.g.setEndCardReady(false);
            }
            Message messageObtain = Message.obtain();
            messageObtain.what = 2;
            messageObtain.obj = str;
            a.this.C.sendMessage(messageObtain);
        }
    }

    private void d(com.tkay.expressad.foundation.d.c cVar) {
        this.y = new 5(cVar);
        g.a().b(cVar.I(), (g.a) this.y);
    }

    final class 6 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.foundation.d.c a;
        final int b = 2;

        6(com.tkay.expressad.foundation.d.c cVar) {
            this.a = cVar;
        }

        @Override
        public final void a(Bitmap bitmap, String str) {
            String unused = a.a;
            if (a.this.C != null) {
                a.this.C.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.a(6.this.a, 6.this.b);
                    }
                });
            }
        }

        @Override
        public final void a(String str, String str2) {
            String unused = a.a;
            if (a.this.C != null) {
                a.this.C.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.a(6.this.a, 6.this.b);
                    }
                });
            }
        }
    }

    private void e(com.tkay.expressad.foundation.d.c cVar) {
        com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.be(), new 6(cVar));
    }

    final class 7 implements Runnable {
        final com.tkay.expressad.foundation.d.c a;
        final int b = 2;

        7(com.tkay.expressad.foundation.d.c cVar) {
            this.a = cVar;
        }

        @Override
        public final void run() throws Throwable {
            File file;
            final File file2;
            FileOutputStream fileOutputStream = null;
            try {
                try {
                    try {
                        file2 = new File(this.a.d());
                        try {
                            if (!file2.exists()) {
                                String strB = f.b(com.tkay.expressad.foundation.g.c.c.i);
                                String strA = p.a(x.a(this.a.d()));
                                if (TextUtils.isEmpty(strA)) {
                                    strA = String.valueOf(System.currentTimeMillis());
                                }
                                file = new File(strB, strA.concat(".html"));
                                try {
                                    if (!file.exists()) {
                                        FileOutputStream fileOutputStream2 = new FileOutputStream(file);
                                        try {
                                            StringBuilder sb = new StringBuilder();
                                            sb.append("<script>");
                                            com.tkay.expressad.d.b.a.a();
                                            sb.append(com.tkay.expressad.d.b.a.b());
                                            sb.append("</script>");
                                            sb.append(this.a.d());
                                            fileOutputStream2.write(sb.toString().getBytes());
                                            fileOutputStream2.flush();
                                            fileOutputStream = fileOutputStream2;
                                        } catch (Exception e) {
                                            e = e;
                                            fileOutputStream = fileOutputStream2;
                                            e.printStackTrace();
                                            this.a.j("");
                                            if (fileOutputStream != null) {
                                                fileOutputStream.close();
                                            }
                                            file2 = file;
                                        } catch (Throwable th) {
                                            th = th;
                                            fileOutputStream = fileOutputStream2;
                                            if (fileOutputStream != null) {
                                                fileOutputStream.close();
                                            }
                                            throw th;
                                        }
                                    }
                                    file2 = file;
                                } catch (Exception e2) {
                                    e = e2;
                                }
                            }
                            if (fileOutputStream != null) {
                                fileOutputStream.close();
                            }
                        } catch (Exception e3) {
                            e = e3;
                            file = file2;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                    }
                } catch (Exception e4) {
                    e = e4;
                    file = null;
                }
                if (!file2.exists() || !file2.isFile() || !file2.canRead()) {
                    String unused = a.a;
                    a aVar = a.this;
                    String unused2 = a.this.s;
                    aVar.b("html file write failed", this.b);
                    return;
                }
                this.a.b(file2.getAbsolutePath());
                String unused3 = a.a;
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        a.a(a.this, "file:////" + file2.getAbsolutePath(), 7.this.a, 7.this.b);
                    }
                });
            } catch (Exception e5) {
                a aVar2 = a.this;
                String message = e5.getMessage();
                String unused4 = a.this.s;
                aVar2.b(message, this.b);
            }
        }
    }

    private void f(com.tkay.expressad.foundation.d.c cVar) {
        com.tkay.core.common.l.b.a.a().a(new 7(cVar));
    }

    final class 8 implements g.d {
        final com.tkay.expressad.foundation.d.c a;
        final int b = 2;

        8(com.tkay.expressad.foundation.d.c cVar) {
            this.a = cVar;
        }

        @Override
        public final void a(String str) {
            String unused = a.a;
            Message messageObtain = Message.obtain();
            messageObtain.what = 1;
            messageObtain.obj = this.a;
            messageObtain.arg1 = this.b;
            a.this.C.sendMessage(messageObtain);
        }

        @Override
        public final void a(String str, String str2) {
            String unused = a.a;
            StringBuilder sb = new StringBuilder("zip download fail: ");
            sb.append(str2);
            sb.append(" ");
            sb.append(str);
            Message messageObtain = Message.obtain();
            messageObtain.what = 2;
            messageObtain.obj = str;
            a.this.C.sendMessage(messageObtain);
        }
    }

    private void g(com.tkay.expressad.foundation.d.c cVar) {
        this.x = new 8(cVar);
        g.a().b(cVar.c(), (g.a) this.x);
    }

    private void a(String str, com.tkay.expressad.foundation.d.c cVar, int i) {
        TYNativeAdvancedView tYNativeAdvancedView = this.g;
        if (tYNativeAdvancedView == null || tYNativeAdvancedView.getAdvancedNativeWebview() == null) {
            return;
        }
        NativeAdvancedJSBridgeImpl nativeAdvancedJSBridgeImpl = new NativeAdvancedJSBridgeImpl(this.g.getContext(), this.c, this.b);
        ArrayList arrayList = new ArrayList();
        arrayList.add(cVar);
        nativeAdvancedJSBridgeImpl.setCampaignList(arrayList);
        nativeAdvancedJSBridgeImpl.setAllowSkip(this.o);
        nativeAdvancedJSBridgeImpl.setCountdownS(this.p);
        this.g.setAdvancedNativeJSBridgeImpl(nativeAdvancedJSBridgeImpl);
        System.currentTimeMillis();
        TYNativeAdvancedWebview advancedNativeWebview = this.g.getAdvancedNativeWebview();
        if (advancedNativeWebview != null) {
            if (advancedNativeWebview == null || !advancedNativeWebview.isDestroyed()) {
                advancedNativeWebview.setWebViewListener(new 9(cVar, i));
                if (!advancedNativeWebview.isDestroyed()) {
                    Handler handler = this.C;
                    if (handler != null) {
                        handler.post(new 10(advancedNativeWebview, str));
                        return;
                    }
                    return;
                }
                b("webview has destory", i);
                return;
            }
            b("webview is destroyed", i);
            return;
        }
        b("webview is null", i);
    }

    final class 9 extends com.tkay.expressad.atsignalcommon.a.b {
        final com.tkay.expressad.foundation.d.c a;
        final int b;

        9(com.tkay.expressad.foundation.d.c cVar, int i) {
            this.a = cVar;
            this.b = i;
        }

        @Override
        public final void readyState(WebView webView, int i) {
            super.readyState(webView, i);
            if (i == 1) {
                a.this.g.setH5Ready(true);
                com.tkay.expressad.advanced.a.c.a(this.a.Z());
                a.b(a.this, this.a, this.b);
                return;
            }
            a.this.b("readyState 2", this.b);
        }

        @Override
        public final void onReceivedError(WebView webView, int i, String str, String str2) {
            super.onReceivedError(webView, i, str, str2);
            StringBuilder sb = new StringBuilder("onReceivedError: ");
            sb.append(i);
            sb.append("  ");
            sb.append(str);
            sb.append("  ");
            sb.append(str2);
            a.this.b(str, this.b);
        }

        @Override
        public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
            super.onReceivedSslError(webView, sslErrorHandler, sslError);
            new StringBuilder("onReceivedSslError: ").append(sslError.getPrimaryError());
            a.this.b("onReceivedSslError:" + sslError.getUrl(), this.b);
        }

        @Override
        public final void onPageFinished(WebView webView, String str) {
            super.onPageFinished(webView, str);
            if (!this.a.s()) {
                a.this.g.setH5Ready(true);
                com.tkay.expressad.advanced.a.c.a(this.a.Z());
                a.b(a.this, this.a, this.b);
            }
            NativeAdvancedJsUtils.fireOnJSBridgeConnected(webView);
        }
    }

    final class 10 implements Runnable {
        final TYNativeAdvancedWebview a;
        final String b;

        10(TYNativeAdvancedWebview tYNativeAdvancedWebview, String str) {
            this.a = tYNativeAdvancedWebview;
            this.b = str;
        }

        @Override
        public final void run() {
            this.a.loadUrl(x.c(this.b));
        }
    }

    private void b(com.tkay.expressad.foundation.d.c cVar, int i) {
        if (this.g.isH5Ready()) {
            a(cVar, i);
        }
    }

    final class 2 implements com.tkay.expressad.videocommon.d.b {
        final com.tkay.expressad.foundation.d.c a;

        2(com.tkay.expressad.foundation.d.c cVar) {
            this.a = cVar;
        }

        @Override
        public final void a(String str) {
            String unused = a.a;
            Message messageObtain = Message.obtain();
            messageObtain.obj = this.a;
            messageObtain.what = 5;
            a.this.C.sendMessage(messageObtain);
        }

        @Override
        public final void a(String str, String str2) {
            String unused = a.a;
            Message messageObtain = Message.obtain();
            messageObtain.obj = str;
            messageObtain.what = 2;
            a.this.C.sendMessage(messageObtain);
        }
    }

    private void h(com.tkay.expressad.foundation.d.c cVar) {
        this.w = new 2(cVar);
        ArrayList arrayList = new ArrayList();
        arrayList.add(cVar);
        com.tkay.expressad.videocommon.b.c.a().a(this.b, arrayList, com.tkay.expressad.foundation.g.a.aX, this.w);
        if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aX, this.b, cVar.A())) {
            com.tkay.expressad.videocommon.b.c.a().d(this.b);
        } else {
            this.g.setVideoReady(true);
            a(cVar, 2);
        }
    }

    public final String a(String str) {
        int iK;
        if (this.i == null) {
            return "";
        }
        try {
            com.tkay.expressad.videocommon.b.a aVarA = com.tkay.expressad.videocommon.b.c.a().a(this.b, this.i.aZ() + this.i.S() + this.i.B());
            if (aVarA == null || (iK = aVarA.k()) != 5) {
                return str;
            }
            String strE = aVarA.e();
            if (!new File(strE).exists()) {
                return str;
            }
            StringBuilder sb = new StringBuilder("download success locally,use local video url:");
            sb.append(strE);
            sb.append(" state:");
            sb.append(iK);
            return strE;
        } catch (Exception e) {
            e.printStackTrace();
            return str;
        }
    }

    public final void a(d dVar) {
        ArrayList arrayList;
        if (dVar == null || dVar.J == null) {
            arrayList = null;
        } else {
            arrayList = new ArrayList();
            com.tkay.expressad.foundation.d.c cVar = dVar.J.get(0);
            cVar.l(this.b);
            this.z = dVar.c();
            if (cVar.O() != 99 && (!TextUtils.isEmpty(cVar.c()) || !TextUtils.isEmpty(cVar.d()))) {
                if (t.a(cVar)) {
                    cVar.i(t.a(this.f, cVar.ba()) ? 1 : 2);
                }
                if (cVar.ae() == 1 || !t.a(this.f, cVar.ba())) {
                    arrayList.add(cVar);
                } else {
                    StringBuilder sb = new StringBuilder("onload: ");
                    sb.append(cVar.bb());
                    sb.append(" has been installed.");
                    if (t.a(cVar)) {
                        arrayList.add(cVar);
                    }
                }
            }
        }
        if (arrayList != null && arrayList.size() > 0) {
            try {
                int i = this.A + 1;
                this.A = i;
                if (this.h == null || i > this.h.t()) {
                    this.A = 0;
                }
                new StringBuilder("onload 算出 下次的offset是:").append(this.A);
            } catch (Exception e) {
                e.printStackTrace();
            }
            new StringBuilder("onload load成功 size:").append(arrayList.size());
            com.tkay.expressad.foundation.d.c cVar2 = (com.tkay.expressad.foundation.d.c) arrayList.get(0);
            if (!TextUtils.isEmpty(cVar2.c()) || (!TextUtils.isEmpty(cVar2.d()) && cVar2.d().contains("<MBTPLMARK>"))) {
                cVar2.a(true);
                cVar2.b(false);
            } else {
                cVar2.a(false);
                cVar2.b(true);
            }
            this.i = cVar2;
            if (c.a(this.g, cVar2)) {
                a(cVar2, 2);
                return;
            }
            TYNativeAdvancedView tYNativeAdvancedView = this.g;
            if (tYNativeAdvancedView != null) {
                tYNativeAdvancedView.clearResState();
            }
            if (!TextUtils.isEmpty(cVar2.c())) {
                new StringBuilder("start download zip: ").append(cVar2.c());
                this.x = new 8(cVar2);
                g.a().b(cVar2.c(), (g.a) this.x);
            }
            if (!TextUtils.isEmpty(cVar2.d())) {
                new StringBuilder("start download HTML: ").append(cVar2.d());
                com.tkay.core.common.l.b.a.a().a(new 7(cVar2));
            }
            if (!TextUtils.isEmpty(cVar2.S())) {
                new StringBuilder("start download Video: ").append(cVar2.S());
                this.w = new 2(cVar2);
                ArrayList arrayList2 = new ArrayList();
                arrayList2.add(cVar2);
                com.tkay.expressad.videocommon.b.c.a().a(this.b, arrayList2, com.tkay.expressad.foundation.g.a.aX, this.w);
                if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aX, this.b, cVar2.A())) {
                    com.tkay.expressad.videocommon.b.c.a().d(this.b);
                } else {
                    this.g.setVideoReady(true);
                    a(cVar2, 2);
                }
            }
            if (!TextUtils.isEmpty(cVar2.be())) {
                new StringBuilder("start download image: ").append(cVar2.be());
                com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar2.be(), new 6(cVar2));
            }
            if (!TextUtils.isEmpty(cVar2.I())) {
                new StringBuilder("start download EndCard: ").append(cVar2.I());
                this.y = new 5(cVar2);
                g.a().b(cVar2.I(), (g.a) this.y);
            }
            if (TextUtils.isEmpty(cVar2.y())) {
                return;
            }
            new StringBuilder("start download gitUrl: ").append(cVar2.y());
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar2.y(), new 4(cVar2));
            return;
        }
        b("invalid  campaign", 2);
    }

    private List<com.tkay.expressad.foundation.d.c> b(d dVar) {
        if (dVar == null || dVar.J == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        com.tkay.expressad.foundation.d.c cVar = dVar.J.get(0);
        cVar.l(this.b);
        this.z = dVar.c();
        if (cVar.O() == 99) {
            return arrayList;
        }
        if (TextUtils.isEmpty(cVar.c()) && TextUtils.isEmpty(cVar.d())) {
            return arrayList;
        }
        if (t.a(cVar)) {
            cVar.i(t.a(this.f, cVar.ba()) ? 1 : 2);
        }
        if (cVar.ae() == 1 || !t.a(this.f, cVar.ba())) {
            arrayList.add(cVar);
            return arrayList;
        }
        StringBuilder sb = new StringBuilder("onload: ");
        sb.append(cVar.bb());
        sb.append(" has been installed.");
        if (!t.a(cVar)) {
            return arrayList;
        }
        arrayList.add(cVar);
        return arrayList;
    }

    private void c(String str, int i) {
        b(str, i);
    }

    static void a(a aVar, String str, com.tkay.expressad.foundation.d.c cVar, int i) {
        TYNativeAdvancedView tYNativeAdvancedView = aVar.g;
        if (tYNativeAdvancedView == null || tYNativeAdvancedView.getAdvancedNativeWebview() == null) {
            return;
        }
        NativeAdvancedJSBridgeImpl nativeAdvancedJSBridgeImpl = new NativeAdvancedJSBridgeImpl(aVar.g.getContext(), aVar.c, aVar.b);
        ArrayList arrayList = new ArrayList();
        arrayList.add(cVar);
        nativeAdvancedJSBridgeImpl.setCampaignList(arrayList);
        nativeAdvancedJSBridgeImpl.setAllowSkip(aVar.o);
        nativeAdvancedJSBridgeImpl.setCountdownS(aVar.p);
        aVar.g.setAdvancedNativeJSBridgeImpl(nativeAdvancedJSBridgeImpl);
        System.currentTimeMillis();
        TYNativeAdvancedWebview advancedNativeWebview = aVar.g.getAdvancedNativeWebview();
        if (advancedNativeWebview != null) {
            if (advancedNativeWebview == null || !advancedNativeWebview.isDestroyed()) {
                advancedNativeWebview.setWebViewListener(aVar.new 9(cVar, i));
                if (!advancedNativeWebview.isDestroyed()) {
                    Handler handler = aVar.C;
                    if (handler != null) {
                        handler.post(aVar.new 10(advancedNativeWebview, str));
                        return;
                    }
                    return;
                }
                aVar.b("webview has destory", i);
                return;
            }
            aVar.b("webview is destroyed", i);
            return;
        }
        aVar.b("webview is null", i);
    }

    static void b(a aVar, com.tkay.expressad.foundation.d.c cVar, int i) {
        if (aVar.g.isH5Ready()) {
            aVar.a(cVar, i);
        }
    }
}
