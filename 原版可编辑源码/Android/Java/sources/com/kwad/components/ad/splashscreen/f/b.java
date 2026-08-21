package com.kwad.components.ad.splashscreen.f;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.e;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.widget.f;

public final class b implements com.kwad.sdk.widget.c {
    private a CY;
    private ViewStub EJ;
    private ViewGroup EK;
    private View EL;
    private TextView EM;
    private boolean EN;
    private e EO;
    private f EP;
    private ViewGroup gg;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;

    public b(ViewGroup viewGroup, ViewStub viewStub, boolean z, com.kwad.components.core.e.d.c cVar) {
        this.gg = viewGroup;
        this.EJ = viewStub;
        this.mApkDownloadHelper = cVar;
        this.EN = z;
    }

    private void a(com.kwad.components.ad.splashscreen.d dVar) {
        if (dVar == null) {
            return;
        }
        ac(dVar.kx());
    }

    private void ac(String str) {
        TextView textView = this.EM;
        if (textView == null || str == null) {
            return;
        }
        textView.setText(str);
    }

    private void g(ViewGroup viewGroup) {
        if (viewGroup == null) {
            return;
        }
        this.EL = viewGroup.findViewById(R.id.ksad_splash_actionbar_native);
        this.EM = (TextView) viewGroup.findViewById(R.id.ksad_splash_actionbar_text);
        this.EP = new f(this.EL.getContext(), this.EL, this);
        this.EL.getContext();
        a(com.kwad.components.ad.splashscreen.d.a(this.mAdTemplate, this.mAdInfo, this.mApkDownloadHelper, 4));
    }

    private void g(boolean z, boolean z2) {
        e eVar = this.EO;
        if (eVar != null) {
            eVar.f(z, z2);
        }
    }

    public final void G(AdTemplate adTemplate) {
        a aVar;
        this.mAdTemplate = adTemplate;
        a aVar2 = this.CY;
        if (aVar2 == null) {
            this.CY = new a(this.gg.getContext(), this.mAdTemplate) {
                @Override
                protected final void aa(String str) {
                    b.this.ac(str);
                }
            };
        } else {
            aVar2.setAdTemplate(adTemplate);
        }
        if (adTemplate != null) {
            this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        }
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar == null || (aVar = this.CY) == null) {
            return;
        }
        cVar.b(aVar);
    }

    @Override
    public final void a(View view) {
        g(true, view.equals(this.EL));
    }

    public final void a(e eVar) {
        this.EO = eVar;
    }

    @Override
    public final void b(View view) {
        if (this.EN) {
            g(false, view.equals(this.EL));
        }
    }

    public final void ls() {
        com.kwad.sdk.core.e.c.d("SplashActionBarNativeHelper", "rollBackToNative mRootViewStub: " + this.EJ);
        if (this.EK == null) {
            ViewStub viewStub = this.EJ;
            this.EK = (ViewGroup) ((viewStub == null || viewStub.getParent() == null) ? this.gg.findViewById(R.id.ksad_splash_actionbar_native_root) : this.EJ.inflate());
            g(this.EK);
        }
        ViewGroup viewGroup = this.EK;
        if (viewGroup != null) {
            viewGroup.setVisibility(0);
        }
    }

    public final void onUnbind() {
        a aVar;
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar == null || (aVar = this.CY) == null) {
            return;
        }
        cVar.c(aVar);
    }
}
