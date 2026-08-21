package com.loc;

import android.content.Context;
import android.os.Handler;

public final class fe extends ex<eg> {
    public fe(Context context, String str, Handler handler) {
        super(context, str, handler);
    }

    private static String a(eg egVar) {
        return egVar == null ? "" : egVar.a();
    }

    private static void a(eg egVar, long j) {
        if (egVar != null) {
            egVar.f = j;
        }
    }

    private static int b(eg egVar) {
        if (egVar == null) {
            return -113;
        }
        return egVar.c;
    }

    private static long c(eg egVar) {
        if (egVar == null) {
            return 0L;
        }
        return egVar.f;
    }

    @Override
    final void a(eg egVar, long j) {
        a(egVar, j);
    }

    @Override
    final long b() {
        return eu.e;
    }

    @Override
    public final String b(eg egVar) {
        return a(egVar);
    }

    @Override
    final int c(eg egVar) {
        return b(egVar);
    }

    @Override
    final long c() {
        return eu.f;
    }

    @Override
    final long d(eg egVar) {
        return c(egVar);
    }
}
