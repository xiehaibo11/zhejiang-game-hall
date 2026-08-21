package com.kwad.components.ad.reward.widget;

public class RewardTaskStepView extends android.widget.LinearLayout {
    private java.util.List<com.kwad.components.ad.reward.k.c> Bc;
    private java.lang.String qk;

    public RewardTaskStepView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.Bc = r1
            r0.kj()
            return
    }

    public RewardTaskStepView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.Bc = r1
            r0.kj()
            return
    }

    public RewardTaskStepView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.Bc = r1
            r0.kj()
            return
    }

    public RewardTaskStepView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.Bc = r1
            r0.kj()
            return
    }

    private void a(int r4, java.lang.String r5, java.lang.String r6, boolean r7) {
            r3 = this;
            if (r7 == 0) goto L5
            int r0 = com.kwad.sdk.R.layout.ksad_reward_task_step_item_checked
            goto L7
        L5:
            int r0 = com.kwad.sdk.R.layout.ksad_reward_task_step_item_unchecked
        L7:
            android.content.Context r1 = r3.getContext()
            r2 = 0
            android.view.View r0 = com.kwad.sdk.m.l.a(r1, r0, r3, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r7 == 0) goto L18
            a(r0, r5)
            goto L1b
        L18:
            r3.a(r0, r4, r6)
        L1b:
            r3.addView(r0)
            return
    }

    private void a(android.view.ViewGroup r5, int r6, java.lang.String r7) {
            r4 = this;
            int r0 = com.kwad.sdk.R.id.ksad_reward_task_step_item_text
            android.view.View r0 = r5.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r4.qk
            r3 = 0
            r1[r3] = r2
            java.lang.String r7 = java.lang.String.format(r7, r1)
            r0.setText(r7)
            int r7 = com.kwad.sdk.R.id.ksad_reward_task_step_item_icon_text
            android.view.View r5 = r5.findViewById(r7)
            android.widget.TextView r5 = (android.widget.TextView) r5
            java.lang.String r6 = java.lang.String.valueOf(r6)
            r5.setText(r6)
            return
    }

    private static void a(android.view.ViewGroup r1, java.lang.String r2) {
            int r0 = com.kwad.sdk.R.id.ksad_reward_task_step_item_text
            android.view.View r1 = r1.findViewById(r0)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r1.setText(r2)
            return
    }

    private void af(boolean r5) {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_reward_task_dialog_dash
            r2 = 0
            android.view.View r0 = com.kwad.sdk.m.l.a(r0, r1, r4, r2)
            com.kwad.sdk.widget.DividerView r0 = (com.kwad.sdk.widget.DividerView) r0
            android.content.res.Resources r1 = r4.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_apk_info_card_step_icon_size
            int r1 = r1.getDimensionPixelSize(r2)
            android.content.res.Resources r2 = r4.getResources()
            int r3 = com.kwad.sdk.R.dimen.ksad_reward_apk_info_card_step_divider_height
            int r2 = r2.getDimensionPixelSize(r3)
            if (r5 == 0) goto L26
            int r5 = com.kwad.sdk.R.color.ksad_reward_main_color
            goto L28
        L26:
            int r5 = com.kwad.sdk.R.color.ksad_reward_undone_color
        L28:
            android.content.res.Resources r3 = r4.getResources()
            int r5 = r3.getColor(r5)
            r0.setDividerColor(r5)
            r4.addView(r0, r1, r2)
            return
    }

    private void kj() {
            r1 = this;
            r0 = 1
            r1.setOrientation(r0)
            return
    }

    private void kk() {
            r6 = this;
            java.util.List<com.kwad.components.ad.reward.k.c> r0 = r6.Bc
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L37
            java.util.List<com.kwad.components.ad.reward.k.c> r2 = r6.Bc
            java.lang.Object r2 = r2.get(r1)
            com.kwad.components.ad.reward.k.c r2 = (com.kwad.components.ad.reward.k.c) r2
            int r3 = r1 + 1
            java.lang.String r4 = r2.jA()
            java.lang.String r5 = r2.jB()
            boolean r2 = r2.isCompleted()
            r6.a(r3, r4, r5, r2)
            int r2 = r0 + (-1)
            if (r1 >= r2) goto L35
            java.util.List<com.kwad.components.ad.reward.k.c> r1 = r6.Bc
            java.lang.Object r1 = r1.get(r3)
            com.kwad.components.ad.reward.k.c r1 = (com.kwad.components.ad.reward.k.c) r1
            boolean r1 = r1.isCompleted()
            r6.af(r1)
        L35:
            r1 = r3
            goto L7
        L37:
            return
    }

    public final void a(java.util.List<com.kwad.components.ad.reward.k.c> r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L18
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L9
            goto L18
        L9:
            r1.qk = r3
            java.util.List<com.kwad.components.ad.reward.k.c> r3 = r1.Bc
            r3.clear()
            java.util.List<com.kwad.components.ad.reward.k.c> r3 = r1.Bc
            r3.addAll(r2)
            r1.kk()
        L18:
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r1) {
            r0 = this;
            super.onDraw(r1)
            return
    }
}
