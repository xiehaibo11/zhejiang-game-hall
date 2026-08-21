package android.support.v4.view;

public final class LayoutInflaterCompat {
    private static final java.lang.String TAG = "LayoutInflaterCompatHC";
    private static boolean sCheckedField;
    private static java.lang.reflect.Field sLayoutInflaterFactory2Field;

    static class Factory2Wrapper implements android.view.LayoutInflater.Factory2 {
        final android.support.v4.view.LayoutInflaterFactory mDelegateFactory;

        Factory2Wrapper(android.support.v4.view.LayoutInflaterFactory r1) {
                r0 = this;
                r0.<init>()
                r0.mDelegateFactory = r1
                return
        }

        @Override
        public android.view.View onCreateView(android.view.View r2, java.lang.String r3, android.content.Context r4, android.util.AttributeSet r5) {
                r1 = this;
                android.support.v4.view.LayoutInflaterFactory r0 = r1.mDelegateFactory
                android.view.View r2 = r0.onCreateView(r2, r3, r4, r5)
                return r2
        }

        @Override
        public android.view.View onCreateView(java.lang.String r3, android.content.Context r4, android.util.AttributeSet r5) {
                r2 = this;
                android.support.v4.view.LayoutInflaterFactory r0 = r2.mDelegateFactory
                r1 = 0
                android.view.View r3 = r0.onCreateView(r1, r3, r4, r5)
                return r3
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.Class r1 = r2.getClass()
                java.lang.String r1 = r1.getName()
                r0.append(r1)
                java.lang.String r1 = "{"
                r0.append(r1)
                android.support.v4.view.LayoutInflaterFactory r1 = r2.mDelegateFactory
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private LayoutInflaterCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void forceSetFactory2(android.view.LayoutInflater r6, android.view.LayoutInflater.Factory2 r7) {
            boolean r0 = android.support.v4.view.LayoutInflaterCompat.sCheckedField
            java.lang.String r1 = "; inflation may have unexpected results."
            java.lang.String r2 = "LayoutInflaterCompatHC"
            if (r0 != 0) goto L37
            r0 = 1
            java.lang.Class<android.view.LayoutInflater> r3 = android.view.LayoutInflater.class
            java.lang.String r4 = "mFactory2"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> L17
            android.support.v4.view.LayoutInflaterCompat.sLayoutInflaterFactory2Field = r3     // Catch: java.lang.NoSuchFieldException -> L17
            r3.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L17
            goto L35
        L17:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "forceSetFactory2 Could not find field 'mFactory2' on class "
            r4.append(r5)
            java.lang.Class<android.view.LayoutInflater> r5 = android.view.LayoutInflater.class
            java.lang.String r5 = r5.getName()
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            android.util.Log.e(r2, r4, r3)
        L35:
            android.support.v4.view.LayoutInflaterCompat.sCheckedField = r0
        L37:
            java.lang.reflect.Field r0 = android.support.v4.view.LayoutInflaterCompat.sLayoutInflaterFactory2Field
            if (r0 == 0) goto L57
            r0.set(r6, r7)     // Catch: java.lang.IllegalAccessException -> L3f
            goto L57
        L3f:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "forceSetFactory2 could not set the Factory2 on LayoutInflater "
            r0.append(r3)
            r0.append(r6)
            r0.append(r1)
            java.lang.String r6 = r0.toString()
            android.util.Log.e(r2, r6, r7)
        L57:
            return
    }

    @java.lang.Deprecated
    public static android.support.v4.view.LayoutInflaterFactory getFactory(android.view.LayoutInflater r1) {
            android.view.LayoutInflater$Factory r1 = r1.getFactory()
            boolean r0 = r1 instanceof android.support.v4.view.LayoutInflaterCompat.Factory2Wrapper
            if (r0 == 0) goto Ld
            android.support.v4.view.LayoutInflaterCompat$Factory2Wrapper r1 = (android.support.v4.view.LayoutInflaterCompat.Factory2Wrapper) r1
            android.support.v4.view.LayoutInflaterFactory r1 = r1.mDelegateFactory
            return r1
        Ld:
            r1 = 0
            return r1
    }

    @java.lang.Deprecated
    public static void setFactory(android.view.LayoutInflater r3, android.support.v4.view.LayoutInflaterFactory r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 21
            if (r0 < r2) goto L12
            if (r4 == 0) goto Le
            android.support.v4.view.LayoutInflaterCompat$Factory2Wrapper r1 = new android.support.v4.view.LayoutInflaterCompat$Factory2Wrapper
            r1.<init>(r4)
        Le:
            r3.setFactory2(r1)
            goto L2d
        L12:
            if (r4 == 0) goto L19
            android.support.v4.view.LayoutInflaterCompat$Factory2Wrapper r1 = new android.support.v4.view.LayoutInflaterCompat$Factory2Wrapper
            r1.<init>(r4)
        L19:
            r3.setFactory2(r1)
            android.view.LayoutInflater$Factory r4 = r3.getFactory()
            boolean r0 = r4 instanceof android.view.LayoutInflater.Factory2
            if (r0 == 0) goto L2a
            android.view.LayoutInflater$Factory2 r4 = (android.view.LayoutInflater.Factory2) r4
            forceSetFactory2(r3, r4)
            goto L2d
        L2a:
            forceSetFactory2(r3, r1)
        L2d:
            return
    }

    public static void setFactory2(android.view.LayoutInflater r2, android.view.LayoutInflater.Factory2 r3) {
            r2.setFactory2(r3)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L1a
            android.view.LayoutInflater$Factory r0 = r2.getFactory()
            boolean r1 = r0 instanceof android.view.LayoutInflater.Factory2
            if (r1 == 0) goto L17
            android.view.LayoutInflater$Factory2 r0 = (android.view.LayoutInflater.Factory2) r0
            forceSetFactory2(r2, r0)
            goto L1a
        L17:
            forceSetFactory2(r2, r3)
        L1a:
            return
    }
}
