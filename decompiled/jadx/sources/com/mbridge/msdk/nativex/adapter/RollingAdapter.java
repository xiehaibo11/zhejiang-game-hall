package com.mbridge.msdk.nativex.adapter;

import android.support.v4.view.PagerAdapter;
import android.view.View;
import android.view.ViewGroup;
import com.mbridge.msdk.nativex.view.MBNativeRollView;
import com.mbridge.msdk.out.Frame;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class RollingAdapter extends PagerAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private List<Frame> f3798a;
    private List<View> b = new ArrayList();
    private MBNativeRollView.a c;

    @Override // android.support.v4.view.PagerAdapter
    public boolean isViewFromObject(View view, Object obj) {
        return view == obj;
    }

    public final void a(MBNativeRollView.a aVar) {
        this.c = aVar;
    }

    public RollingAdapter(List<Frame> list) {
        this.f3798a = new ArrayList();
        this.f3798a = list;
    }

    @Override // android.support.v4.view.PagerAdapter
    public int getCount() {
        return this.f3798a.size();
    }

    @Override // android.support.v4.view.PagerAdapter
    public Object instantiateItem(ViewGroup viewGroup, int i) {
        List<Frame> list;
        View viewA;
        if (this.c == null || (list = this.f3798a) == null || list.size() <= 0 || (viewA = this.c.a(this.f3798a.get(i), i)) == null) {
            return null;
        }
        this.b.add(viewA);
        viewGroup.addView(viewA);
        return viewA;
    }

    @Override // android.support.v4.view.PagerAdapter
    public void destroyItem(ViewGroup viewGroup, int i, Object obj) {
        viewGroup.removeView(this.b.get(i));
    }
}
