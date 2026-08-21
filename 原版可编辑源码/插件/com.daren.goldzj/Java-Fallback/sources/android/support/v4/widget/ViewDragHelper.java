package android.support.v4.widget;

import android.content.Context;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.Px;
import android.support.v4.view.ViewCompat;
import android.util.Log;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.OverScroller;
import java.util.Arrays;

public class ViewDragHelper {
    private static final int BASE_SETTLE_DURATION = 256;
    public static final int DIRECTION_ALL = 3;
    public static final int DIRECTION_HORIZONTAL = 1;
    public static final int DIRECTION_VERTICAL = 2;
    public static final int EDGE_ALL = 15;
    public static final int EDGE_BOTTOM = 8;
    public static final int EDGE_LEFT = 1;
    public static final int EDGE_RIGHT = 2;
    private static final int EDGE_SIZE = 20;
    public static final int EDGE_TOP = 4;
    public static final int INVALID_POINTER = -1;
    private static final int MAX_SETTLE_DURATION = 600;
    public static final int STATE_DRAGGING = 1;
    public static final int STATE_IDLE = 0;
    public static final int STATE_SETTLING = 2;
    private static final String TAG = "ViewDragHelper";
    private static final Interpolator sInterpolator = null;
    private int mActivePointerId;
    private final Callback mCallback;
    private View mCapturedView;
    private int mDragState;
    private int[] mEdgeDragsInProgress;
    private int[] mEdgeDragsLocked;
    private int mEdgeSize;
    private int[] mInitialEdgesTouched;
    private float[] mInitialMotionX;
    private float[] mInitialMotionY;
    private float[] mLastMotionX;
    private float[] mLastMotionY;
    private float mMaxVelocity;
    private float mMinVelocity;
    private final ViewGroup mParentView;
    private int mPointersDown;
    private boolean mReleaseInProgress;
    private OverScroller mScroller;
    private final Runnable mSetIdleRunnable;
    private int mTouchSlop;
    private int mTrackingEdges;
    private VelocityTracker mVelocityTracker;

    public static abstract class Callback {
        public int clampViewPositionHorizontal(@NonNull View r1, int r2, int r3) {
            return 0;
        }

        public int clampViewPositionVertical(@NonNull View r1, int r2, int r3) {
            return 0;
        }

        public int getOrderedChildIndex(int r1) {
            return r1;
        }

        public int getViewHorizontalDragRange(@NonNull View r1) {
            return 0;
        }

        public int getViewVerticalDragRange(@NonNull View r1) {
            return 0;
        }

        public void onEdgeDragStarted(int r1, int r2) {
        }

        public boolean onEdgeLock(int r1) {
            return false;
        }

        public void onEdgeTouched(int r1, int r2) {
        }

        public void onViewCaptured(@NonNull View r1, int r2) {
        }

        public void onViewDragStateChanged(int r1) {
        }

        public void onViewPositionChanged(@NonNull View r1, int r2, int r3, @Px int r4, @Px int r5) {
        }

        public void onViewReleased(@NonNull View r1, float r2, float r3) {
        }

        public abstract boolean tryCaptureView(@NonNull View r1, int r2);

        public Callback() {
        }
    }

    static {
        sInterpolator = new 1();
    }

    public static ViewDragHelper create(@NonNull ViewGroup r2, @NonNull Callback r3) {
        return new ViewDragHelper(r2.getContext(), r2, r3);
    }

    public static ViewDragHelper create(@NonNull ViewGroup r1, float r2, @NonNull Callback r3) {
        ViewDragHelper r12 = create(r1, r3);
        r12.mTouchSlop = (int) (r12.mTouchSlop * (1.0f / r2));
        return r12;
    }

    private ViewDragHelper(@NonNull Context r2, @NonNull ViewGroup r3, @NonNull Callback r4) {
        this.mActivePointerId = -1;
        this.mSetIdleRunnable = new 2(this);
        if (r3 == null) goto L10;
        if (r4 == null) goto L8;
        this.mParentView = r3;
        this.mCallback = r4;
        ViewConfiguration r32 = ViewConfiguration.get(r2);
        this.mEdgeSize = (int) ((r2.getResources().getDisplayMetrics().density * 20.0f) + 0.5f);
        this.mTouchSlop = r32.getScaledTouchSlop();
        this.mMaxVelocity = r32.getScaledMaximumFlingVelocity();
        this.mMinVelocity = r32.getScaledMinimumFlingVelocity();
        this.mScroller = new OverScroller(r2, sInterpolator);
        return;
    L8:
        throw new IllegalArgumentException("Callback may not be null");
    L10:
        throw new IllegalArgumentException("Parent view may not be null");
    }

