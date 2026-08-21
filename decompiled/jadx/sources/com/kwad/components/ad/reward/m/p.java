package com.kwad.components.ad.reward.m;

import android.text.SpannableString;
import android.text.style.ForegroundColorSpan;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.reward.model.AdLiveEndResultData;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class p extends s implements View.OnClickListener {
    private ImageView Ah;
    private TextView Ai;
    private TextView Aj;
    private TextView Ak;
    private TextView Al;
    private TextView Am;
    private TextView An;
    private TextView Ao;
    private com.kwad.components.ad.reward.j qx;

    public p(com.kwad.components.ad.reward.j jVar) {
        this.qx = jVar;
    }

    private void b(AdTemplate adTemplate) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        KSImageLoader.loadCircleIcon(this.Ah, com.kwad.sdk.core.response.b.a.bQ(adInfoCg), this.Ah.getResources().getDrawable(R.drawable.ksad_ic_default_user_avatar));
        this.Ai.setText(com.kwad.sdk.core.response.b.a.bO(adInfoCg));
    }

    private void initView() {
        if (this.sw == null) {
            return;
        }
        this.Ah = (ImageView) this.sw.findViewById(R.id.ksad_live_end_page_author_icon);
        this.Ai = (TextView) this.sw.findViewById(R.id.ksad_author_name_txt);
        this.Aj = (TextView) this.sw.findViewById(R.id.ksad_live_end_detail_watch_person_count);
        this.Ak = (TextView) this.sw.findViewById(R.id.ksad_live_end_detail_like_person_count);
        this.Al = (TextView) this.sw.findViewById(R.id.ksad_live_end_detail_watch_time);
        this.Am = (TextView) this.sw.findViewById(R.id.ksad_live_end_bottom_title);
        this.An = (TextView) this.sw.findViewById(R.id.ksad_live_end_bottom_action_btn);
        this.Ao = (TextView) this.sw.findViewById(R.id.ksad_live_end_bottom_des_btn);
        this.An.setOnClickListener(this);
        this.Ao.setOnClickListener(this);
    }

    private static String l(long j) {
        long j2 = j / 3600000;
        long j3 = (j / 60000) - (j2 * 60);
        long j4 = ((j / 1000) - (60 * j3)) - (com.tkay.expressad.d.a.b.P * j2);
        return j2 > 0 ? String.format("%02d:%02d:%02d", Long.valueOf(j2), Long.valueOf(j3), Long.valueOf(j4)) : String.format("%02d:%02d", Long.valueOf(j3), Long.valueOf(j4));
    }

    public final void U(int i) {
        if (this.Am == null || i <= 0) {
            return;
        }
        if (!this.qx.pj) {
            this.Am.setText("已获得奖励");
            return;
        }
        String str = String.format("再停留%s秒，即可获得奖励", Integer.valueOf(i));
        SpannableString spannableString = new SpannableString(str);
        int color = gQ().getResources().getColor(R.color.ksad_reward_main_color);
        spannableString.setSpan(new ForegroundColorSpan(color), 3, 6, 18);
        ForegroundColorSpan foregroundColorSpan = new ForegroundColorSpan(color);
        int length = str.length();
        spannableString.setSpan(foregroundColorSpan, length - 2, length, 18);
        this.Am.setText(spannableString);
    }

    public final void a(com.kwad.components.ad.reward.j jVar, AdLiveEndResultData.AdLivePushEndInfo adLivePushEndInfo, long j) {
        CharSequence charSequence;
        TextView textView;
        this.Ak.setText(adLivePushEndInfo.mDisplayLikeUserCount);
        this.Al.setText(l(adLivePushEndInfo.mLiveDuration));
        this.Aj.setText(adLivePushEndInfo.mDisplayWatchingUserCount);
        if (jVar.pj) {
            String str = String.format("再停留%s秒，即可获得奖励", Integer.valueOf((int) (Math.max(com.kwad.sdk.core.response.b.a.Y(com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate)) - j, 0L) / 1000)));
            SpannableString spannableString = new SpannableString(str);
            int color = gQ().getResources().getColor(R.color.ksad_reward_main_color);
            spannableString.setSpan(new ForegroundColorSpan(color), 3, 6, 18);
            ForegroundColorSpan foregroundColorSpan = new ForegroundColorSpan(color);
            int length = str.length();
            spannableString.setSpan(foregroundColorSpan, length - 2, length, 18);
            textView = this.Am;
            charSequence = spannableString;
        } else {
            textView = this.Am;
            charSequence = "内容很精彩，不要错过哦";
        }
        textView.setText(charSequence);
    }

    @Override // com.kwad.components.ad.reward.m.d
    protected final void a(r rVar) {
        super.a(rVar);
        b(rVar.getAdTemplate());
    }

    public final void h(ViewGroup viewGroup) {
        super.a(viewGroup, R.id.ksad_reward_origin_live_end_page_stub, R.id.ksad_live_end_page_layout_root);
        initView();
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        com.kwad.sdk.core.report.j jVar = new com.kwad.sdk.core.report.j();
        jVar.cm(24);
        if (view.equals(this.An)) {
            this.qx.a(2, view.getContext(), 38, 1, 0L, false, jVar);
        } else if (view.equals(this.Ao)) {
            this.qx.a(2, view.getContext(), 37, 1, 0L, false, jVar);
        }
    }
}
