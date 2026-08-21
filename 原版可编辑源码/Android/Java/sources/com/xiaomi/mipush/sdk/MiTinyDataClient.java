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

public class MiTinyDataClient {
    public static final String PENDING_REASON_APPID = "com.xiaomi.xmpushsdk.tinydataPending.appId";
    public static final String PENDING_REASON_CHANNEL = "com.xiaomi.xmpushsdk.tinydataPending.channel";
    public static final String PENDING_REASON_INIT = "com.xiaomi.xmpushsdk.tinydataPending.init";

    public class a {
        private static volatile a a;
        private Context a;
        private Boolean a;
        private String a;
        private a a = new a();
        private final ArrayList<hn> a = new ArrayList<>();

        public class a {
            private ScheduledFuture<?> a;
            private ScheduledThreadPoolExecutor a = new ScheduledThreadPoolExecutor(1);
            public final ArrayList<hn> a = new ArrayList<>();
            private final Runnable a = new ab(this);

            public a() {
            }

            private void a() {
                if (this.a == null) {
                    this.a = this.a.scheduleAtFixedRate(this.a, 1000L, 1000L, TimeUnit.MILLISECONDS);
                }
            }

            private void b() {
                hn hnVarRemove = this.a.remove(0);
                for (ii iiVar : bz.a((List<hn>) Arrays.asList(hnVarRemove), a.this.a.getPackageName(), b.a(a.this.a).a(), 30720)) {
                    com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient Send item by PushServiceClient.sendMessage(XmActionNotification)." + hnVarRemove.d());
                    ao.a(a.this.a).a(iiVar, hj.i, true, (hw) null);
                }
            }

            public void a(hn hnVar) {
                this.a.execute(new aa(this, hnVar));
            }
        }

        public static a a() {
            if (a == null) {
                synchronized (a.class) {
                    if (a == null) {
                        a = new a();
                    }
                }
            }
            return a;
        }

        private void a(hn hnVar) {
            synchronized (this.a) {
                if (!this.a.contains(hnVar)) {
                    this.a.add(hnVar);
                    if (this.a.size() > 100) {
                        this.a.remove(0);
                    }
                }
            }
        }

        private boolean a(Context context) {
            if (!ao.a(context).a()) {
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
            return b.a(context).a() == null && !a(this.a);
        }

        private boolean b(hn hnVar) {
            if (bz.a(hnVar, false)) {
                return false;
            }
            if (!this.a.booleanValue()) {
                this.a.a(hnVar);
                return true;
            }
            com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient Send item by PushServiceClient.sendTinyData(ClientUploadDataItem)." + hnVar.d());
            ao.a(this.a).a(hnVar);
            return true;
        }

        public void a(Context context) {
            if (context == null) {
                com.xiaomi.channel.commonutils.logger.b.a("context is null, MiTinyDataClientImp.init() failed.");
                return;
            }
            this.a = context;
            this.a = Boolean.valueOf(a(context));
            b(MiTinyDataClient.PENDING_REASON_INIT);
        }

        public synchronized void a(String str) {
            if (TextUtils.isEmpty(str)) {
                com.xiaomi.channel.commonutils.logger.b.a("channel is null, MiTinyDataClientImp.setChannel(String) failed.");
            } else {
                this.a = str;
                b(MiTinyDataClient.PENDING_REASON_CHANNEL);
            }
        }

        public boolean a() {
            return this.a != null;
        }

        public synchronized boolean a(hn hnVar) {
            String str;
            if (hnVar == null) {
                return false;
            }
            if (bz.a(hnVar, true)) {
                return false;
            }
            boolean z = TextUtils.isEmpty(hnVar.a()) && TextUtils.isEmpty(this.a);
            boolean z2 = !a();
            boolean z3 = this.a == null || b(this.a);
            if (!z2 && !z && !z3) {
                com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient Send item immediately." + hnVar.d());
                if (TextUtils.isEmpty(hnVar.d())) {
                    hnVar.f(bd.a());
                }
                if (TextUtils.isEmpty(hnVar.a())) {
                    hnVar.a(this.a);
                }
                if (TextUtils.isEmpty(hnVar.c())) {
                    hnVar.e(this.a.getPackageName());
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
            synchronized (this.a) {
                arrayList.addAll(this.a);
                this.a.clear();
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                a((hn) it.next());
            }
        }
    }

    public static void init(Context context, String str) {
        if (context == null) {
            com.xiaomi.channel.commonutils.logger.b.a("context is null, MiTinyDataClient.init(Context, String) failed.");
            return;
        }
        a.a().a(context);
        if (TextUtils.isEmpty(str)) {
            com.xiaomi.channel.commonutils.logger.b.a("channel is null or empty, MiTinyDataClient.init(Context, String) failed.");
        } else {
            a.a().a(str);
        }
    }

    public static boolean upload(Context context, hn hnVar) {
        com.xiaomi.channel.commonutils.logger.b.c("MiTinyDataClient.upload " + hnVar.d());
        if (!a.a().a()) {
            a.a().a(context);
        }
        return a.a().a(hnVar);
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
        return a.a().a(hnVar);
    }
}
