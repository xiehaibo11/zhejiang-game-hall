package com.kwad.components.ad.reward.m;

import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.widget.KsAppTagsView;
import com.kwad.components.core.widget.KsConvertButton;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;

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
    */
    private void a(com.kwad.components.ad.reward.model.a aVar) {
        TextView textView;
        int i;
        KsAppTagsView ksAppTagsView;
        KsConvertButton ksConvertButton;
        int i2;
        if (aVar == null) {
            return;
        }
        T(aVar.hl());
        KsLogoView ksLogoView = this.mLogoView;
        if (ksLogoView != null) {
            ksLogoView.aa(aVar.hh());
        }
        this.yP.setText(aVar.getTitle());
        TextView textView2 = this.yQ;
        if (textView2 != null) {
            textView2.setText(aVar.gv());
        }
        TextView textView3 = this.yR;
        if (textView3 == null) {
            textView = this.yQ;
            if (textView != null) {
                i = TextUtils.isEmpty(aVar.gv()) ? 8 : 0;
            }
            ksAppTagsView = this.yx;
            if (ksAppTagsView != null) {
                ksAppTagsView.a(aVar.hj(), this.yT);
                this.yx.setVisibility(aVar.hk() ? 8 : 0);
            }
            ksConvertButton = this.yO;
            if (ksConvertButton != null) {
                ksConvertButton.a(aVar.hi(), aVar.hh());
            }
            KSImageLoader.loadAppIcon(this.yt, aVar.gu(), aVar.hh(), 12);
        }
        textView3.setText(aVar.gv());
        if (TextUtils.isEmpty(aVar.gv())) {
            i2 = 8;
            i = 8;
        } else if (aVar.hk()) {
            i = 0;
            i2 = 8;
        } else {
            i2 = 0;
            i = 8;
        }
        TextView textView4 = this.yQ;
        if (textView4 != null) {
            textView4.setVisibility(i2);
        }
        textView = this.yR;
        textView.setVisibility(i);
        ksAppTagsView = this.yx;
        if (ksAppTagsView != null) {
        }
        ksConvertButton = this.yO;
        if (ksConvertButton != null) {
        }
        KSImageLoader.loadAppIcon(this.yt, aVar.gu(), aVar.hh(), 12);
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

    @Override
    protected final void a(r rVar) {
        super.a(rVar);
        a(com.kwad.components.ad.reward.model.a.a(rVar, this.yU));
    }

    public final void f(ViewGroup viewGroup) {
        super.a(viewGroup, if(), jZ());
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

    protected int if() {
        return R.id.ksad_common_app_card_stub;
    }

    @Override
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
