package android.support.v4.view;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.os.Message;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;

public final class GestureDetectorCompat {
    private final GestureDetectorCompatImpl mImpl;

    interface GestureDetectorCompatImpl {
        boolean isLongpressEnabled();

        boolean onTouchEvent(MotionEvent r1);

        void setIsLongpressEnabled(boolean r1);

        void setOnDoubleTapListener(GestureDetector.OnDoubleTapListener r1);
    }

    static class GestureDetectorCompatImplBase implements GestureDetectorCompatImpl {
        private static final int DOUBLE_TAP_TIMEOUT = 0;
        private static final int LONGPRESS_TIMEOUT = 0;
        private static final int LONG_PRESS = 2;
        private static final int SHOW_PRESS = 1;
        private static final int TAP = 3;
        private static final int TAP_TIMEOUT = 0;
        private boolean mAlwaysInBiggerTapRegion;
        private boolean mAlwaysInTapRegion;
        MotionEvent mCurrentDownEvent;
        boolean mDeferConfirmSingleTap;
        GestureDetector.OnDoubleTapListener mDoubleTapListener;
        private int mDoubleTapSlopSquare;
        private float mDownFocusX;
        private float mDownFocusY;
        private final Handler mHandler;
        private boolean mInLongPress;
        private boolean mIsDoubleTapping;
        private boolean mIsLongpressEnabled;
        private float mLastFocusX;
        private float mLastFocusY;
        final GestureDetector.OnGestureListener mListener;
        private int mMaximumFlingVelocity;
        private int mMinimumFlingVelocity;
        private MotionEvent mPreviousUpEvent;
        boolean mStillDown;
        private int mTouchSlopSquare;
        private VelocityTracker mVelocityTracker;

        private class GestureHandler extends Handler {
            final GestureDetectorCompatImplBase this$0;

            GestureHandler(GestureDetectorCompatImplBase r1) {
                this.this$0 = r1;
            }

            GestureHandler(GestureDetectorCompatImplBase r1, Handler r2) {
                this.this$0 = r1;
                super(r2.getLooper());
            }

            @Override
            public void handleMessage(Message r4) {
                int r0 = r4.what;
                if (r0 != 1) goto L5;
                this.this$0.mListener.onShowPress(this.this$0.mCurrentDownEvent);
                return;
            L5:
                if (r0 != 2) goto L7;
                this.this$0.dispatchLongPress();
                return;
            L7:
                if (r0 != 3) goto L15;
                if (this.this$0.mDoubleTapListener != null) goto L11;
                return;
            L11:
                if (this.this$0.mStillDown == true) goto L13;
                this.this$0.mDoubleTapListener.onSingleTapConfirmed(this.this$0.mCurrentDownEvent);
                return;
            L13:
                this.this$0.mDeferConfirmSingleTap = true;
                return;
            L15:
                throw new RuntimeException("Unknown message " + r4);
            }
        }

        static {
            LONGPRESS_TIMEOUT = ViewConfiguration.getLongPressTimeout();
            TAP_TIMEOUT = ViewConfiguration.getTapTimeout();
            DOUBLE_TAP_TIMEOUT = ViewConfiguration.getDoubleTapTimeout();
        }

        GestureDetectorCompatImplBase(Context r2, GestureDetector.OnGestureListener r3, Handler r4) {
            if (r4 == null) goto L5;
            this.mHandler = new GestureHandler(this, r4);
        L6:
            this.mListener = r3;
            if ((r3 instanceof GestureDetector.OnDoubleTapListener) == false) goto L9;
            setOnDoubleTapListener((GestureDetector.OnDoubleTapListener) r3);
        L9:
            init(r2);
            return;
        L5:
            this.mHandler = new GestureHandler(this);
            goto L6
        }

        private void init(Context r4) {
            if (r4 == null) goto L10;
            if (this.mListener == null) goto L8;
            this.mIsLongpressEnabled = true;
            ViewConfiguration r42 = ViewConfiguration.get(r4);
            int r0 = r42.getScaledTouchSlop();
            int r1 = r42.getScaledDoubleTapSlop();
            this.mMinimumFlingVelocity = r42.getScaledMinimumFlingVelocity();
            this.mMaximumFlingVelocity = r42.getScaledMaximumFlingVelocity();
            this.mTouchSlopSquare = r0 * r0;
            this.mDoubleTapSlopSquare = r1 * r1;
            return;
        L8:
            throw new IllegalArgumentException("OnGestureListener must not be null");
        L10:
            throw new IllegalArgumentException("Context must not be null");
        }

