package com.bytedance.pangle.receiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.bytedance.pangle.d.e;

public final class a extends BroadcastReceiver {
    @Override
    public final void onReceive(final Context context, final Intent intent) {
        if (c.a().c.contains(Integer.valueOf(hashCode()))) {
            c.a().a(context, intent);
        } else {
            e.b(new Runnable() {
                @Override
                public final void run() {
                    c.a().a(context, intent);
                }
            });
        }
    }
}
