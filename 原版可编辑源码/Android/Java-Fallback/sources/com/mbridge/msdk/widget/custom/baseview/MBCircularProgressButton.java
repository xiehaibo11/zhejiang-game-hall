package com.mbridge.msdk.widget.custom.baseview;

public class MBCircularProgressButton extends android.support.v7.widget.AppCompatButton {
    public static final int ERROR_STATE_PROGRESS = -1;
    public static final int IDLE_STATE_PROGRESS = 0;
    public static final int INDETERMINATE_STATE_PROGRESS = 50;
    public static final int SUCCESS_STATE_PROGRESS = 100;
    private com.mbridge.msdk.widget.custom.baseview.d A;
    private com.mbridge.msdk.widget.custom.baseview.d B;
    private com.mbridge.msdk.widget.custom.baseview.f a;
    private com.mbridge.msdk.widget.custom.baseview.a b;
    private com.mbridge.msdk.widget.custom.baseview.b c;
    private android.content.res.ColorStateList d;
    private android.content.res.ColorStateList e;
    private android.content.res.ColorStateList f;
    private android.graphics.drawable.StateListDrawable g;
    private android.graphics.drawable.StateListDrawable h;
    private android.graphics.drawable.StateListDrawable i;
    private com.mbridge.msdk.widget.custom.baseview.e j;
    private com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a k;
    private int l;
    private int m;
    private int n;
    private int o;
    private int p;
    private int q;
    private int r;
    private float s;
    private boolean t;
    private boolean u;
    private int v;
    private int w;
    private boolean x;
    private com.mbridge.msdk.widget.custom.baseview.d y;
    private com.mbridge.msdk.widget.custom.baseview.d z;






    static class SavedState extends android.view.View.BaseSavedState {
        public static final android.os.Parcelable.Creator<com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState> CREATOR = null;
        private boolean a;
        private boolean b;
        private int c;


        static {
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$SavedState$1 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$SavedState$1
                r0.<init>()
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState.CREATOR = r0
                return
        }

        private SavedState(android.os.Parcel r4) {
                r3 = this;
                r3.<init>(r4)
                int r0 = r4.readInt()
                r3.c = r0
                int r0 = r4.readInt()
                r1 = 0
                r2 = 1
                if (r0 != r2) goto L13
                r0 = r2
                goto L14
            L13:
                r0 = r1
            L14:
                r3.a = r0
                int r4 = r4.readInt()
                if (r4 != r2) goto L1d
                r1 = r2
            L1d:
                r3.b = r1
                return
        }

