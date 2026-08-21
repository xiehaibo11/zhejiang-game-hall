package com.mbridge.msdk.click;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.URLUtil;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.click.g;
import com.mbridge.msdk.click.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.z;
import java.util.concurrent.Semaphore;

/* JADX INFO: compiled from: WebViewSpiderLoader.java */
/* JADX INFO: loaded from: classes2.dex */
public final class j extends d implements a.b {
    private e c;
    private CommonJumpLoader.JumpLoaderResult d;
    private boolean f;
    private Context g;
    private com.mbridge.msdk.foundation.same.e.b h;
    private g.a i;
    private boolean k;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f3165a = false;
    private long b = 0;
    private boolean e = true;
    private Handler j = new Handler(Looper.getMainLooper());

    public j(Context context, boolean z) {
        this.g = context;
        this.k = z;
        if (z) {
            this.h = new com.mbridge.msdk.foundation.same.e.b(context, 2);
        } else {
            this.h = new com.mbridge.msdk.foundation.same.e.b(context);
        }
    }

    public final void a(String str, e eVar, boolean z, String str2, String str3, String str4, com.mbridge.msdk.rover.d dVar, CampaignEx campaignEx, boolean z2, boolean z3, int i) {
        this.c = eVar;
        this.f = z;
        this.h.a(new a(this.g, str, str2, str3, str4, dVar, campaignEx, z2, z3, i), this);
    }

    @Override // com.mbridge.msdk.click.d
    public final void a() {
        this.e = false;
    }

    /* JADX INFO: compiled from: WebViewSpiderLoader.java */
    private class a extends com.mbridge.msdk.foundation.same.e.a {
        private final Context c;
        private String d;
        private String e;
        private String f;
        private String g;
        private com.mbridge.msdk.rover.d h;
        private CampaignEx i;
        private boolean j;
        private boolean k;
        private int l;
        private final Semaphore b = new Semaphore(0);
        private i.a m = new i.a() { // from class: com.mbridge.msdk.click.j.a.1
            @Override // com.mbridge.msdk.click.i.a
            public final boolean a(String str) {
                boolean zA = a.this.a(str);
                a.a(a.this, false, true, str, "");
                if (zA) {
                    a();
                }
                return zA;
            }

            @Override // com.mbridge.msdk.click.i.a
            public final boolean b(String str) {
                boolean zA = a.this.a(str);
                a.a(a.this, false, true, str, "");
                if (zA) {
                    a.a(a.this, true, true, str, "");
                    a();
                }
                return zA;
            }

            @Override // com.mbridge.msdk.click.i.a
            public final boolean c(String str) {
                a.a(a.this, false, false, str, "");
                return false;
            }

            @Override // com.mbridge.msdk.click.i.a
            public final void a(String str, boolean z, String str2) {
                a.this.a(str);
                j.this.d.setContent(str2);
                a.a(a.this, true, false, str, "timeout");
                a();
            }

            private void a() {
                synchronized (j.this) {
                    j.this.d.setSuccess(true);
                    a.a(a.this);
                }
            }

            @Override // com.mbridge.msdk.click.i.a
            public final void a(int i, String str, String str2, String str3) {
                if (!TextUtils.isEmpty(str2)) {
                    j.this.d.setExceptionMsg(str2);
                }
                if (!TextUtils.isEmpty(str3)) {
                    j.this.d.setContent(str3);
                }
                a.this.a(str);
                a.a(a.this, true, false, str, str2);
                a();
            }
        };

        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void cancelTask() {
        }

        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void pauseTask(boolean z) {
        }

        public a(Context context, String str, String str2, String str3, String str4, com.mbridge.msdk.rover.d dVar, CampaignEx campaignEx, boolean z, boolean z2, int i) {
            this.c = context;
            this.d = str;
            this.e = str2;
            this.f = str3;
            this.g = str4;
            this.h = dVar;
            this.i = campaignEx;
            this.j = z;
            this.k = z2;
            this.l = i;
        }

        /* JADX WARN: Code restructure failed: missing block: B:65:0x01c1, code lost:
        
            r3.setjumpDone(r15);
            r3.setUrl(r1);
         */
        /* JADX WARN: Removed duplicated region for block: B:103:0x0269 A[EDGE_INSN: B:103:0x0269->B:94:0x0269 BREAK  A[LOOP:0: B:20:0x005c->B:80:0x0214], SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:22:0x0060  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        private com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult a(java.lang.String r20, boolean r21, boolean r22, com.mbridge.msdk.foundation.entity.CampaignEx r23, int r24) {
            /*
                Method dump skipped, instruction units count: 618
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.click.j.a.a(java.lang.String, boolean, boolean, com.mbridge.msdk.foundation.entity.CampaignEx, int):com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult");
        }

        /* JADX INFO: Access modifiers changed from: private */
        public boolean a(String str) {
            CampaignEx campaignEx = this.i;
            if (campaignEx != null) {
                campaignEx.getLinkType();
            }
            if (ad.a.a(str)) {
                j.this.d.setCode(1);
                j.this.d.setUrl(str);
                j.this.d.setjumpDone(true);
                return true;
            }
            if (c(str)) {
                j.this.d.setCode(3);
                j.this.d.setUrl(str);
                j.this.d.setjumpDone(true);
                return true;
            }
            j.this.d.setCode(2);
            j.this.d.setUrl(str);
            return false;
        }

