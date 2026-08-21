package com.tkay.nativead.api;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public class TYNativeImageView extends ImageView {
    public static final String TAG = TYNativeImageView.class.getSimpleName();
    String mImageUrl;

    public TYNativeImageView(Context context) {
        super(context);
    }

    public TYNativeImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYNativeImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setImage(String str, int i, int i2) {
        if (TextUtils.isEmpty(str)) {
            Log.e(TAG, "load: url is empty!");
            return;
        }
        this.mImageUrl = str;
        final WeakReference weakReference = new WeakReference(this);
        b.a(getContext()).a(new e(2, str), i, i2, new b.a() { // from class: com.tkay.nativead.api.TYNativeImageView.1
            @Override // com.tkay.core.common.res.b.a
            public final void onSuccess(String str2, Bitmap bitmap) {
                TYNativeImageView tYNativeImageView = (TYNativeImageView) weakReference.get();
                if (!TextUtils.equals(TYNativeImageView.this.mImageUrl, str2) || tYNativeImageView == null) {
                    return;
                }
                tYNativeImageView.setImageBitmap(bitmap);
            }

            @Override // com.tkay.core.common.res.b.a
            public final void onFail(String str2, String str3) {
                Log.e(TYNativeImageView.TAG, "load: image load fail:".concat(String.valueOf(str3)));
            }
        });
    }

    public void setImage(String str) {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams != null) {
            setImage(str, layoutParams.width, layoutParams.height);
        } else {
            setImage(str, -1, -1);
        }
    }

    @Override // android.view.View
    protected void dispatchDraw(Canvas canvas) {
        try {
            super.dispatchDraw(canvas);
        } catch (Throwable unused) {
        }
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        try {
            super.onDraw(canvas);
        } catch (Throwable unused) {
        }
    }
}