        @Override
        public void setOnDoubleTapListener(GestureDetector.OnDoubleTapListener r1) {
            this.mDoubleTapListener = r1;
        }

        @Override
        public void setIsLongpressEnabled(boolean r1) {
            this.mIsLongpressEnabled = r1;
        }

        @Override
        public boolean isLongpressEnabled() {
            return this.mIsLongpressEnabled;
        }

        @Override
        public boolean onTouchEvent(MotionEvent r13) {
            int r0 = r13.getAction();
            if (this.mVelocityTracker != null) goto L5;
            this.mVelocityTracker = VelocityTracker.obtain();
        L5:
            this.mVelocityTracker.addMovement(r13);
            int r02 = r0 & 255;
            if (r02 != 6) goto L8;
            boolean r4 = true;
        L9:
            if (r4 == false) goto L11;
            int r5 = r13.getActionIndex();
        L12:
            int r6 = r13.getPointerCount();
            int r8 = 0;
            float r9 = 0.0f;
            float r10 = 0.0f;
        L13:
            if (r8 >= r6) goto L18;
            if (r5 == r8) goto L17;
            r9 = r9 + r13.getX(r8);
            r10 = r10 + r13.getY(r8);
        L17:
            r8 = r8 + 1;
            goto L13
        L18:
            if (r4 == false) goto L20;
            int r42 = r6 - 1;
        L21:
            float r43 = r42;
            float r92 = r9 / r43;
            float r102 = r10 / r43;
            if (r02 == 0) goto L91;
            if (r02 == 1) goto L61;
            if (r02 == 2) goto L42;
            if (r02 != 3) goto L28;
            cancel();
            return false;
        L28:
            if (r02 == 5) goto L39;
            if (r02 != 6) goto L127;
            this.mLastFocusX = r92;
            this.mDownFocusX = r92;
            this.mLastFocusY = r102;
            this.mDownFocusY = r102;
            this.mVelocityTracker.computeCurrentVelocity(1000, this.mMaximumFlingVelocity);
            int r03 = r13.getActionIndex();
            int r1 = r13.getPointerId(r03);
            float r2 = this.mVelocityTracker.getXVelocity(r1);
            float r12 = this.mVelocityTracker.getYVelocity(r1);
            int r44 = 0;
        L32:
            if (r44 >= r6) goto L129;
            if (r44 == r03) goto L38;
            int r52 = r13.getPointerId(r44);
            if (((this.mVelocityTracker.getXVelocity(r52) * r2) + (this.mVelocityTracker.getYVelocity(r52) * r12)) >= 0.0f) goto L38;
            this.mVelocityTracker.clear();
            return false;
        L38:
            r44 = r44 + 1;
            goto L32
        L129:
            return false;
        L127:
            return false;
        L39:
            this.mLastFocusX = r92;
            this.mDownFocusX = r92;
            this.mLastFocusY = r102;
            this.mDownFocusY = r102;
            cancelTaps();
            return false;
        L42:
            if (this.mInLongPress == true) goto L128;
            float r04 = this.mLastFocusX - r92;
            float r14 = this.mLastFocusY - r102;
            if (this.mIsDoubleTapping == false) goto L48;
            return false | this.mDoubleTapListener.onDoubleTapEvent(r13);
        L48:
            if (this.mAlwaysInTapRegion == false) goto L57;
            int r62 = (int) (r92 - this.mDownFocusX);
            int r7 = (int) (r102 - this.mDownFocusY);
            int r63 = (r62 * r62) + (r7 * r7);
            if (r63 <= this.mTouchSlopSquare) goto L52;
            boolean r132 = this.mListener.onScroll(this.mCurrentDownEvent, r13, r04, r14);
            this.mLastFocusX = r92;
            this.mLastFocusY = r102;
            this.mAlwaysInTapRegion = false;
            this.mHandler.removeMessages(3);
            this.mHandler.removeMessages(1);
            this.mHandler.removeMessages(2);
        L54:
            if (r63 <= this.mTouchSlopSquare) goto L126;
            this.mAlwaysInBiggerTapRegion = false;
        L126:
            return r132;
        L52:
            r132 = false;
            goto L54
        L57:
            if (Math.abs(r04) < 1.0f) goto L59;
        L60:
            boolean r3 = this.mListener.onScroll(this.mCurrentDownEvent, r13, r04, r14);
            this.mLastFocusX = r92;
            this.mLastFocusY = r102;
            return r3;
        L59:
            if (Math.abs(r14) >= 1.0f) goto L60;
            return false;
        L128:
            return false;
        L61:
            this.mStillDown = false;
            MotionEvent r05 = MotionEvent.obtain(r13);
            if (this.mIsDoubleTapping == false) goto L65;
            r132 = this.mDoubleTapListener.onDoubleTapEvent(r13) | false;
        L82:
            MotionEvent r15 = this.mPreviousUpEvent;
            if (r15 == null) goto L85;
            r15.recycle();
        L85:
            this.mPreviousUpEvent = r05;
            VelocityTracker r06 = this.mVelocityTracker;
            if (r06 == null) goto L88;
            r06.recycle();
            this.mVelocityTracker = null;
        L88:
            this.mIsDoubleTapping = false;
            this.mDeferConfirmSingleTap = false;
            this.mHandler.removeMessages(1);
            this.mHandler.removeMessages(2);
            goto L126
        L65:
            if (this.mInLongPress == false) goto L68;
            this.mHandler.removeMessages(3);
            this.mInLongPress = false;
        L80:
            r132 = false;
            goto L82
        L68:
            if (this.mAlwaysInTapRegion == false) goto L75;
            boolean r16 = this.mListener.onSingleTapUp(r13);
            if (this.mDeferConfirmSingleTap == false) goto L74;
            GestureDetector.OnDoubleTapListener r53 = this.mDoubleTapListener;
            if (r53 == null) goto L74;
            r53.onSingleTapConfirmed(r13);
        L74:
            r132 = r16;
            goto L82
        L75:
            VelocityTracker r17 = this.mVelocityTracker;
            int r54 = r13.getPointerId(0);
            r17.computeCurrentVelocity(1000, this.mMaximumFlingVelocity);
            float r64 = r17.getYVelocity(r54);
            float r18 = r17.getXVelocity(r54);
            if (Math.abs(r64) <= this.mMinimumFlingVelocity) goto L78;
        L81:
            r132 = this.mListener.onFling(this.mCurrentDownEvent, r13, r18, r64);
            goto L82
        L78:
            if (Math.abs(r18) <= this.mMinimumFlingVelocity) goto L80;
        L91:
            if (this.mDoubleTapListener == null) goto L104;
            boolean r07 = this.mHandler.hasMessages(3);
            if (r07 == false) goto L95;
            this.mHandler.removeMessages(3);
        L95:
            MotionEvent r19 = this.mCurrentDownEvent;
            if (r19 == null) goto L103;
            MotionEvent r65 = this.mPreviousUpEvent;
            if (r65 == null) goto L103;
            if (r07 == false) goto L103;
            if (isConsideredDoubleTap(r19, r65, r13) == false) goto L103;
            this.mIsDoubleTapping = true;
            boolean r08 = (this.mDoubleTapListener.onDoubleTap(this.mCurrentDownEvent) | false) | this.mDoubleTapListener.onDoubleTapEvent(r13);
        L105:
            this.mLastFocusX = r92;
            this.mDownFocusX = r92;
            this.mLastFocusY = r102;
            this.mDownFocusY = r102;
            MotionEvent r110 = this.mCurrentDownEvent;
            if (r110 == null) goto L108;
            r110.recycle();
        L108:
            this.mCurrentDownEvent = MotionEvent.obtain(r13);
            this.mAlwaysInTapRegion = true;
            this.mAlwaysInBiggerTapRegion = true;
            this.mStillDown = true;
            this.mInLongPress = false;
            this.mDeferConfirmSingleTap = false;
            if (this.mIsLongpressEnabled == false) goto L111;
            this.mHandler.removeMessages(2);
            this.mHandler.sendEmptyMessageAtTime(2, (this.mCurrentDownEvent.getDownTime() + ((long) TAP_TIMEOUT)) + ((long) LONGPRESS_TIMEOUT));
        L111:
            this.mHandler.sendEmptyMessageAtTime(1, this.mCurrentDownEvent.getDownTime() + ((long) TAP_TIMEOUT));
            return r08 | this.mListener.onDown(r13);
        L103:
            this.mHandler.sendEmptyMessageDelayed(3, DOUBLE_TAP_TIMEOUT);
        L104:
            r08 = false;
            goto L105
        L20:
            r42 = r6;
            goto L21
        L11:
            r5 = -1;
            goto L12
        L8:
            r4 = false;
            goto L9
        }