        private boolean b(String str) {
            return !URLUtil.isNetworkUrl(str);
        }

        private boolean c(String str) {
            return !TextUtils.isEmpty(str) && str.toLowerCase().contains("apk");
        }

        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void runTask() {
            if (j.this.c != null) {
                j.this.c.a(null);
            }
            j.this.d = new CommonJumpLoader.JumpLoaderResult();
            j.this.d.setUrl(this.d);
            j.this.d = a(this.d, this.j, this.k, this.i, this.l);
            if (!TextUtils.isEmpty(j.this.d.getExceptionMsg())) {
                j.this.d.setSuccess(true);
            }
            if (j.this.e && j.this.d.isSuccess()) {
                if (j.this.i != null) {
                    j.this.d.setStatusCode(j.this.i.f);
                }
                if (!c(j.this.d.getUrl()) && !ad.a.a(j.this.d.getUrl()) && 200 == j.this.i.f && !TextUtils.isEmpty(j.this.d.getContent()) && !j.this.d.getContent().contains(com.tkay.expressad.foundation.g.a.bU)) {
                    j.this.d.setType(2);
                    if (!TextUtils.isEmpty(j.this.d.getContent())) {
                        Log.e("302", "startWebViewHtmlParser");
                        new i(j.this.k).a(this.e, this.f, this.g, this.c, j.this.d.getUrl(), j.this.d.getContent(), this.m);
                        z.d("302", "startWebViewHtmlParser");
                    } else {
                        z.a("302", "startWebViewSpider");
                        try {
                            new i(j.this.k).a(this.e, this.f, this.g, this.c, j.this.d.getUrl(), this.m);
                        } catch (Exception unused) {
                            z.d("TAG", "webview spider start error");
                        }
                    }
                    this.b.acquireUninterruptibly();
                    return;
                }
                com.mbridge.msdk.rover.d dVar = this.h;
                if (dVar != null) {
                    dVar.a(j.this.d.getUrl(), com.mbridge.msdk.rover.a.f3955a, 0, 0, "", "");
                }
                if (j.this.i != null) {
                    j.this.d.setType(1);
                    j.this.d.setExceptionMsg(j.this.i.h);
                    j.this.d.setStatusCode(j.this.i.f);
                    j.this.d.setHeader(j.this.i.a());
                    j.this.d.setContent(j.this.i.g);
                }
                a(j.this.d.getUrl());
            }
        }

        static /* synthetic */ void a(a aVar, boolean z, boolean z2, String str, String str2) {
            int i;
            long j = j.this.b;
            if (j == 0) {
                j.this.b = System.currentTimeMillis();
                i = 0;
            } else {
                long jCurrentTimeMillis = System.currentTimeMillis();
                i = (int) (jCurrentTimeMillis - j);
                j.this.b = jCurrentTimeMillis;
            }
            int i2 = i;
            if (!z) {
                com.mbridge.msdk.rover.d dVar = aVar.h;
                if (dVar != null) {
                    dVar.b(str, com.mbridge.msdk.rover.a.b, i2, 0, "", str2);
                    return;
                }
                return;
            }
            if (z2) {
                if (aVar.h == null || j.this.f3165a) {
                    return;
                }
                j.this.f3165a = true;
                aVar.h.a(str, com.mbridge.msdk.rover.a.b, i2, 0, "", str2);
                return;
            }
            if (aVar.h == null || j.this.f3165a) {
                return;
            }
            j.this.f3165a = true;
            aVar.h.c(str, com.mbridge.msdk.rover.a.b, i2, 0, "", str2);
        }

        static /* synthetic */ void a(a aVar) {
            aVar.b.release();
        }
    }

    @Override // com.mbridge.msdk.foundation.same.e.a.b
    public final void a(a.EnumC0259a enumC0259a) {
        if (enumC0259a == a.EnumC0259a.FINISH && this.e) {
            this.j.post(new Runnable() { // from class: com.mbridge.msdk.click.j.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (j.this.c != null) {
                        if (j.this.d.isSuccess()) {
                            j.this.c.b(j.this.d);
                        } else {
                            j.this.c.a(j.this.d, j.this.d.getMsg());
                        }
                    }
                }
            });
        }
    }
}
