package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.ho;
import com.xiaomi.push.service.ba;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class f implements AbstractPushManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile f f8008a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f92a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private PushConfiguration f93a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f95a = false;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Map<e, AbstractPushManager> f94a = new HashMap();

    private f(Context context) {
        this.f92a = context.getApplicationContext();
    }

    public static f a(Context context) {
        if (f8008a == null) {
            synchronized (f.class) {
                if (f8008a == null) {
                    f8008a = new f(context);
                }
            }
        }
        return f8008a;
    }

    private void a() {
        AbstractPushManager abstractPushManagerA;
        AbstractPushManager abstractPushManagerA2;
        AbstractPushManager abstractPushManagerA3;
        AbstractPushManager abstractPushManagerA4;
        PushConfiguration pushConfiguration = this.f93a;
        if (pushConfiguration != null) {
            if (pushConfiguration.getOpenHmsPush()) {
                StringBuilder sb = new StringBuilder();
                sb.append("ASSEMBLE_PUSH : ");
                sb.append(" HW user switch : " + this.f93a.getOpenHmsPush() + " HW online switch : " + i.m109a(this.f92a, e.ASSEMBLE_PUSH_HUAWEI) + " HW isSupport : " + ag.HUAWEI.equals(n.a(this.f92a)));
                com.xiaomi.channel.commonutils.logger.b.m43a(sb.toString());
            }
            if (this.f93a.getOpenHmsPush() && i.m109a(this.f92a, e.ASSEMBLE_PUSH_HUAWEI) && ag.HUAWEI.equals(n.a(this.f92a))) {
                if (!m103a(e.ASSEMBLE_PUSH_HUAWEI)) {
                    a(e.ASSEMBLE_PUSH_HUAWEI, ak.a(this.f92a, e.ASSEMBLE_PUSH_HUAWEI));
                }
                com.xiaomi.channel.commonutils.logger.b.c("hw manager add to list");
            } else if (m103a(e.ASSEMBLE_PUSH_HUAWEI) && (abstractPushManagerA = a(e.ASSEMBLE_PUSH_HUAWEI)) != null) {
                m102a(e.ASSEMBLE_PUSH_HUAWEI);
                abstractPushManagerA.unregister();
            }
            if (this.f93a.getOpenFCMPush()) {
                StringBuilder sb2 = new StringBuilder();
                sb2.append("ASSEMBLE_PUSH : ");
                sb2.append(" FCM user switch : " + this.f93a.getOpenFCMPush() + " FCM online switch : " + i.m109a(this.f92a, e.ASSEMBLE_PUSH_FCM) + " FCM isSupport : " + n.m113a(this.f92a));
                com.xiaomi.channel.commonutils.logger.b.m43a(sb2.toString());
            }
            if (this.f93a.getOpenFCMPush() && i.m109a(this.f92a, e.ASSEMBLE_PUSH_FCM) && n.m113a(this.f92a)) {
                if (!m103a(e.ASSEMBLE_PUSH_FCM)) {
                    a(e.ASSEMBLE_PUSH_FCM, ak.a(this.f92a, e.ASSEMBLE_PUSH_FCM));
                }
                com.xiaomi.channel.commonutils.logger.b.c("fcm manager add to list");
            } else if (m103a(e.ASSEMBLE_PUSH_FCM) && (abstractPushManagerA2 = a(e.ASSEMBLE_PUSH_FCM)) != null) {
                m102a(e.ASSEMBLE_PUSH_FCM);
                abstractPushManagerA2.unregister();
            }
            if (this.f93a.getOpenCOSPush()) {
                StringBuilder sb3 = new StringBuilder();
                sb3.append("ASSEMBLE_PUSH : ");
                sb3.append(" COS user switch : " + this.f93a.getOpenCOSPush() + " COS online switch : " + i.m109a(this.f92a, e.ASSEMBLE_PUSH_COS) + " COS isSupport : " + n.b(this.f92a));
                com.xiaomi.channel.commonutils.logger.b.m43a(sb3.toString());
            }
            if (this.f93a.getOpenCOSPush() && i.m109a(this.f92a, e.ASSEMBLE_PUSH_COS) && n.b(this.f92a)) {
                a(e.ASSEMBLE_PUSH_COS, ak.a(this.f92a, e.ASSEMBLE_PUSH_COS));
            } else if (m103a(e.ASSEMBLE_PUSH_COS) && (abstractPushManagerA3 = a(e.ASSEMBLE_PUSH_COS)) != null) {
                m102a(e.ASSEMBLE_PUSH_COS);
                abstractPushManagerA3.unregister();
            }
            if (this.f93a.getOpenFTOSPush() && i.m109a(this.f92a, e.ASSEMBLE_PUSH_FTOS) && n.c(this.f92a)) {
                a(e.ASSEMBLE_PUSH_FTOS, ak.a(this.f92a, e.ASSEMBLE_PUSH_FTOS));
            } else {
                if (!m103a(e.ASSEMBLE_PUSH_FTOS) || (abstractPushManagerA4 = a(e.ASSEMBLE_PUSH_FTOS)) == null) {
                    return;
                }
                m102a(e.ASSEMBLE_PUSH_FTOS);
                abstractPushManagerA4.unregister();
            }
        }
    }

    public AbstractPushManager a(e eVar) {
        return this.f94a.get(eVar);
    }

    public void a(PushConfiguration pushConfiguration) {
        this.f93a = pushConfiguration;
        this.f95a = ba.a(this.f92a).a(ho.AggregatePushSwitch.a(), true);
        if (this.f93a.getOpenHmsPush() || this.f93a.getOpenFCMPush() || this.f93a.getOpenCOSPush() || this.f93a.getOpenFTOSPush()) {
            ba.a(this.f92a).a(new g(this, 101, "assemblePush"));
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m102a(e eVar) {
        this.f94a.remove(eVar);
    }

    public void a(e eVar, AbstractPushManager abstractPushManager) {
        if (abstractPushManager != null) {
            if (this.f94a.containsKey(eVar)) {
                this.f94a.remove(eVar);
            }
            this.f94a.put(eVar, abstractPushManager);
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m103a(e eVar) {
        return this.f94a.containsKey(eVar);
    }

    public boolean b(e eVar) {
        int i = h.f8010a[eVar.ordinal()];
        boolean openCOSPush = false;
        if (i == 1) {
            PushConfiguration pushConfiguration = this.f93a;
            if (pushConfiguration != null) {
                return pushConfiguration.getOpenHmsPush();
            }
            return false;
        }
        if (i == 2) {
            PushConfiguration pushConfiguration2 = this.f93a;
            if (pushConfiguration2 != null) {
                return pushConfiguration2.getOpenFCMPush();
            }
            return false;
        }
        if (i == 3) {
            PushConfiguration pushConfiguration3 = this.f93a;
            if (pushConfiguration3 != null) {
                openCOSPush = pushConfiguration3.getOpenCOSPush();
            }
        } else if (i != 4) {
            return false;
        }
        PushConfiguration pushConfiguration4 = this.f93a;
        return pushConfiguration4 != null ? pushConfiguration4.getOpenFTOSPush() : openCOSPush;
    }

    @Override // com.xiaomi.mipush.sdk.AbstractPushManager
    public void register() {
        com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : assemble push register");
        if (this.f94a.size() <= 0) {
            a();
        }
        if (this.f94a.size() > 0) {
            for (AbstractPushManager abstractPushManager : this.f94a.values()) {
                if (abstractPushManager != null) {
                    abstractPushManager.register();
                }
            }
            i.m105a(this.f92a);
        }
    }

    @Override // com.xiaomi.mipush.sdk.AbstractPushManager
    public void unregister() {
        com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : assemble push unregister");
        for (AbstractPushManager abstractPushManager : this.f94a.values()) {
            if (abstractPushManager != null) {
                abstractPushManager.unregister();
            }
        }
        this.f94a.clear();
    }
}
