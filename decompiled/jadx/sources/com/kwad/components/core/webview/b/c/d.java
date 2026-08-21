package com.kwad.components.core.webview.b.c;

import android.content.DialogInterface;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import com.kwad.components.core.n.g;
import com.kwad.components.offline.api.tk.model.StyleTemplate;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.widget.KSFrameLayout;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class d extends g {
    public com.kwad.components.core.webview.b.e.c QM;
    protected StyleTemplate QO;
    protected com.kwad.components.core.webview.b.c.b Xl;
    protected com.kwad.sdk.components.g Xn;
    public boolean Xo;
    public a Xp;
    private com.kwad.components.core.webview.b.e.d Xs;
    private KSFrameLayout Xu;
    protected List<DialogInterface.OnDismissListener> Xv = new CopyOnWriteArrayList();
    public boolean Xw = false;
    public AdTemplate mAdTemplate;
    private Presenter mPresenter;
    public String xD;

    public interface a {
        boolean gi();
    }

    public static class b {
        private com.kwad.sdk.components.g Xn;
        private boolean Xo;
        private boolean Xw;
        private StyleTemplate Xy;
        private AdTemplate mAdTemplate;
        private String templateId;

        public final void a(StyleTemplate styleTemplate) {
            this.Xy = styleTemplate;
        }

        public final void aO(String str) {
            this.templateId = str;
        }

        public final void aP(boolean z) {
            this.Xo = false;
        }

        public final void aQ(boolean z) {
            this.Xw = true;
        }

        public final void c(com.kwad.sdk.components.g gVar) {
            this.Xn = gVar;
        }

        public final AdTemplate getAdTemplate() {
            return this.mAdTemplate;
        }

        public final String getTemplateId() {
            return this.templateId;
        }

        public final boolean rZ() {
            return this.Xo;
        }

        public final boolean sa() {
            return this.Xw;
        }

        public final void setAdTemplate(AdTemplate adTemplate) {
            this.mAdTemplate = adTemplate;
        }
    }

    private Presenter ad() {
        Presenter presenter = new Presenter();
        this.mPresenter = presenter;
        presenter.a(jr());
        return this.mPresenter;
    }

    public static d b(b bVar) {
        d dVar = new d();
        dVar.mAdTemplate = bVar.getAdTemplate();
        dVar.xD = bVar.getTemplateId();
        dVar.Xo = bVar.Xo;
        dVar.Xw = bVar.Xw;
        dVar.QO = bVar.Xy;
        dVar.Xn = bVar.Xn;
        Bundle bundle = new Bundle();
        bundle.putString("templateId", bVar.getTemplateId());
        dVar.setArguments(bundle);
        return dVar;
    }

    private void y(View view) {
        if (this.mPresenter == null) {
            Presenter presenterAd = ad();
            this.mPresenter = presenterAd;
            presenterAd.F(view);
            this.Xl = jq();
        }
        js();
        this.mPresenter.k(this.Xl);
    }

    @Override // com.kwad.components.core.n.g
    public final View a(LayoutInflater layoutInflater, ViewGroup viewGroup) {
        if (this.Xu == null) {
            this.Xu = (KSFrameLayout) layoutInflater.inflate(R.layout.ksad_video_tk_dialog_layout, viewGroup, false);
        }
        return this.Xu;
    }

    public final void a(com.kwad.components.core.webview.b.e.d dVar) {
        this.Xs = dVar;
    }

    public final void d(DialogInterface.OnDismissListener onDismissListener) {
        if (onDismissListener != null) {
            this.Xv.add(onDismissListener);
        }
    }

    public final void e(DialogInterface.OnDismissListener onDismissListener) {
        this.Xv.remove(onDismissListener);
    }

    protected com.kwad.components.core.webview.b.c.b jq() {
        return new com.kwad.components.core.webview.b.c.b();
    }

    protected c jr() {
        return new c();
    }

    protected void js() {
        this.Xl.mActivity = getActivity();
        this.Xl.VP = this;
        this.Xl.Xm = this.Xu;
        this.Xl.mAdTemplate = this.mAdTemplate;
        this.Xl.xD = this.xD;
        this.Xl.QO = this.QO;
        this.Xl.Xo = this.Xo;
        this.Xl.Xn = this.Xn;
        this.Xl.Xp = this.Xp;
        this.Xl.QM = this.QM;
    }

    @Override // android.app.DialogFragment, android.app.Fragment
    public void onActivityCreated(Bundle bundle) {
        Window window;
        try {
            super.onActivityCreated(bundle);
        } catch (Throwable unused) {
        }
        if (getDialog() == null || (window = getDialog().getWindow()) == null) {
            return;
        }
        WindowManager.LayoutParams attributes = window.getAttributes();
        attributes.dimAmount = 0.0f;
        window.setAttributes(attributes);
        getDialog().setCanceledOnTouchOutside(false);
        window.getDecorView().setPadding(0, 0, 0, 0);
        window.setLayout(-1, -1);
        getDialog().getWindow().setBackgroundDrawable(new ColorDrawable(0));
        window.setSoftInputMode(16);
        if (this.Xw) {
            getDialog().setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.kwad.components.core.webview.b.c.d.1
                @Override // android.content.DialogInterface.OnKeyListener
                public final boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                    return i == 4 && keyEvent.getAction() == 0;
                }
            });
        }
        window.setFlags(1024, 1024);
        if (this.Xw) {
            getDialog().setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.kwad.components.core.webview.b.c.d.2
                @Override // android.content.DialogInterface.OnKeyListener
                public final boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                    return i == 4 && keyEvent.getAction() == 0;
                }
            });
        }
    }

    @Override // android.app.DialogFragment, android.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.xD = getArguments().getString("templateId");
    }

    @Override // android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        Presenter presenter = this.mPresenter;
        if (presenter != null) {
            presenter.destroy();
            this.mPresenter = null;
        }
        com.kwad.components.core.webview.b.c.b bVar = this.Xl;
        if (bVar != null) {
            bVar.release();
            this.Xl = null;
        }
    }

    @Override // android.app.DialogFragment, android.app.Fragment
    public void onDestroyView() {
        super.onDestroyView();
        KSFrameLayout kSFrameLayout = this.Xu;
        if (kSFrameLayout != null && (kSFrameLayout.getParent() instanceof ViewGroup)) {
            ((ViewGroup) this.Xu.getParent()).removeView(this.Xu);
            this.Xu = null;
        }
        com.kwad.components.core.webview.b.e.d dVar = this.Xs;
        if (dVar != null) {
            dVar.go();
        }
    }

    @Override // android.app.DialogFragment, android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        super.onDismiss(dialogInterface);
        com.kwad.components.core.webview.b.e.c cVar = this.QM;
        if (cVar != null) {
            cVar.go();
        }
        for (DialogInterface.OnDismissListener onDismissListener : this.Xv) {
            if (onDismissListener != null) {
                onDismissListener.onDismiss(dialogInterface);
            }
        }
        com.kwad.sdk.components.g gVar = this.Xn;
        if (gVar != null) {
            gVar.callbackDialogDismiss();
        }
    }

    @Override // android.app.Fragment
    public void onViewCreated(View view, Bundle bundle) {
        super.onViewCreated(view, bundle);
        y(view);
        com.kwad.components.core.webview.b.e.c cVar = this.QM;
        if (cVar != null) {
            cVar.gg();
        }
        com.kwad.components.core.webview.b.e.d dVar = this.Xs;
        if (dVar != null) {
            dVar.gg();
        }
    }
}
