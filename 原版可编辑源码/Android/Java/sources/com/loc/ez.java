package com.loc;

import android.content.Context;
import android.os.Handler;

public final class ez extends ex<fa> {
    public ez(Context context, String str, Handler handler) {
        super(context, str, handler);
    }

    private static String a(fa faVar) {
        return faVar == null ? "" : faVar.b();
    }

    private static void a(fa faVar, long j) {
        if (faVar != null) {
            faVar.t = j;
        }
    }

    private static int b(fa faVar) {
        if (faVar == null) {
            return 99;
        }
        return faVar.s;
    }

    private static long c(fa faVar) {
        if (faVar == null) {
            return 0L;
        }
        return faVar.t;
    }

    @Override
    final void a(fa faVar, long j) {
        a(faVar, j);
    }

    @Override
    final long b() {
        return eu.g;
    }

    @Override
    public final String b(fa faVar) {
        return a(faVar);
    }

    @Override
    final int c(fa faVar) {
        return b(faVar);
    }

    @Override
    final long c() {
        return eu.h;
    }

    @Override
    final long d(fa faVar) {
        return c(faVar);
    }
}