        SavedState(android.os.Parcel r1, com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public SavedState(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        static int a(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState r0) {
                int r0 = r0.c
                return r0
        }

        static int a(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState r0, int r1) {
                r0.c = r1
                return r1
        }

        static boolean a(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState r0, boolean r1) {
                r0.a = r1
                return r1
        }

        static boolean b(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState r0) {
                boolean r0 = r0.a
                return r0
        }

        static boolean b(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState r0, boolean r1) {
                r0.b = r1
                return r1
        }

        static boolean c(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState r0) {
                boolean r0 = r0.b
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                int r2 = r0.c
                r1.writeInt(r2)
                boolean r2 = r0.a
                r1.writeInt(r2)
                boolean r2 = r0.b
                r1.writeInt(r2)
                return
        }
    }

    private enum a extends java.lang.Enum<com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a> {
        public static final com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a a = null;
        public static final com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a b = null;
        public static final com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a c = null;
        public static final com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a d = null;
        private static final com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a[] e = null;

        static {
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a
                r1 = 0
                java.lang.String r2 = "PROGRESS"
                r0.<init>(r2, r1)
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.a = r0
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a
                r2 = 1
                java.lang.String r3 = "IDLE"
                r0.<init>(r3, r2)
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.b = r0
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a
                r3 = 2
                java.lang.String r4 = "COMPLETE"
                r0.<init>(r4, r3)
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.c = r0
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a
                r4 = 3
                java.lang.String r5 = "ERROR"
                r0.<init>(r5, r4)
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.d = r0
                r5 = 4
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a[] r5 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a[r5]
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r6 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.a
                r5[r1] = r6
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r1 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.b
                r5[r2] = r1
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r1 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.c
                r5[r3] = r1
                r5[r4] = r0
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.e = r5
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a valueOf(java.lang.String r1) {
                java.lang.Class<com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a> r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r1 = (com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a) r1
                return r1
        }

        public static com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a[] values() {
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a[] r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.e
                java.lang.Object r0 = r0.clone()
                com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a[] r0 = (com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a[]) r0
                return r0
        }
    }

    public MBCircularProgressButton(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$1 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$1
            r0.<init>(r1)
            r1.y = r0
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$2 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$2
            r0.<init>(r1)
            r1.z = r0
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$3 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$3
            r0.<init>(r1)
            r1.A = r0
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$4 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$4
            r0.<init>(r1)
            r1.B = r0
            r0 = 0
            r1.a(r2, r0)
            return
    }

    public MBCircularProgressButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$1 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$1
            r0.<init>(r1)
            r1.y = r0
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$2 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$2
            r0.<init>(r1)
            r1.z = r0
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$3 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$3
            r0.<init>(r1)
            r1.A = r0
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$4 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$4
            r0.<init>(r1)
            r1.B = r0
            r1.a(r2, r3)
            return
    }

    public MBCircularProgressButton(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$1 r3 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$1
            r3.<init>(r0)
            r0.y = r3
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$2 r3 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$2
            r3.<init>(r0)
            r0.z = r3
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$3 r3 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$3
            r3.<init>(r0)
            r0.A = r3
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$4 r3 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$4
            r3.<init>(r0)
            r0.B = r3
            r0.a(r1, r2)
            return
    }

    private int a(android.content.res.ColorStateList r4) {
            r3 = this;
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 16842910(0x101009e, float:2.3694E-38)
            r2 = 0
            r0[r2] = r1
            int r4 = r4.getColorForState(r0, r2)
            return r4
    }

    static com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a a(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r0, com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a r1) {
            r0.k = r1
            return r1
    }

    private com.mbridge.msdk.widget.custom.baseview.c a(float r4, float r5, int r6, int r7) {
            r3 = this;
            r0 = 1
            r3.x = r0
            com.mbridge.msdk.widget.custom.baseview.c r1 = new com.mbridge.msdk.widget.custom.baseview.c
            com.mbridge.msdk.widget.custom.baseview.f r2 = r3.a
            r1.<init>(r3, r2)
            r1.a(r4)
            r1.b(r5)
            int r4 = r3.r
            float r4 = (float) r4
            r1.c(r4)
            r1.b(r6)
            r1.c(r7)
            boolean r4 = r3.u
            if (r4 == 0) goto L24
            r1.a(r0)
            goto L29
        L24:
            r4 = 500(0x1f4, float:7.0E-43)
            r1.a(r4)
        L29:
            r4 = 0
            r3.u = r4
            return r1
    }

    static com.mbridge.msdk.widget.custom.baseview.e a(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r0) {
            com.mbridge.msdk.widget.custom.baseview.e r0 = r0.j
            return r0
    }

    private com.mbridge.msdk.widget.custom.baseview.f a(int r5) {
            r4 = this;
            android.content.res.Resources r0 = r4.getResources()
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "mbridge_cpb_background"
            java.lang.String r3 = "drawable"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.graphics.drawable.Drawable r0 = r0.mutate()
            android.graphics.drawable.GradientDrawable r0 = (android.graphics.drawable.GradientDrawable) r0
            r0.setColor(r5)
            float r1 = r4.s
            r0.setCornerRadius(r1)
            com.mbridge.msdk.widget.custom.baseview.f r1 = new com.mbridge.msdk.widget.custom.baseview.f
            r1.<init>(r0)
            r1.b(r5)
            int r5 = r4.q
            r1.a(r5)
            return r1
    }

    private void a(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.q = r0
            r1.b(r2, r3)
            r2 = 100
            r1.v = r2
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r2 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.b
            r1.k = r2
            com.mbridge.msdk.widget.custom.baseview.e r2 = new com.mbridge.msdk.widget.custom.baseview.e
            r2.<init>(r1)
            r1.j = r2
            r1.b()
            android.graphics.drawable.StateListDrawable r2 = r1.g
            r1.setBackgroundCompat(r2)
            return
    }

    static void a(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r2, int r3) {
            android.content.res.Resources r0 = r2.getResources()
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r3)
            if (r0 == 0) goto L1e
            int r1 = r2.getWidth()
            int r1 = r1 / 2
            int r0 = r0.getIntrinsicWidth()
            int r0 = r0 / 2
            int r1 = r1 - r0
            r0 = 0
            r2.setCompoundDrawablesWithIntrinsicBounds(r3, r0, r0, r0)
            r2.setPadding(r1, r0, r0, r0)
        L1e:
            return
    }

