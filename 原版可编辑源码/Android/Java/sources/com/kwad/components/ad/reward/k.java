package com.kwad.components.ad.reward;

import android.app.Activity;
import android.app.DialogFragment;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.TextUtils;
import android.text.style.ForegroundColorSpan;
import android.text.style.StyleSpan;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.reward.widget.RewardTaskStepView;
import com.kwad.components.core.widget.KSCornerImageView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.t;
import org.json.JSONException;
import org.json.JSONObject;

public final class k extends com.kwad.components.core.n.g {
    private static String qb = "进阶奖励还差 %s 步到手，\n确认放弃吗？";
    private static String qc = "再观看%ss可获得基础奖励，\n确认放弃吗？";
    private AdTemplate mAdTemplate;
    private a qa;

    public interface a extends com.kwad.components.core.webview.b.e.c {
        void g(int i, int i2);

        void gn();
    }

    public static class b implements a {
        @Override
        public void H(boolean z) {
        }

        @Override
        public void g(int i, int i2) {
        }

        @Override
        public void gg() {
        }

        @Override
        public void gn() {
        }

        @Override
        public void go() {
        }

        @Override
        public void gp() {
        }
    }

    public static class c extends com.kwad.sdk.core.response.a.a {
        public com.kwad.components.ad.reward.k.b.a pA;
        public com.kwad.components.ad.reward.k.a.a pB;
        public String qh;
        public String qi;
        public String qj;
        public String qk;
        public String ql;
        public String qm;
        public String qn;
        public String qo;
        public int style;
        public String title;

        private c() {
        }

        static c I(String str) {
            c cVar = new c();
            cVar.style = 0;
            cVar.title = str;
            cVar.qh = "关闭广告";
            cVar.qi = "继续观看";
            return cVar;
        }

        public static c J(String str) {
            c cVar = new c();
            cVar.style = 0;
            cVar.title = str;
            cVar.qh = "奖励不要了";
            cVar.qi = "返回";
            return cVar;
        }

        public static c K(String str) {
            c cVar = new c();
            try {
                cVar.parseJson(new JSONObject(str));
            } catch (JSONException unused) {
            }
            return cVar;
        }

        private void L(String str) {
            this.qo = str;
        }

        static c a(com.kwad.components.ad.reward.k.a.a aVar, AdTemplate adTemplate, String str) {
            c cVar = new c();
            cVar.style = 2;
            cVar.pB = aVar;
            cVar.qk = str;
            cVar.ql = com.kwad.sdk.core.response.b.a.bQ(com.kwad.sdk.core.response.b.d.cg(adTemplate));
            return cVar;
        }

        static c a(com.kwad.components.ad.reward.k.b.a aVar, AdTemplate adTemplate, String str) {
            c cVar = new c();
            cVar.style = 1;
            cVar.pA = aVar;
            cVar.qk = str;
            cVar.ql = com.kwad.sdk.core.response.b.a.bQ(com.kwad.sdk.core.response.b.d.cg(adTemplate));
            return cVar;
        }

        public static c a(AdInfo adInfo, long j) {
            c cVar = new c();
            cVar.style = 5;
            AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(adInfo);
            cVar.qm = com.kwad.sdk.core.response.b.a.an(adInfo);
            String name = adProductInfoCy.getName();
            cVar.title = name;
            if (TextUtils.isEmpty(name)) {
                cVar.title = com.kwad.sdk.core.response.b.a.ap(adInfo);
            }
            cVar.ql = adProductInfoCy.getIcon();
            cVar.L(j > 0 ? String.valueOf(j) : null);
            return cVar;
        }

