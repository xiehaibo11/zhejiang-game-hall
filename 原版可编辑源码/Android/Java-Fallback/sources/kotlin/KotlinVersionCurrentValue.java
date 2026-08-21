package kotlin;

@kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\bÂ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\b\u0010\u0003\u001a\u00020\u0004H\u0007¨\u0006\u0005"}, d2 = {"Lkotlin/KotlinVersionCurrentValue;", "", "()V", "get", "Lkotlin/KotlinVersion;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class KotlinVersionCurrentValue {
    public static final kotlin.KotlinVersionCurrentValue INSTANCE = null;

    static {
            kotlin.KotlinVersionCurrentValue r0 = new kotlin.KotlinVersionCurrentValue
            r0.<init>()
            kotlin.KotlinVersionCurrentValue.INSTANCE = r0
            return
    }

    private KotlinVersionCurrentValue() {
            r0 = this;
            r0.<init>()
            return
    }

    @kotlin.jvm.JvmStatic
    public static final kotlin.KotlinVersion get() {
            kotlin.KotlinVersion r0 = new kotlin.KotlinVersion
            r1 = 1
            r2 = 6
            r3 = 20
            r0.<init>(r1, r2, r3)
            return r0
    }
}
