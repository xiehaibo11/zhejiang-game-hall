package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.l;
import com.xiaomi.push.bk;

public class ak {
    public static AbstractPushManager a(Context context, e eVar) {
        return b(context, eVar);
    }

    private static AbstractPushManager b(Context context, e eVar) {
        l.a aVarA = l.a(eVar);
        if (aVarA == null || TextUtils.isEmpty(aVarA.a) || TextUtils.isEmpty(aVarA.b)) {
            return null;
        }
        return (AbstractPushManager) bk.a(aVarA.a, aVarA.b, context);
    }
}
