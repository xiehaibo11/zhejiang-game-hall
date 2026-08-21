package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.Cif;
import com.xiaomi.push.hj;
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

/* JADX INFO: loaded from: classes4.dex */
public class ce {
    public static iu a(Context context, Cif cif) {
        if (cif.m486b()) {
            return null;
        }
        byte[] bArrM484a = cif.m484a();
        iu iuVarA = a(cif.a(), cif.f647b);
        if (iuVarA != null) {
            it.a(iuVarA, bArrM484a);
        }
        return iuVarA;
    }

    private static iu a(hj hjVar, boolean z) {
        switch (cf.f8357a[hjVar.ordinal()]) {
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
}
