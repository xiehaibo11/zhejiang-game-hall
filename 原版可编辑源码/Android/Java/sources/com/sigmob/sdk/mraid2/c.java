package com.sigmob.sdk.mraid2;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.mraid2.b;
import com.sigmob.sdk.mraid2.e;
import com.sigmob.windad.WindAdError;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

public class c {
    private final FrameLayout a;
    private a c;
    private e d;
    private LinearLayout e;
    private i f;
    private b g;
    private List<BaseAdUnit> i;
    private com.sigmob.sdk.base.common.e j;
    private boolean b = false;
    private List<e> h = new ArrayList();
    private e.b k = new e.b() {
        @Override
        public LinearLayout a(e eVar, int i) {
            if (c.this.e == null) {
                c.this.e = new LinearLayout(c.this.f());
            }
            if (c.this.f == null) {
                if (i == 1) {
                    c.this.f = new g(c.this.f());
                    c.this.e.setOrientation(0);
                } else {
                    c.this.f = new l(c.this.f());
                    c.this.e.setOrientation(1);
                }
                c.this.f.setPageChangedListener(new b.c() {
                    @Override
                    public void a(e eVar2, int i2, int i3) {
                        if (eVar2 == null || eVar2.getMraidBridge() == null) {
                            return;
                        }
                        eVar2.getMraidBridge().a(i2, i3);
                    }
                });
                c.this.f.getView().addView(c.this.e, new ViewGroup.LayoutParams(-1, -1));
                c.this.a.addView(c.this.f.getView(), 0, new ViewGroup.LayoutParams(-1, -1));
            }
            if (eVar != null && eVar.getScrollTouchListener() == null) {
                eVar.setScrollTouchListener(new e.c() {
                    @Override
                    public void a(e eVar2, JSONObject jSONObject) {
                        int iOptInt = jSONObject.optInt("x");
                        int iOptInt2 = jSONObject.optInt("y");
                        if (c.this.f != null) {
                            c.this.f.a(eVar2, Dips.asIntPixels(iOptInt, c.this.f()), Dips.asIntPixels(iOptInt2, c.this.f()));
                        }
                    }

                    @Override
                    public void a(JSONObject jSONObject) {
                        int iOptInt = jSONObject.optInt("x");
                        int iOptInt2 = jSONObject.optInt("y");
                        if (c.this.f != null) {
                            c.this.f.a(Dips.asIntPixels(iOptInt, c.this.f()), Dips.asIntPixels(iOptInt2, c.this.f()));
                        }
                    }

                    @Override
                    public void b(JSONObject jSONObject) {
                        int iOptInt = jSONObject.optInt("x");
                        int iOptInt2 = jSONObject.optInt("y");
                        if (c.this.f != null) {
                            c.this.f.b(Dips.asIntPixels(iOptInt, c.this.f()), Dips.asIntPixels(iOptInt2, c.this.f()));
                        }
                    }
                });
            }
            return c.this.e;
        }

        @Override
        public e a(e eVar, JSONObject jSONObject) {
            c cVar = c.this;
            e eVarA = cVar.a(cVar.f(), eVar, jSONObject);
            c.this.h.add(eVarA);
            return eVarA;
        }

        @Override
        public void a(e eVar) {
            if (c.this.c != null) {
                c.this.c.b();
            }
            if (c.this.h == null || c.this.h.size() <= 0) {
                return;
            }
            for (int i = 0; i < c.this.h.size(); i++) {
                ((e) c.this.h.get(i)).destroy();
            }
        }

        @Override
        public void a(e eVar, BaseAdUnit baseAdUnit, JSONObject jSONObject) {
            if (c.this.c != null) {
                c.this.c.a(eVar, baseAdUnit, jSONObject);
            }
        }

        @Override
        public void b(e eVar) {
            if (c.this.c != null) {
                c.this.c.c();
            }
        }

        @Override
        public void b(e eVar, JSONObject jSONObject) {
            c.this.b = jSONObject.optBoolean("flag");
            if (c.this.c != null) {
                c.this.c.a(c.this.b);
            }
        }
    };

    public interface a {
        void a();

        void a(View view);

        void a(e eVar, BaseAdUnit baseAdUnit, JSONObject jSONObject);

