package com.xiaomi.push.service;

import android.content.Context;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.xiaomi.push.service.XMPushService;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes4.dex */
public class bg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static bg f8330a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ConcurrentHashMap<String, HashMap<String, b>> f938a = new ConcurrentHashMap<>();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private List<a> f937a = new ArrayList();

    public interface a {
        void a();
    }

    public class b {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public Context f939a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        Messenger f941a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private XMPushService f943a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public j f946a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public String f947a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public boolean f949a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        public String f950b;
        public String c;
        public String d;
        public String e;
        public String f;
        public String g;
        public String h;
        public String i;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        c f945a = c.unbind;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8331a = 0;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private List<a> f948a = new ArrayList();
        c b = null;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f951b = false;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private XMPushService.c f942a = new XMPushService.c(this);

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        IBinder.DeathRecipient f940a = null;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        final C0521b f944a = new C0521b();

        public interface a {
            void a(c cVar, c cVar2, int i);
        }

        /* JADX INFO: renamed from: com.xiaomi.push.service.bg$b$b, reason: collision with other inner class name */
        class C0521b extends XMPushService.j {

            /* JADX INFO: renamed from: a, reason: collision with other field name */
            String f952a;
            int b;

            /* JADX INFO: renamed from: b, reason: collision with other field name */
            String f953b;
            int c;

            public C0521b() {
                super(0);
            }

            public XMPushService.j a(int i, int i2, String str, String str2) {
                this.b = i;
                this.c = i2;
                this.f953b = str2;
                this.f952a = str;
                return this;
            }

            @Override // com.xiaomi.push.service.XMPushService.j
            /* JADX INFO: renamed from: a */
            public String mo613a() {
                return "notify job";
            }

            @Override // com.xiaomi.push.service.XMPushService.j
            /* JADX INFO: renamed from: a */
            public void mo334a() {
                if (b.this.a(this.b, this.c, this.f953b)) {
                    b.this.a(this.b, this.c, this.f952a, this.f953b);
                    return;
                }
                com.xiaomi.channel.commonutils.logger.b.b(" ignore notify client :" + b.this.g);
            }
        }

        class c implements IBinder.DeathRecipient {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            final Messenger f8333a;

            /* JADX INFO: renamed from: a, reason: collision with other field name */
            final b f954a;

            c(b bVar, Messenger messenger) {
                this.f954a = bVar;
                this.f8333a = messenger;
            }

            @Override // android.os.IBinder.DeathRecipient
            public void binderDied() {
                com.xiaomi.channel.commonutils.logger.b.b("peer died, chid = " + this.f954a.g);
                b.this.f943a.a(new bi(this, 0), 0L);
                if ("9".equals(this.f954a.g) && "com.xiaomi.xmsf".equals(b.this.f943a.getPackageName())) {
                    b.this.f943a.a(new bj(this, 0), 60000L);
                }
            }
        }

        public b() {
        }

        public b(XMPushService xMPushService) {
            this.f943a = xMPushService;
            a(new bh(this));
        }

        public static String a(String str) {
            int iLastIndexOf;
            return (TextUtils.isEmpty(str) || (iLastIndexOf = str.lastIndexOf("/")) == -1) ? "" : str.substring(iLastIndexOf + 1);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void a(int i, int i2, String str, String str2) {
            c cVar = this.f945a;
            this.b = cVar;
            if (i == 2) {
                this.f946a.a(this.f939a, this, i2);
                return;
            }
            if (i == 3) {
                this.f946a.a(this.f939a, this, str2, str);
                return;
            }
            if (i == 1) {
                boolean z = cVar == c.binded;
                if (!z && "wait".equals(str2)) {
                    this.f8331a++;
                } else if (z) {
                    this.f8331a = 0;
                    if (this.f941a != null) {
                        try {
                            this.f941a.send(Message.obtain(null, 16, this.f943a.f856a));
                        } catch (RemoteException unused) {
                        }
                    }
                }
                this.f946a.a(this.f943a, this, z, i2, str);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public boolean a(int i, int i2, String str) {
            boolean z;
            StringBuilder sb;
            String str2;
            c cVar = this.b;
            if (cVar == null || !(z = this.f951b)) {
                return true;
            }
            if (cVar == this.f945a) {
                sb = new StringBuilder();
                str2 = " status recovered, don't notify client:";
            } else {
                if (this.f941a != null && z) {
                    com.xiaomi.channel.commonutils.logger.b.b("Peer alive notify status to client:" + this.g);
                    return true;
                }
                sb = new StringBuilder();
                str2 = "peer died, ignore notify ";
            }
            sb.append(str2);
            sb.append(this.g);
            com.xiaomi.channel.commonutils.logger.b.b(sb.toString());
            return false;
        }

        private boolean b(int i, int i2, String str) {
            if (i == 1) {
                return (this.f945a == c.binded || !this.f943a.m611c() || i2 == 21 || (i2 == 7 && "wait".equals(str))) ? false : true;
            }
            if (i == 2) {
                return this.f943a.m611c();
            }
            if (i != 3) {
                return false;
            }
            return !"wait".equals(str);
        }

        public long a() {
            return (((long) ((Math.random() * 20.0d) - 10.0d)) + ((long) ((this.f8331a + 1) * 15))) * 1000;
        }

        public String a(int i) {
            return i != 1 ? i != 2 ? i != 3 ? EnvironmentCompat.MEDIA_UNKNOWN : "KICK" : "CLOSE" : "OPEN";
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        void m657a() {
            try {
                Messenger messenger = this.f941a;
                if (messenger != null && this.f940a != null) {
                    messenger.getBinder().unlinkToDeath(this.f940a, 0);
                }
            } catch (Exception unused) {
            }
            this.b = null;
        }

        void a(Messenger messenger) {
            m657a();
            try {
                if (messenger != null) {
                    this.f941a = messenger;
                    this.f951b = true;
                    this.f940a = new c(this, messenger);
                    messenger.getBinder().linkToDeath(this.f940a, 0);
                } else {
                    com.xiaomi.channel.commonutils.logger.b.b("peer linked with old sdk chid = " + this.g);
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.b("peer linkToDeath err: " + e.getMessage());
                this.f941a = null;
                this.f951b = false;
            }
        }

        public void a(a aVar) {
            synchronized (this.f948a) {
                this.f948a.add(aVar);
            }
        }

        public void a(c cVar, int i, int i2, String str, String str2) {
            boolean z;
            synchronized (this.f948a) {
                Iterator<a> it = this.f948a.iterator();
                while (it.hasNext()) {
                    it.next().a(this.f945a, cVar, i2);
                }
            }
            c cVar2 = this.f945a;
            int i3 = 0;
            if (cVar2 != cVar) {
                com.xiaomi.channel.commonutils.logger.b.m43a(String.format("update the client %7$s status. %1$s->%2$s %3$s %4$s %5$s %6$s", cVar2, cVar, a(i), bk.a(i2), str, str2, this.g));
                this.f945a = cVar;
            }
            if (this.f946a == null) {
                com.xiaomi.channel.commonutils.logger.b.d("status changed while the client dispatcher is missing");
                return;
            }
            if (cVar == c.binding) {
                return;
            }
            if (this.b != null && (z = this.f951b)) {
                i3 = (this.f941a == null || !z) ? 10100 : 1000;
            }
            this.f943a.b(this.f944a);
            if (b(i, i2, str2)) {
                a(i, i2, str, str2);
            } else {
                this.f943a.a(this.f944a.a(i, i2, str, str2), i3);
            }
        }

        public void b(a aVar) {
            synchronized (this.f948a) {
                this.f948a.remove(aVar);
            }
        }
    }

    public enum c {
        unbind,
        binding,
        binded
    }

    private bg() {
    }

    public static synchronized bg a() {
        if (f8330a == null) {
            f8330a = new bg();
        }
        return f8330a;
    }

    private String a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        int iIndexOf = str.indexOf("@");
        return iIndexOf > 0 ? str.substring(0, iIndexOf) : str;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized int m649a() {
        return this.f938a.size();
    }

    public synchronized b a(String str, String str2) {
        HashMap<String, b> map = this.f938a.get(str);
        if (map == null) {
            return null;
        }
        return map.get(a(str2));
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized ArrayList<b> m650a() {
        ArrayList<b> arrayList;
        arrayList = new ArrayList<>();
        Iterator<HashMap<String, b>> it = this.f938a.values().iterator();
        while (it.hasNext()) {
            arrayList.addAll(it.next().values());
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized Collection<b> m651a(String str) {
        if (this.f938a.containsKey(str)) {
            return ((HashMap) this.f938a.get(str).clone()).values();
        }
        return new ArrayList();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized List<String> m652a(String str) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        Iterator<HashMap<String, b>> it = this.f938a.values().iterator();
        while (it.hasNext()) {
            for (b bVar : it.next().values()) {
                if (str.equals(bVar.f947a)) {
                    arrayList.add(bVar.g);
                }
            }
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m653a() {
        Iterator<b> it = m650a().iterator();
        while (it.hasNext()) {
            it.next().m657a();
        }
        this.f938a.clear();
    }

    public synchronized void a(Context context) {
        Iterator<HashMap<String, b>> it = this.f938a.values().iterator();
        while (it.hasNext()) {
            Iterator<b> it2 = it.next().values().iterator();
            while (it2.hasNext()) {
                it2.next().a(c.unbind, 1, 3, (String) null, (String) null);
            }
        }
    }

    public synchronized void a(Context context, int i) {
        Iterator<HashMap<String, b>> it = this.f938a.values().iterator();
        while (it.hasNext()) {
            Iterator<b> it2 = it.next().values().iterator();
            while (it2.hasNext()) {
                it2.next().a(c.unbind, 2, i, (String) null, (String) null);
            }
        }
    }

    public synchronized void a(a aVar) {
        this.f937a.add(aVar);
    }

    public synchronized void a(b bVar) {
        HashMap<String, b> map = this.f938a.get(bVar.g);
        if (map == null) {
            map = new HashMap<>();
            this.f938a.put(bVar.g, map);
        }
        map.put(a(bVar.f950b), bVar);
        com.xiaomi.channel.commonutils.logger.b.m43a("add active client. " + bVar.f947a);
        Iterator<a> it = this.f937a.iterator();
        while (it.hasNext()) {
            it.next().a();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m654a(String str) {
        HashMap<String, b> map = this.f938a.get(str);
        if (map != null) {
            Iterator<b> it = map.values().iterator();
            while (it.hasNext()) {
                it.next().m657a();
            }
            map.clear();
            this.f938a.remove(str);
        }
        Iterator<a> it2 = this.f937a.iterator();
        while (it2.hasNext()) {
            it2.next().a();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m655a(String str, String str2) {
        HashMap<String, b> map = this.f938a.get(str);
        if (map != null) {
            b bVar = map.get(a(str2));
            if (bVar != null) {
                bVar.m657a();
            }
            map.remove(a(str2));
            if (map.isEmpty()) {
                this.f938a.remove(str);
            }
        }
        Iterator<a> it = this.f937a.iterator();
        while (it.hasNext()) {
            it.next().a();
        }
    }

    public synchronized void b() {
        this.f937a.clear();
    }
}
