package com.tkay.basead.ui;

public class RewardExitConfirmDialogActivity extends android.app.Activity {
    private static java.lang.Runnable a;
    private static java.lang.String b;
    private android.app.Dialog c;

    final class 1 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.RewardExitConfirmDialogActivity a;

        1(com.tkay.basead.ui.RewardExitConfirmDialogActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                java.lang.Runnable r1 = com.tkay.basead.ui.RewardExitConfirmDialogActivity.a()
                if (r1 == 0) goto Ld
                java.lang.Runnable r1 = com.tkay.basead.ui.RewardExitConfirmDialogActivity.a()
                r1.run()
            Ld:
                com.tkay.basead.ui.RewardExitConfirmDialogActivity r1 = r0.a
                r1.finish()
                return
        }
    }

    final class 2 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.RewardExitConfirmDialogActivity a;

        2(com.tkay.basead.ui.RewardExitConfirmDialogActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.basead.ui.RewardExitConfirmDialogActivity r1 = r0.a
                r1.finish()
                return
        }
    }

    public RewardExitConfirmDialogActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.Runnable a() {
            java.lang.Runnable r0 = com.tkay.basead.ui.RewardExitConfirmDialogActivity.a
            return r0
    }

    public static void a(android.content.Context r0, java.lang.String r1, java.lang.Runnable r2) {
            com.tkay.basead.ui.RewardExitConfirmDialogActivity.b = r1
            com.tkay.basead.ui.RewardExitConfirmDialogActivity.a = r2
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.tkay.basead.ui.RewardExitConfirmDialogActivity> r2 = com.tkay.basead.ui.RewardExitConfirmDialogActivity.class
            r1.<init>(r0, r2)
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)
            r0.startActivity(r1)
            return
    }

    private void b() {
            r10 = this;
            java.lang.String r0 = "string"
            java.lang.String r1 = "id"
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r10)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "myoffer_confirm_dialog"
            java.lang.String r4 = "layout"
            int r3 = com.tkay.core.common.l.h.a(r10, r3, r4)     // Catch: java.lang.Throwable -> La1
            r4 = 0
            r5 = 0
            android.view.View r2 = r2.inflate(r3, r4, r5)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "myoffer_confirm_msg"
            int r3 = com.tkay.core.common.l.h.a(r10, r3, r1)     // Catch: java.lang.Throwable -> La1
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> La1
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> La1
            java.lang.String r4 = "myoffer_confirm_give_up"
            int r4 = com.tkay.core.common.l.h.a(r10, r4, r1)     // Catch: java.lang.Throwable -> La1
            android.view.View r4 = r2.findViewById(r4)     // Catch: java.lang.Throwable -> La1
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> La1
            java.lang.String r6 = "myoffer_confirm_continue"
            int r1 = com.tkay.core.common.l.h.a(r10, r6, r1)     // Catch: java.lang.Throwable -> La1
            android.view.View r1 = r2.findViewById(r1)     // Catch: java.lang.Throwable -> La1
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> La1
            android.content.res.Resources r6 = r10.getResources()     // Catch: java.lang.Throwable -> La1
            java.lang.String r7 = "myoffer_reward_exit_confirm_msg"
            int r7 = com.tkay.core.common.l.h.a(r10, r7, r0)     // Catch: java.lang.Throwable -> La1
            r8 = 1
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> La1
            java.lang.String r9 = com.tkay.basead.ui.RewardExitConfirmDialogActivity.b     // Catch: java.lang.Throwable -> La1
            r8[r5] = r9     // Catch: java.lang.Throwable -> La1
            java.lang.String r6 = r6.getString(r7, r8)     // Catch: java.lang.Throwable -> La1
            r3.setText(r6)     // Catch: java.lang.Throwable -> La1
            android.content.res.Resources r3 = r10.getResources()     // Catch: java.lang.Throwable -> La1
            java.lang.String r6 = "myoffer_reward_exit_confirm_give_up"
            int r6 = com.tkay.core.common.l.h.a(r10, r6, r0)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = r3.getString(r6)     // Catch: java.lang.Throwable -> La1
            r4.setText(r3)     // Catch: java.lang.Throwable -> La1
            android.content.res.Resources r3 = r10.getResources()     // Catch: java.lang.Throwable -> La1
            java.lang.String r6 = "myoffer_reward_exit_confirm_continue"
            int r0 = com.tkay.core.common.l.h.a(r10, r6, r0)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = r3.getString(r0)     // Catch: java.lang.Throwable -> La1
            r1.setText(r0)     // Catch: java.lang.Throwable -> La1
            com.tkay.basead.ui.RewardExitConfirmDialogActivity$1 r0 = new com.tkay.basead.ui.RewardExitConfirmDialogActivity$1     // Catch: java.lang.Throwable -> La1
            r0.<init>(r10)     // Catch: java.lang.Throwable -> La1
            r4.setOnClickListener(r0)     // Catch: java.lang.Throwable -> La1
            com.tkay.basead.ui.RewardExitConfirmDialogActivity$2 r0 = new com.tkay.basead.ui.RewardExitConfirmDialogActivity$2     // Catch: java.lang.Throwable -> La1
            r0.<init>(r10)     // Catch: java.lang.Throwable -> La1
            r1.setOnClickListener(r0)     // Catch: java.lang.Throwable -> La1
            android.app.Dialog r0 = new android.app.Dialog     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = "style_full_screen_translucent_dialog"
            java.lang.String r3 = "style"
            int r1 = com.tkay.core.common.l.h.a(r10, r1, r3)     // Catch: java.lang.Throwable -> La1
            r0.<init>(r10, r1)     // Catch: java.lang.Throwable -> La1
            r10.c = r0     // Catch: java.lang.Throwable -> La1
            r0.setContentView(r2)     // Catch: java.lang.Throwable -> La1
            android.app.Dialog r0 = r10.c     // Catch: java.lang.Throwable -> La1
            r0.setCancelable(r5)     // Catch: java.lang.Throwable -> La1
            android.app.Dialog r0 = r10.c     // Catch: java.lang.Throwable -> La1
            r0.show()     // Catch: java.lang.Throwable -> La1
            return
        La1:
            r10.finish()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r10) {
            r9 = this;
            java.lang.String r0 = "string"
            java.lang.String r1 = "id"
            super.onCreate(r10)
            android.view.LayoutInflater r10 = android.view.LayoutInflater.from(r9)     // Catch: java.lang.Throwable -> La4
            java.lang.String r2 = "myoffer_confirm_dialog"
            java.lang.String r3 = "layout"
            int r2 = com.tkay.core.common.l.h.a(r9, r2, r3)     // Catch: java.lang.Throwable -> La4
            r3 = 0
            r4 = 0
            android.view.View r10 = r10.inflate(r2, r3, r4)     // Catch: java.lang.Throwable -> La4
            java.lang.String r2 = "myoffer_confirm_msg"
            int r2 = com.tkay.core.common.l.h.a(r9, r2, r1)     // Catch: java.lang.Throwable -> La4
            android.view.View r2 = r10.findViewById(r2)     // Catch: java.lang.Throwable -> La4
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = "myoffer_confirm_give_up"
            int r3 = com.tkay.core.common.l.h.a(r9, r3, r1)     // Catch: java.lang.Throwable -> La4
            android.view.View r3 = r10.findViewById(r3)     // Catch: java.lang.Throwable -> La4
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> La4
            java.lang.String r5 = "myoffer_confirm_continue"
            int r1 = com.tkay.core.common.l.h.a(r9, r5, r1)     // Catch: java.lang.Throwable -> La4
            android.view.View r1 = r10.findViewById(r1)     // Catch: java.lang.Throwable -> La4
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> La4
            android.content.res.Resources r5 = r9.getResources()     // Catch: java.lang.Throwable -> La4
            java.lang.String r6 = "myoffer_reward_exit_confirm_msg"
            int r6 = com.tkay.core.common.l.h.a(r9, r6, r0)     // Catch: java.lang.Throwable -> La4
            r7 = 1
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> La4
            java.lang.String r8 = com.tkay.basead.ui.RewardExitConfirmDialogActivity.b     // Catch: java.lang.Throwable -> La4
            r7[r4] = r8     // Catch: java.lang.Throwable -> La4
            java.lang.String r5 = r5.getString(r6, r7)     // Catch: java.lang.Throwable -> La4
            r2.setText(r5)     // Catch: java.lang.Throwable -> La4
            android.content.res.Resources r2 = r9.getResources()     // Catch: java.lang.Throwable -> La4
            java.lang.String r5 = "myoffer_reward_exit_confirm_give_up"
            int r5 = com.tkay.core.common.l.h.a(r9, r5, r0)     // Catch: java.lang.Throwable -> La4
            java.lang.String r2 = r2.getString(r5)     // Catch: java.lang.Throwable -> La4
            r3.setText(r2)     // Catch: java.lang.Throwable -> La4
            android.content.res.Resources r2 = r9.getResources()     // Catch: java.lang.Throwable -> La4
            java.lang.String r5 = "myoffer_reward_exit_confirm_continue"
            int r0 = com.tkay.core.common.l.h.a(r9, r5, r0)     // Catch: java.lang.Throwable -> La4
            java.lang.String r0 = r2.getString(r0)     // Catch: java.lang.Throwable -> La4
            r1.setText(r0)     // Catch: java.lang.Throwable -> La4
            com.tkay.basead.ui.RewardExitConfirmDialogActivity$1 r0 = new com.tkay.basead.ui.RewardExitConfirmDialogActivity$1     // Catch: java.lang.Throwable -> La4
            r0.<init>(r9)     // Catch: java.lang.Throwable -> La4
            r3.setOnClickListener(r0)     // Catch: java.lang.Throwable -> La4
            com.tkay.basead.ui.RewardExitConfirmDialogActivity$2 r0 = new com.tkay.basead.ui.RewardExitConfirmDialogActivity$2     // Catch: java.lang.Throwable -> La4
            r0.<init>(r9)     // Catch: java.lang.Throwable -> La4
            r1.setOnClickListener(r0)     // Catch: java.lang.Throwable -> La4
            android.app.Dialog r0 = new android.app.Dialog     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = "style_full_screen_translucent_dialog"
            java.lang.String r2 = "style"
            int r1 = com.tkay.core.common.l.h.a(r9, r1, r2)     // Catch: java.lang.Throwable -> La4
            r0.<init>(r9, r1)     // Catch: java.lang.Throwable -> La4
            r9.c = r0     // Catch: java.lang.Throwable -> La4
            r0.setContentView(r10)     // Catch: java.lang.Throwable -> La4
            android.app.Dialog r10 = r9.c     // Catch: java.lang.Throwable -> La4
            r10.setCancelable(r4)     // Catch: java.lang.Throwable -> La4
            android.app.Dialog r10 = r9.c     // Catch: java.lang.Throwable -> La4
            r10.show()     // Catch: java.lang.Throwable -> La4
            return
        La4:
            r9.finish()
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            android.app.Dialog r0 = r2.c
            r1 = 0
            if (r0 == 0) goto La
            r0.dismiss()
            r2.c = r1
        La:
            com.tkay.basead.ui.RewardExitConfirmDialogActivity.a = r1
            super.onDestroy()
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r0 != r2) goto L5
            r2 = 1
            return r2
        L5:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }
}
