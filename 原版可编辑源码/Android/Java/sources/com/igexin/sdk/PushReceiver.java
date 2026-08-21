package com.igexin.sdk;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.bykv.vk.openvk.live.TTLiveConstants;
import com.igexin.push.core.x;

public class PushReceiver extends BroadcastReceiver {
    private static final String a = PushReceiver.class.getName();

    @Override
    public void onReceive(Context context, Intent intent) {
        if (intent == null || intent.getAction() == null) {
            return;
        }
        String action = intent.getAction();
        try {
            if (PushConsts.ACTION_BROADCAST_PUSHMANAGER.equals(action)) {
                if (intent.getExtras() == null) {
                    return;
                }
                Intent intent2 = new Intent(context.getApplicationContext(), (Class<?>) com.igexin.push.core.a.e.a().a(context));
                intent2.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
                intent2.putExtra(TTLiveConstants.BUNDLE_KEY, intent.getExtras());
                x.a().a(context, intent2);
            } else if (PushConsts.ACTION_BROADCAST_TO_BOOT.equals(action) || action.equals("android.intent.action.ACTION_POWER_CONNECTED") || action.equals("android.intent.action.ACTION_POWER_DISCONNECTED") || action.equals("android.intent.action.MEDIA_MOUNTED")) {
                x.a().a(context, new Intent(context.getApplicationContext(), (Class<?>) com.igexin.push.core.a.e.a().a(context)));
            } else if ("android.net.conn.CONNECTIVITY_CHANGE".equals(action) || PushConsts.ACTION_BROADCAST_USER_PRESENT.equals(action)) {
                Intent intent3 = new Intent(context.getApplicationContext(), (Class<?>) com.igexin.push.core.a.e.a().a(context));
                intent3.putExtra("action", action);
                x.a().a(context, intent3);
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(a + "|" + th.toString(), new Object[0]);
        }
    }
}
