package com.bianfeng.customwidgetlib;

import android.content.Context;
import android.database.DataSetObserver;
import android.graphics.Rect;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.AttributeSet;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ListAdapter;
import android.widget.Scroller;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: classes.dex */
public class HorizontalListView extends AdapterView<ListAdapter> {
    private volatile Timer isScrollingTimer;
    boolean ismove;
    protected ListAdapter mAdapter;
    public boolean mAlwaysOverrideTouch;
    protected int mCurrentX;
    private boolean mDataChanged;
    private DataSetObserver mDataObserver;
    private int mDisplayOffset;
    private GestureDetector mGesture;
    private int mLeftViewIndex;
    private int mMaxX;
    protected int mNextX;
    private GestureDetector.OnGestureListener mOnGesture;
    private AdapterView.OnItemClickListener mOnItemClicked;
    private AdapterView.OnItemLongClickListener mOnItemLongClicked;
    private AdapterView.OnItemSelectedListener mOnItemSelected;
    private Queue<View> mRemovedViewQueue;
    private int mRightViewIndex;
    protected Scroller mScroller;
    float startX;
    float startY;
    private Timer timer;
    private int width;

    @Override // android.widget.AdapterView
    public View getSelectedView() {
        return null;
    }

    @Override // android.widget.AdapterView
    public void setSelection(int i) {
    }

    public HorizontalListView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mAlwaysOverrideTouch = true;
        this.mLeftViewIndex = -1;
        this.mRightViewIndex = 0;
        this.mMaxX = Integer.MAX_VALUE;
        this.mDisplayOffset = 0;
        this.mRemovedViewQueue = new LinkedList();
        this.mDataChanged = false;
        this.mDataObserver = new DataSetObserver() { // from class: com.bianfeng.customwidgetlib.HorizontalListView.1
            @Override // android.database.DataSetObserver
            public void onChanged() {
                synchronized (HorizontalListView.this) {
                    HorizontalListView.this.mDataChanged = true;
                }
                HorizontalListView.this.invalidate();
                HorizontalListView.this.requestLayout();
            }

            @Override // android.database.DataSetObserver
            public void onInvalidated() {
                HorizontalListView.this.reset();
                HorizontalListView.this.invalidate();
                HorizontalListView.this.requestLayout();
            }
        };
        this.mOnGesture = new GestureDetector.SimpleOnGestureListener() { // from class: com.bianfeng.customwidgetlib.HorizontalListView.4
            @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
            public boolean onDown(MotionEvent motionEvent) {
                return HorizontalListView.this.onDown(motionEvent);
            }

            @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
            public boolean onFling(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
                return HorizontalListView.this.onFling(motionEvent, motionEvent2, f, f2);
            }

            @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
            public boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
                synchronized (HorizontalListView.this) {
                    HorizontalListView.this.mNextX += (int) f;
                }
                HorizontalListView.this.requestLayout();
                return true;
            }

            @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnDoubleTapListener
            public boolean onSingleTapConfirmed(MotionEvent motionEvent) {
                int i = 0;
                while (true) {
                    if (i >= HorizontalListView.this.getChildCount()) {
                        break;
                    }
                    View childAt = HorizontalListView.this.getChildAt(i);
                    if (isEventWithinView(motionEvent, childAt)) {
                        if (HorizontalListView.this.mOnItemClicked != null) {
                            AdapterView.OnItemClickListener onItemClickListener = HorizontalListView.this.mOnItemClicked;
                            HorizontalListView horizontalListView = HorizontalListView.this;
                            onItemClickListener.onItemClick(horizontalListView, childAt, horizontalListView.mLeftViewIndex + 1 + i, HorizontalListView.this.mAdapter.getItemId(HorizontalListView.this.mLeftViewIndex + 1 + i));
                        }
                        if (HorizontalListView.this.mOnItemSelected != null) {
                            AdapterView.OnItemSelectedListener onItemSelectedListener = HorizontalListView.this.mOnItemSelected;
                            HorizontalListView horizontalListView2 = HorizontalListView.this;
                            onItemSelectedListener.onItemSelected(horizontalListView2, childAt, horizontalListView2.mLeftViewIndex + 1 + i, HorizontalListView.this.mAdapter.getItemId(HorizontalListView.this.mLeftViewIndex + 1 + i));
                        }
                    } else {
                        i++;
                    }
                }
                return true;
            }

            @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
            public void onLongPress(MotionEvent motionEvent) {
                int childCount = HorizontalListView.this.getChildCount();
                for (int i = 0; i < childCount; i++) {
                    View childAt = HorizontalListView.this.getChildAt(i);
                    if (isEventWithinView(motionEvent, childAt)) {
                        if (HorizontalListView.this.mOnItemLongClicked != null) {
                            AdapterView.OnItemLongClickListener onItemLongClickListener = HorizontalListView.this.mOnItemLongClicked;
                            HorizontalListView horizontalListView = HorizontalListView.this;
                            onItemLongClickListener.onItemLongClick(horizontalListView, childAt, horizontalListView.mLeftViewIndex + 1 + i, HorizontalListView.this.mAdapter.getItemId(HorizontalListView.this.mLeftViewIndex + 1 + i));
                            return;
                        }
                        return;
                    }
                }
            }

