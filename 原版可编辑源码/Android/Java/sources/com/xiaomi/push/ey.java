package com.xiaomi.push;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.MiPushClient;

public enum ey {
    a(MiPushClient.COMMAND_REGISTER),
    b(MiPushClient.COMMAND_UNREGISTER),
    c(MiPushClient.COMMAND_SET_ALIAS),
    d(MiPushClient.COMMAND_UNSET_ALIAS),
    e(MiPushClient.COMMAND_SET_ACCOUNT),
    f(MiPushClient.COMMAND_UNSET_ACCOUNT),
    g(MiPushClient.COMMAND_SUBSCRIBE_TOPIC),
    h(MiPushClient.COMMAND_UNSUBSCRIBE_TOPIC),
    i(MiPushClient.COMMAND_SET_ACCEPT_TIME),
    j("check-vdeviceid");

    public final String a;

    ey(String str) {
        this.a = str;
    }

    public static int a(String str) {
        int iA = -1;
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        for (ey eyVar : values()) {
            if (eyVar.a.equals(str)) {
                iA = en.a(eyVar);
            }
        }
        return iA;
    }
}
