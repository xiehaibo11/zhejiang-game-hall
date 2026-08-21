package com.sigmob.sdk.nativead;

public class m extends android.view.ViewGroup {
    private final int a;
    private final int b;
    private final int c;
    private final int d;
    private final float e;
    private final float f;
    private final float g;
    private final float h;
    private final float i;
    private int j;
    private int k;
    private boolean l;
    private int m;
    private int n;
    private float o;
    private int p;
    private int q;
    private int r;
    private int s;
    private boolean t;
    private boolean u;
    private float[] v;
    private com.sigmob.sdk.nativead.m.e w;
    private com.sigmob.sdk.nativead.m.a x;
    private int y;

    class a implements android.view.View.OnClickListener {
        final com.sigmob.sdk.nativead.m a;

        a(com.sigmob.sdk.nativead.m r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onClick(android.view.View r6) {
                r5 = this;
                com.sigmob.sdk.nativead.m r0 = r5.a
                boolean r0 = com.sigmob.sdk.nativead.m.a(r0)
                if (r0 == 0) goto L60
                com.sigmob.sdk.nativead.m$b r6 = (com.sigmob.sdk.nativead.m.b) r6
                r0 = -1
                com.sigmob.sdk.nativead.m r1 = r5.a
                com.sigmob.sdk.nativead.m$b r1 = r1.getSelectedItem()
                com.sigmob.sdk.nativead.m r2 = r5.a
                boolean r2 = com.sigmob.sdk.nativead.m.b(r2)
                r3 = 0
                r4 = 1
                if (r2 != 0) goto L2a
                if (r1 == 0) goto L20
                r1.a(r3)
            L20:
                r6.a(r4)
                com.sigmob.sdk.nativead.m r0 = r5.a
                int r0 = r0.getSelectedIndex()
                goto L47
            L2a:
                boolean r1 = com.sigmob.sdk.nativead.m.b.a(r6)
                r1 = r1 ^ r4
                r6.a(r1)
                com.sigmob.sdk.nativead.m r1 = r5.a
                int r1 = r1.getChildCount()
            L38:
                if (r3 >= r1) goto L47
                com.sigmob.sdk.nativead.m r2 = r5.a
                com.sigmob.sdk.nativead.m$b r2 = r2.b(r3)
                if (r2 != r6) goto L44
                r0 = r3
                goto L47
            L44:
                int r3 = r3 + 1
                goto L38
            L47:
                com.sigmob.sdk.nativead.m r1 = r5.a
                com.sigmob.sdk.nativead.m$e r1 = com.sigmob.sdk.nativead.m.c(r1)
                if (r1 == 0) goto L60
                com.sigmob.sdk.nativead.m r1 = r5.a
                com.sigmob.sdk.nativead.m$e r1 = com.sigmob.sdk.nativead.m.c(r1)
                java.lang.CharSequence r6 = r6.getText()
                java.lang.String r6 = r6.toString()
                r1.a(r0, r6)
            L60:
                return
        }
    }

    class b extends android.widget.TextView {
        final com.sigmob.sdk.nativead.m a;
        private boolean b;
        private android.graphics.Paint c;
        private android.graphics.Rect d;

