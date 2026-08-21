package com.mbridge.msdk.video.dynview.j;

public final class c {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a(int r2) {
            r1 = this;
            r0 = 3
            if (r2 == r0) goto L1b
            r0 = 302(0x12e, float:4.23E-43)
            if (r2 == r0) goto L18
            r0 = 802(0x322, float:1.124E-42)
            if (r2 == r0) goto L15
            r0 = 904(0x388, float:1.267E-42)
            if (r2 == r0) goto L12
            java.lang.String r2 = "mbridge_reward_layer_floor"
            goto L1d
        L12:
            java.lang.String r2 = "mbridge_reward_layer_floor_904"
            goto L1d
        L15:
            java.lang.String r2 = "mbridge_reward_layer_floor_802"
            goto L1d
        L18:
            java.lang.String r2 = "mbridge_reward_layer_floor_302"
            goto L1d
        L1b:
            java.lang.String r2 = "mbridge_reward_layer_floor_bottom"
        L1d:
            return r2
    }

    public final com.mbridge.msdk.video.dynview.c a(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8, int r9, java.lang.String r10) {
            r6 = this;
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            int r1 = com.mbridge.msdk.foundation.tools.v.t(r7)     // Catch: java.lang.Exception -> L84
            r2 = 1
            if (r1 != r2) goto Le
            java.lang.String r2 = "mbridge_reward_end_card_layout_portrait"
            goto L10
        Le:
            java.lang.String r2 = "mbridge_reward_end_card_layout_landscape"
        L10:
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> L84
            r3.<init>()     // Catch: java.lang.Exception -> L84
            java.lang.String r4 = r8.getendcard_url()     // Catch: java.lang.Exception -> L84
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L84
            if (r4 != 0) goto L51
            r3 = 2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L84
            r4.<init>()     // Catch: java.lang.Exception -> L84
            r4.append(r9)     // Catch: java.lang.Exception -> L84
            java.lang.String r5 = ""
            r4.append(r5)     // Catch: java.lang.Exception -> L84
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L84
            java.lang.String r5 = r8.getendcard_url()     // Catch: java.lang.Exception -> L84
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.i.a(r3, r4, r5)     // Catch: java.lang.Exception -> L84
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L84
            r4.<init>()     // Catch: java.lang.Exception -> L84
            java.lang.String r5 = "template_"
            r4.append(r5)     // Catch: java.lang.Exception -> L84
            r4.append(r10)     // Catch: java.lang.Exception -> L84
            r4.append(r1)     // Catch: java.lang.Exception -> L84
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> L84
            java.util.List r3 = com.mbridge.msdk.foundation.tools.x.b(r3, r1)     // Catch: java.lang.Exception -> L84
        L51:
            com.mbridge.msdk.video.dynview.c$a r1 = new com.mbridge.msdk.video.dynview.c$a     // Catch: java.lang.Exception -> L84
            r1.<init>()     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.video.dynview.c$b r1 = r1.a(r2)     // Catch: java.lang.Exception -> L84
            r2 = 4
            com.mbridge.msdk.video.dynview.c$b r1 = r1.a(r2)     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.video.dynview.c$b r1 = r1.a(r7)     // Catch: java.lang.Exception -> L84
            int r7 = com.mbridge.msdk.foundation.tools.v.t(r7)     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.video.dynview.c$b r7 = r1.b(r7)     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.video.dynview.c$b r7 = r7.b(r3)     // Catch: java.lang.Exception -> L84
            int r8 = r8.getDynamicTempCode()     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.video.dynview.c$b r7 = r7.e(r8)     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.video.dynview.c$b r7 = r7.d(r9)     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.video.dynview.c$b r7 = r7.b(r10)     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.video.dynview.c r7 = r7.a()     // Catch: java.lang.Exception -> L84
            return r7
        L84:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            java.lang.String r8 = "ViewOptionWrapper"
            com.mbridge.msdk.foundation.tools.z.d(r8, r7)
            return r0
    }