        private void cancel() {
            this.mHandler.removeMessages(1);
            this.mHandler.removeMessages(2);
            this.mHandler.removeMessages(3);
            this.mVelocityTracker.recycle();
            this.mVelocityTracker = null;
            this.mIsDoubleTapping = false;
            this.mStillDown = false;
            this.mAlwaysInTapRegion = false;
            this.mAlwaysInBiggerTapRegion = false;
            this.mDeferConfirmSingleTap = false;
            if (this.mInLongPress == false) goto L6;
            this.mInLongPress = false;
            return;
        }

        private void cancelTaps() {
            this.mHandler.removeMessages(1);
            this.mHandler.removeMessages(2);
            this.mHandler.removeMessages(3);
            this.mIsDoubleTapping = false;
            this.mAlwaysInTapRegion = false;
            this.mAlwaysInBiggerTapRegion = false;
            this.mDeferConfirmSingleTap = false;
            if (this.mInLongPress == false) goto L6;
            this.mInLongPress = false;
            return;
        }

        private boolean isConsideredDoubleTap(MotionEvent r7, MotionEvent r8, MotionEvent r9) {
            if (this.mAlwaysInBiggerTapRegion == true) goto L6;
            return false;
        L6:
            if ((r9.getEventTime() - r8.getEventTime()) <= DOUBLE_TAP_TIMEOUT) goto L8;
            return false;
        L8:
            int r82 = ((int) r7.getX()) - ((int) r9.getX());
            int r72 = ((int) r7.getY()) - ((int) r9.getY());
            if (((r82 * r82) + (r72 * r72)) >= this.mDoubleTapSlopSquare) goto L12;
            return true;
        L12:
            return false;
        }

