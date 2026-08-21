package com.mbridge.msdk.dycreator.wrapper;

public class DynamicViewCreator {
    private static volatile com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator a = null;
    private static int b = -201;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.wrapper.DyAdType[] r0 = com.mbridge.msdk.dycreator.wrapper.DyAdType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.1.a = r0
                com.mbridge.msdk.dycreator.wrapper.DyAdType r1 = com.mbridge.msdk.dycreator.wrapper.DyAdType.SPLASH     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.wrapper.DyAdType r1 = com.mbridge.msdk.dycreator.wrapper.DyAdType.REWARD     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    static {
            return
    }

    private DynamicViewCreator() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.dycreator.a.b r0 = com.mbridge.msdk.dycreator.a.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.a(r1)
            return
    }

    private android.view.View a(android.content.Context r17, com.mbridge.msdk.dycreator.wrapper.DyOption r18) {
            r16 = this;
            java.lang.String r1 = ""
            java.lang.String r2 = "DynamicViewCreator"
            r0 = 0
            if (r18 != 0) goto L8
            return r0
        L8:
            java.util.List r3 = r18.getFileDirs()
            if (r3 != 0) goto Lf
            return r0
        Lf:
            r4 = 0
            r5 = r0
            r6 = r4
        L12:
            int r0 = r3.size()     // Catch: java.lang.Exception -> L151
            if (r6 >= r0) goto L159
            java.lang.Object r0 = r3.get(r6)     // Catch: java.lang.Exception -> L151
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0     // Catch: java.lang.Exception -> L151
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L151
            if (r0 == 0) goto L26
            goto L14c
        L26:
            if (r6 != 0) goto L3b
            com.mbridge.msdk.dycreator.e.f r0 = com.mbridge.msdk.dycreator.e.f.a(r17)     // Catch: java.lang.Exception -> L151
            java.lang.Object r7 = r3.get(r6)     // Catch: java.lang.Exception -> L151
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L151
            android.view.View r0 = r0.a(r7)     // Catch: java.lang.Exception -> L151
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L151
            r5 = r0
            goto L14c
        L3b:
            java.lang.Object r0 = r3.get(r6)     // Catch: java.lang.Exception -> L151
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L151
            if (r17 == 0) goto L14c
            if (r5 == 0) goto L14c
            boolean r7 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L151
            if (r7 == 0) goto L4d
            goto L14c
        L4d:
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Exception -> L144
            r7.<init>(r0)     // Catch: java.lang.Exception -> L144
            java.lang.String r0 = "folder_dir"
            java.lang.String r8 = r7.getString(r0)     // Catch: java.lang.Exception -> L144
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L144
            if (r0 == 0) goto L60
            goto L14c
        L60:
            org.json.JSONArray r9 = new org.json.JSONArray     // Catch: java.lang.Exception -> L144
            java.lang.String r0 = "ext_template"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Exception -> L144
            r9.<init>(r0)     // Catch: java.lang.Exception -> L144
            int r0 = r9.length()     // Catch: java.lang.Exception -> L144
            if (r0 != 0) goto L73
            goto L14c
        L73:
            r7 = r4
        L74:
            int r0 = r9.length()     // Catch: java.lang.Exception -> L144
            if (r7 >= r0) goto L14c
            org.json.JSONObject r0 = r9.getJSONObject(r7)     // Catch: java.lang.Exception -> L144
            if (r0 != 0) goto L82
            goto L13f
        L82:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L144
            r10.<init>()     // Catch: java.lang.Exception -> L144
            r10.append(r8)     // Catch: java.lang.Exception -> L144
            java.lang.String r11 = java.io.File.separator     // Catch: java.lang.Exception -> L144
            r10.append(r11)     // Catch: java.lang.Exception -> L144
            java.lang.String r11 = "name"
            java.lang.String r11 = r0.optString(r11)     // Catch: java.lang.Exception -> L144
            r10.append(r11)     // Catch: java.lang.Exception -> L144
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L144
            com.mbridge.msdk.dycreator.e.f r11 = com.mbridge.msdk.dycreator.e.f.a(r17)     // Catch: java.lang.Exception -> L144
            android.view.View r10 = r11.a(r10)     // Catch: java.lang.Exception -> L144
            if (r5 == 0) goto L13f
            if (r10 == 0) goto L13f
            java.lang.String r11 = "layout"
            org.json.JSONObject r0 = r0.getJSONObject(r11)     // Catch: java.lang.Exception -> L144
            r11 = 3
            if (r0 == 0) goto L13c
            if (r17 == 0) goto L13f
            if (r5 == 0) goto L13f
            if (r10 == 0) goto L13f
            if (r0 != 0) goto Lbb
            goto L13f
        Lbb:
            java.lang.String r12 = "parent_id"
            java.lang.String r12 = r0.optString(r12)     // Catch: java.lang.Exception -> L133
            boolean r13 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> L133
            if (r13 != 0) goto Ld2
            com.mbridge.msdk.dycreator.e.f r13 = com.mbridge.msdk.dycreator.e.f.a(r17)     // Catch: java.lang.Exception -> L133
            android.view.View r12 = r13.a(r5, r12)     // Catch: java.lang.Exception -> L133
            android.view.ViewGroup r12 = (android.view.ViewGroup) r12     // Catch: java.lang.Exception -> L133
            goto Ld3
        Ld2:
            r12 = r5
        Ld3:
            android.view.ViewGroup$LayoutParams r13 = r12.getLayoutParams()     // Catch: java.lang.Exception -> L133
            android.widget.RelativeLayout$LayoutParams r13 = (android.widget.RelativeLayout.LayoutParams) r13     // Catch: java.lang.Exception -> L133
            if (r13 != 0) goto Ldc
            goto L13f
        Ldc:
            java.lang.String r14 = "below"
            java.lang.String r14 = r0.optString(r14, r1)     // Catch: java.lang.Exception -> L133
            boolean r15 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Exception -> L133
            if (r15 != 0) goto Lef
            int r14 = r14.hashCode()     // Catch: java.lang.Exception -> L133
            r13.addRule(r11, r14)     // Catch: java.lang.Exception -> L133
        Lef:
            java.lang.String r11 = "left_of"
            java.lang.String r11 = r0.optString(r11, r1)     // Catch: java.lang.Exception -> L133
            boolean r14 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L133
            if (r14 != 0) goto L102
            int r11 = r11.hashCode()     // Catch: java.lang.Exception -> L133
            r13.addRule(r4, r11)     // Catch: java.lang.Exception -> L133
        L102:
            java.lang.String r11 = "right_of"
            java.lang.String r11 = r0.optString(r11, r1)     // Catch: java.lang.Exception -> L133
            boolean r14 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L133
            if (r14 != 0) goto L116
            int r11 = r11.hashCode()     // Catch: java.lang.Exception -> L133
            r14 = 1
            r13.addRule(r14, r11)     // Catch: java.lang.Exception -> L133
        L116:
            java.lang.String r11 = "index"
            r14 = -2
            int r11 = r0.optInt(r11, r14)     // Catch: java.lang.Exception -> L133
            java.lang.String r15 = "visibility"
            r4 = -1
            int r0 = r0.optInt(r15, r4)     // Catch: java.lang.Exception -> L133
            if (r0 == r4) goto L129
            r10.setVisibility(r0)     // Catch: java.lang.Exception -> L133
        L129:
            if (r11 == r14) goto L12f
            r12.addView(r10, r11, r13)     // Catch: java.lang.Exception -> L133
            goto L13f
        L12f:
            r12.addView(r10, r13)     // Catch: java.lang.Exception -> L133
            goto L13f
        L133:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L144
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Exception -> L144
            goto L13f
        L13c:
            r5.addView(r10, r11)     // Catch: java.lang.Exception -> L144
        L13f:
            int r7 = r7 + 1
            r4 = 0
            goto L74
        L144:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L151
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Exception -> L151
        L14c:
            int r6 = r6 + 1
            r4 = 0
            goto L12
        L151:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
        L159:
            return r5
    }

    private void a(com.mbridge.msdk.dycreator.wrapper.DyOption r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            if (r8 == 0) goto L3e
            boolean r0 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L3a
            if (r0 != 0) goto L3e
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto Lf
            goto L3e
        Lf:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3a
            android.content.Context r1 = r0.j()     // Catch: java.lang.Exception -> L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3a
            r0.<init>()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.dycreator.wrapper.DyAdType r2 = r8.getDyAdType()     // Catch: java.lang.Exception -> L3a
            r0.append(r2)     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = ""
            r0.append(r2)     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L3a
            int r3 = r8.getTemplateType()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r8.getCampaignEx()     // Catch: java.lang.Exception -> L3a
            r4 = r9
            r5 = r10
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r8 = move-exception
            r8.printStackTrace()
        L3e:
            return
    }

    public static com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator getInstance() {
            com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator r0 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator> r0 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.class
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator r1 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator r1 = new com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator r0 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.a
            return r0
    }

    public android.view.View createDynamicView(com.mbridge.msdk.dycreator.wrapper.DyOption r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            if (r1 != 0) goto Lf
            return r0
        Lf:
            android.view.View r3 = r2.a(r1, r3)
            return r3
    }

    public void createDynamicView(com.mbridge.msdk.dycreator.wrapper.DyOption r7, com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener r8) {
            r6 = this;
            java.lang.String r0 = "create dynamic view"
            if (r7 != 0) goto Lf
            com.mbridge.msdk.dycreator.b.a r7 = new com.mbridge.msdk.dycreator.b.a
            com.mbridge.msdk.dycreator.b.b r0 = com.mbridge.msdk.dycreator.b.b.h
            r7.<init>(r0)
            r8.viewCreateFail(r7)
            return
        Lf:
            if (r8 != 0) goto L12
            return
        L12:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            if (r1 != 0) goto L27
            com.mbridge.msdk.dycreator.b.a r7 = new com.mbridge.msdk.dycreator.b.a
            com.mbridge.msdk.dycreator.b.b r0 = com.mbridge.msdk.dycreator.b.b.b
            r7.<init>(r0)
            r8.viewCreateFail(r7)
            return
        L27:
            r2 = 1
            if (r7 == 0) goto L57
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.getCampaignEx()
            r4 = 0
            if (r3 != 0) goto L3d
            com.mbridge.msdk.dycreator.b.a r3 = new com.mbridge.msdk.dycreator.b.a
            com.mbridge.msdk.dycreator.b.b r5 = com.mbridge.msdk.dycreator.b.b.e
            r3.<init>(r5)
            r8.viewCreateFail(r3)
            r3 = r4
            goto L3e
        L3d:
            r3 = r2
        L3e:
            java.io.File r5 = r7.getFile()
            if (r5 != 0) goto L55
            java.util.List r5 = r7.getFileDirs()
            if (r5 == 0) goto L55
            com.mbridge.msdk.dycreator.b.a r3 = new com.mbridge.msdk.dycreator.b.a
            com.mbridge.msdk.dycreator.b.b r5 = com.mbridge.msdk.dycreator.b.b.g
            r3.<init>(r5)
            r8.viewCreateFail(r3)
            goto L58
        L55:
            r4 = r3
            goto L58
        L57:
            r4 = r2
        L58:
            if (r4 == 0) goto Lca
            java.lang.String r3 = "start"
            r6.a(r7, r0, r3)     // Catch: java.lang.Exception -> Lb2
            android.view.View r1 = r6.a(r1, r7)     // Catch: java.lang.Exception -> Lb2
            if (r1 != 0) goto L75
            com.mbridge.msdk.dycreator.b.a r1 = new com.mbridge.msdk.dycreator.b.a     // Catch: java.lang.Exception -> Lb2
            com.mbridge.msdk.dycreator.b.b r2 = com.mbridge.msdk.dycreator.b.b.c     // Catch: java.lang.Exception -> Lb2
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lb2
            r8.viewCreateFail(r1)     // Catch: java.lang.Exception -> Lb2
            java.lang.String r1 = "fail"
            r6.a(r7, r0, r1)     // Catch: java.lang.Exception -> Lb2
            return
        L75:
            java.lang.String r3 = "success"
            r6.a(r7, r0, r3)     // Catch: java.lang.Exception -> Lb2
            int[] r3 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.1.a     // Catch: java.lang.Exception -> Lb2
            com.mbridge.msdk.dycreator.wrapper.DyAdType r4 = r7.getDyAdType()     // Catch: java.lang.Exception -> Lb2
            int r4 = r4.ordinal()     // Catch: java.lang.Exception -> Lb2
            r3 = r3[r4]     // Catch: java.lang.Exception -> Lb2
            if (r3 == r2) goto L97
            r2 = 2
            if (r3 == r2) goto L91
            com.mbridge.msdk.dycreator.viewmodel.MBCommonViewVModel r2 = new com.mbridge.msdk.dycreator.viewmodel.MBCommonViewVModel     // Catch: java.lang.Exception -> Lb2
            r2.<init>()     // Catch: java.lang.Exception -> Lb2
            goto L9c
        L91:
            com.mbridge.msdk.dycreator.viewmodel.MBRewardViewVModel r2 = new com.mbridge.msdk.dycreator.viewmodel.MBRewardViewVModel     // Catch: java.lang.Exception -> Lb2
            r2.<init>(r7)     // Catch: java.lang.Exception -> Lb2
            goto L9c
        L97:
            com.mbridge.msdk.dycreator.viewmodel.MBSplashViewVModel r2 = new com.mbridge.msdk.dycreator.viewmodel.MBSplashViewVModel     // Catch: java.lang.Exception -> Lb2
            r2.<init>(r7)     // Catch: java.lang.Exception -> Lb2
        L9c:
            r2.setDynamicViewBackListener(r8)     // Catch: java.lang.Exception -> Lb2
            com.mbridge.msdk.dycreator.binding.b r3 = com.mbridge.msdk.dycreator.binding.b.a()     // Catch: java.lang.Exception -> Lb2
            r3.a(r2)     // Catch: java.lang.Exception -> Lb2
            r2.setModelDataAndBind()     // Catch: java.lang.Exception -> Lb2
            java.lang.String r2 = "bind_data_done"
            r6.a(r7, r0, r2)     // Catch: java.lang.Exception -> Lb2
            r8.viewCreatedSuccess(r1)     // Catch: java.lang.Exception -> Lb2
            goto Lca
        Lb2:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            java.lang.String r1 = "DynamicViewCreator"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.dycreator.b.a r0 = new com.mbridge.msdk.dycreator.b.a
            int r1 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.b
            java.lang.String r7 = r7.getMessage()
            r0.<init>(r1, r7)
            r8.viewCreateFail(r0)
        Lca:
            return
    }
}