    public final com.mbridge.msdk.video.dynview.c a(android.content.Context r12, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r13) {
            r11 = this;
            r0 = 0
            if (r13 != 0) goto L4
            return r0
        L4:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Ldc
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> Ldc
            int r1 = com.mbridge.msdk.foundation.tools.ae.h(r1)     // Catch: java.lang.Exception -> Ldc
            float r1 = (float) r1     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> Ldc
            int r2 = com.mbridge.msdk.foundation.tools.ae.g(r2)     // Catch: java.lang.Exception -> Ldc
            float r2 = (float) r2     // Catch: java.lang.Exception -> Ldc
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> Ldc
            r3.<init>()     // Catch: java.lang.Exception -> Ldc
            int r4 = r13.size()     // Catch: java.lang.Exception -> Ldc
            java.lang.String r5 = ""
            r6 = 1
            r7 = 0
            if (r4 <= 0) goto L60
            java.lang.Object r4 = r13.get(r7)     // Catch: java.lang.Exception -> Ldc
            if (r4 == 0) goto L60
            java.lang.Object r4 = r13.get(r7)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> Ldc
            if (r4 == 0) goto L4a
            com.mbridge.msdk.foundation.entity.CampaignEx$c r8 = r4.getRewardTemplateMode()     // Catch: java.lang.Exception -> Ldc
            if (r8 == 0) goto L4a
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r4.getRewardTemplateMode()     // Catch: java.lang.Exception -> Ldc
            int r4 = r4.c()     // Catch: java.lang.Exception -> Ldc
            goto L4b
        L4a:
            r4 = r6
        L4b:
            java.lang.Object r8 = r13.get(r7)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = (com.mbridge.msdk.foundation.entity.CampaignEx) r8     // Catch: java.lang.Exception -> Ldc
            int r8 = r8.getMof_tplid()     // Catch: java.lang.Exception -> Ldc
            java.lang.Object r9 = r13.get(r7)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9     // Catch: java.lang.Exception -> Ldc
            java.lang.String r9 = r9.getMof_template_url()     // Catch: java.lang.Exception -> Ldc
            goto L63
        L60:
            r9 = r5
            r4 = r6
            r8 = r7
        L63:
            if (r8 == 0) goto L96
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Ldc
            if (r10 != 0) goto L96
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ldc
            r3.<init>()     // Catch: java.lang.Exception -> Ldc
            r3.append(r8)     // Catch: java.lang.Exception -> Ldc
            r3.append(r5)     // Catch: java.lang.Exception -> Ldc
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Ldc
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.i.a(r7, r3, r9)     // Catch: java.lang.Exception -> Ldc
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ldc
            r5.<init>()     // Catch: java.lang.Exception -> Ldc
            java.lang.String r9 = "template_"
            r5.append(r9)     // Catch: java.lang.Exception -> Ldc
            r5.append(r8)     // Catch: java.lang.Exception -> Ldc
            r5.append(r4)     // Catch: java.lang.Exception -> Ldc
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> Ldc
            java.util.List r3 = com.mbridge.msdk.foundation.tools.x.b(r3, r5)     // Catch: java.lang.Exception -> Ldc
        L96:
            java.lang.String r5 = "mbridge_same_choice_one_layout_landscape"
            java.lang.String r8 = "mbridge_same_choice_one_layout_portrait"
            r9 = 2
            if (r4 == r6) goto Lb1
            if (r4 == r9) goto Lb2
            android.content.res.Resources r4 = r12.getResources()     // Catch: java.lang.Exception -> Ldc
            android.content.res.Configuration r4 = r4.getConfiguration()     // Catch: java.lang.Exception -> Ldc
            int r4 = r4.orientation     // Catch: java.lang.Exception -> Ldc
            if (r4 != r9) goto Lac
            r7 = r6
        Lac:
            if (r7 == 0) goto Lb0
            r4 = r9
            goto Lb2
        Lb0:
            r4 = r6
        Lb1:
            r5 = r8
        Lb2:
            com.mbridge.msdk.video.dynview.c$a r7 = new com.mbridge.msdk.video.dynview.c$a     // Catch: java.lang.Exception -> Ldc
            r7.<init>()     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c$b r12 = r7.a(r12)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c$b r12 = r12.a(r5)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c$b r12 = r12.a(r6)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c$b r12 = r12.a(r2)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c$b r12 = r12.b(r1)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c$b r12 = r12.a(r13)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c$b r12 = r12.b(r4)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c$b r12 = r12.b(r3)     // Catch: java.lang.Exception -> Ldc
            com.mbridge.msdk.video.dynview.c r12 = r12.a()     // Catch: java.lang.Exception -> Ldc
            return r12
        Ldc:
            r12 = move-exception
            java.lang.String r12 = r12.getMessage()
            java.lang.String r13 = "ViewOptionWrapper"
            com.mbridge.msdk.foundation.tools.z.d(r13, r12)
            return r0
    }

