package com.sigmob.sdk.nativead;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.GradientDrawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import java.util.ArrayList;
import java.util.List;

public class m extends ViewGroup {
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
    private e w;
    private a x;
    private int y;

    class a implements View.OnClickListener {
        a() {
        }

        @Override
        public void onClick(View view) {
            if (m.this.l) {
                b bVar = (b) view;
                int selectedIndex = -1;
                b selectedItem = m.this.getSelectedItem();
                int i = 0;
                if (m.this.t) {
                    bVar.a(!bVar.b);
                    int childCount = m.this.getChildCount();
                    while (true) {
                        if (i >= childCount) {
                            break;
                        }
                        if (m.this.b(i) == bVar) {
                            selectedIndex = i;
                            break;
                        }
                        i++;
                    }
                } else {
                    if (selectedItem != null) {
                        selectedItem.a(false);
                    }
                    bVar.a(true);
                    selectedIndex = m.this.getSelectedIndex();
                }
                if (m.this.w != null) {
                    m.this.w.a(selectedIndex, bVar.getText().toString());
                }
            }
        }
    }

    class b extends TextView {
        private boolean b;
        private Paint c;
        private Rect d;

        public b(Context context, CharSequence charSequence) {
            super(context);
            this.b = false;
            this.c = new Paint(1);
            this.d = new Rect();
            this.c.setStyle(Paint.Style.FILL);
            setPadding(m.this.r, m.this.s, m.this.r, m.this.s);
            setLayoutParams(new c(m.this.y, -2));
            setGravity(17);
            setTextSize(0, m.this.o);
            setSingleLine(true);
            setEllipsize(TextUtils.TruncateAt.valueOf("END"));
            setMaxEms(4);
            setText(charSequence);
            setClickable(true);
            a();
        }

        private void a() {
            int i;
            m.this.u = false;
            if (this.b) {
                this.c.setColor(m.this.n);
                i = m.this.m;
            } else {
                this.c.setColor(m.this.k);
                i = m.this.j;
            }
            setTextColor(i);
        }

        private void b() {
            int i = this.b ? m.this.n : m.this.k;
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setCornerRadii(m.this.v);
            gradientDrawable.setColor(i);
            if (Build.VERSION.SDK_INT < 16) {
                setBackgroundDrawable(gradientDrawable);
            } else {
                setBackground(gradientDrawable);
            }
        }

        public void a(boolean z) {
            this.b = z;
            a();
        }

        @Override
        protected boolean getDefaultEditable() {
            return false;
        }

        @Override
        protected void onDraw(Canvas canvas) {
            if (!m.this.u) {
                b();
            }
            super.onDraw(canvas);
        }

        @Override
        public boolean onTouchEvent(MotionEvent motionEvent) {
            int action = motionEvent.getAction();
            if (action != 0) {
                if (action == 1 || (action == 2 && !this.d.contains((int) motionEvent.getX(), (int) motionEvent.getY()))) {
                }
                return super.onTouchEvent(motionEvent);
            }
            getDrawingRect(this.d);
            a();
            invalidate();
            return super.onTouchEvent(motionEvent);
        }
    }

    public static class c extends ViewGroup.LayoutParams {
        public c(int i, int i2) {
            super(i, i2);
        }

        public c(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
        }
    }

    static class d extends View.BaseSavedState {
        public static final Parcelable.Creator<d> CREATOR = new Parcelable.Creator<d>() {
            @Override
            public d createFromParcel(Parcel parcel) {
                return new d(parcel);
            }

            @Override
            public d[] newArray(int i) {
                return new d[i];
            }
        };
        int a;
        String[] b;
        int c;

        public d(Parcel parcel) {
            super(parcel);
            int i = parcel.readInt();
            this.a = i;
            String[] strArr = new String[i];
            this.b = strArr;
            parcel.readStringArray(strArr);
            this.c = parcel.readInt();
        }

        public d(Parcelable parcelable) {
            super(parcelable);
        }

