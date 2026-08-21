package com.mbridge.msdk.foundation.b.a;

import android.app.Activity;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CompoundButton;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import com.mbridge.msdk.c.a;
import com.mbridge.msdk.foundation.b.b;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.FeedBackButton;
import com.mbridge.msdk.widget.FeedbackRadioGroup;
import com.mbridge.msdk.widget.dialog.MBFeedBackDialog;
import com.tkay.expressad.foundation.h.i;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;

public final class a {
    private static int t = -1;
    private static String y;
    private String a;
    private CampaignEx b;
    private FeedBackButton c;
    private int d;
    private int e;
    private JSONArray k;
    private String p;
    private String q;
    private MBFeedBackDialog v;
    private List<a> w;
    private int f = -1;
    private int g = -1;
    private int h = -1;
    private int i = -1;
    private float j = -1.0f;
    private int l = -1;
    private int m = -1;
    private int n = -1;
    private int o = -1;
    private float r = 1.0f;
    private int s = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 20.0f);
    private int u = t;
    private com.mbridge.msdk.widget.dialog.a x = new com.mbridge.msdk.widget.dialog.a() {
        @Override
        public final void a() {
            a.a(a.this);
        }

        @Override
        public final void b() {
            a.b(a.this);
        }

        @Override
        public final void c() {
            a.c(a.this);
        }
    };

    public a(String str) {
        this.w = new ArrayList();
        this.a = str;
        if (this.w == null) {
            this.w = new ArrayList();
        }
        i();
        l();
        j();
    }

    private void i() {
        if (this.x == null) {
            this.x = new com.mbridge.msdk.widget.dialog.a() {
                @Override
                public final void a() {
                    a.a(a.this);
                }

                @Override
                public final void b() {
                    a.b(a.this);
                }

                @Override
                public final void c() {
                    a.c(a.this);
                }
            };
        }
    }

    public final void a() {
        b.a().a(this.a, 0, 1, y);
        Activity activityA = b.a().a(com.mbridge.msdk.foundation.controller.a.f().j());
        MBFeedBackDialog mBFeedBackDialog = this.v;
        if (mBFeedBackDialog == null || mBFeedBackDialog.getContext() != activityA) {
            j();
        }
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        FeedBackButton feedBackButton = this.c;
        if (feedBackButton != null) {
            contextJ = feedBackButton.getContext();
        }
        int i = b.a().a(this.a, contextJ, this.v) ? 2 : 3;
        if (i == 2) {
            b.a().a(this.a, 0, 2, y);
        } else {
            b.a().a(this.a, 0, 3, y);
        }
        List<a> list = this.w;
        if (list != null) {
            for (a aVar : list) {
                if (aVar != null) {
                    aVar.a(i);
                }
            }
        }
    }

    public final void b() {
        MBFeedBackDialog mBFeedBackDialog = this.v;
        if (mBFeedBackDialog == null || !mBFeedBackDialog.isShowing()) {
            return;
        }
        this.v.cancel();
    }

    private void j() {
        try {
            if (b.a().a(com.mbridge.msdk.foundation.controller.a.f().j()) != null) {
                com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                if (aVarB == null) {
                    aVarB = com.mbridge.msdk.c.b.a().b();
                }
                a.b bVarAJ = aVarB.aJ();
                if (bVarAJ == null) {
                    z.b("", "feedback fbk is null");
                    return;
                }
                i();
                this.v = new MBFeedBackDialog(b.a().a(com.mbridge.msdk.foundation.controller.a.f().j()), this.x);
                FeedbackRadioGroup feedbackRadioGroupA = a(bVarAJ);
                this.v.setCancelText(bVarAJ.c());
                this.v.setConfirmText(bVarAJ.b());
                this.v.setTitle(bVarAJ.a());
                this.v.setContent(feedbackRadioGroupA);
                this.v.setCancelButtonClickable(!TextUtils.isEmpty(y));
                a(feedbackRadioGroupA, bVarAJ);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final void a(int i) {
        this.u = i;
        FeedBackButton feedBackButton = this.c;
        if (feedBackButton != null) {
            feedBackButton.setVisibility(i);
        }
    }

    private void a(FeedbackRadioGroup feedbackRadioGroup, a.b bVar) {
        ColorStateList colorStateList;
        JSONArray jSONArrayD = bVar.d();
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (jSONArrayD == null || jSONArrayD.length() <= 0 || contextJ == null) {
            return;
        }
        int iA = s.a(contextJ, "mbridge_cm_feedback_choice_btn_bg", i.c);
        Resources resourcesA = s.a(contextJ);
        int iA2 = s.a(contextJ, "mbridge_cm_feedback_rb_text_color_color_list", "color");
        if (resourcesA != null) {
            try {
                colorStateList = resourcesA.getColorStateList(iA2);
            } catch (Exception e) {
                e.printStackTrace();
                colorStateList = null;
            }
        } else {
            colorStateList = null;
        }
        int iB = ae.b(contextJ, 14.0f);
        int iB2 = ae.b(contextJ, 7.0f);
        int iB3 = ae.b(contextJ, 6.0f);
        for (int i = 0; i < jSONArrayD.length(); i++) {
            String strOptString = jSONArrayD.optString(i);
            RadioButton radioButton = new RadioButton(contextJ);
            radioButton.setButtonDrawable((Drawable) null);
            radioButton.setBackgroundResource(iA);
            radioButton.setText(strOptString);
            if (colorStateList != null) {
                radioButton.setTextColor(colorStateList);
            }
            radioButton.setPadding(iB, iB2, iB, iB2);
            RadioGroup.LayoutParams layoutParams = new RadioGroup.LayoutParams(-2, -2);
            int i2 = iB3 / 4;
            layoutParams.setMargins(iB3, i2, iB3, i2);
            a(radioButton);
            feedbackRadioGroup.addView(radioButton, layoutParams);
        }
    }

    private FeedbackRadioGroup a(a.b bVar) {
        JSONArray jSONArrayD = bVar.d();
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (jSONArrayD == null || jSONArrayD.length() <= 0 || contextJ == null) {
            return null;
        }
        FeedbackRadioGroup feedbackRadioGroup = new FeedbackRadioGroup(contextJ);
        feedbackRadioGroup.setOrientation(0);
        return feedbackRadioGroup;
    }

    private void a(RadioButton radioButton) {
        if (radioButton != null) {
            radioButton.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
                @Override
                public final void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                    if (z) {
                        String unused = a.y = (String) compoundButton.getText();
                    }
                    if (a.this.v != null) {
                        a.this.v.setCancelButtonClickable(!TextUtils.isEmpty(a.y));
                    }
                }
            });
        }
    }

    public final void a(a aVar) {
        if (this.w == null) {
            this.w = new ArrayList();
        }
        this.w.add(aVar);
    }

    private void k() {
        FeedBackButton feedBackButton = this.c;
        if (feedBackButton != null) {
            int i = this.f;
            if (i > -1) {
                feedBackButton.setX(i);
            }
            int i2 = this.g;
            if (i2 > -1) {
                this.c.setY(i2);
            }
            float f = this.r;
            if (f >= 0.0f) {
                this.c.setAlpha(f);
                this.c.setEnabled(this.r != 0.0f);
            }
            ViewGroup.LayoutParams layoutParams = this.c.getLayoutParams();
            int i3 = this.h;
            if (i3 > 0) {
                this.c.setWidth(i3);
                if (layoutParams != null) {
                    layoutParams.width = this.h;
                }
            }
            int i4 = this.i;
            if (i4 > 0) {
                this.c.setHeight(i4);
                if (layoutParams != null) {
                    layoutParams.height = this.i;
                }
            }
            if (layoutParams != null) {
                this.c.setLayoutParams(layoutParams);
            }
            try {
                if (!TextUtils.isEmpty(this.p)) {
                    this.c.setTextColor(Color.parseColor(this.p));
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            float f2 = this.j;
            if (f2 > 0.0f) {
                this.c.setTextSize(f2);
            }
            JSONArray jSONArray = this.k;
            if (jSONArray != null && jSONArray.length() == 4) {
                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                this.c.setPadding(ae.b(contextJ, (float) this.k.optDouble(0)), ae.b(contextJ, (float) this.k.optDouble(1)), ae.b(contextJ, (float) this.k.optDouble(2)), ae.b(contextJ, (float) this.k.optDouble(3)));
            }
            GradientDrawable gradientDrawable = new GradientDrawable();
            int i5 = this.s;
            if (i5 > 0) {
                gradientDrawable.setCornerRadius(i5);
            }
            if (!TextUtils.isEmpty(this.q)) {
                gradientDrawable.setColor(Color.parseColor(this.q));
            } else {
                gradientDrawable.setColor(Color.parseColor(FeedBackButton.FEEDBACK_BTN_BACKGROUND_COLOR_STR));
            }
            this.c.setBackground(gradientDrawable);
        }
    }

    public final void a(int i, int i2, int i3, int i4, int i5, float f, String str, String str2, float f2, JSONArray jSONArray) {
        if (i > -1) {
            this.f = i;
        }
        if (i2 > -1) {
            this.g = i2;
        }
        if (i3 > -1) {
            this.h = i3;
        }
        if (i4 > -1) {
            this.i = i4;
        }
        if (f2 > -1.0f) {
            this.j = f2;
        }
        if (jSONArray != null) {
            this.k = jSONArray;
        }
        this.p = str;
        this.q = str2;
        this.r = f;
        this.s = i5;
        k();
    }

    private void l() {
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (contextJ != null) {
            try {
                FeedBackButton feedBackButton = new FeedBackButton(contextJ);
                this.c = feedBackButton;
                int i = 8;
                if (this.u != 8) {
                    i = 0;
                }
                feedBackButton.setVisibility(i);
                this.c.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        a.this.a();
                    }
                });
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public final FeedBackButton c() {
        if (this.c == null) {
            l();
        }
        return this.c;
    }

    public final void d() {
        FeedBackButton feedBackButton = this.c;
        if (feedBackButton != null) {
            feedBackButton.setOnClickListener(null);
            this.c.setVisibility(8);
            ViewGroup viewGroup = (ViewGroup) this.c.getParent();
            if (viewGroup != null) {
                viewGroup.removeView(this.c);
            }
        }
        MBFeedBackDialog mBFeedBackDialog = this.v;
        if (mBFeedBackDialog != null) {
            mBFeedBackDialog.cancel();
            this.v.setListener(null);
        }
        this.v = null;
        this.w = null;
        this.c = null;
        this.x = null;
    }

    public final CampaignEx e() {
        return this.b;
    }

    public final void a(CampaignEx campaignEx) {
        this.b = campaignEx;
    }

    public final int f() {
        return this.d;
    }

    public final void b(int i) {
        this.d = i;
    }

    public final int g() {
        return this.e;
    }

    public final void c(int i) {
        this.e = i;
    }

    public static class a implements com.mbridge.msdk.widget.dialog.a {
        private com.mbridge.msdk.foundation.b.a a;
        private String b;

        @Override
        public final void c() {
        }

        public a(String str, com.mbridge.msdk.foundation.b.a aVar) {
            this.a = aVar;
            this.b = str;
        }

        @Override
        public final void a() {
            b.c = false;
            com.mbridge.msdk.foundation.b.a aVar = this.a;
            if (aVar != null) {
                aVar.a(a.y);
            }
        }

        @Override
        public final void b() {
            b.c = false;
            com.mbridge.msdk.foundation.b.a aVar = this.a;
            if (aVar != null) {
                aVar.b();
            }
        }

        public final void a(int i) {
            b.c = true;
            com.mbridge.msdk.foundation.b.a aVar = this.a;
            if (aVar == null || i != 2) {
                return;
            }
            aVar.a();
        }
    }

    public final void a(FeedBackButton feedBackButton) {
        FeedBackButton feedBackButton2 = this.c;
        if (feedBackButton2 != null) {
            feedBackButton2.setVisibility(8);
        }
        if (feedBackButton != null) {
            feedBackButton.setAlpha(this.r);
            feedBackButton.setEnabled(this.r != 0.0f);
            feedBackButton.setVisibility(this.u != 8 ? 0 : 8);
            this.c = feedBackButton;
            CampaignEx campaignEx = this.b;
            if (campaignEx != null && !campaignEx.isDynamicView()) {
                k();
            }
            feedBackButton.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    a.this.a();
                }
            });
        }
    }

    static void a(a aVar) {
        b.a().a(aVar.a, 1, 4, y);
        List<a> list = aVar.w;
        if (list != null) {
            for (a aVar2 : list) {
                if (aVar2 != null) {
                    aVar2.a();
                }
            }
        }
        y = "";
    }

    static void b(a aVar) {
        b.a().a(aVar.a, 0, 4, y);
        List<a> list = aVar.w;
        if (list != null) {
            for (a aVar2 : list) {
                if (aVar2 != null) {
                    aVar2.b();
                }
            }
        }
        y = "";
    }

    static void c(a aVar) {
        List<a> list = aVar.w;
        if (list != null) {
            for (a aVar2 : list) {
                if (aVar2 != null) {
                    aVar2.c();
                }
            }
        }
    }
}
