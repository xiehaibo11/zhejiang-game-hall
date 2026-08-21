package com.tkay.expressad.video.dynview.j;

public final class c {
    private static final java.lang.String a = "ViewOptionWrapper";
    private static final java.lang.String b = "\\.xml";
    private static final java.lang.String c = "\\/xml";

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.video.dynview.c a(android.content.Context r4, com.tkay.expressad.foundation.d.c r5, int r6) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            int r1 = com.tkay.expressad.foundation.h.k.b(r4)     // Catch: java.lang.Exception -> L41
            r2 = 1
            if (r1 != r2) goto Le
            java.lang.String r1 = "tkay_reward_end_card_layout_portrait"
            goto L10
        Le:
            java.lang.String r1 = "tkay_reward_end_card_layout_landscape"
        L10:
            java.lang.String r2 = ""
            com.tkay.expressad.video.dynview.c$a r3 = new com.tkay.expressad.video.dynview.c$a     // Catch: java.lang.Exception -> L41
            r3.<init>()     // Catch: java.lang.Exception -> L41
            com.tkay.expressad.video.dynview.c$b r1 = r3.a(r1)     // Catch: java.lang.Exception -> L41
            r3 = 4
            com.tkay.expressad.video.dynview.c$b r1 = r1.a(r3)     // Catch: java.lang.Exception -> L41
            com.tkay.expressad.video.dynview.c$b r1 = r1.a(r4)     // Catch: java.lang.Exception -> L41
            int r4 = com.tkay.expressad.foundation.h.k.b(r4)     // Catch: java.lang.Exception -> L41
            com.tkay.expressad.video.dynview.c$b r4 = r1.b(r4)     // Catch: java.lang.Exception -> L41
            com.tkay.expressad.video.dynview.c$b r4 = r4.b(r2)     // Catch: java.lang.Exception -> L41
            int r5 = r5.k()     // Catch: java.lang.Exception -> L41
            com.tkay.expressad.video.dynview.c$b r4 = r4.e(r5)     // Catch: java.lang.Exception -> L41
            com.tkay.expressad.video.dynview.c$b r4 = r4.d(r6)     // Catch: java.lang.Exception -> L41
            com.tkay.expressad.video.dynview.c r4 = r4.a()     // Catch: java.lang.Exception -> L41
            return r4
        L41:
            r4 = move-exception
            r4.getMessage()
            return r0
    }

    public static com.tkay.expressad.video.dynview.c a(android.content.Context r9, java.util.List<com.tkay.expressad.foundation.d.c> r10) {
            r0 = 0
            if (r10 != 0) goto L4
            return r0
        L4:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L97
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L97
            int r1 = com.tkay.expressad.foundation.h.t.f(r1)     // Catch: java.lang.Exception -> L97
            float r1 = (float) r1     // Catch: java.lang.Exception -> L97
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L97
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L97
            int r2 = com.tkay.expressad.foundation.h.t.e(r2)     // Catch: java.lang.Exception -> L97
            float r2 = (float) r2     // Catch: java.lang.Exception -> L97
            java.lang.String r3 = ""
            int r4 = r10.size()     // Catch: java.lang.Exception -> L97
            r5 = 1
            if (r4 <= 0) goto L59
            r4 = 0
            java.lang.Object r6 = r10.get(r4)     // Catch: java.lang.Exception -> L97
            if (r6 == 0) goto L59
            java.lang.Object r6 = r10.get(r4)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.d.c r6 = (com.tkay.expressad.foundation.d.c) r6     // Catch: java.lang.Exception -> L97
            if (r6 == 0) goto L45
            com.tkay.expressad.foundation.d.c$c r7 = r6.M()     // Catch: java.lang.Exception -> L97
            if (r7 == 0) goto L45
            com.tkay.expressad.foundation.d.c$c r6 = r6.M()     // Catch: java.lang.Exception -> L97
            int r6 = r6.c()     // Catch: java.lang.Exception -> L97
            goto L46
        L45:
            r6 = r5
        L46:
            java.lang.Object r7 = r10.get(r4)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.d.c r7 = (com.tkay.expressad.foundation.d.c) r7     // Catch: java.lang.Exception -> L97
            r7.as()     // Catch: java.lang.Exception -> L97
            java.lang.Object r4 = r10.get(r4)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4     // Catch: java.lang.Exception -> L97
            r4.aq()     // Catch: java.lang.Exception -> L97
            goto L5a
        L59:
            r6 = r5
        L5a:
            java.lang.String r4 = "tkay_same_choice_one_layout_landscape"
            java.lang.String r7 = "tkay_same_choice_one_layout_portrait"
            r8 = 2
            if (r6 == r5) goto L6c
            if (r6 == r8) goto L6d
            boolean r6 = com.tkay.expressad.video.dynview.i.c.a(r9)     // Catch: java.lang.Exception -> L97
            if (r6 == 0) goto L6b
            r6 = r8
            goto L6d
        L6b:
            r6 = r5
        L6c:
            r4 = r7
        L6d:
            com.tkay.expressad.video.dynview.c$a r7 = new com.tkay.expressad.video.dynview.c$a     // Catch: java.lang.Exception -> L97
            r7.<init>()     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r7.a(r9)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.a(r4)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.a(r5)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.a(r2)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.b(r1)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.a(r10)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.b(r6)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.b(r3)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c r9 = r9.a()     // Catch: java.lang.Exception -> L97
            return r9
        L97:
            r9 = move-exception
            r9.getMessage()
            return r0
    }

    public static com.tkay.expressad.video.dynview.c a(android.view.View r9, com.tkay.expressad.foundation.d.c r10) {
            r0 = 0
            if (r10 != 0) goto L4
            return r0
        L4:
            r1 = 102(0x66, float:1.43E-43)
            r2 = 0
            java.lang.String r3 = ""
            if (r10 == 0) goto L30
            java.lang.String r4 = r10.K()     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.d.c$c r5 = r10.M()     // Catch: java.lang.Exception -> L97
            if (r5 == 0) goto L26
            com.tkay.expressad.foundation.d.c$c r1 = r10.M()     // Catch: java.lang.Exception -> L97
            int r1 = r1.b()     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.d.c$c r5 = r10.M()     // Catch: java.lang.Exception -> L97
            java.lang.String r5 = r5.e()     // Catch: java.lang.Exception -> L97
            goto L27
        L26:
            r5 = r3
        L27:
            java.lang.String r6 = a(r1)     // Catch: java.lang.Exception -> L97
            boolean r5 = com.tkay.expressad.video.dynview.i.c.a(r5)     // Catch: java.lang.Exception -> L97
            goto L33
        L30:
            r5 = r2
            r4 = r3
            r6 = r4
        L33:
            com.tkay.expressad.videocommon.e.c r7 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.foundation.b.b r8 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L97
            java.lang.String r8 = r8.e()     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.videocommon.e.d r4 = r7.a(r8, r4, r2)     // Catch: java.lang.Exception -> L97
            if (r4 == 0) goto L49
            int r2 = r4.h()     // Catch: java.lang.Exception -> L97
        L49:
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L97
            r4.<init>()     // Catch: java.lang.Exception -> L97
            r4.add(r10)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$a r7 = new com.tkay.expressad.video.dynview.c$a     // Catch: java.lang.Exception -> L97
            r7.<init>()     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r6 = r7.a(r6)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r6 = r6.a(r1)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r4 = r6.a(r4)     // Catch: java.lang.Exception -> L97
            android.content.Context r6 = r9.getContext()     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r4 = r4.a(r6)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r4 = r4.a(r9)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r2 = r4.c(r2)     // Catch: java.lang.Exception -> L97
            android.content.Context r9 = r9.getContext()     // Catch: java.lang.Exception -> L97
            int r9 = com.tkay.expressad.foundation.h.k.b(r9)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r2.b(r9)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.d(r1)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.a(r5)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.b(r3)     // Catch: java.lang.Exception -> L97
            int r10 = r10.k()     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c$b r9 = r9.e(r10)     // Catch: java.lang.Exception -> L97
            com.tkay.expressad.video.dynview.c r9 = r9.a()     // Catch: java.lang.Exception -> L97
            return r9
        L97:
            r9 = move-exception
            r9.getMessage()
            return r0
    }

    private static java.lang.String a(int r1) {
            r0 = 3
            if (r1 == r0) goto L1b
            r0 = 302(0x12e, float:4.23E-43)
            if (r1 == r0) goto L18
            r0 = 802(0x322, float:1.124E-42)
            if (r1 == r0) goto L15
            r0 = 904(0x388, float:1.267E-42)
            if (r1 == r0) goto L12
            java.lang.String r1 = "tkay_reward_layer_floor"
            goto L1d
        L12:
            java.lang.String r1 = "tkay_reward_layer_floor_904"
            goto L1d
        L15:
            java.lang.String r1 = "tkay_reward_layer_floor_802"
            goto L1d
        L18:
            java.lang.String r1 = "tkay_reward_layer_floor_302"
            goto L1d
        L1b:
            java.lang.String r1 = "tkay_reward_layer_floor_bottom"
        L1d:
            return r1
    }

    public static com.tkay.expressad.video.dynview.c b(android.content.Context r8, java.util.List<com.tkay.expressad.foundation.d.c> r9) {
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            int r1 = r9.size()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L8a
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L8a
            int r1 = com.tkay.expressad.foundation.h.t.f(r1)     // Catch: java.lang.Exception -> L8a
            float r1 = (float) r1     // Catch: java.lang.Exception -> L8a
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L8a
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L8a
            int r2 = com.tkay.expressad.foundation.h.t.e(r2)     // Catch: java.lang.Exception -> L8a
            float r2 = (float) r2     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = ""
            r4 = 0
            java.lang.Object r5 = r9.get(r4)     // Catch: java.lang.Exception -> L8a
            if (r5 == 0) goto L4b
            java.lang.Object r5 = r9.get(r4)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Exception -> L8a
            int r5 = r5.k()     // Catch: java.lang.Exception -> L8a
            java.lang.Object r6 = r9.get(r4)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.foundation.d.c r6 = (com.tkay.expressad.foundation.d.c) r6     // Catch: java.lang.Exception -> L8a
            r6.as()     // Catch: java.lang.Exception -> L8a
            java.lang.Object r4 = r9.get(r4)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4     // Catch: java.lang.Exception -> L8a
            r4.aq()     // Catch: java.lang.Exception -> L8a
            r4 = r5
        L4b:
            int r5 = com.tkay.expressad.foundation.h.k.b(r8)     // Catch: java.lang.Exception -> L8a
            r6 = 1
            if (r5 != r6) goto L55
            java.lang.String r6 = "tkay_order_layout_list_portrait"
            goto L57
        L55:
            java.lang.String r6 = "tkay_order_layout_list_landscape"
        L57:
            com.tkay.expressad.video.dynview.c$a r7 = new com.tkay.expressad.video.dynview.c$a     // Catch: java.lang.Exception -> L8a
            r7.<init>()     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r6 = r7.a(r6)     // Catch: java.lang.Exception -> L8a
            r7 = 5
            com.tkay.expressad.video.dynview.c$b r6 = r6.a(r7)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r8 = r6.a(r8)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r8 = r8.a(r2)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r8 = r8.b(r1)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r8 = r8.a(r9)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r8 = r8.b(r5)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r8 = r8.b(r3)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r8 = r8.e(r4)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c$b r8 = r8.d(r4)     // Catch: java.lang.Exception -> L8a
            com.tkay.expressad.video.dynview.c r8 = r8.a()     // Catch: java.lang.Exception -> L8a
            return r8
        L8a:
            r8 = move-exception
            r8.getMessage()
            return r0
    }

    public static com.tkay.expressad.video.dynview.c b(android.view.View r7, com.tkay.expressad.foundation.d.c r8) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = ""
            r2 = 3
            if (r8 == 0) goto L12
            java.lang.String r1 = r8.K()     // Catch: java.lang.Exception -> L68
            java.lang.String r3 = a(r2)     // Catch: java.lang.Exception -> L68
            goto L13
        L12:
            r3 = r1
        L13:
            com.tkay.expressad.videocommon.e.c r4 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L68
            java.lang.String r5 = r5.e()     // Catch: java.lang.Exception -> L68
            r6 = 0
            com.tkay.expressad.videocommon.e.d r1 = r4.a(r5, r1, r6)     // Catch: java.lang.Exception -> L68
            if (r1 == 0) goto L2a
            int r6 = r1.h()     // Catch: java.lang.Exception -> L68
        L2a:
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L68
            r1.<init>()     // Catch: java.lang.Exception -> L68
            r1.add(r8)     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$a r8 = new com.tkay.expressad.video.dynview.c$a     // Catch: java.lang.Exception -> L68
            r8.<init>()     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$b r8 = r8.a(r3)     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$b r8 = r8.a(r2)     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$b r8 = r8.a(r1)     // Catch: java.lang.Exception -> L68
            android.content.Context r1 = r7.getContext()     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$b r8 = r8.a(r1)     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$b r8 = r8.a(r7)     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$b r8 = r8.c(r6)     // Catch: java.lang.Exception -> L68
            android.content.Context r7 = r7.getContext()     // Catch: java.lang.Exception -> L68
            int r7 = com.tkay.expressad.foundation.h.k.b(r7)     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$b r7 = r8.b(r7)     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c$b r7 = r7.d(r2)     // Catch: java.lang.Exception -> L68
            com.tkay.expressad.video.dynview.c r7 = r7.a()     // Catch: java.lang.Exception -> L68
            return r7
        L68:
            r7 = move-exception
            r7.getMessage()
            return r0
    }
}
