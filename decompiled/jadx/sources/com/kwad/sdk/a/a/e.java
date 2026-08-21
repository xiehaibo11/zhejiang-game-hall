package com.kwad.sdk.a.a;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.util.Property;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.be;

/* JADX INFO: loaded from: classes2.dex */
public final class e implements View.OnClickListener {
    private final boolean ahN;
    private final boolean ahO;
    private View ahP;
    private ImageView ahQ;
    private TextView ahR;
    private Button ahS;
    private int ahT;
    private int ahU;
    private boolean ahV;
    private final AdInfo mAdInfo;
    private final AdTemplate mAdTemplate;
    private final Context mContext;
    private View mRootView = yj();

    public e(Context context, AdTemplate adTemplate, boolean z, boolean z2, boolean z3) {
        this.mContext = context;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.ahN = z;
        this.ahO = z2;
        this.ahV = z3;
        ll();
    }

    private Animator A(View view) {
        ObjectAnimator objectAnimatorOfFloat = (this.ahN && this.ahO) ? ObjectAnimator.ofFloat(view, (Property<View, Float>) View.TRANSLATION_X, 0.0f, this.ahU) : ObjectAnimator.ofFloat(view, (Property<View, Float>) View.TRANSLATION_Y, 0.0f, -this.ahT);
        objectAnimatorOfFloat.setInterpolator(PathInterpolatorCompat.create(0.0f, 0.42f, 0.85f, 0.64f));
        objectAnimatorOfFloat.setDuration(260L);
        return objectAnimatorOfFloat;
    }

    private void b(FrameLayout frameLayout) {
        int dimensionPixelSize = this.mContext.getResources().getDimensionPixelSize(R.dimen.ksad_install_tips_card_height);
        int dimensionPixelSize2 = this.mContext.getResources().getDimensionPixelSize(R.dimen.ksad_install_tips_card_margin);
        this.ahT = dimensionPixelSize + dimensionPixelSize2;
        ViewGroup.LayoutParams layoutParams = this.mRootView.getLayoutParams();
        FrameLayout.LayoutParams layoutParams2 = layoutParams instanceof FrameLayout.LayoutParams ? (FrameLayout.LayoutParams) layoutParams : new FrameLayout.LayoutParams(-1, dimensionPixelSize);
        layoutParams2.gravity = 48;
        layoutParams2.leftMargin = dimensionPixelSize2;
        layoutParams2.rightMargin = dimensionPixelSize2;
        layoutParams2.topMargin = dimensionPixelSize2;
        this.mRootView.setTranslationY(-this.ahT);
        frameLayout.addView(this.mRootView, layoutParams2);
        show();
    }

    private void c(FrameLayout frameLayout) {
        int screenWidth = be.getScreenWidth(this.mContext);
        int dimensionPixelSize = this.mContext.getResources().getDimensionPixelSize(R.dimen.ksad_install_tips_bottom_margin_left);
        int dimensionPixelSize2 = this.mContext.getResources().getDimensionPixelSize(R.dimen.ksad_install_tips_bottom_margin_bottom);
        int dimensionPixelOffset = this.mContext.getResources().getDimensionPixelOffset(R.dimen.ksad_install_tips_bottom_height);
        this.ahU = screenWidth - dimensionPixelSize;
        ViewGroup.LayoutParams layoutParams = this.mRootView.getLayoutParams();
        FrameLayout.LayoutParams layoutParams2 = layoutParams instanceof FrameLayout.LayoutParams ? (FrameLayout.LayoutParams) layoutParams : new FrameLayout.LayoutParams(-1, dimensionPixelOffset);
        layoutParams2.gravity = 80;
        layoutParams2.leftMargin = dimensionPixelSize;
        layoutParams2.rightMargin = 0;
        layoutParams2.bottomMargin = dimensionPixelSize2;
        this.mRootView.setTranslationX(this.ahU);
        frameLayout.addView(this.mRootView, layoutParams2);
        show();
    }

