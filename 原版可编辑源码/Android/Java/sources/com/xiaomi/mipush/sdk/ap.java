package com.xiaomi.mipush.sdk;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import java.util.HashMap;

class ap extends Handler {
    final ao a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ap(ao aoVar, Looper looper) {
        super(looper);
        this.a = aoVar;
    }

    @Override
    public void dispatchMessage(Message message) {
        ao aoVar;
        au auVar;
        HashMap<String, String> mapA;
        ao aoVar2;
        au auVar2;
        if (message.what != 19) {
            return;
        }
        String str = (String) message.obj;
        int i = message.arg1;
        synchronized (af.class) {
            if (af.a(this.a.a).a(str)) {
                if (af.a(this.a.a).a(str) < 10) {
                    if (au.a.ordinal() == i && "syncing".equals(af.a(this.a.a).a(au.a))) {
                        aoVar2 = this.a;
                        auVar2 = au.a;
                    } else if (au.b.ordinal() == i && "syncing".equals(af.a(this.a.a).a(au.b))) {
                        aoVar2 = this.a;
                        auVar2 = au.b;
                    } else {
                        if (au.c.ordinal() == i && "syncing".equals(af.a(this.a.a).a(au.c))) {
                            aoVar = this.a;
                            auVar = au.c;
                            mapA = i.a(this.a.a, e.a);
                        } else if (au.d.ordinal() == i && "syncing".equals(af.a(this.a.a).a(au.d))) {
                            aoVar = this.a;
                            auVar = au.d;
                            mapA = i.a(this.a.a, e.b);
                        } else if (au.e.ordinal() == i && "syncing".equals(af.a(this.a.a).a(au.e))) {
                            aoVar = this.a;
                            auVar = au.e;
                            mapA = i.a(this.a.a, e.c);
                        } else {
                            if (au.f.ordinal() == i && "syncing".equals(af.a(this.a.a).a(au.f))) {
                                aoVar = this.a;
                                auVar = au.f;
                                mapA = i.a(this.a.a, e.d);
                            }
                            af.a(this.a.a).b(str);
                        }
                        aoVar.a(str, auVar, false, (HashMap<String, String>) mapA);
                        af.a(this.a.a).b(str);
                    }
                    aoVar2.a(str, auVar2, true, (HashMap<String, String>) null);
                    af.a(this.a.a).b(str);
                } else {
                    af.a(this.a.a).c(str);
                }
            }
        }
    }
}
