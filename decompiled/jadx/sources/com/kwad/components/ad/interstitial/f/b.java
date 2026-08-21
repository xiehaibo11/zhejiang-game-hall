package com.kwad.components.ad.interstitial.f;

import android.content.Context;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.TextView;
import com.bykv.vk.openvk.TTVfConstant;
import com.kwad.components.core.widget.KSCornerImageView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.core.n.g implements View.OnClickListener {
    private static boolean lG;
    private TextView gQ;
    private com.kwad.components.ad.interstitial.d.c jf;
    private KSCornerImageView lB;
    private TextView lC;
    private TextView lD;
    private TextView lE;
    private TextView lF;
    private AdTemplate mAdTemplate;

    public static void d(com.kwad.components.ad.interstitial.d.c cVar) {
        if (lG) {
            return;
        }
        lG = true;
        b bVar = new b();
        Bundle bundle = new Bundle();
        bundle.putString("KEY_TEMPLATE", cVar.mAdTemplate.toJson().toString());
        bVar.setArguments(bundle);
        bVar.e(cVar);
        bVar.show(cVar.hG.getOwnerActivity().getFragmentManager(), "interstitialCloseDialog");
    }

    private void e(com.kwad.components.ad.interstitial.d.c cVar) {
        this.jf = cVar;
    }

    private void i(View view) {
        this.lB = (KSCornerImageView) view.findViewById(R.id.ksad_interstitial_intercept_app_icon);
        this.gQ = (TextView) view.findViewById(R.id.ksad_interstitial_intercept_app_title);
        this.lC = (TextView) view.findViewById(R.id.ksad_interstitial_intercept_dialog_desc);
        this.lD = (TextView) view.findViewById(R.id.ksad_interstitial_intercept_dialog_detail);
        this.lE = (TextView) view.findViewById(R.id.ksad_interstitial_intercept_dialog_btn_continue);
        TextView textView = (TextView) view.findViewById(R.id.ksad_interstitial_intercept_dialog_btn_deny);
        this.lF = textView;
        com.kwad.sdk.d.a.a.a(this, this.lB, this.gQ, this.lC, this.lD, this.lE, textView);
    }

    private void initData() {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        KSImageLoader.loadAppIcon(this.lB, com.kwad.sdk.core.response.b.a.bQ(adInfoCg), this.mAdTemplate, 12);
        this.gQ.setText(com.kwad.sdk.core.response.b.a.bO(adInfoCg));
        this.lC.setText(com.kwad.sdk.core.response.b.a.an(adInfoCg));
        if (com.kwad.sdk.core.response.b.a.aN(this.mAdTemplate)) {
            this.lD.setText(com.kwad.sdk.core.response.b.a.aw(adInfoCg));
        }
    }

    @Override // com.kwad.components.core.n.g
    public final View a(LayoutInflater layoutInflater, ViewGroup viewGroup) {
        String string = getArguments().getString("KEY_TEMPLATE");
        try {
            AdTemplate adTemplate = new AdTemplate();
            this.mAdTemplate = adTemplate;
            adTemplate.parseJson(new JSONObject(string));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        View viewInflate = layoutInflater.inflate(R.layout.ksad_interstitial_exit_intercept_dialog, viewGroup);
        i(viewInflate);
        initData();
        return viewInflate;
    }

    @Override // android.app.DialogFragment, android.app.Fragment
    public final void onActivityCreated(Bundle bundle) {
        super.onActivityCreated(bundle);
        Window window = getDialog().getWindow();
        if (window == null) {
            return;
        }
        getDialog().setCanceledOnTouchOutside(false);
        window.setLayout(-1, -1);
        getDialog().getWindow().setBackgroundDrawable(new ColorDrawable(0));
        setCancelable(false);
        com.kwad.components.ad.interstitial.d.c cVar = this.jf;
        if (cVar != null) {
            com.kwad.sdk.core.report.a.d(cVar.mAdTemplate, new JSONObject(), new j().ci(149).ck(9));
        }
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        com.kwad.components.ad.interstitial.d.c cVar;
        Context context;
        int i;
        if (this.jf != null) {
            if (view.equals(this.lB)) {
                cVar = this.jf;
                context = cVar.hG.getContext();
                i = 127;
            } else if (view.equals(this.gQ)) {
                cVar = this.jf;
                context = cVar.hG.getContext();
                i = 128;
            } else if (view.equals(this.lC)) {
                cVar = this.jf;
                context = cVar.hG.getContext();
                i = 129;
            } else if (view.equals(this.lD)) {
                cVar = this.jf;
                context = cVar.hG.getContext();
                i = TTVfConstant.IMAGE_MODE_SPLASH;
            } else if (view.equals(this.lE)) {
                com.kwad.sdk.core.report.a.c(this.jf.mAdTemplate, (JSONObject) null, new j().ck(9));
            } else if (view.equals(this.lF)) {
                com.kwad.components.ad.interstitial.d.c cVar2 = this.jf;
                cVar2.a(false, -1, cVar2.ex);
                this.jf.hG.dismiss();
                com.kwad.sdk.core.report.a.a(this.jf.mAdTemplate, new j().ci(151).ck(9));
            }
            cVar.a(context, i, 2, 9);
        }
        dismiss();
        lG = false;
    }
}