    public void setMinVelocity(float r1) {
        this.mMinVelocity = r1;
    }

    public float getMinVelocity() {
        return this.mMinVelocity;
    }

    public int getViewDragState() {
        return this.mDragState;
    }

    public void setEdgeTrackingEnabled(int r1) {
        this.mTrackingEdges = r1;
    }

    @Px
    public int getEdgeSize() {
        return this.mEdgeSize;
    }

    public void captureChildView(@NonNull View r3, int r4) {
        if (r3.getParent() != this.mParentView) goto L7;
        this.mCapturedView = r3;
        this.mActivePointerId = r4;
        this.mCallback.onViewCaptured(r3, r4);
        setDragState(1);
        return;
    L7:
        throw new IllegalArgumentException("captureChildView: parameter must be a descendant of the ViewDragHelper's tracked parent view (" + this.mParentView + ")");
    }

    @Nullable
    public View getCapturedView() {
        return this.mCapturedView;
    }

    public int getActivePointerId() {
        return this.mActivePointerId;
    }

    @Px
    public int getTouchSlop() {
        return this.mTouchSlop;
    }

    public void cancel() {
        this.mActivePointerId = -1;
        clearMotionHistory();
        VelocityTracker r0 = this.mVelocityTracker;
        if (r0 == null) goto L6;
        r0.recycle();
        this.mVelocityTracker = null;
        return;
    }

    public void abort() {
        cancel();
        if (this.mDragState != 2) goto L5;
        int r0 = this.mScroller.getCurrX();
        int r1 = this.mScroller.getCurrY();
        this.mScroller.abortAnimation();
        int r5 = this.mScroller.getCurrX();
        int r6 = this.mScroller.getCurrY();
        this.mCallback.onViewPositionChanged(this.mCapturedView, r5, r6, r5 - r0, r6 - r1);
    L5:
        setDragState(0);
    }

    public boolean smoothSlideViewTo(@NonNull View r1, int r2, int r3) {
        this.mCapturedView = r1;
        this.mActivePointerId = -1;
        boolean r12 = forceSettleCapturedViewAt(r2, r3, 0, 0);
        if (r12 == false) goto L5;
    L9:
        return r12;
    L5:
        if (this.mDragState != 0) goto L9;
        if (this.mCapturedView == null) goto L9;
        this.mCapturedView = null;
        goto L9
    }

    public boolean settleCapturedViewAt(int r4, int r5) {
        if (this.mReleaseInProgress == false) goto L7;
        return forceSettleCapturedViewAt(r4, r5, (int) this.mVelocityTracker.getXVelocity(this.mActivePointerId), (int) this.mVelocityTracker.getYVelocity(this.mActivePointerId));
    L7:
        throw new IllegalStateException("Cannot settleCapturedViewAt outside of a call to Callback#onViewReleased");
    }

    private boolean forceSettleCapturedViewAt(int r11, int r12, int r13, int r14) {
        int r2 = this.mCapturedView.getLeft();
        int r3 = this.mCapturedView.getTop();
        int r112 = r11 - r2;
        int r122 = r12 - r3;
        if (r112 != 0) goto L7;
        if (r122 != 0) goto L7;
        this.mScroller.abortAnimation();
        setDragState(0);
        return false;
    L7:
        int r6 = computeSettleDuration(this.mCapturedView, r112, r122, r13, r14);
        this.mScroller.startScroll(r2, r3, r112, r122, r6);
        setDragState(2);
        return true;
    }

    private int computeSettleDuration(View r7, int r8, int r9, int r10, int r11) {
        int r102 = clampMag(r10, (int) this.mMinVelocity, (int) this.mMaxVelocity);
        int r112 = clampMag(r11, (int) this.mMinVelocity, (int) this.mMaxVelocity);
        int r0 = Math.abs(r8);
        int r1 = Math.abs(r9);
        int r2 = Math.abs(r102);
        int r3 = Math.abs(r112);
        int r4 = r2 + r3;
        int r5 = r0 + r1;
        if (r102 == 0) goto L5;
        float r02 = r2;
        float r22 = r4;
    L6:
        float r03 = r02 / r22;
        if (r112 == 0) goto L9;
        float r12 = r3;
        float r23 = r4;
    L10:
        float r13 = r12 / r23;
        return (int) ((computeAxisDuration(r8, r102, this.mCallback.getViewHorizontalDragRange(r7)) * r03) + (computeAxisDuration(r9, r112, this.mCallback.getViewVerticalDragRange(r7)) * r13));
    L9:
        r12 = r1;
        r23 = r5;
        goto L10
    L5:
        r02 = r0;
        r22 = r5;
        goto L6
    }

