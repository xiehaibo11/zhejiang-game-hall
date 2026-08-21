package com.kwad.components.core.e.c;

import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.core.e.c.a;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.core.n.d {
    private static b Jp;
    private final C0149b Jq;
    private com.kwad.components.core.e.c.a Jt;
    private boolean Ju;

    public static class a {
        private DialogInterface.OnShowListener Jw;
        private DialogInterface.OnDismissListener Jx;
        private AdTemplate adTemplate;
        private String url;

        public final a O(AdTemplate adTemplate) {
            this.adTemplate = adTemplate;
            return this;
        }

        public final a a(DialogInterface.OnShowListener onShowListener) {
            this.Jw = onShowListener;
            return this;
        }

        public final a ak(String str) {
            this.url = str;
            return this;
        }

        public final a c(DialogInterface.OnDismissListener onDismissListener) {
            this.Jx = onDismissListener;
            return this;
        }

        public final C0149b nc() {
            if (com.kwad.components.core.a.ml.booleanValue() && (this.adTemplate == null || TextUtils.isEmpty(this.url))) {
                throw new IllegalArgumentException("param is error, please check it");
            }
            return new C0149b(this, (byte) 0);
        }
    }

    /* JADX INFO: renamed from: com.kwad.components.core.e.c.b$b, reason: collision with other inner class name */
    public static class C0149b {
        protected DialogInterface.OnShowListener Jw;
        protected DialogInterface.OnDismissListener Jx;
        protected final AdTemplate adTemplate;
        protected String url;

        private C0149b(a aVar) {
            this.adTemplate = aVar.adTemplate;
            this.url = aVar.url;
            this.Jw = aVar.Jw;
            this.Jx = aVar.Jx;
        }

        /* synthetic */ C0149b(a aVar, byte b) {
            this(aVar);
        }
    }

    private b(Activity activity, C0149b c0149b) {
        super(activity);
        this.Ju = false;
        this.Jq = c0149b;
        if (com.kwad.sdk.d.a.a.b(activity)) {
            getWindow().addFlags(1024);
        }
        setOnShowListener(c0149b.Jw);
        setOnDismissListener(c0149b.Jx);
    }

    public static boolean a(Context context, C0149b c0149b) {
        Activity activityDr;
        b bVar = Jp;
        if ((bVar == null || !bVar.isShowing()) && context != null && (activityDr = l.dr(context)) != null && !activityDr.isFinishing()) {
            com.kwad.sdk.a.a.c.yb().dismiss();
            try {
                b bVar2 = new b(activityDr, c0149b);
                Jp = bVar2;
                bVar2.show();
                com.kwad.sdk.core.report.a.b(c0149b.adTemplate, 86, (JSONObject) null);
                return true;
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTrace(th);
            }
        }
        return false;
    }

    public static boolean mZ() {
        b bVar = Jp;
        if (bVar != null) {
            return bVar.isShowing();
        }
        return false;
    }

    public final void al(boolean z) {
        this.Ju = z;
        dismiss();
    }

    @Override // com.kwad.components.core.n.d
    public final ViewGroup cf() {
        com.kwad.components.core.e.c.a aVar = new com.kwad.components.core.e.c.a(this.mContext, this, this.Jq);
        this.Jt = aVar;
        return aVar;
    }

    @Override // com.kwad.components.core.n.d, android.app.Dialog, android.content.DialogInterface
    public final void dismiss() {
        super.dismiss();
        Jp = null;
    }

    @Override // com.kwad.components.core.n.d
    public final void g(View view) {
        this.Jt.setChangeListener(new a.InterfaceC0148a() { // from class: com.kwad.components.core.e.c.b.1
            @Override // com.kwad.components.core.e.c.a.InterfaceC0148a
            public final void mY() {
                b.this.dismiss();
            }
        });
    }

    @Override // com.kwad.components.core.n.d
    public final int getLayoutId() {
        return 0;
    }

    @Override // android.app.Dialog
    public final boolean isShowing() {
        return super.isShowing();
    }

    @Override // com.kwad.components.core.n.d
    public final boolean na() {
        return true;
    }

    public final boolean nb() {
        return this.Ju;
    }

    @Override // android.app.Dialog
    public final void onBackPressed() {
        super.onBackPressed();
        com.kwad.sdk.core.report.a.aD(this.Jq.adTemplate);
    }

    @Override // android.app.Dialog, android.view.Window.Callback
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Jp = null;
    }

    @Override // com.kwad.components.core.n.d, android.app.Dialog
    public final void onStart() {
        super.onStart();
        b bVar = Jp;
        if (bVar != null) {
            bVar.setTitle((CharSequence) null);
        }
    }

    @Override // android.app.Dialog
    public final void show() {
        try {
            super.show();
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }
}
