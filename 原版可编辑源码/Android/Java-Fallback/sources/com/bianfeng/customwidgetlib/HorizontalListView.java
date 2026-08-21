package com.bianfeng.customwidgetlib;

public class HorizontalListView extends android.widget.AdapterView<android.widget.ListAdapter> {
    private volatile java.util.Timer isScrollingTimer;
    boolean ismove;
    protected android.widget.ListAdapter mAdapter;
    public boolean mAlwaysOverrideTouch;
    protected int mCurrentX;
    private boolean mDataChanged;
    private android.database.DataSetObserver mDataObserver;
    private int mDisplayOffset;
    private android.view.GestureDetector mGesture;
    private int mLeftViewIndex;
    private int mMaxX;
    protected int mNextX;
    private android.view.GestureDetector.OnGestureListener mOnGesture;
    private android.widget.AdapterView.OnItemClickListener mOnItemClicked;
    private android.widget.AdapterView.OnItemLongClickListener mOnItemLongClicked;
    private android.widget.AdapterView.OnItemSelectedListener mOnItemSelected;
    private java.util.Queue<android.view.View> mRemovedViewQueue;
    private int mRightViewIndex;
    protected android.widget.Scroller mScroller;
    float startX;
    float startY;
    private java.util.Timer timer;
    private int width;





    public class TimeTaskScroll extends java.util.TimerTask {
        private android.os.Handler handler;
        int i;
        final com.bianfeng.customwidgetlib.HorizontalListView this$0;


        public TimeTaskScroll(com.bianfeng.customwidgetlib.HorizontalListView r2, int r3) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                com.bianfeng.customwidgetlib.HorizontalListView$TimeTaskScroll$1 r2 = new com.bianfeng.customwidgetlib.HorizontalListView$TimeTaskScroll$1
                android.os.Looper r0 = android.os.Looper.getMainLooper()
                r2.<init>(r1, r0)
                r1.handler = r2
                r1.i = r3
                return
        }

