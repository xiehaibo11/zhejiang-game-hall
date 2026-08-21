package com.mbridge.msdk.nativex.view.mbfullview;

public class BaseView extends android.widget.RelativeLayout {
    protected android.widget.RelativeLayout a;
    protected android.widget.RelativeLayout b;
    protected android.widget.RelativeLayout c;
    protected android.widget.ImageView d;
    protected android.widget.TextView e;
    protected android.widget.ProgressBar f;
    protected android.widget.FrameLayout g;
    protected android.widget.LinearLayout h;
    protected android.widget.RelativeLayout i;
    public com.mbridge.msdk.nativex.view.mbfullview.BaseView.a style;

    public enum a extends java.lang.Enum<com.mbridge.msdk.nativex.view.mbfullview.BaseView.a> {
        public static final com.mbridge.msdk.nativex.view.mbfullview.BaseView.a a = null;
        public static final com.mbridge.msdk.nativex.view.mbfullview.BaseView.a b = null;
        private static final com.mbridge.msdk.nativex.view.mbfullview.BaseView.a[] c = null;

        static {
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r0 = new com.mbridge.msdk.nativex.view.mbfullview.BaseView$a
                r1 = 0
                java.lang.String r2 = "FULL_TOP_VIEW"
                r0.<init>(r2, r1)
                com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.a = r0
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r0 = new com.mbridge.msdk.nativex.view.mbfullview.BaseView$a
                r2 = 1
                java.lang.String r3 = "FULL_MIDDLE_VIEW"
                r0.<init>(r3, r2)
                com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.b = r0
                r3 = 2
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a[] r3 = new com.mbridge.msdk.nativex.view.mbfullview.BaseView.a[r3]
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r4 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.a
                r3[r1] = r4
                r3[r2] = r0
                com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.c = r3
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.mbridge.msdk.nativex.view.mbfullview.BaseView.a valueOf(java.lang.String r1) {
                java.lang.Class<com.mbridge.msdk.nativex.view.mbfullview.BaseView$a> r0 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r1 = (com.mbridge.msdk.nativex.view.mbfullview.BaseView.a) r1
                return r1
        }

        public static com.mbridge.msdk.nativex.view.mbfullview.BaseView.a[] values() {
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a[] r0 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.c
                java.lang.Object r0 = r0.clone()
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a[] r0 = (com.mbridge.msdk.nativex.view.mbfullview.BaseView.a[]) r0
                return r0
        }
    }

    public BaseView(android.content.Context r4) {
            r3 = this;
            r3.<init>(r4)
            android.content.Context r4 = r3.getContext()
            java.lang.String r0 = "mbridge_nativex_fullbasescreen"
            java.lang.String r1 = "layout"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r0, r1)
            android.content.Context r0 = r3.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.view.View r4 = r0.inflate(r4, r3)
            r0 = r4
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r3.i = r0
            if (r4 == 0) goto Lbd
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "mbridge_full_rl_playcontainer"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r3.a = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_player_parent"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r3.b = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_rl_close"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r3.c = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_iv_close"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.d = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_tv_install"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.e = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_pb_loading"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ProgressBar r0 = (android.widget.ProgressBar) r0
            r3.f = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_animation_content"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r3.g = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_animation_player"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r3.h = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r4.setLayoutParams(r0)
        Lbd:
            return
    }

    public android.widget.RelativeLayout getMBridgeFullClose() {
            r1 = this;
            android.widget.RelativeLayout r0 = r1.c
            return r0
    }

    public android.widget.ImageView getMBridgeFullIvClose() {
            r1 = this;
            android.widget.ImageView r0 = r1.d
            return r0
    }

    public android.widget.ProgressBar getMBridgeFullPb() {
            r1 = this;
            android.widget.ProgressBar r0 = r1.f
            return r0
    }

    public android.widget.RelativeLayout getMBridgeFullPlayContainer() {
            r1 = this;
            android.widget.RelativeLayout r0 = r1.a
            return r0
    }

    public android.widget.RelativeLayout getMBridgeFullPlayerParent() {
            r1 = this;
            android.widget.RelativeLayout r0 = r1.b
            return r0
    }

    public android.widget.TextView getMBridgeFullTvInstall() {
            r1 = this;
            android.widget.TextView r0 = r1.e
            return r0
    }

    public com.mbridge.msdk.nativex.view.mbfullview.BaseView.a getStytle() {
            r1 = this;
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r0 = r1.style
            return r0
    }

    public android.widget.FrameLayout getmAnimationContent() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.g
            return r0
    }

    public android.widget.LinearLayout getmAnimationPlayer() {
            r1 = this;
            android.widget.LinearLayout r0 = r1.h
            return r0
    }

    public void setStytle(com.mbridge.msdk.nativex.view.mbfullview.BaseView.a r1) {
            r0 = this;
            r0.style = r1
            return
    }
}
