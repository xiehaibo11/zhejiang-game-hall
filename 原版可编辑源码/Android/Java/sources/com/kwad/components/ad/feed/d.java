package com.kwad.components.ad.feed;

import android.content.Context;
import android.os.Vibrator;
import com.kwad.sdk.utils.bj;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public final class d {
    private static com.kwad.sdk.core.g.d dO;
    private static Vibrator dP;
    private static List<a> dQ = new CopyOnWriteArrayList();

    public static class a {
        private b dS;
        private Context mContext;

        public a(b bVar, Context context) {
            this.dS = bVar;
            this.mContext = context;
        }
    }

    public interface b {
        boolean b(double d);
    }

    private static Vibrator F(Context context) {
        if (dP == null) {
            dP = (Vibrator) context.getSystemService("vibrator");
        }
        return dP;
    }

    private static void a(float f, Context context) {
        dO = new com.kwad.sdk.core.g.d(f);
        dQ = new CopyOnWriteArrayList();
        dO.a(new com.kwad.sdk.core.g.b() {
            @Override
            public final void a(double d) {
                if (d.dQ != null) {
                    Iterator it = d.dQ.iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            break;
                        }
                        a aVar = (a) it.next();
                        if (aVar.dS != null && aVar.dS.b(d)) {
                            bj.a(aVar.mContext, d.F(aVar.mContext));
                            break;
                        }
                    }
                    bj.a(new Runnable() {
                        @Override
                        public final void run() {
                            com.kwad.sdk.core.e.c.d("KSFeedShakeManager", "onShakeEvent openGate2");
                            d.dO.CG();
                        }
                    }, null, 500L);
                }
            }

            @Override
            public final void aT() {
            }
        });
        dO.e(f);
        dO.bg(context);
    }

    public static void a(float f, Context context, b bVar) {
        if (dO == null) {
            a(f, context);
        }
        dQ.add(new a(bVar, context));
    }

    public static void a(b bVar) {
        for (a aVar : dQ) {
            if (aVar.dS == bVar) {
                dQ.remove(aVar);
            }
        }
        com.kwad.sdk.core.e.c.d("KSFeedShakeManager", "sShakeItems size " + dQ.size());
    }
}
