package com.mbridge.msdk.nativex.adapter;

import android.support.v4.view.PagerAdapter;
import android.view.View;
import android.view.ViewGroup;
import com.mbridge.msdk.nativex.view.MBNativeRollView;
import com.mbridge.msdk.out.Frame;
import java.util.ArrayList;
import java.util.List;

public class RollingAdapter extends PagerAdapter {
    private List<Frame> a;
    private List<View> b = new ArrayList();
    private MBNativeRollView.a c;

    @Override
    public boolean isViewFromObject(View view, Object obj) {
        return view == obj;
    }

    public final void a(MBNativeRollView.a aVar) {
        this.c = aVar;
    }

    public RollingAdapter(List<Frame> list) {
        this.a = new ArrayList();
        this.a = list;
    }

    @Override
    public int getCount() {
        return this.a.size();
    }

    @Override
    public Object instantiateItem(ViewGroup viewGroup, int i) {
        List<Frame> list;
        View viewA;
        if (this.c == null || (list = this.a) == null || list.size() <= 0 || (viewA = this.c.a(this.a.get(i), i)) == null) {
            return null;
        }
        this.b.add(viewA);
        viewGroup.addView(viewA);
        return viewA;
    }

    @Override
    public void destroyItem(ViewGroup viewGroup, int i, Object obj) {
        viewGroup.removeView(this.b.get(i));
    }
}
