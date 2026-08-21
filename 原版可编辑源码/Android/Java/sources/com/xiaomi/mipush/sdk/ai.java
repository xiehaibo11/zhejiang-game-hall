package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.bm;
import com.xiaomi.push.hj;
import com.xiaomi.push.hy;
import com.xiaomi.push.hz;
import com.xiaomi.push.ia;
import com.xiaomi.push.ie;
import com.xiaomi.push.if;
import com.xiaomi.push.ii;
import com.xiaomi.push.ik;
import com.xiaomi.push.il;
import com.xiaomi.push.im;
import com.xiaomi.push.io;
import com.xiaomi.push.iq;
import com.xiaomi.push.is;
import com.xiaomi.push.it;
import com.xiaomi.push.iu;
import java.nio.ByteBuffer;

public class ai {
    protected static <T extends iu<T, ?>> if a(Context context, T t, hj hjVar) {
        return a(context, t, hjVar, !hjVar.equals(hj.a), context.getPackageName(), b.a(context).a());
    }

    protected static <T extends iu<T, ?>> if a(Context context, T t, hj hjVar, boolean z, String str, String str2) {
        return a(context, t, hjVar, z, str, str2, true);
    }

    protected static <T extends iu<T, ?>> if a(Context context, T t, hj hjVar, boolean z, String str, String str2, boolean z2) {
        String str3;
        byte[] bArrA = it.a(t);
        if (bArrA != null) {
            if ifVar = new if();
            if (z) {
                String strD = b.a(context).d();
                if (TextUtils.isEmpty(strD)) {
                    str3 = "regSecret is empty, return null";
                } else {
                    try {
                        bArrA = com.xiaomi.push.i.b(bm.a(strD), bArrA);
                    } catch (Exception unused) {
                        com.xiaomi.channel.commonutils.logger.b.d("encryption error. ");
                    }
                }
            }
            hy hyVar = new hy();
            hyVar.a = 5L;
            hyVar.a = "fakeid";
            ifVar.a(hyVar);
            ifVar.a(ByteBuffer.wrap(bArrA));
            ifVar.a(hjVar);
            ifVar.b(z2);
            ifVar.b(str);
            ifVar.a(z);
            ifVar.a(str2);
            return ifVar;
        }
        str3 = "invoke convertThriftObjectToBytes method, return null.";
        com.xiaomi.channel.commonutils.logger.b.a(str3);
        return null;
    }

    public static iu a(Context context, if ifVar) {
        byte[] bArrA;
        if (ifVar.b()) {
            byte[] bArrA2 = i.a(context, ifVar, e.b);
            if (bArrA2 == null) {
                bArrA2 = bm.a(b.a(context).d());
            }
            try {
                bArrA = com.xiaomi.push.i.a(bArrA2, ifVar.a());
            } catch (Exception e) {
                throw new u("the aes decrypt failed.", e);
            }
        } else {
            bArrA = ifVar.a();
        }
        iu iuVarA = a(ifVar.a(), ifVar.b);
        if (iuVarA != null) {
            it.a(iuVarA, bArrA);
        }
        return iuVarA;
    }

    private static iu a(hj hjVar, boolean z) {
        switch (aj.a[hjVar.ordinal()]) {
            case 1:
                return new ik();
            case 2:
                return new iq();
            case 3:
                return new io();
            case 4:
                return new is();
            case 5:
                return new im();
            case 6:
                return new hz();
            case 7:
                return new ie();
            case 8:
                return new il();
            case 9:
                if (z) {
                    return new ii();
                }
                ia iaVar = new ia();
                iaVar.a(true);
                return iaVar;
            case 10:
                return new ie();
            default:
                return null;
        }
    }

    protected static <T extends iu<T, ?>> if b(Context context, T t, hj hjVar, boolean z, String str, String str2) {
        return a(context, t, hjVar, z, str, str2, false);
    }
}
