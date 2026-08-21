package android.support.v7.util;

interface ThreadUtil<T> {

    public interface BackgroundCallback<T> {
        void loadTile(int r1, int r2);

        void recycleTile(android.support.v7.util.TileList.Tile<T> r1);

        void refresh(int r1);

        void updateRange(int r1, int r2, int r3, int r4, int r5);
    }

    public interface MainThreadCallback<T> {
        void addTile(int r1, android.support.v7.util.TileList.Tile<T> r2);

        void removeTile(int r1, int r2);

        void updateItemCount(int r1, int r2);
    }

    android.support.v7.util.ThreadUtil.BackgroundCallback<T> getBackgroundProxy(android.support.v7.util.ThreadUtil.BackgroundCallback<T> r1);

    android.support.v7.util.ThreadUtil.MainThreadCallback<T> getMainThreadProxy(android.support.v7.util.ThreadUtil.MainThreadCallback<T> r1);
}
