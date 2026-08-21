package com.tkay.nativead.a;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.h;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;

public final class c extends h {
    @Override
    public final void a(TYBaseAdAdapter tYBaseAdAdapter) {
        aj unitGroupInfo;
        if (tYBaseAdAdapter == null || (unitGroupInfo = tYBaseAdAdapter.getUnitGroupInfo()) == null || !(tYBaseAdAdapter instanceof CustomNativeAdapter)) {
            return;
        }
        ((CustomNativeAdapter) tYBaseAdAdapter).setRequestNum(unitGroupInfo.r());
    }

    protected c(Context context) {
        super(context);
    }

    @Override
    public final void h() {
        super.h();
    }

    @Override
    public final void a(AdError adError) {
        super.a(adError);
    }
}
