package android.support.v7.util;

public interface ListUpdateCallback {
    void onChanged(int r1, int r2, java.lang.Object r3);

    void onInserted(int r1, int r2);

    void onMoved(int r1, int r2);

    void onRemoved(int r1, int r2);
}