        void dispatchLongPress() {
            this.mHandler.removeMessages(3);
            this.mDeferConfirmSingleTap = false;
            this.mInLongPress = true;
            this.mListener.onLongPress(this.mCurrentDownEvent);
        }
    }

    static class GestureDetectorCompatImplJellybeanMr2 implements GestureDetectorCompatImpl {
        private final GestureDetector mDetector;

        GestureDetectorCompatImplJellybeanMr2(Context r2, GestureDetector.OnGestureListener r3, Handler r4) {
            this.mDetector = new GestureDetector(r2, r3, r4);
        }

        @Override
        public boolean isLongpressEnabled() {
            return this.mDetector.isLongpressEnabled();
        }

        @Override
        public boolean onTouchEvent(MotionEvent r2) {
            return this.mDetector.onTouchEvent(r2);
        }

        @Override
        public void setIsLongpressEnabled(boolean r2) {
            this.mDetector.setIsLongpressEnabled(r2);
        }

        @Override
        public void setOnDoubleTapListener(GestureDetector.OnDoubleTapListener r2) {
            this.mDetector.setOnDoubleTapListener(r2);
        }
    }

    public GestureDetectorCompat(Context r2, GestureDetector.OnGestureListener r3) {
        this(r2, r3, null);
    }

    public GestureDetectorCompat(Context r3, GestureDetector.OnGestureListener r4, Handler r5) {
        if (Build.VERSION.SDK_INT <= 17) goto L5;
        this.mImpl = new GestureDetectorCompatImplJellybeanMr2(r3, r4, r5);
        return;
    L5:
        this.mImpl = new GestureDetectorCompatImplBase(r3, r4, r5);
    }

    public boolean isLongpressEnabled() {
        return this.mImpl.isLongpressEnabled();
    }

    public boolean onTouchEvent(MotionEvent r2) {
        return this.mImpl.onTouchEvent(r2);
    }

    public void setIsLongpressEnabled(boolean r2) {
        this.mImpl.setIsLongpressEnabled(r2);
    }

    public void setOnDoubleTapListener(GestureDetector.OnDoubleTapListener r2) {
        this.mImpl.setOnDoubleTapListener(r2);
    }
}
