package kotlin;

import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.core.api.TYAdConst;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

@Metadata(d1 = {"\u0000\u001a\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\u001a0\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0012\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00060\u0005H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0002\u0010\u0007\u001a\u001f\u0010\b\u001a\u00020\u00012\n\u0010\t\u001a\u00020\u0001\"\u00020\u0006H\u0087\bø\u0001\u0000¢\u0006\u0004\b\n\u0010\u000b\u0082\u0002\u000b\n\u0002\b\u0019\n\u0005\b\u009920\u0001¨\u0006\f"}, d2 = {"UShortArray", "Lkotlin/UShortArray;", TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE, "", PointCategory.INIT, "Lkotlin/Function1;", "Lkotlin/UShort;", "(ILkotlin/jvm/functions/Function1;)[S", "ushortArrayOf", "elements", "ushortArrayOf-rL5Bavg", "([S)[S", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class UShortArrayKt {
    private static final short[] ushortArrayOf-rL5Bavg(short... elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        return elements;
    }

    private static final short[] UShortArray(int i, Function1<? super Integer, UShort> init) {
        Intrinsics.checkNotNullParameter(init, "init");
        short[] sArr = new short[i];
        for (int i2 = 0; i2 < i; i2++) {
            sArr[i2] = init.invoke(Integer.valueOf(i2)).getData();
        }
        return UShortArray.constructor-impl(sArr);
    }
}
