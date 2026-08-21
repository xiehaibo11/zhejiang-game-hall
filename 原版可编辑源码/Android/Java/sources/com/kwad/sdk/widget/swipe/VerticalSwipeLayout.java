package com.kwad.sdk.widget.swipe;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.ViewConfiguration;
import android.view.ViewParent;
import android.widget.FrameLayout;
import com.kwad.sdk.core.e.c;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class VerticalSwipeLayout extends FrameLayout {
    private int aMr;
    private int aMs;
    private com.kwad.sdk.widget.swipe.a aMt;
    private List<a> aMu;
    private float fx;
    private float fy;

    public interface a {
        void dY();

        void dZ();
    }

    public VerticalSwipeLayout(Context context) {
        super(context);
        this.aMs = 0;
        this.aMu = new ArrayList();
        init(context);
    }

    public VerticalSwipeLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.aMs = 0;
        this.aMu = new ArrayList();
        init(context);
    }

    public VerticalSwipeLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.aMs = 0;
        this.aMu = new ArrayList();
        init(context);
    }

    private synchronized void KM() {
        Iterator<a> it = this.aMu.iterator();
        while (it.hasNext()) {
            it.next().dZ();
        }
    }

    private synchronized void KN() {
        Iterator<a> it = this.aMu.iterator();
        while (it.hasNext()) {
            it.next().dY();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x007d A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x007e A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean c(MotionEvent motionEvent) {
        StringBuilder sb;
        float x;
        String string;
        int action = motionEvent.getAction();
        if (action == 0) {
            this.fx = motionEvent.getX();
            this.fy = motionEvent.getY();
            this.aMs = 0;
            sb = new StringBuilder("onInterceptTouchEvent ACTION_DOWN mInitialMotionX=");
            x = this.fx;
        } else if (action == 1) {
            this.aMs = 0;
            string = "onInterceptTouchEvent ACTION_UP";
            c.d("VerticalSwipeLayout", string);
            if (this.aMs != 0) {
            }
        } else {
            if (action != 2) {
                if (action == 3) {
                    this.aMs = 0;
                }
                return this.aMs != 0;
            }
            x = motionEvent.getX() - this.fx;
            float fAbs = Math.abs(x);
            float y = motionEvent.getY() - this.fy;
            float fAbs2 = Math.abs(y);
            if (fAbs2 > this.aMr && fAbs2 > fAbs) {
                if (y > 0.0f) {
                    this.aMs = 1;
                } else {
                    this.aMs = 2;
                }
            }
            sb = new StringBuilder("onInterceptTouchEvent ACTION_MOVE mDragState=");
            sb.append(this.aMs);
            sb.append("--dx=");
        }
        sb.append(x);
        string = sb.toString();
        c.d("VerticalSwipeLayout", string);
        if (this.aMs != 0) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:36:0x009d A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x009e A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean d(MotionEvent motionEvent) {
        StringBuilder sb;
        float x;
        int i;
        int action = motionEvent.getAction();
        if (action != 0) {
            if (action == 1) {
                c.d("VerticalSwipeLayout", "onTouchEvent ACTION_UP mDragState=" + this.aMs);
                List<a> list = this.aMu;
                if (list != null && !list.isEmpty() && (i = this.aMs) != 0) {
                    if (i == 1) {
                        KN();
                    } else if (i == 2) {
                        KM();
                    }
                }
            } else {
                if (action != 2) {
                    if (action == 3) {
                    }
                    return this.aMs != 0;
                }
                x = motionEvent.getX() - this.fx;
                float fAbs = Math.abs(x);
                float y = motionEvent.getY() - this.fy;
                float fAbs2 = Math.abs(y);
                if (this.aMs == 0 && fAbs2 > this.aMr && fAbs2 > fAbs) {
                    if (y > 0.0f) {
                        this.aMs = 1;
                    } else {
                        this.aMs = 2;
                    }
                }
                sb = new StringBuilder("onTouchEvent ACTION_MOVE mDragState=");
                sb.append(this.aMs);
                sb.append("--dx=");
            }
            this.aMs = 0;
            if (this.aMs != 0) {
            }
        } else {
            sb = new StringBuilder("onTouchEvent ACTION_DOWN mInitialMotionX=");
            x = this.fx;
        }
        sb.append(x);
        c.d("VerticalSwipeLayout", sb.toString());
        if (this.aMs != 0) {
        }
    }

    private void init(Context context) {
        this.aMr = ViewConfiguration.get(context).getScaledPagingTouchSlop();
    }

    public final synchronized void a(a aVar) {
        this.aMu.add(aVar);
    }

    public final synchronized void b(a aVar) {
        this.aMu.remove(aVar);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        ViewParent parent;
        List<a> list = this.aMu;
        if (list != null && !list.isEmpty()) {
            int action = motionEvent.getAction();
            boolean z = true;
            if (action == 0) {
                parent = getParent();
            } else if (action == 1 || action == 3) {
                parent = getParent();
                z = false;
            }
            parent.requestDisallowInterceptTouchEvent(z);
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    public synchronized List<a> getOnSwipedListeners() {
        return this.aMu;
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        com.kwad.sdk.widget.swipe.a aVar = this.aMt;
        if (aVar != null && aVar.b(this, motionEvent)) {
            c.d("VerticalSwipeLayout", "onInterceptTouchEvent true");
            return true;
        }
        List<a> list = this.aMu;
        if (list == null || list.isEmpty() || !c(motionEvent)) {
            return super.onInterceptTouchEvent(motionEvent);
        }
        return true;
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        com.kwad.sdk.widget.swipe.a aVar = this.aMt;
        if (aVar != null && aVar.c(this, motionEvent)) {
            c.d("VerticalSwipeLayout", "handlerTouchEvent true");
            return true;
        }
        List<a> list = this.aMu;
        if (list == null || list.isEmpty() || !d(motionEvent)) {
            return super.onTouchEvent(motionEvent);
        }
        return true;
    }

    public void setTouchDetector(com.kwad.sdk.widget.swipe.a aVar) {
        this.aMt = aVar;
    }
}
