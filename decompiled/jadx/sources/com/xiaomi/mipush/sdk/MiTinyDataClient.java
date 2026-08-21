package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.text.TextUtils;
import com.xiaomi.push.hj;
import com.xiaomi.push.hn;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.bd;
import com.xiaomi.push.service.bz;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes4.dex */
public class MiTinyDataClient {
    public static final String PENDING_REASON_APPID = "com.xiaomi.xmpushsdk.tinydataPending.appId";
    public static final String PENDING_REASON_CHANNEL = "com.xiaomi.xmpushsdk.tinydataPending.channel";
    public static final String PENDING_REASON_INIT = "com.xiaomi.xmpushsdk.tinydataPending.init";

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static volatile a f7980a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private Context f50a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private Boolean f52a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f53a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private C0519a f51a = new C0519a();

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private final ArrayList<hn> f54a = new ArrayList<>();

        /* JADX INFO: renamed from: com.xiaomi.mipush.sdk.MiTinyDataClient$a$a, reason: collision with other inner class name */
        public class C0519a {

            /* JADX INFO: renamed from: a, reason: collision with other field name */
            private ScheduledFuture<?> f57a;

            /* JADX INFO: renamed from: a, reason: collision with other field name */
            private ScheduledThreadPoolExecutor f58a = new ScheduledThreadPoolExecutor(1);

            /* JADX INFO: renamed from: a, reason: collision with other field name */
            public final ArrayList<hn> f56a = new ArrayList<>();

            /* JADX INFO: renamed from: a, reason: collision with other field name */
            private final Runnable f55a = new ab(this);

            public C0519a() {
            }

            /* JADX INFO: Access modifiers changed from: private */
            public void a() {
                if (this.f57a == null) {
                    this.f57a = this.f58a.scheduleAtFixedRate(this.f55a, 1000L, 1000L, TimeUnit.MILLISECONDS);
                }
            }

            /* JADX INFO: Access modifiers changed from: private */
            public void b() {
                hn hnVarRemove = this.f56a.remove(0);
                for (ii iiVar : bz.a((List<hn>) Arrays.asList(hnVarRemove), a.this.f50a.getPackageName(), b.m85a(a.this.f50a).m86a(), 30720)) {
                    com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient Send item by PushServiceClient.sendMessage(XmActionNotification)." + hnVarRemove.d());
                    ao.a(a.this.f50a).a(iiVar, hj.Notification, true, (hw) null);
                }
            }

            public void a(hn hnVar) {
                this.f58a.execute(new aa(this, hnVar));
            }
        }

        public static a a() {
            if (f7980a == null) {
                synchronized (a.class) {
                    if (f7980a == null) {
                        f7980a = new a();
                    }
                }
            }
            return f7980a;
        }

        private void a(hn hnVar) {
            synchronized (this.f54a) {
                if (!this.f54a.contains(hnVar)) {
                    this.f54a.add(hnVar);
                    if (this.f54a.size() > 100) {
                        this.f54a.remove(0);
                    }
                }
            }
        }

        private boolean a(Context context) {
            if (!ao.a(context).m78a()) {
                return true;
            }
            try {
                PackageInfo packageInfo = context.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4);
                if (packageInfo == null) {
                    return false;
                }
                return packageInfo.versionCode >= 108;
            } catch (Exception unused) {
                return false;
            }
        }

        private boolean b(Context context) {
            return b.m85a(context).m86a() == null && !a(this.f50a);
        }

        private boolean b(hn hnVar) {
            if (bz.a(hnVar, false)) {
                return false;
            }
            if (!this.f52a.booleanValue()) {
                this.f51a.a(hnVar);
                return true;
            }
            com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient Send item by PushServiceClient.sendTinyData(ClientUploadDataItem)." + hnVar.d());
            ao.a(this.f50a).a(hnVar);
            return true;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public void m58a(Context context) {
            if (context == null) {
                com.xiaomi.channel.commonutils.logger.b.m43a("context is null, MiTinyDataClientImp.init() failed.");
                return;
            }
            this.f50a = context;
            this.f52a = Boolean.valueOf(a(context));
            b(MiTinyDataClient.PENDING_REASON_INIT);
        }

        public synchronized void a(String str) {
            if (TextUtils.isEmpty(str)) {
                com.xiaomi.channel.commonutils.logger.b.m43a("channel is null, MiTinyDataClientImp.setChannel(String) failed.");
            } else {
                this.f53a = str;
                b(MiTinyDataClient.PENDING_REASON_CHANNEL);
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m59a() {
            return this.f50a != null;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public synchronized boolean m60a(hn hnVar) {
            String str;
            if (hnVar == null) {
                return false;
            }
            if (bz.a(hnVar, true)) {
                return false;
            }
            boolean z = TextUtils.isEmpty(hnVar.m412a()) && TextUtils.isEmpty(this.f53a);
            boolean z2 = !m59a();
            boolean z3 = this.f50a == null || b(this.f50a);
            if (!z2 && !z && !z3) {
                com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient Send item immediately." + hnVar.d());
                if (TextUtils.isEmpty(hnVar.d())) {
                    hnVar.f(bd.a());
                }
                if (TextUtils.isEmpty(hnVar.m412a())) {
                    hnVar.a(this.f53a);
                }
                if (TextUtils.isEmpty(hnVar.c())) {
                    hnVar.e(this.f50a.getPackageName());
                }
                if (hnVar.a() <= 0) {
                    hnVar.b(System.currentTimeMillis());
                }
                return b(hnVar);
            }
            if (z) {
                str = "MiTinyDataClient Pending " + hnVar.b() + " reason is " + MiTinyDataClient.PENDING_REASON_CHANNEL;
            } else {
                if (!z2) {
                    if (z3) {
                        str = "MiTinyDataClient Pending " + hnVar.b() + " reason is " + MiTinyDataClient.PENDING_REASON_APPID;
                    }
                    a(hnVar);
                    return true;
                }
                str = "MiTinyDataClient Pending " + hnVar.b() + " reason is " + MiTinyDataClient.PENDING_REASON_INIT;
            }
            com.xiaomi.channel.commonutils.logger.b.c(str);
            a(hnVar);
            return true;
        }

        public void b(String str) {
            com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient.processPendingList(" + str + ")");
            ArrayList arrayList = new ArrayList();
            synchronized (this.f54a) {
                arrayList.addAll(this.f54a);
                this.f54a.clear();
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                m60a((hn) it.next());
            }
        }
    }

    public static void init(Context context, String str) {
        if (context == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("context is null, MiTinyDataClient.init(Context, String) failed.");
            return;
        }
        a.a().m58a(context);
        if (TextUtils.isEmpty(str)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("channel is null or empty, MiTinyDataClient.init(Context, String) failed.");
        } else {
            a.a().a(str);
        }
    }

    public static boolean upload(Context context, hn hnVar) {
        com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient.upload " + hnVar.d());
        if (!a.a().m59a()) {
            a.a().m58a(context);
        }
        return a.a().m60a(hnVar);
    }

    public static boolean upload(Context context, String str, String str2, long j, String str3) {
        hn hnVar = new hn();
        hnVar.d(str);
        hnVar.c(str2);
        hnVar.a(j);
        hnVar.b(str3);
        hnVar.a(true);
        hnVar.a("push_sdk_channel");
        return upload(context, hnVar);
    }

    public static boolean upload(String str, String str2, long j, String str3) {
        hn hnVar = new hn();
        hnVar.d(str);
        hnVar.c(str2);
        hnVar.a(j);
        hnVar.b(str3);
        return a.a().m60a(hnVar);
    }
}
