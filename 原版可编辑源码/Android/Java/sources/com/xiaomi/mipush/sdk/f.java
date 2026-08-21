package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.ho;
import com.xiaomi.push.service.ba;
import java.util.HashMap;
import java.util.Map;

public class f implements AbstractPushManager {
    private static volatile f a;
    private Context a;
    private PushConfiguration a;
    private boolean a = false;
    private Map<e, AbstractPushManager> a = new HashMap();

    private f(Context context) {
        this.a = context.getApplicationContext();
    }

    public static f a(Context context) {
        if (a == null) {
            synchronized (f.class) {
                if (a == null) {
                    a = new f(context);
                }
            }
        }
        return a;
    }

    private void a() {
        AbstractPushManager abstractPushManagerA;
        AbstractPushManager abstractPushManagerA2;
        AbstractPushManager abstractPushManagerA3;
        AbstractPushManager abstractPushManagerA4;
        PushConfiguration pushConfiguration = this.a;
        if (pushConfiguration != null) {
            if (pushConfiguration.getOpenHmsPush()) {
                StringBuilder sb = new StringBuilder();
                sb.append("ASSEMBLE_PUSH : ");
                sb.append(" HW user switch : " + this.a.getOpenHmsPush() + " HW online switch : " + i.a(this.a, e.a) + " HW isSupport : " + ag.a.equals(n.a(this.a)));
                com.xiaomi.channel.commonutils.logger.b.a(sb.toString());
            }
            if (this.a.getOpenHmsPush() && i.a(this.a, e.a) && ag.a.equals(n.a(this.a))) {
                if (!a(e.a)) {
                    a(e.a, ak.a(this.a, e.a));
                }
                com.xiaomi.channel.commonutils.logger.b.c("hw manager add to list");
            } else if (a(e.a) && (abstractPushManagerA = a(e.a)) != null) {
                a(e.a);
                abstractPushManagerA.unregister();
            }
            if (this.a.getOpenFCMPush()) {
                StringBuilder sb2 = new StringBuilder();
                sb2.append("ASSEMBLE_PUSH : ");
                sb2.append(" FCM user switch : " + this.a.getOpenFCMPush() + " FCM online switch : " + i.a(this.a, e.b) + " FCM isSupport : " + n.a(this.a));
                com.xiaomi.channel.commonutils.logger.b.a(sb2.toString());
            }
            if (this.a.getOpenFCMPush() && i.a(this.a, e.b) && n.a(this.a)) {
                if (!a(e.b)) {
                    a(e.b, ak.a(this.a, e.b));
                }
                com.xiaomi.channel.commonutils.logger.b.c("fcm manager add to list");
            } else if (a(e.b) && (abstractPushManagerA2 = a(e.b)) != null) {
                a(e.b);
                abstractPushManagerA2.unregister();
            }
            if (this.a.getOpenCOSPush()) {
                StringBuilder sb3 = new StringBuilder();
                sb3.append("ASSEMBLE_PUSH : ");
                sb3.append(" COS user switch : " + this.a.getOpenCOSPush() + " COS online switch : " + i.a(this.a, e.c) + " COS isSupport : " + n.b(this.a));
                com.xiaomi.channel.commonutils.logger.b.a(sb3.toString());
            }
            if (this.a.getOpenCOSPush() && i.a(this.a, e.c) && n.b(this.a)) {
                a(e.c, ak.a(this.a, e.c));
            } else if (a(e.c) && (abstractPushManagerA3 = a(e.c)) != null) {
                a(e.c);
                abstractPushManagerA3.unregister();
            }
            if (this.a.getOpenFTOSPush() && i.a(this.a, e.d) && n.c(this.a)) {
                a(e.d, ak.a(this.a, e.d));
            } else {
                if (!a(e.d) || (abstractPushManagerA4 = a(e.d)) == null) {
                    return;
                }
                a(e.d);
                abstractPushManagerA4.unregister();
            }
        }
    }

    public AbstractPushManager a(e eVar) {
        return this.a.get(eVar);
    }

    public void a(PushConfiguration pushConfiguration) {
        this.a = pushConfiguration;
        this.a = ba.a(this.a).a(ho.ao.a(), true);
        if (this.a.getOpenHmsPush() || this.a.getOpenFCMPush() || this.a.getOpenCOSPush() || this.a.getOpenFTOSPush()) {
            ba.a(this.a).a(new g(this, 101, "assemblePush"));
        }
    }

    public void a(e eVar) {
        this.a.remove(eVar);
    }

    public void a(e eVar, AbstractPushManager abstractPushManager) {
        if (abstractPushManager != null) {
            if (this.a.containsKey(eVar)) {
                this.a.remove(eVar);
            }
            this.a.put(eVar, abstractPushManager);
        }
    }

    public boolean a(e eVar) {
        return this.a.containsKey(eVar);
    }

    public boolean b(e eVar) {
        int i = h.a[eVar.ordinal()];
        boolean openCOSPush = false;
        if (i == 1) {
            PushConfiguration pushConfiguration = this.a;
            if (pushConfiguration != null) {
                return pushConfiguration.getOpenHmsPush();
            }
            return false;
        }
        if (i == 2) {
            PushConfiguration pushConfiguration2 = this.a;
            if (pushConfiguration2 != null) {
                return pushConfiguration2.getOpenFCMPush();
            }
            return false;
        }
        if (i == 3) {
            PushConfiguration pushConfiguration3 = this.a;
            if (pushConfiguration3 != null) {
                openCOSPush = pushConfiguration3.getOpenCOSPush();
            }
        } else if (i != 4) {
            return false;
        }
        PushConfiguration pushConfiguration4 = this.a;
        return pushConfiguration4 != null ? pushConfiguration4.getOpenFTOSPush() : openCOSPush;
    }

    @Override
    public void register() {
        com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH : assemble push register");
        if (this.a.size() <= 0) {
            a();
        }
        if (this.a.size() > 0) {
            for (AbstractPushManager abstractPushManager : this.a.values()) {
                if (abstractPushManager != null) {
                    abstractPushManager.register();
                }
            }
            i.a(this.a);
        }
    }

    @Override
    public void unregister() {
        com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH : assemble push unregister");
        for (AbstractPushManager abstractPushManager : this.a.values()) {
            if (abstractPushManager != null) {
                abstractPushManager.unregister();
            }
        }
        this.a.clear();
    }
}
