package com.kwad.components.core.e.a;

import android.R;
import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import java.lang.ref.WeakReference;

public final class h implements d {
    private static WeakReference<Window> Jk;
    private g Jh;
    private b Ji;
    private WeakReference<Activity> Jj;
    private ViewGroup og;
    private boolean oh;
    private final com.kwad.sdk.core.c.c<Activity> xj = new com.kwad.sdk.core.c.d() {
        @Override
        public final void d(Activity activity) {
            super.d(activity);
            com.kwad.sdk.core.c.b.AU();
            com.kwad.sdk.core.c.b.b((com.kwad.sdk.core.c.c) this);
            if (activity.equals((Activity) h.this.Jj.get())) {
                h.this.fi();
            }
        }
    };

    public static void a(Window window) {
        Jk = new WeakReference<>(window);
    }

    private void fi() {
        g gVar;
        if (this.oh) {
            return;
        }
        this.oh = true;
        this.Ji.fh();
        ViewGroup viewGroup = this.og;
        if (viewGroup != null && (gVar = this.Jh) != null) {
            viewGroup.removeView(gVar);
        }
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.b((com.kwad.sdk.core.c.c) this.xj);
    }

    public static void mU() {
        WeakReference<Window> weakReference = Jk;
        if (weakReference != null) {
            weakReference.clear();
        }
        Jk = null;
    }

    public final boolean b(AdTemplate adTemplate, b bVar) {
        try {
            this.Ji = bVar;
            com.kwad.sdk.core.c.b.AU();
            Activity currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
            if (currentActivity != null && !currentActivity.isFinishing()) {
                View viewFindViewById = (Jk != null ? Jk.get() : currentActivity.getWindow()).getDecorView().findViewById(R.id.content);
                if (!(viewFindViewById instanceof ViewGroup)) {
                    return false;
                }
                this.Jj = new WeakReference<>(currentActivity);
                this.Jh = new g(l.wrapContextIfNeed(currentActivity), adTemplate, this);
                com.kwad.sdk.core.c.b.AU();
                com.kwad.sdk.core.c.b.a(this.xj);
                this.og = (ViewGroup) viewFindViewById;
                this.og.addView(this.Jh, new ViewGroup.LayoutParams(-1, -1));
                bVar.mL();
                return true;
            }
            com.kwad.sdk.core.e.c.d("InstalledActivateViewHelper", "showInWindow fail activity:" + currentActivity);
            return false;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.d("InstalledActivateViewHelper", "showInWindow fail error:" + th);
            com.kwad.sdk.core.e.c.printStackTrace(th);
            return false;
        }
    }

    @Override
    public final void mM() {
        fi();
    }
}
