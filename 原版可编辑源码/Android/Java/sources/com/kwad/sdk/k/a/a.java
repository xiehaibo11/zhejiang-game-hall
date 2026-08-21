package com.kwad.sdk.k.a;

import android.content.Context;
import java.util.Iterator;
import java.util.List;

public abstract class a implements c {
    protected List<c> aGk;
    protected boolean enabled;

    public a() {
        this.enabled = true;
    }

    public a(boolean z) {
        this.enabled = z;
    }

    private List<c> getChildren() {
        return this.aGk;
    }

    @Override
    public final boolean bA(Context context) {
        if (!this.enabled) {
            return false;
        }
        List<c> children = getChildren();
        if (children == null || children.size() <= 0) {
            try {
                return bB(context);
            } catch (Throwable unused) {
                return false;
            }
        }
        Iterator<c> it = children.iterator();
        while (it.hasNext()) {
            if (it.next().bA(context)) {
                return true;
            }
        }
        return false;
    }

    protected boolean bB(Context context) {
        return false;
    }
}