    public final com.mbridge.msdk.video.dynview.c a(android.view.View r12, com.mbridge.msdk.foundation.entity.CampaignEx r13) {
            r11 = this;
            r0 = 0
            if (r13 != 0) goto L4
            return r0
        L4:
            r1 = 102(0x66, float:1.43E-43)
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> Lce
            r2.<init>()     // Catch: java.lang.Exception -> Lce
            r3 = 0
            java.lang.String r4 = ""
            if (r13 == 0) goto L35
            java.lang.String r5 = r13.getCampaignUnitId()     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.foundation.entity.CampaignEx$c r6 = r13.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lce
            if (r6 == 0) goto L2b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r13.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lce
            int r1 = r1.b()     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.foundation.entity.CampaignEx$c r6 = r13.getRewardTemplateMode()     // Catch: java.lang.Exception -> Lce
            java.lang.String r6 = r6.e()     // Catch: java.lang.Exception -> Lce
            goto L2c
        L2b:
            r6 = r4
        L2c:
            java.lang.String r7 = r11.a(r1)     // Catch: java.lang.Exception -> Lce
            boolean r8 = com.mbridge.msdk.video.dynview.i.b.a(r6)     // Catch: java.lang.Exception -> Lce
            goto L39
        L35:
            r8 = r3
            r5 = r4
            r6 = r5
            r7 = r6
        L39:
            com.mbridge.msdk.videocommon.d.b r9 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lce
            java.lang.String r10 = r10.k()     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.videocommon.d.c r5 = r9.a(r10, r5, r3)     // Catch: java.lang.Exception -> Lce
            if (r5 == 0) goto L4f
            int r3 = r5.i()     // Catch: java.lang.Exception -> Lce
        L4f:
            if (r1 == 0) goto L80
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> Lce
            if (r5 != 0) goto L80
            r2 = 1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lce
            r5.<init>()     // Catch: java.lang.Exception -> Lce
            r5.append(r1)     // Catch: java.lang.Exception -> Lce
            r5.append(r4)     // Catch: java.lang.Exception -> Lce
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Exception -> Lce
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.i.a(r2, r4, r6)     // Catch: java.lang.Exception -> Lce
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lce
            r4.<init>()     // Catch: java.lang.Exception -> Lce
            java.lang.String r5 = "template_"
            r4.append(r5)     // Catch: java.lang.Exception -> Lce
            r4.append(r1)     // Catch: java.lang.Exception -> Lce
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lce
            java.util.List r2 = com.mbridge.msdk.foundation.tools.x.b(r2, r4)     // Catch: java.lang.Exception -> Lce
        L80:
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> Lce
            r4.<init>()     // Catch: java.lang.Exception -> Lce
            r4.add(r13)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$a r5 = new com.mbridge.msdk.video.dynview.c$a     // Catch: java.lang.Exception -> Lce
            r5.<init>()     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r5 = r5.a(r7)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r5 = r5.a(r1)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r4 = r5.a(r4)     // Catch: java.lang.Exception -> Lce
            android.content.Context r5 = r12.getContext()     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r4 = r4.a(r5)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r4 = r4.a(r12)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r3 = r4.c(r3)     // Catch: java.lang.Exception -> Lce
            android.content.Context r12 = r12.getContext()     // Catch: java.lang.Exception -> Lce
            int r12 = com.mbridge.msdk.foundation.tools.v.t(r12)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r12 = r3.b(r12)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r12 = r12.d(r1)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r12 = r12.a(r8)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r12 = r12.b(r2)     // Catch: java.lang.Exception -> Lce
            int r13 = r13.getDynamicTempCode()     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c$b r12 = r12.e(r13)     // Catch: java.lang.Exception -> Lce
            com.mbridge.msdk.video.dynview.c r12 = r12.a()     // Catch: java.lang.Exception -> Lce
            return r12
        Lce:
            r12 = move-exception
            java.lang.String r12 = r12.getMessage()
            java.lang.String r13 = "ViewOptionWrapper"
            com.mbridge.msdk.foundation.tools.z.d(r13, r12)
            return r0
    }