        void a(WindAdError windAdError);

        void a(boolean z);

        void b();

        void c();
    }

    class b extends BroadcastReceiver {
        private Context b;
        private int c = -1;

        b() {
        }

        public void a() {
            Context context = this.b;
            if (context != null) {
                context.unregisterReceiver(this);
                this.b = null;
            }
        }

        public void a(Context context) {
            Preconditions.checkNotNull(context);
            Context applicationContext = context.getApplicationContext();
            this.b = applicationContext;
            if (applicationContext != null) {
                applicationContext.registerReceiver(this, new IntentFilter("android.intent.action.CONFIGURATION_CHANGED"));
            }
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            int screenOrientation;
            if (this.b == null || !"android.intent.action.CONFIGURATION_CHANGED".equals(intent.getAction()) || (screenOrientation = ClientMetadata.getInstance().getScreenOrientation(c.this.f())) == this.c) {
                return;
            }
            this.c = screenOrientation;
            c.this.a(screenOrientation);
        }
    }

    public c(Context context, List<BaseAdUnit> list, com.sigmob.sdk.base.common.e eVar) {
        Preconditions.checkNotNull(context);
        this.i = list;
        this.j = eVar;
        FrameLayout frameLayout = new FrameLayout(context);
        this.a = frameLayout;
        frameLayout.setBackgroundColor(0);
        b bVar = new b();
        this.g = bVar;
        bVar.a(context);
        e eVar2 = new e(context, list, this.a);
        this.d = eVar2;
        eVar2.setAdSize(eVar);
        this.d.setLoadListener(new e.a() {
            @Override
            public void a(e eVar3) {
                try {
                    if (c.this.c != null) {
                        c.this.c.a(c.this.d);
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }

            @Override
            public void a(WindAdError windAdError) {
                try {
                    if (c.this.c != null) {
                        c.this.c.a(windAdError);
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
        this.d.setNextWebViewListener(this.k);
        this.h.clear();
        this.h.add(this.d);
        this.a.addView(this.d, new FrameLayout.LayoutParams(-1, -1));
    }

    private e a(Context context, e eVar, JSONObject jSONObject) {
        e eVar2 = new e(context, this.i, this.a, eVar, jSONObject);
        eVar2.setAdSize(this.j);
        eVar2.setNextWebViewListener(this.k);
        return eVar2;
    }

    private Context f() {
        FrameLayout frameLayout = this.a;
        if (frameLayout != null) {
            return frameLayout.getContext();
        }
        return null;
    }

    public void a() {
        List<e> list = this.h;
        if (list == null || list.size() <= 0) {
            return;
        }
        for (int i = 0; i < this.h.size(); i++) {
            e eVar = this.h.get(i);
            if (eVar.getMraidBridge() != null) {
                eVar.getMraidBridge().a(false);
            }
        }
    }

    void a(int i) {
        SigmobLog.i("handleOrientationChange " + i);
        List<e> list = this.h;
        if (list == null || list.size() <= 0) {
            return;
        }
        for (int i2 = 0; i2 < this.h.size(); i2++) {
            e eVar = this.h.get(i2);
            if (eVar.getMraidBridge() != null) {
                eVar.getMraidBridge().d();
                eVar.getMraidBridge().a(this.j);
            }
        }
    }

    public void a(BaseAdUnit baseAdUnit) {
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() {
            @Override
            public void run() {
                if (c.this.c != null) {
                    c.this.c.a(c.this.b);
                }
            }
        }, ((long) ((baseAdUnit.getRvAdSetting() == null || baseAdUnit.getSkipSeconds() == -1) ? 5 : baseAdUnit.getSkipSeconds())) * 1000);
    }

    public void a(a aVar) {
        this.c = aVar;
    }

    public void b() {
        List<e> list = this.h;
        if (list == null || list.size() <= 0) {
            return;
        }
        for (int i = 0; i < this.h.size(); i++) {
            e eVar = this.h.get(i);
            eVar.resumeTimers();
            if (eVar.getMraidBridge() != null) {
                eVar.getMraidBridge().a(true);
            }
        }
    }

    public e c() {
        return this.d;
    }

    public void d() {
        try {
            this.g.a();
            this.d = null;
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public FrameLayout e() {
        return this.a;
    }
}