    static boolean a(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r0, boolean r1) {
            r0.x = r1
            return r1
    }

    private int b(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            int r2 = r0.getColor(r2)
            return r2
    }

    private int b(android.content.res.ColorStateList r4) {
            r3 = this;
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 16842919(0x10100a7, float:2.3694026E-38)
            r2 = 0
            r0[r2] = r1
            int r4 = r4.getColorForState(r0, r2)
            return r4
    }

    static int b(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r0) {
            int r0 = r0.o
            return r0
    }

    private void b() {
            r8 = this;
            android.content.res.ColorStateList r0 = r8.d
            int r0 = r8.a(r0)
            android.content.res.ColorStateList r1 = r8.d
            int r1 = r8.b(r1)
            android.content.res.ColorStateList r2 = r8.d
            int r2 = r8.c(r2)
            android.content.res.ColorStateList r3 = r8.d
            int r3 = r8.d(r3)
            com.mbridge.msdk.widget.custom.baseview.f r4 = r8.a
            if (r4 != 0) goto L22
            com.mbridge.msdk.widget.custom.baseview.f r0 = r8.a(r0)
            r8.a = r0
        L22:
            com.mbridge.msdk.widget.custom.baseview.f r0 = r8.a(r3)
            com.mbridge.msdk.widget.custom.baseview.f r2 = r8.a(r2)
            com.mbridge.msdk.widget.custom.baseview.f r1 = r8.a(r1)
            android.graphics.drawable.StateListDrawable r3 = new android.graphics.drawable.StateListDrawable
            r3.<init>()
            r8.g = r3
            r4 = 1
            int[] r5 = new int[r4]
            r6 = 16842919(0x10100a7, float:2.3694026E-38)
            r7 = 0
            r5[r7] = r6
            android.graphics.drawable.GradientDrawable r1 = r1.a()
            r3.addState(r5, r1)
            android.graphics.drawable.StateListDrawable r1 = r8.g
            int[] r3 = new int[r4]
            r5 = 16842908(0x101009c, float:2.3693995E-38)
            r3[r7] = r5
            android.graphics.drawable.GradientDrawable r2 = r2.a()
            r1.addState(r3, r2)
            android.graphics.drawable.StateListDrawable r1 = r8.g
            int[] r2 = new int[r4]
            r3 = -16842910(0xfffffffffefeff62, float:-1.6947497E38)
            r2[r7] = r3
            android.graphics.drawable.GradientDrawable r0 = r0.a()
            r1.addState(r2, r0)
            android.graphics.drawable.StateListDrawable r0 = r8.g
            int[] r1 = android.util.StateSet.WILD_CARD
            com.mbridge.msdk.widget.custom.baseview.f r2 = r8.a
            android.graphics.drawable.GradientDrawable r2 = r2.a()
            r0.addState(r1, r2)
            return
    }

