package com.kwad.sdk.utils.a;

import android.content.Context;
import android.util.Log;
import com.kwad.sdk.utils.a.c;
import com.kwad.sdk.utils.q;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public final class e {
    static ExecutorService aLu = Executors.newSingleThreadExecutor();
    static boolean aGN = KB();

    private static boolean KB() {
        d.setExecutor(aLu);
        d.a(new c.d() {
            @Override
            public final void a(String str, Exception exc) {
                com.kwad.sdk.core.e.c.w("Ks_UnionKv", "name:" + str + " msg:" + Log.getStackTraceString(exc));
            }

            @Override
            public final void e(String str, Throwable th) {
                com.kwad.sdk.core.e.c.e("Ks_UnionKv", "name:" + str + " msg:" + Log.getStackTraceString(th));
            }

            @Override
            public final void i(String str, String str2) {
                com.kwad.sdk.core.e.c.i("Ks_UnionKv", "name:" + str + " msg:" + str2);
            }
        });
        aGN = true;
        return true;
    }

    public static c at(Context context, String str) {
        if (!aGN) {
            KB();
        }
        return new c.a(q.K(context, "ks_union"), str).Kz();
    }
}
