package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;

public class b implements com.mbridge.msdk.video.js.b {
    private static final String a = b.class.getSimpleName();

    @Override
    public void click(int i, String str) {
        z.a(a, "click");
    }

    @Override
    public void handlerH5Exception(int i, String str) {
        z.a(a, "handlerH5Exception");
    }

    @Override
    public void reactDeveloper(Object obj, String str) {
        z.a(a, "reactDeveloper");
    }
}
