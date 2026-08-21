package com.tkay.expressad.reward.a;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.http.SslError;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import android.util.Base64;
import android.view.View;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.bt.module.TkayBTLayout;
import com.tkay.expressad.video.bt.module.TkayBTRootLayout;
import com.tkay.expressad.videocommon.a;
import com.tkay.expressad.videocommon.b.g;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7032a = "RewardCampaignsResourceManager";
    private static Map<String, a> d = null;
    private static final int f = 100;
    private static final int g = 200;
    private static final int h = 101;
    private static final int i = 201;
    private static final int j = 102;
    private static final int k = 202;
    private static final int l = 103;
    private static final int m = 203;
    private static final int n = 104;
    private static final int o = 204;
    private static final int p = 105;
    private static final int q = 205;
    private static final int r = 0;
    private static final int s = 1;
    private final h b;
    private ConcurrentHashMap<String, List<com.tkay.expressad.foundation.d.c>> c;
    private boolean e;
    private volatile List<WindVaneWebView> t;

    /* JADX INFO: renamed from: com.tkay.expressad.reward.a.c$c, reason: collision with other inner class name */
    public interface InterfaceC0468c {
        void a(String str, String str2, String str3, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList);

        void a(String str, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList);
    }

    public interface i {
        void a(String str);

        void a(String str, String str2, String str3);
    }

    public interface j {
        void a();

        void a(String str);
    }

    /* synthetic */ c(byte b2) {
        this();
    }

    private c() {
        this.t = new ArrayList(6);
        HandlerThread handlerThread = new HandlerThread("mb-reward-load-thread");
        d = new HashMap();
        handlerThread.start();
        this.b = new h(handlerThread.getLooper());
        this.c = new ConcurrentHashMap<>();
    }

    public static c a() {
        return m.f7046a;
    }

    public final synchronized void a(final Context context, boolean z, int i2, boolean z2, final int i3, final String str, final String str2, final String str3, final CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList, InterfaceC0468c interfaceC0468c, final i iVar) {
        String str4 = str2 + "_" + str3;
        d.put(str4, new a(z, z2, i2, copyOnWriteArrayList.size(), str2, str3, i3, copyOnWriteArrayList));
        this.b.a(str2, str3, interfaceC0468c);
        this.b.a(context);
        this.b.a(str4, copyOnWriteArrayList);
        this.b.post(new Runnable() { // from class: com.tkay.expressad.reward.a.c.1
            /* JADX WARN: Removed duplicated region for block: B:123:0x0177 A[EXC_TOP_SPLITTER, SYNTHETIC] */
            /* JADX WARN: Removed duplicated region for block: B:125:0x0147 A[EXC_TOP_SPLITTER, SYNTHETIC] */
            /* JADX WARN: Removed duplicated region for block: B:45:0x00eb  */
            /* JADX WARN: Removed duplicated region for block: B:73:0x019f  */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final void run() {
                /*
                    Method dump skipped, instruction units count: 632
                    To view this dump add '--comments-level debug' option
                */
                throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.reward.a.c.AnonymousClass1.run():void");
            }
        });
    }

    private void a(Context context, String str, String str2, String str3, com.tkay.expressad.foundation.d.c cVar, String str4, i iVar, List<com.tkay.expressad.foundation.d.c> list) {
        if (TextUtils.isEmpty(str4) || cVar.H()) {
            return;
        }
        if (str4.contains(".zip") && str4.contains("md5filename")) {
            boolean zIsEmpty = TextUtils.isEmpty(com.tkay.expressad.videocommon.b.g.a().c(str4));
            try {
                g gVar = new g(context, str, str2, str3, cVar, 497, this.b, iVar, list);
                gVar.a(zIsEmpty);
                com.tkay.expressad.videocommon.b.g.a().b(str4, (g.a) gVar);
                return;
            } catch (Exception e2) {
                if (com.tkay.expressad.b.f6449a) {
                    e2.getLocalizedMessage();
                    return;
                }
                return;
            }
        }
        boolean zIsEmpty2 = TextUtils.isEmpty(com.tkay.expressad.videocommon.b.h.a().b(str4));
        try {
            d dVar = new d(497, str, str2, str3, cVar, iVar, this.b, list);
            dVar.a(zIsEmpty2);
            com.tkay.expressad.videocommon.b.g.a().b(str4, dVar);
        } catch (Exception e3) {
            if (com.tkay.expressad.b.f6449a) {
                e3.getLocalizedMessage();
            }
        }
    }

    public final synchronized void a(Context context, com.tkay.expressad.foundation.d.c cVar, final String str, final String str2, final String str3, final i iVar) {
        this.b.a(context);
        if (cVar != null) {
            String strAr = cVar.ar();
            if (cVar.j()) {
                com.tkay.expressad.videocommon.b.j.a().b(strAr, true);
                Message messageObtain = Message.obtain();
                messageObtain.what = 105;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", str2);
                bundle.putString(com.tkay.expressad.b.y, str);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                bundle.putString("url", strAr);
                messageObtain.setData(bundle);
                this.b.sendMessage(messageObtain);
                iVar.a(str, str2, str3);
                return;
            }
        }
        if (cVar != null && !TextUtils.isEmpty(cVar.ar())) {
            try {
                com.tkay.expressad.videocommon.b.g.a().b(cVar.ar(), (g.a) new g.d() { // from class: com.tkay.expressad.reward.a.c.2
                    @Override // com.tkay.expressad.videocommon.b.g.a
                    public final void a(String str4) {
                        try {
                            com.tkay.expressad.videocommon.b.j.a().b(str4, true);
                            Message messageObtain2 = Message.obtain();
                            messageObtain2.what = 105;
                            Bundle bundle2 = new Bundle();
                            bundle2.putString("unit_id", str2);
                            bundle2.putString(com.tkay.expressad.b.y, str);
                            bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                            bundle2.putString("url", str4);
                            messageObtain2.setData(bundle2);
                            c.this.b.sendMessage(messageObtain2);
                            if (iVar != null) {
                                iVar.a(str, str2, str3);
                            }
                        } catch (Exception e2) {
                            com.tkay.expressad.videocommon.b.j.a().b(str4, false);
                            Message messageObtain3 = Message.obtain();
                            messageObtain3.what = 205;
                            Bundle bundle3 = new Bundle();
                            bundle3.putString("unit_id", str2);
                            bundle3.putString(com.tkay.expressad.b.y, str);
                            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                            bundle3.putString("url", str4);
                            messageObtain3.setData(bundle3);
                            c.this.b.sendMessage(messageObtain3);
                            i iVar2 = iVar;
                            if (iVar2 != null) {
                                String str5 = str2;
                                e2.getLocalizedMessage();
                                iVar2.a(str5);
                            }
                        }
                    }

                    @Override // com.tkay.expressad.videocommon.b.g.a
                    public final void a(String str4, String str5) {
                        try {
                            com.tkay.expressad.videocommon.b.j.a().b(str5, false);
                            Message messageObtain2 = Message.obtain();
                            messageObtain2.what = 205;
                            Bundle bundle2 = new Bundle();
                            bundle2.putString("unit_id", str2);
                            bundle2.putString(com.tkay.expressad.b.y, str);
                            bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                            bundle2.putString("url", str5);
                            bundle2.putString("message", str4);
                            messageObtain2.setData(bundle2);
                            c.this.b.sendMessage(messageObtain2);
                            if (iVar != null) {
                                iVar.a(str2);
                            }
                        } catch (Exception e2) {
                            com.tkay.expressad.videocommon.b.j.a().b(str5, false);
                            Message messageObtain3 = Message.obtain();
                            messageObtain3.what = 105;
                            Bundle bundle3 = new Bundle();
                            bundle3.putString("unit_id", str2);
                            bundle3.putString(com.tkay.expressad.b.y, str);
                            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                            bundle3.putString("url", str5);
                            bundle3.putString("message", e2.getMessage());
                            messageObtain3.setData(bundle3);
                            c.this.b.sendMessage(messageObtain3);
                            i iVar2 = iVar;
                            if (iVar2 != null) {
                                iVar2.a(str2);
                            }
                            if (com.tkay.expressad.b.f6449a) {
                                e2.getLocalizedMessage();
                            }
                        }
                    }
                });
            } catch (Exception e2) {
                if (com.tkay.expressad.b.f6449a) {
                    e2.getLocalizedMessage();
                }
            }
        }
    }

    private static final class e implements com.tkay.expressad.foundation.g.d.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int f7038a = 0;
        public static final int b = 1;
        private Handler c;
        private int d;
        private String e;
        private String f;
        private String g;
        private com.tkay.expressad.foundation.d.c h;

        public e(Handler handler, int i, String str, String str2, String str3, com.tkay.expressad.foundation.d.c cVar) {
            this.c = handler;
            this.d = i;
            this.f = str;
            this.e = str2;
            this.g = str3;
            this.h = cVar;
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(Bitmap bitmap, String str) {
            com.tkay.expressad.videocommon.b.j.a();
            com.tkay.expressad.videocommon.b.j.c(str);
            Message messageObtain = Message.obtain();
            messageObtain.what = this.d == 0 ? 102 : 104;
            Bundle bundle = new Bundle();
            bundle.putString("unit_id", this.e);
            bundle.putString(com.tkay.expressad.b.y, this.f);
            bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.g);
            messageObtain.setData(bundle);
            this.c.sendMessage(messageObtain);
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(String str, String str2) {
            Message messageObtain = Message.obtain();
            messageObtain.what = this.d == 0 ? 202 : 204;
            Bundle bundle = new Bundle();
            bundle.putString("unit_id", this.e);
            bundle.putString(com.tkay.expressad.b.y, this.f);
            bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.g);
            messageObtain.setData(bundle);
            this.c.sendMessage(messageObtain);
        }
    }

    private static final class f implements com.tkay.expressad.videocommon.d.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Handler f7039a;
        private final String b;
        private final String c;
        private final String d;

        public f(Handler handler, String str, String str2, String str3) {
            this.f7039a = handler;
            this.c = str;
            this.b = str2;
            this.d = str3;
        }

        @Override // com.tkay.expressad.videocommon.d.b
        public final void a(String str) {
            new StringBuilder("Video download success: ").append(this.d);
            com.tkay.expressad.videocommon.b.j.a().a(str, true);
            Message messageObtain = Message.obtain();
            messageObtain.what = 100;
            Bundle bundle = new Bundle();
            bundle.putString("unit_id", this.b);
            bundle.putString(com.tkay.expressad.b.y, this.c);
            bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.d);
            bundle.putString("url", str);
            messageObtain.setData(bundle);
            this.f7039a.sendMessage(messageObtain);
        }

        @Override // com.tkay.expressad.videocommon.d.b
        public final void a(String str, String str2) {
            StringBuilder sb = new StringBuilder("Video download fail: ");
            sb.append(str);
            sb.append(" ");
            sb.append(this.d);
            com.tkay.expressad.videocommon.b.j.a().a(str2, false);
            Message messageObtain = Message.obtain();
            messageObtain.what = 200;
            Bundle bundle = new Bundle();
            bundle.putString("unit_id", this.b);
            bundle.putString(com.tkay.expressad.b.y, this.c);
            bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.d);
            bundle.putString("url", str2);
            bundle.putString("message", str);
            messageObtain.setData(bundle);
            this.f7039a.sendMessage(messageObtain);
        }
    }

    private static final class g implements g.d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int f7040a = 497;
        public static final int b = 859;
        public static final int c = 313;
        public static final int d = 502;
        private Context f;
        private String g;
        private String h;
        private String i;
        private com.tkay.expressad.foundation.d.c j;
        private int k;
        private Handler l;
        private i m;
        private List<com.tkay.expressad.foundation.d.c> n;
        private boolean e = false;
        private long o = System.currentTimeMillis();

        public g(Context context, String str, String str2, String str3, com.tkay.expressad.foundation.d.c cVar, int i, Handler handler, i iVar, List<com.tkay.expressad.foundation.d.c> list) {
            this.f = context;
            this.h = str;
            this.g = str2;
            this.i = str3;
            this.j = cVar;
            this.k = i;
            this.l = handler;
            this.m = iVar;
            this.n = list;
        }

        public final void a(boolean z) {
            this.e = z;
        }

        @Override // com.tkay.expressad.videocommon.b.g.a
        public final void a(String str) {
            com.tkay.expressad.videocommon.b.j.a().b(str, true);
            System.currentTimeMillis();
            int i = this.k;
            if (i == 313) {
                Message messageObtain = Message.obtain();
                messageObtain.what = 101;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", this.g);
                bundle.putString(com.tkay.expressad.b.y, this.h);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.i);
                bundle.putString("url", str);
                messageObtain.setData(bundle);
                this.l.sendMessage(messageObtain);
                return;
            }
            if (i == 497) {
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 101;
                Bundle bundle2 = new Bundle();
                bundle2.putString("unit_id", this.g);
                bundle2.putString(com.tkay.expressad.b.y, this.h);
                bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.i);
                bundle2.putString("url", str);
                messageObtain2.setData(bundle2);
                this.l.sendMessage(messageObtain2);
                if (this.e) {
                }
                return;
            }
            if (i != 859) {
                return;
            }
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 103;
            Bundle bundle3 = new Bundle();
            bundle3.putString("unit_id", this.g);
            bundle3.putString(com.tkay.expressad.b.y, this.h);
            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.i);
            messageObtain3.setData(bundle3);
            this.l.sendMessage(messageObtain3);
            i iVar = this.m;
            if (iVar != null) {
                iVar.a(this.h, this.g, this.i);
            }
        }

        @Override // com.tkay.expressad.videocommon.b.g.a
        public final void a(String str, String str2) {
            com.tkay.expressad.videocommon.b.j.a().b(str2, false);
            System.currentTimeMillis();
            int i = this.k;
            if (i == 313) {
                Message messageObtain = Message.obtain();
                messageObtain.what = 101;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", this.g);
                bundle.putString(com.tkay.expressad.b.y, this.h);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.i);
                bundle.putString("url", str2);
                bundle.putString("message", str);
                messageObtain.setData(bundle);
                this.l.sendMessage(messageObtain);
                return;
            }
            if (i == 497) {
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 201;
                Bundle bundle2 = new Bundle();
                bundle2.putString("unit_id", this.g);
                bundle2.putString(com.tkay.expressad.b.y, this.h);
                bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.i);
                bundle2.putString("url", str2);
                bundle2.putString("message", str);
                messageObtain2.setData(bundle2);
                this.l.sendMessage(messageObtain2);
                if (this.e) {
                }
                return;
            }
            if (i != 859) {
                return;
            }
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 203;
            Bundle bundle3 = new Bundle();
            bundle3.putString("unit_id", this.g);
            bundle3.putString(com.tkay.expressad.b.y, this.h);
            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.i);
            bundle3.putString("url", str2);
            bundle3.putString("message", str);
            messageObtain3.setData(bundle3);
            this.l.sendMessage(messageObtain3);
            i iVar = this.m;
            if (iVar != null) {
                iVar.a(this.g);
            }
        }
    }

    private static final class d implements g.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int f7037a = 497;
        public static final int b = 313;
        public static final int c = 859;
        private int e;
        private final String f;
        private final String g;
        private final String h;
        private com.tkay.expressad.foundation.d.c i;
        private i j;
        private Handler k;
        private List<com.tkay.expressad.foundation.d.c> l;
        private boolean d = false;
        private final long m = System.currentTimeMillis();

        public d(int i, String str, String str2, String str3, com.tkay.expressad.foundation.d.c cVar, i iVar, Handler handler, List<com.tkay.expressad.foundation.d.c> list) {
            this.e = i;
            this.f = str;
            this.g = str2;
            this.h = str3;
            this.i = cVar;
            this.j = iVar;
            this.k = handler;
            this.l = list;
        }

        public final void a(boolean z) {
            this.d = z;
        }

        @Override // com.tkay.expressad.videocommon.b.g.a
        public final void a(String str) {
            com.tkay.expressad.videocommon.b.j.a().b(str, true);
            int i = this.e;
            if (i == 313) {
                Message messageObtain = Message.obtain();
                messageObtain.what = 101;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", this.g);
                bundle.putString(com.tkay.expressad.b.y, this.f);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.h);
                bundle.putString("url", str);
                messageObtain.setData(bundle);
                this.k.sendMessage(messageObtain);
                return;
            }
            if (i == 497) {
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 101;
                Bundle bundle2 = new Bundle();
                bundle2.putString("unit_id", this.g);
                bundle2.putString(com.tkay.expressad.b.y, this.f);
                bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.h);
                bundle2.putString("url", str);
                messageObtain2.setData(bundle2);
                this.k.sendMessage(messageObtain2);
                if (this.d) {
                    System.currentTimeMillis();
                    return;
                }
                return;
            }
            if (i != 859) {
                return;
            }
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 105;
            Bundle bundle3 = new Bundle();
            bundle3.putString("unit_id", this.g);
            bundle3.putString(com.tkay.expressad.b.y, this.f);
            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.h);
            messageObtain3.setData(bundle3);
            this.k.sendMessage(messageObtain3);
            i iVar = this.j;
            if (iVar != null) {
                iVar.a(this.f, this.g, this.h);
            }
        }

        @Override // com.tkay.expressad.videocommon.b.g.a
        public final void a(String str, String str2) {
            com.tkay.expressad.videocommon.b.j.a().b(str, false);
            int i = this.e;
            if (i == 313) {
                Message messageObtain = Message.obtain();
                messageObtain.what = 201;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", this.g);
                bundle.putString(com.tkay.expressad.b.y, this.f);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.h);
                bundle.putString("url", str);
                bundle.putString("message", str2);
                messageObtain.setData(bundle);
                this.k.sendMessage(messageObtain);
                return;
            }
            if (i == 497) {
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 201;
                Bundle bundle2 = new Bundle();
                bundle2.putString("unit_id", this.g);
                bundle2.putString(com.tkay.expressad.b.y, this.f);
                bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.h);
                bundle2.putString("url", str);
                bundle2.putString("message", str2);
                messageObtain2.setData(bundle2);
                this.k.sendMessage(messageObtain2);
                if (this.d) {
                    System.currentTimeMillis();
                    return;
                }
                return;
            }
            if (i != 859) {
                return;
            }
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 205;
            Bundle bundle3 = new Bundle();
            bundle3.putString("unit_id", this.g);
            bundle3.putString(com.tkay.expressad.b.y, this.f);
            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.h);
            bundle3.putString("message", str2);
            messageObtain3.setData(bundle3);
            this.k.sendMessage(messageObtain3);
            i iVar = this.j;
            if (iVar != null) {
                iVar.a(this.g);
            }
        }
    }

    private static final class h extends Handler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Context f7041a;
        private InterfaceC0468c b;
        private ConcurrentHashMap<String, InterfaceC0468c> c;
        private ConcurrentHashMap<String, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> d;

        public h(Looper looper) {
            super(looper);
            this.c = new ConcurrentHashMap<>();
            this.d = new ConcurrentHashMap<>();
        }

        public final void a(String str, String str2, InterfaceC0468c interfaceC0468c) {
            this.c.put(str + "_" + str2, interfaceC0468c);
        }

        public final void a(Context context) {
            this.f7041a = context;
        }

        public final void a(String str, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList) {
            this.d.put(str, copyOnWriteArrayList);
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            boolean zA;
            Object obj;
            int i;
            Bundle data = message.getData();
            String string = data.getString(com.tkay.expressad.b.y);
            String string2 = data.getString("unit_id");
            String string3 = data.getString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
            String str = string2 + "_" + string3;
            a aVar = (a) c.d.get(str);
            InterfaceC0468c interfaceC0468c = this.c.get(str);
            CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList = this.d.get(str);
            int i2 = message.what;
            switch (i2) {
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                    break;
                default:
                    switch (i2) {
                        case 200:
                        case 201:
                        case 203:
                        case 205:
                            if (aVar != null && interfaceC0468c != null) {
                                String string4 = data.getString("message");
                                if (string4 == null) {
                                    string4 = "";
                                }
                                StringBuilder sb = new StringBuilder("resource download failed ");
                                sb.append(c.b(message.what));
                                sb.append(" ");
                                sb.append(string4);
                                com.tkay.expressad.foundation.d.c cVar = null;
                                if (aVar.h != null && aVar.h.size() > 0) {
                                    cVar = aVar.h.get(0);
                                }
                                try {
                                    try {
                                        if (aVar.f7036a && aVar.i != null) {
                                            if (aVar.c == 1) {
                                                if (cVar != null && cVar.aB() != null && cVar.aB().size() > 0) {
                                                    int i3 = message.what;
                                                    if (i3 != 200) {
                                                        if (i3 != 201) {
                                                            if (i3 != 203) {
                                                                if (i3 == 205) {
                                                                    if (!cVar.aB().contains(3)) {
                                                                        if (aVar.h != null && aVar.h.size() > 0) {
                                                                            com.tkay.expressad.foundation.d.c cVar2 = aVar.h.get(0);
                                                                            if (cVar2.ar().equals(cVar2.I()) && cVar.aB().contains(2)) {
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else if (cVar.aB().contains(1)) {
                                                            }
                                                        } else if (cVar.aB().contains(2)) {
                                                        }
                                                    } else if (cVar.aB().contains(0)) {
                                                    }
                                                }
                                                interfaceC0468c.a(string2, aVar.h);
                                                this.c.remove(str);
                                                c.d.remove(str);
                                                this.d.remove(str);
                                            } else {
                                                String string5 = data.getString("url");
                                                int i4 = message.what;
                                                if (i4 == 200) {
                                                    if (cVar == null || cVar.aB() == null || cVar.aB().size() <= 0) {
                                                        i = 0;
                                                    } else {
                                                        i = 0;
                                                        if (cVar.aB().contains(0)) {
                                                        }
                                                    }
                                                    for (int i5 = i; i5 < aVar.i.size(); i5++) {
                                                        if (aVar.i.get(i5).S().equals(string5)) {
                                                            aVar.i.remove(i5);
                                                        }
                                                    }
                                                    c.d.remove(str);
                                                    c.d.put(str, aVar);
                                                } else if (i4 != 201) {
                                                    if (i4 != 203) {
                                                        if (i4 == 205) {
                                                            if (cVar == null || cVar.aB() == null || cVar.aB().size() <= 0 || !cVar.aB().contains(3)) {
                                                                aVar.i.clear();
                                                                c.d.remove(str);
                                                                c.d.put(str, aVar);
                                                            }
                                                        }
                                                    } else if (cVar == null || cVar.aB() == null || cVar.aB().size() <= 0 || !cVar.aB().contains(1)) {
                                                        for (int i6 = 0; i6 < aVar.i.size(); i6++) {
                                                            com.tkay.expressad.foundation.d.c cVar3 = aVar.i.get(i6);
                                                            if (cVar3.M() != null && cVar3.M().e().equals(string5)) {
                                                                aVar.i.remove(i6);
                                                            }
                                                        }
                                                        c.d.remove(str);
                                                        c.d.put(str, aVar);
                                                    }
                                                } else if (cVar == null || cVar.aB() == null || cVar.aB().size() <= 0 || !cVar.aB().contains(2)) {
                                                    for (int i7 = 0; i7 < aVar.i.size(); i7++) {
                                                        com.tkay.expressad.foundation.d.c cVar4 = aVar.i.get(i7);
                                                        if (cVar4.M() != null && cVar4.M().d().equals(string5)) {
                                                            aVar.i.remove(i7);
                                                        }
                                                        if (!TextUtils.isEmpty(cVar4.I()) && cVar4.I().equals(string5)) {
                                                            aVar.i.remove(i7);
                                                        }
                                                    }
                                                    c.d.remove(str);
                                                    c.d.put(str, aVar);
                                                }
                                                if (com.tkay.expressad.videocommon.b.c.a().a(aVar.e, aVar.b, aVar.d, aVar.f7036a, aVar.c, copyOnWriteArrayList)) {
                                                    interfaceC0468c.a(string, string2, string3, aVar.h);
                                                    this.c.remove(str);
                                                    c.d.remove(str);
                                                    this.d.remove(str);
                                                } else if (aVar.i.size() == 0) {
                                                    interfaceC0468c.a(string2, aVar.h);
                                                    this.c.remove(str);
                                                    c.d.remove(str);
                                                    this.d.remove(str);
                                                }
                                            }
                                        } else {
                                            obj = "resource download failed ";
                                            try {
                                                if (com.tkay.expressad.videocommon.b.c.a().a(aVar.e, aVar.b, aVar.d, aVar.f7036a, aVar.c, copyOnWriteArrayList)) {
                                                    interfaceC0468c.a(string, string2, string3, aVar.h);
                                                } else {
                                                    if (cVar != null && cVar.aB() != null && cVar.aB().size() > 0) {
                                                        int i8 = message.what;
                                                        if (i8 != 200) {
                                                            if (i8 != 201) {
                                                                if (i8 == 203) {
                                                                    if (cVar.aB().contains(1)) {
                                                                    }
                                                                } else if (i8 == 205 && cVar.aB().contains(3)) {
                                                                }
                                                            } else if (cVar.aB().contains(2)) {
                                                            }
                                                        } else if (cVar.aB().contains(0)) {
                                                        }
                                                    }
                                                    interfaceC0468c.a(string2, aVar.h);
                                                }
                                                this.c.remove(str);
                                                c.d.remove(str);
                                                this.d.remove(str);
                                            } catch (Exception e) {
                                                e = e;
                                                CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList2 = aVar.h;
                                                new StringBuilder((String) obj).append(e.getMessage());
                                                interfaceC0468c.a(string2, copyOnWriteArrayList2);
                                                return;
                                            }
                                        }
                                    } catch (Exception e2) {
                                        e = e2;
                                        obj = data;
                                    }
                                } catch (Exception e3) {
                                    e = e3;
                                    obj = "resource download failed ";
                                }
                                break;
                            }
                            break;
                    }
                    return;
            }
            if (aVar == null || interfaceC0468c == null) {
                return;
            }
            try {
                zA = com.tkay.expressad.videocommon.b.c.a().a(aVar.e, aVar.b, aVar.d, aVar.f7036a, aVar.c, copyOnWriteArrayList);
            } catch (Exception e4) {
                if (com.tkay.expressad.b.f6449a) {
                    e4.getLocalizedMessage();
                }
                zA = false;
            }
            if (zA) {
                interfaceC0468c.a(string, string2, string3, aVar.h);
                this.c.remove(str);
                c.d.remove(str);
                this.d.remove(str);
            }
        }
    }

    public final synchronized void a(boolean z, Handler handler, boolean z2, boolean z3, WindVaneWebView windVaneWebView, String str, int i2, com.tkay.expressad.foundation.d.c cVar, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList, String str2, String str3, String str4, String str5, com.tkay.expressad.videocommon.e.d dVar, j jVar) {
        WindVaneWebView windVaneWebView2;
        com.tkay.expressad.video.signal.a.j jVar2;
        StringBuilder sb = new StringBuilder();
        sb.append(str4);
        sb.append("_");
        sb.append(str);
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            if (t.e(str)) {
                jVar.a();
                return;
            }
            a.C0482a c0482a = new a.C0482a();
            WindVaneWebView windVaneWebViewD = m.f7046a.d();
            if (windVaneWebViewD == null) {
                try {
                    windVaneWebView2 = new WindVaneWebView(com.tkay.core.common.b.m.a().f());
                } catch (Exception unused) {
                    c0482a.a(true);
                    com.tkay.expressad.videocommon.b.j.a().c(str4 + "_" + str5 + "_" + str, true);
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(str4);
                    sb2.append("_");
                    sb2.append(str);
                    jVar.a();
                    return;
                } catch (Throwable unused2) {
                    c0482a.a(true);
                    com.tkay.expressad.videocommon.b.j.a().c(str4 + "_" + str5 + "_" + str, true);
                    StringBuilder sb3 = new StringBuilder();
                    sb3.append(str4);
                    sb3.append("_");
                    sb3.append(str);
                    jVar.a();
                    return;
                }
            } else {
                windVaneWebView2 = windVaneWebViewD;
            }
            c0482a.a(windVaneWebView2);
            if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
                jVar2 = new com.tkay.expressad.video.signal.a.j(null, cVar, copyOnWriteArrayList);
            } else {
                jVar2 = new com.tkay.expressad.video.signal.a.j(null, cVar);
            }
            com.tkay.expressad.video.signal.a.j jVar3 = jVar2;
            jVar3.a(i2);
            jVar3.a(str4);
            jVar3.a(dVar);
            jVar3.b(z);
            WindVaneWebView windVaneWebView3 = windVaneWebView2;
            windVaneWebView3.setWebViewListener(new k(handler, null, z2, z3, str5, jVar, windVaneWebView, str, str3, str4, c0482a, cVar, copyOnWriteArrayList, jCurrentTimeMillis));
            windVaneWebView3.setObject(jVar3);
            windVaneWebView3.loadUrl(str2);
            windVaneWebView3.setRid(str5);
        } catch (Exception e2) {
            if (com.tkay.expressad.b.f6449a) {
                e2.getLocalizedMessage();
            }
            jVar.a(e2.getLocalizedMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static synchronized String b(int i2) {
        return i2 != 200 ? i2 != 201 ? i2 != 203 ? i2 != 205 ? EnvironmentCompat.MEDIA_UNKNOWN : "tpl" : "temp" : "zip/html" : "video";
    }

    private static class k extends com.tkay.expressad.atsignalcommon.a.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Handler f7042a;
        private Runnable b;
        private final boolean c;
        private final boolean e;
        private String f;
        private final j g;
        private final WindVaneWebView h;
        private final String i;
        private final String j;
        private final String k;
        private final a.C0482a l;
        private final com.tkay.expressad.foundation.d.c m;
        private CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> n;
        private long o;
        private boolean p;
        private boolean q;
        private final Runnable r;
        private final Runnable s;

        public k(Handler handler, Runnable runnable, boolean z, boolean z2, final String str, final j jVar, WindVaneWebView windVaneWebView, final String str2, final String str3, final String str4, final a.C0482a c0482a, com.tkay.expressad.foundation.d.c cVar, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList, long j) {
            this.f7042a = handler;
            this.b = runnable;
            this.c = z;
            this.e = z2;
            this.f = str;
            this.g = jVar;
            this.h = windVaneWebView;
            this.i = str2;
            this.j = str4;
            this.k = str3;
            this.l = c0482a;
            this.m = cVar;
            this.n = copyOnWriteArrayList;
            this.o = j;
            this.s = new Runnable() { // from class: com.tkay.expressad.reward.a.c.k.1
                @Override // java.lang.Runnable
                public final void run() {
                    WindVaneWebView windVaneWebViewA;
                    a.C0482a c0482a2;
                    if (jVar != null && (c0482a2 = c0482a) != null) {
                        c0482a2.a(true);
                        com.tkay.expressad.videocommon.b.j.a().c(str4 + "_" + str + "_" + str2, true);
                        j jVar2 = jVar;
                        StringBuilder sb = new StringBuilder();
                        sb.append(str4);
                        sb.append("_");
                        sb.append(str2);
                        jVar2.a();
                    }
                    a.C0482a c0482a3 = c0482a;
                    if (c0482a3 == null || (windVaneWebViewA = c0482a3.a()) == null) {
                        return;
                    }
                    try {
                        windVaneWebViewA.release();
                    } catch (Exception unused) {
                    }
                }
            };
            this.r = new Runnable() { // from class: com.tkay.expressad.reward.a.c.k.2
                @Override // java.lang.Runnable
                public final void run() {
                    WindVaneWebView windVaneWebViewA;
                    a.C0482a c0482a2;
                    if (jVar != null && (c0482a2 = c0482a) != null) {
                        c0482a2.a(true);
                        com.tkay.expressad.videocommon.b.j.a().c(str4 + "_" + str + "_" + str2, true);
                        j jVar2 = jVar;
                        StringBuilder sb = new StringBuilder();
                        sb.append(str4);
                        sb.append("_");
                        sb.append(str2);
                        jVar2.a();
                    }
                    a.C0482a c0482a3 = c0482a;
                    if (c0482a3 == null || (windVaneWebViewA = c0482a3.a()) == null) {
                        return;
                    }
                    try {
                        windVaneWebViewA.release();
                    } catch (Exception unused) {
                    }
                }
            };
            if (handler != null) {
                handler.postDelayed(this.s, 5000L);
            }
        }

        @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
        public final void readyState(WebView webView, int i) {
            Handler handler;
            Runnable runnable;
            Runnable runnable2;
            super.readyState(webView, i);
            Handler handler2 = this.f7042a;
            if (handler2 != null && (runnable2 = this.r) != null) {
                handler2.removeCallbacks(runnable2);
            }
            Handler handler3 = this.f7042a;
            if (handler3 != null && (runnable = this.s) != null) {
                handler3.removeCallbacks(runnable);
            }
            if (this.q) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.append(this.j);
            sb.append("_");
            sb.append(this.i);
            if (i == 1) {
                Runnable runnable3 = this.b;
                if (runnable3 != null && (handler = this.f7042a) != null) {
                    handler.removeCallbacks(runnable3);
                }
                com.tkay.expressad.videocommon.b.j.a().c(this.j + "_" + this.f + "_" + this.i, true);
                a.C0482a c0482a = this.l;
                if (c0482a != null) {
                    c0482a.a(true);
                }
                if (this.c) {
                    if (this.e) {
                        com.tkay.expressad.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.m.aa(), this.l);
                    } else {
                        com.tkay.expressad.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.m.aa(), this.l);
                    }
                } else if (this.e) {
                    com.tkay.expressad.videocommon.a.a(94, this.m.aa(), this.l);
                } else {
                    com.tkay.expressad.videocommon.a.b(94, this.m.aa(), this.l);
                }
                j jVar = this.g;
                if (jVar != null) {
                    jVar.a();
                }
            } else {
                j jVar2 = this.g;
                if (jVar2 != null) {
                    jVar2.a("state ".concat(String.valueOf(i)));
                }
            }
            this.q = true;
        }

        @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
        public final void onReceivedError(WebView webView, int i, String str, String str2) {
            super.onReceivedError(webView, i, str, str2);
            com.tkay.expressad.videocommon.b.j.a().c(this.j + "_" + this.f + "_" + this.i, false);
            Handler handler = this.f7042a;
            if (handler != null) {
                if (this.r != null) {
                    handler.removeCallbacks(this.s);
                }
                Runnable runnable = this.r;
                if (runnable != null) {
                    this.f7042a.removeCallbacks(runnable);
                }
            }
            try {
                StringBuilder sb = new StringBuilder();
                sb.append(this.j);
                sb.append("_");
                sb.append(this.i);
                if (this.l != null) {
                    this.l.a(false);
                }
                if (this.g != null) {
                    this.g.a(str);
                }
            } catch (Exception e) {
                if (com.tkay.expressad.b.f6449a) {
                    e.getLocalizedMessage();
                }
            }
        }

        @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
        public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
            super.onReceivedSslError(webView, sslErrorHandler, sslError);
            String string = "";
            new StringBuilder("TempalteWindVaneWebviewClient preLoadTemplate onReceivedSslError: ").append(sslError == null ? "" : Integer.valueOf(sslError.getPrimaryError()));
            com.tkay.expressad.videocommon.b.j.a().c(this.j + "_" + this.f + "_" + this.i, false);
            Handler handler = this.f7042a;
            if (handler != null) {
                if (this.r != null) {
                    handler.removeCallbacks(this.s);
                }
                Runnable runnable = this.r;
                if (runnable != null) {
                    this.f7042a.removeCallbacks(runnable);
                }
            }
            try {
                StringBuilder sb = new StringBuilder();
                sb.append(this.j);
                sb.append("_");
                sb.append(this.i);
                if (this.l != null) {
                    this.l.a(false);
                }
                if (this.g != null) {
                    j jVar = this.g;
                    if (sslError != null) {
                        string = Integer.toString(sslError.getPrimaryError());
                    }
                    jVar.a(string);
                }
            } catch (Exception e) {
                if (com.tkay.expressad.b.f6449a) {
                    e.getLocalizedMessage();
                }
            }
        }

        @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
        public final void onPageFinished(WebView webView, String str) {
            Runnable runnable;
            Handler handler;
            Runnable runnable2;
            super.onPageFinished(webView, str);
            Handler handler2 = this.f7042a;
            if (handler2 != null && (runnable2 = this.s) != null) {
                handler2.removeCallbacks(runnable2);
            }
            if (this.p) {
                return;
            }
            if (!str.contains("wfr=1")) {
                StringBuilder sb = new StringBuilder();
                sb.append(this.j);
                sb.append("_");
                sb.append(this.i);
                com.tkay.expressad.videocommon.b.j.a().c(this.j + "_" + this.f + "_" + this.i, true);
                Runnable runnable3 = this.b;
                if (runnable3 != null && (handler = this.f7042a) != null) {
                    handler.removeCallbacks(runnable3);
                }
                a.C0482a c0482a = this.l;
                if (c0482a != null) {
                    c0482a.a(true);
                }
                if (this.c) {
                    if (this.m.A()) {
                        com.tkay.expressad.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.m.aa(), this.l);
                    } else {
                        com.tkay.expressad.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.m.aa(), this.l);
                    }
                } else if (this.m.A()) {
                    com.tkay.expressad.videocommon.a.a(94, this.m.aa(), this.l);
                } else {
                    com.tkay.expressad.videocommon.a.b(94, this.m.aa(), this.l);
                }
                j jVar = this.g;
                if (jVar != null) {
                    jVar.a();
                }
            } else {
                Handler handler3 = this.f7042a;
                if (handler3 != null && (runnable = this.r) != null) {
                    handler3.postDelayed(runnable, 5000L);
                }
            }
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.b(webView);
            this.p = true;
        }
    }

    public final synchronized void a(boolean z, Handler handler, boolean z2, boolean z3, String str, String str2, String str3, String str4, int i2, com.tkay.expressad.foundation.d.c cVar, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList, String str5, String str6, com.tkay.expressad.videocommon.e.d dVar, j jVar) {
        com.tkay.expressad.video.signal.a.j jVar2;
        this.e = false;
        long jCurrentTimeMillis = System.currentTimeMillis();
        StringBuilder sb = new StringBuilder();
        sb.append(str3);
        sb.append("_");
        sb.append(str4);
        this.e = false;
        if (t.e(str4)) {
            jVar.a();
            return;
        }
        try {
            a.C0482a c0482a = new a.C0482a();
            WindVaneWebView windVaneWebViewD = m.f7046a.d();
            if (windVaneWebViewD == null) {
                windVaneWebViewD = new WindVaneWebView(com.tkay.core.common.b.m.a().f());
            }
            WindVaneWebView windVaneWebView = windVaneWebViewD;
            c0482a.a(windVaneWebView);
            com.tkay.expressad.video.bt.a.c.a();
            String strB = com.tkay.expressad.video.bt.a.c.b();
            com.tkay.expressad.video.bt.a.c.a();
            String strB2 = com.tkay.expressad.video.bt.a.c.b();
            c0482a.a(strB2);
            if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
                List<com.tkay.expressad.foundation.d.c> listA = com.tkay.expressad.videocommon.b.c.a().a(str3);
                if (listA != null && listA.size() > 0) {
                    for (int i3 = 0; i3 < copyOnWriteArrayList.size(); i3++) {
                        com.tkay.expressad.foundation.d.c cVar2 = copyOnWriteArrayList.get(i3);
                        for (com.tkay.expressad.foundation.d.c cVar3 : listA) {
                            List<com.tkay.expressad.foundation.d.c> list = listA;
                            if (cVar3.aZ().equals(cVar2.aZ()) && cVar3.Z().equals(cVar2.Z())) {
                                cVar2.au();
                                copyOnWriteArrayList.set(i3, cVar2);
                            }
                            listA = list;
                        }
                    }
                }
                jVar2 = new com.tkay.expressad.video.signal.a.j(null, cVar, copyOnWriteArrayList);
            } else {
                jVar2 = new com.tkay.expressad.video.signal.a.j(null, cVar);
            }
            com.tkay.expressad.video.signal.a.j jVar3 = jVar2;
            jVar3.a(i2);
            jVar3.a(str6);
            jVar3.c(strB2);
            jVar3.d(strB);
            jVar3.p();
            jVar3.a(dVar);
            jVar3.b(z);
            windVaneWebView.setWebViewListener(new b(z, handler, null, z2, z3, i2, str4, str2, str3, str, c0482a, cVar, copyOnWriteArrayList, dVar, jVar, jCurrentTimeMillis));
            windVaneWebView.setObject(jVar3);
            windVaneWebView.loadUrl(str5);
            windVaneWebView.setRid(str);
            TkayBTRootLayout tkayBTRootLayout = new TkayBTRootLayout(com.tkay.core.common.b.m.a().f());
            tkayBTRootLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
            tkayBTRootLayout.setInstanceId(strB);
            tkayBTRootLayout.setUnitId(str3);
            TkayBTLayout tkayBTLayout = new TkayBTLayout(com.tkay.core.common.b.m.a().f());
            tkayBTLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
            tkayBTLayout.setInstanceId(strB2);
            tkayBTLayout.setUnitId(str3);
            tkayBTLayout.setWebView(windVaneWebView);
            LinkedHashMap<String, View> linkedHashMapB = com.tkay.expressad.video.bt.a.c.a().b(str3, str);
            linkedHashMapB.put(strB2, tkayBTLayout);
            linkedHashMapB.put(strB, tkayBTRootLayout);
            tkayBTRootLayout.addView(tkayBTLayout, new FrameLayout.LayoutParams(-1, -1));
        } catch (Exception e2) {
            jVar.a(e2.getMessage());
            if (com.tkay.expressad.b.f6449a) {
                e2.getLocalizedMessage();
            }
        }
    }

    private static class b extends com.tkay.expressad.atsignalcommon.a.a {
        private final Handler b;
        private final Runnable c;
        private final boolean d;
        private final boolean e;
        private int f;
        private String g;
        private String h;
        private String i;
        private String j;
        private a.C0482a k;
        private com.tkay.expressad.foundation.d.c l;
        private CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> m;
        private com.tkay.expressad.videocommon.e.d n;
        private final j o;
        private boolean q;
        private boolean r;
        private boolean t;
        private long u;
        private int s = 0;
        private boolean p = false;

        public b(boolean z, Handler handler, Runnable runnable, boolean z2, boolean z3, int i, String str, String str2, String str3, String str4, a.C0482a c0482a, com.tkay.expressad.foundation.d.c cVar, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList, com.tkay.expressad.videocommon.e.d dVar, j jVar, long j) {
            this.b = handler;
            this.c = runnable;
            this.d = z2;
            this.e = z3;
            this.f = i;
            this.g = str;
            this.i = str2;
            this.h = str3;
            this.j = str4;
            this.k = c0482a;
            this.l = cVar;
            this.m = copyOnWriteArrayList;
            this.n = dVar;
            this.o = jVar;
            this.t = z;
            this.u = j;
        }

        @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.e
        public final void readyState(WebView webView, int i) {
            Runnable runnable;
            if (this.r) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.append(this.h);
            sb.append("_");
            sb.append(this.g);
            StringBuilder sb2 = new StringBuilder("CampaignTPLWindVaneWebviewClient start to preload bid temp resource readyState: ");
            sb2.append(i);
            sb2.append(" isCache: ");
            sb2.append(this.p);
            if (i == 1) {
                if (this.p) {
                    com.tkay.expressad.videocommon.a.e(this.h + "_" + this.j);
                } else {
                    com.tkay.expressad.videocommon.a.d(this.h + "_" + this.j);
                }
                StringBuilder sb3 = new StringBuilder("add bid temp: ");
                sb3.append(this.h);
                sb3.append("_");
                sb3.append(this.j);
                sb3.append("_");
                sb3.append(this.g);
                com.tkay.expressad.videocommon.a.a(this.h + "_" + this.j + "_" + this.g, this.k, true, this.p);
                Handler handler = this.b;
                if (handler != null && (runnable = this.c) != null) {
                    handler.removeCallbacks(runnable);
                }
                com.tkay.expressad.videocommon.b.j.a().c(this.h + "_" + this.j + "_" + this.g, true);
                a.C0482a c0482a = this.k;
                if (c0482a != null) {
                    c0482a.a(true);
                }
                j jVar = this.o;
                if (jVar != null) {
                    jVar.a();
                }
            } else {
                com.tkay.expressad.videocommon.b.j.a().c(this.h + "_" + this.j + "_" + this.g, false);
                a.C0482a c0482a2 = this.k;
                if (c0482a2 != null) {
                    c0482a2.a(false);
                }
                j jVar2 = this.o;
                if (jVar2 != null) {
                    jVar2.a("state 2");
                }
            }
            this.r = true;
        }

        @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.c
        public final void a(String str, int i, int i2) {
            StringBuilder sb = new StringBuilder("loadAds: unitID ");
            sb.append(str);
            sb.append(" type ");
            sb.append(i);
            sb.append(" adType ");
            sb.append(i2);
        }

        @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.c
        public final String a(String str) {
            return com.tkay.expressad.videocommon.b.g.a().c(str);
        }

        /* JADX WARN: Removed duplicated region for block: B:35:0x00e8 A[Catch: all -> 0x011a, TRY_LEAVE, TryCatch #2 {all -> 0x011a, blocks: (B:16:0x0064, B:18:0x006a, B:21:0x0072, B:23:0x0080, B:24:0x0085, B:27:0x00ac, B:29:0x00b0, B:30:0x00b4, B:32:0x00c2, B:34:0x00d2, B:35:0x00e8, B:36:0x00ed, B:39:0x0112, B:41:0x0116), top: B:56:0x0064, inners: #0, #3 }] */
        @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.c
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final void a(java.lang.Object r18, java.lang.String r19) {
            /*
                Method dump skipped, instruction units count: 300
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.reward.a.c.b.a(java.lang.Object, java.lang.String):void");
        }

        @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.e
        public final void onPageFinished(WebView webView, String str) {
            Runnable runnable;
            super.onPageFinished(webView, str);
            if (this.q) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.append(this.h);
            sb.append("_");
            sb.append(this.g);
            if (!str.contains("wfr=1")) {
                com.tkay.expressad.videocommon.b.j.a().c(this.h + "_" + this.j + "_" + this.g, true);
                Handler handler = this.b;
                if (handler != null && (runnable = this.c) != null) {
                    handler.removeCallbacks(runnable);
                }
                a.C0482a c0482a = this.k;
                if (c0482a != null) {
                    c0482a.a(true);
                }
                j jVar = this.o;
                if (jVar != null) {
                    jVar.a();
                }
            }
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.b(webView);
            this.q = true;
        }

        @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.e
        public final void onReceivedError(WebView webView, int i, String str, String str2) {
            super.onReceivedError(webView, i, str, str2);
            StringBuilder sb = new StringBuilder("onReceivedError: ");
            sb.append(i);
            sb.append("  ");
            sb.append(str);
            com.tkay.expressad.videocommon.b.j.a().c(this.h + "_" + this.j + "_" + this.g, false);
            if (this.o != null) {
                StringBuilder sb2 = new StringBuilder();
                sb2.append(this.h);
                sb2.append("_");
                sb2.append(this.g);
                a.C0482a c0482a = this.k;
                if (c0482a != null) {
                    c0482a.a(false);
                }
                this.o.a(str);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    static final class m {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final c f7046a = new c(0);

        private m() {
        }
    }

    private void a(boolean z, WindVaneWebView windVaneWebView, com.tkay.expressad.foundation.d.c cVar, List<com.tkay.expressad.foundation.d.c> list, com.tkay.expressad.videocommon.e.d dVar, String str, String str2, int i2) {
        if (windVaneWebView != null) {
            if (cVar == null || dVar == null || cVar.M() == null || TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("id", str2);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("result", 2);
                    jSONObject2.put("error", "data is null");
                    jSONObject.put("data", jSONObject2);
                    com.tkay.expressad.atsignalcommon.windvane.j.a();
                    com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) windVaneWebView, "onSubPlayTemplateViewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    return;
                } catch (Exception e2) {
                    if (com.tkay.expressad.b.f6449a) {
                        e2.getLocalizedMessage();
                        return;
                    }
                    return;
                }
            }
            if (TextUtils.isEmpty(cVar.M().e())) {
                JSONObject jSONObject3 = new JSONObject();
                try {
                    jSONObject3.put("id", str2);
                    JSONObject jSONObject4 = new JSONObject();
                    jSONObject4.put("result", 1);
                    jSONObject4.put("error", "data is null");
                    jSONObject3.put("data", jSONObject4);
                    com.tkay.expressad.atsignalcommon.windvane.j.a();
                    com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) windVaneWebView, "onSubPlayTemplateViewLoad", Base64.encodeToString(jSONObject3.toString().getBytes(), 2));
                    return;
                } catch (Exception e3) {
                    if (com.tkay.expressad.b.f6449a) {
                        e3.getLocalizedMessage();
                        return;
                    }
                    return;
                }
            }
            if (TextUtils.isEmpty(cVar.M().e()) || !cVar.M().e().contains("cmpt=1")) {
                new Handler(Looper.getMainLooper()).postDelayed(new AnonymousClass3(z, windVaneWebView, cVar, list, str, dVar, str2), i2 * 1000);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.reward.a.c$3, reason: invalid class name */
    final class AnonymousClass3 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ boolean f7035a;
        final /* synthetic */ WindVaneWebView b;
        final /* synthetic */ com.tkay.expressad.foundation.d.c c;
        final /* synthetic */ List d;
        final /* synthetic */ String e;
        final /* synthetic */ com.tkay.expressad.videocommon.e.d f;
        final /* synthetic */ String g;

        AnonymousClass3(boolean z, WindVaneWebView windVaneWebView, com.tkay.expressad.foundation.d.c cVar, List list, String str, com.tkay.expressad.videocommon.e.d dVar, String str2) {
            this.f7035a = z;
            this.b = windVaneWebView;
            this.c = cVar;
            this.d = list;
            this.e = str;
            this.f = dVar;
            this.g = str2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            c.a(this.f7035a, this.b, this.c.M().e(), this.c, this.d, com.tkay.expressad.videocommon.b.g.a().c(this.c.M().e()), this.e, this.f, this.g, c.this.e);
        }
    }

    private static void a(boolean z, WindVaneWebView windVaneWebView, String str, int i2, com.tkay.expressad.foundation.d.c cVar, List<com.tkay.expressad.foundation.d.c> list, String str2, String str3, com.tkay.expressad.videocommon.e.d dVar, String str4, boolean z2) {
        com.tkay.expressad.video.signal.a.j jVar;
        String strZ;
        try {
            a.C0482a c0482a = new a.C0482a();
            WindVaneWebView windVaneWebViewD = m.f7046a.d();
            if (windVaneWebViewD == null) {
                windVaneWebViewD = new WindVaneWebView(com.tkay.core.common.b.m.a().f());
            }
            WindVaneWebView windVaneWebView2 = windVaneWebViewD;
            c0482a.a(windVaneWebView2);
            if (list != null && list.size() > 0) {
                List<com.tkay.expressad.foundation.d.c> listA = com.tkay.expressad.videocommon.b.c.a().a(str3);
                if (listA != null && listA.size() > 0) {
                    for (int i3 = 0; i3 < list.size(); i3++) {
                        com.tkay.expressad.foundation.d.c cVar2 = list.get(i3);
                        for (com.tkay.expressad.foundation.d.c cVar3 : listA) {
                            if (cVar3.aZ().equals(cVar2.aZ()) && cVar3.Z().equals(cVar2.Z())) {
                                cVar2.au();
                                list.set(i3, cVar2);
                            }
                        }
                    }
                }
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar, list);
                strZ = list.get(0).Z();
            } else {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar);
                strZ = cVar.Z();
            }
            String str5 = strZ;
            com.tkay.expressad.video.signal.a.j jVar2 = jVar;
            jVar2.a(i2);
            jVar2.a(str3);
            jVar2.c(str4);
            jVar2.a(dVar);
            jVar2.b(z);
            windVaneWebView2.setWebViewListener(new l(str4, windVaneWebView, str, str3, c0482a, cVar, z2, str5));
            windVaneWebView2.setObject(jVar2);
            windVaneWebView2.loadUrl(str2);
            windVaneWebView2.setRid(str5);
        } catch (Exception e2) {
            if (com.tkay.expressad.b.f6449a) {
                e2.getLocalizedMessage();
            }
        }
    }

    private static class l extends com.tkay.expressad.atsignalcommon.a.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f7045a;
        private final boolean b = false;
        private final WindVaneWebView c;
        private final String e;
        private final String f;
        private final a.C0482a g;
        private final com.tkay.expressad.foundation.d.c h;
        private boolean i;
        private String j;
        private boolean k;
        private boolean l;

        public l(String str, WindVaneWebView windVaneWebView, String str2, String str3, a.C0482a c0482a, com.tkay.expressad.foundation.d.c cVar, boolean z, String str4) {
            this.c = windVaneWebView;
            this.e = str2;
            this.f = str3;
            this.g = c0482a;
            this.h = cVar;
            this.f7045a = str;
            this.i = z;
            this.j = str4;
        }

        @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
        public final void readyState(WebView webView, int i) {
            if (this.l) {
                return;
            }
            if (this.c != null) {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("id", this.f7045a);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("result", i);
                    jSONObject2.put("error", "");
                    jSONObject.put("data", jSONObject2);
                    com.tkay.expressad.atsignalcommon.windvane.j.a();
                    com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.c, "onSubPlayTemplateViewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Exception e) {
                    if (com.tkay.expressad.b.f6449a) {
                        e.getLocalizedMessage();
                    }
                }
            }
            String str = this.f + "_" + this.h.aZ() + "_" + this.h.Z() + "_" + this.e;
            if (i == 1) {
                com.tkay.expressad.videocommon.b.j.a().c(this.f + "_" + this.j + "_" + this.e, true);
                a.C0482a c0482a = this.g;
                if (c0482a != null) {
                    c0482a.a(true);
                }
                if (this.b) {
                    if (this.h.A()) {
                        com.tkay.expressad.videocommon.a.a(str, this.g, false, this.i);
                    } else {
                        com.tkay.expressad.videocommon.a.a(str, this.g, false, this.i);
                    }
                } else if (this.h.A()) {
                    com.tkay.expressad.videocommon.a.a(str, this.g, false, this.i);
                } else {
                    com.tkay.expressad.videocommon.a.a(str, this.g, false, this.i);
                }
            } else {
                com.tkay.expressad.videocommon.b.j.a().c(this.f + "_" + this.j + "_" + this.e, false);
                a.C0482a c0482a2 = this.g;
                if (c0482a2 != null) {
                    c0482a2.a(false);
                }
            }
            this.l = true;
        }

        @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
        public final void onReceivedError(WebView webView, int i, String str, String str2) {
            com.tkay.expressad.videocommon.b.j.a().c(this.f + "_" + this.j + "_" + this.e, false);
            a.C0482a c0482a = this.g;
            if (c0482a != null) {
                c0482a.a(false);
            }
            if (this.c != null) {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("id", this.f7045a);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("result", 2);
                    jSONObject2.put("error", str);
                    jSONObject.put("data", jSONObject2);
                    com.tkay.expressad.atsignalcommon.windvane.j.a();
                    com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.c, "onSubPlayTemplateViewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Exception e) {
                    if (com.tkay.expressad.b.f6449a) {
                        e.getLocalizedMessage();
                    }
                }
            }
        }

        @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
        public final void onPageFinished(WebView webView, String str) {
            if (this.k) {
                return;
            }
            if (!str.contains("wfr=1")) {
                if (this.c != null) {
                    JSONObject jSONObject = new JSONObject();
                    try {
                        jSONObject.put("id", this.f7045a);
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put("result", 1);
                        jSONObject2.put("error", "");
                        jSONObject.put("data", jSONObject2);
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.c, "componentReact", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    } catch (Exception e) {
                        if (com.tkay.expressad.b.f6449a) {
                            e.getLocalizedMessage();
                        }
                    }
                }
                com.tkay.expressad.videocommon.b.j.a().c(this.f + "_" + this.j + "_" + this.e, true);
                a.C0482a c0482a = this.g;
                if (c0482a != null) {
                    c0482a.a(true);
                }
                String str2 = this.f + "_" + this.h.aZ() + "_" + this.h.Z() + "_" + this.e;
                if (this.b) {
                    if (this.h.A()) {
                        com.tkay.expressad.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.h.aa(), this.g);
                    } else {
                        com.tkay.expressad.videocommon.a.a(str2, this.g, false, this.i);
                    }
                } else if (this.h.A()) {
                    com.tkay.expressad.videocommon.a.a(94, this.h.aa(), this.g);
                } else {
                    com.tkay.expressad.videocommon.a.a(str2, this.g, false, this.i);
                }
            }
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.b(webView);
            this.k = true;
        }
    }

    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        boolean f7036a;
        boolean b;
        int c;
        int d;
        String e;
        String f;
        int g;
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> h;
        CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> i;

        public a(boolean z, boolean z2, int i, int i2, String str, String str2, int i3, CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayList) {
            this.f7036a = z;
            this.b = z2;
            this.c = i;
            this.d = i2;
            this.e = str;
            this.f = str2;
            this.g = i3;
            this.h = copyOnWriteArrayList;
            this.i = new CopyOnWriteArrayList<>(copyOnWriteArrayList);
        }
    }

    private static String c(int i2) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i2);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    private synchronized void c() {
    }

    private synchronized WindVaneWebView d() {
        return null;
    }

    static /* synthetic */ void a(c cVar, Context context, String str, String str2, String str3, com.tkay.expressad.foundation.d.c cVar2, String str4, i iVar, List list) {
        if (TextUtils.isEmpty(str4) || cVar2.H()) {
            return;
        }
        if (str4.contains(".zip") && str4.contains("md5filename")) {
            boolean zIsEmpty = TextUtils.isEmpty(com.tkay.expressad.videocommon.b.g.a().c(str4));
            try {
                g gVar = new g(context, str, str2, str3, cVar2, 497, cVar.b, iVar, list);
                gVar.a(zIsEmpty);
                com.tkay.expressad.videocommon.b.g.a().b(str4, (g.a) gVar);
                return;
            } catch (Exception e2) {
                if (com.tkay.expressad.b.f6449a) {
                    e2.getLocalizedMessage();
                    return;
                }
                return;
            }
        }
        boolean zIsEmpty2 = TextUtils.isEmpty(com.tkay.expressad.videocommon.b.h.a().b(str4));
        try {
            d dVar = new d(497, str, str2, str3, cVar2, iVar, cVar.b, list);
            dVar.a(zIsEmpty2);
            com.tkay.expressad.videocommon.b.g.a().b(str4, dVar);
        } catch (Exception e3) {
            if (com.tkay.expressad.b.f6449a) {
                e3.getLocalizedMessage();
            }
        }
    }

    private static /* synthetic */ void a(c cVar, boolean z, WindVaneWebView windVaneWebView, com.tkay.expressad.foundation.d.c cVar2, List list, com.tkay.expressad.videocommon.e.d dVar, String str, String str2, int i2) {
        if (windVaneWebView != null) {
            if (cVar2 == null || dVar == null || cVar2.M() == null || TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("id", str2);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("result", 2);
                    jSONObject2.put("error", "data is null");
                    jSONObject.put("data", jSONObject2);
                    com.tkay.expressad.atsignalcommon.windvane.j.a();
                    com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) windVaneWebView, "onSubPlayTemplateViewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    return;
                } catch (Exception e2) {
                    if (com.tkay.expressad.b.f6449a) {
                        e2.getLocalizedMessage();
                        return;
                    }
                    return;
                }
            }
            if (TextUtils.isEmpty(cVar2.M().e())) {
                JSONObject jSONObject3 = new JSONObject();
                try {
                    jSONObject3.put("id", str2);
                    JSONObject jSONObject4 = new JSONObject();
                    jSONObject4.put("result", 1);
                    jSONObject4.put("error", "data is null");
                    jSONObject3.put("data", jSONObject4);
                    com.tkay.expressad.atsignalcommon.windvane.j.a();
                    com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) windVaneWebView, "onSubPlayTemplateViewLoad", Base64.encodeToString(jSONObject3.toString().getBytes(), 2));
                    return;
                } catch (Exception e3) {
                    if (com.tkay.expressad.b.f6449a) {
                        e3.getLocalizedMessage();
                        return;
                    }
                    return;
                }
            }
            if (TextUtils.isEmpty(cVar2.M().e()) || !cVar2.M().e().contains("cmpt=1")) {
                new Handler(Looper.getMainLooper()).postDelayed(cVar.new AnonymousClass3(z, windVaneWebView, cVar2, list, str, dVar, str2), i2 * 1000);
            }
        }
    }

    static /* synthetic */ void a(boolean z, WindVaneWebView windVaneWebView, String str, com.tkay.expressad.foundation.d.c cVar, List list, String str2, String str3, com.tkay.expressad.videocommon.e.d dVar, String str4, boolean z2) {
        com.tkay.expressad.video.signal.a.j jVar;
        String strZ;
        try {
            a.C0482a c0482a = new a.C0482a();
            WindVaneWebView windVaneWebViewD = m.f7046a.d();
            if (windVaneWebViewD == null) {
                windVaneWebViewD = new WindVaneWebView(com.tkay.core.common.b.m.a().f());
            }
            WindVaneWebView windVaneWebView2 = windVaneWebViewD;
            c0482a.a(windVaneWebView2);
            if (list != null && list.size() > 0) {
                List<com.tkay.expressad.foundation.d.c> listA = com.tkay.expressad.videocommon.b.c.a().a(str3);
                if (listA != null && listA.size() > 0) {
                    for (int i2 = 0; i2 < list.size(); i2++) {
                        com.tkay.expressad.foundation.d.c cVar2 = (com.tkay.expressad.foundation.d.c) list.get(i2);
                        for (com.tkay.expressad.foundation.d.c cVar3 : listA) {
                            if (cVar3.aZ().equals(cVar2.aZ()) && cVar3.Z().equals(cVar2.Z())) {
                                cVar2.au();
                                list.set(i2, cVar2);
                            }
                        }
                    }
                }
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar, list);
                strZ = ((com.tkay.expressad.foundation.d.c) list.get(0)).Z();
            } else {
                jVar = new com.tkay.expressad.video.signal.a.j(null, cVar);
                strZ = cVar.Z();
            }
            String str5 = strZ;
            com.tkay.expressad.video.signal.a.j jVar2 = jVar;
            jVar2.a(0);
            jVar2.a(str3);
            jVar2.c(str4);
            jVar2.a(dVar);
            jVar2.b(z);
            windVaneWebView2.setWebViewListener(new l(str4, windVaneWebView, str, str3, c0482a, cVar, z2, str5));
            windVaneWebView2.setObject(jVar2);
            windVaneWebView2.loadUrl(str2);
            windVaneWebView2.setRid(str5);
        } catch (Exception e2) {
            if (com.tkay.expressad.b.f6449a) {
                e2.getLocalizedMessage();
            }
        }
    }
}