    private int computeAxisDuration(int r4, int r5, int r6) {
        if (r4 != 0) goto L5;
        return 0;
    L5:
        int r0 = this.mParentView.getWidth();
        float r1 = r0 / 2;
        float r12 = r1 + (distanceInfluenceForSnapDuration(Math.min(1.0f, Math.abs(r4) / r0)) * r1);
        int r52 = Math.abs(r5);
        if (r52 <= 0) goto L8;
        int r42 = Math.round(Math.abs(r12 / r52) * 1000.0f) * 4;
    L10:
        return Math.min(r42, 600);
    L8:
        r42 = (int) (((Math.abs(r4) / r6) + 1.0f) * 256.0f);
        goto L10
    }

    private int clampMag(int r2, int r3, int r4) {
        int r0 = Math.abs(r2);
        if (r0 >= r3) goto L6;
        return 0;
    L6:
        if (r0 <= r4) goto L11;
        if (r2 <= 0) goto L10;
        return r4;
    L10:
        return -r4;
    L11:
        return r2;
    }

    private float clampMag(float r3, float r4, float r5) {
        float r0 = Math.abs(r3);
        if (r0 >= r4) goto L6;
        return 0.0f;
    L6:
        if (r0 > r5) goto L8;
        return r3;
    L8:
        if (r3 <= 0.0f) goto L11;
        return r5;
    L11:
        return -r5;
    }

    private float distanceInfluenceForSnapDuration(float r3) {
        return (float) Math.sin((r3 - 0.5f) * 0.47123894f);
    }

    public void flingCapturedView(int r11, int r12, int r13, int r14) {
        if (this.mReleaseInProgress == false) goto L7;
        this.mScroller.fling(this.mCapturedView.getLeft(), this.mCapturedView.getTop(), (int) this.mVelocityTracker.getXVelocity(this.mActivePointerId), (int) this.mVelocityTracker.getYVelocity(this.mActivePointerId), r11, r13, r12, r14);
        setDragState(2);
        return;
    L7:
        throw new IllegalStateException("Cannot flingCapturedView outside of a call to Callback#onViewReleased");
    }

    public boolean continueSettling(boolean r12) {
        if (this.mDragState != 2) goto L23;
        boolean r0 = this.mScroller.computeScrollOffset();
        int r3 = this.mScroller.getCurrX();
        int r10 = this.mScroller.getCurrY();
        int r8 = r3 - this.mCapturedView.getLeft();
        int r9 = r10 - this.mCapturedView.getTop();
        if (r8 == 0) goto L7;
        ViewCompat.offsetLeftAndRight(this.mCapturedView, r8);
    L7:
        if (r9 == 0) goto L9;
        ViewCompat.offsetTopAndBottom(this.mCapturedView, r9);
    L9:
        if (r8 != 0) goto L11;
        if (r9 != 0) goto L11;
    L12:
        if (r0 == true) goto L14;
    L18:
        if (r0 == true) goto L23;
        if (r12 == false) goto L21;
        this.mParentView.post(this.mSetIdleRunnable);
        goto L23
    L21:
        setDragState(0);
        goto L23
    L14:
        if (r3 != this.mScroller.getFinalX()) goto L18;
        if (r10 != this.mScroller.getFinalY()) goto L18;
        this.mScroller.abortAnimation();
        r0 = false;
    L11:
        this.mCallback.onViewPositionChanged(this.mCapturedView, r3, r10, r8, r9);
    L23:
        if (this.mDragState != 2) goto L26;
        return true;
    L26:
        return false;
    }

    private void dispatchViewReleased(float r4, float r5) {
        this.mReleaseInProgress = true;
        this.mCallback.onViewReleased(this.mCapturedView, r4, r5);
        this.mReleaseInProgress = false;
        if (this.mDragState != 1) goto L6;
        setDragState(0);
        return;
    }

    private void clearMotionHistory() {
        float[] r0 = this.mInitialMotionX;
        if (r0 != null) goto L5;
        return;
    L5:
        Arrays.fill(r0, 0.0f);
        Arrays.fill(this.mInitialMotionY, 0.0f);
        Arrays.fill(this.mLastMotionX, 0.0f);
        Arrays.fill(this.mLastMotionY, 0.0f);
        Arrays.fill(this.mInitialEdgesTouched, 0);
        Arrays.fill(this.mEdgeDragsInProgress, 0);
        Arrays.fill(this.mEdgeDragsLocked, 0);
        this.mPointersDown = 0;
    }

