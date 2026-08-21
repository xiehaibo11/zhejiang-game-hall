package android.support.v7.view.menu;

class BaseWrapper<T> {
    final T mWrappedObject;

    BaseWrapper(T r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.mWrappedObject = r2
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Wrapped Object can not be null."
            r2.<init>(r0)
            throw r2
    }

    public T getWrappedObject() {
            r1 = this;
            T r0 = r1.mWrappedObject
            return r0
    }
}