        @Override
        public void run() {
                r2 = this;
                android.os.Handler r0 = r2.handler
                android.os.Message r0 = r0.obtainMessage()
                r1 = 12
                r0.what = r1
                android.os.Handler r1 = r2.handler
                r1.sendMessage(r0)
                return
        }
    }

    public HorizontalListView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 1
            r0.mAlwaysOverrideTouch = r1
            r1 = -1
            r0.mLeftViewIndex = r1
            r1 = 0
            r0.mRightViewIndex = r1
            r2 = 2147483647(0x7fffffff, float:NaN)
            r0.mMaxX = r2
            r0.mDisplayOffset = r1
            java.util.LinkedList r2 = new java.util.LinkedList
            r2.<init>()
            r0.mRemovedViewQueue = r2
            r0.mDataChanged = r1
            com.bianfeng.customwidgetlib.HorizontalListView$1 r1 = new com.bianfeng.customwidgetlib.HorizontalListView$1
            r1.<init>(r0)
            r0.mDataObserver = r1
            com.bianfeng.customwidgetlib.HorizontalListView$4 r1 = new com.bianfeng.customwidgetlib.HorizontalListView$4
            r1.<init>(r0)
            r0.mOnGesture = r1
            r0.initView()
            return
    }

    static boolean access$002(com.bianfeng.customwidgetlib.HorizontalListView r0, boolean r1) {
            r0.mDataChanged = r1
            return r1
    }

    static void access$100(com.bianfeng.customwidgetlib.HorizontalListView r0) {
            r0.reset()
            return
    }

    static java.util.Timer access$200(com.bianfeng.customwidgetlib.HorizontalListView r0) {
            java.util.Timer r0 = r0.isScrollingTimer
            return r0
    }

    static int access$300(com.bianfeng.customwidgetlib.HorizontalListView r0) {
            int r0 = r0.width
            return r0
    }

    static android.widget.AdapterView.OnItemClickListener access$400(com.bianfeng.customwidgetlib.HorizontalListView r0) {
            android.widget.AdapterView$OnItemClickListener r0 = r0.mOnItemClicked
            return r0
    }

    static int access$500(com.bianfeng.customwidgetlib.HorizontalListView r0) {
            int r0 = r0.mLeftViewIndex
            return r0
    }

    static android.widget.AdapterView.OnItemSelectedListener access$600(com.bianfeng.customwidgetlib.HorizontalListView r0) {
            android.widget.AdapterView$OnItemSelectedListener r0 = r0.mOnItemSelected
            return r0
    }

    static android.widget.AdapterView.OnItemLongClickListener access$700(com.bianfeng.customwidgetlib.HorizontalListView r0) {
            android.widget.AdapterView$OnItemLongClickListener r0 = r0.mOnItemLongClicked
            return r0
    }

    private void addAndMeasureChild(android.view.View r3, int r4) {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
            if (r0 != 0) goto Lc
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
        Lc:
            r1 = 1
            r2.addViewInLayout(r3, r4, r0, r1)
            int r4 = r2.getWidth()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r0)
            int r1 = r2.getHeight()
            int r0 = android.view.View.MeasureSpec.makeMeasureSpec(r1, r0)
            r3.measure(r4, r0)
            return
    }

    private void fillList(int r3) {
            r2 = this;
            int r0 = r2.getChildCount()
            int r0 = r0 + (-1)
            android.view.View r0 = r2.getChildAt(r0)
            r1 = 0
            if (r0 == 0) goto L12
            int r0 = r0.getRight()
            goto L13
        L12:
            r0 = 0
        L13:
            r2.fillListRight(r0, r3)
            android.view.View r0 = r2.getChildAt(r1)
            if (r0 == 0) goto L20
            int r1 = r0.getLeft()
        L20:
            r2.fillListLeft(r1, r3)
            return
    }

    private void fillListLeft(int r4, int r5) {
            r3 = this;
        L0:
            int r0 = r4 + r5
            if (r0 <= 0) goto L2f
            int r0 = r3.mLeftViewIndex
            if (r0 < 0) goto L2f
            android.widget.ListAdapter r1 = r3.mAdapter
            java.util.Queue<android.view.View> r2 = r3.mRemovedViewQueue
            java.lang.Object r2 = r2.poll()
            android.view.View r2 = (android.view.View) r2
            android.view.View r0 = r1.getView(r0, r2, r3)
            r1 = 0
            r3.addAndMeasureChild(r0, r1)
            int r1 = r0.getMeasuredWidth()
            int r4 = r4 - r1
            int r1 = r3.mLeftViewIndex
            int r1 = r1 + (-1)
            r3.mLeftViewIndex = r1
            int r1 = r3.mDisplayOffset
            int r0 = r0.getMeasuredWidth()
            int r1 = r1 - r0
            r3.mDisplayOffset = r1
            goto L0
        L2f:
            return
    }

    private void fillListRight(int r4, int r5) {
            r3 = this;
        L0:
            int r0 = r4 + r5
            int r1 = r3.getWidth()
            if (r0 >= r1) goto L4f
            int r0 = r3.mRightViewIndex
            android.widget.ListAdapter r1 = r3.mAdapter
            int r1 = r1.getCount()
            if (r0 >= r1) goto L4f
            android.widget.ListAdapter r0 = r3.mAdapter
            int r1 = r3.mRightViewIndex
            java.util.Queue<android.view.View> r2 = r3.mRemovedViewQueue
            java.lang.Object r2 = r2.poll()
            android.view.View r2 = (android.view.View) r2
            android.view.View r0 = r0.getView(r1, r2, r3)
            r1 = -1
            r3.addAndMeasureChild(r0, r1)
            int r0 = r0.getMeasuredWidth()
            int r4 = r4 + r0
            int r0 = r3.mRightViewIndex
            android.widget.ListAdapter r1 = r3.mAdapter
            int r1 = r1.getCount()
            int r1 = r1 + (-1)
            if (r0 != r1) goto L41
            int r0 = r3.mCurrentX
            int r0 = r0 + r4
            int r1 = r3.getWidth()
            int r0 = r0 - r1
            r3.mMaxX = r0
        L41:
            int r0 = r3.mMaxX
            if (r0 >= 0) goto L48
            r0 = 0
            r3.mMaxX = r0
        L48:
            int r0 = r3.mRightViewIndex
            int r0 = r0 + 1
            r3.mRightViewIndex = r0
            goto L0
        L4f:
            return
    }

    private synchronized void initView() {
            r3 = this;
            monitor-enter(r3)
            r0 = -1
            r3.mLeftViewIndex = r0     // Catch: java.lang.Throwable -> L2c
            r0 = 0
            r3.mRightViewIndex = r0     // Catch: java.lang.Throwable -> L2c
            r3.mDisplayOffset = r0     // Catch: java.lang.Throwable -> L2c
            r3.mCurrentX = r0     // Catch: java.lang.Throwable -> L2c
            r3.mNextX = r0     // Catch: java.lang.Throwable -> L2c
            r0 = 2147483647(0x7fffffff, float:NaN)
            r3.mMaxX = r0     // Catch: java.lang.Throwable -> L2c
            android.widget.Scroller r0 = new android.widget.Scroller     // Catch: java.lang.Throwable -> L2c
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Throwable -> L2c
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L2c
            r3.mScroller = r0     // Catch: java.lang.Throwable -> L2c
            android.view.GestureDetector r0 = new android.view.GestureDetector     // Catch: java.lang.Throwable -> L2c
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Throwable -> L2c
            android.view.GestureDetector$OnGestureListener r2 = r3.mOnGesture     // Catch: java.lang.Throwable -> L2c
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L2c
            r3.mGesture = r0     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r3)
            return
        L2c:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private void isScrolling() {
            r7 = this;
            java.util.Timer r0 = r7.isScrollingTimer
            if (r0 == 0) goto Lc
            java.util.Timer r0 = r7.isScrollingTimer
            r0.cancel()
            r0 = 0
            r7.isScrollingTimer = r0
        Lc:
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r7.isScrollingTimer = r0
            java.util.Timer r1 = r7.isScrollingTimer
            com.bianfeng.customwidgetlib.HorizontalListView$3 r2 = new com.bianfeng.customwidgetlib.HorizontalListView$3
            r2.<init>(r7)
            r3 = 100
            r5 = 1000(0x3e8, double:4.94E-321)
            r1.schedule(r2, r3, r5)
            return
    }

    private void positionItems(int r7) {
            r6 = this;
            int r0 = r6.getChildCount()
            if (r0 <= 0) goto L2d
            int r0 = r6.mDisplayOffset
            int r0 = r0 + r7
            r6.mDisplayOffset = r0
            r7 = 0
            r1 = 0
        Ld:
            int r2 = r6.getChildCount()
            if (r1 >= r2) goto L2d
            android.view.View r2 = r6.getChildAt(r1)
            int r3 = r2.getMeasuredWidth()
            int r4 = r0 + r3
            int r5 = r2.getMeasuredHeight()
            r2.layout(r0, r7, r4, r5)
            int r2 = r2.getPaddingRight()
            int r3 = r3 + r2
            int r0 = r0 + r3
            int r1 = r1 + 1
            goto Ld
        L2d:
            return
    }

    private void removeNonVisibleItems(int r5) {
            r4 = this;
            r0 = 0
            android.view.View r1 = r4.getChildAt(r0)
        L5:
            if (r1 == 0) goto L2a
            int r2 = r1.getRight()
            int r2 = r2 + r5
            if (r2 > 0) goto L2a
            int r2 = r4.mDisplayOffset
            int r3 = r1.getMeasuredWidth()
            int r2 = r2 + r3
            r4.mDisplayOffset = r2
            java.util.Queue<android.view.View> r2 = r4.mRemovedViewQueue
            r2.offer(r1)
            r4.removeViewInLayout(r1)
            int r1 = r4.mLeftViewIndex
            int r1 = r1 + 1
            r4.mLeftViewIndex = r1
            android.view.View r1 = r4.getChildAt(r0)
            goto L5
        L2a:
            int r0 = r4.getChildCount()
            int r0 = r0 + (-1)
            android.view.View r0 = r4.getChildAt(r0)
        L34:
            if (r0 == 0) goto L5a
            int r1 = r0.getLeft()
            int r1 = r1 + r5
            int r2 = r4.getWidth()
            if (r1 < r2) goto L5a
            java.util.Queue<android.view.View> r1 = r4.mRemovedViewQueue
            r1.offer(r0)
            r4.removeViewInLayout(r0)
            int r0 = r4.mRightViewIndex
            int r0 = r0 + (-1)
            r4.mRightViewIndex = r0
            int r0 = r4.getChildCount()
            int r0 = r0 + (-1)
            android.view.View r0 = r4.getChildAt(r0)
            goto L34
        L5a:
            return
    }

    private synchronized void reset() {
            r1 = this;
            monitor-enter(r1)
            r1.initView()     // Catch: java.lang.Throwable -> Lc
            r1.removeAllViewsInLayout()     // Catch: java.lang.Throwable -> Lc
            r1.requestLayout()     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r1)
            return
        Lc:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public void autoScroll() {
            r6 = this;
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r6.timer = r0
            com.bianfeng.customwidgetlib.HorizontalListView$TimeTaskScroll r1 = new com.bianfeng.customwidgetlib.HorizontalListView$TimeTaskScroll
            android.widget.Scroller r2 = r6.mScroller
            int r2 = r2.getCurrX()
            r1.<init>(r6, r2)
            r2 = 500(0x1f4, double:2.47E-321)
            r4 = 3000(0xbb8, double:1.482E-320)
            r0.schedule(r1, r2, r4)
            return
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r5) {
            r4 = this;
            boolean r0 = super.dispatchTouchEvent(r5)
            android.view.GestureDetector r1 = r4.mGesture
            boolean r1 = r1.onTouchEvent(r5)
            r0 = r0 | r1
            android.view.ViewParent r1 = r4.getParent()
            r2 = 1
            r1.requestDisallowInterceptTouchEvent(r2)
            int r1 = r5.getAction()
            if (r1 == 0) goto L4d
            if (r1 == r2) goto L49
            r2 = 2
            if (r1 == r2) goto L1f
            goto L60
        L1f:
            float r1 = r5.getX()
            int r1 = (int) r1
            float r2 = r5.getY()
            int r2 = (int) r2
            float r1 = (float) r1
            float r3 = r4.startX
            float r1 = r1 - r3
            int r1 = (int) r1
            float r2 = (float) r2
            float r3 = r4.startY
            float r2 = r2 - r3
            int r2 = (int) r2
            int r1 = java.lang.Math.abs(r1)
            int r1 = r1 + 50
            int r2 = java.lang.Math.abs(r2)
            if (r1 <= r2) goto L40
            goto L60
        L40:
            android.view.ViewParent r1 = r4.getParent()
            r2 = 0
            r1.requestDisallowInterceptTouchEvent(r2)
            goto L60
        L49:
            r4.isScrolling()
            goto L60
        L4d:
            float r1 = r5.getX()
            int r1 = (int) r1
            float r1 = (float) r1
            r4.startX = r1
            float r1 = r5.getY()
            int r1 = (int) r1
            float r1 = (float) r1
            r4.startY = r1
            r4.stopScroll()
        L60:
            boolean r5 = super.dispatchTouchEvent(r5)
            r5 = r5 | r0
            return r5
    }

    @Override
    public android.widget.Adapter getAdapter() {
            r1 = this;
            android.widget.ListAdapter r0 = r1.getAdapter()
            return r0
    }

    @Override
    public android.widget.ListAdapter getAdapter() {
            r1 = this;
            android.widget.ListAdapter r0 = r1.mAdapter
            return r0
    }

    @Override
    public android.view.View getSelectedView() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected boolean onDown(android.view.MotionEvent r2) {
            r1 = this;
            android.widget.Scroller r2 = r1.mScroller
            r0 = 1
            r2.forceFinished(r0)
            return r0
    }

    protected boolean onFling(android.view.MotionEvent r10, android.view.MotionEvent r11, float r12, float r13) {
            r9 = this;
            monitor-enter(r9)
            android.widget.Scroller r0 = r9.mScroller     // Catch: java.lang.Throwable -> L17
            int r1 = r9.mNextX     // Catch: java.lang.Throwable -> L17
            r2 = 0
            float r10 = -r12
            int r3 = (int) r10     // Catch: java.lang.Throwable -> L17
            r4 = 0
            r5 = 0
            int r6 = r9.mMaxX     // Catch: java.lang.Throwable -> L17
            r7 = 0
            r8 = 0
            r0.fling(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L17
            r9.requestLayout()
            r10 = 1
            return r10
        L17:
            r10 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L17
            throw r10
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r7) {
            r6 = this;
            int r0 = r7.getAction()
            if (r0 == 0) goto L37
            r1 = 2
            if (r0 == r1) goto La
            goto L43
        La:
            float r0 = r7.getX()
            float r1 = r7.getY()
            float r2 = r6.startX
            float r0 = r0 - r2
            float r2 = r6.startY
            float r1 = r1 - r2
            float r2 = java.lang.Math.abs(r0)
            r3 = 1092616192(0x41200000, float:10.0)
            float r2 = r2 - r3
            float r4 = java.lang.Math.abs(r1)
            r5 = 1
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L29
            return r5
        L29:
            float r0 = java.lang.Math.abs(r0)
            float r1 = java.lang.Math.abs(r1)
            float r1 = r1 - r3
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto L43
            return r5
        L37:
            float r0 = r7.getX()
            r6.startX = r0
            float r0 = r7.getY()
            r6.startY = r0
        L43:
            boolean r7 = super.onInterceptTouchEvent(r7)
            return r7
    }

    @Override
    protected synchronized void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            monitor-enter(r0)
            super.onLayout(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L6a
            android.widget.ListAdapter r1 = r0.mAdapter     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto La
            monitor-exit(r0)
            return
        La:
            boolean r1 = r0.mDataChanged     // Catch: java.lang.Throwable -> L6a
            r2 = 0
            if (r1 == 0) goto L1b
            int r1 = r0.mCurrentX     // Catch: java.lang.Throwable -> L6a
            r0.initView()     // Catch: java.lang.Throwable -> L6a
            r0.removeAllViewsInLayout()     // Catch: java.lang.Throwable -> L6a
            r0.mNextX = r1     // Catch: java.lang.Throwable -> L6a
            r0.mDataChanged = r2     // Catch: java.lang.Throwable -> L6a
        L1b:
            android.widget.Scroller r1 = r0.mScroller     // Catch: java.lang.Throwable -> L6a
            boolean r1 = r1.computeScrollOffset()     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L2b
            android.widget.Scroller r1 = r0.mScroller     // Catch: java.lang.Throwable -> L6a
            int r1 = r1.getCurrX()     // Catch: java.lang.Throwable -> L6a
            r0.mNextX = r1     // Catch: java.lang.Throwable -> L6a
        L2b:
            int r1 = r0.mNextX     // Catch: java.lang.Throwable -> L6a
            r3 = 1
            if (r1 > 0) goto L37
            r0.mNextX = r2     // Catch: java.lang.Throwable -> L6a
            android.widget.Scroller r1 = r0.mScroller     // Catch: java.lang.Throwable -> L6a
            r1.forceFinished(r3)     // Catch: java.lang.Throwable -> L6a
        L37:
            int r1 = r0.mNextX     // Catch: java.lang.Throwable -> L6a
            int r2 = r0.mMaxX     // Catch: java.lang.Throwable -> L6a
            if (r1 < r2) goto L46
            int r1 = r0.mMaxX     // Catch: java.lang.Throwable -> L6a
            r0.mNextX = r1     // Catch: java.lang.Throwable -> L6a
            android.widget.Scroller r1 = r0.mScroller     // Catch: java.lang.Throwable -> L6a
            r1.forceFinished(r3)     // Catch: java.lang.Throwable -> L6a
        L46:
            int r1 = r0.mCurrentX     // Catch: java.lang.Throwable -> L6a
            int r2 = r0.mNextX     // Catch: java.lang.Throwable -> L6a
            int r1 = r1 - r2
            r0.removeNonVisibleItems(r1)     // Catch: java.lang.Throwable -> L6a
            r0.fillList(r1)     // Catch: java.lang.Throwable -> L6a
            r0.positionItems(r1)     // Catch: java.lang.Throwable -> L6a
            int r1 = r0.mNextX     // Catch: java.lang.Throwable -> L6a
            r0.mCurrentX = r1     // Catch: java.lang.Throwable -> L6a
            android.widget.Scroller r1 = r0.mScroller     // Catch: java.lang.Throwable -> L6a
            boolean r1 = r1.isFinished()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L68
            com.bianfeng.customwidgetlib.HorizontalListView$2 r1 = new com.bianfeng.customwidgetlib.HorizontalListView$2     // Catch: java.lang.Throwable -> L6a
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L6a
            r0.post(r1)     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r0)
            return
        L6a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public void onWindowFocusChanged(boolean r1) {
            r0 = this;
            super.onWindowFocusChanged(r1)
            r0.postInvalidate()
            return
    }

    public synchronized void scrollTo(int r4) {
            r3 = this;
            monitor-enter(r3)
            android.widget.Scroller r0 = r3.mScroller     // Catch: java.lang.Throwable -> L11
            int r1 = r3.mNextX     // Catch: java.lang.Throwable -> L11
            int r2 = r3.mNextX     // Catch: java.lang.Throwable -> L11
            int r4 = r4 - r2
            r2 = 0
            r0.startScroll(r1, r2, r4, r2)     // Catch: java.lang.Throwable -> L11
            r3.requestLayout()     // Catch: java.lang.Throwable -> L11
            monitor-exit(r3)
            return
        L11:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public void setAdapter(android.widget.Adapter r1) {
            r0 = this;
            android.widget.ListAdapter r1 = (android.widget.ListAdapter) r1
            r0.setAdapter(r1)
            return
    }

    public void setAdapter(android.widget.ListAdapter r3) {
            r2 = this;
            android.widget.ListAdapter r0 = r2.mAdapter
            if (r0 == 0) goto L9
            android.database.DataSetObserver r1 = r2.mDataObserver
            r0.unregisterDataSetObserver(r1)
        L9:
            r2.mAdapter = r3
            android.database.DataSetObserver r0 = r2.mDataObserver
            r3.registerDataSetObserver(r0)
            r2.reset()
            return
    }

    @Override
    public void setOnItemClickListener(android.widget.AdapterView.OnItemClickListener r1) {
            r0 = this;
            r0.mOnItemClicked = r1
            return
    }

    @Override
    public void setOnItemLongClickListener(android.widget.AdapterView.OnItemLongClickListener r1) {
            r0 = this;
            r0.mOnItemLongClicked = r1
            return
    }

    @Override
    public void setOnItemSelectedListener(android.widget.AdapterView.OnItemSelectedListener r1) {
            r0 = this;
            r0.mOnItemSelected = r1
            return
    }

    @Override
    public void setSelection(int r1) {
            r0 = this;
            return
    }

    public void setWidth(int r1) {
            r0 = this;
            r0.width = r1
            return
    }

    public void stopScroll() {
            r1 = this;
            java.util.Timer r0 = r1.timer
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r1.timer = r0
        La:
            return
    }
}
