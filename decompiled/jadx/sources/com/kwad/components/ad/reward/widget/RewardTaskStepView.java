package com.kwad.components.ad.reward.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.components.ad.reward.k.c;
import com.kwad.sdk.R;
import com.kwad.sdk.m.l;
import com.kwad.sdk.widget.DividerView;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class RewardTaskStepView extends LinearLayout {
    private List<c> Bc;
    private String qk;

    public RewardTaskStepView(Context context) {
        super(context);
        this.Bc = new ArrayList();
        kj();
    }

    public RewardTaskStepView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.Bc = new ArrayList();
        kj();
    }

    public RewardTaskStepView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.Bc = new ArrayList();
        kj();
    }

    public RewardTaskStepView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.Bc = new ArrayList();
        kj();
    }

    private void a(int i, String str, String str2, boolean z) {
        ViewGroup viewGroup = (ViewGroup) l.a(getContext(), z ? R.layout.ksad_reward_task_step_item_checked : R.layout.ksad_reward_task_step_item_unchecked, this, false);
        if (z) {
            a(viewGroup, str);
        } else {
            a(viewGroup, i, str2);
        }
        addView(viewGroup);
    }

    private void a(ViewGroup viewGroup, int i, String str) {
        ((TextView) viewGroup.findViewById(R.id.ksad_reward_task_step_item_text)).setText(String.format(str, this.qk));
        ((TextView) viewGroup.findViewById(R.id.ksad_reward_task_step_item_icon_text)).setText(String.valueOf(i));
    }

    private static void a(ViewGroup viewGroup, String str) {
        ((TextView) viewGroup.findViewById(R.id.ksad_reward_task_step_item_text)).setText(str);
    }

    private void af(boolean z) {
        DividerView dividerView = (DividerView) l.a(getContext(), R.layout.ksad_reward_task_dialog_dash, this, false);
        int dimensionPixelSize = getResources().getDimensionPixelSize(R.dimen.ksad_reward_apk_info_card_step_icon_size);
        int dimensionPixelSize2 = getResources().getDimensionPixelSize(R.dimen.ksad_reward_apk_info_card_step_divider_height);
        dividerView.setDividerColor(getResources().getColor(z ? R.color.ksad_reward_main_color : R.color.ksad_reward_undone_color));
        addView(dividerView, dimensionPixelSize, dimensionPixelSize2);
    }

    private void kj() {
        setOrientation(1);
    }

    private void kk() {
        int size = this.Bc.size();
        int i = 0;
        while (i < size) {
            c cVar = this.Bc.get(i);
            int i2 = i + 1;
            a(i2, cVar.jA(), cVar.jB(), cVar.isCompleted());
            if (i < size - 1) {
                af(this.Bc.get(i2).isCompleted());
            }
            i = i2;
        }
    }

    public final void a(List<c> list, String str) {
        if (list == null || list.isEmpty()) {
            return;
        }
        this.qk = str;
        this.Bc.clear();
        this.Bc.addAll(list);
        kk();
    }

    @Override // android.widget.LinearLayout, android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
    }
}
