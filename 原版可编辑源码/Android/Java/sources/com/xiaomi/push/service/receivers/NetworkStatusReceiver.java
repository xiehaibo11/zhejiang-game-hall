package com.xiaomi.push.service.receivers;

import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import com.xiaomi.mipush.sdk.COSPushHelper;
import com.xiaomi.mipush.sdk.FTOSPushHelper;
import com.xiaomi.mipush.sdk.HWPushHelper;
import com.xiaomi.mipush.sdk.MiPushClient;
import com.xiaomi.mipush.sdk.af;
import com.xiaomi.mipush.sdk.ao;
import com.xiaomi.mipush.sdk.au;
import com.xiaomi.mipush.sdk.b;
import com.xiaomi.push.bj;
import com.xiaomi.push.hb;
import com.xiaomi.push.o;
import com.xiaomi.push.service.ServiceClient;

public class NetworkStatusReceiver extends BroadcastReceiver {
    private static boolean a;
    private boolean b;

    public NetworkStatusReceiver() {
        this.b = false;
        this.b = true;
    }

    public NetworkStatusReceiver(Object obj) {
        this.b = false;
        a = true;
    }

    private void a(Context context) {
        if (!ao.a(context).a() && b.a(context).c() && !b.a(context).f()) {
            try {
                Intent intent = new Intent();
                intent.setComponent(new ComponentName(context, "com.xiaomi.push.service.XMPushService"));
                intent.setAction("com.xiaomi.push.network_status_changed");
                ServiceClient.getInstance(context).startServiceSafely(intent);
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }
        hb.a(context);
        if (bj.b(context) && ao.a(context).b()) {
            ao.a(context).c();
        }
        if (bj.b(context)) {
            if ("syncing".equals(af.a(context).a(au.a))) {
                MiPushClient.disablePush(context);
            }
            if ("syncing".equals(af.a(context).a(au.b))) {
                MiPushClient.enablePush(context);
            }
            if ("syncing".equals(af.a(context).a(au.c))) {
                MiPushClient.syncAssemblePushToken(context);
            }
            if ("syncing".equals(af.a(context).a(au.d))) {
                MiPushClient.syncAssembleFCMPushToken(context);
            }
            if ("syncing".equals(af.a(context).a(au.e))) {
                MiPushClient.syncAssembleCOSPushToken(context);
            }
            if ("syncing".equals(af.a(context).a(au.f))) {
                MiPushClient.syncAssembleFTOSPushToken(context);
            }
            if (HWPushHelper.needConnect() && HWPushHelper.shouldTryConnect(context)) {
                HWPushHelper.setConnectTime(context);
                HWPushHelper.registerHuaWeiAssemblePush(context);
            }
            COSPushHelper.doInNetworkChange(context);
            FTOSPushHelper.doInNetworkChange(context);
        }
    }

    public static boolean a() {
        return a;
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        if (this.b) {
            return;
        }
        o.a().post(new a(this, context));
    }
}
