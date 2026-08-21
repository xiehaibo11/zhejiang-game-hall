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

public class bg {
    private static bg a;
    private ConcurrentHashMap<String, HashMap<String, b>> a = new ConcurrentHashMap<>();
    private List<a> a = new ArrayList();

    public interface a {
        void a();
    }

    public class b {
        public Context a;
        Messenger a;
        private XMPushService a;
        public j a;
        public String a;
        public boolean a;
        public String b;
        public String c;
        public String d;
        public String e;
        public String f;
        public String g;
        public String h;
        public String i;
        c a = c.a;
        private int a = 0;
        private List<a> a = new ArrayList();
        c b = null;
        private boolean b = false;
        private XMPushService.c a = new XMPushService.c(this);
        IBinder.DeathRecipient a = null;
        final b a = new b();

        public interface a {
            void a(c cVar, c cVar2, int i);
        }

        class b extends XMPushService.j {
            String a;
            int b;
            String b;
            int c;

            public b() {
                super(0);
            }

            public XMPushService.j a(int i, int i2, String str, String str2) {
                this.b = i;
                this.c = i2;
                this.b = str2;
                this.a = str;
                return this;
            }

            @Override
            public String a() {
                return "notify job";
            }

            @Override
            public void a() {
                if (b.this.a(this.b, this.c, this.b)) {
                    b.this.a(this.b, this.c, this.a, this.b);
                    return;
                }
                com.xiaomi.channel.commonutils.logger.b.b(" ignore notify client :" + b.this.g);
            }
        }

        class c implements IBinder.DeathRecipient {
            final Messenger a;
            final b a;

            c(b bVar, Messenger messenger) {
                this.a = bVar;
                this.a = messenger;
            }

            @Override
            public void binderDied() {
                com.xiaomi.channel.commonutils.logger.b.b("peer died, chid = " + this.a.g);
                b.this.a.a(new bi(this, 0), 0L);
                if ("9".equals(this.a.g) && "com.xiaomi.xmsf".equals(b.this.a.getPackageName())) {
                    b.this.a.a(new bj(this, 0), 60000L);
                }
            }
        }

        public b() {
        }

        public b(XMPushService xMPushService) {
            this.a = xMPushService;
            a(new bh(this));
        }

        public static String a(String str) {
            int iLastIndexOf;
            return (TextUtils.isEmpty(str) || (iLastIndexOf = str.lastIndexOf("/")) == -1) ? "" : str.substring(iLastIndexOf + 1);
        }

        private void a(int i, int i2, String str, String str2) {
            c cVar = this.a;
            this.b = cVar;
            if (i == 2) {
                this.a.a(this.a, this, i2);
                return;
            }
            if (i == 3) {
                this.a.a(this.a, this, str2, str);
                return;
            }
            if (i == 1) {
                boolean z = cVar == c.c;
                if (!z && "wait".equals(str2)) {
                    this.a++;
                } else if (z) {
                    this.a = 0;
                    if (this.a != null) {
                        try {
                            this.a.send(Message.obtain(null, 16, this.a.a));
                        } catch (RemoteException unused) {
                        }
                    }
                }
                this.a.a(this.a, this, z, i2, str);
            }
        }