        public b(com.sigmob.sdk.nativead.m r6, android.content.Context r7, java.lang.CharSequence r8) {
                r5 = this;
                r5.a = r6
                r5.<init>(r7)
                r7 = 0
                r5.b = r7
                android.graphics.Paint r0 = new android.graphics.Paint
                r1 = 1
                r0.<init>(r1)
                r5.c = r0
                android.graphics.Rect r0 = new android.graphics.Rect
                r0.<init>()
                r5.d = r0
                android.graphics.Paint r0 = r5.c
                android.graphics.Paint$Style r2 = android.graphics.Paint.Style.FILL
                r0.setStyle(r2)
                int r0 = com.sigmob.sdk.nativead.m.d(r6)
                int r2 = com.sigmob.sdk.nativead.m.e(r6)
                int r3 = com.sigmob.sdk.nativead.m.d(r6)
                int r4 = com.sigmob.sdk.nativead.m.e(r6)
                r5.setPadding(r0, r2, r3, r4)
                com.sigmob.sdk.nativead.m$c r0 = new com.sigmob.sdk.nativead.m$c
                int r2 = com.sigmob.sdk.nativead.m.f(r6)
                r3 = -2
                r0.<init>(r2, r3)
                r5.setLayoutParams(r0)
                r0 = 17
                r5.setGravity(r0)
                float r6 = com.sigmob.sdk.nativead.m.g(r6)
                r5.setTextSize(r7, r6)
                r5.setSingleLine(r1)
                java.lang.String r6 = "END"
                android.text.TextUtils$TruncateAt r6 = android.text.TextUtils.TruncateAt.valueOf(r6)
                r5.setEllipsize(r6)
                r6 = 4
                r5.setMaxEms(r6)
                r5.setText(r8)
                r5.setClickable(r1)
                r5.a()
                return
        }

        private void a() {
                r2 = this;
                com.sigmob.sdk.nativead.m r0 = r2.a
                r1 = 0
                com.sigmob.sdk.nativead.m.a(r0, r1)
                boolean r0 = r2.b
                if (r0 == 0) goto L1c
                android.graphics.Paint r0 = r2.c
                com.sigmob.sdk.nativead.m r1 = r2.a
                int r1 = com.sigmob.sdk.nativead.m.h(r1)
                r0.setColor(r1)
                com.sigmob.sdk.nativead.m r0 = r2.a
                int r0 = com.sigmob.sdk.nativead.m.i(r0)
                goto L2d
            L1c:
                android.graphics.Paint r0 = r2.c
                com.sigmob.sdk.nativead.m r1 = r2.a
                int r1 = com.sigmob.sdk.nativead.m.j(r1)
                r0.setColor(r1)
                com.sigmob.sdk.nativead.m r0 = r2.a
                int r0 = com.sigmob.sdk.nativead.m.k(r0)
            L2d:
                r2.setTextColor(r0)
                return
        }

        static boolean a(com.sigmob.sdk.nativead.m.b r0) {
                boolean r0 = r0.b
                return r0
        }

        private void b() {
                r3 = this;
                boolean r0 = r3.b
                if (r0 == 0) goto Lb
                com.sigmob.sdk.nativead.m r0 = r3.a
                int r0 = com.sigmob.sdk.nativead.m.h(r0)
                goto L11
            Lb:
                com.sigmob.sdk.nativead.m r0 = r3.a
                int r0 = com.sigmob.sdk.nativead.m.j(r0)
            L11:
                android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
                r1.<init>()
                com.sigmob.sdk.nativead.m r2 = r3.a
                float[] r2 = com.sigmob.sdk.nativead.m.m(r2)
                r1.setCornerRadii(r2)
                r1.setColor(r0)
                int r0 = android.os.Build.VERSION.SDK_INT
                r2 = 16
                if (r0 >= r2) goto L2c
                r3.setBackgroundDrawable(r1)
                goto L2f
            L2c:
                r3.setBackground(r1)
            L2f:
                return
        }

        public void a(boolean r1) {
                r0 = this;
                r0.b = r1
                r0.a()
                return
        }

        @Override
        protected boolean getDefaultEditable() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        protected void onDraw(android.graphics.Canvas r2) {
                r1 = this;
                com.sigmob.sdk.nativead.m r0 = r1.a
                boolean r0 = com.sigmob.sdk.nativead.m.l(r0)
                if (r0 != 0) goto Lb
                r1.b()
            Lb:
                super.onDraw(r2)
                return
        }

