package com.xiaomi.push.service;

import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.database.ContentObserver;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.Looper;
import android.os.Messenger;
import android.os.Parcelable;
import android.os.Process;
import android.os.SystemClock;
import android.provider.Settings;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.huawei.hms.support.api.entity.auth.AuthCode;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.xiaomi.clientreport.data.Config;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.mipush.sdk.ErrorCode;
import com.xiaomi.push.al;
import com.xiaomi.push.cv;
import com.xiaomi.push.dd;
import com.xiaomi.push.df;
import com.xiaomi.push.ed;
import com.xiaomi.push.en;
import com.xiaomi.push.eo;
import com.xiaomi.push.eu;
import com.xiaomi.push.fh;
import com.xiaomi.push.fj;
import com.xiaomi.push.fl;
import com.xiaomi.push.fs;
import com.xiaomi.push.fw;
import com.xiaomi.push.fx;
import com.xiaomi.push.fz;
import com.xiaomi.push.gb;
import com.xiaomi.push.gc;
import com.xiaomi.push.gh;
import com.xiaomi.push.gl;
import com.xiaomi.push.gm;
import com.xiaomi.push.gn;
import com.xiaomi.push.gp;
import com.xiaomi.push.hb;
import com.xiaomi.push.hd;
import com.xiaomi.push.hg;
import com.xiaomi.push.hj;
import com.xiaomi.push.hn;
import com.xiaomi.push.ho;
import com.xiaomi.push.if;
import com.xiaomi.push.ii;
import com.xiaomi.push.ij;
import com.xiaomi.push.it;
import com.xiaomi.push.iz;
import com.xiaomi.push.service.bg;
import com.xiaomi.push.service.p;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class XMPushService extends Service implements fz {
    private static boolean b;
    private ContentObserver a;
    private fs a;
    private fw a;
    private fx a;
    private a a;
    private f a;
    private k a;
    private r a;
    private t a;
    private bq a;
    private com.xiaomi.push.service.j a;
    private String a;
    private boolean a = false;
    private int a = 0;
    private int b = 0;
    private long a = 0;
    protected Class a = XMJobService.class;
    private be a = null;
    private com.xiaomi.push.service.p a = null;
    Messenger a = null;
    private Collection<ar> a = Collections.synchronizedCollection(new ArrayList());
    private ArrayList<n> a = new ArrayList<>();
    private gb a = new ci(this);

    class a extends BroadcastReceiver {
        private final Object a;

        private a() {
            this.a = new Object();
        }

        a(XMPushService xMPushService, ci ciVar) {
            this();
        }

        private void a() {
            if (Looper.myLooper() == Looper.getMainLooper()) {
                com.xiaomi.channel.commonutils.logger.b.d("[Alarm] Cannot perform lock.notifyAll in the UI thread!");
                return;
            }
            synchronized (this.a) {
                try {
                    this.a.notifyAll();
                } catch (Exception e) {
                    com.xiaomi.channel.commonutils.logger.b.a("[Alarm] notify lock. " + e);
                }
            }
        }

        private void a(long j) {
            if (Looper.myLooper() == Looper.getMainLooper()) {
                com.xiaomi.channel.commonutils.logger.b.d("[Alarm] Cannot perform lock.wait in the UI thread!");
                return;
            }
            synchronized (this.a) {
                try {
                    this.a.wait(j);
                } catch (InterruptedException e) {
                    com.xiaomi.channel.commonutils.logger.b.a("[Alarm] interrupt from waiting state. " + e);
                }
            }
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            com.xiaomi.channel.commonutils.logger.b.c("[Alarm] heartbeat alarm has been triggered.");
            if (!bk.p.equals(intent.getAction())) {
                com.xiaomi.channel.commonutils.logger.b.a("[Alarm] cancel the old ping timer");
                eu.a();
                return;
            }
            if (TextUtils.equals(context.getPackageName(), intent.getPackage())) {
                com.xiaomi.channel.commonutils.logger.b.c("[Alarm] Ping XMChannelService on timer");
                try {
                    Intent intent2 = new Intent(context, (Class<?>) XMPushService.class);
                    intent2.putExtra("time_stamp", System.currentTimeMillis());
                    intent2.setAction("com.xiaomi.push.timer");
                    ServiceClient.getInstance(context).startServiceSafely(intent2);
                    a(3000L);
                    com.xiaomi.channel.commonutils.logger.b.a("[Alarm] heartbeat alarm finish in " + (System.currentTimeMillis() - jCurrentTimeMillis));
                } catch (Throwable unused) {
                }
            }
        }
    }

    class b extends j {
        bg.b a;

        public b(bg.b bVar) {
            super(9);
            this.a = null;
            this.a = bVar;
        }

        @Override
        public String a() {
            return "bind the client. " + this.a.g;
        }

        @Override
        public void a() {
            String str;
            try {
                if (!XMPushService.this.c()) {
                    com.xiaomi.channel.commonutils.logger.b.d("trying bind while the connection is not created, quit!");
                    return;
                }
                bg.b bVarA = bg.a().a(this.a.g, this.a.b);
                if (bVarA == null) {
                    str = "ignore bind because the channel " + this.a.g + " is removed ";
                } else if (bVarA.a == bg.c.a) {
                    bVarA.a(bg.c.b, 0, 0, (String) null, (String) null);
                    XMPushService.this.a.a(bVarA);
                    fj.a(XMPushService.this, bVarA);
                    return;
                } else {
                    str = "trying duplicate bind, ingore! " + bVarA.a;
                }
                com.xiaomi.channel.commonutils.logger.b.a(str);
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d("Meet error when trying to bind. " + e);
                XMPushService.this.a(10, e);
            } catch (Throwable unused) {
            }
        }
    }

    class c extends j {
        private final bg.b a;

        public c(bg.b bVar) {
            super(12);
            this.a = bVar;
        }

        @Override
        public String a() {
            return "bind time out. chid=" + this.a.g;
        }

        @Override
        public void a() {
            this.a.a(bg.c.a, 1, 21, (String) null, (String) null);
        }

        public boolean equals(Object obj) {
            if (obj instanceof c) {
                return TextUtils.equals(((c) obj).a.g, this.a.g);
            }
            return false;
        }

        public int hashCode() {
            return this.a.g.hashCode();
        }
    }

    class d extends j {
        private fl a;

        public d(fl flVar) {
            super(8);
            this.a = null;
            this.a = flVar;
        }

        public fl a() {
            return this.a;
        }

        @Override
        public String a() {
            return "receive a message.";
        }

        @Override
        public void a() {
            if (this.a.a != null) {
                this.a.a.c = System.currentTimeMillis();
            }
            XMPushService.this.a.a(this.a);
        }
    }

    public class e extends j {
        e() {
            super(1);
        }

        @Override
        public String a() {
            return "do reconnect..";
        }

        @Override
        public void a() {
            if (XMPushService.this.a()) {
                XMPushService xMPushService = XMPushService.this;
                if (xMPushService.a(xMPushService.getApplicationContext())) {
                    XMPushService.this.f();
                    return;
                }
            }
            com.xiaomi.channel.commonutils.logger.b.a("should not connect. quit the job.");
        }
    }

    class f extends BroadcastReceiver {
        f() {
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            com.xiaomi.channel.commonutils.logger.b.a("network changed, " + com.xiaomi.push.m.a(intent));
            XMPushService.this.onStart(intent, 1);
        }
    }

    public class g extends j {
        public Exception a;
        public int b;

        g(int i, Exception exc) {
            super(2);
            this.b = i;
            this.a = exc;
        }

        @Override
        public String a() {
            return "disconnect the connection.";
        }

        @Override
        public void a() {
            XMPushService.this.a(this.b, this.a);
        }
    }

    class h extends j {
        h() {
            super(65535);
        }

        @Override
        public String a() {
            return "Init Job";
        }

        @Override
        public void a() {
            XMPushService.this.c();
        }
    }

    class i extends j {
        private Intent a;

        public i(Intent intent) {
            super(15);
            this.a = null;
            this.a = intent;
        }

        public Intent a() {
            return this.a;
        }

        @Override
        public String a() {
            return "Handle intent action = " + this.a.getAction();
        }

        @Override
        public void a() {
            XMPushService.this.d(this.a);
        }
    }

    public abstract class j extends p.b {
        public j(int i) {
            super(i);
        }

        public abstract String a();

        public abstract void a();

        @Override
        public void run() {
            if (this.a != 4 && this.a != 8) {
                com.xiaomi.channel.commonutils.logger.b.a(com.xiaomi.channel.commonutils.logger.a.a, a());
            }
            a();
        }
    }

    class k extends BroadcastReceiver {
        k() {
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            com.xiaomi.channel.commonutils.logger.b.a("[HB] hold short heartbeat, " + com.xiaomi.push.m.a(intent));
            if (intent == null || intent.getExtras() == null) {
                return;
            }
            XMPushService.this.onStart(intent, 1);
        }
    }

    class l extends j {
        public l() {
            super(5);
        }

        @Override
        public String a() {
            return "ask the job queue to quit";
        }

        @Override
        public void a() {
            XMPushService.this.a.a();
        }
    }

    class m extends j {
        private gn a;

        public m(gn gnVar) {
            super(8);
            this.a = null;
            this.a = gnVar;
        }

        @Override
        public String a() {
            return "receive a message.";
        }

        @Override
        public void a() {
            XMPushService.this.a.a(this.a);
        }
    }

    public interface n {
        void a();
    }

    class o extends j {
        boolean a;

        public o(boolean z) {
            super(4);
            this.a = z;
        }

        @Override
        public String a() {
            return "send ping..";
        }

        @Override
        public void a() {
            if (XMPushService.this.c()) {
                try {
                    if (!this.a) {
                        fj.a();
                    }
                    XMPushService.this.a.b(this.a);
                } catch (gh e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                    XMPushService.this.a(10, e);
                }
            }
        }
    }

    class p extends j {
        bg.b a;

        public p(bg.b bVar) {
            super(4);
            this.a = null;
            this.a = bVar;
        }

        @Override
        public String a() {
            return "rebind the client. " + this.a.g;
        }

        @Override
        public void a() {
            try {
                this.a.a(bg.c.a, 1, 16, (String) null, (String) null);
                XMPushService.this.a.a(this.a.g, this.a.b);
                XMPushService.this.a(XMPushService.this.new b(this.a), 300L);
            } catch (gh e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
                XMPushService.this.a(10, e);
            }
        }
    }

    class q extends j {
        q() {
            super(3);
        }

        @Override
        public String a() {
            return "reset the connection.";
        }

        @Override
        public void a() {
            XMPushService.this.a(11, (Exception) null);
            if (XMPushService.this.a()) {
                XMPushService xMPushService = XMPushService.this;
                if (xMPushService.a(xMPushService.getApplicationContext())) {
                    XMPushService.this.f();
                }
            }
        }
    }

    class r extends BroadcastReceiver {
        r() {
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            XMPushService.this.onStart(intent, 1);
        }
    }

    class s extends j {
        bg.b a;
        String a;
        int b;
        String b;

        public s(bg.b bVar, int i, String str, String str2) {
            super(9);
            this.a = null;
            this.a = bVar;
            this.b = i;
            this.a = str;
            this.b = str2;
        }

        @Override
        public String a() {
            return "unbind the channel. " + this.a.g;
        }

        @Override
        public void a() {
            if (this.a.a != bg.c.a && XMPushService.this.a != null) {
                try {
                    XMPushService.this.a.a(this.a.g, this.a.b);
                } catch (gh e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                    XMPushService.this.a(10, e);
                }
            }
            this.a.a(bg.c.a, this.b, 0, this.b, this.a);
        }
    }

    class t extends BroadcastReceiver {
        t() {
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            if (!XMPushService.this.a) {
                XMPushService.this.a = true;
            }
            com.xiaomi.channel.commonutils.logger.b.a("[HB] wifi changed, " + com.xiaomi.push.m.a(intent));
            XMPushService.this.onStart(intent, 1);
        }
    }

    private gn a(gn gnVar, String str, String str2) {
        StringBuilder sb;
        String str3;
        bg bgVarA = bg.a();
        List<String> listA = bgVarA.a(str);
        if (listA.isEmpty()) {
            sb = new StringBuilder();
            str3 = "open channel should be called first before sending a packet, pkg=";
        } else {
            gnVar.o(str);
            str = gnVar.k();
            if (TextUtils.isEmpty(str)) {
                str = listA.get(0);
                gnVar.l(str);
            }
            bg.b bVarA = bgVarA.a(str, gnVar.m());
            if (!c()) {
                sb = new StringBuilder();
                str3 = "drop a packet as the channel is not connected, chid=";
            } else {
                if (bVarA != null && bVarA.a == bg.c.c) {
                    if (TextUtils.equals(str2, bVarA.i)) {
                        return gnVar;
                    }
                    sb = new StringBuilder();
                    sb.append("invalid session. ");
                    sb.append(str2);
                    com.xiaomi.channel.commonutils.logger.b.a(sb.toString());
                    return null;
                }
                sb = new StringBuilder();
                str3 = "drop a packet as the channel is not opened, chid=";
            }
        }
        sb.append(str3);
        sb.append(str);
        com.xiaomi.channel.commonutils.logger.b.a(sb.toString());
        return null;
    }

    private bg.b a(String str, Intent intent) {
        bg.b bVarA = bg.a().a(str, intent.getStringExtra(bk.q));
        if (bVarA == null) {
            bVarA = new bg.b(this);
        }
        bVarA.g = intent.getStringExtra(bk.t);
        bVarA.b = intent.getStringExtra(bk.q);
        bVarA.c = intent.getStringExtra(bk.v);
        bVarA.a = intent.getStringExtra(bk.B);
        bVarA.e = intent.getStringExtra(bk.z);
        bVarA.f = intent.getStringExtra(bk.A);
        bVarA.a = intent.getBooleanExtra(bk.y, false);
        bVarA.h = intent.getStringExtra(bk.x);
        bVarA.i = intent.getStringExtra(bk.F);
        bVarA.d = intent.getStringExtra(bk.w);
        bVarA.a = this.a;
        bVarA.a((Messenger) intent.getParcelableExtra(bk.J));
        bVarA.a = getApplicationContext();
        bg.a().a(bVarA);
        return bVarA;
    }

    private String a() {
        String strA = com.xiaomi.push.m.a("ro.miui.region");
        return TextUtils.isEmpty(strA) ? com.xiaomi.push.m.a("ro.product.locale.region") : strA;
    }

    private void a(BroadcastReceiver broadcastReceiver) {
        if (broadcastReceiver != null) {
            try {
                unregisterReceiver(broadcastReceiver);
            } catch (IllegalArgumentException e2) {
                com.xiaomi.channel.commonutils.logger.b.a(e2);
            }
        }
    }

    private void a(Intent intent) {
        Bundle extras;
        if (intent == null || (extras = intent.getExtras()) == null) {
            return;
        }
        com.xiaomi.push.service.o.a(getApplicationContext()).a(extras.getString("digest"));
    }

    private void a(Intent intent, int i2) {
        byte[] byteArrayExtra = intent.getByteArrayExtra("mipush_payload");
        boolean booleanExtra = intent.getBooleanExtra("com.xiaomi.mipush.MESSAGE_CACHE", true);
        ii iiVar = new ii();
        try {
            it.a(iiVar, byteArrayExtra);
            com.xiaomi.push.al.a(getApplicationContext()).a((al.a) new com.xiaomi.push.service.b(iiVar, new WeakReference(this), booleanExtra), i2);
        } catch (iz unused) {
            com.xiaomi.channel.commonutils.logger.b.d("aw_ping : send help app ping  error");
        }
    }

    private void a(com.xiaomi.push.service.a aVar) {
        String str;
        String str2;
        if (aVar == null || !TextUtils.isEmpty(aVar.b()) || TextUtils.isEmpty(aVar.a())) {
            str = "no need to check country code";
        } else {
            String strA = "com.xiaomi.xmsf".equals(getPackageName()) ? a() : com.xiaomi.push.m.b();
            if (!TextUtils.isEmpty(strA)) {
                String strName = com.xiaomi.push.m.a(strA).name();
                if (TextUtils.equals(strName, aVar.a())) {
                    aVar.b(strA);
                    str2 = "update country code";
                } else {
                    str2 = "not update country code, because not equals " + strName;
                }
                com.xiaomi.channel.commonutils.logger.b.a(str2);
                return;
            }
            str = "check no country code";
        }
        com.xiaomi.channel.commonutils.logger.b.b(str);
    }

    private static void a(String str) {
        String str2;
        String str3;
        if (com.xiaomi.push.q.a.name().equals(str)) {
            cv.a("cn.app.chat.xiaomi.net", "cn.app.chat.xiaomi.net");
            cv.a("cn.app.chat.xiaomi.net", "111.13.141.211:443");
            cv.a("cn.app.chat.xiaomi.net", "39.156.81.172:443");
            cv.a("cn.app.chat.xiaomi.net", "111.202.1.250:443");
            cv.a("cn.app.chat.xiaomi.net", "123.125.102.213:443");
            str2 = "resolver.msg.xiaomi.net";
            cv.a("resolver.msg.xiaomi.net", "111.13.142.153:443");
            str3 = "111.202.1.252:443";
        } else {
            cv.a("app.chat.global.xiaomi.net", "app.chat.global.xiaomi.net");
            str2 = "resolver.msg.global.xiaomi.net";
            cv.a("resolver.msg.global.xiaomi.net", "161.117.97.14:443");
            str3 = "161.117.180.178:443";
        }
        cv.a(str2, str3);
    }

    private void a(String str, int i2) {
        Collection<bg.b> collectionA = bg.a().a(str);
        if (collectionA != null) {
            for (bg.b bVar : collectionA) {
                if (bVar != null) {
                    a(new s(bVar, i2, null, null));
                }
            }
        }
        bg.a().a(str);
    }

    private boolean a(Context context) {
        try {
            com.xiaomi.push.ar.a();
            for (int i2 = 100; i2 > 0; i2--) {
                if (com.xiaomi.push.bj.c(context)) {
                    com.xiaomi.channel.commonutils.logger.b.a("network connectivity ok.");
                    return true;
                }
                try {
                    Thread.sleep(100L);
                } catch (Exception unused) {
                }
            }
            return false;
        } catch (Exception unused2) {
            return true;
        }
    }

    private boolean a(String str, Intent intent) {
        bg.b bVarA = bg.a().a(str, intent.getStringExtra(bk.q));
        boolean z = false;
        if (bVarA != null && str != null) {
            String stringExtra = intent.getStringExtra(bk.F);
            String stringExtra2 = intent.getStringExtra(bk.x);
            if (!TextUtils.isEmpty(bVarA.i) && !TextUtils.equals(stringExtra, bVarA.i)) {
                com.xiaomi.channel.commonutils.logger.b.a("session changed. old session=" + bVarA.i + ", new session=" + stringExtra + " chid = " + str);
                z = true;
            }
            if (!stringExtra2.equals(bVarA.h)) {
                com.xiaomi.channel.commonutils.logger.b.a("security changed. chid = " + str + " sechash = " + com.xiaomi.push.bo.a(stringExtra2));
                return true;
            }
        }
        return z;
    }

    private int[] a() {
        String[] strArrSplit;
        String strA = ba.a(getApplicationContext()).a(ho.aN.a(), "");
        if (!TextUtils.isEmpty(strA) && (strArrSplit = strA.split(Constants.ACCEPT_TIME_SEPARATOR_SP)) != null && strArrSplit.length >= 2) {
            int[] iArr = new int[2];
            try {
                iArr[0] = Integer.valueOf(strArrSplit[0]).intValue();
                iArr[1] = Integer.valueOf(strArrSplit[1]).intValue();
                if (iArr[0] >= 0 && iArr[0] <= 23 && iArr[1] >= 0 && iArr[1] <= 23) {
                    if (iArr[0] != iArr[1]) {
                        return iArr;
                    }
                }
            } catch (NumberFormatException e2) {
                com.xiaomi.channel.commonutils.logger.b.d("parse falldown time range failure: " + e2);
            }
        }
        return null;
    }

    private String b() {
        String strB;
        com.xiaomi.push.ar.a();
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        Object obj = new Object();
        String strName = null;
        int i2 = 0;
        if ("com.xiaomi.xmsf".equals(getPackageName())) {
            bn bnVarA = bn.a(this);
            String strA = null;
            while (true) {
                if (!TextUtils.isEmpty(strA) && bnVarA.a() != 0) {
                    strB = a();
                    break;
                }
                if (TextUtils.isEmpty(strA)) {
                    strA = a();
                }
                try {
                    synchronized (obj) {
                        if (i2 < 30) {
                            obj.wait(1000L);
                        } else {
                            obj.wait(30000L);
                        }
                    }
                } catch (InterruptedException unused) {
                }
                i2++;
            }
        } else {
            strB = com.xiaomi.push.m.b();
        }
        if (!TextUtils.isEmpty(strB)) {
            com.xiaomi.push.service.a.a(getApplicationContext()).b(strB);
            strName = com.xiaomi.push.m.a(strB).name();
        }
        com.xiaomi.channel.commonutils.logger.b.a("wait region :" + strName + " cost = " + (SystemClock.elapsedRealtime() - jElapsedRealtime) + " , count = " + i2);
        return strName;
    }

    private void b(Intent intent) {
        long j2;
        String stringExtra = intent.getStringExtra(bk.B);
        String stringExtra2 = intent.getStringExtra(bk.F);
        Bundle bundleExtra = intent.getBundleExtra("ext_packet");
        bg bgVarA = bg.a();
        fl flVarA = null;
        if (bundleExtra != null) {
            gm gmVar = (gm) a(new gm(bundleExtra), stringExtra, stringExtra2);
            if (gmVar == null) {
                return;
            } else {
                flVarA = fl.a(gmVar, bgVarA.a(gmVar.k(), gmVar.m()).h);
            }
        } else {
            byte[] byteArrayExtra = intent.getByteArrayExtra("ext_raw_packet");
            if (byteArrayExtra != null) {
                try {
                    j2 = Long.parseLong(intent.getStringExtra(bk.q));
                } catch (NumberFormatException unused) {
                    j2 = 0;
                }
                String stringExtra3 = intent.getStringExtra(bk.r);
                String stringExtra4 = intent.getStringExtra(bk.s);
                String stringExtra5 = intent.getStringExtra("ext_chid");
                bg.b bVarA = bgVarA.a(stringExtra5, String.valueOf(j2));
                if (bVarA != null) {
                    fl flVar = new fl();
                    if ("10".equals(stringExtra5)) {
                        flVar.b(Integer.parseInt("10"));
                        flVar.a.a = intent.getBooleanExtra("screen_on", true);
                        flVar.a.b = intent.getBooleanExtra(Device.NETWORN_WIFI, true);
                        flVar.a.a = intent.getLongExtra("rx_msg", -1L);
                        flVar.a.b = intent.getLongExtra("enqueue", -1L);
                        flVar.a.b = intent.getIntExtra(com.tkay.expressad.foundation.d.l.d, -1);
                        flVar.a.c = intent.getLongExtra("run", -1L);
                    }
                    try {
                        flVar.a(Integer.parseInt(stringExtra5));
                    } catch (NumberFormatException unused2) {
                    }
                    flVar.a("SECMSG", (String) null);
                    if (TextUtils.isEmpty(stringExtra3)) {
                        stringExtra3 = "xiaomi.com";
                    }
                    flVar.a(j2, stringExtra3, stringExtra4);
                    flVar.a(intent.getStringExtra("ext_pkt_id"));
                    flVar.a(byteArrayExtra, bVarA.h);
                    com.xiaomi.channel.commonutils.logger.b.a("send a message: chid=" + stringExtra5 + ", packetId=" + intent.getStringExtra("ext_pkt_id"));
                    flVarA = flVar;
                }
            }
        }
        if (flVarA != null) {
            c(new bt(this, flVarA));
        }
    }

    private void b(boolean z) {
        this.a = SystemClock.elapsedRealtime();
        if (c()) {
            if (com.xiaomi.push.bj.b(this)) {
                c(new o(z));
                return;
            }
            c(new g(17, null));
        }
        a(true);
    }

    private void c() {
        String str;
        com.xiaomi.push.service.a aVarA = com.xiaomi.push.service.a.a(getApplicationContext());
        String strA = aVarA.a();
        com.xiaomi.channel.commonutils.logger.b.a("region of cache is " + strA);
        if (TextUtils.isEmpty(strA)) {
            strA = b();
        } else {
            a(aVarA);
        }
        if (TextUtils.isEmpty(strA)) {
            this.a = com.xiaomi.push.q.a.name();
        } else {
            this.a = strA;
            aVarA.a(strA);
            if (com.xiaomi.push.q.b.name().equals(this.a)) {
                str = "app.chat.global.xiaomi.net";
            } else if (com.xiaomi.push.q.c.name().equals(this.a)) {
                str = "fr.app.chat.global.xiaomi.net";
            } else if (com.xiaomi.push.q.d.name().equals(this.a)) {
                str = "ru.app.chat.global.xiaomi.net";
            } else if (com.xiaomi.push.q.e.name().equals(this.a)) {
                str = "idmb.app.chat.global.xiaomi.net";
            }
            fx.a(str);
        }
        if (com.xiaomi.push.q.a.name().equals(this.a)) {
            fx.a("cn.app.chat.xiaomi.net");
        }
        a(this.a);
        if (h()) {
            cs csVar = new cs(this, 11);
            a(csVar);
            u.a(new ct(this, csVar));
        }
        try {
            if (com.xiaomi.push.v.a()) {
                this.a.a(this);
            }
        } catch (Exception e2) {
            com.xiaomi.channel.commonutils.logger.b.a(e2);
        }
    }

    private void c(Intent intent) {
        String stringExtra = intent.getStringExtra(bk.B);
        String stringExtra2 = intent.getStringExtra(bk.F);
        Parcelable[] parcelableArrayExtra = intent.getParcelableArrayExtra("ext_packets");
        int length = parcelableArrayExtra.length;
        gm[] gmVarArr = new gm[length];
        intent.getBooleanExtra("ext_encrypt", true);
        for (int i2 = 0; i2 < parcelableArrayExtra.length; i2++) {
            gmVarArr[i2] = new gm((Bundle) parcelableArrayExtra[i2]);
            gmVarArr[i2] = (gm) a(gmVarArr[i2], stringExtra, stringExtra2);
            if (gmVarArr[i2] == null) {
                return;
            }
        }
        bg bgVarA = bg.a();
        fl[] flVarArr = new fl[length];
        for (int i3 = 0; i3 < length; i3++) {
            gm gmVar = gmVarArr[i3];
            flVarArr[i3] = fl.a(gmVar, bgVarA.a(gmVar.k(), gmVar.m()).h);
        }
        c(new com.xiaomi.push.service.c(this, flVarArr));
    }

    private void c(j jVar) {
        this.a.a(jVar);
    }

    private void c(boolean z) {
        try {
            if (com.xiaomi.push.v.a()) {
                if (!z) {
                    sendBroadcast(new Intent("miui.intent.action.NETWORK_BLOCKED"));
                    return;
                }
                sendBroadcast(new Intent("miui.intent.action.NETWORK_CONNECTED"));
                for (ar arVar : (ar[]) this.a.toArray(new ar[0])) {
                    arVar.a();
                }
            }
        } catch (Exception e2) {
            com.xiaomi.channel.commonutils.logger.b.a(e2);
        }
    }

    private void d() {
        NetworkInfo activeNetworkInfo;
        try {
            activeNetworkInfo = ((ConnectivityManager) getSystemService("connectivity")).getActiveNetworkInfo();
        } catch (Exception e2) {
            com.xiaomi.channel.commonutils.logger.b.a(e2);
            activeNetworkInfo = null;
        }
        com.xiaomi.push.service.o.a(getApplicationContext()).a(activeNetworkInfo);
        if (activeNetworkInfo != null) {
            StringBuilder sb = new StringBuilder();
            sb.append("network changed,");
            sb.append("[type: " + activeNetworkInfo.getTypeName() + "[" + activeNetworkInfo.getSubtypeName() + "], state: " + activeNetworkInfo.getState() + "/" + activeNetworkInfo.getDetailedState());
            com.xiaomi.channel.commonutils.logger.b.a(sb.toString());
            NetworkInfo.State state = activeNetworkInfo.getState();
            if (state == NetworkInfo.State.SUSPENDED || state == NetworkInfo.State.UNKNOWN) {
                return;
            }
        } else {
            com.xiaomi.channel.commonutils.logger.b.a("network changed, no active network");
        }
        if (fh.a() != null) {
            fh.a().a();
        }
        hb.a((Context) this);
        this.a.d();
        if (com.xiaomi.push.bj.b(this)) {
            if (c() && f()) {
                b(false);
            }
            if (!c() && !d()) {
                this.a.a(1);
                a(new e());
            }
            df.a(this).a();
        } else {
            a(new g(2, null));
        }
        e();
    }

    private void d(Intent intent) {
        String str;
        com.xiaomi.push.service.j jVar;
        boolean z;
        int i2;
        String str2;
        j pVar;
        int i3;
        String strB;
        SharedPreferences sharedPreferences;
        String str3;
        bt btVar;
        bg bgVarA = bg.a();
        boolean z2 = true;
        int i4 = 0;
        if (bk.d.equalsIgnoreCase(intent.getAction()) || bk.j.equalsIgnoreCase(intent.getAction())) {
            String stringExtra = intent.getStringExtra(bk.t);
            if (!TextUtils.isEmpty(intent.getStringExtra(bk.x))) {
                if (TextUtils.isEmpty(stringExtra)) {
                    str = "channel id is empty, do nothing!";
                    com.xiaomi.channel.commonutils.logger.b.d(str);
                    return;
                }
                boolean zA = a(stringExtra, intent);
                bg.b bVarA = a(stringExtra, intent);
                if (com.xiaomi.push.bj.c(this)) {
                    if (c()) {
                        if (bVarA.a == bg.c.a) {
                            pVar = new b(bVarA);
                        } else if (zA) {
                            pVar = new p(bVarA);
                        } else if (bVarA.a == bg.c.b) {
                            str2 = String.format("the client is binding. %1$s %2$s.", bVarA.g, bg.b.a(bVarA.b));
                        } else {
                            if (bVarA.a != bg.c.c) {
                                return;
                            }
                            jVar = this.a;
                            z = true;
                            i2 = 0;
                        }
                        c(pVar);
                        return;
                    }
                    a(true);
                    return;
                }
                jVar = this.a;
                z = false;
                i2 = 2;
                jVar.a(this, bVarA, z, i2, null);
                return;
            }
            str2 = "security is empty. ignore.";
            com.xiaomi.channel.commonutils.logger.b.a(str2);
            return;
        }
        if (bk.i.equalsIgnoreCase(intent.getAction())) {
            String stringExtra2 = intent.getStringExtra(bk.B);
            String stringExtra3 = intent.getStringExtra(bk.t);
            String stringExtra4 = intent.getStringExtra(bk.q);
            com.xiaomi.channel.commonutils.logger.b.a("Service called close channel chid = " + stringExtra3 + " res = " + bg.b.a(stringExtra4));
            if (TextUtils.isEmpty(stringExtra3)) {
                Iterator<String> it = bgVarA.a(stringExtra2).iterator();
                while (it.hasNext()) {
                    a(it.next(), 2);
                }
                return;
            } else if (TextUtils.isEmpty(stringExtra4)) {
                a(stringExtra3, 2);
                return;
            } else {
                a(stringExtra3, stringExtra4, 2, null, null);
                return;
            }
        }
        if (bk.e.equalsIgnoreCase(intent.getAction())) {
            if ("10".equals(intent.getStringExtra("ext_chid"))) {
                intent.putExtra("run", System.currentTimeMillis());
            }
            b(intent);
            return;
        }
        if (bk.g.equalsIgnoreCase(intent.getAction())) {
            c(intent);
            return;
        }
        if (bk.f.equalsIgnoreCase(intent.getAction())) {
            gn gnVarA = a(new gl(intent.getBundleExtra("ext_packet")), intent.getStringExtra(bk.B), intent.getStringExtra(bk.F));
            if (gnVarA == null) {
                return;
            } else {
                btVar = new bt(this, fl.a(gnVarA, bgVarA.a(gnVarA.k(), gnVarA.m()).h));
            }
        } else {
            if (!bk.h.equalsIgnoreCase(intent.getAction())) {
                if (!bk.k.equals(intent.getAction())) {
                    String string = null;
                    bVarA = null;
                    bg.b bVarA2 = null;
                    string = null;
                    if (bk.l.equals(intent.getAction())) {
                        String stringExtra5 = intent.getStringExtra(bk.B);
                        List<String> listA = bgVarA.a(stringExtra5);
                        if (!listA.isEmpty()) {
                            String stringExtra6 = intent.getStringExtra(bk.t);
                            String stringExtra7 = intent.getStringExtra(bk.q);
                            if (TextUtils.isEmpty(stringExtra6)) {
                                stringExtra6 = listA.get(0);
                            }
                            if (TextUtils.isEmpty(stringExtra7)) {
                                Collection<bg.b> collectionA = bgVarA.a(stringExtra6);
                                if (collectionA != null && !collectionA.isEmpty()) {
                                    bVarA2 = collectionA.iterator().next();
                                }
                            } else {
                                bVarA2 = bgVarA.a(stringExtra6, stringExtra7);
                            }
                            if (bVarA2 != null) {
                                if (intent.hasExtra(bk.z)) {
                                    bVarA2.e = intent.getStringExtra(bk.z);
                                }
                                if (intent.hasExtra(bk.A)) {
                                    bVarA2.f = intent.getStringExtra(bk.A);
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        str3 = "open channel should be called first before update info, pkg=" + stringExtra5;
                    } else {
                        if ("android.intent.action.SCREEN_ON".equals(intent.getAction()) || "android.intent.action.SCREEN_OFF".equals(intent.getAction())) {
                            if (!"android.intent.action.SCREEN_ON".equals(intent.getAction())) {
                                if ("android.intent.action.SCREEN_OFF".equals(intent.getAction()) && i() && eu.a()) {
                                    com.xiaomi.channel.commonutils.logger.b.a("enter falldown mode, stop alarm.");
                                    eu.a();
                                    return;
                                }
                                return;
                            }
                            if (i()) {
                                return;
                            }
                            com.xiaomi.channel.commonutils.logger.b.a("exit falldown mode, activate alarm.");
                            e();
                            if (c() || d()) {
                                return;
                            }
                            a(true);
                            return;
                        }
                        if ("com.xiaomi.mipush.REGISTER_APP".equals(intent.getAction())) {
                            if (bn.a(getApplicationContext()).a() && bn.a(getApplicationContext()).a() == 0) {
                                str3 = "register without being provisioned. " + intent.getStringExtra("mipush_app_package");
                            } else {
                                byte[] byteArrayExtra = intent.getByteArrayExtra("mipush_payload");
                                String stringExtra8 = intent.getStringExtra("mipush_app_package");
                                boolean booleanExtra = intent.getBooleanExtra("mipush_env_chanage", false);
                                int intExtra = intent.getIntExtra("mipush_env_type", 1);
                                v.a(this).d(stringExtra8);
                                if (!booleanExtra || "com.xiaomi.xmsf".equals(getPackageName())) {
                                    a(byteArrayExtra, stringExtra8);
                                    return;
                                }
                                pVar = new cu(this, 14, intExtra, stringExtra8, byteArrayExtra);
                            }
                        } else {
                            if ("com.xiaomi.mipush.SEND_MESSAGE".equals(intent.getAction()) || "com.xiaomi.mipush.UNREGISTER_APP".equals(intent.getAction())) {
                                String stringExtra9 = intent.getStringExtra("mipush_app_package");
                                byte[] byteArrayExtra2 = intent.getByteArrayExtra("mipush_payload");
                                boolean booleanExtra2 = intent.getBooleanExtra("com.xiaomi.mipush.MESSAGE_CACHE", true);
                                if (com.xiaomi.push.service.m.a(byteArrayExtra2, stringExtra9)) {
                                    str2 = "duplicate msg from: " + String.valueOf(stringExtra9);
                                    com.xiaomi.channel.commonutils.logger.b.a(str2);
                                    return;
                                }
                                if ("com.xiaomi.mipush.UNREGISTER_APP".equals(intent.getAction())) {
                                    v.a(this).a(stringExtra9);
                                    if (com.xiaomi.push.m.a(getApplicationContext())) {
                                        ag.a(stringExtra9);
                                    }
                                }
                                a(stringExtra9, byteArrayExtra2, booleanExtra2);
                                return;
                            }
                            if (!bo.a.equals(intent.getAction())) {
                                if (bo.b.equals(intent.getAction())) {
                                    String stringExtra10 = intent.getStringExtra("data_cleared_pkg_name");
                                    if (TextUtils.isEmpty(stringExtra10)) {
                                        return;
                                    }
                                    try {
                                        sharedPreferences = getSharedPreferences("pref_registered_pkg_names", 0);
                                        if (sharedPreferences != null) {
                                            try {
                                                string = sharedPreferences.getString(stringExtra10, null);
                                            } catch (Throwable th) {
                                                th = th;
                                                com.xiaomi.channel.commonutils.logger.b.a("Fail to get sp or appId : " + th);
                                            }
                                        }
                                    } catch (Throwable th2) {
                                        th = th2;
                                        sharedPreferences = null;
                                    }
                                    if (!TextUtils.isEmpty(string)) {
                                        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
                                        editorEdit.remove(stringExtra10);
                                        editorEdit.commit();
                                        if (al.b((Context) this, stringExtra10)) {
                                            al.c(this, stringExtra10);
                                        }
                                        al.a((Context) this, stringExtra10);
                                        a(stringExtra10, it.a(ah.b(stringExtra10, string)), true);
                                    }
                                    at.a((Context) this, stringExtra10);
                                    if (com.xiaomi.push.m.a(getApplicationContext())) {
                                        ag.a(stringExtra10);
                                        return;
                                    }
                                    return;
                                }
                                if ("com.xiaomi.mipush.CLEAR_NOTIFICATION".equals(intent.getAction())) {
                                    String stringExtra11 = intent.getStringExtra(bk.B);
                                    int intExtra2 = intent.getIntExtra(bk.C, -2);
                                    if (TextUtils.isEmpty(stringExtra11)) {
                                        return;
                                    }
                                    if (intExtra2 >= -1) {
                                        al.a(this, stringExtra11, intExtra2, intent.getIntExtra(bk.D, -1));
                                        return;
                                    } else {
                                        al.a(this, stringExtra11, intent.getStringExtra(bk.H), intent.getStringExtra(bk.I));
                                        return;
                                    }
                                }
                                if ("com.xiaomi.mipush.CLEAR_HEADSUPNOTIFICATION".equals(intent.getAction())) {
                                    String stringExtra12 = intent.getStringExtra(bk.B);
                                    if (TextUtils.isEmpty(stringExtra12)) {
                                        return;
                                    }
                                    al.b((Context) this, stringExtra12);
                                    return;
                                }
                                if ("com.xiaomi.mipush.SET_NOTIFICATION_TYPE".equals(intent.getAction())) {
                                    String stringExtra13 = intent.getStringExtra(bk.B);
                                    String stringExtra14 = intent.getStringExtra(bk.G);
                                    if (intent.hasExtra(bk.E)) {
                                        int intExtra3 = intent.getIntExtra(bk.E, 0);
                                        strB = com.xiaomi.push.bo.b(stringExtra13 + intExtra3);
                                        z2 = false;
                                        i4 = intExtra3;
                                    } else {
                                        strB = com.xiaomi.push.bo.b(stringExtra13);
                                    }
                                    if (!TextUtils.isEmpty(stringExtra13) && TextUtils.equals(stringExtra14, strB)) {
                                        if (z2) {
                                            al.c(this, stringExtra13);
                                            return;
                                        } else {
                                            al.b(this, stringExtra13, i4);
                                            return;
                                        }
                                    }
                                    str = "invalid notification for " + stringExtra13;
                                    com.xiaomi.channel.commonutils.logger.b.d(str);
                                    return;
                                }
                                if ("com.xiaomi.mipush.DISABLE_PUSH".equals(intent.getAction())) {
                                    String stringExtra15 = intent.getStringExtra("mipush_app_package");
                                    if (!TextUtils.isEmpty(stringExtra15)) {
                                        v.a(this).b(stringExtra15);
                                    }
                                    if ("com.xiaomi.xmsf".equals(getPackageName())) {
                                        return;
                                    }
                                    a(19, (Exception) null);
                                    e();
                                    stopSelf();
                                    return;
                                }
                                if ("com.xiaomi.mipush.DISABLE_PUSH_MESSAGE".equals(intent.getAction()) || "com.xiaomi.mipush.ENABLE_PUSH_MESSAGE".equals(intent.getAction())) {
                                    String stringExtra16 = intent.getStringExtra("mipush_app_package");
                                    byte[] byteArrayExtra3 = intent.getByteArrayExtra("mipush_payload");
                                    String stringExtra17 = intent.getStringExtra("mipush_app_id");
                                    String stringExtra18 = intent.getStringExtra("mipush_app_token");
                                    if ("com.xiaomi.mipush.DISABLE_PUSH_MESSAGE".equals(intent.getAction())) {
                                        v.a(this).c(stringExtra16);
                                    }
                                    if ("com.xiaomi.mipush.ENABLE_PUSH_MESSAGE".equals(intent.getAction())) {
                                        v.a(this).e(stringExtra16);
                                        v.a(this).f(stringExtra16);
                                    }
                                    if (byteArrayExtra3 == null) {
                                        x.a(this, stringExtra16, byteArrayExtra3, ErrorCode.ERROR_INVALID_PAYLOAD, "null payload");
                                        return;
                                    }
                                    x.b(stringExtra16, byteArrayExtra3);
                                    a(new w(this, stringExtra16, stringExtra17, stringExtra18, byteArrayExtra3));
                                    if ("com.xiaomi.mipush.ENABLE_PUSH_MESSAGE".equals(intent.getAction()) && this.a == null) {
                                        this.a = new f();
                                        registerReceiver(this.a, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
                                        return;
                                    }
                                    return;
                                }
                                if ("com.xiaomi.mipush.SEND_TINYDATA".equals(intent.getAction())) {
                                    String stringExtra19 = intent.getStringExtra("mipush_app_package");
                                    byte[] byteArrayExtra4 = intent.getByteArrayExtra("mipush_payload");
                                    hn hnVar = new hn();
                                    try {
                                        it.a(hnVar, byteArrayExtra4);
                                        hg.a(this).a(hnVar, stringExtra19);
                                        return;
                                    } catch (iz e2) {
                                        com.xiaomi.channel.commonutils.logger.b.a(e2);
                                        return;
                                    }
                                }
                                if ("com.xiaomi.push.timer".equalsIgnoreCase(intent.getAction())) {
                                    com.xiaomi.channel.commonutils.logger.b.a("[Alarm] Service called on timer");
                                    if (!i()) {
                                        eu.a(false);
                                        if (f()) {
                                            b(false);
                                        }
                                    } else if (eu.a()) {
                                        com.xiaomi.channel.commonutils.logger.b.a("enter falldown mode, stop alarm");
                                        eu.a();
                                    }
                                    a aVar = this.a;
                                    if (aVar != null) {
                                        aVar.a();
                                        return;
                                    }
                                    return;
                                }
                                if ("com.xiaomi.push.check_alive".equalsIgnoreCase(intent.getAction())) {
                                    com.xiaomi.channel.commonutils.logger.b.a("Service called on check alive.");
                                    if (f()) {
                                        b(false);
                                        return;
                                    }
                                    return;
                                }
                                if ("com.xiaomi.mipush.thirdparty".equals(intent.getAction())) {
                                    com.xiaomi.channel.commonutils.logger.b.a("on thirdpart push :" + intent.getStringExtra("com.xiaomi.mipush.thirdparty_DESC"));
                                    eu.a(this, intent.getIntExtra("com.xiaomi.mipush.thirdparty_LEVEL", 0));
                                    return;
                                }
                                if ("android.net.conn.CONNECTIVITY_CHANGE".equals(intent.getAction())) {
                                    d();
                                    return;
                                }
                                if ("miui.net.wifi.DIGEST_INFORMATION_CHANGED".equals(intent.getAction())) {
                                    a(intent);
                                    return;
                                }
                                if ("com.xiaomi.xmsf.USE_INTELLIGENT_HB".equals(intent.getAction())) {
                                    if (intent.getExtras() == null || (i3 = intent.getExtras().getInt("effectivePeriod", 0)) <= 0 || i3 > 604800) {
                                        return;
                                    }
                                    com.xiaomi.push.service.o.a(getApplicationContext()).a(i3);
                                    return;
                                }
                                if ("action_cr_config".equals(intent.getAction())) {
                                    boolean booleanExtra3 = intent.getBooleanExtra("action_cr_event_switch", false);
                                    long longExtra = intent.getLongExtra("action_cr_event_frequency", 86400L);
                                    boolean booleanExtra4 = intent.getBooleanExtra("action_cr_perf_switch", false);
                                    long longExtra2 = intent.getLongExtra("action_cr_perf_frequency", 86400L);
                                    boolean booleanExtra5 = intent.getBooleanExtra("action_cr_event_en", true);
                                    long longExtra3 = intent.getLongExtra("action_cr_max_file_size", 1048576L);
                                    Config configBuild = Config.getBuilder().setEventUploadSwitchOpen(booleanExtra3).setEventUploadFrequency(longExtra).setPerfUploadSwitchOpen(booleanExtra4).setPerfUploadFrequency(longExtra2).setAESKey(com.xiaomi.push.bt.a(getApplicationContext())).setEventEncrypted(booleanExtra5).setMaxFileLength(longExtra3).build(getApplicationContext());
                                    if ("com.xiaomi.xmsf".equals(getPackageName()) || longExtra <= 0 || longExtra2 <= 0 || longExtra3 <= 0) {
                                        return;
                                    }
                                    en.a(getApplicationContext(), configBuild);
                                    return;
                                }
                                if (!"action_help_ping".equals(intent.getAction())) {
                                    if ("action_aw_app_logic".equals(intent.getAction())) {
                                        e(intent);
                                        return;
                                    } else {
                                        if (bk.n.equals(intent.getAction())) {
                                            com.xiaomi.push.service.n.a(getApplicationContext(), intent);
                                            return;
                                        }
                                        return;
                                    }
                                }
                                boolean booleanExtra6 = intent.getBooleanExtra("extra_help_ping_switch", false);
                                int intExtra4 = intent.getIntExtra("extra_help_ping_frequency", 0);
                                if (intExtra4 >= 0 && intExtra4 < 30) {
                                    com.xiaomi.channel.commonutils.logger.b.c("aw_ping: frquency need > 30s.");
                                    intExtra4 = 30;
                                }
                                boolean z3 = intExtra4 >= 0 ? booleanExtra6 : false;
                                com.xiaomi.channel.commonutils.logger.b.a("aw_ping: receive a aw_ping message. switch: " + z3 + " frequency: " + intExtra4);
                                if (!z3 || intExtra4 <= 0 || "com.xiaomi.xmsf".equals(getPackageName())) {
                                    return;
                                }
                                a(intent, intExtra4);
                                return;
                            }
                            String stringExtra20 = intent.getStringExtra("uninstall_pkg_name");
                            if (stringExtra20 == null || TextUtils.isEmpty(stringExtra20.trim())) {
                                return;
                            }
                            try {
                                PackageInfo packageInfo = getPackageManager().getPackageInfo(stringExtra20, 0);
                                if (packageInfo == null || packageInfo.applicationInfo == null || !com.xiaomi.push.j.a(this, packageInfo.packageName)) {
                                    z2 = false;
                                } else {
                                    com.xiaomi.channel.commonutils.logger.b.a("dual space's app uninstalled " + stringExtra20);
                                }
                            } catch (PackageManager.NameNotFoundException unused) {
                            }
                            if (!"com.xiaomi.channel".equals(stringExtra20) || bg.a().a("1").isEmpty() || !z2) {
                                SharedPreferences sharedPreferences2 = getSharedPreferences("pref_registered_pkg_names", 0);
                                String string2 = sharedPreferences2.getString(stringExtra20, null);
                                if (TextUtils.isEmpty(string2) || !z2) {
                                    return;
                                }
                                SharedPreferences.Editor editorEdit2 = sharedPreferences2.edit();
                                editorEdit2.remove(stringExtra20);
                                editorEdit2.commit();
                                if (al.b((Context) this, stringExtra20)) {
                                    al.c(this, stringExtra20);
                                }
                                al.a((Context) this, stringExtra20);
                                at.a(getApplicationContext(), stringExtra20);
                                if (!c() || string2 == null) {
                                    return;
                                }
                                try {
                                    ah.a(this, ah.a(stringExtra20, string2));
                                    com.xiaomi.channel.commonutils.logger.b.a("uninstall " + stringExtra20 + " msg sent");
                                    return;
                                } catch (gh e3) {
                                    com.xiaomi.channel.commonutils.logger.b.d("Fail to send Message: " + e3.getMessage());
                                    a(10, e3);
                                    return;
                                }
                            }
                            a("1", 0);
                            str3 = "close the miliao channel as the app is uninstalled.";
                        }
                    }
                    com.xiaomi.channel.commonutils.logger.b.a(str3);
                    return;
                }
                String stringExtra21 = intent.getStringExtra(bk.t);
                String stringExtra22 = intent.getStringExtra(bk.q);
                if (stringExtra21 == null) {
                    return;
                }
                com.xiaomi.channel.commonutils.logger.b.a("request reset connection from chid = " + stringExtra21);
                bg.b bVarA3 = bg.a().a(stringExtra21, stringExtra22);
                if (bVarA3 == null || !bVarA3.h.equals(intent.getStringExtra(bk.x)) || bVarA3.a != bg.c.c) {
                    return;
                }
                fw fwVarA = a();
                if (fwVarA != null && fwVarA.a(SystemClock.elapsedRealtime() - MBInterstitialActivity.WEB_LOAD_TIME)) {
                    return;
                } else {
                    pVar = new q();
                }
                c(pVar);
                return;
            }
            gn gnVarA2 = a(new gp(intent.getBundleExtra("ext_packet")), intent.getStringExtra(bk.B), intent.getStringExtra(bk.F));
            if (gnVarA2 == null) {
                return;
            } else {
                btVar = new bt(this, fl.a(gnVarA2, bgVarA.a(gnVarA2.k(), gnVarA2.m()).h));
            }
        }
        c(btVar);
    }

    private void e() {
        if (!a()) {
            eu.a();
        } else {
            if (eu.a()) {
                return;
            }
            eu.a(true);
        }
    }

    private void e(Intent intent) {
        int i2;
        try {
            ed.a(getApplicationContext()).a(new bm());
            String stringExtra = intent.getStringExtra("mipush_app_package");
            byte[] byteArrayExtra = intent.getByteArrayExtra("mipush_payload");
            if (byteArrayExtra == null) {
                return;
            }
            ii iiVar = new ii();
            it.a(iiVar, byteArrayExtra);
            String strB = iiVar.b();
            Map<String, String> mapA = iiVar.a();
            if (mapA != null) {
                String str = mapA.get("extra_help_aw_info");
                String str2 = mapA.get("extra_aw_app_online_cmd");
                if (TextUtils.isEmpty(str2)) {
                    return;
                }
                try {
                    i2 = Integer.parseInt(str2);
                } catch (NumberFormatException unused) {
                    i2 = 0;
                }
                int i3 = i2;
                if (TextUtils.isEmpty(stringExtra) || TextUtils.isEmpty(strB) || TextUtils.isEmpty(str)) {
                    return;
                }
                ed.a(getApplicationContext()).a(this, str, i3, stringExtra, strB);
            }
        } catch (iz e2) {
            com.xiaomi.channel.commonutils.logger.b.d("aw_logic: translate fail. " + e2.getMessage());
        }
    }

    public static boolean e() {
        return b;
    }

    private void f() {
        String str;
        fw fwVar = this.a;
        if (fwVar == null || !fwVar.b()) {
            fw fwVar2 = this.a;
            if (fwVar2 == null || !fwVar2.c()) {
                this.a.b(com.xiaomi.push.bj.a((Context) this));
                g();
                if (this.a == null) {
                    bg.a().a(this);
                    c(false);
                    return;
                }
                return;
            }
            str = "try to connect while is connected.";
        } else {
            str = "try to connect while connecting.";
        }
        com.xiaomi.channel.commonutils.logger.b.d(str);
    }

    private boolean f() {
        if (SystemClock.elapsedRealtime() - this.a < 30000) {
            return false;
        }
        return com.xiaomi.push.bj.d(this);
    }

    private void g() {
        try {
            this.a.a(this.a, new cl(this));
            this.a.e();
            this.a = this.a;
        } catch (gh e2) {
            com.xiaomi.channel.commonutils.logger.b.a("fail to create Slim connection", e2);
            this.a.b(3, e2);
        }
    }

    private boolean g() {
        return "com.xiaomi.xmsf".equals(getPackageName()) && Settings.System.getInt(getContentResolver(), "power_supersave_mode_open", 0) == 1;
    }

    private void h() {
    }

    private boolean h() {
        return "com.xiaomi.xmsf".equals(getPackageName()) || !v.a(this).b(getPackageName());
    }

    private void i() {
        synchronized (this.a) {
            this.a.clear();
        }
    }

    private boolean i() {
        return getApplicationContext().getPackageName().equals("com.xiaomi.xmsf") && j() && !com.xiaomi.push.j.b((Context) this) && !com.xiaomi.push.j.a(getApplicationContext());
    }

    private boolean j() {
        int iIntValue = Integer.valueOf(String.format("%tH", new Date())).intValue();
        int i2 = this.a;
        int i3 = this.b;
        if (i2 > i3) {
            if (iIntValue >= i2 || iIntValue < i3) {
                return true;
            }
        } else if (i2 < i3 && iIntValue >= i2 && iIntValue < i3) {
            return true;
        }
        return false;
    }

    private boolean k() {
        if (TextUtils.equals(getPackageName(), "com.xiaomi.xmsf")) {
            return false;
        }
        return ba.a(this).a(ho.H.a(), false);
    }

    public fw a() {
        return this.a;
    }

    public com.xiaomi.push.service.j a() {
        return new com.xiaomi.push.service.j();
    }

    void a() {
        if (SystemClock.elapsedRealtime() - this.a >= gc.a() && com.xiaomi.push.bj.d(this)) {
            b(true);
        }
    }

    public void a(int i2) {
        this.a.a(i2);
    }

    public void a(int i2, Exception exc) {
        StringBuilder sb = new StringBuilder();
        sb.append("disconnect ");
        sb.append(hashCode());
        sb.append(", ");
        fw fwVar = this.a;
        sb.append(fwVar == null ? null : Integer.valueOf(fwVar.hashCode()));
        com.xiaomi.channel.commonutils.logger.b.a(sb.toString());
        fw fwVar2 = this.a;
        if (fwVar2 != null) {
            fwVar2.b(i2, exc);
            this.a = null;
        }
        a(7);
        a(4);
        bg.a().a(this, i2);
    }

    public void a(fl flVar) throws gh {
        fw fwVar = this.a;
        if (fwVar == null) {
            throw new gh("try send msg while connection is null.");
        }
        fwVar.b(flVar);
    }

    @Override
    public void a(fw fwVar) {
        com.xiaomi.channel.commonutils.logger.b.c("begin to connect...");
        fh.a().a(fwVar);
    }

    @Override
    public void a(fw fwVar, int i2, Exception exc) {
        fh.a().a(fwVar, i2, exc);
        if (i()) {
            return;
        }
        a(false);
    }

    @Override
    public void a(fw fwVar, Exception exc) {
        fh.a().a(fwVar, exc);
        c(false);
        if (i()) {
            return;
        }
        a(false);
    }

    public void a(j jVar) {
        a(jVar, 0L);
    }

    public void a(j jVar, long j2) {
        try {
            this.a.a(jVar, j2);
        } catch (IllegalStateException e2) {
            com.xiaomi.channel.commonutils.logger.b.a("can't execute job err = " + e2.getMessage());
        }
    }

    public void a(n nVar) {
        synchronized (this.a) {
            this.a.add(nVar);
        }
    }

    public void a(bg.b bVar) {
        if (bVar != null) {
            long jA = bVar.a();
            com.xiaomi.channel.commonutils.logger.b.a("schedule rebind job in " + (jA / 1000));
            a(new b(bVar), jA);
        }
    }

    public void a(String str, String str2, int i2, String str3, String str4) {
        bg.b bVarA = bg.a().a(str, str2);
        if (bVarA != null) {
            a(new s(bVarA, i2, str4, str3));
        }
        bg.a().a(str, str2);
    }

    void a(String str, byte[] bArr, boolean z) {
        Collection<bg.b> collectionA = bg.a().a("5");
        if (collectionA.isEmpty()) {
            if (!z) {
                return;
            }
        } else if (collectionA.iterator().next().a == bg.c.c) {
            a(new cj(this, 4, str, bArr));
            return;
        } else if (!z) {
            return;
        }
        x.b(str, bArr);
    }

    public void a(boolean z) {
        this.a.a(z);
    }

    public void a(byte[] bArr, String str) {
        if (bArr == null) {
            x.a(this, str, bArr, ErrorCode.ERROR_INVALID_PAYLOAD, "null payload");
            com.xiaomi.channel.commonutils.logger.b.a("register request without payload");
            return;
        }
        if ifVar = new if();
        try {
            it.a(ifVar, bArr);
            if (ifVar.a == hj.a) {
                ij ijVar = new ij();
                try {
                    it.a(ijVar, ifVar.a());
                    a(new w(this, ifVar.b(), ijVar.b(), ijVar.c(), bArr));
                    eo.a(getApplicationContext()).a(ifVar.b(), "E100003", ijVar.a(), AuthCode.StatusCode.AUTH_INFO_NOT_EXIST, null);
                } catch (iz e2) {
                    com.xiaomi.channel.commonutils.logger.b.d("app register error. " + e2);
                    x.a(this, str, bArr, ErrorCode.ERROR_INVALID_PAYLOAD, " data action error.");
                }
            } else {
                x.a(this, str, bArr, ErrorCode.ERROR_INVALID_PAYLOAD, " registration action required.");
                com.xiaomi.channel.commonutils.logger.b.a("register request with invalid payload");
            }
        } catch (iz e3) {
            com.xiaomi.channel.commonutils.logger.b.d("app register fail. " + e3);
            x.a(this, str, bArr, ErrorCode.ERROR_INVALID_PAYLOAD, " data container error.");
        }
    }

    public void a(fl[] flVarArr) throws gh {
        fw fwVar = this.a;
        if (fwVar == null) {
            throw new gh("try send msg while connection is null.");
        }
        fwVar.a(flVarArr);
    }

    public boolean a() {
        boolean zB = com.xiaomi.push.bj.b(this);
        boolean z = bg.a().a() > 0;
        boolean z2 = !b();
        boolean zH = h();
        boolean z3 = !g();
        boolean z4 = zB && z && z2 && zH && z3;
        if (!z4) {
            com.xiaomi.channel.commonutils.logger.b.e(String.format("not conn, net=%s;cnt=%s;!dis=%s;enb=%s;!spm=%s;", Boolean.valueOf(zB), Boolean.valueOf(z), Boolean.valueOf(z2), Boolean.valueOf(zH), Boolean.valueOf(z3)));
        }
        return z4;
    }

    public boolean a(int i2) {
        return this.a.a(i2);
    }

    public com.xiaomi.push.service.j b() {
        return this.a;
    }

    void b() {
        com.xiaomi.push.service.o.a(getApplicationContext()).d();
        Iterator it = new ArrayList(this.a).iterator();
        while (it.hasNext()) {
            ((n) it.next()).a();
        }
    }

    @Override
    public void b(fw fwVar) {
        fh.a().b(fwVar);
        c(true);
        this.a.a();
        if (!eu.a() && !i()) {
            com.xiaomi.channel.commonutils.logger.b.a("reconnection successful, reactivate alarm.");
            eu.a(true);
        }
        Iterator<bg.b> it = bg.a().a().iterator();
        while (it.hasNext()) {
            a(new b(it.next()));
        }
        if (this.a || !com.xiaomi.push.m.a(getApplicationContext())) {
            return;
        }
        com.xiaomi.push.al.a(getApplicationContext()).a(new cm(this));
    }

    public void b(j jVar) {
        this.a.a(jVar.a, jVar);
    }

    public boolean b() {
        try {
            Class<?> clsA = com.xiaomi.push.v.a(this, "miui.os.Build");
            Field field = clsA.getField("IS_CM_CUSTOMIZATION_TEST");
            Field field2 = clsA.getField("IS_CU_CUSTOMIZATION_TEST");
            Field field3 = clsA.getField("IS_CT_CUSTOMIZATION_TEST");
            if (!field.getBoolean(null) && !field2.getBoolean(null)) {
                if (!field3.getBoolean(null)) {
                    return false;
                }
            }
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    public boolean c() {
        fw fwVar = this.a;
        return fwVar != null && fwVar.c();
    }

    public boolean d() {
        fw fwVar = this.a;
        return fwVar != null && fwVar.b();
    }

    @Override
    public IBinder onBind(Intent intent) {
        return this.a.getBinder();
    }

    @Override
    public void onCreate() {
        String[] strArrSplit;
        super.onCreate();
        com.xiaomi.channel.commonutils.logger.b.a(getApplicationContext());
        com.xiaomi.push.v.a((Context) this);
        com.xiaomi.push.service.t tVarA = u.a((Context) this);
        if (tVarA != null) {
            com.xiaomi.push.ae.a(tVarA.a);
        }
        ci ciVar = null;
        if (com.xiaomi.push.m.a(getApplicationContext())) {
            HandlerThread handlerThread = new HandlerThread("hb-alarm");
            handlerThread.start();
            Handler handler = new Handler(handlerThread.getLooper());
            this.a = new a(this, ciVar);
            registerReceiver(this.a, new IntentFilter(bk.p), null, handler);
            b = true;
            handler.post(new cn(this));
        }
        this.a = new Messenger(new co(this));
        bl.a(this);
        cp cpVar = new cp(this, null, 5222, "xiaomi.com", null);
        this.a = cpVar;
        cpVar.a(true);
        this.a = new fs(this, this.a);
        this.a = a();
        eu.a(this);
        this.a.a(this);
        this.a = new be(this);
        this.a = new bq(this);
        new com.xiaomi.push.service.k().a();
        fh.a().a(this);
        this.a = new com.xiaomi.push.service.p("Connection Controller Thread");
        bg bgVarA = bg.a();
        bgVarA.b();
        bgVarA.a(new cq(this));
        if (k()) {
            h();
        }
        hg.a(this).a(new com.xiaomi.push.service.r(this), "UPLOADER_PUSH_CHANNEL");
        a(new hd(this));
        a(new cg(this));
        if (com.xiaomi.push.m.a((Context) this)) {
            a(new bf());
        }
        a(new h());
        this.a.add(bx.a(this));
        if (h()) {
            this.a = new f();
            registerReceiver(this.a, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
        }
        if (com.xiaomi.push.m.a(getApplicationContext())) {
            this.a = new t();
            registerReceiver(this.a, new IntentFilter("miui.net.wifi.DIGEST_INFORMATION_CHANGED"), "miui.net.wifi.permission.ACCESS_WIFI_DIGEST_INFO", null);
            k kVar = new k();
            this.a = kVar;
            registerReceiver(kVar, new IntentFilter("com.xiaomi.xmsf.USE_INTELLIGENT_HB"), "com.xiaomi.xmsf.permission.INTELLIGENT_HB", null);
        }
        com.xiaomi.push.service.o.a(getApplicationContext()).a();
        if ("com.xiaomi.xmsf".equals(getPackageName())) {
            Uri uriFor = Settings.System.getUriFor("power_supersave_mode_open");
            if (uriFor != null) {
                this.a = new cr(this, new Handler(Looper.getMainLooper()));
                try {
                    getContentResolver().registerContentObserver(uriFor, false, this.a);
                } catch (Throwable th) {
                    com.xiaomi.channel.commonutils.logger.b.d("register super-power-mode observer err:" + th.getMessage());
                }
            }
            int[] iArrA = a();
            if (iArrA != null) {
                this.a = new r();
                IntentFilter intentFilter = new IntentFilter();
                intentFilter.addAction("android.intent.action.SCREEN_ON");
                intentFilter.addAction("android.intent.action.SCREEN_OFF");
                registerReceiver(this.a, intentFilter);
                this.a = iArrA[0];
                this.b = iArrA[1];
                com.xiaomi.channel.commonutils.logger.b.a("falldown initialized: " + this.a + Constants.ACCEPT_TIME_SEPARATOR_SP + this.b);
            }
        }
        String str = "";
        if (tVarA != null) {
            try {
                if (!TextUtils.isEmpty(tVarA.a) && (strArrSplit = tVarA.a.split("@")) != null && strArrSplit.length > 0) {
                    str = strArrSplit[0];
                }
            } catch (Exception unused) {
            }
        }
        dd.a(this);
        com.xiaomi.channel.commonutils.logger.b.e("XMPushService created. pid=" + Process.myPid() + ", uid=" + Process.myUid() + ", vc=" + com.xiaomi.push.h.a(getApplicationContext(), getPackageName()) + ", uuid=" + str);
    }

    @Override
    public void onDestroy() {
        f fVar = this.a;
        if (fVar != null) {
            a(fVar);
            this.a = null;
        }
        t tVar = this.a;
        if (tVar != null) {
            a(tVar);
            this.a = null;
        }
        k kVar = this.a;
        if (kVar != null) {
            a(kVar);
            this.a = null;
        }
        r rVar = this.a;
        if (rVar != null) {
            a(rVar);
            this.a = null;
        }
        a aVar = this.a;
        if (aVar != null) {
            a(aVar);
            this.a = null;
        }
        if ("com.xiaomi.xmsf".equals(getPackageName()) && this.a != null) {
            try {
                getContentResolver().unregisterContentObserver(this.a);
            } catch (Throwable th) {
                com.xiaomi.channel.commonutils.logger.b.d("unregister super-power-mode err:" + th.getMessage());
            }
        }
        this.a.clear();
        this.a.b();
        a(new ck(this, 2));
        a(new l());
        bg.a().b();
        bg.a().a(this, 15);
        bg.a().a();
        this.a.b(this);
        bv.a().a();
        eu.a();
        i();
        super.onDestroy();
        com.xiaomi.channel.commonutils.logger.b.a("Service destroyed");
    }

    @Override
    public void onStart(Intent intent, int i2) {
        i iVar;
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (intent == null) {
            com.xiaomi.channel.commonutils.logger.b.d("onStart() with intent NULL");
        } else {
            com.xiaomi.channel.commonutils.logger.b.a(String.format("onStart() with intent.Action = %s, chid = %s, pkg = %s|%s", intent.getAction(), intent.getStringExtra(bk.t), intent.getStringExtra(bk.B), intent.getStringExtra("mipush_app_package")));
        }
        if (intent != null && intent.getAction() != null) {
            if ("com.xiaomi.push.timer".equalsIgnoreCase(intent.getAction()) || "com.xiaomi.push.check_alive".equalsIgnoreCase(intent.getAction())) {
                if (this.a.a()) {
                    com.xiaomi.channel.commonutils.logger.b.d("ERROR, the job controller is blocked.");
                    bg.a().a(this, 14);
                    stopSelf();
                } else {
                    iVar = new i(intent);
                    a(iVar);
                }
            } else if (!"com.xiaomi.push.network_status_changed".equalsIgnoreCase(intent.getAction())) {
                if ("10".equals(intent.getStringExtra("ext_chid"))) {
                    intent.putExtra("rx_msg", System.currentTimeMillis());
                    intent.putExtra("screen_on", com.xiaomi.push.w.a(getApplicationContext()));
                    intent.putExtra(Device.NETWORN_WIFI, com.xiaomi.push.bj.e(getApplicationContext()));
                }
                iVar = new i(intent);
                a(iVar);
            }
        }
        long jCurrentTimeMillis2 = System.currentTimeMillis() - jCurrentTimeMillis;
        if (jCurrentTimeMillis2 > 50) {
            com.xiaomi.channel.commonutils.logger.b.c("[Prefs] spend " + jCurrentTimeMillis2 + " ms, too more times.");
        }
    }

    @Override
    public int onStartCommand(Intent intent, int i2, int i3) {
        onStart(intent, i3);
        return 1;
    }
}
