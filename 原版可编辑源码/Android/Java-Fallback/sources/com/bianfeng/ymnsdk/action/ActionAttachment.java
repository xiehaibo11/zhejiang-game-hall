package com.bianfeng.ymnsdk.action;

public interface ActionAttachment {

    public static class a implements com.bianfeng.ymnsdk.action.ActionAttachment {
        android.app.ProgressDialog a;

        class a implements java.lang.Runnable {
            final android.content.Context a;
            final com.bianfeng.ymnsdk.action.ActionAttachment.a b;

            a(com.bianfeng.ymnsdk.action.ActionAttachment.a r1, android.content.Context r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    android.content.Context r0 = r2.a
                    android.app.Activity r0 = (android.app.Activity) r0
                    boolean r0 = r0.isFinishing()
                    if (r0 != 0) goto L11
                    com.bianfeng.ymnsdk.action.ActionAttachment$a r0 = r2.b
                    android.content.Context r1 = r2.a
                    r0.a(r1)
                L11:
                    return
            }
        }

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        protected void a() {
                r1 = this;
                android.app.ProgressDialog r0 = r1.a
                if (r0 == 0) goto L12
                boolean r0 = r0.isShowing()
                if (r0 == 0) goto L12
                android.app.ProgressDialog r0 = r1.a
                r0.dismiss()
                r0 = 0
                r1.a = r0
            L12:
                return
        }

        protected void a(android.content.Context r4) {
                r3 = this;
                r3.a()
                java.lang.String r0 = ""
                java.util.Locale r1 = java.util.Locale.getDefault()
                java.lang.String r1 = r1.toString()
                java.lang.String r1 = r1.toUpperCase()
                java.lang.String r2 = "ZH_TW"
                boolean r2 = r1.contains(r2)
                if (r2 != 0) goto L4f
                java.lang.String r2 = "ZH_HK"
                boolean r2 = r1.contains(r2)
                if (r2 == 0) goto L22
                goto L4f
            L22:
                java.lang.String r2 = "ZH"
                boolean r2 = r1.contains(r2)
                if (r2 != 0) goto L4c
                java.lang.String r2 = "zh"
                boolean r2 = r1.contains(r2)
                if (r2 == 0) goto L33
                goto L4c
            L33:
                java.lang.String r2 = "VN"
                boolean r2 = r1.contains(r2)
                if (r2 == 0) goto L3e
                java.lang.String r0 = " Đang tải ... "
                goto L51
            L3e:
                java.lang.String r2 = "TH"
                boolean r2 = r1.contains(r2)
                if (r2 == 0) goto L49
                java.lang.String r0 = " กำลังโหลด ... "
                goto L51
            L49:
                java.lang.String r0 = " Loading... "
                goto L51
            L4c:
                java.lang.String r0 = " 加载中... "
                goto L51
            L4f:
                java.lang.String r0 = " 加載中... "
            L51:
                r2 = 0
                android.app.ProgressDialog r2 = android.app.ProgressDialog.show(r4, r2, r0)
                r3.a = r2
                return
        }

        @Override
        public void onEnd(android.content.Context r2) {
                r1 = this;
                r1.a()
                boolean r0 = r2 instanceof android.app.Activity
                if (r0 == 0) goto Ld
                r0 = r2
                android.app.Activity r0 = (android.app.Activity) r0
                com.bianfeng.ymnsdk.util.SystemUtil.hideVirtualKey(r0)
            Ld:
                return
        }

        @Override
        public void onStart(android.content.Context r3) {
                r2 = this;
                boolean r0 = r3 instanceof android.app.Activity
                if (r0 == 0) goto L10
                r0 = r3
                android.app.Activity r0 = (android.app.Activity) r0
                com.bianfeng.ymnsdk.action.ActionAttachment$a$a r1 = new com.bianfeng.ymnsdk.action.ActionAttachment$a$a
                r1.<init>(r2, r3)
                r0.runOnUiThread(r1)
                goto L13
            L10:
                r2.a(r3)
            L13:
                return
        }
    }

    void onEnd(android.content.Context r1);

    void onStart(android.content.Context r1);
}
