package com.tkay.expressad.splash.c;

import android.content.Context;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.view.View;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.g.c.f;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.splash.a.b;
import com.tkay.expressad.splash.c.a;
import com.tkay.expressad.splash.c.e;
import com.tkay.expressad.splash.view.TYSplashView;
import com.tkay.expressad.videocommon.b.g;
import java.io.File;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class c {
    private static String c = "SplashLoadManager";
    private static final int l = 1;
    private static final int m = 2;
    private static final int n = 3;
    private int B;
    com.tkay.expressad.foundation.d.c b;
    private String d;
    private String e;
    private long f;
    private long g;
    private com.tkay.expressad.splash.b.c h;
    private TYSplashView j;
    private com.tkay.expressad.d.c k;
    private boolean o;
    private int p;
    private int q;
    private int r;
    private String s;
    private int t;
    private boolean u;
    private volatile boolean v;
    private com.tkay.expressad.videocommon.d.b w;
    private g.d x;
    private String y;
    private int z;
    private String A = "";
    private Handler C = new Handler(Looper.getMainLooper()) { // from class: com.tkay.expressad.splash.c.c.1
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            int i = message.what;
            if (i == 1) {
                Object obj = message.obj;
                int i2 = message.arg1;
                if (obj instanceof com.tkay.expressad.foundation.d.c) {
                    com.tkay.expressad.foundation.d.c cVar = (com.tkay.expressad.foundation.d.c) obj;
                    c.a(c.this, g.a().c(cVar.c()), cVar, i2);
                    return;
                }
                return;
            }
            if (i != 2) {
                if (i != 3) {
                    return;
                }
                Object obj2 = message.obj;
                if (obj2 instanceof com.tkay.expressad.foundation.d.c) {
                    c cVar2 = c.this;
                    cVar2.b((com.tkay.expressad.foundation.d.c) obj2, cVar2.t);
                    return;
                }
                return;
            }
            Object obj3 = message.obj;
            if (obj3 instanceof String) {
                c cVar3 = c.this;
                String string = obj3.toString();
                String unused = c.this.s;
                int unused2 = c.this.t;
                cVar3.a(string);
            }
        }
    };
    private Runnable D = new Runnable() { // from class: com.tkay.expressad.splash.c.c.2
        @Override // java.lang.Runnable
        public final void run() {
            c cVar = c.this;
            String unused = cVar.s;
            int unused2 = c.this.t;
            cVar.a("load timeout");
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    boolean f7096a = false;
    private Context i = m.a().f();

    private static void h() {
    }

    private static void i() {
    }

    private static void k() {
    }

    public c(String str, String str2, long j) {
        this.e = str;
        this.d = str2;
        this.g = j;
    }

    public final void a(int i) {
        this.B = i;
    }

    public final void a(boolean z) {
        this.f7096a = z;
    }

    public final void a(com.tkay.expressad.d.c cVar) {
        this.k = cVar;
    }

    public final void a(TYSplashView tYSplashView) {
        this.j = tYSplashView;
    }

    private boolean e() {
        return this.o;
    }

    public final void b(boolean z) {
        this.o = z;
    }

    private int f() {
        return this.p;
    }

    public final void b(int i) {
        this.p = i;
    }

    public final void a(int i, int i2) {
        this.r = i;
        this.q = i2;
    }

    public final String a() {
        return this.A;
    }

    public final void a(com.tkay.expressad.foundation.d.d dVar) {
        ArrayList arrayList;
        this.v = false;
        this.s = "";
        this.t = 2;
        if (dVar == null || dVar.J == null) {
            arrayList = null;
        } else {
            arrayList = new ArrayList();
            com.tkay.expressad.foundation.d.c cVar = dVar.J.get(0);
            cVar.l(this.d);
            this.y = dVar.c();
            if (cVar.O() != 99 && (!TextUtils.isEmpty(cVar.c()) || !TextUtils.isEmpty(cVar.d()))) {
                if (t.a(cVar)) {
                    cVar.i(t.a(this.i, cVar.ba()) ? 1 : 2);
                }
                if (cVar.ae() == 1 || !t.a(this.i, cVar.ba()) || t.a(cVar)) {
                    arrayList.add(cVar);
                }
            }
        }
        if (arrayList != null && arrayList.size() > 0) {
            g();
            new StringBuilder("onload load suc size:").append(arrayList.size());
            com.tkay.expressad.foundation.d.c cVar2 = (com.tkay.expressad.foundation.d.c) arrayList.get(0);
            if (!TextUtils.isEmpty(cVar2.c()) || (!TextUtils.isEmpty(cVar2.d()) && cVar2.d().contains("<MBTPLMARK>"))) {
                cVar2.a(true);
                cVar2.b(false);
            } else {
                cVar2.a(false);
                cVar2.b(true);
            }
            TYSplashView tYSplashView = this.j;
            if (tYSplashView != null) {
                tYSplashView.setDynamicView(false);
            }
            if (cVar2.j()) {
                d(cVar2, 2);
            }
            if (b.a(this.j, cVar2)) {
                b(cVar2, 2);
                return;
            }
            this.j.clearResState();
            if (!TextUtils.isEmpty(cVar2.c()) && !cVar2.j()) {
                this.x = new AnonymousClass5(cVar2, 2);
                g.a().b(cVar2.c(), (g.a) this.x);
            }
            if (cVar2.j()) {
                return;
            }
            if (!TextUtils.isEmpty(cVar2.d())) {
                com.tkay.core.common.l.b.a.a().a(new AnonymousClass4(cVar2, 2));
            }
            if (!TextUtils.isEmpty(cVar2.S())) {
                this.w = new AnonymousClass8(cVar2);
                ArrayList arrayList2 = new ArrayList();
                arrayList2.add(cVar2);
                com.tkay.expressad.videocommon.b.c.a().a(this.d, arrayList2, com.tkay.expressad.foundation.g.a.aV, this.w);
                if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aV, this.d, cVar2.A())) {
                    com.tkay.expressad.videocommon.b.c.a().d(this.d);
                } else {
                    this.j.setVideoReady(true);
                    b(cVar2, 2);
                }
            }
            if (TextUtils.isEmpty(cVar2.be())) {
                return;
            }
            d(cVar2, 2);
            return;
        }
        a("invalid  campaign");
    }

    private void a(long j) {
        this.C.postDelayed(this.D, j);
    }

    private void g() {
        try {
            int i = this.z + 1;
            this.z = i;
            if (this.k == null || i > this.k.t()) {
                this.z = 0;
            }
            new StringBuilder("onload,next offset is:").append(this.z);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void j() {
        this.z = 0;
    }

    public final void a(com.tkay.expressad.splash.b.c cVar) {
        this.h = cVar;
    }

    public final void b() {
        if (this.h != null) {
            this.h = null;
        }
        if (this.w != null) {
            this.w = null;
        }
        if (this.x != null) {
            this.x = null;
        }
    }

    private void a(com.tkay.expressad.foundation.d.c cVar, int i) {
        TYSplashView tYSplashView = this.j;
        if (tYSplashView != null) {
            tYSplashView.setDynamicView(false);
        }
        if (cVar.j()) {
            d(cVar, i);
        }
        if (b.a(this.j, cVar)) {
            b(cVar, i);
            return;
        }
        this.j.clearResState();
        if (!TextUtils.isEmpty(cVar.c()) && !cVar.j()) {
            this.x = new AnonymousClass5(cVar, i);
            g.a().b(cVar.c(), (g.a) this.x);
        }
        if (cVar.j()) {
            return;
        }
        if (!TextUtils.isEmpty(cVar.d())) {
            com.tkay.core.common.l.b.a.a().a(new AnonymousClass4(cVar, i));
        }
        if (!TextUtils.isEmpty(cVar.S())) {
            this.w = new AnonymousClass8(cVar);
            ArrayList arrayList = new ArrayList();
            arrayList.add(cVar);
            com.tkay.expressad.videocommon.b.c.a().a(this.d, arrayList, com.tkay.expressad.foundation.g.a.aV, this.w);
            if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aV, this.d, cVar.A())) {
                com.tkay.expressad.videocommon.b.c.a().d(this.d);
            } else {
                this.j.setVideoReady(true);
                b(cVar, i);
            }
        }
        if (TextUtils.isEmpty(cVar.be())) {
            return;
        }
        d(cVar, i);
    }

    public final com.tkay.expressad.foundation.d.c c() {
        return this.b;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(com.tkay.expressad.foundation.d.c cVar, int i) {
        if (!b.a(this.j, cVar) || this.v) {
            return;
        }
        l();
        this.b = cVar;
        this.v = true;
        com.tkay.expressad.splash.b.c cVar2 = this.h;
        if (cVar2 != null) {
            cVar2.a(cVar, i);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str) {
        if (this.u) {
            this.u = false;
        } else {
            b(str);
        }
    }

    private void b(String str) {
        if (this.v) {
            return;
        }
        l();
        this.v = true;
        com.tkay.expressad.splash.b.c cVar = this.h;
        if (cVar != null) {
            cVar.a(str);
        }
    }

    private void l() {
        this.C.removeCallbacks(this.D);
    }

    private void c(com.tkay.expressad.foundation.d.c cVar, int i) {
        this.j.clearResState();
        if (!TextUtils.isEmpty(cVar.c()) && !cVar.j()) {
            this.x = new AnonymousClass5(cVar, i);
            g.a().b(cVar.c(), (g.a) this.x);
        }
        if (cVar.j()) {
            return;
        }
        if (!TextUtils.isEmpty(cVar.d())) {
            com.tkay.core.common.l.b.a.a().a(new AnonymousClass4(cVar, i));
        }
        if (!TextUtils.isEmpty(cVar.S())) {
            this.w = new AnonymousClass8(cVar);
            ArrayList arrayList = new ArrayList();
            arrayList.add(cVar);
            com.tkay.expressad.videocommon.b.c.a().a(this.d, arrayList, com.tkay.expressad.foundation.g.a.aV, this.w);
            if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aV, this.d, cVar.A())) {
                com.tkay.expressad.videocommon.b.c.a().d(this.d);
            } else {
                this.j.setVideoReady(true);
                b(cVar, i);
            }
        }
        if (TextUtils.isEmpty(cVar.be())) {
            return;
        }
        d(cVar, i);
    }

    private void d(final com.tkay.expressad.foundation.d.c cVar, final int i) {
        b.a(this.j, cVar, new com.tkay.expressad.splash.view.a() { // from class: com.tkay.expressad.splash.c.c.3
            @Override // com.tkay.expressad.splash.view.a
            public final void a() {
                if (cVar.j() && c.this.j != null) {
                    c.this.j.setImageReady(true);
                    c.b(c.this, cVar, i);
                }
                c.this.b(cVar, i);
            }

            @Override // com.tkay.expressad.splash.view.a
            public final void b() {
                if (!cVar.j() || c.this.j == null) {
                    return;
                }
                c.this.j.setImageReady(false);
                c cVar2 = c.this;
                String unused = cVar2.s;
                cVar2.a("Image resource load faile");
            }
        });
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.c.c$4, reason: invalid class name */
    final class AnonymousClass4 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.expressad.foundation.d.c f7100a;
        final /* synthetic */ int b;

        AnonymousClass4(com.tkay.expressad.foundation.d.c cVar, int i) {
            this.f7100a = cVar;
            this.b = i;
        }

        @Override // java.lang.Runnable
        public final void run() throws Throwable {
            File file;
            final File file2;
            FileOutputStream fileOutputStream = null;
            try {
                try {
                    try {
                        file2 = new File(this.f7100a.d());
                        try {
                            if (!file2.exists()) {
                                String strB = f.b(com.tkay.expressad.foundation.g.c.c.ANYTHINK_700_HTML);
                                String strA = p.a(x.a(this.f7100a.d()));
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
                                            sb.append(this.f7100a.d());
                                            fileOutputStream2.write(sb.toString().getBytes());
                                            fileOutputStream2.flush();
                                            fileOutputStream = fileOutputStream2;
                                        } catch (Exception e) {
                                            e = e;
                                            fileOutputStream = fileOutputStream2;
                                            e.printStackTrace();
                                            this.f7100a.j("");
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
                if (file2.exists() && file2.isFile() && file2.canRead()) {
                    this.f7100a.b(file2.getAbsolutePath());
                    m.a().a(new Runnable() { // from class: com.tkay.expressad.splash.c.c.4.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            c.a(c.this, "file:////" + file2.getAbsolutePath(), AnonymousClass4.this.f7100a, AnonymousClass4.this.b);
                        }
                    });
                } else {
                    c cVar = c.this;
                    String unused = c.this.s;
                    cVar.a("html file write failed");
                }
            } catch (Exception e5) {
                c cVar2 = c.this;
                String message = e5.getMessage();
                String unused2 = c.this.s;
                cVar2.a(message);
            }
        }
    }

    private void e(com.tkay.expressad.foundation.d.c cVar, int i) {
        com.tkay.core.common.l.b.a.a().a(new AnonymousClass4(cVar, i));
    }

    private void f(com.tkay.expressad.foundation.d.c cVar, int i) {
        if (cVar.j()) {
            return;
        }
        this.x = new AnonymousClass5(cVar, i);
        g.a().b(cVar.c(), (g.a) this.x);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.c.c$5, reason: invalid class name */
    final class AnonymousClass5 implements g.d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.expressad.foundation.d.c f7102a;
        final /* synthetic */ int b;

        AnonymousClass5(com.tkay.expressad.foundation.d.c cVar, int i) {
            this.f7102a = cVar;
            this.b = i;
        }

        @Override // com.tkay.expressad.videocommon.b.g.a
        public final void a(String str) {
            Message messageObtain = Message.obtain();
            messageObtain.what = 1;
            messageObtain.obj = this.f7102a;
            messageObtain.arg1 = this.b;
            c.this.C.sendMessage(messageObtain);
        }

        @Override // com.tkay.expressad.videocommon.b.g.a
        public final void a(String str, String str2) {
            c cVar = c.this;
            String unused = cVar.s;
            cVar.a(str);
            Message messageObtain = Message.obtain();
            messageObtain.what = 2;
            messageObtain.obj = str;
            c.this.C.sendMessage(messageObtain);
        }
    }

    private void g(com.tkay.expressad.foundation.d.c cVar, int i) {
        if (cVar.j()) {
            b.a aVar = new b.a();
            aVar.b(this.d).a(this.e).a(this.o).a(cVar).a(this.p).h(this.B);
            try {
                if (!TextUtils.isEmpty(cVar.c())) {
                    Uri uri = Uri.parse(cVar.c());
                    String queryParameter = uri.getQueryParameter("hdbtn");
                    String queryParameter2 = uri.getQueryParameter(com.tkay.expressad.video.dynview.a.a.L);
                    String queryParameter3 = uri.getQueryParameter("hdinfo");
                    String queryParameter4 = uri.getQueryParameter("shake_show");
                    String queryParameter5 = uri.getQueryParameter("shake_strength");
                    String queryParameter6 = uri.getQueryParameter("shake_time");
                    String queryParameter7 = uri.getQueryParameter("n_logo");
                    if (!TextUtils.isEmpty(queryParameter)) {
                        aVar.b(Integer.parseInt(queryParameter));
                    }
                    if (!TextUtils.isEmpty(queryParameter2)) {
                        aVar.c(Integer.parseInt(queryParameter2));
                    }
                    if (!TextUtils.isEmpty(queryParameter3)) {
                        aVar.d(Integer.parseInt(queryParameter3));
                    }
                    if (!TextUtils.isEmpty(queryParameter4)) {
                        aVar.e(Integer.parseInt(queryParameter4));
                    }
                    if (!TextUtils.isEmpty(queryParameter5)) {
                        aVar.f(Integer.parseInt(queryParameter5));
                    }
                    if (!TextUtils.isEmpty(queryParameter6)) {
                        aVar.g(Integer.parseInt(queryParameter6));
                    }
                    if (!TextUtils.isEmpty(queryParameter7)) {
                        aVar.i(Integer.parseInt(queryParameter7) == 0 ? 0 : 1);
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
            a unused = a.C0474a.f7093a;
            a.a(this.j, new com.tkay.expressad.splash.a.b(aVar), new AnonymousClass6(cVar, i));
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.c.c$6, reason: invalid class name */
    final class AnonymousClass6 implements com.tkay.expressad.splash.b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.expressad.foundation.d.c f7103a;
        final /* synthetic */ int b;

        AnonymousClass6(com.tkay.expressad.foundation.d.c cVar, int i) {
            this.f7103a = cVar;
            this.b = i;
        }

        @Override // com.tkay.expressad.splash.b.a
        public final void a(View view) {
            if (c.this.j != null) {
                c.this.j.setDynamicView(true);
                c.this.j.setSplashNativeView(view);
                c.this.b(this.f7103a, this.b);
            }
        }

        @Override // com.tkay.expressad.splash.b.a
        public final void a(String str) {
            c cVar = c.this;
            String unused = cVar.s;
            cVar.a(str);
        }
    }

    private void a(String str, com.tkay.expressad.foundation.d.c cVar, int i) {
        e.c cVar2 = new e.c();
        cVar2.c(this.d);
        cVar2.b(this.e);
        cVar2.a(cVar);
        cVar2.a(str);
        cVar2.b(this.o);
        cVar2.a(this.p);
        cVar2.a(this.f7096a);
        e.a.f7116a.a(this.j, cVar2, new AnonymousClass7(cVar, i));
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.c.c$7, reason: invalid class name */
    final class AnonymousClass7 implements e.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.expressad.foundation.d.c f7104a;
        final /* synthetic */ int b;

        AnonymousClass7(com.tkay.expressad.foundation.d.c cVar, int i) {
            this.f7104a = cVar;
            this.b = i;
        }

        @Override // com.tkay.expressad.splash.c.e.b
        public final void a() {
            if (this.f7104a.s()) {
                return;
            }
            c.c(c.this, this.f7104a, this.b);
        }

        @Override // com.tkay.expressad.splash.c.e.b
        public final void a(String str) {
            c.this.a(str);
        }

        @Override // com.tkay.expressad.splash.c.e.b
        public final void a(int i) {
            if (i == 1) {
                c.c(c.this, this.f7104a, this.b);
            } else {
                c.this.a("readyState 2");
            }
        }
    }

    private void c(String str) {
        a(str);
    }

    private void h(com.tkay.expressad.foundation.d.c cVar, int i) {
        if (this.j.isH5Ready()) {
            return;
        }
        this.j.setH5Ready(true);
        b(cVar, i);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.c.c$8, reason: invalid class name */
    final class AnonymousClass8 implements com.tkay.expressad.videocommon.d.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.expressad.foundation.d.c f7105a;

        AnonymousClass8(com.tkay.expressad.foundation.d.c cVar) {
            this.f7105a = cVar;
        }

        @Override // com.tkay.expressad.videocommon.d.b
        public final void a(String str) {
            c.this.j.setVideoReady(true);
            String unused = c.c;
            Message messageObtain = Message.obtain();
            messageObtain.obj = this.f7105a;
            messageObtain.what = 3;
            c.this.C.sendMessage(messageObtain);
        }

        @Override // com.tkay.expressad.videocommon.d.b
        public final void a(String str, String str2) {
            c.this.j.setVideoReady(false);
            String unused = c.c;
            Message messageObtain = Message.obtain();
            messageObtain.obj = str;
            messageObtain.what = 2;
            c.this.C.sendMessage(messageObtain);
        }
    }

    private void i(com.tkay.expressad.foundation.d.c cVar, int i) {
        this.w = new AnonymousClass8(cVar);
        ArrayList arrayList = new ArrayList();
        arrayList.add(cVar);
        com.tkay.expressad.videocommon.b.c.a().a(this.d, arrayList, com.tkay.expressad.foundation.g.a.aV, this.w);
        if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aV, this.d, cVar.A())) {
            com.tkay.expressad.videocommon.b.c.a().d(this.d);
        } else {
            this.j.setVideoReady(true);
            b(cVar, i);
        }
    }

    private void a(com.tkay.expressad.foundation.d.d dVar, int i) {
        ArrayList arrayList;
        if (dVar == null || dVar.J == null) {
            arrayList = null;
        } else {
            arrayList = new ArrayList();
            com.tkay.expressad.foundation.d.c cVar = dVar.J.get(0);
            cVar.l(this.d);
            this.y = dVar.c();
            if (cVar.O() != 99 && (!TextUtils.isEmpty(cVar.c()) || !TextUtils.isEmpty(cVar.d()))) {
                if (t.a(cVar)) {
                    cVar.i(t.a(this.i, cVar.ba()) ? 1 : 2);
                }
                if (cVar.ae() == 1 || !t.a(this.i, cVar.ba()) || t.a(cVar)) {
                    arrayList.add(cVar);
                }
            }
        }
        if (arrayList != null && arrayList.size() > 0) {
            g();
            new StringBuilder("onload load suc size:").append(arrayList.size());
            com.tkay.expressad.foundation.d.c cVar2 = (com.tkay.expressad.foundation.d.c) arrayList.get(0);
            if (!TextUtils.isEmpty(cVar2.c()) || (!TextUtils.isEmpty(cVar2.d()) && cVar2.d().contains("<MBTPLMARK>"))) {
                cVar2.a(true);
                cVar2.b(false);
            } else {
                cVar2.a(false);
                cVar2.b(true);
            }
            TYSplashView tYSplashView = this.j;
            if (tYSplashView != null) {
                tYSplashView.setDynamicView(false);
            }
            if (cVar2.j()) {
                d(cVar2, i);
            }
            if (b.a(this.j, cVar2)) {
                b(cVar2, i);
                return;
            }
            this.j.clearResState();
            if (!TextUtils.isEmpty(cVar2.c()) && !cVar2.j()) {
                this.x = new AnonymousClass5(cVar2, i);
                g.a().b(cVar2.c(), (g.a) this.x);
            }
            if (cVar2.j()) {
                return;
            }
            if (!TextUtils.isEmpty(cVar2.d())) {
                com.tkay.core.common.l.b.a.a().a(new AnonymousClass4(cVar2, i));
            }
            if (!TextUtils.isEmpty(cVar2.S())) {
                this.w = new AnonymousClass8(cVar2);
                ArrayList arrayList2 = new ArrayList();
                arrayList2.add(cVar2);
                com.tkay.expressad.videocommon.b.c.a().a(this.d, arrayList2, com.tkay.expressad.foundation.g.a.aV, this.w);
                if (!com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aV, this.d, cVar2.A())) {
                    com.tkay.expressad.videocommon.b.c.a().d(this.d);
                } else {
                    this.j.setVideoReady(true);
                    b(cVar2, i);
                }
            }
            if (TextUtils.isEmpty(cVar2.be())) {
                return;
            }
            d(cVar2, i);
            return;
        }
        a("invalid  campaign");
    }

    private List<com.tkay.expressad.foundation.d.c> b(com.tkay.expressad.foundation.d.d dVar) {
        if (dVar == null || dVar.J == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        com.tkay.expressad.foundation.d.c cVar = dVar.J.get(0);
        cVar.l(this.d);
        this.y = dVar.c();
        if (cVar.O() == 99) {
            return arrayList;
        }
        if (TextUtils.isEmpty(cVar.c()) && TextUtils.isEmpty(cVar.d())) {
            return arrayList;
        }
        if (t.a(cVar)) {
            cVar.i(t.a(this.i, cVar.ba()) ? 1 : 2);
        }
        if (cVar.ae() == 1 || !t.a(this.i, cVar.ba())) {
            arrayList.add(cVar);
            return arrayList;
        }
        if (!t.a(cVar)) {
            return arrayList;
        }
        arrayList.add(cVar);
        return arrayList;
    }

    static /* synthetic */ void a(c cVar, String str, com.tkay.expressad.foundation.d.c cVar2, int i) {
        e.c cVar3 = new e.c();
        cVar3.c(cVar.d);
        cVar3.b(cVar.e);
        cVar3.a(cVar2);
        cVar3.a(str);
        cVar3.b(cVar.o);
        cVar3.a(cVar.p);
        cVar3.a(cVar.f7096a);
        e.a.f7116a.a(cVar.j, cVar3, cVar.new AnonymousClass7(cVar2, i));
    }

    static /* synthetic */ void b(c cVar, com.tkay.expressad.foundation.d.c cVar2, int i) {
        if (cVar2.j()) {
            b.a aVar = new b.a();
            aVar.b(cVar.d).a(cVar.e).a(cVar.o).a(cVar2).a(cVar.p).h(cVar.B);
            try {
                if (!TextUtils.isEmpty(cVar2.c())) {
                    Uri uri = Uri.parse(cVar2.c());
                    String queryParameter = uri.getQueryParameter("hdbtn");
                    String queryParameter2 = uri.getQueryParameter(com.tkay.expressad.video.dynview.a.a.L);
                    String queryParameter3 = uri.getQueryParameter("hdinfo");
                    String queryParameter4 = uri.getQueryParameter("shake_show");
                    String queryParameter5 = uri.getQueryParameter("shake_strength");
                    String queryParameter6 = uri.getQueryParameter("shake_time");
                    String queryParameter7 = uri.getQueryParameter("n_logo");
                    if (!TextUtils.isEmpty(queryParameter)) {
                        aVar.b(Integer.parseInt(queryParameter));
                    }
                    if (!TextUtils.isEmpty(queryParameter2)) {
                        aVar.c(Integer.parseInt(queryParameter2));
                    }
                    if (!TextUtils.isEmpty(queryParameter3)) {
                        aVar.d(Integer.parseInt(queryParameter3));
                    }
                    if (!TextUtils.isEmpty(queryParameter4)) {
                        aVar.e(Integer.parseInt(queryParameter4));
                    }
                    if (!TextUtils.isEmpty(queryParameter5)) {
                        aVar.f(Integer.parseInt(queryParameter5));
                    }
                    if (!TextUtils.isEmpty(queryParameter6)) {
                        aVar.g(Integer.parseInt(queryParameter6));
                    }
                    if (!TextUtils.isEmpty(queryParameter7)) {
                        aVar.i(Integer.parseInt(queryParameter7) == 0 ? 0 : 1);
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
            a unused = a.C0474a.f7093a;
            a.a(cVar.j, new com.tkay.expressad.splash.a.b(aVar), cVar.new AnonymousClass6(cVar2, i));
        }
    }

    static /* synthetic */ void c(c cVar, com.tkay.expressad.foundation.d.c cVar2, int i) {
        if (cVar.j.isH5Ready()) {
            return;
        }
        cVar.j.setH5Ready(true);
        cVar.b(cVar2, i);
    }
}