    private void clearMotionHistory(int r3) {
        if (this.mInitialMotionX != null) goto L5;
        return;
    L5:
        if (isPointerDown(r3) == false) goto L10;
        this.mInitialMotionX[r3] = 0.0f;
        this.mInitialMotionY[r3] = 0.0f;
        this.mLastMotionX[r3] = 0.0f;
        this.mLastMotionY[r3] = 0.0f;
        this.mInitialEdgesTouched[r3] = 0;
        this.mEdgeDragsInProgress[r3] = 0;
        this.mEdgeDragsLocked[r3] = 0;
        int r0 = this.mPointersDown;
        this.mPointersDown = (~(1 << r3)) & r0;
        return;
    }

    private void ensureMotionHistorySizeForId(int r10) {
        float[] r0 = this.mInitialMotionX;
        if (r0 != null) goto L5;
    L6:
        int r102 = r10 + 1;
        float[] r02 = new float[r102];
        float[] r1 = new float[r102];
        float[] r2 = new float[r102];
        float[] r3 = new float[r102];
        int[] r4 = new int[r102];
        int[] r5 = new int[r102];
        int[] r103 = new int[r102];
        float[] r6 = this.mInitialMotionX;
        if (r6 == null) goto L9;
        System.arraycopy(r6, 0, r02, 0, r6.length);
        float[] r62 = this.mInitialMotionY;
        System.arraycopy(r62, 0, r1, 0, r62.length);
        float[] r63 = this.mLastMotionX;
        System.arraycopy(r63, 0, r2, 0, r63.length);
        float[] r64 = this.mLastMotionY;
        System.arraycopy(r64, 0, r3, 0, r64.length);
        int[] r65 = this.mInitialEdgesTouched;
        System.arraycopy(r65, 0, r4, 0, r65.length);
        int[] r66 = this.mEdgeDragsInProgress;
        System.arraycopy(r66, 0, r5, 0, r66.length);
        int[] r67 = this.mEdgeDragsLocked;
        System.arraycopy(r67, 0, r103, 0, r67.length);
    L9:
        this.mInitialMotionX = r02;
        this.mInitialMotionY = r1;
        this.mLastMotionX = r2;
        this.mLastMotionY = r3;
        this.mInitialEdgesTouched = r4;
        this.mEdgeDragsInProgress = r5;
        this.mEdgeDragsLocked = r103;
        return;
    L5:
        if (r0.length <= r10) goto L6;
    }

    private void saveInitialMotion(float r3, float r4, int r5) {
        ensureMotionHistorySizeForId(r5);
        float[] r0 = this.mInitialMotionX;
        this.mLastMotionX[r5] = r3;
        r0[r5] = r3;
        float[] r02 = this.mInitialMotionY;
        this.mLastMotionY[r5] = r4;
        r02[r5] = r4;
        this.mInitialEdgesTouched[r5] = getEdgesTouched((int) r3, (int) r4);
        this.mPointersDown |= 1 << r5;
    }

    private void saveLastMotion(MotionEvent r7) {
        int r0 = r7.getPointerCount();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L9;
        int r2 = r7.getPointerId(r1);
        if (isValidPointerForActionMove(r2) == false) goto L8;
        float r3 = r7.getX(r1);
        float r4 = r7.getY(r1);
        this.mLastMotionX[r2] = r3;
        this.mLastMotionY[r2] = r4;
    L8:
        r1 = r1 + 1;
        goto L3
    }

    public boolean isPointerDown(int r3) {
        int r32 = 1 << r3;
        if ((r32 & this.mPointersDown) != 0) goto L7;
        return false;
    L7:
        return true;
    }

    void setDragState(int r3) {
        this.mParentView.removeCallbacks(this.mSetIdleRunnable);
        if (this.mDragState == r3) goto L8;
        this.mDragState = r3;
        this.mCallback.onViewDragStateChanged(r3);
        if (this.mDragState != 0) goto L9;
        this.mCapturedView = null;
        return;
    L9:
        return;
    }

    boolean tryCaptureViewForDrag(View r3, int r4) {
        if (r3 == this.mCapturedView) goto L5;
    L7:
        if (r3 != null) goto L9;
        return false;
    L9:
        if (this.mCallback.tryCaptureView(r3, r4) == false) goto L14;
        this.mActivePointerId = r4;
        captureChildView(r3, r4);
        return true;
    L14:
        return false;
    L5:
        if (this.mActivePointerId != r4) goto L7;
        return true;
    }

