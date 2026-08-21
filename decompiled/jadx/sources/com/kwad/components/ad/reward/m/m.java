package com.kwad.components.ad.reward.m;

import android.app.DialogFragment;
import android.text.SpannableString;
import android.text.style.ForegroundColorSpan;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.bykv.vk.openvk.TTVfConstant;
import com.kwad.components.ad.reward.k;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class m extends d implements View.OnClickListener {
    private ImageView eZ;
    private TextView gQ;
    private k.a qa;
    private ViewGroup zI;
    private View zJ;
    private TextView zK;
    private TextView zL;
    private TextView zM;
    private View zN;
    private DialogFragment zq;
    private View zt;

    public m(DialogFragment dialogFragment, AdTemplate adTemplate, LayoutInflater layoutInflater, ViewGroup viewGroup, k.a aVar) {
        this.zq = dialogFragment;
        this.qa = aVar;
        if (com.kwad.sdk.core.response.b.a.cw(com.kwad.sdk.core.response.b.d.cg(adTemplate))) {
            this.zI = (ViewGroup) layoutInflater.inflate(R.layout.ksad_live_origin_dialog, viewGroup, false);
            s(true);
        } else {
            this.zI = (ViewGroup) layoutInflater.inflate(R.layout.ksad_live_subscribe_dialog, viewGroup, false);
            s(false);
        }
    }

    private void s(boolean z) {
        this.zJ = this.zI.findViewById(R.id.ksad_live_subscribe_dialog_btn_close);
        this.gQ = (TextView) this.zI.findViewById(R.id.ksad_live_subscribe_dialog_title);
        this.eZ = (ImageView) this.zI.findViewById(R.id.ksad_live_subscribe_dialog_icon);
        this.zL = (TextView) this.zI.findViewById(R.id.ksad_live_subscribe_dialog_content_txt);
        this.zK = (TextView) this.zI.findViewById(R.id.ksad_live_subscribe_dialog_content);
        this.zt = this.zI.findViewById(R.id.ksad_live_subscribe_dialog_btn_continue);
        this.zN = this.zI.findViewById(R.id.ksad_live_subscribe_dialog_btn_deny);
        this.zM = (TextView) this.zI.findViewById(R.id.ksad_live_subscribe_dialog_vide_detail);
        if (z) {
            this.zJ.setVisibility(8);
        }
        this.zJ.setOnClickListener(this);
        this.zt.setOnClickListener(this);
        this.zN.setOnClickListener(this);
        this.zM.setOnClickListener(this);
    }

    public final void a(k.c cVar) {
        KSImageLoader.loadCircleIcon(this.eZ, cVar.gu(), this.zI.getContext().getResources().getDrawable(R.drawable.ksad_ic_default_user_avatar));
        String title = cVar.getTitle();
        if (this.gQ != null && title != null) {
            SpannableString spannableString = new SpannableString(title);
            int color = gQ().getResources().getColor(R.color.ksad_reward_main_color);
            spannableString.setSpan(new ForegroundColorSpan(color), 2, 4, 18);
            ForegroundColorSpan foregroundColorSpan = new ForegroundColorSpan(color);
            int length = title.length();
            spannableString.setSpan(foregroundColorSpan, length - 2, length, 18);
            this.gQ.setText(spannableString);
        }
        this.zK.setText(cVar.gv());
        this.zL.setText(cVar.gw());
        this.zM.setText(String.format("%s", cVar.qj));
    }

    @Override // com.kwad.components.ad.reward.m.d
    public final ViewGroup gQ() {
        return this.zI;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        k.a aVar;
        if (view.equals(this.zJ)) {
            this.zq.dismiss();
            k.a aVar2 = this.qa;
            if (aVar2 != null) {
                aVar2.gp();
                return;
            }
            return;
        }
        if (view.equals(this.zt)) {
            this.zq.dismiss();
            k.a aVar3 = this.qa;
            if (aVar3 != null) {
                aVar3.gp();
                return;
            }
            return;
        }
        if (!view.equals(this.zN)) {
            if (!view.equals(this.zM) || (aVar = this.qa) == null) {
                return;
            }
            aVar.g(TTVfConstant.IMAGE_MODE_SPLASH, 2);
            return;
        }
        this.zq.dismiss();
        k.a aVar4 = this.qa;
        if (aVar4 != null) {
            aVar4.H(false);
        }
    }
}
