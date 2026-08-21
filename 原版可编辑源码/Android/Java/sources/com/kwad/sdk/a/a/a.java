package com.kwad.sdk.a.a;

import android.app.Activity;
import android.content.DialogInterface;
import android.view.View;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ak;

public final class a extends com.kwad.components.core.n.d {
    private static a ahr;
    private final DialogInterface.OnDismissListener ahs;
    private final AdTemplate mAdTemplate;
    private final DialogInterface.OnClickListener mOnClickListener;

    private a(Activity activity, AdTemplate adTemplate, DialogInterface.OnDismissListener onDismissListener, DialogInterface.OnClickListener onClickListener) {
        super(activity);
        this.mAdTemplate = adTemplate;
        this.ahs = onDismissListener;
        this.mOnClickListener = onClickListener;
    }

    public static boolean a(Activity activity, DialogInterface.OnDismissListener onDismissListener, DialogInterface.OnClickListener onClickListener) {
        AdTemplate adTemplateYc;
        if (activity == null || activity.isFinishing() || (adTemplateYc = c.yb().yc()) == null) {
            return false;
        }
        return a(activity, adTemplateYc, onDismissListener, onClickListener);
    }

    public static boolean a(Activity activity, AdTemplate adTemplate, DialogInterface.OnDismissListener onDismissListener, DialogInterface.OnClickListener onClickListener) {
        if (activity != null && !activity.isFinishing() && adTemplate != null) {
            a aVar = ahr;
            if (aVar != null && aVar.isShowing()) {
                ahr.dismiss();
            }
            try {
                a aVar2 = new a(activity, adTemplate, onDismissListener, onClickListener);
                aVar2.show();
                ahr = aVar2;
                return true;
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    public static boolean mZ() {
        a aVar = ahr;
        return aVar != null && aVar.isShowing();
    }

    public static boolean xW() {
        a aVar = ahr;
        if (aVar == null || !aVar.isShowing()) {
            return false;
        }
        ahr.dismiss();
        return true;
    }

    @Override
    public final void dismiss() {
        super.dismiss();
        DialogInterface.OnDismissListener onDismissListener = this.ahs;
        if (onDismissListener != null) {
            onDismissListener.onDismiss(this);
        }
        ahr = null;
    }

    @Override
    public final void g(View view) {
        TextView textView = (TextView) view.findViewById(R.id.ksad_install_tips_content);
        TextView textView2 = (TextView) view.findViewById(R.id.ksad_install_cancel);
        TextView textView3 = (TextView) view.findViewById(R.id.ksad_install_tv);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        String strA = d.A(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
        if (strA.equals("")) {
            strA = this.mContext.getString(R.string.ksad_install_tips, com.kwad.sdk.core.response.b.a.ao(adInfoCg));
        }
        textView.setText(strA);
        textView3.setText(d.yh());
        textView2.setText(d.yi());
        textView2.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view2) {
                a.this.dismiss();
                if (a.this.mOnClickListener != null) {
                    a.this.mOnClickListener.onClick(a.this, -2);
                }
            }
        });
        textView3.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view2) {
                if (a.this.mOnClickListener != null) {
                    a.this.mOnClickListener.onClick(a.this, -1);
                }
                if (ak.an(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext(), com.kwad.sdk.core.download.a.B(com.kwad.sdk.core.response.b.d.cg(a.this.mAdTemplate)))) {
                    com.kwad.sdk.core.report.a.i(a.this.mAdTemplate, 1);
                }
            }
        });
    }

    @Override
    public final int getLayoutId() {
        return R.layout.ksad_install_dialog;
    }
}