    private void b(android.content.Context r6, android.util.AttributeSet r7) {
            r5 = this;
            r7 = 1120403456(0x42c80000, float:100.0)
            r5.s = r7
            r7 = 0
            r5.r = r7
            java.lang.String r7 = "color"
            java.lang.String r0 = "mbridge_cpb_green"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r6, r0, r7)
            int r0 = r5.b(r0)
            java.lang.String r1 = "mbridge_cpb_white"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r6, r1, r7)
            int r1 = r5.b(r1)
            java.lang.String r2 = "mbridge_cpb_grey"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r6, r2, r7)
            int r2 = r5.b(r2)
            java.lang.String r3 = "mbridge_cpb_idle_state_selector"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r6, r3, r7)
            android.content.res.Resources r4 = r5.getResources()
            android.content.res.ColorStateList r3 = r4.getColorStateList(r3)
            r5.d = r3
            java.lang.String r3 = "mbridge_cpb_complete_state_selector"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r6, r3, r7)
            android.content.res.Resources r4 = r5.getResources()
            android.content.res.ColorStateList r3 = r4.getColorStateList(r3)
            r5.e = r3
            java.lang.String r3 = "mbridge_cpb_error_state_selector"
            int r6 = com.mbridge.msdk.foundation.tools.s.a(r6, r3, r7)
            android.content.res.Resources r7 = r5.getResources()
            android.content.res.ColorStateList r6 = r7.getColorStateList(r6)
            r5.f = r6
            r5.l = r1
            r5.m = r0
            r5.n = r2
            return
    }

    private int c(android.content.res.ColorStateList r4) {
            r3 = this;
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 16842908(0x101009c, float:2.3693995E-38)
            r2 = 0
            r0[r2] = r1
            int r4 = r4.getColorForState(r0, r2)
            return r4
    }

    static int c(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r0) {
            int r0 = r0.p
            return r0
    }

    private com.mbridge.msdk.widget.custom.baseview.c c() {
            r3 = this;
            r0 = 1
            r3.x = r0
            com.mbridge.msdk.widget.custom.baseview.c r1 = new com.mbridge.msdk.widget.custom.baseview.c
            com.mbridge.msdk.widget.custom.baseview.f r2 = r3.a
            r1.<init>(r3, r2)
            float r2 = r3.s
            r1.a(r2)
            float r2 = r3.s
            r1.b(r2)
            int r2 = r3.getWidth()
            r1.b(r2)
            int r2 = r3.getWidth()
            r1.c(r2)
            boolean r2 = r3.u
            if (r2 == 0) goto L2a
            r1.a(r0)
            goto L2f
        L2a:
            r0 = 500(0x1f4, float:7.0E-43)
            r1.a(r0)
        L2f:
            r0 = 0
            r3.u = r0
            return r1
    }

    private int d(android.content.res.ColorStateList r4) {
            r3 = this;
            r0 = 1
            int[] r0 = new int[r0]
            r1 = -16842910(0xfffffffffefeff62, float:-1.6947497E38)
            r2 = 0
            r0[r2] = r1
            int r4 = r4.getColorForState(r0, r2)
            return r4
    }

    protected final void a() {
            r1 = this;
            r0 = 0
            r1.setCompoundDrawablesWithIntrinsicBounds(r0, r0, r0, r0)
            r1.setPadding(r0, r0, r0, r0)
            return
    }

    @Override
    protected void drawableStateChanged() {
            r5 = this;
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = r5.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r1 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.c
            r2 = 16842919(0x10100a7, float:2.3694026E-38)
            r3 = 0
            r4 = 1
            if (r0 != r1) goto L3a
            android.content.res.ColorStateList r0 = r5.e
            int r0 = r5.b(r0)
            com.mbridge.msdk.widget.custom.baseview.f r0 = r5.a(r0)
            android.graphics.drawable.StateListDrawable r1 = new android.graphics.drawable.StateListDrawable
            r1.<init>()
            r5.h = r1
            int[] r4 = new int[r4]
            r4[r3] = r2
            android.graphics.drawable.GradientDrawable r0 = r0.a()
            r1.addState(r4, r0)
            android.graphics.drawable.StateListDrawable r0 = r5.h
            int[] r1 = android.util.StateSet.WILD_CARD
            com.mbridge.msdk.widget.custom.baseview.f r2 = r5.a
            android.graphics.drawable.GradientDrawable r2 = r2.a()
            r0.addState(r1, r2)
            android.graphics.drawable.StateListDrawable r0 = r5.h
            r5.setBackgroundCompat(r0)
            goto L7d
        L3a:
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = r5.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r1 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.b
            if (r0 != r1) goto L49
            r5.b()
            android.graphics.drawable.StateListDrawable r0 = r5.g
            r5.setBackgroundCompat(r0)
            goto L7d
        L49:
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = r5.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r1 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.d
            if (r0 != r1) goto L7d
            android.content.res.ColorStateList r0 = r5.f
            int r0 = r5.b(r0)
            com.mbridge.msdk.widget.custom.baseview.f r0 = r5.a(r0)
            android.graphics.drawable.StateListDrawable r1 = new android.graphics.drawable.StateListDrawable
            r1.<init>()
            r5.i = r1
            int[] r4 = new int[r4]
            r4[r3] = r2
            android.graphics.drawable.GradientDrawable r0 = r0.a()
            r1.addState(r4, r0)
            android.graphics.drawable.StateListDrawable r0 = r5.i
            int[] r1 = android.util.StateSet.WILD_CARD
            com.mbridge.msdk.widget.custom.baseview.f r2 = r5.a
            android.graphics.drawable.GradientDrawable r2 = r2.a()
            r0.addState(r1, r2)
            android.graphics.drawable.StateListDrawable r0 = r5.i
            r5.setBackgroundCompat(r0)
        L7d:
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = r5.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r1 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.a
            if (r0 == r1) goto L86
            super.drawableStateChanged()
        L86:
            return
    }

    public int getProgress() {
            r1 = this;
            int r0 = r1.w
            return r0
    }

    public boolean isIndeterminateProgressMode() {
            r1 = this;
            boolean r0 = r1.t
            return r0
    }

    @Override
    protected void onDraw(android.graphics.Canvas r6) {
            r5 = this;
            super.onDraw(r6)
            int r0 = r5.w
            if (r0 <= 0) goto La2
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = r5.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r1 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.a
            if (r0 != r1) goto La2
            boolean r0 = r5.x
            if (r0 != 0) goto La2
            boolean r0 = r5.t
            if (r0 == 0) goto L5e
            com.mbridge.msdk.widget.custom.baseview.a r0 = r5.b
            if (r0 != 0) goto L5a
            int r6 = r5.getWidth()
            int r0 = r5.getHeight()
            int r6 = r6 - r0
            int r6 = r6 / 2
            com.mbridge.msdk.widget.custom.baseview.a r0 = new com.mbridge.msdk.widget.custom.baseview.a
            int r1 = r5.m
            android.content.Context r2 = r5.getContext()
            r3 = 1073741824(0x40000000, float:2.0)
            int r2 = com.mbridge.msdk.widget.custom.b.a.a(r2, r3)
            float r2 = (float) r2
            r0.<init>(r1, r2)
            r5.b = r0
            int r0 = r5.r
            int r0 = r0 + r6
            int r1 = r5.getWidth()
            int r1 = r1 - r6
            int r6 = r5.r
            int r1 = r1 - r6
            int r6 = r5.getHeight()
            int r2 = r5.r
            int r6 = r6 - r2
            com.mbridge.msdk.widget.custom.baseview.a r3 = r5.b
            r3.setBounds(r0, r2, r1, r6)
            com.mbridge.msdk.widget.custom.baseview.a r6 = r5.b
            r6.setCallback(r5)
            com.mbridge.msdk.widget.custom.baseview.a r6 = r5.b
            r6.start()
            goto La2
        L5a:
            r0.draw(r6)
            goto La2
        L5e:
            com.mbridge.msdk.widget.custom.baseview.b r0 = r5.c
            if (r0 != 0) goto L8e
            int r0 = r5.getWidth()
            int r1 = r5.getHeight()
            int r0 = r0 - r1
            int r0 = r0 / 2
            int r1 = r5.getHeight()
            int r2 = r5.r
            int r2 = r2 * 2
            int r1 = r1 - r2
            com.mbridge.msdk.widget.custom.baseview.b r2 = new com.mbridge.msdk.widget.custom.baseview.b
            android.content.Context r3 = r5.getContext()
            r4 = 4
            int r3 = com.mbridge.msdk.widget.custom.b.a.a(r3, r4)
            int r4 = r5.m
            r2.<init>(r1, r3, r4)
            r5.c = r2
            int r1 = r5.r
            int r0 = r0 + r1
            r2.setBounds(r0, r1, r0, r1)
        L8e:
            r0 = 1135869952(0x43b40000, float:360.0)
            int r1 = r5.v
            float r1 = (float) r1
            float r0 = r0 / r1
            int r1 = r5.w
            float r1 = (float) r1
            float r0 = r0 * r1
            com.mbridge.msdk.widget.custom.baseview.b r1 = r5.c
            r1.a(r0)
            com.mbridge.msdk.widget.custom.baseview.b r0 = r5.c
            r0.draw(r6)
        La2:
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            if (r1 == 0) goto La
            int r1 = r0.w
            r0.setProgress(r1)
        La:
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState
            if (r0 == 0) goto L25
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$SavedState r2 = (com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState) r2
            int r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState.a(r2)
            r1.w = r0
            boolean r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState.b(r2)
            r1.t = r0
            boolean r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState.c(r2)
            r1.u = r0
            android.os.Parcelable r2 = r2.getSuperState()
            super.onRestoreInstanceState(r2)
            int r2 = r1.w
            r1.setProgress(r2)
            goto L28
        L25:
            super.onRestoreInstanceState(r2)
        L28:
            return
    }

    @Override
    public android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$SavedState r1 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$SavedState
            r1.<init>(r0)
            int r0 = r2.w
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState.a(r1, r0)
            boolean r0 = r2.t
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState.a(r1, r0)
            r0 = 1
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.SavedState.b(r1, r0)
            return r1
    }

    @Override
    public void setBackgroundColor(int r2) {
            r1 = this;
            com.mbridge.msdk.widget.custom.baseview.f r0 = r1.a
            android.graphics.drawable.GradientDrawable r0 = r0.a()
            r0.setColor(r2)
            return
    }

    public void setBackgroundCompat(android.graphics.drawable.Drawable r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.setBackground(r3)
            goto Ld
        La:
            r2.setBackgroundDrawable(r3)
        Ld:
            return
    }

    public void setIndeterminateProgressMode(boolean r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public void setProgress(int r4) {
            r3 = this;
            r3.w = r4
            boolean r4 = r3.x
            if (r4 != 0) goto L212
            int r4 = r3.getWidth()
            if (r4 != 0) goto Le
            goto L212
        Le:
            com.mbridge.msdk.widget.custom.baseview.e r4 = r3.j
            r4.a(r3)
            int r4 = r3.w
            int r0 = r3.v
            if (r4 < r0) goto L90
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.a
            if (r4 != r0) goto L58
            int r4 = r3.getHeight()
            float r4 = (float) r4
            float r0 = r3.s
            int r1 = r3.getHeight()
            int r2 = r3.getWidth()
            com.mbridge.msdk.widget.custom.baseview.c r4 = r3.a(r4, r0, r1, r2)
            int r0 = r3.l
            r4.d(r0)
            android.content.res.ColorStateList r0 = r3.e
            int r0 = r3.a(r0)
            r4.e(r0)
            int r0 = r3.m
            r4.f(r0)
            android.content.res.ColorStateList r0 = r3.e
            int r0 = r3.a(r0)
            r4.g(r0)
            com.mbridge.msdk.widget.custom.baseview.d r0 = r3.z
            r4.a(r0)
            r4.a()
            goto L212
        L58:
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.b
            if (r4 != r0) goto L212
            com.mbridge.msdk.widget.custom.baseview.c r4 = r3.c()
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.d(r0)
            android.content.res.ColorStateList r0 = r3.e
            int r0 = r3.a(r0)
            r4.e(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.f(r0)
            android.content.res.ColorStateList r0 = r3.e
            int r0 = r3.a(r0)
            r4.g(r0)
            com.mbridge.msdk.widget.custom.baseview.d r0 = r3.z
            r4.a(r0)
            r4.a()
            goto L212
        L90:
            if (r4 <= 0) goto Le3
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.b
            if (r4 != r0) goto Ld8
            int r4 = r3.getWidth()
            r3.setWidth(r4)
            float r4 = r3.s
            int r0 = r3.getHeight()
            float r0 = (float) r0
            int r1 = r3.getWidth()
            int r2 = r3.getHeight()
            com.mbridge.msdk.widget.custom.baseview.c r4 = r3.a(r4, r0, r1, r2)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.d(r0)
            int r0 = r3.l
            r4.e(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.f(r0)
            int r0 = r3.n
            r4.g(r0)
            com.mbridge.msdk.widget.custom.baseview.d r0 = r3.y
            r4.a(r0)
            r4.a()
            goto L212
        Ld8:
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.a
            if (r4 != r0) goto L212
            r3.invalidate()
            goto L212
        Le3:
            r0 = -1
            if (r4 != r0) goto L15d
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.a
            if (r4 != r0) goto L125
            int r4 = r3.getHeight()
            float r4 = (float) r4
            float r0 = r3.s
            int r1 = r3.getHeight()
            int r2 = r3.getWidth()
            com.mbridge.msdk.widget.custom.baseview.c r4 = r3.a(r4, r0, r1, r2)
            int r0 = r3.l
            r4.d(r0)
            android.content.res.ColorStateList r0 = r3.f
            int r0 = r3.a(r0)
            r4.e(r0)
            int r0 = r3.m
            r4.f(r0)
            android.content.res.ColorStateList r0 = r3.f
            int r0 = r3.a(r0)
            r4.g(r0)
            com.mbridge.msdk.widget.custom.baseview.d r0 = r3.B
            r4.a(r0)
            r4.a()
            goto L212
        L125:
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.b
            if (r4 != r0) goto L212
            com.mbridge.msdk.widget.custom.baseview.c r4 = r3.c()
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.d(r0)
            android.content.res.ColorStateList r0 = r3.f
            int r0 = r3.a(r0)
            r4.e(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.f(r0)
            android.content.res.ColorStateList r0 = r3.f
            int r0 = r3.a(r0)
            r4.g(r0)
            com.mbridge.msdk.widget.custom.baseview.d r0 = r3.B
            r4.a(r0)
            r4.a()
            goto L212
        L15d:
            if (r4 != 0) goto L212
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.c
            if (r4 != r0) goto L197
            com.mbridge.msdk.widget.custom.baseview.c r4 = r3.c()
            android.content.res.ColorStateList r0 = r3.e
            int r0 = r3.a(r0)
            r4.d(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.e(r0)
            android.content.res.ColorStateList r0 = r3.e
            int r0 = r3.a(r0)
            r4.f(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.g(r0)
            com.mbridge.msdk.widget.custom.baseview.d r0 = r3.A
            r4.a(r0)
            r4.a()
            goto L212
        L197:
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.a
            if (r4 != r0) goto L1dc
            boolean r4 = r3.t
            if (r4 == 0) goto L212
            int r4 = r3.getHeight()
            float r4 = (float) r4
            float r0 = r3.s
            int r1 = r3.getHeight()
            int r2 = r3.getWidth()
            com.mbridge.msdk.widget.custom.baseview.c r4 = r3.a(r4, r0, r1, r2)
            int r0 = r3.l
            r4.d(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.e(r0)
            int r0 = r3.m
            r4.f(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.g(r0)
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$5 r0 = new com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$5
            r0.<init>(r3)
            r4.a(r0)
            r4.a()
            goto L212
        L1dc:
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r4 = r3.k
            com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton$a r0 = com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton.a.d
            if (r4 != r0) goto L212
            com.mbridge.msdk.widget.custom.baseview.c r4 = r3.c()
            android.content.res.ColorStateList r0 = r3.f
            int r0 = r3.a(r0)
            r4.d(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.e(r0)
            android.content.res.ColorStateList r0 = r3.f
            int r0 = r3.a(r0)
            r4.f(r0)
            android.content.res.ColorStateList r0 = r3.d
            int r0 = r3.a(r0)
            r4.g(r0)
            com.mbridge.msdk.widget.custom.baseview.d r0 = r3.A
            r4.a(r0)
            r4.a()
        L212:
            return
    }

    public void setStrokeColor(int r2) {
            r1 = this;
            com.mbridge.msdk.widget.custom.baseview.f r0 = r1.a
            r0.b(r2)
            return
    }

    @Override
    protected boolean verifyDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            com.mbridge.msdk.widget.custom.baseview.a r0 = r1.b
            if (r2 == r0) goto Ld
            boolean r2 = super.verifyDrawable(r2)
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            goto Le
        Ld:
            r2 = 1
        Le:
            return r2
    }
}
