package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.Cif;
import com.xiaomi.push.bm;
import com.xiaomi.push.hj;
import com.xiaomi.push.hy;
import com.xiaomi.push.hz;
import com.xiaomi.push.ia;
import com.xiaomi.push.ie;
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

/* JADX INFO: loaded from: classes4.dex */
public class ai {
    protected static <T extends iu<T, ?>> Cif a(Context context, T t, hj hjVar) {
        return a(context, t, hjVar, !hjVar.equals(hj.Registration), context.getPackageName(), b.m85a(context).m86a());
    }

    protected static <T extends iu<T, ?>> Cif a(Context context, T t, hj hjVar, boolean z, String str, String str2) {
        return a(context, t, hjVar, z, str, str2, true);
    }

    protected static <T extends iu<T, ?>> Cif a(Context context, T t, hj hjVar, boolean z, String str, String str2, boolean z2) {
        String str3;
        byte[] bArrA = it.a(t);
        if (bArrA != null) {
            Cif cif = new Cif();
            if (z) {
                String strD = b.m85a(context).d();
                if (TextUtils.isEmpty(strD)) {
                    str3 = "regSecret is empty, return null";
                } else {
                    try {
                        bArrA = com.xiaomi.push.i.b(bm.m157a(strD), bArrA);
                    } catch (Exception unused) {
                        com.xiaomi.channel.commonutils.logger.b.d("encryption error. ");
                    }
                }
            }
            hy hyVar = new hy();
            hyVar.f567a = 5L;
            hyVar.f568a = "fakeid";
            cif.a(hyVar);
            cif.a(ByteBuffer.wrap(bArrA));
            cif.a(hjVar);
            cif.b(z2);
            cif.b(str);
            cif.a(z);
            cif.a(str2);
            return cif;
        }
        str3 = "invoke convertThriftObjectToBytes method, return null.";
        com.xiaomi.channel.commonutils.logger.b.m43a(str3);
        return null;
    }

    public static iu a(Context context, Cif cif) {
        byte[] bArrM484a;
        if (cif.m486b()) {
            byte[] bArrA = i.a(context, cif, e.ASSEMBLE_PUSH_FCM);
            if (bArrA == null) {
                bArrA = bm.m157a(b.m85a(context).d());
            }
            try {
                bArrM484a = com.xiaomi.push.i.a(bArrA, cif.m484a());
            } catch (Exception e) {
                throw new u("the aes decrypt failed.", e);
            }
        } else {
            bArrM484a = cif.m484a();
        }
        iu iuVarA = a(cif.a(), cif.f647b);
        if (iuVarA != null) {
            it.a(iuVarA, bArrM484a);
        }
        return iuVarA;
    }

    private static iu a(hj hjVar, boolean z) {
        switch (aj.f7992a[hjVar.ordinal()]) {
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

    protected static <T extends iu<T, ?>> Cif b(Context context, T t, hj hjVar, boolean z, String str, String str2) {
        return a(context, t, hjVar, z, str, str2, false);
    }
}
