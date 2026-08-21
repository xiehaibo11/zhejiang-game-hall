package android.support.v7.view.menu;

class BaseWrapper<T> {
    final T mWrappedObject;

    BaseWrapper(T r2) {
        if (r2 == null) goto L7;
        this.mWrappedObject = r2;
        return;
    L7:
        throw new IllegalArgumentException("Wrapped Object can not be null.");
    }

    public T getWrappedObject() {
        return this.mWrappedObject;
    }
}
