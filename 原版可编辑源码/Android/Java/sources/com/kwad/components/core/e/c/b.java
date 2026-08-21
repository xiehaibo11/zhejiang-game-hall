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

public final class b extends com.kwad.components.core.n.d {
    private static b Jp;
    private final b Jq;
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

        public final b nc() {
            if (com.kwad.components.core.a.ml.booleanValue() && (this.adTemplate == null || TextUtils.isEmpty(this.url))) {
                throw new IllegalArgumentException("param is error, please check it");
            }
            return new b(this, (byte) 0);
        }
    }

    public static class b {
        protected DialogInterface.OnShowListener Jw;
        protected DialogInterface.OnDismissListener Jx;
        protected final AdTemplate adTemplate;
        protected String url;

        private b(a aVar) {
            this.adTemplate = aVar.adTemplate;
            this.url = aVar.url;
            this.Jw = aVar.Jw;
            this.Jx = aVar.Jx;
        }

        b(a aVar, byte b) {
            this(aVar);
        }
    }

    private b(Activity activity, b bVar) {
        super(activity);
        this.Ju = false;
        this.Jq = bVar;
        if (com.kwad.sdk.d.a.a.b(activity)) {
            getWindow().addFlags(1024);
        }
        setOnShowListener(bVar.Jw);
        setOnDismissListener(bVar.Jx);
    }

    public static boolean a(Context context, b bVar) {
        Activity activityDr;
        b bVar2 = Jp;
        if ((bVar2 == null || !bVar2.isShowing()) && context != null && (activityDr = l.dr(context)) != null && !activityDr.isFinishing()) {
            com.kwad.sdk.a.a.c.yb().dismiss();
            try {
                b bVar3 = new b(activityDr, bVar);
                Jp = bVar3;
                bVar3.show();
                com.kwad.sdk.core.report.a.b(bVar.adTemplate, 86, (JSONObject) null);
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

    @Override
    public final ViewGroup cf() {
        com.kwad.components.core.e.c.a aVar = new com.kwad.components.core.e.c.a(this.mContext, this, this.Jq);
        this.Jt = aVar;
        return aVar;
    }

    @Override
    public final void dismiss() {
        super.dismiss();
        Jp = null;
    }

    @Override
    public final void g(View view) {
        this.Jt.setChangeListener(new a.a() {
            @Override
            public final void mY() {
                b.this.dismiss();
            }
        });
    }

    @Override
    public final int getLayoutId() {
        return 0;
    }

    @Override
    public final boolean isShowing() {
        return super.isShowing();
    }

    @Override
    public final boolean na() {
        return true;
    }

    public final boolean nb() {
        return this.Ju;
    }

    @Override
    public final void onBackPressed() {
        super.onBackPressed();
        com.kwad.sdk.core.report.a.aD(this.Jq.adTemplate);
    }

    @Override
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Jp = null;
    }

    @Override
    public final void onStart() {
        super.onStart();
        b bVar = Jp;
        if (bVar != null) {
            bVar.setTitle((CharSequence) null);
        }
    }

    @Override
    public final void show() {
        try {
            super.show();
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }
}
