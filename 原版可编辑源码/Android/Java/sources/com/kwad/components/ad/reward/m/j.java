package com.kwad.components.ad.reward.m;

import android.app.DialogFragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.bykv.vk.openvk.TTVfConstant;
import com.kwad.components.ad.reward.k;
import com.kwad.components.core.widget.KSCornerImageView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class j extends d implements View.OnClickListener {
    private AdTemplate adTemplate;
    private TextView gQ;
    private KSCornerImageView lB;
    private TextView lC;
    private TextView lD;
    private k.a qa;
    private ViewGroup sw;
    private View vn;
    private DialogFragment zq;
    private TextView zr;
    private View zs;
    private View zt;

    public j(DialogFragment dialogFragment, AdTemplate adTemplate, LayoutInflater layoutInflater, ViewGroup viewGroup, k.a aVar) {
        this.zq = dialogFragment;
        this.adTemplate = adTemplate;
        this.qa = aVar;
        this.sw = (ViewGroup) layoutInflater.inflate(R.layout.ksad_reward_jinniu_dialog, viewGroup, false);
        initView();
    }

    private void initView() {
        this.lB = (KSCornerImageView) this.sw.findViewById(R.id.ksad_reward_jinniu_dialog_icon);
        this.gQ = (TextView) this.sw.findViewById(R.id.ksad_reward_jinniu_dialog_title);
        this.lC = (TextView) this.sw.findViewById(R.id.ksad_reward_jinniu_dialog_desc);
        this.zr = (TextView) this.sw.findViewById(R.id.ksad_reward_jinniu_dialog_play_time_tips);
        this.lD = (TextView) this.sw.findViewById(R.id.ksad_reward_jinniu_dialog_detail);
        this.vn = this.sw.findViewById(R.id.ksad_reward_jinniu_dialog_btn_close);
        this.zs = this.sw.findViewById(R.id.ksad_reward_jinniu_dialog_btn_deny);
        this.zt = this.sw.findViewById(R.id.ksad_reward_jinniu_dialog_btn_continue);
        this.vn.setOnClickListener(this);
        this.zs.setOnClickListener(this);
        this.zt.setOnClickListener(this);
        this.lB.setOnClickListener(this);
        this.gQ.setOnClickListener(this);
        this.lC.setOnClickListener(this);
        this.lD.setOnClickListener(this);
    }

    public final void a(k.c cVar) {
        KSImageLoader.loadAppIcon(this.lB, cVar.gu(), this.adTemplate, 4);
        this.gQ.setText(cVar.getTitle());
        this.lC.setText(cVar.gv());
        this.zr.setText(cVar.gx());
        if (com.kwad.sdk.core.response.b.a.aN(this.adTemplate)) {
            this.lD.setText(String.format("%s >", com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(this.adTemplate))));
        }
    }

    @Override
    public final ViewGroup gQ() {
        return this.sw;
    }

    @Override
    public final void onClick(View view) {
        k.a aVar;
        if (view.equals(this.vn)) {
            this.zq.dismiss();
            k.a aVar2 = this.qa;
            if (aVar2 != null) {
                aVar2.gp();
                return;
            }
            return;
        }
        if (view.equals(this.zs)) {
            this.zq.dismiss();
            k.a aVar3 = this.qa;
            if (aVar3 != null) {
                aVar3.H(false);
                return;
            }
            return;
        }
        if (view.equals(this.zt)) {
            this.zq.dismiss();
            k.a aVar4 = this.qa;
            if (aVar4 != null) {
                aVar4.gp();
                return;
            }
            return;
        }
        if (view.equals(this.lB)) {
            k.a aVar5 = this.qa;
            if (aVar5 != null) {
                aVar5.g(127, 2);
                return;
            }
            return;
        }
        if (view.equals(this.gQ)) {
            k.a aVar6 = this.qa;
            if (aVar6 != null) {
                aVar6.g(128, 2);
                return;
            }
            return;
        }
        if (view.equals(this.lC)) {
            k.a aVar7 = this.qa;
            if (aVar7 != null) {
                aVar7.g(129, 2);
                return;
            }
            return;
        }
        if (!view.equals(this.lD) || (aVar = this.qa) == null) {
            return;
        }
        aVar.g(TTVfConstant.IMAGE_MODE_SPLASH, 2);
    }
}
