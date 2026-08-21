package com.kwad.components.core.offline.init;

import android.content.Context;
import com.ksad.annotation.invoker.ForInvoker;
import com.kwad.components.core.offline.init.a.g;
import com.kwad.components.offline.api.OfflineHostProvider;
import com.kwad.sdk.utils.aw;
import java.util.concurrent.atomic.AtomicBoolean;

public final class b {
    private static final AtomicBoolean IP = new AtomicBoolean();

    @ForInvoker(methodId = "initOC")
    public static void ah(Context context) {
        com.kwad.components.offline.adLive.a.am(context);
        com.kwad.components.offline.obiwan.a.am(context);
        com.kwad.components.offline.tk.b.am(context);
    }

    public static void init(final Context context) {
        if (IP.get()) {
            return;
        }
        IP.set(true);
        OfflineHostProvider.get().init(context, new g());
        com.kwad.sdk.utils.g.execute(new aw() {
            @Override
            public final void doTask() {
                b.ah(context);
            }
        });
    }
}
