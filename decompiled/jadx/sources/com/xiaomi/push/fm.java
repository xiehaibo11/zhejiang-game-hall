package com.xiaomi.push;

import android.util.Log;
import com.xiaomi.push.fp;

/* JADX INFO: loaded from: classes4.dex */
class fm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final boolean f8160a = Log.isLoggable("BCompressed", 3);

    static byte[] a(fl flVar, byte[] bArr) {
        try {
            byte[] bArrA = fp.a.a(bArr);
            if (f8160a) {
                com.xiaomi.channel.commonutils.logger.b.m44a("BCompressed", "decompress " + bArr.length + " to " + bArrA.length + " for " + flVar);
                if (flVar.f384a == 1) {
                    com.xiaomi.channel.commonutils.logger.b.m44a("BCompressed", "decompress not support upStream");
                }
            }
            return bArrA;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m44a("BCompressed", "decompress error " + e);
            return bArr;
        }
    }
}
