package com.kwad.components.core.page.widget;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.m.l;

public final class a extends Dialog {
    private final a OJ;
    private final String OK;

    public interface a {
        void a(DialogInterface dialogInterface);

        void b(DialogInterface dialogInterface);

        void c(DialogInterface dialogInterface);
    }

    public a(Context context, a aVar) {
        this(context, null, aVar);
    }

    public a(Context context, String str, a aVar) {
        super(context);
        if (context instanceof Activity) {
            setOwnerActivity((Activity) context);
        }
        this.OJ = aVar;
        this.OK = str;
    }

    private View pt() {
        View viewInflate = l.inflate(getContext(), R.layout.ksad_web_exit_intercept_content_layout, null);
        viewInflate.findViewById(R.id.ksad_exit_intercept_dialog_layout).setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                a.this.OJ.c(a.this);
            }
        });
        viewInflate.findViewById(R.id.ksad_exit_intercept_content_layout).setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
            }
        });
        viewInflate.findViewById(R.id.ksad_web_exit_intercept_positive_btn).setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                a.this.OJ.a(a.this);
            }
        });
        viewInflate.findViewById(R.id.ksad_web_exit_intercept_negative_btn).setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                a.this.OJ.b(a.this);
            }
        });
        TextView textView = (TextView) viewInflate.findViewById(R.id.ksad_exit_intercept_content);
        if (!TextUtils.isEmpty(this.OK)) {
            textView.setText(this.OK);
        }
        return viewInflate;
    }

    @Override
    protected final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        requestWindowFeature(1);
        setContentView(pt());
        setCanceledOnTouchOutside(false);
        getWindow().setBackgroundDrawable(new ColorDrawable(0));
        getWindow().setLayout(-1, -1);
        setCancelable(false);
    }
}
