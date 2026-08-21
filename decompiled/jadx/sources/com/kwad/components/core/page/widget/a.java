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

/* JADX INFO: loaded from: classes2.dex */
public final class a extends Dialog {
    private final InterfaceC0163a OJ;
    private final String OK;

    /* JADX INFO: renamed from: com.kwad.components.core.page.widget.a$a, reason: collision with other inner class name */
    public interface InterfaceC0163a {
        void a(DialogInterface dialogInterface);

        void b(DialogInterface dialogInterface);

        void c(DialogInterface dialogInterface);
    }

    public a(Context context, InterfaceC0163a interfaceC0163a) {
        this(context, null, interfaceC0163a);
    }

    public a(Context context, String str, InterfaceC0163a interfaceC0163a) {
        super(context);
        if (context instanceof Activity) {
            setOwnerActivity((Activity) context);
        }
        this.OJ = interfaceC0163a;
        this.OK = str;
    }

    private View pt() {
        View viewInflate = l.inflate(getContext(), R.layout.ksad_web_exit_intercept_content_layout, null);
        viewInflate.findViewById(R.id.ksad_exit_intercept_dialog_layout).setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.widget.a.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                a.this.OJ.c(a.this);
            }
        });
        viewInflate.findViewById(R.id.ksad_exit_intercept_content_layout).setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.widget.a.2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
            }
        });
        viewInflate.findViewById(R.id.ksad_web_exit_intercept_positive_btn).setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.widget.a.3
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                a.this.OJ.a(a.this);
            }
        });
        viewInflate.findViewById(R.id.ksad_web_exit_intercept_negative_btn).setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.widget.a.4
            @Override // android.view.View.OnClickListener
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

    @Override // android.app.Dialog
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
