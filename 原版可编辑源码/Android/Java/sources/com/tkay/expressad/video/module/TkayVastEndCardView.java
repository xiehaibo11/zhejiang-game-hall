package com.tkay.expressad.video.module;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.tkay.expressad.video.signal.f;
import com.tkay.expressad.video.signal.factory.b;
import com.tkay.expressad.widget.a;

public class TkayVastEndCardView extends TkayBaseView implements f {
    private static final String n = "tkay_reward_endcard_vast";
    private ViewGroup o;
    private View p;
    private View q;

    @Override
    public void preLoadData(b bVar) {
    }

    public TkayVastEndCardView(Context context) {
        super(context);
    }

    public TkayVastEndCardView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override
    public void init(Context context) {
        int iFindLayout = findLayout(n);
        if (iFindLayout >= 0) {
            this.c.inflate(iFindLayout, this);
            this.o = (ViewGroup) findViewById(findID("tkay_rl_content"));
            this.p = findViewById(findID("tkay_iv_vastclose"));
            View viewFindViewById = findViewById(findID("tkay_iv_vastok"));
            this.q = viewFindViewById;
            this.f = isNotNULL(this.o, this.p, viewFindViewById);
            c();
            if (this.f) {
                setMatchParent();
                setBackgroundResource(findColor("tkay_reward_endcard_vast_bg"));
                setClickable(true);
                ((RelativeLayout.LayoutParams) this.o.getLayoutParams()).addRule(13, -1);
            }
        }
    }

    private void a() {
        if (this.f) {
            setMatchParent();
            setBackgroundResource(findColor("tkay_reward_endcard_vast_bg"));
            setClickable(true);
            ((RelativeLayout.LayoutParams) this.o.getLayoutParams()).addRule(13, -1);
        }
    }

    @Override
    protected final void c() {
        super.c();
        if (this.f) {
            this.p.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    TkayVastEndCardView.this.e.a(104, "");
                }
            });
            this.q.setOnClickListener(new a() {
                @Override
                protected final void a(View view) {
                    TkayVastEndCardView.this.e.a(108, TkayVastEndCardView.this.d());
                }
            });
        }
    }

    private boolean b() {
        this.o = (ViewGroup) findViewById(findID("tkay_rl_content"));
        this.p = findViewById(findID("tkay_iv_vastclose"));
        View viewFindViewById = findViewById(findID("tkay_iv_vastok"));
        this.q = viewFindViewById;
        return isNotNULL(this.o, this.p, viewFindViewById);
    }

    public void notifyShowListener() {
        this.e.a(111, "");
    }
}