        private boolean a(int i, int i2, String str) {
            boolean z;
            StringBuilder sb;
            String str2;
            c cVar = this.b;
            if (cVar == null || !(z = this.b)) {
                return true;
            }
            if (cVar == this.a) {
                sb = new StringBuilder();
                str2 = " status recovered, don't notify client:";
            } else {
                if (this.a != null && z) {
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
                return (this.a == c.c || !this.a.c() || i2 == 21 || (i2 == 7 && "wait".equals(str))) ? false : true;
            }
            if (i == 2) {
                return this.a.c();
            }
            if (i != 3) {
                return false;
            }
            return !"wait".equals(str);
        }

        public long a() {
            return (((long) ((Math.random() * 20.0d) - 10.0d)) + ((long) ((this.a + 1) * 15))) * 1000;
        }

        public String a(int i) {
            return i != 1 ? i != 2 ? i != 3 ? EnvironmentCompat.MEDIA_UNKNOWN : "KICK" : "CLOSE" : "OPEN";
        }

        void a() {
            try {
                Messenger messenger = this.a;
                if (messenger != null && this.a != null) {
                    messenger.getBinder().unlinkToDeath(this.a, 0);
                }
            } catch (Exception unused) {
            }
            this.b = null;
        }

        void a(Messenger messenger) {
            a();
            try {
                if (messenger != null) {
                    this.a = messenger;
                    this.b = true;
                    this.a = new c(this, messenger);
                    messenger.getBinder().linkToDeath(this.a, 0);
                } else {
                    com.xiaomi.channel.commonutils.logger.b.b("peer linked with old sdk chid = " + this.g);
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.b("peer linkToDeath err: " + e.getMessage());
                this.a = null;
                this.b = false;
            }
        }

        public void a(a aVar) {
            synchronized (this.a) {
                this.a.add(aVar);
            }
        }

        public void a(c cVar, int i, int i2, String str, String str2) {
            boolean z;
            synchronized (this.a) {
                Iterator<a> it = this.a.iterator();
                while (it.hasNext()) {
                    it.next().a(this.a, cVar, i2);
                }
            }
            c cVar2 = this.a;
            int i3 = 0;
            if (cVar2 != cVar) {
                com.xiaomi.channel.commonutils.logger.b.a(String.format("update the client %7$s status. %1$s->%2$s %3$s %4$s %5$s %6$s", cVar2, cVar, a(i), bk.a(i2), str, str2, this.g));
                this.a = cVar;
            }
            if (this.a == null) {
                com.xiaomi.channel.commonutils.logger.b.d("status changed while the client dispatcher is missing");
                return;
            }
            if (cVar == c.b) {
                return;
            }
            if (this.b != null && (z = this.b)) {
                i3 = (this.a == null || !z) ? 10100 : 1000;
            }
            this.a.b(this.a);
            if (b(i, i2, str2)) {
                a(i, i2, str, str2);
            } else {
                this.a.a(this.a.a(i, i2, str, str2), i3);
            }
        }

        public void b(a aVar) {
            synchronized (this.a) {
                this.a.remove(aVar);
            }
        }
    }

    public enum c {
        a,
        b,
        c
    }

    private bg() {
    }

    public static synchronized bg a() {
        if (a == null) {
            a = new bg();
        }
        return a;
    }

    private String a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        int iIndexOf = str.indexOf("@");
        return iIndexOf > 0 ? str.substring(0, iIndexOf) : str;
    }

    public synchronized int a() {
        return this.a.size();
    }

    public synchronized b a(String str, String str2) {
        HashMap<String, b> map = this.a.get(str);
        if (map == null) {
            return null;
        }
        return map.get(a(str2));
    }

    public synchronized ArrayList<b> a() {
        ArrayList<b> arrayList;
        arrayList = new ArrayList<>();
        Iterator<HashMap<String, b>> it = this.a.values().iterator();
        while (it.hasNext()) {
            arrayList.addAll(it.next().values());
        }
        return arrayList;
    }

    public synchronized Collection<b> a(String str) {
        if (this.a.containsKey(str)) {
            return ((HashMap) this.a.get(str).clone()).values();
        }
        return new ArrayList();
    }

    public synchronized List<String> a(String str) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        Iterator<HashMap<String, b>> it = this.a.values().iterator();
        while (it.hasNext()) {
            for (b bVar : it.next().values()) {
                if (str.equals(bVar.a)) {
                    arrayList.add(bVar.g);
                }
            }
        }
        return arrayList;
    }

    public synchronized void a() {
        Iterator<b> it = a().iterator();
        while (it.hasNext()) {
            it.next().a();
        }
        this.a.clear();
    }

    public synchronized void a(Context context) {
        Iterator<HashMap<String, b>> it = this.a.values().iterator();
        while (it.hasNext()) {
            Iterator<b> it2 = it.next().values().iterator();
            while (it2.hasNext()) {
                it2.next().a(c.a, 1, 3, (String) null, (String) null);
            }
        }
    }

    public synchronized void a(Context context, int i) {
        Iterator<HashMap<String, b>> it = this.a.values().iterator();
        while (it.hasNext()) {
            Iterator<b> it2 = it.next().values().iterator();
            while (it2.hasNext()) {
                it2.next().a(c.a, 2, i, (String) null, (String) null);
            }
        }
    }

    public synchronized void a(a aVar) {
        this.a.add(aVar);
    }

    public synchronized void a(b bVar) {
        HashMap<String, b> map = this.a.get(bVar.g);
        if (map == null) {
            map = new HashMap<>();
            this.a.put(bVar.g, map);
        }
        map.put(a(bVar.b), bVar);
        com.xiaomi.channel.commonutils.logger.b.a("add active client. " + bVar.a);
        Iterator<a> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a();
        }
    }

    public synchronized void a(String str) {
        HashMap<String, b> map = this.a.get(str);
        if (map != null) {
            Iterator<b> it = map.values().iterator();
            while (it.hasNext()) {
                it.next().a();
            }
            map.clear();
            this.a.remove(str);
        }
        Iterator<a> it2 = this.a.iterator();
        while (it2.hasNext()) {
            it2.next().a();
        }
    }

    public synchronized void a(String str, String str2) {
        HashMap<String, b> map = this.a.get(str);
        if (map != null) {
            b bVar = map.get(a(str2));
            if (bVar != null) {
                bVar.a();
            }
            map.remove(a(str2));
            if (map.isEmpty()) {
                this.a.remove(str);
            }
        }
        Iterator<a> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a();
        }
    }

    public synchronized void b() {
        this.a.clear();
    }
}