        @Override
        public boolean onTouchEvent(android.view.MotionEvent r4) {
                r3 = this;
                int r0 = r4.getAction()
                if (r0 == 0) goto L20
                r1 = 1
                if (r0 == r1) goto L25
                r1 = 2
                if (r0 == r1) goto Ld
                goto L2b
            Ld:
                android.graphics.Rect r0 = r3.d
                float r1 = r4.getX()
                int r1 = (int) r1
                float r2 = r4.getY()
                int r2 = (int) r2
                boolean r0 = r0.contains(r1, r2)
                if (r0 != 0) goto L2b
                goto L25
            L20:
                android.graphics.Rect r0 = r3.d
                r3.getDrawingRect(r0)
            L25:
                r3.a()
                r3.invalidate()
            L2b:
                boolean r4 = super.onTouchEvent(r4)
                return r4
        }
    }

    public static class c extends android.view.ViewGroup.LayoutParams {
        public c(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public c(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    static class d extends android.view.View.BaseSavedState {
        public static final android.os.Parcelable.Creator<com.sigmob.sdk.nativead.m.d> CREATOR = null;
        int a;
        java.lang.String[] b;
        int c;


        static {
                com.sigmob.sdk.nativead.m$d$1 r0 = new com.sigmob.sdk.nativead.m$d$1
                r0.<init>()
                com.sigmob.sdk.nativead.m.d.CREATOR = r0
                return
        }

        public d(android.os.Parcel r2) {
                r1 = this;
                r1.<init>(r2)
                int r0 = r2.readInt()
                r1.a = r0
                java.lang.String[] r0 = new java.lang.String[r0]
                r1.b = r0
                r2.readStringArray(r0)
                int r2 = r2.readInt()
                r1.c = r2
                return
        }

        public d(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                java.lang.String[] r2 = r0.b
                int r2 = r2.length
                r0.a = r2
                r1.writeInt(r2)
                java.lang.String[] r2 = r0.b
                r1.writeStringArray(r2)
                int r2 = r0.c
                r1.writeInt(r2)
                return
        }
    }

    public interface e {
        void a(int r1, java.lang.String r2);
    }

    public m(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public m(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public m(android.content.Context r4, android.util.AttributeSet r5, int r6) {
            r3 = this;
            r3.<init>(r4, r5, r6)
            r5 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r3.a = r5
            java.lang.String r6 = "#EEEEEE"
            int r6 = android.graphics.Color.parseColor(r6)
            r3.b = r6
            r6 = -1
            r3.c = r6
            java.lang.String r0 = "#FE7E03"
            int r0 = android.graphics.Color.parseColor(r0)
            r3.d = r0
            r0 = 0
            r3.u = r0
            r1 = 8
            float[] r1 = new float[r1]
            r1 = {x00a2: FILL_ARRAY_DATA , data: [0, 0, 0, 0, 0, 0, 0, 0} // fill-array
            r3.v = r1
            com.sigmob.sdk.nativead.m$a r1 = new com.sigmob.sdk.nativead.m$a
            r1.<init>(r3)
            r3.x = r1
            android.content.res.Resources r1 = r4.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.widthPixels
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            int r4 = r4.heightPixels
            r2 = 1120403456(0x42c80000, float:100.0)
            float r2 = r3.a(r2)
            int r2 = (int) r2
            if (r4 <= r1) goto L50
            int r1 = r1 - r2
            int r1 = r1 / 3
            r3.y = r1
            goto L55
        L50:
            int r4 = r4 - r2
            int r4 = r4 / 3
            r3.y = r4
        L55:
            r4 = 1095761920(0x41500000, float:13.0)
            int r4 = r3.b(r4)
            float r4 = (float) r4
            r3.e = r4
            r4 = 1092616192(0x41200000, float:10.0)
            float r1 = r3.a(r4)
            r3.f = r1
            float r1 = r3.a(r4)
            r3.g = r1
            float r4 = r3.a(r4)
            r3.h = r4
            r4 = 1084227584(0x40a00000, float:5.0)
            float r4 = r3.a(r4)
            r3.i = r4
            r3.j = r5
            int r5 = r3.b
            r3.k = r5
            r3.m = r6
            int r5 = r3.d
            r3.n = r5
            float r5 = r3.e
            r3.o = r5
            float r5 = r3.f
            int r5 = (int) r5
            r3.p = r5
            float r5 = r3.g
            int r5 = (int) r5
            r3.q = r5
            float r5 = r3.h
            int r5 = (int) r5
            r3.r = r5
            int r4 = (int) r4
            r3.s = r4
            r3.t = r0
            r4 = 1
            r3.l = r4
            return
    }

    private float a(float r3) {
            r2 = this;
            android.content.res.Resources r0 = r2.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            r1 = 1
            float r3 = android.util.TypedValue.applyDimension(r1, r3, r0)
            return r3
    }

    private void a(java.lang.CharSequence r3) {
            r2 = this;
            com.sigmob.sdk.nativead.m$b r0 = new com.sigmob.sdk.nativead.m$b
            android.content.Context r1 = r2.getContext()
            r0.<init>(r2, r1, r3)
            com.sigmob.sdk.nativead.m$a r3 = r2.x
            r0.setOnClickListener(r3)
            r2.addView(r0)
            return
    }

    static boolean a(com.sigmob.sdk.nativead.m r0) {
            boolean r0 = r0.l
            return r0
    }

    static boolean a(com.sigmob.sdk.nativead.m r0, boolean r1) {
            r0.u = r1
            return r1
    }

    private int b(float r3) {
            r2 = this;
            android.content.res.Resources r0 = r2.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            r1 = 2
            float r3 = android.util.TypedValue.applyDimension(r1, r3, r0)
            int r3 = (int) r3
            return r3
    }

    static boolean b(com.sigmob.sdk.nativead.m r0) {
            boolean r0 = r0.t
            return r0
    }

    static com.sigmob.sdk.nativead.m.e c(com.sigmob.sdk.nativead.m r0) {
            com.sigmob.sdk.nativead.m$e r0 = r0.w
            return r0
    }

    static int d(com.sigmob.sdk.nativead.m r0) {
            int r0 = r0.r
            return r0
    }

    static int e(com.sigmob.sdk.nativead.m r0) {
            int r0 = r0.s
            return r0
    }

    static int f(com.sigmob.sdk.nativead.m r0) {
            int r0 = r0.y
            return r0
    }

    static float g(com.sigmob.sdk.nativead.m r0) {
            float r0 = r0.o
            return r0
    }

    static int h(com.sigmob.sdk.nativead.m r0) {
            int r0 = r0.n
            return r0
    }

    static int i(com.sigmob.sdk.nativead.m r0) {
            int r0 = r0.m
            return r0
    }

    static int j(com.sigmob.sdk.nativead.m r0) {
            int r0 = r0.k
            return r0
    }

    static int k(com.sigmob.sdk.nativead.m r0) {
            int r0 = r0.j
            return r0
    }

    static boolean l(com.sigmob.sdk.nativead.m r0) {
            boolean r0 = r0.u
            return r0
    }

    static float[] m(com.sigmob.sdk.nativead.m r0) {
            float[] r0 = r0.v
            return r0
    }

    public int a(int r2) {
            r1 = this;
            r0 = 1
            int r2 = r1.a(r2, r0)
            return r2
    }

    public int a(int r2, boolean r3) {
            r1 = this;
            int r0 = r1.getChildCount()
            if (r2 < r0) goto L8
            r2 = -1
            return r2
        L8:
            com.sigmob.sdk.nativead.m$b r0 = r1.b(r2)
            r0.a(r3)
            return r2
    }

    public int a(java.lang.String r3) {
            r2 = this;
            java.util.ArrayList r0 = r2.getAllItemSelectedTextWithListArray()
            if (r0 == 0) goto L11
            boolean r1 = r0.contains(r3)
            if (r1 == 0) goto L11
            int r3 = r0.indexOf(r3)
            goto L12
        L11:
            r3 = -1
        L12:
            return r3
    }

    public void a() {
            r4 = this;
            int r0 = r4.getChildCount()
            r1 = 0
        L5:
            if (r1 >= r0) goto L12
            com.sigmob.sdk.nativead.m$b r2 = r4.b(r1)
            r3 = 1
            r2.a(r3)
            int r1 = r1 + 1
            goto L5
        L12:
            return
    }

    public void a(int r2, java.lang.String r3) {
            r1 = this;
            int r0 = r1.getChildCount()
            if (r2 < r0) goto L7
            return
        L7:
            com.sigmob.sdk.nativead.m$b r2 = r1.b(r2)
            r2.setText(r3)
            return
    }

    protected com.sigmob.sdk.nativead.m.b b(int r2) {
            r1 = this;
            android.view.View r0 = r1.getChildAt(r2)
            if (r0 != 0) goto L8
            r2 = 0
            goto Le
        L8:
            android.view.View r2 = r1.getChildAt(r2)
            com.sigmob.sdk.nativead.m$b r2 = (com.sigmob.sdk.nativead.m.b) r2
        Le:
            return r2
    }

    public void b() {
            r5 = this;
            int r0 = r5.getChildCount()
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L1a
            com.sigmob.sdk.nativead.m$b r3 = r5.b(r2)
            if (r3 == 0) goto L17
            boolean r4 = com.sigmob.sdk.nativead.m.b.a(r3)
            if (r4 == 0) goto L17
            r3.a(r1)
        L17:
            int r2 = r2 + 1
            goto L6
        L1a:
            return
    }

    public void c() {
            r5 = this;
            int r0 = r5.getChildCount()
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L1d
            com.sigmob.sdk.nativead.m$b r3 = r5.b(r2)
            if (r3 == 0) goto L17
            boolean r4 = com.sigmob.sdk.nativead.m.b.a(r3)
            if (r4 == 0) goto L17
            r3.a(r1)
        L17:
            r3.setClickable(r1)
            int r2 = r2 + 1
            goto L6
        L1d:
            return
    }

    public void c(int r2) {
            r1 = this;
            com.sigmob.sdk.nativead.m$b r2 = r1.b(r2)
            if (r2 == 0) goto L10
            boolean r0 = com.sigmob.sdk.nativead.m.b.a(r2)
            if (r0 == 0) goto L10
            r0 = 0
            r2.a(r0)
        L10:
            return
    }

    public boolean d(int r1) {
            r0 = this;
            com.sigmob.sdk.nativead.m$b r1 = r0.b(r1)
            if (r1 == 0) goto Le
            boolean r1 = com.sigmob.sdk.nativead.m.b.a(r1)
            if (r1 == 0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            com.sigmob.sdk.nativead.m$c r0 = new com.sigmob.sdk.nativead.m$c
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    public java.util.ArrayList<java.lang.Integer> getAllItemSelectedIndex() {
            r4 = this;
            int r0 = r4.getChildCount()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        La:
            if (r2 >= r0) goto L20
            com.sigmob.sdk.nativead.m$b r3 = r4.b(r2)
            boolean r3 = com.sigmob.sdk.nativead.m.b.a(r3)
            if (r3 == 0) goto L1d
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r1.add(r3)
        L1d:
            int r2 = r2 + 1
            goto La
        L20:
            return r1
    }

    public java.util.ArrayList<java.lang.String> getAllItemSelectedTextWithListArray() {
            r5 = this;
            int r0 = r5.getChildCount()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        La:
            if (r2 >= r0) goto L24
            com.sigmob.sdk.nativead.m$b r3 = r5.b(r2)
            boolean r4 = com.sigmob.sdk.nativead.m.b.a(r3)
            if (r4 == 0) goto L21
            java.lang.CharSequence r3 = r3.getText()
            java.lang.String r3 = r3.toString()
            r1.add(r3)
        L21:
            int r2 = r2 + 1
            goto La
        L24:
            return r1
    }

    public java.lang.String[] getAllItemSelectedTextWithStringArray() {
            r5 = this;
            int r0 = r5.getChildCount()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        La:
            if (r2 >= r0) goto L24
            com.sigmob.sdk.nativead.m$b r3 = r5.b(r2)
            boolean r4 = com.sigmob.sdk.nativead.m.b.a(r3)
            if (r4 == 0) goto L21
            java.lang.CharSequence r3 = r3.getText()
            java.lang.String r3 = r3.toString()
            r1.add(r3)
        L21:
            int r2 = r2 + 1
            goto La
        L24:
            int r0 = r1.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r0 = r1.toArray(r0)
            java.lang.String[] r0 = (java.lang.String[]) r0
            return r0
    }

    public java.lang.String[] getAllItemText() {
            r4 = this;
            int r0 = r4.getChildCount()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        La:
            if (r2 >= r0) goto L1e
            com.sigmob.sdk.nativead.m$b r3 = r4.b(r2)
            java.lang.CharSequence r3 = r3.getText()
            java.lang.String r3 = r3.toString()
            r1.add(r3)
            int r2 = r2 + 1
            goto La
        L1e:
            int r0 = r1.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r0 = r1.toArray(r0)
            java.lang.String[] r0 = (java.lang.String[]) r0
            return r0
    }

    public int getSelectedIndex() {
            r3 = this;
            int r0 = r3.getChildCount()
            r1 = 0
        L5:
            if (r1 >= r0) goto L15
            com.sigmob.sdk.nativead.m$b r2 = r3.b(r1)
            boolean r2 = com.sigmob.sdk.nativead.m.b.a(r2)
            if (r2 == 0) goto L12
            return r1
        L12:
            int r1 = r1 + 1
            goto L5
        L15:
            r0 = -1
            return r0
    }

    protected com.sigmob.sdk.nativead.m.b getSelectedItem() {
            r2 = this;
            int r0 = r2.getSelectedIndex()
            r1 = -1
            if (r0 == r1) goto Lc
            com.sigmob.sdk.nativead.m$b r0 = r2.b(r0)
            return r0
        Lc:
            r0 = 0
            return r0
    }

    protected java.lang.String getSelectedItemText() {
            r1 = this;
            com.sigmob.sdk.nativead.m$b r0 = r1.getSelectedItem()
            if (r0 == 0) goto L13
            com.sigmob.sdk.nativead.m$b r0 = r1.getSelectedItem()
            java.lang.CharSequence r0 = r0.getText()
            java.lang.String r0 = r0.toString()
            return r0
        L13:
            r0 = 0
            return r0
    }

    @Override
    protected void onLayout(boolean r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            int r8 = r7.getPaddingLeft()
            int r11 = r11 - r9
            int r9 = r7.getPaddingRight()
            int r11 = r11 - r9
            int r9 = r7.getPaddingTop()
            r7.getPaddingBottom()
            int r10 = r7.getChildCount()
            r12 = 0
            r1 = r8
            r0 = r12
        L18:
            if (r12 >= r10) goto L4a
            android.view.View r2 = r7.getChildAt(r12)
            int r3 = r2.getMeasuredWidth()
            int r4 = r2.getMeasuredHeight()
            int r5 = r2.getVisibility()
            r6 = 8
            if (r5 == r6) goto L47
            int r5 = r1 + r3
            if (r5 <= r11) goto L39
            int r1 = r7.q
            int r0 = r0 + r1
            int r9 = r9 + r0
            r1 = r8
            r0 = r4
            goto L3d
        L39:
            int r0 = java.lang.Math.max(r0, r4)
        L3d:
            int r5 = r1 + r3
            int r4 = r4 + r9
            r2.layout(r1, r9, r5, r4)
            int r2 = r7.p
            int r3 = r3 + r2
            int r1 = r1 + r3
        L47:
            int r12 = r12 + 1
            goto L18
        L4a:
            return
    }

    @Override
    protected void onMeasure(int r13, int r14) {
            r12 = this;
            int r0 = android.view.View.MeasureSpec.getMode(r13)
            int r1 = android.view.View.MeasureSpec.getMode(r14)
            int r2 = android.view.View.MeasureSpec.getSize(r13)
            int r3 = android.view.View.MeasureSpec.getSize(r14)
            r12.measureChildren(r13, r14)
            int r13 = r12.getChildCount()
            r14 = 0
            r4 = r14
            r5 = r4
            r6 = r5
            r7 = r6
        L1c:
            if (r14 >= r13) goto L49
            android.view.View r8 = r12.getChildAt(r14)
            int r9 = r8.getMeasuredWidth()
            int r10 = r8.getMeasuredHeight()
            int r8 = r8.getVisibility()
            r11 = 8
            if (r8 == r11) goto L46
            int r7 = r7 + r9
            if (r7 <= r2) goto L3c
            int r7 = r12.q
            int r5 = r5 + r7
            int r4 = r4 + r5
            int r6 = r6 + 1
            goto L41
        L3c:
            int r10 = java.lang.Math.max(r5, r10)
            r9 = r7
        L41:
            int r5 = r12.p
            int r9 = r9 + r5
            r7 = r9
            r5 = r10
        L46:
            int r14 = r14 + 1
            goto L1c
        L49:
            int r4 = r4 + r5
            int r13 = r12.getPaddingTop()
            int r14 = r12.getPaddingBottom()
            int r13 = r13 + r14
            int r4 = r4 + r13
            if (r6 != 0) goto L61
            int r13 = r12.getPaddingLeft()
            int r14 = r12.getPaddingRight()
            int r13 = r13 + r14
            int r7 = r7 + r13
            goto L62
        L61:
            r7 = r2
        L62:
            r13 = 1073741824(0x40000000, float:2.0)
            if (r0 != r13) goto L67
            goto L68
        L67:
            r2 = r7
        L68:
            if (r1 != r13) goto L6b
            goto L6c
        L6b:
            r3 = r4
        L6c:
            r12.setMeasuredDimension(r2, r3)
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.sigmob.sdk.nativead.m.d
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r2)
            return
        L8:
            com.sigmob.sdk.nativead.m$d r2 = (com.sigmob.sdk.nativead.m.d) r2
            android.os.Parcelable r0 = r2.getSuperState()
            super.onRestoreInstanceState(r0)
            java.lang.String[] r0 = r2.b
            r1.setList(r0)
            int r2 = r2.c
            com.sigmob.sdk.nativead.m$b r2 = r1.b(r2)
            if (r2 == 0) goto L22
            r0 = 1
            r2.a(r0)
        L22:
            return
    }

    @Override
    public android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            com.sigmob.sdk.nativead.m$d r1 = new com.sigmob.sdk.nativead.m$d
            r1.<init>(r0)
            java.lang.String[] r0 = r2.getAllItemText()
            r1.b = r0
            int r0 = r2.getSelectedIndex()
            r1.c = r0
            return r1
    }

    public void setIndexListItemSelected(java.util.List<java.lang.Integer> r4) {
            r3 = this;
            if (r4 == 0) goto L2c
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L2c
            int r0 = r4.size()
            if (r0 != 0) goto Lf
            goto L2c
        Lf:
            int r0 = r3.getChildCount()
            int r1 = r4.size()
            if (r1 <= r0) goto L1a
            return
        L1a:
            r0 = 0
        L1b:
            int r1 = r4.size()
            if (r0 >= r1) goto L2c
            com.sigmob.sdk.nativead.m$b r1 = r3.b(r0)
            r2 = 1
            r1.a(r2)
            int r0 = r0 + 1
            goto L1b
        L2c:
            return
    }

    public void setList(java.util.List<java.lang.String> r2) {
            r1 = this;
            int r0 = r2.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r2 = r2.toArray(r0)
            java.lang.String[] r2 = (java.lang.String[]) r2
            r1.setList(r2)
            return
    }

    public void setList(java.lang.String... r4) {
            r3 = this;
            r3.removeAllViews()
            int r0 = r4.length
            r1 = 0
        L5:
            if (r1 >= r0) goto Lf
            r2 = r4[r1]
            r3.a(r2)
            int r1 = r1 + 1
            goto L5
        Lf:
            return
    }

    public void setOnItemClickListener(com.sigmob.sdk.nativead.m.e r1) {
            r0 = this;
            r0.w = r1
            return
    }
}