            private boolean isEventWithinView(MotionEvent motionEvent, View view) {
                Rect rect = new Rect();
                int[] iArr = new int[2];
                view.getLocationOnScreen(iArr);
                int i = iArr[0];
                int width = view.getWidth() + i;
                int i2 = iArr[1];
                rect.set(i, i2, width, view.getHeight() + i2);
                return rect.contains((int) motionEvent.getRawX(), (int) motionEvent.getRawY());
            }
        };
        initView();
    }

    private synchronized void initView() {
        this.mLeftViewIndex = -1;
        this.mRightViewIndex = 0;
        this.mDisplayOffset = 0;
        this.mCurrentX = 0;
        this.mNextX = 0;
        this.mMaxX = Integer.MAX_VALUE;
        this.mScroller = new Scroller(getContext());
        this.mGesture = new GestureDetector(getContext(), this.mOnGesture);
    }

    @Override // android.widget.AdapterView
    public void setOnItemSelectedListener(AdapterView.OnItemSelectedListener onItemSelectedListener) {
        this.mOnItemSelected = onItemSelectedListener;
    }

    @Override // android.widget.AdapterView
    public void setOnItemClickListener(AdapterView.OnItemClickListener onItemClickListener) {
        this.mOnItemClicked = onItemClickListener;
    }

    @Override // android.widget.AdapterView
    public void setOnItemLongClickListener(AdapterView.OnItemLongClickListener onItemLongClickListener) {
        this.mOnItemLongClicked = onItemLongClickListener;
    }

    @Override // android.widget.AdapterView
    public ListAdapter getAdapter() {
        return this.mAdapter;
    }

    @Override // android.widget.AdapterView
    public void setAdapter(ListAdapter listAdapter) {
        ListAdapter listAdapter2 = this.mAdapter;
        if (listAdapter2 != null) {
            listAdapter2.unregisterDataSetObserver(this.mDataObserver);
        }
        this.mAdapter = listAdapter;
        listAdapter.registerDataSetObserver(this.mDataObserver);
        reset();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void reset() {
        initView();
        removeAllViewsInLayout();
        requestLayout();
    }

    private void addAndMeasureChild(View view, int i) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (layoutParams == null) {
            layoutParams = new ViewGroup.LayoutParams(-1, -1);
        }
        addViewInLayout(view, i, layoutParams, true);
        view.measure(View.MeasureSpec.makeMeasureSpec(getWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(getHeight(), Integer.MIN_VALUE));
    }

    @Override // android.widget.AdapterView, android.view.ViewGroup, android.view.View
    protected synchronized void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        if (this.mAdapter == null) {
            return;
        }
        if (this.mDataChanged) {
            int i5 = this.mCurrentX;
            initView();
            removeAllViewsInLayout();
            this.mNextX = i5;
            this.mDataChanged = false;
        }
        if (this.mScroller.computeScrollOffset()) {
            this.mNextX = this.mScroller.getCurrX();
        }
        if (this.mNextX <= 0) {
            this.mNextX = 0;
            this.mScroller.forceFinished(true);
        }
        if (this.mNextX >= this.mMaxX) {
            this.mNextX = this.mMaxX;
            this.mScroller.forceFinished(true);
        }
        int i6 = this.mCurrentX - this.mNextX;
        removeNonVisibleItems(i6);
        fillList(i6);
        positionItems(i6);
        this.mCurrentX = this.mNextX;
        if (!this.mScroller.isFinished()) {
            post(new Runnable() { // from class: com.bianfeng.customwidgetlib.HorizontalListView.2
                @Override // java.lang.Runnable
                public void run() {
                    HorizontalListView.this.requestLayout();
                }
            });
        }
    }

    private void fillList(int i) {
        View childAt = getChildAt(getChildCount() - 1);
        fillListRight(childAt != null ? childAt.getRight() : 0, i);
        View childAt2 = getChildAt(0);
        fillListLeft(childAt2 != null ? childAt2.getLeft() : 0, i);
    }

    private void fillListRight(int i, int i2) {
        while (i + i2 < getWidth() && this.mRightViewIndex < this.mAdapter.getCount()) {
            View view = this.mAdapter.getView(this.mRightViewIndex, this.mRemovedViewQueue.poll(), this);
            addAndMeasureChild(view, -1);
            i += view.getMeasuredWidth();
            if (this.mRightViewIndex == this.mAdapter.getCount() - 1) {
                this.mMaxX = (this.mCurrentX + i) - getWidth();
            }
            if (this.mMaxX < 0) {
                this.mMaxX = 0;
            }
            this.mRightViewIndex++;
        }
    }

    private void fillListLeft(int i, int i2) {
        int i3;
        while (i + i2 > 0 && (i3 = this.mLeftViewIndex) >= 0) {
            View view = this.mAdapter.getView(i3, this.mRemovedViewQueue.poll(), this);
            addAndMeasureChild(view, 0);
            i -= view.getMeasuredWidth();
            this.mLeftViewIndex--;
            this.mDisplayOffset -= view.getMeasuredWidth();
        }
    }

    private void removeNonVisibleItems(int i) {
        View childAt = getChildAt(0);
        while (childAt != null && childAt.getRight() + i <= 0) {
            this.mDisplayOffset += childAt.getMeasuredWidth();
            this.mRemovedViewQueue.offer(childAt);
            removeViewInLayout(childAt);
            this.mLeftViewIndex++;
            childAt = getChildAt(0);
        }
        View childAt2 = getChildAt(getChildCount() - 1);
        while (childAt2 != null && childAt2.getLeft() + i >= getWidth()) {
            this.mRemovedViewQueue.offer(childAt2);
            removeViewInLayout(childAt2);
            this.mRightViewIndex--;
            childAt2 = getChildAt(getChildCount() - 1);
        }
    }

    private void positionItems(int i) {
        if (getChildCount() > 0) {
            int paddingRight = this.mDisplayOffset + i;
            this.mDisplayOffset = paddingRight;
            for (int i2 = 0; i2 < getChildCount(); i2++) {
                View childAt = getChildAt(i2);
                int measuredWidth = childAt.getMeasuredWidth();
                childAt.layout(paddingRight, 0, paddingRight + measuredWidth, childAt.getMeasuredHeight());
                paddingRight += measuredWidth + childAt.getPaddingRight();
            }
        }
    }

    public synchronized void scrollTo(int i) {
        this.mScroller.startScroll(this.mNextX, 0, i - this.mNextX, 0);
        requestLayout();
    }

    @Override // android.view.View
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        postInvalidate();
    }

    public void setWidth(int i) {
        this.width = i;
    }

    public void autoScroll() {
        Timer timer = new Timer();
        this.timer = timer;
        timer.schedule(new TimeTaskScroll(this.mScroller.getCurrX()), 500L, 3000L);
    }

    private void isScrolling() {
        if (this.isScrollingTimer != null) {
            this.isScrollingTimer.cancel();
            this.isScrollingTimer = null;
        }
        this.isScrollingTimer = new Timer();
        this.isScrollingTimer.schedule(new TimerTask() { // from class: com.bianfeng.customwidgetlib.HorizontalListView.3
            @Override // java.util.TimerTask, java.lang.Runnable
            public void run() {
                if (HorizontalListView.this.mScroller.isFinished()) {
                    HorizontalListView.this.isScrollingTimer.cancel();
                    HorizontalListView.this.autoScroll();
                }
            }
        }, 100L, 1000L);
    }

    public void stopScroll() {
        Timer timer = this.timer;
        if (timer != null) {
            timer.cancel();
            this.timer = null;
        }
    }

    public class TimeTaskScroll extends TimerTask {
        private Handler handler = new Handler(Looper.getMainLooper()) { // from class: com.bianfeng.customwidgetlib.HorizontalListView.TimeTaskScroll.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                if (message.what != 12) {
                    return;
                }
                TimeTaskScroll.this.i += HorizontalListView.this.width / 4;
                HorizontalListView.this.scrollTo(TimeTaskScroll.this.i);
            }
        };
        int i;

        public TimeTaskScroll(int i) {
            this.i = i;
        }

        @Override // java.util.TimerTask, java.lang.Runnable
        public void run() {
            Message messageObtainMessage = this.handler.obtainMessage();
            messageObtainMessage.what = 12;
            this.handler.sendMessage(messageObtainMessage);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        boolean zDispatchTouchEvent = super.dispatchTouchEvent(motionEvent) | this.mGesture.onTouchEvent(motionEvent);
        getParent().requestDisallowInterceptTouchEvent(true);
        int action = motionEvent.getAction();
        if (action == 0) {
            this.startX = (int) motionEvent.getX();
            this.startY = (int) motionEvent.getY();
            stopScroll();
        } else if (action == 1) {
            isScrolling();
        } else if (action == 2) {
            if (Math.abs((int) (((int) motionEvent.getX()) - this.startX)) + 50 <= Math.abs((int) (((int) motionEvent.getY()) - this.startY))) {
                getParent().requestDisallowInterceptTouchEvent(false);
            }
        }
        return super.dispatchTouchEvent(motionEvent) | zDispatchTouchEvent;
    }

    protected boolean onFling(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
        synchronized (this) {
            this.mScroller.fling(this.mNextX, 0, (int) (-f), 0, 0, this.mMaxX, 0, 0);
        }
        requestLayout();
        return true;
    }

    protected boolean onDown(MotionEvent motionEvent) {
        this.mScroller.forceFinished(true);
        return true;
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            this.startX = motionEvent.getX();
            this.startY = motionEvent.getY();
        } else if (action == 2) {
            float x = motionEvent.getX();
            float y = motionEvent.getY();
            float f = x - this.startX;
            float f2 = y - this.startY;
            if (Math.abs(f) - 10.0f > Math.abs(f2) || Math.abs(f) < Math.abs(f2) - 10.0f) {
                return true;
            }
        }
        return super.onInterceptTouchEvent(motionEvent);
    }
}
