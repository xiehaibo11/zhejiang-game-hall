package com.xiaomi.push;

import android.util.Log;
import com.xiaomi.push.fp;

class fm {
    private static final boolean a = Log.isLoggable("BCompressed", 3);

    static byte[] a(fl flVar, byte[] bArr) {
        try {
            byte[] bArrA = fp.a.a(bArr);
            if (a) {
                com.xiaomi.channel.commonutils.logger.b.a("BCompressed", "decompress " + bArr.length + " to " + bArrA.length + " for " + flVar);
                if (flVar.a == 1) {
                    com.xiaomi.channel.commonutils.logger.b.a("BCompressed", "decompress not support upStream");
                }
            }
            return bArrA;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("BCompressed", "decompress error " + e);
            return bArr;
        }
    }
}
