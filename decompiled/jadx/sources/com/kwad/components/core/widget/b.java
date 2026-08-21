package com.kwad.components.core.widget;

import android.content.Context;
import android.content.DialogInterface;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.core.widget.a;
import com.kwad.components.core.widget.c;
import com.kwad.components.model.FeedType;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.bi;
import com.kwad.sdk.widget.KSFrameLayout;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public abstract class b<T extends AdTemplate> extends KSFrameLayout implements DialogInterface.OnDismissListener, DialogInterface.OnShowListener, com.kwad.sdk.core.h.c {
    public a XT;
    private long XU;
    private com.kwad.components.core.widget.a.b bG;
    private com.kwad.sdk.core.h.b bJ;
    protected boolean mA;
    public AdInfo mAdInfo;
    public T mAdTemplate;
    public Context mContext;
    private bi mTimerHelper;

    public interface a {
        void onAdClicked();

        void onAdShow();

        void onDislikeClicked();

        void onDownloadTipsDialogDismiss();

        void onDownloadTipsDialogShow();
    }

    public b(Context context) {
        this(context, null);
    }

    public b(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public b(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mContext = context;
        initView();
    }

    private void a(ViewGroup viewGroup) {
        if (!com.kwad.sdk.core.config.d.zJ() && com.kwad.sdk.core.config.d.zI() >= 0.0f) {
            c(viewGroup);
            com.kwad.components.core.widget.a aVar = new com.kwad.components.core.widget.a(viewGroup.getContext(), viewGroup);
            viewGroup.addView(aVar);
            aVar.setViewCallback(new a.InterfaceC0176a() { // from class: com.kwad.components.core.widget.b.1
                @Override // com.kwad.components.core.widget.a.InterfaceC0176a
                public final void aa() {
                }

                @Override // com.kwad.components.core.widget.a.InterfaceC0176a
                public final void ab() {
                    if (b.this.mAdTemplate.mPvReported && b.this.mA) {
                        long jKd = b.this.getTimerHelper().Kd();
                        b.this.XU += jKd;
                        com.kwad.sdk.core.report.a.a(b.this.mAdTemplate, jKd, (JSONObject) null);
                        b.this.mA = false;
                    }
                }

                @Override // com.kwad.components.core.widget.a.InterfaceC0176a
                public final void eH() {
                    if (b.this.mAdTemplate.mPvReported && b.this.mA) {
                        long jKd = b.this.getTimerHelper().Kd();
                        b.this.XU += jKd;
                        com.kwad.sdk.core.report.a.a(b.this.mAdTemplate, jKd, (JSONObject) null);
                        b.this.mA = false;
                    }
                }

                @Override // com.kwad.components.core.widget.a.InterfaceC0176a
                public final void k(View view) {
                    if (!b.this.mAdTemplate.mPvReported && b.this.XT != null) {
                        b.this.mA = true;
                        b.this.bt();
                        b.this.getTimerHelper().startTiming();
                    }
                    if (!b.this.mA) {
                        b.this.getTimerHelper().startTiming();
                    }
                    b.this.mA = true;
                }
            });
            aVar.sl();
            return;
        }
        c cVarB = b(viewGroup);
        if (cVarB == null) {
            cVarB = new c(viewGroup.getContext(), viewGroup);
            viewGroup.addView(cVarB);
        }
        cVarB.setViewCallback(new c.a() { // from class: com.kwad.components.core.widget.b.2
            @Override // com.kwad.components.core.widget.c.a
            public final void eI() {
                b.this.bt();
            }
        });
        cVarB.setNeedCheckingShow(true);
    }

    private static c b(ViewGroup viewGroup) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt instanceof c) {
                return (c) childAt;
            }
        }
        return null;
    }

    public static void c(ViewGroup viewGroup) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt instanceof com.kwad.components.core.widget.a) {
                viewGroup.removeView(childAt);
            }
        }
    }

    private void initView() {
        l.inflate(this.mContext, getLayoutId(), this);
        setRatio(getHWRatio());
        ba();
        this.bG = new com.kwad.components.core.widget.a.b(this, 70);
        a((ViewGroup) this);
    }

    public void aK() {
    }

    public final void aK(int i) {
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, i, getTouchCoords());
        a aVar = this.XT;
        if (aVar != null) {
            aVar.onAdClicked();
        }
    }

    public void aL() {
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public void aa() {
        super.aa();
        this.bG.a(this);
        this.bG.a(this.bJ);
        this.bG.sy();
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public void ab() {
        super.ab();
        this.bG.b(this);
        this.bG.sz();
        bd();
    }

    public void b(T t) {
        this.mAdTemplate = t;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(t);
    }

    protected abstract void ba();

    public void bd() {
    }

    protected void bt() {
        a aVar;
        if (!this.mAdTemplate.mPvReported && (aVar = this.XT) != null) {
            aVar.onAdShow();
        }
        j jVar = new j();
        z.a aVar2 = new z.a();
        FeedType feedTypeFromInt = FeedType.fromInt(this.mAdTemplate.type);
        if (feedTypeFromInt == FeedType.FEED_TYPE_TEXT_NEW) {
            feedTypeFromInt = FeedType.FEED_TYPE_TEXT_BELOW;
        }
        aVar2.templateId = String.valueOf(feedTypeFromInt.getType());
        jVar.a(aVar2);
        jVar.t(getHeight(), getWidth());
        com.kwad.components.core.t.b.qj().a(this.mAdTemplate, null, jVar);
    }

    public final void c(j jVar) {
        jVar.c(getTouchCoords());
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, jVar, (JSONObject) null);
        a aVar = this.XT;
        if (aVar != null) {
            aVar.onAdClicked();
        }
    }

    public final void eb() {
        a aVar = this.XT;
        if (aVar != null) {
            aVar.onAdClicked();
        }
    }

    protected float getHWRatio() {
        return 0.0f;
    }

    protected abstract int getLayoutId();

    public long getStayTime() {
        return this.XU + getTimerHelper().getTime();
    }

    public bi getTimerHelper() {
        if (this.mTimerHelper == null) {
            this.mTimerHelper = new bi();
        }
        return this.mTimerHelper;
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        a aVar = this.XT;
        if (aVar != null) {
            aVar.onDownloadTipsDialogDismiss();
        }
    }

    @Override // android.content.DialogInterface.OnShowListener
    public void onShow(DialogInterface dialogInterface) {
        a aVar = this.XT;
        if (aVar != null) {
            aVar.onDownloadTipsDialogShow();
        }
    }

    public void setInnerAdInteractionListener(a aVar) {
        this.XT = aVar;
    }

    public void setMargin(int i) {
        setPadding(i, i, i, i);
        setBackgroundColor(-1);
    }

    public void setPageExitListener(com.kwad.sdk.core.h.b bVar) {
        this.bJ = bVar;
    }

    public final void sm() {
        com.kwad.sdk.core.report.a.at(this.mAdTemplate);
        a aVar = this.XT;
        if (aVar != null) {
            aVar.onDislikeClicked();
        }
    }
}
