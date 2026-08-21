package com.xiaomi.mipush.sdk;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
class ap extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ao f7998a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ap(ao aoVar, Looper looper) {
        super(looper);
        this.f7998a = aoVar;
    }

    @Override // android.os.Handler
    public void dispatchMessage(Message message) {
        ao aoVar;
        au auVar;
        HashMap<String, String> mapM104a;
        ao aoVar2;
        au auVar2;
        if (message.what != 19) {
            return;
        }
        String str = (String) message.obj;
        int i = message.arg1;
        synchronized (af.class) {
            if (af.a(this.f7998a.f70a).m65a(str)) {
                if (af.a(this.f7998a.f70a).a(str) < 10) {
                    if (au.DISABLE_PUSH.ordinal() == i && "syncing".equals(af.a(this.f7998a.f70a).a(au.DISABLE_PUSH))) {
                        aoVar2 = this.f7998a;
                        auVar2 = au.DISABLE_PUSH;
                    } else if (au.ENABLE_PUSH.ordinal() == i && "syncing".equals(af.a(this.f7998a.f70a).a(au.ENABLE_PUSH))) {
                        aoVar2 = this.f7998a;
                        auVar2 = au.ENABLE_PUSH;
                    } else {
                        if (au.UPLOAD_HUAWEI_TOKEN.ordinal() == i && "syncing".equals(af.a(this.f7998a.f70a).a(au.UPLOAD_HUAWEI_TOKEN))) {
                            aoVar = this.f7998a;
                            auVar = au.UPLOAD_HUAWEI_TOKEN;
                            mapM104a = i.m104a(this.f7998a.f70a, e.ASSEMBLE_PUSH_HUAWEI);
                        } else if (au.UPLOAD_FCM_TOKEN.ordinal() == i && "syncing".equals(af.a(this.f7998a.f70a).a(au.UPLOAD_FCM_TOKEN))) {
                            aoVar = this.f7998a;
                            auVar = au.UPLOAD_FCM_TOKEN;
                            mapM104a = i.m104a(this.f7998a.f70a, e.ASSEMBLE_PUSH_FCM);
                        } else if (au.UPLOAD_COS_TOKEN.ordinal() == i && "syncing".equals(af.a(this.f7998a.f70a).a(au.UPLOAD_COS_TOKEN))) {
                            aoVar = this.f7998a;
                            auVar = au.UPLOAD_COS_TOKEN;
                            mapM104a = i.m104a(this.f7998a.f70a, e.ASSEMBLE_PUSH_COS);
                        } else {
                            if (au.UPLOAD_FTOS_TOKEN.ordinal() == i && "syncing".equals(af.a(this.f7998a.f70a).a(au.UPLOAD_FTOS_TOKEN))) {
                                aoVar = this.f7998a;
                                auVar = au.UPLOAD_FTOS_TOKEN;
                                mapM104a = i.m104a(this.f7998a.f70a, e.ASSEMBLE_PUSH_FTOS);
                            }
                            af.a(this.f7998a.f70a).b(str);
                        }
                        aoVar.a(str, auVar, false, (HashMap<String, String>) mapM104a);
                        af.a(this.f7998a.f70a).b(str);
                    }
                    aoVar2.a(str, auVar2, true, (HashMap<String, String>) null);
                    af.a(this.f7998a.f70a).b(str);
                } else {
                    af.a(this.f7998a.f70a).c(str);
                }
            }
        }
    }
}