    protected boolean canScroll(@NonNull View r14, boolean r15, int r16, int r17, int r18, int r19) {
        if ((r14 instanceof ViewGroup) == false) goto L18;
        ViewGroup r1 = (ViewGroup) r14;
        int r3 = r14.getScrollX();
        int r4 = r14.getScrollY();
        int r5 = r1.getChildCount() - 1;
    L5:
        if (r5 < 0) goto L18;
        View r7 = r1.getChildAt(r5);
        int r6 = r18 + r3;
        if (r6 < r7.getLeft()) goto L17;
        if (r6 >= r7.getRight()) goto L17;
        int r8 = r19 + r4;
        if (r8 < r7.getTop()) goto L17;
        if (r8 >= r7.getBottom()) goto L17;
        if (canScroll(r7, true, r16, r17, r6 - r7.getLeft(), r8 - r7.getTop()) == false) goto L17;
        return true;
    L17:
        r5 = r5 - 1;
    L18:
        if (r15 == true) goto L20;
    L24:
        return false;
    L20:
        if (r14.canScrollHorizontally(-r16) == false) goto L22;
        return true;
    L22:
        if (r14.canScrollVertically(-r17) == false) goto L24;
        return true;
    }

    public boolean shouldInterceptTouchEvent(@NonNull MotionEvent r17) {
        int r2 = r17.getActionMasked();
        int r3 = r17.getActionIndex();
        if (r2 != 0) goto L6;
        cancel();
    L6:
        if (this.mVelocityTracker != null) goto L8;
        this.mVelocityTracker = VelocityTracker.obtain();
    L8:
        this.mVelocityTracker.addMovement(r17);
        if (r2 == 0) goto L64;
        if (r2 == 1) goto L63;
        if (r2 == 2) goto L30;
        if (r2 == 3) goto L63;
        if (r2 != 5) goto L17;
        int r22 = r17.getPointerId(r3);
        float r7 = r17.getX(r3);
        float r1 = r17.getY(r3);
        saveInitialMotion(r7, r1, r22);
        int r32 = this.mDragState;
        if (r32 != 0) goto L25;
        int r12 = this.mInitialEdgesTouched[r22];
        int r33 = this.mTrackingEdges;
        if ((r12 & r33) != 0) goto L24;
    L18:
        boolean r5 = false;
    L73:
        if (this.mDragState != 1) goto L84;
        return true;
    L84:
        return r5;
    L24:
        this.mCallback.onEdgeTouched(r12 & r33, r22);
        goto L18
    L25:
        if (r32 != 2) goto L18;
        View r13 = findTopChildUnder((int) r7, (int) r1);
        if (r13 != this.mCapturedView) goto L18;
        tryCaptureViewForDrag(r13, r22);
        goto L18
    L17:
        if (r2 != 6) goto L18;
        clearMotionHistory(r17.getPointerId(r3));
        goto L18
    L30:
        if (this.mInitialMotionX == null) goto L18;
        if (this.mInitialMotionY == null) goto L18;
        int r23 = r17.getPointerCount();
        int r34 = 0;
    L35:
        if (r34 >= r23) goto L62;
        int r4 = r17.getPointerId(r34);
        if (isValidPointerForActionMove(r4) == false) goto L61;
        float r72 = r17.getX(r34);
        float r8 = r17.getY(r34);
        float r9 = r72 - this.mInitialMotionX[r4];
        float r10 = r8 - this.mInitialMotionY[r4];
        View r73 = findTopChildUnder((int) r72, (int) r8);
        if (r73 != null) goto L42;
    L44:
        boolean r82 = false;
    L45:
        if (r82 == false) goto L54;
        int r11 = r73.getLeft();
        int r122 = (int) r9;
        Callback r14 = this.mCallback;
        int r123 = r14.clampViewPositionHorizontal(r73, r11 + r122, r122);
        int r132 = r73.getTop();
        int r142 = (int) r10;
        Callback r52 = this.mCallback;
        int r53 = r52.clampViewPositionVertical(r73, r132 + r142, r142);
        int r143 = this.mCallback.getViewHorizontalDragRange(r73);
        int r15 = this.mCallback.getViewVerticalDragRange(r73);
        if (r143 == 0) goto L50;
        if (r143 <= 0) goto L54;
        if (r123 != r11) goto L54;
    L50:
        if (r15 == 0) goto L62;
        if (r15 <= 0) goto L54;
        if (r53 == r132) goto L62;
    L54:
        reportNewEdgeDrags(r9, r10, r4);
        if (this.mDragState == 1) goto L62;
        if (r82 == false) goto L61;
        if (tryCaptureViewForDrag(r73, r4) == false) goto L61;
    L42:
        if (checkTouchSlop(r73, r9, r10) == false) goto L44;
        r82 = true;
    L61:
        r34 = r34 + 1;
    L62:
        saveLastMotion(r17);
    L63:
        cancel();
        goto L18
    L64:
        float r24 = r17.getX();
        float r35 = r17.getY();
        r5 = false;
        int r16 = r17.getPointerId(0);
        saveInitialMotion(r24, r35, r16);
        View r25 = findTopChildUnder((int) r24, (int) r35);
        if (r25 == this.mCapturedView) goto L67;
    L69:
        int r26 = this.mInitialEdgesTouched[r16];
        int r36 = this.mTrackingEdges;
        if ((r26 & r36) == 0) goto L73;
        this.mCallback.onEdgeTouched(r26 & r36, r16);
        goto L73
    L67:
        if (this.mDragState != 2) goto L69;
        tryCaptureViewForDrag(r25, r16);
        goto L69
    }