        static c a(AdTemplate adTemplate, long j) {
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
            c cVar = new c();
            cVar.style = 8;
            cVar.ql = com.kwad.sdk.core.response.b.a.bQ(adInfoCg);
            cVar.title = String.format("再看%s秒，可获得奖励", Long.valueOf(j));
            cVar.qm = com.kwad.sdk.core.response.b.a.bO(adInfoCg);
            cVar.qn = com.kwad.sdk.core.response.b.a.an(adInfoCg);
            cVar.qh = "放弃奖励";
            cVar.qi = "继续观看";
            cVar.qj = com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate));
            return cVar;
        }

        static c b(AdTemplate adTemplate, long j) {
            AdMatrixInfo.MerchantLiveReservationInfo merchantLiveReservationInfoBL = com.kwad.sdk.core.response.b.b.bL(adTemplate);
            c cVar = new c();
            cVar.style = 8;
            cVar.ql = merchantLiveReservationInfoBL.userHeadUrl;
            cVar.title = String.format("再看%s秒，可获得奖励", Long.valueOf(j));
            cVar.qm = merchantLiveReservationInfoBL.title;
            cVar.qh = "放弃奖励";
            cVar.qi = "继续观看";
            cVar.qj = com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate));
            return cVar;
        }

        static c h(AdInfo adInfo) {
            c cVar = new c();
            cVar.style = 4;
            AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(adInfo);
            cVar.title = com.kwad.sdk.core.response.b.a.an(adInfo);
            cVar.ql = adProductInfoCy.getIcon();
            return cVar;
        }

        static c i(long j) {
            c cVar = new c();
            cVar.style = 6;
            cVar.qh = "残忍离开";
            cVar.qi = "留下看看";
            cVar.L(j > 0 ? String.valueOf(j) : null);
            return cVar;
        }

        @Override
        public void afterParseJson(JSONObject jSONObject) {
            super.afterParseJson(jSONObject);
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("mLaunchAppTask");
            if (jSONObjectOptJSONObject != null) {
                if (this.pA == null) {
                    this.pA = new com.kwad.components.ad.reward.k.b.a();
                }
                this.pA.parseJson(jSONObjectOptJSONObject);
            }
            JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject("mLandPageOpenTask");
            if (jSONObjectOptJSONObject2 != null) {
                if (this.pB == null) {
                    this.pB = new com.kwad.components.ad.reward.k.a.a();
                }
                this.pB.parseJson(jSONObjectOptJSONObject2);
            }
        }

        @Override
        public void afterToJson(JSONObject jSONObject) {
            super.afterToJson(jSONObject);
            com.kwad.components.ad.reward.k.b.a aVar = this.pA;
            if (aVar != null) {
                t.a(jSONObject, "mLaunchAppTask", aVar);
            }
            com.kwad.components.ad.reward.k.a.a aVar2 = this.pB;
            if (aVar2 != null) {
                t.a(jSONObject, "mLandPageOpenTask", aVar2);
            }
        }

        public final int getStyle() {
            return this.style;
        }

        public final String getTitle() {
            return this.title;
        }

        public final String gq() {
            return TextUtils.isEmpty(this.qh) ? "关闭广告" : this.qh;
        }

        public final String gr() {
            return TextUtils.isEmpty(this.qi) ? "继续观看" : this.qi;
        }

        public final com.kwad.components.ad.reward.k.b.a gs() {
            return this.pA;
        }

        public final com.kwad.components.ad.reward.k.a.a gt() {
            return this.pB;
        }

        public final String gu() {
            return this.ql;
        }

        public final String gv() {
            return this.qm;
        }

        public final String gw() {
            return this.qn;
        }

        public final String gx() {
            return TextUtils.isEmpty(this.qo) ? "" : String.format("再看%s秒，可获得优惠", this.qo);
        }
    }

    public static c H(String str) {
        return c.J(str);
    }

    private static View a(final DialogFragment dialogFragment, LayoutInflater layoutInflater, ViewGroup viewGroup, c cVar, final a aVar) {
        View viewInflate = layoutInflater.inflate(R.layout.ksad_video_close_dialog, viewGroup, false);
        ((TextView) viewInflate.findViewById(R.id.ksad_title)).setText(cVar.getTitle());
        TextView textView = (TextView) viewInflate.findViewById(R.id.ksad_close_btn);
        TextView textView2 = (TextView) viewInflate.findViewById(R.id.ksad_continue_btn);
        textView.setText(cVar.gq());
        textView2.setText(cVar.gr());
        textView.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                dialogFragment.dismiss();
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.H(false);
                }
            }
        });
        textView2.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                dialogFragment.dismiss();
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.gp();
                }
            }
        });
        return viewInflate;
    }

    private static View a(DialogFragment dialogFragment, LayoutInflater layoutInflater, ViewGroup viewGroup, c cVar, AdTemplate adTemplate, a aVar) {
        return a(cVar.gs(), dialogFragment, layoutInflater, viewGroup, cVar, adTemplate, aVar);
    }

    private static View a(com.kwad.components.ad.reward.k.a aVar, final DialogFragment dialogFragment, LayoutInflater layoutInflater, ViewGroup viewGroup, c cVar, AdTemplate adTemplate, final a aVar2) {
        View viewInflate = layoutInflater.inflate(R.layout.ksad_reward_task_launch_app_dialog, viewGroup, false);
        if (aVar instanceof com.kwad.components.ad.reward.k.b.a) {
            com.kwad.components.ad.reward.k.b.a.a((com.kwad.components.ad.reward.k.b.a) aVar, viewInflate.getContext(), adTemplate);
        }
        ((RewardTaskStepView) viewInflate.findViewById(R.id.ksad_reward_task_dialog_steps)).a(aVar.jw(), cVar.qk);
        KSImageLoader.loadAppIcon((ImageView) viewInflate.findViewById(R.id.ksad_reward_task_dialog_icon), cVar.gu(), adTemplate, 12);
        TextView textView = (TextView) viewInflate.findViewById(R.id.ksad_reward_task_dialog_abandon);
        TextView textView2 = (TextView) viewInflate.findViewById(R.id.ksad_reward_task_dialog_continue);
        TextView textView3 = (TextView) viewInflate.findViewById(R.id.ksad_reward_task_dialog_title);
        StringBuilder sb = new StringBuilder();
        sb.append(aVar.jx());
        String string = sb.toString();
        String str = cVar.qk;
        boolean zEquals = "0".equals(str);
        String str2 = zEquals ? String.format(qb, string) : String.format(qc, str);
        int iIndexOf = zEquals ? str2.indexOf(string) : str2.indexOf(str);
        if (iIndexOf < 0) {
            textView3.setText(str2);
        } else {
            int i = zEquals ? iIndexOf + 1 : str.length() > 1 ? iIndexOf + 3 : iIndexOf + 2;
            ForegroundColorSpan foregroundColorSpan = new ForegroundColorSpan(viewInflate.getContext().getResources().getColor(R.color.ksad_reward_main_color));
            SpannableString spannableString = new SpannableString(str2);
            spannableString.setSpan(foregroundColorSpan, iIndexOf, i, 17);
            textView3.setText(spannableString);
        }
        textView.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                dialogFragment.dismiss();
                a aVar3 = aVar2;
                if (aVar3 != null) {
                    aVar3.H(false);
                }
            }
        });
        textView2.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                dialogFragment.dismiss();
                a aVar3 = aVar2;
                if (aVar3 != null) {
                    aVar3.gp();
                }
            }
        });
        return viewInflate;
    }

    private View a(final k kVar, LayoutInflater layoutInflater, ViewGroup viewGroup, c cVar, final a aVar) {
        View viewInflate = layoutInflater.inflate(R.layout.ksad_video_close_extend_dialog, viewGroup, false);
        ((TextView) viewInflate.findViewById(R.id.ksad_reward_close_extend_dialog_play_time_tips)).setText(e(viewInflate.getContext(), cVar.qo));
        TextView textView = (TextView) viewInflate.findViewById(R.id.ksad_reward_close_extend_dialog_btn_deny);
        TextView textView2 = (TextView) viewInflate.findViewById(R.id.ksad_reward_close_extend_dialog_btn_continue);
        textView.setText(cVar.gq());
        textView2.setText(cVar.gr());
        textView.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                kVar.dismiss();
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.H(false);
                }
            }
        });
        textView2.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                kVar.dismiss();
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.gp();
                }
            }
        });
        return viewInflate;
    }

    public static c a(j jVar, String str) {
        int i;
        AdTemplate adTemplate = jVar.mAdTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        com.kwad.components.ad.reward.k.b.a aVar = jVar.pA;
        com.kwad.components.ad.reward.k.a.a aVar2 = jVar.pB;
        int i2 = jVar.pC;
        boolean zF = com.kwad.sdk.core.response.b.d.f(adTemplate, com.kwad.components.ad.reward.a.b.k(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
        int i3 = 0;
        if (zF || com.kwad.sdk.core.response.b.d.s(adTemplate)) {
            int iV = (int) com.kwad.sdk.core.response.b.a.V(adInfoCg);
            int iG = com.kwad.sdk.core.response.b.a.G(adInfoCg);
            if (iV > iG) {
                iV = iG;
            }
            long playDuration = jVar.oV.getPlayDuration();
            if (playDuration < (iV * 1000) - 800 && (i = (int) (iV - ((playDuration / 1000.0f) + 0.5f))) >= 0) {
                i3 = i;
            }
        }
        return (!zF || aVar == null) ? (!com.kwad.sdk.core.response.b.d.s(adTemplate) || aVar2 == null) ? com.kwad.components.ad.reward.a.b.i(adInfoCg) ? c.h(adInfoCg) : (com.kwad.sdk.core.response.b.a.bN(adInfoCg) == 1 && com.kwad.components.ad.reward.a.b.gM() == 1) ? c.a(adInfoCg, i2) : com.kwad.sdk.core.response.b.a.bK(adInfoCg) ? c.J(str) : com.kwad.sdk.core.response.b.a.cw(adInfoCg) ? c.a(adTemplate, i2) : com.kwad.sdk.core.response.b.a.aN(adTemplate) ? c.b(adTemplate, i2) : com.kwad.components.ad.reward.a.b.gG() == 1 ? c.i(i2) : c.I(str) : c.a(aVar2, adTemplate, String.valueOf(i3)) : c.a(aVar, adTemplate, String.valueOf(i3));
    }

    public static k a(Activity activity, AdTemplate adTemplate, c cVar, a aVar) {
        k kVar = new k();
        Bundle bundle = new Bundle();
        bundle.putString("key_params_json", cVar.toJson().toString());
        bundle.putString("key_template_json", adTemplate.toJson().toString());
        kVar.setArguments(bundle);
        kVar.a(aVar);
        kVar.show(activity.getFragmentManager(), "videoCloseDialog");
        return kVar;
    }

    private void a(a aVar) {
        this.qa = aVar;
    }

    private static View b(DialogFragment dialogFragment, LayoutInflater layoutInflater, ViewGroup viewGroup, c cVar, AdTemplate adTemplate, a aVar) {
        return a(cVar.gt(), dialogFragment, layoutInflater, viewGroup, cVar, adTemplate, aVar);
    }

    private static View c(final DialogFragment dialogFragment, LayoutInflater layoutInflater, ViewGroup viewGroup, c cVar, AdTemplate adTemplate, final a aVar) {
        View viewInflate = layoutInflater.inflate(R.layout.ksad_reward_order_dialog, viewGroup, false);
        KSImageLoader.loadImage((KSCornerImageView) viewInflate.findViewById(R.id.ksad_reward_order_dialog_icon), cVar.ql, adTemplate);
        ((TextView) viewInflate.findViewById(R.id.ksad_reward_order_dialog_desc)).setText(cVar.getTitle());
        viewInflate.findViewById(R.id.ksad_reward_order_dialog_btn_close).setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                dialogFragment.dismiss();
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.gp();
                }
            }
        });
        viewInflate.findViewById(R.id.ksad_reward_order_dialog_btn_view_detail).setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.gn();
                }
            }
        });
        viewInflate.findViewById(R.id.ksad_reward_order_dialog_btn_deny).setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                dialogFragment.dismiss();
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.H(false);
                }
            }
        });
        return viewInflate;
    }

    private static SpannableString e(Context context, String str) {
        SpannableString spannableString = new SpannableString("再看" + str + "秒，即可获得奖励");
        ForegroundColorSpan foregroundColorSpan = new ForegroundColorSpan(com.kwad.sdk.d.a.a.getColor(context, R.color.ksad_reward_main_color));
        ForegroundColorSpan foregroundColorSpan2 = new ForegroundColorSpan(com.kwad.sdk.d.a.a.getColor(context, R.color.ksad_reward_main_color));
        StyleSpan styleSpan = new StyleSpan(1);
        int length = spannableString.length();
        spannableString.setSpan(foregroundColorSpan, 2, length - 7, 34);
        spannableString.setSpan(foregroundColorSpan2, length - 2, length, 34);
        spannableString.setSpan(styleSpan, 0, length, 34);
        return spannableString;
    }

    @Override
    public final View a(LayoutInflater layoutInflater, ViewGroup viewGroup) {
        View viewA;
        Bundle arguments = getArguments();
        String string = arguments.getString("key_params_json");
        try {
            String string2 = arguments.getString("key_template_json");
            AdTemplate adTemplate = new AdTemplate();
            this.mAdTemplate = adTemplate;
            adTemplate.parseJson(new JSONObject(string2));
        } catch (Throwable unused) {
        }
        c cVarK = c.K(string);
        int style = cVarK.getStyle();
        if (style == 1) {
            viewA = a(this, layoutInflater, viewGroup, cVarK, this.mAdTemplate, this.qa);
        } else if (style == 2) {
            viewA = b(this, layoutInflater, viewGroup, cVarK, this.mAdTemplate, this.qa);
        } else if (style == 4) {
            viewA = c(this, layoutInflater, viewGroup, cVarK, this.mAdTemplate, this.qa);
            com.kwad.components.core.t.g.a(new com.kwad.components.core.widget.e(), (ViewGroup) viewA);
        } else if (style == 5) {
            com.kwad.components.ad.reward.m.j jVar = new com.kwad.components.ad.reward.m.j(this, this.mAdTemplate, layoutInflater, viewGroup, this.qa);
            jVar.a(cVarK);
            viewA = jVar.gQ();
        } else if (style == 6) {
            viewA = a(this, layoutInflater, viewGroup, cVarK, this.qa);
        } else if (style != 8) {
            viewA = a((DialogFragment) this, layoutInflater, viewGroup, cVarK, this.qa);
        } else {
            com.kwad.components.ad.reward.m.m mVar = new com.kwad.components.ad.reward.m.m(this, this.mAdTemplate, layoutInflater, viewGroup, this.qa);
            mVar.a(cVarK);
            viewA = mVar.gQ();
        }
        getDialog().setOnKeyListener(new DialogInterface.OnKeyListener() {
            @Override
            public final boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                return i == 4 && keyEvent.getAction() == 0;
            }
        });
        return viewA;
    }

    @Override
    public final void onActivityCreated(Bundle bundle) {
        super.onActivityCreated(bundle);
        Window window = getDialog().getWindow();
        if (window == null) {
            return;
        }
        getDialog().setCanceledOnTouchOutside(false);
        window.setLayout(-1, -1);
        getDialog().getWindow().setBackgroundDrawable(new ColorDrawable(0));
        a aVar = this.qa;
        if (aVar != null) {
            aVar.gg();
        }
    }
}
