package com.kwad.components.core.b;

import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.sdk.R;

public final class a implements View.OnClickListener {
    private TextView HZ;
    private ImageView Ia;
    private ImageView Ib;
    private a Ic;
    private ViewGroup sw;

    public interface a {
        void t(View view);

        void u(View view);
    }

    public a(ViewGroup viewGroup) {
        if (viewGroup == null) {
            return;
        }
        ViewGroup viewGroup2 = (ViewGroup) viewGroup.findViewById(R.id.ksad_kwad_web_title_bar);
        this.sw = viewGroup2;
        if (viewGroup2 == null) {
            return;
        }
        initView();
    }

    private void initView() {
        this.HZ = (TextView) this.sw.findViewById(R.id.ksad_kwad_titlebar_title);
        this.Ia = (ImageView) this.sw.findViewById(R.id.ksad_kwad_web_navi_back);
        ImageView imageView = (ImageView) this.sw.findViewById(R.id.ksad_kwad_web_navi_close);
        this.Ib = imageView;
        imageView.setOnClickListener(this);
        this.Ia.setOnClickListener(this);
    }

    public final void a(a aVar) {
        this.Ic = aVar;
    }

    public final void a(b bVar) {
        TextView textView;
        if (this.sw == null || (textView = this.HZ) == null) {
            return;
        }
        textView.setText(bVar.getTitle());
    }

    public final void aj(boolean z) {
        ImageView imageView = this.Ib;
        if (imageView != null) {
            imageView.setVisibility(z ? 0 : 8);
        }
    }

    public final ViewGroup gQ() {
        return this.sw;
    }

    @Override
    public final void onClick(View view) {
        if (this.Ic == null) {
            return;
        }
        if (view.equals(this.Ib)) {
            this.Ic.u(view);
        } else if (view.equals(this.Ia)) {
            this.Ic.t(view);
        }
    }
}
