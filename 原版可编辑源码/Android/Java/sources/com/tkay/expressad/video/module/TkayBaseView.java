package com.tkay.expressad.video.module;

import android.content.Context;
import android.content.res.Configuration;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.module.a.a;
import com.tkay.expressad.video.module.a.a.f;
import org.json.JSONException;
import org.json.JSONObject;

public abstract class TkayBaseView extends RelativeLayout {
    public static final String TAG = "TkayBaseView";
    private static final int n = -999;
    protected Context a;
    protected c b;
    protected LayoutInflater c;
    protected int d;
    protected a e;
    protected boolean f;
    protected float g;
    protected float h;
    protected boolean i;
    protected int j;
    protected boolean k;
    protected int l;
    protected int m;

    protected void c() {
    }

    public void defaultShow() {
    }

    public abstract void init(Context context);

    public TkayBaseView(Context context) {
        this(context, null);
    }

    public TkayBaseView(Context context, AttributeSet attributeSet, boolean z, int i, boolean z2, int i2, int i3) {
        super(context, attributeSet);
        this.d = 1;
        this.e = new f();
        this.f = false;
        this.l = 1;
        this.m = 0;
        this.a = context;
        this.c = LayoutInflater.from(context);
        this.i = z;
        this.j = i;
        this.k = z2;
        this.l = i2;
        this.m = i3;
        init(context);
    }

    public TkayBaseView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.d = 1;
        this.e = new f();
        this.f = false;
        this.l = 1;
        this.m = 0;
        this.a = context;
        this.c = LayoutInflater.from(context);
        init(context);
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        this.d = configuration.orientation;
        super.onConfigurationChanged(configuration);
        Log.d(TAG, "onConfigurationChanged:" + configuration.orientation);
    }

    public void onSelfConfigurationChanged(Configuration configuration) {
        this.d = configuration.orientation;
        Log.d(TAG, "onSelfConfigurationChanged:" + configuration.orientation);
    }

    public void setNotifyListener(a aVar) {
        this.e = aVar;
    }

    public void setCampaign(c cVar) {
        this.b = cVar;
    }

    public int findID(String str) {
        return i.a(this.a.getApplicationContext(), str, "id");
    }

    public int findDyID(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        return str.hashCode();
    }

    public int filterFindViewId(boolean z, String str) {
        if (z) {
            return findDyID(str);
        }
        return findID(str);
    }

    public int findLayout(String str) {
        return i.a(this.a.getApplicationContext(), str, "layout");
    }

    public int findColor(String str) {
        return i.a(this.a.getApplicationContext(), str, "color");
    }

    public int findDrawable(String str) {
        return i.a(this.a.getApplicationContext(), str, i.c);
    }

    public boolean isNotNULL(View... viewArr) {
        if (viewArr == null) {
            return false;
        }
        int length = viewArr.length;
        int i = 0;
        boolean z = false;
        while (i < length) {
            if (viewArr[i] == null) {
                return false;
            }
            i++;
            z = true;
        }
        return z;
    }

    public void setMatchParent() {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams == null) {
            setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
        } else {
            layoutParams.height = -1;
            layoutParams.width = -1;
        }
    }

    public void setWrapContent() {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams == null) {
            setLayoutParams(new ViewGroup.LayoutParams(-2, -2));
        } else {
            layoutParams.height = -2;
            layoutParams.width = -2;
        }
    }

    public boolean isLandscape() {
        return this.a.getResources().getConfiguration().orientation == 2;
    }

    public void setLayoutCenter(int i, int i2) {
        RelativeLayout.LayoutParams parentRelativeLayoutParams = getParentRelativeLayoutParams();
        LinearLayout.LayoutParams parentLinearLayoutParams = getParentLinearLayoutParams();
        if (parentRelativeLayoutParams != null) {
            parentRelativeLayoutParams.addRule(13);
            if (i != -999) {
                parentRelativeLayoutParams.width = i;
            }
            if (i2 != -999) {
                parentRelativeLayoutParams.height = i2;
            }
            setLayoutParams(parentRelativeLayoutParams);
            return;
        }
        if (parentLinearLayoutParams != null) {
            parentLinearLayoutParams.gravity = 17;
            if (i != -999) {
                parentLinearLayoutParams.width = i;
            }
            if (i2 != -999) {
                parentLinearLayoutParams.height = i2;
            }
            setLayoutParams(parentLinearLayoutParams);
        }
    }

    public void setLayoutParam(int i, int i2, int i3, int i4) {
        RelativeLayout.LayoutParams parentRelativeLayoutParams = getParentRelativeLayoutParams();
        LinearLayout.LayoutParams parentLinearLayoutParams = getParentLinearLayoutParams();
        if (parentRelativeLayoutParams != null) {
            parentRelativeLayoutParams.topMargin = i2;
            parentRelativeLayoutParams.leftMargin = i;
            if (i3 != -999) {
                parentRelativeLayoutParams.width = i3;
            }
            if (i4 != -999) {
                parentRelativeLayoutParams.height = i4;
            }
            setLayoutParams(parentRelativeLayoutParams);
            return;
        }
        if (parentLinearLayoutParams != null) {
            parentLinearLayoutParams.topMargin = i2;
            parentLinearLayoutParams.leftMargin = i;
            if (i3 != -999) {
                parentLinearLayoutParams.width = i3;
            }
            if (i4 != -999) {
                parentLinearLayoutParams.height = i4;
            }
            setLayoutParams(parentLinearLayoutParams);
        }
    }

    public RelativeLayout.LayoutParams getParentRelativeLayoutParams() {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams instanceof RelativeLayout.LayoutParams) {
            return (RelativeLayout.LayoutParams) layoutParams;
        }
        return null;
    }

    public LinearLayout.LayoutParams getParentLinearLayoutParams() {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams instanceof LinearLayout.LayoutParams) {
            return (LinearLayout.LayoutParams) layoutParams;
        }
        return null;
    }

    public c getCampaign() {
        return this.b;
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.g = motionEvent.getRawX();
        this.h = motionEvent.getRawY();
        return super.onInterceptTouchEvent(motionEvent);
    }

    protected final String d() {
        return a(0).toString();
    }

    protected final JSONObject a(int i) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject = new JSONObject();
        } catch (JSONException e) {
            e = e;
        }
        try {
            jSONObject.put(com.tkay.expressad.foundation.g.a.cc, t.a(m.a().f(), this.g));
            jSONObject.put(com.tkay.expressad.foundation.g.a.cd, t.a(m.a().f(), this.h));
            jSONObject.put(com.tkay.expressad.foundation.g.a.cf, i);
            try {
                this.d = getContext().getResources().getConfiguration().orientation;
            } catch (Exception e2) {
                e2.printStackTrace();
            }
            jSONObject.put(com.tkay.expressad.foundation.g.a.cg, this.d);
            jSONObject.put(com.tkay.expressad.foundation.g.a.ch, t.c(getContext()));
            return jSONObject;
        } catch (JSONException e3) {
            e = e3;
            jSONObject2 = jSONObject;
            e.printStackTrace();
            return jSONObject2;
        }
    }
}