    public void processTouchEvent(@NonNull MotionEvent r10) {
        int r0 = r10.getActionMasked();
        int r1 = r10.getActionIndex();
        if (r0 != 0) goto L6;
        cancel();
    L6:
        if (this.mVelocityTracker != null) goto L8;
        this.mVelocityTracker = VelocityTracker.obtain();
    L8:
        this.mVelocityTracker.addMovement(r10);
        int r2 = 0;
        if (r0 != 0) goto L11;
        float r02 = r10.getX();
        float r12 = r10.getY();
        int r102 = r10.getPointerId(0);
        View r22 = findTopChildUnder((int) r02, (int) r12);
        saveInitialMotion(r02, r12, r102);
        tryCaptureViewForDrag(r22, r102);
        int r03 = this.mInitialEdgesTouched[r102];
        int r13 = this.mTrackingEdges;
        if ((r03 & r13) == 0) goto L102;
        this.mCallback.onEdgeTouched(r03 & r13, r102);
        return;
    L102:
        return;
    L11:
        if (r0 == 1) goto L75;
        if (r0 == 2) goto L54;
        if (r0 == 3) goto L50;
        if (r0 != 5) goto L19;
        int r04 = r10.getPointerId(r1);
        float r23 = r10.getX(r1);
        float r103 = r10.getY(r1);
        saveInitialMotion(r23, r103, r04);
        if (this.mDragState != 0) goto L47;
        tryCaptureViewForDrag(findTopChildUnder((int) r23, (int) r103), r04);
        int r104 = this.mInitialEdgesTouched[r04];
        int r14 = this.mTrackingEdges;
        if ((r104 & r14) == 0) goto L94;
        this.mCallback.onEdgeTouched(r104 & r14, r04);
        return;
    L94:
        return;
    L47:
        if (isCapturedViewUnder((int) r23, (int) r103) == false) goto L96;
        tryCaptureViewForDrag(this.mCapturedView, r04);
        return;
    L96:
        return;
    L19:
        if (r0 != 6) goto L103;
        int r05 = r10.getPointerId(r1);
        if (this.mDragState == 1) goto L24;
    L40:
        clearMotionHistory(r05);
        return;
    L24:
        if (r05 != this.mActivePointerId) goto L40;
        int r15 = r10.getPointerCount();
    L27:
        if (r2 >= r15) goto L37;
        int r4 = r10.getPointerId(r2);
        if (r4 == this.mActivePointerId) goto L36;
        float r5 = r10.getX(r2);
        View r52 = findTopChildUnder((int) r5, (int) r10.getY(r2));
        View r6 = this.mCapturedView;
        if (r52 != r6) goto L36;
        if (tryCaptureViewForDrag(r6, r4) == false) goto L36;
        int r105 = this.mActivePointerId;
    L38:
        if (r105 != (-1)) goto L40;
        releaseViewForPointerUp();
    L36:
        r2 = r2 + 1;
        goto L27
    L37:
        r105 = -1;
        goto L38
    L103:
        return;
    L50:
        if (this.mDragState != 1) goto L52;
        dispatchViewReleased(0.0f, 0.0f);
    L52:
        cancel();
        return;
    L54:
        if (this.mDragState == 1) goto L56;
        int r06 = r10.getPointerCount();
    L60:
        if (r2 >= r06) goto L73;
        int r16 = r10.getPointerId(r2);
        if (isValidPointerForActionMove(r16) == false) goto L72;
        float r42 = r10.getX(r2);
        float r53 = r10.getY(r2);
        float r62 = r42 - this.mInitialMotionX[r16];
        float r7 = r53 - this.mInitialMotionY[r16];
        reportNewEdgeDrags(r62, r7, r16);
        if (this.mDragState == 1) goto L73;
        View r43 = findTopChildUnder((int) r42, (int) r53);
        if (checkTouchSlop(r43, r62, r7) == false) goto L72;
        if (tryCaptureViewForDrag(r43, r16) == true) goto L73;
    L72:
        r2 = r2 + 1;
    L73:
        saveLastMotion(r10);
        return;
    L56:
        if (isValidPointerForActionMove(this.mActivePointerId) == false) goto L104;
        int r07 = r10.findPointerIndex(this.mActivePointerId);
        float r17 = r10.getX(r07);
        float r08 = r10.getY(r07);
        float[] r24 = this.mLastMotionX;
        int r3 = this.mActivePointerId;
        int r18 = (int) (r17 - r24[r3]);
        int r09 = (int) (r08 - this.mLastMotionY[r3]);
        dragTo(this.mCapturedView.getLeft() + r18, this.mCapturedView.getTop() + r09, r18, r09);
        saveLastMotion(r10);
        return;
    L104:
        return;
    L75:
        if (this.mDragState != 1) goto L77;
        releaseViewForPointerUp();
    L77:
        cancel();
    }

