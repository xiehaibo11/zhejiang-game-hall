package com.igexin.push.core;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.bykv.vk.openvk.live.TTLiveConstants;
import com.igexin.assist.sdk.AssistPushManager;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.sdk.PushConsts;
import com.xiaomi.mipush.sdk.Constants;

public class b extends Handler {
    private static String a = b.class.getName();

    public b(Looper looper) {
        super(looper);
    }

    private void a() {
        if (d.n || d.F <= com.heytap.mcssdk.constant.a.q) {
            return;
        }
        int iRandom = (int) ((Math.random() * 100.0d) + 150.0d);
        com.igexin.b.a.c.b.a(a + "|userPresent, reConnectDelayTime = " + iRandom, new Object[0]);
        d.F = (long) iRandom;
        com.igexin.push.f.b.f.i().j();
    }

    private void a(Intent intent) throws Throwable {
        String str;
        String stringExtra = intent.getStringExtra("action");
        com.igexin.b.a.c.b.a(a + "|processIntentMsgService action：" + stringExtra, new Object[0]);
        if (stringExtra.equals(PushConsts.ACTION_SERVICE_INITIALIZE)) {
            com.igexin.push.core.a.e.a().a(intent);
            return;
        }
        if (stringExtra.equals(PushConsts.ACTION_SERVICE_ONRESUME)) {
            com.igexin.b.a.c.b.a(a + "|handle onresume ~~~", new Object[0]);
            com.igexin.push.core.a.e.a().c();
            return;
        }
        if (stringExtra.equals(PushConsts.ACTION_SERVICE_INITIALIZE_SLAVE)) {
            com.igexin.push.core.a.e.a().b(intent);
            AssistPushManager.getInstance().turnOnPush(d.g);
            return;
        }
        if (stringExtra.equals(PushConsts.ACTION_BROADCAST_PUSHMANAGER)) {
            String stringExtra2 = intent.getStringExtra(com.tkay.expressad.d.a.b.bH);
            if (TextUtils.isEmpty(d.f) || d.f.equals(stringExtra2)) {
                com.igexin.push.core.a.e.a().a(intent.getBundleExtra(TTLiveConstants.BUNDLE_KEY));
                return;
            }
            com.igexin.b.a.c.b.a("safeCode not match!!" + d.f + Constants.ACCEPT_TIME_SEPARATOR_SP + stringExtra2, new Object[0]);
            com.igexin.b.a.c.a.f.a().a("safeCode not match!!" + d.f + Constants.ACCEPT_TIME_SEPARATOR_SP + stringExtra2);
            return;
        }
        if (stringExtra.equals(PushConsts.ACTION_BROADCAST_USER_PRESENT)) {
            a();
            return;
        }
        if (!stringExtra.equals(PushConsts.ACTION_BROADCAST_NOTIFICATION_CLICK)) {
            if (stringExtra.equals(PushConsts.ACTION_BROADCAST_NOTIFICATION_DELETE)) {
                PushTaskBean pushTaskBean = new PushTaskBean();
                pushTaskBean.setAppid(intent.getStringExtra("appid"));
                pushTaskBean.setMessageId(intent.getStringExtra("messageid"));
                pushTaskBean.setTaskId(intent.getStringExtra("taskid"));
                pushTaskBean.setId(intent.getStringExtra("id"));
                pushTaskBean.setAppKey(intent.getStringExtra("appkey"));
                int i = Integer.parseInt(intent.getStringExtra("feedbackid")) + 30040;
                pushTaskBean.setCurrentActionid(i);
                String str2 = "notifyStyle:" + intent.getStringExtra("notifyStyle");
                com.igexin.push.core.a.e.a().a(pushTaskBean, i + "", str2);
                return;
            }
            return;
        }
        Intent intent2 = (Intent) intent.getParcelableExtra("broadcast_intent");
        if (intent2 == null) {
            return;
        }
        String action = intent2.getAction();
        com.igexin.b.a.c.b.a(a + "|intent action = " + action, new Object[0]);
        if (!TextUtils.isEmpty(action) && action.startsWith("pre_doaction.")) {
            str = CoreConsts.b;
        } else {
            if (TextUtils.isEmpty(action) || !action.startsWith("pre_burypoint.")) {
                d.g.sendBroadcast(intent2);
                return;
            }
            com.igexin.b.a.c.b.a(a + "|sendBroadCast，current action = " + CoreConsts.a, new Object[0]);
            str = CoreConsts.a;
        }
        intent2.setAction(str);
        com.igexin.push.core.a.e.a().c(intent2);
    }

    @Override
    public void handleMessage(Message message) {
        try {
            if (message.what == CoreConsts.h) {
                w.a().d();
                return;
            }
            if (message.obj == null) {
                return;
            }
            if (message.what == CoreConsts.c) {
                Intent intent = (Intent) message.obj;
                if (intent.hasExtra("action")) {
                    a(intent);
                    return;
                }
                return;
            }
            if (message.what == CoreConsts.d || message.what == CoreConsts.e) {
                com.igexin.push.core.a.e eVarA = com.igexin.push.core.a.e.a();
                Intent intent2 = (Intent) message.obj;
                eVarA.c(intent2);
                return;
            }
            if (message.what == CoreConsts.f) {
                Bundle bundle = (Bundle) message.obj;
                w.a().b(bundle.getString("taskid"), bundle.getString("messageid"));
                return;
            }
            if (message.what == CoreConsts.g) {
                Bundle bundle2 = (Bundle) message.obj;
                String string = bundle2.getString("taskid");
                String string2 = bundle2.getString("messageid");
                String string3 = bundle2.getString("actionid");
                com.igexin.b.a.c.b.a(a + "|hand execute_action taskid = " + string + ", actionid = " + string3, new Object[0]);
                w.a().b(string, string2, string3);
                return;
            }
            if (message.what == CoreConsts.i) {
                com.igexin.push.core.b.i.a().c((String) message.obj);
                if (d.n) {
                    com.igexin.push.core.a.e.a().f();
                    return;
                }
                return;
            }
            if (message.what == CoreConsts.j && com.igexin.push.config.j.u && !"false".equals(d.B)) {
                com.igexin.push.d.c.m mVar = new com.igexin.push.d.c.m();
                mVar.d();
                mVar.e = message.obj;
                mVar.f = message.getData().getByteArray("payload");
                new com.igexin.push.core.a.i().a(mVar);
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(a + "|" + th.toString(), new Object[0]);
        }
    }
}