    private void ll() {
        this.ahS.setText(this.ahN ? "安装" : "打开");
        this.ahP.setOnClickListener(this);
        this.ahS.setOnClickListener(this);
        KSImageLoader.loadAppIcon(this.ahQ, com.kwad.sdk.core.response.b.a.bQ(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)), this.mAdTemplate, 8);
        String strAo = com.kwad.sdk.core.response.b.a.ao(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
        if (strAo.length() >= 8) {
            strAo = strAo.substring(0, 7) + "...";
        }
        this.ahR.setText(this.mContext.getString(this.ahN ? R.string.ksad_install_tips : R.string.ksad_launch_tips, strAo));
    }

    private void show() {
        ObjectAnimator objectAnimatorOfFloat = (this.ahN && this.ahO) ? ObjectAnimator.ofFloat(this.mRootView, (Property<View, Float>) View.TRANSLATION_X, this.ahU, 0.0f) : ObjectAnimator.ofFloat(this.mRootView, (Property<View, Float>) View.TRANSLATION_Y, -this.ahT, 0.0f);
        objectAnimatorOfFloat.setInterpolator(PathInterpolatorCompat.create(0.25f, 0.1f, 0.27f, 0.87f));
        objectAnimatorOfFloat.setDuration(300L);
        objectAnimatorOfFloat.start();
    }

    private View yj() {
        Context context;
        int i;
        if (this.ahN && this.ahO) {
            context = this.mContext;
            i = R.layout.ksad_install_tips_bottom;
        } else {
            context = this.mContext;
            i = R.layout.ksad_install_tips;
        }
        this.mRootView = l.inflate(context, i, null);
        ViewCompat.setElevation(this.mRootView, this.mContext.getResources().getDimension(R.dimen.ksad_install_tips_card_elevation));
        this.ahP = this.mRootView.findViewById(R.id.ksad_install_tips_close);
        this.ahQ = (ImageView) this.mRootView.findViewById(R.id.ksad_install_tips_icon);
        this.ahR = (TextView) this.mRootView.findViewById(R.id.ksad_install_tips_content);
        this.ahS = (Button) this.mRootView.findViewById(R.id.ksad_install_tips_install);
        return this.mRootView;
    }

    public final void a(FrameLayout frameLayout) {
        if (this.mRootView.getParent() != null) {
            return;
        }
        if (this.ahN && this.ahO) {
            c(frameLayout);
        } else {
            b(frameLayout);
        }
        this.mRootView.postDelayed(new Runnable() { // from class: com.kwad.sdk.a.a.e.1
            @Override // java.lang.Runnable
            public final void run() {
                e.this.dismiss();
            }
        }, com.heytap.mcssdk.constant.a.q);
    }

    public final void dismiss() {
        if (this.mRootView.getParent() == null) {
            return;
        }
        final ViewGroup viewGroup = (ViewGroup) this.mRootView.getParent();
        Animator animatorA = A(this.mRootView);
        animatorA.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.sdk.a.a.e.2
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                viewGroup.removeView(e.this.mRootView);
            }
        });
        animatorA.start();
        c.yb().yg();
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        dismiss();
        if (view.getId() != R.id.ksad_install_tips_install) {
            if (view.getId() == R.id.ksad_install_tips_close) {
                if (!this.ahN) {
                    com.kwad.sdk.core.report.a.o(this.mAdTemplate, 48);
                    return;
                }
                if (!this.ahV) {
                    com.kwad.sdk.core.report.a.p(this.mAdTemplate, 46);
                    return;
                }
                j jVar = new j();
                jVar.ci(69);
                jVar.cm(23);
                jVar.cq(1);
                com.kwad.sdk.core.report.a.a(this.mAdTemplate, jVar);
                return;
            }
            return;
        }
        if (!this.ahN) {
            if (ak.am(this.mContext, com.kwad.sdk.core.response.b.a.aq(this.mAdInfo))) {
                com.kwad.sdk.core.report.a.ax(this.mAdTemplate);
            }
            com.kwad.sdk.core.report.a.o(this.mAdTemplate, 47);
            return;
        }
        if (this.ahV) {
            j jVar2 = new j();
            jVar2.ci(29);
            jVar2.cm(23);
            com.kwad.sdk.core.report.a.a(this.mAdTemplate, jVar2);
        } else {
            com.kwad.sdk.core.report.a.p(this.mAdTemplate, 45);
        }
        if (ak.an(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext(), this.mAdInfo.downloadFilePath)) {
            com.kwad.sdk.core.report.a.i(this.mAdTemplate, 1);
        }
    }
}