        @Override
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            int length = this.b.length;
            this.a = length;
            parcel.writeInt(length);
            parcel.writeStringArray(this.b);
            parcel.writeInt(this.c);
        }
    }

    public interface e {
        void a(int i, String str);
    }

    public m(Context context) {
        this(context, null);
    }

    public m(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public m(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = -16777216;
        this.b = Color.parseColor("#EEEEEE");
        this.c = -1;
        this.d = Color.parseColor("#FE7E03");
        this.u = false;
        this.v = new float[]{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
        this.x = new a();
        int i2 = context.getResources().getDisplayMetrics().widthPixels;
        int i3 = context.getResources().getDisplayMetrics().heightPixels;
        int iA = (int) a(100.0f);
        if (i3 > i2) {
            this.y = (i2 - iA) / 3;
        } else {
            this.y = (i3 - iA) / 3;
        }
        this.e = b(13.0f);
        this.f = a(10.0f);
        this.g = a(10.0f);
        this.h = a(10.0f);
        float fA = a(5.0f);
        this.i = fA;
        this.j = -16777216;
        this.k = this.b;
        this.m = -1;
        this.n = this.d;
        this.o = this.e;
        this.p = (int) this.f;
        this.q = (int) this.g;
        this.r = (int) this.h;
        this.s = (int) fA;
        this.t = false;
        this.l = true;
    }

    private float a(float f) {
        return TypedValue.applyDimension(1, f, getResources().getDisplayMetrics());
    }

    private void a(CharSequence charSequence) {
        b bVar = new b(getContext(), charSequence);
        bVar.setOnClickListener(this.x);
        addView(bVar);
    }

    private int b(float f) {
        return (int) TypedValue.applyDimension(2, f, getResources().getDisplayMetrics());
    }

    public int a(int i) {
        return a(i, true);
    }

    public int a(int i, boolean z) {
        if (i >= getChildCount()) {
            return -1;
        }
        b(i).a(z);
        return i;
    }

    public int a(String str) {
        ArrayList<String> allItemSelectedTextWithListArray = getAllItemSelectedTextWithListArray();
        if (allItemSelectedTextWithListArray == null || !allItemSelectedTextWithListArray.contains(str)) {
            return -1;
        }
        return allItemSelectedTextWithListArray.indexOf(str);
    }

    public void a() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            b(i).a(true);
        }
    }

    public void a(int i, String str) {
        if (i >= getChildCount()) {
            return;
        }
        b(i).setText(str);
    }

    protected b b(int i) {
        if (getChildAt(i) == null) {
            return null;
        }
        return (b) getChildAt(i);
    }

    public void b() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            b bVarB = b(i);
            if (bVarB != null && bVarB.b) {
                bVarB.a(false);
            }
        }
    }

    public void c() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            b bVarB = b(i);
            if (bVarB != null && bVarB.b) {
                bVarB.a(false);
            }
            bVarB.setClickable(false);
        }
    }

    public void c(int i) {
        b bVarB = b(i);
        if (bVarB == null || !bVarB.b) {
            return;
        }
        bVarB.a(false);
    }

    public boolean d(int i) {
        b bVarB = b(i);
        return bVarB != null && bVarB.b;
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new c(getContext(), attributeSet);
    }

    public ArrayList<Integer> getAllItemSelectedIndex() {
        int childCount = getChildCount();
        ArrayList<Integer> arrayList = new ArrayList<>();
        for (int i = 0; i < childCount; i++) {
            if (b(i).b) {
                arrayList.add(Integer.valueOf(i));
            }
        }
        return arrayList;
    }

    public ArrayList<String> getAllItemSelectedTextWithListArray() {
        int childCount = getChildCount();
        ArrayList<String> arrayList = new ArrayList<>();
        for (int i = 0; i < childCount; i++) {
            b bVarB = b(i);
            if (bVarB.b) {
                arrayList.add(bVarB.getText().toString());
            }
        }
        return arrayList;
    }

    public String[] getAllItemSelectedTextWithStringArray() {
        int childCount = getChildCount();
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < childCount; i++) {
            b bVarB = b(i);
            if (bVarB.b) {
                arrayList.add(bVarB.getText().toString());
            }
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    public String[] getAllItemText() {
        int childCount = getChildCount();
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < childCount; i++) {
            arrayList.add(b(i).getText().toString());
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    public int getSelectedIndex() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            if (b(i).b) {
                return i;
            }
        }
        return -1;
    }

    protected b getSelectedItem() {
        int selectedIndex = getSelectedIndex();
        if (selectedIndex != -1) {
            return b(selectedIndex);
        }
        return null;
    }

    protected String getSelectedItemText() {
        if (getSelectedItem() != null) {
            return getSelectedItem().getText().toString();
        }
        return null;
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int paddingLeft = getPaddingLeft();
        int paddingRight = (i3 - i) - getPaddingRight();
        int paddingTop = getPaddingTop();
        getPaddingBottom();
        int childCount = getChildCount();
        int i5 = paddingLeft;
        int iMax = 0;
        for (int i6 = 0; i6 < childCount; i6++) {
            View childAt = getChildAt(i6);
            int measuredWidth = childAt.getMeasuredWidth();
            int measuredHeight = childAt.getMeasuredHeight();
            if (childAt.getVisibility() != 8) {
                if (i5 + measuredWidth > paddingRight) {
                    paddingTop += iMax + this.q;
                    i5 = paddingLeft;
                    iMax = measuredHeight;
                } else {
                    iMax = Math.max(iMax, measuredHeight);
                }
                childAt.layout(i5, paddingTop, i5 + measuredWidth, measuredHeight + paddingTop);
                i5 += measuredWidth + this.p;
            }
        }
    }

    @Override
    protected void onMeasure(int i, int i2) {
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        measureChildren(i, i2);
        int childCount = getChildCount();
        int i3 = 0;
        int i4 = 0;
        int i5 = 0;
        int i6 = 0;
        for (int i7 = 0; i7 < childCount; i7++) {
            View childAt = getChildAt(i7);
            int measuredWidth = childAt.getMeasuredWidth();
            int measuredHeight = childAt.getMeasuredHeight();
            if (childAt.getVisibility() != 8) {
                int i8 = i6 + measuredWidth;
                if (i8 > size) {
                    i3 += i4 + this.q;
                    i5++;
                } else {
                    measuredHeight = Math.max(i4, measuredHeight);
                    measuredWidth = i8;
                }
                i6 = measuredWidth + this.p;
                i4 = measuredHeight;
            }
        }
        int paddingTop = i3 + i4 + getPaddingTop() + getPaddingBottom();
        int paddingLeft = i5 == 0 ? i6 + getPaddingLeft() + getPaddingRight() : size;
        if (mode != 1073741824) {
            size = paddingLeft;
        }
        if (mode2 != 1073741824) {
            size2 = paddingTop;
        }
        setMeasuredDimension(size, size2);
    }

    @Override
    public void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof d)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        d dVar = (d) parcelable;
        super.onRestoreInstanceState(dVar.getSuperState());
        setList(dVar.b);
        b bVarB = b(dVar.c);
        if (bVarB != null) {
            bVarB.a(true);
        }
    }

    @Override
    public Parcelable onSaveInstanceState() {
        d dVar = new d(super.onSaveInstanceState());
        dVar.b = getAllItemText();
        dVar.c = getSelectedIndex();
        return dVar;
    }

    public void setIndexListItemSelected(List<Integer> list) {
        if (list == null || list.isEmpty() || list.size() == 0) {
            return;
        }
        if (list.size() > getChildCount()) {
            return;
        }
        for (int i = 0; i < list.size(); i++) {
            b(i).a(true);
        }
    }

    public void setList(List<String> list) {
        setList((String[]) list.toArray(new String[list.size()]));
    }

    public void setList(String... strArr) {
        removeAllViews();
        for (String str : strArr) {
            a((CharSequence) str);
        }
    }

    public void setOnItemClickListener(e eVar) {
        this.w = eVar;
    }
}