    private void reportNewEdgeDrags(float r3, float r4, int r5) {
        int r0 = 1;
        if (checkNewEdgeDrag(r3, r4, r5, 1) == true) goto L7;
        r0 = 0;
    L7:
        if (checkNewEdgeDrag(r4, r3, r5, 4) == false) goto L10;
        r0 = r0 | 4;
    L10:
        if (checkNewEdgeDrag(r3, r4, r5, 2) == false) goto L13;
        r0 = r0 | 2;
    L13:
        if (checkNewEdgeDrag(r4, r3, r5, 8) == false) goto L15;
        r0 = r0 | 8;
    L15:
        if (r0 == 0) goto L18;
        int[] r32 = this.mEdgeDragsInProgress;
        r32[r5] = r32[r5] | r0;
        this.mCallback.onEdgeDragStarted(r0, r5);
        return;
    }

    private boolean checkNewEdgeDrag(float r4, float r5, int r6, int r7) {
        float r42 = Math.abs(r4);
        float r52 = Math.abs(r5);
        if ((this.mInitialEdgesTouched[r6] & r7) == r7) goto L5;
        return false;
    L5:
        if ((this.mTrackingEdges & r7) != 0) goto L7;
        return false;
    L7:
        if ((this.mEdgeDragsLocked[r6] & r7) != r7) goto L9;
        return false;
    L9:
        if ((this.mEdgeDragsInProgress[r6] & r7) == r7) goto L30;
        int r0 = this.mTouchSlop;
        if (r42 > r0) goto L16;
        if (r52 > r0) goto L16;
        return false;
    L16:
        if (r42 >= (r52 * 0.5f)) goto L22;
        if (this.mCallback.onEdgeLock(r7) == false) goto L22;
        int[] r43 = this.mEdgeDragsLocked;
        r43[r6] = r43[r6] | r7;
        return false;
    L22:
        if ((this.mEdgeDragsInProgress[r6] & r7) == 0) goto L24;
        return false;
    L24:
        if (r42 <= this.mTouchSlop) goto L32;
        return true;
    L32:
        return false;
    L30:
        return false;
    }

    private boolean checkTouchSlop(View r5, float r6, float r7) {
        if (r5 != null) goto L6;
        return false;
    L6:
        if (this.mCallback.getViewHorizontalDragRange(r5) <= 0) goto L8;
        boolean r1 = true;
    L10:
        if (this.mCallback.getViewVerticalDragRange(r5) <= 0) goto L12;
        boolean r52 = true;
    L13:
        if (r1 == false) goto L19;
        if (r52 == false) goto L19;
        float r62 = (r6 * r6) + (r7 * r7);
        int r53 = this.mTouchSlop;
        if (r62 <= (r53 * r53)) goto L29;
        return true;
    L29:
        return false;
    L19:
        if (r1 == true) goto L21;
        if (r52 == true) goto L26;
        return false;
    L26:
        if (Math.abs(r7) <= this.mTouchSlop) goto L32;
        return true;
    L32:
        return false;
    L21:
        if (Math.abs(r6) <= this.mTouchSlop) goto L30;
        return true;
    L30:
        return false;
    L12:
        r52 = false;
        goto L13
    L8:
        r1 = false;
        goto L10
    }

    public boolean checkTouchSlop(int r5) {
        int r0 = this.mInitialMotionX.length;
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L9;
        if (checkTouchSlop(r5, r2) == true) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        return true;
    L9:
        return false;
    }

    public boolean checkTouchSlop(int r7, int r8) {
        if (isPointerDown(r8) == true) goto L6;
        return false;
    L6:
        if ((r7 & 1) != 1) goto L8;
        boolean r0 = true;
    L10:
        if ((r7 & 2) != 2) goto L12;
        boolean r72 = true;
    L13:
        float r3 = this.mLastMotionX[r8] - this.mInitialMotionX[r8];
        float r4 = this.mLastMotionY[r8] - this.mInitialMotionY[r8];
        if (r0 == false) goto L20;
        if (r72 == false) goto L20;
        float r32 = (r3 * r3) + (r4 * r4);
        int r73 = this.mTouchSlop;
        if (r32 <= (r73 * r73)) goto L30;
        return true;
    L30:
        return false;
    L20:
        if (r0 == true) goto L22;
        if (r72 == true) goto L27;
        return false;
    L27:
        if (Math.abs(r4) <= this.mTouchSlop) goto L33;
        return true;
    L33:
        return false;
    L22:
        if (Math.abs(r3) <= this.mTouchSlop) goto L31;
        return true;
    L31:
        return false;
    L12:
        r72 = false;
        goto L13
    L8:
        r0 = false;
        goto L10
    }

