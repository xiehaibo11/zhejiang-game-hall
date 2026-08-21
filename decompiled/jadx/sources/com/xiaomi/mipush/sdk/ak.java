package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.l;
import com.xiaomi.push.bk;

/* JADX INFO: loaded from: classes4.dex */
public class ak {
    public static AbstractPushManager a(Context context, e eVar) {
        return b(context, eVar);
    }

    private static AbstractPushManager b(Context context, e eVar) {
        l.a aVarM111a = l.m111a(eVar);
        if (aVarM111a == null || TextUtils.isEmpty(aVarM111a.f8015a) || TextUtils.isEmpty(aVarM111a.b)) {
            return null;
        }
        return (AbstractPushManager) bk.a(aVarM111a.f8015a, aVarM111a.b, context);
    }
}
