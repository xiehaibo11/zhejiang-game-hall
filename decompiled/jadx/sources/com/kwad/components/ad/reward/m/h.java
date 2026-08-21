package com.kwad.components.ad.reward.m;

import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.widget.KsAppTagsView;
import com.kwad.components.core.widget.KsConvertButton;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public class h extends s implements View.OnClickListener {
    protected KsLogoView mLogoView;
    protected KsConvertButton yO;
    protected TextView yP;
    protected TextView yQ;
    protected TextView yR;
    protected a yS;
    protected int yT = R.layout.ksad_reward_apk_info_card_tag_item;
    protected boolean yU = true;
    protected ImageView yt;
    protected KsAppTagsView yx;

    public interface a {
        void ig();

        void ih();

        void ii();

        void ij();

        void ik();

        void il();
    }

    private void T(int i) {
        KsConvertButton ksConvertButton = this.yO;
        if (ksConvertButton == null) {
            return;
        }
        if (i == 1) {
            ksConvertButton.getCornerConf().setAllCorner(true);
        } else if (i == 2) {
            ksConvertButton.getCornerConf().bS(false).bV(false).bU(true).bT(true);
        }
        this.yO.postInvalidate();
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x008a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(com.kwad.components.ad.reward.model.a r6) {
        /*
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            int r0 = r6.hl()
            r5.T(r0)
            com.kwad.components.core.widget.KsLogoView r0 = r5.mLogoView
            if (r0 == 0) goto L15
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.hh()
            r0.aa(r1)
        L15:
            android.widget.TextView r0 = r5.yP
            java.lang.String r1 = r6.getTitle()
            r0.setText(r1)
            android.widget.TextView r0 = r5.yQ
            if (r0 == 0) goto L29
            java.lang.String r1 = r6.gv()
            r0.setText(r1)
        L29:
            android.widget.TextView r0 = r5.yR
            r1 = 0
            r2 = 8
            if (r0 == 0) goto L59
            java.lang.String r3 = r6.gv()
            r0.setText(r3)
            java.lang.String r0 = r6.gv()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L44
            r0 = r2
            r3 = r0
            goto L4f
        L44:
            boolean r0 = r6.hk()
            if (r0 == 0) goto L4d
            r3 = r1
            r0 = r2
            goto L4f
        L4d:
            r0 = r1
            r3 = r2
        L4f:
            android.widget.TextView r4 = r5.yQ
            if (r4 == 0) goto L56
            r4.setVisibility(r0)
        L56:
            android.widget.TextView r0 = r5.yR
            goto L6a
        L59:
            android.widget.TextView r0 = r5.yQ
            if (r0 == 0) goto L6d
            java.lang.String r3 = r6.gv()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L69
            r3 = r2
            goto L6a
        L69:
            r3 = r1
        L6a:
            r0.setVisibility(r3)
        L6d:
            com.kwad.components.ad.widget.KsAppTagsView r0 = r5.yx
            if (r0 == 0) goto L86
            java.util.List r3 = r6.hj()
            int r4 = r5.yT
            r0.a(r3, r4)
            com.kwad.components.ad.widget.KsAppTagsView r0 = r5.yx
            boolean r3 = r6.hk()
            if (r3 == 0) goto L83
            r1 = r2
        L83:
            r0.setVisibility(r1)
        L86:
            com.kwad.components.core.widget.KsConvertButton r0 = r5.yO
            if (r0 == 0) goto L95
            com.kwad.components.core.e.d.c r1 = r6.hi()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r6.hh()
            r0.a(r1, r2)
        L95:
            android.widget.ImageView r0 = r5.yt
            java.lang.String r1 = r6.gu()
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.hh()
            r2 = 12
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r0, r1, r6, r2)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.ad.reward.m.h.a(com.kwad.components.ad.reward.model.a):void");
    }

    private void g(ViewGroup viewGroup) {
        if (viewGroup == null) {
            return;
        }
        this.mLogoView = (KsLogoView) viewGroup.findViewById(R.id.ksad_common_app_logo);
        this.yt = (ImageView) viewGroup.findViewById(R.id.ksad_common_app_icon);
        this.yP = (TextView) viewGroup.findViewById(R.id.ksad_common_app_name);
        this.yx = (KsAppTagsView) viewGroup.findViewById(R.id.ksad_common_app_tags);
        this.yQ = (TextView) viewGroup.findViewById(R.id.ksad_common_app_desc);
        this.yR = (TextView) viewGroup.findViewById(R.id.ksad_common_app_desc2);
        this.yO = (KsConvertButton) viewGroup.findViewById(R.id.ksad_common_app_action);
    }

    private static int jZ() {
        return R.id.ksad_common_app_card_root;
    }

    public final void a(a aVar) {
        this.yS = aVar;
    }

    @Override // com.kwad.components.ad.reward.m.d
    protected final void a(r rVar) {
        super.a(rVar);
        a(com.kwad.components.ad.reward.model.a.a(rVar, this.yU));
    }

    public final void f(ViewGroup viewGroup) {
        super.a(viewGroup, mo17if(), jZ());
        g(this.sw);
        if (this.sw != null) {
            this.sw.setOnClickListener(this);
            this.yO.setOnClickListener(this);
            this.yt.setOnClickListener(this);
            this.yP.setOnClickListener(this);
            TextView textView = this.yQ;
            if (textView != null) {
                textView.setOnClickListener(this);
            }
            TextView textView2 = this.yR;
            if (textView2 != null) {
                textView2.setOnClickListener(this);
            }
            KsAppTagsView ksAppTagsView = this.yx;
            if (ksAppTagsView != null) {
                ksAppTagsView.setOnClickListener(this);
            }
        }
    }

    /* JADX INFO: renamed from: if, reason: not valid java name */
    protected int mo17if() {
        return R.id.ksad_common_app_card_stub;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        a aVar;
        if (view.equals(this.yO)) {
            a aVar2 = this.yS;
            if (aVar2 != null) {
                aVar2.ig();
                return;
            }
            return;
        }
        if (view.equals(this.yt)) {
            a aVar3 = this.yS;
            if (aVar3 != null) {
                aVar3.ih();
                return;
            }
            return;
        }
        if (view.equals(this.yP)) {
            a aVar4 = this.yS;
            if (aVar4 != null) {
                aVar4.ii();
                return;
            }
            return;
        }
        if (view.equals(this.yQ) || view.equals(this.yR)) {
            a aVar5 = this.yS;
            if (aVar5 != null) {
                aVar5.ij();
                return;
            }
            return;
        }
        if (view.equals(this.yx)) {
            a aVar6 = this.yS;
            if (aVar6 != null) {
                aVar6.ik();
                return;
            }
            return;
        }
        if (!view.equals(this.sw) || (aVar = this.yS) == null) {
            return;
        }
        aVar.il();
    }

    public final void show() {
        if (this.sw != null) {
            this.sw.setVisibility(0);
        }
    }
}
