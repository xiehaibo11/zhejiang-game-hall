package com.tkay.network.toutiao;

import android.util.Log;
import android.view.View;
import com.bykv.vk.openvk.TTNtExpressObject;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class TTTYNativeExpressHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final String f7757a = TTTYNativeExpressHandler.class.getSimpleName();
    final List<TTNtExpressObject> b;
    final List<TTNtExpressObject> c = new ArrayList();

    public interface RenderCallback {
        void onRenderFail(String str, int i);

        void onRenderSuccess(List<TTNtExpressObject> list);
    }

    public TTTYNativeExpressHandler(List<TTNtExpressObject> list) {
        this.b = list;
    }

    public void startRender(final RenderCallback renderCallback) {
        final int[] iArr = {this.b.size()};
        for (final TTNtExpressObject tTNtExpressObject : this.b) {
            tTNtExpressObject.setExpressInteractionListener(new TTNtExpressObject.ExpressNtInteractionListener() { // from class: com.tkay.network.toutiao.TTTYNativeExpressHandler.1
                @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
                public final void onClicked(View view, int i) {
                }

                @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
                public final void onShow(View view, int i) {
                }

                @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
                public final void onRenderFail(View view, String str, int i) {
                    Log.e(TTTYNativeExpressHandler.f7757a, String.format("onRenderFail, errorCode: %d, errorMsg: %s", Integer.valueOf(i), str));
                    int[] iArr2 = iArr;
                    iArr2[0] = iArr2[0] - 1;
                    if (iArr2[0] == 0) {
                        if (TTTYNativeExpressHandler.this.c.size() == 0) {
                            RenderCallback renderCallback2 = renderCallback;
                            if (renderCallback2 != null) {
                                renderCallback2.onRenderFail(str, i);
                                return;
                            }
                            return;
                        }
                        RenderCallback renderCallback3 = renderCallback;
                        if (renderCallback3 != null) {
                            renderCallback3.onRenderSuccess(TTTYNativeExpressHandler.this.c);
                        }
                        TTTYNativeExpressHandler.this.c.clear();
                        TTTYNativeExpressHandler.this.b.clear();
                    }
                }

                @Override // com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener
                public final void onRenderSuccess(View view, float f, float f2) {
                    Log.i(TTTYNativeExpressHandler.f7757a, "onRenderSuccess()");
                    TTTYNativeExpressHandler.this.c.add(tTNtExpressObject);
                    int[] iArr2 = iArr;
                    iArr2[0] = iArr2[0] - 1;
                    if (iArr2[0] == 0) {
                        RenderCallback renderCallback2 = renderCallback;
                        if (renderCallback2 != null) {
                            renderCallback2.onRenderSuccess(TTTYNativeExpressHandler.this.c);
                        }
                        TTTYNativeExpressHandler.this.c.clear();
                        TTTYNativeExpressHandler.this.b.clear();
                    }
                }
            });
            tTNtExpressObject.render();
        }
    }
}