    public boolean isEdgeTouched(int r5) {
        int r0 = this.mInitialEdgesTouched.length;
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L9;
        if (isEdgeTouched(r5, r2) == true) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        return true;
    L9:
        return false;
    }

    public boolean isEdgeTouched(int r2, int r3) {
        if (isPointerDown(r3) == true) goto L5;
    L7:
        return false;
    L5:
        if ((r2 & this.mInitialEdgesTouched[r3]) == 0) goto L7;
        return true;
    }

    private void releaseViewForPointerUp() {
        this.mVelocityTracker.computeCurrentVelocity(1000, this.mMaxVelocity);
        dispatchViewReleased(clampMag(this.mVelocityTracker.getXVelocity(this.mActivePointerId), this.mMinVelocity, this.mMaxVelocity), clampMag(this.mVelocityTracker.getYVelocity(this.mActivePointerId), this.mMinVelocity, this.mMaxVelocity));
    }

    private void dragTo(int r11, int r12, int r13, int r14) {
        int r0 = this.mCapturedView.getLeft();
        int r1 = this.mCapturedView.getTop();
        if (r13 == 0) goto L5;
        r11 = this.mCallback.clampViewPositionHorizontal(this.mCapturedView, r11, r13);
        ViewCompat.offsetLeftAndRight(this.mCapturedView, r11 - r0);
    L5:
        int r6 = r11;
        if (r14 == 0) goto L8;
        r12 = this.mCallback.clampViewPositionVertical(this.mCapturedView, r12, r14);
        ViewCompat.offsetTopAndBottom(this.mCapturedView, r12 - r1);
    L8:
        int r7 = r12;
        if (r13 != 0) goto L11;
        if (r14 != 0) goto L11;
        return;
    L11:
        Callback r4 = this.mCallback;
        View r5 = this.mCapturedView;
        r4.onViewPositionChanged(r5, r6, r7, r6 - r0, r7 - r1);
    }

    public boolean isCapturedViewUnder(int r2, int r3) {
        return isViewUnder(this.mCapturedView, r2, r3);
    }

    public boolean isViewUnder(@Nullable View r3, int r4, int r5) {
        if (r3 != null) goto L6;
        return false;
    L6:
        if (r4 >= r3.getLeft()) goto L8;
        return false;
    L8:
        if (r4 < r3.getRight()) goto L10;
        return false;
    L10:
        if (r5 >= r3.getTop()) goto L12;
        return false;
    L12:
        if (r5 >= r3.getBottom()) goto L18;
        return true;
    L18:
        return false;
    }

    @Nullable
    public View findTopChildUnder(int r4, int r5) {
        int r0 = this.mParentView.getChildCount() - 1;
    L3:
        if (r0 < 0) goto L14;
        View r1 = this.mParentView.getChildAt(this.mCallback.getOrderedChildIndex(r0));
        if (r4 < r1.getLeft()) goto L13;
        if (r4 >= r1.getRight()) goto L13;
        if (r5 < r1.getTop()) goto L13;
        if (r5 >= r1.getBottom()) goto L13;
        return r1;
    L13:
        r0 = r0 - 1;
        goto L3
    L14:
        return null;
    }

    private int getEdgesTouched(int r4, int r5) {
        if (r4 >= (this.mParentView.getLeft() + this.mEdgeSize)) goto L5;
        int r0 = 1;
    L7:
        if (r5 >= (this.mParentView.getTop() + this.mEdgeSize)) goto L10;
        r0 = r0 | 4;
    L10:
        if (r4 <= (this.mParentView.getRight() - this.mEdgeSize)) goto L13;
        r0 = r0 | 2;
    L13:
        if (r5 > (this.mParentView.getBottom() - this.mEdgeSize)) goto L15;
        return r0;
    L15:
        return r0 | 8;
    L5:
        r0 = 0;
        goto L7
    }

    private boolean isValidPointerForActionMove(int r3) {
        if (isPointerDown(r3) == true) goto L6;
        Log.e(TAG, "Ignoring pointerId=" + r3 + " because ACTION_DOWN was not received for this pointer before ACTION_MOVE. It likely happened because  ViewDragHelper did not receive all the events in the event stream.");
        return false;
    L6:
        return true;
    }
}
