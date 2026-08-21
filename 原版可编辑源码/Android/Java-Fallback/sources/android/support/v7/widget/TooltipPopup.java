package android.support.v7.widget;

class TooltipPopup {
    private static final java.lang.String TAG = "TooltipPopup";
    private final android.view.View mContentView;
    private final android.content.Context mContext;
    private final android.view.WindowManager.LayoutParams mLayoutParams;
    private final android.widget.TextView mMessageView;
    private final int[] mTmpAnchorPos;
    private final int[] mTmpAppPos;
    private final android.graphics.Rect mTmpDisplayFrame;

    TooltipPopup(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            android.view.WindowManager$LayoutParams r0 = new android.view.WindowManager$LayoutParams
            r0.<init>()
            r2.mLayoutParams = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r2.mTmpDisplayFrame = r0
            r0 = 2
            int[] r1 = new int[r0]
            r2.mTmpAnchorPos = r1
            int[] r0 = new int[r0]
            r2.mTmpAppPos = r0
            r2.mContext = r3
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r3)
            int r0 = android.support.v7.appcompat.R.layout.abc_tooltip
            r1 = 0
            android.view.View r3 = r3.inflate(r0, r1)
            r2.mContentView = r3
            int r0 = android.support.v7.appcompat.R.id.message
            android.view.View r3 = r3.findViewById(r0)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r2.mMessageView = r3
            android.view.WindowManager$LayoutParams r3 = r2.mLayoutParams
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r3.setTitle(r0)
            android.view.WindowManager$LayoutParams r3 = r2.mLayoutParams
            android.content.Context r0 = r2.mContext
            java.lang.String r0 = r0.getPackageName()
            r3.packageName = r0
            android.view.WindowManager$LayoutParams r3 = r2.mLayoutParams
            r0 = 1002(0x3ea, float:1.404E-42)
            r3.type = r0
            android.view.WindowManager$LayoutParams r3 = r2.mLayoutParams
            r0 = -2
            r3.width = r0
            android.view.WindowManager$LayoutParams r3 = r2.mLayoutParams
            r3.height = r0
            android.view.WindowManager$LayoutParams r3 = r2.mLayoutParams
            r0 = -3
            r3.format = r0
            android.view.WindowManager$LayoutParams r3 = r2.mLayoutParams
            int r0 = android.support.v7.appcompat.R.style.Animation_AppCompat_Tooltip
            r3.windowAnimations = r0
            android.view.WindowManager$LayoutParams r3 = r2.mLayoutParams
            r0 = 24
            r3.flags = r0
            return
    }

    private void computePosition(android.view.View r9, int r10, int r11, boolean r12, android.view.WindowManager.LayoutParams r13) {
            r8 = this;
            android.os.IBinder r0 = r9.getApplicationWindowToken()
            r13.token = r0
            android.content.Context r0 = r8.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = android.support.v7.appcompat.R.dimen.tooltip_precise_anchor_threshold
            int r0 = r0.getDimensionPixelOffset(r1)
            int r1 = r9.getWidth()
            if (r1 < r0) goto L19
            goto L1f
        L19:
            int r10 = r9.getWidth()
            int r10 = r10 / 2
        L1f:
            int r1 = r9.getHeight()
            r2 = 0
            if (r1 < r0) goto L36
            android.content.Context r0 = r8.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = android.support.v7.appcompat.R.dimen.tooltip_precise_anchor_extra_offset
            int r0 = r0.getDimensionPixelOffset(r1)
            int r1 = r11 + r0
            int r11 = r11 - r0
            goto L3b
        L36:
            int r1 = r9.getHeight()
            r11 = r2
        L3b:
            r0 = 49
            r13.gravity = r0
            android.content.Context r0 = r8.mContext
            android.content.res.Resources r0 = r0.getResources()
            if (r12 == 0) goto L4a
            int r3 = android.support.v7.appcompat.R.dimen.tooltip_y_offset_touch
            goto L4c
        L4a:
            int r3 = android.support.v7.appcompat.R.dimen.tooltip_y_offset_non_touch
        L4c:
            int r0 = r0.getDimensionPixelOffset(r3)
            android.view.View r3 = getAppRootView(r9)
            if (r3 != 0) goto L5e
            java.lang.String r9 = "TooltipPopup"
            java.lang.String r10 = "Cannot find app view"
            android.util.Log.e(r9, r10)
            return
        L5e:
            android.graphics.Rect r4 = r8.mTmpDisplayFrame
            r3.getWindowVisibleDisplayFrame(r4)
            android.graphics.Rect r4 = r8.mTmpDisplayFrame
            int r4 = r4.left
            if (r4 >= 0) goto L94
            android.graphics.Rect r4 = r8.mTmpDisplayFrame
            int r4 = r4.top
            if (r4 >= 0) goto L94
            android.content.Context r4 = r8.mContext
            android.content.res.Resources r4 = r4.getResources()
            java.lang.String r5 = "status_bar_height"
            java.lang.String r6 = "dimen"
            java.lang.String r7 = "android"
            int r5 = r4.getIdentifier(r5, r6, r7)
            if (r5 == 0) goto L86
            int r5 = r4.getDimensionPixelSize(r5)
            goto L87
        L86:
            r5 = r2
        L87:
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            android.graphics.Rect r6 = r8.mTmpDisplayFrame
            int r7 = r4.widthPixels
            int r4 = r4.heightPixels
            r6.set(r2, r5, r7, r4)
        L94:
            int[] r4 = r8.mTmpAppPos
            r3.getLocationOnScreen(r4)
            int[] r4 = r8.mTmpAnchorPos
            r9.getLocationOnScreen(r4)
            int[] r9 = r8.mTmpAnchorPos
            r4 = r9[r2]
            int[] r5 = r8.mTmpAppPos
            r6 = r5[r2]
            int r4 = r4 - r6
            r9[r2] = r4
            r4 = 1
            r6 = r9[r4]
            r5 = r5[r4]
            int r6 = r6 - r5
            r9[r4] = r6
            r9 = r9[r2]
            int r9 = r9 + r10
            int r10 = r3.getWidth()
            int r10 = r10 / 2
            int r9 = r9 - r10
            r13.x = r9
            int r9 = android.view.View.MeasureSpec.makeMeasureSpec(r2, r2)
            android.view.View r10 = r8.mContentView
            r10.measure(r9, r9)
            android.view.View r9 = r8.mContentView
            int r9 = r9.getMeasuredHeight()
            int[] r10 = r8.mTmpAnchorPos
            r2 = r10[r4]
            int r2 = r2 + r11
            int r2 = r2 - r0
            int r2 = r2 - r9
            r10 = r10[r4]
            int r10 = r10 + r1
            int r10 = r10 + r0
            if (r12 == 0) goto Le1
            if (r2 < 0) goto Lde
            r13.y = r2
            goto Lef
        Lde:
            r13.y = r10
            goto Lef
        Le1:
            int r9 = r9 + r10
            android.graphics.Rect r11 = r8.mTmpDisplayFrame
            int r11 = r11.height()
            if (r9 > r11) goto Led
            r13.y = r10
            goto Lef
        Led:
            r13.y = r2
        Lef:
            return
    }

    private static android.view.View getAppRootView(android.view.View r3) {
            android.view.View r0 = r3.getRootView()
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            boolean r2 = r1 instanceof android.view.WindowManager.LayoutParams
            if (r2 == 0) goto L14
            android.view.WindowManager$LayoutParams r1 = (android.view.WindowManager.LayoutParams) r1
            int r1 = r1.type
            r2 = 2
            if (r1 != r2) goto L14
            return r0
        L14:
            android.content.Context r3 = r3.getContext()
        L18:
            boolean r1 = r3 instanceof android.content.ContextWrapper
            if (r1 == 0) goto L32
            boolean r1 = r3 instanceof android.app.Activity
            if (r1 == 0) goto L2b
            android.app.Activity r3 = (android.app.Activity) r3
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            return r3
        L2b:
            android.content.ContextWrapper r3 = (android.content.ContextWrapper) r3
            android.content.Context r3 = r3.getBaseContext()
            goto L18
        L32:
            return r0
    }

    void hide() {
            r2 = this;
            boolean r0 = r2.isShowing()
            if (r0 != 0) goto L7
            return
        L7:
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = "window"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            android.view.View r1 = r2.mContentView
            r0.removeView(r1)
            return
    }

    boolean isShowing() {
            r1 = this;
            android.view.View r0 = r1.mContentView
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    void show(android.view.View r8, int r9, int r10, boolean r11, java.lang.CharSequence r12) {
            r7 = this;
            boolean r0 = r7.isShowing()
            if (r0 == 0) goto L9
            r7.hide()
        L9:
            android.widget.TextView r0 = r7.mMessageView
            r0.setText(r12)
            android.view.WindowManager$LayoutParams r6 = r7.mLayoutParams
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.computePosition(r2, r3, r4, r5, r6)
            android.content.Context r8 = r7.mContext
            java.lang.String r9 = "window"
            java.lang.Object r8 = r8.getSystemService(r9)
            android.view.WindowManager r8 = (android.view.WindowManager) r8
            android.view.View r9 = r7.mContentView
            android.view.WindowManager$LayoutParams r10 = r7.mLayoutParams
            r8.addView(r9, r10)
            return
    }
}