    public final com.mbridge.msdk.video.dynview.c b(android.content.Context r11, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r12) {
            r10 = this;
            r0 = 0
            if (r12 == 0) goto Lc4
            int r1 = r12.size()     // Catch: java.lang.Exception -> Lba
            if (r1 != 0) goto Lb
            goto Lc4
        Lb:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lba
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> Lba
            int r1 = com.mbridge.msdk.foundation.tools.ae.h(r1)     // Catch: java.lang.Exception -> Lba
            float r1 = (float) r1     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lba
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> Lba
            int r2 = com.mbridge.msdk.foundation.tools.ae.g(r2)     // Catch: java.lang.Exception -> Lba
            float r2 = (float) r2     // Catch: java.lang.Exception -> Lba
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> Lba
            r3.<init>()     // Catch: java.lang.Exception -> Lba
            r4 = 0
            java.lang.Object r5 = r12.get(r4)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> Lba
            int r5 = r5.getDynamicTempCode()     // Catch: java.lang.Exception -> Lba
            java.lang.Object r6 = r12.get(r4)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6     // Catch: java.lang.Exception -> Lba
            int r6 = r6.getMof_tplid()     // Catch: java.lang.Exception -> Lba
            java.lang.Object r7 = r12.get(r4)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = (com.mbridge.msdk.foundation.entity.CampaignEx) r7     // Catch: java.lang.Exception -> Lba
            java.lang.String r7 = r7.getMof_template_url()     // Catch: java.lang.Exception -> Lba
            int r8 = com.mbridge.msdk.foundation.tools.v.t(r11)     // Catch: java.lang.Exception -> Lba
            if (r6 == 0) goto L7f
            boolean r9 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> Lba
            if (r9 != 0) goto L7f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lba
            r3.<init>()     // Catch: java.lang.Exception -> Lba
            r3.append(r6)     // Catch: java.lang.Exception -> Lba
            java.lang.String r6 = ""
            r3.append(r6)     // Catch: java.lang.Exception -> Lba
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lba
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.i.a(r4, r3, r7)     // Catch: java.lang.Exception -> Lba
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lba
            r4.<init>()     // Catch: java.lang.Exception -> Lba
            java.lang.String r6 = "template_"
            r4.append(r6)     // Catch: java.lang.Exception -> Lba
            r4.append(r8)     // Catch: java.lang.Exception -> Lba
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lba
            java.util.List r3 = com.mbridge.msdk.foundation.tools.x.b(r3, r4)     // Catch: java.lang.Exception -> Lba
        L7f:
            r4 = 1
            if (r8 != r4) goto L85
            java.lang.String r4 = "mbridge_order_layout_list_portrait"
            goto L87
        L85:
            java.lang.String r4 = "mbridge_order_layout_list_landscape"
        L87:
            com.mbridge.msdk.video.dynview.c$a r6 = new com.mbridge.msdk.video.dynview.c$a     // Catch: java.lang.Exception -> Lba
            r6.<init>()     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r4 = r6.a(r4)     // Catch: java.lang.Exception -> Lba
            r6 = 5
            com.mbridge.msdk.video.dynview.c$b r4 = r4.a(r6)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r11 = r4.a(r11)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r11 = r11.a(r2)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r11 = r11.b(r1)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r11 = r11.a(r12)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r11 = r11.b(r8)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r11 = r11.b(r3)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r11 = r11.e(r5)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c$b r11 = r11.d(r5)     // Catch: java.lang.Exception -> Lba
            com.mbridge.msdk.video.dynview.c r11 = r11.a()     // Catch: java.lang.Exception -> Lba
            return r11
        Lba:
            r11 = move-exception
            java.lang.String r11 = r11.getMessage()
            java.lang.String r12 = "ViewOptionWrapper"
            com.mbridge.msdk.foundation.tools.z.d(r12, r11)
        Lc4:
            return r0
    }

    public final com.mbridge.msdk.video.dynview.c b(android.view.View r8, com.mbridge.msdk.foundation.entity.CampaignEx r9) {
            r7 = this;
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            r1 = 3
            java.lang.String r2 = ""
            if (r9 == 0) goto L12
            java.lang.String r2 = r9.getCampaignUnitId()     // Catch: java.lang.Exception -> L68
            java.lang.String r3 = r7.a(r1)     // Catch: java.lang.Exception -> L68
            goto L13
        L12:
            r3 = r2
        L13:
            com.mbridge.msdk.videocommon.d.b r4 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L68
            java.lang.String r5 = r5.k()     // Catch: java.lang.Exception -> L68
            r6 = 0
            com.mbridge.msdk.videocommon.d.c r2 = r4.a(r5, r2, r6)     // Catch: java.lang.Exception -> L68
            if (r2 == 0) goto L2a
            int r6 = r2.i()     // Catch: java.lang.Exception -> L68
        L2a:
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L68
            r2.<init>()     // Catch: java.lang.Exception -> L68
            r2.add(r9)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$a r9 = new com.mbridge.msdk.video.dynview.c$a     // Catch: java.lang.Exception -> L68
            r9.<init>()     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$b r9 = r9.a(r3)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$b r9 = r9.a(r1)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$b r9 = r9.a(r2)     // Catch: java.lang.Exception -> L68
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$b r9 = r9.a(r2)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$b r9 = r9.a(r8)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$b r9 = r9.c(r6)     // Catch: java.lang.Exception -> L68
            android.content.Context r8 = r8.getContext()     // Catch: java.lang.Exception -> L68
            int r8 = com.mbridge.msdk.foundation.tools.v.t(r8)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$b r8 = r9.b(r8)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c$b r8 = r8.d(r1)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.dynview.c r8 = r8.a()     // Catch: java.lang.Exception -> L68
            return r8
        L68:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r9 = "ViewOptionWrapper"
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
            return r0
    }
}
