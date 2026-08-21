package com.bytedance.pangle.receiver;

import android.content.Context;
import android.content.Intent;

public abstract class PluginBroadcastReceiver {
    public abstract void onReceive(Context context, Intent intent);
}
