package com.mbridge.msdk.nativex.listener;

public class RollingPagerListenrt implements android.support.v4.view.ViewPager.OnPageChangeListener {
    private java.util.List<com.mbridge.msdk.out.Frame> a;
    private com.mbridge.msdk.foundation.same.report.d b;
    private java.lang.String c;
    private java.util.List<java.lang.Integer> d;
    private com.mbridge.msdk.out.NativeListener.FilpListener e;

    public RollingPagerListenrt() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.d = r0
            return
    }

    public final void a(int r8) {
            r7 = this;
            com.mbridge.msdk.out.NativeListener$FilpListener r0 = r7.e
            if (r0 == 0) goto L7
            r0.filpEvent(r8)
        L7:
            java.util.List<java.lang.Integer> r0 = r7.d
            java.lang.Integer r1 = java.lang.Integer.valueOf(r8)
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L14
            return
        L14:
            java.util.List<java.lang.Integer> r0 = r7.d
            java.lang.Integer r1 = java.lang.Integer.valueOf(r8)
            r0.add(r1)
            java.util.List<com.mbridge.msdk.out.Frame> r0 = r7.a
            java.lang.Object r0 = r0.get(r8)
            com.mbridge.msdk.out.Frame r0 = (com.mbridge.msdk.out.Frame) r0
            java.util.List r1 = r0.getCampaigns()
            if (r1 == 0) goto Le1
            boolean r2 = r1.isEmpty()
            if (r2 != 0) goto Le1
            r2 = 0
            java.lang.Object r3 = r1.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
        L3d:
            int r5 = r1.size()
            if (r2 >= r5) goto L74
            java.lang.Object r3 = r1.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            int r5 = r1.size()
            int r5 = r5 + (-1)
            if (r2 != r5) goto L59
            java.lang.String r5 = r3.getId()
            r4.append(r5)
            goto L71
        L59:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r3.getId()
            r5.append(r6)
            java.lang.String r6 = ","
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.append(r5)
        L71:
            int r2 = r2 + 1
            goto L3d
        L74:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r2 = r3.getRequestId()
            java.lang.String r5 = "rid"
            r1.put(r5, r2)
            java.lang.String r2 = r3.getRequestIdNotice()
            java.lang.String r3 = "rid_n"
            r1.put(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r8 = r8 + 1
            r2.append(r8)
            java.lang.String r8 = ""
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            java.lang.String r2 = "frame_id"
            r1.put(r2, r8)
            int r8 = r0.getTemplate()
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            java.lang.String r2 = "template"
            r1.put(r2, r8)
            java.lang.String r8 = r4.toString()
            java.lang.String r2 = "cids"
            r1.put(r2, r8)
            java.lang.String r8 = r7.c
            java.lang.String r2 = "unit_id"
            r1.put(r2, r8)
            java.lang.String r8 = "2000005"
            java.lang.String r8 = com.mbridge.msdk.foundation.same.report.e.a(r8, r1)
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r1 = r1.c()
            if (r1 == 0) goto Ld8
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            r0.a(r8)
            goto Le1
        Ld8:
            com.mbridge.msdk.foundation.same.report.d r1 = r7.b
            java.lang.String r2 = r7.c
            java.lang.String r3 = "native_rollbc"
            r1.a(r3, r8, r2, r0)
        Le1:
            return
    }

    public final void a(com.mbridge.msdk.out.NativeListener.FilpListener r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.out.Frame> r2, android.content.Context r3, java.lang.String r4) {
            r1 = this;
            r1.a = r2
            com.mbridge.msdk.foundation.same.report.d r2 = new com.mbridge.msdk.foundation.same.report.d
            r0 = 2
            r2.<init>(r3, r0)
            r1.b = r2
            r1.c = r4
            java.util.List<java.lang.Integer> r2 = r1.d
            r2.clear()
            r2 = 0
            r1.a(r2)
            return
    }

    @Override
    public void onPageScrollStateChanged(int r1) {
            r0 = this;
            return
    }

    @Override
    public void onPageScrolled(int r1, float r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public void onPageSelected(int r1) {
            r0 = this;
            r0.a(r1)
            return
    }
}
