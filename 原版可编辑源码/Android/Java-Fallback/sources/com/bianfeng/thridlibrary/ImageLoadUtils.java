package com.bianfeng.thridlibrary;

public class ImageLoadUtils {
    private static volatile com.bianfeng.thridlibrary.ImageLoadUtils utils;

    private ImageLoadUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean checkGif(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = ".gif"
            boolean r2 = r2.endsWith(r0)
            if (r2 == 0) goto La
            r2 = 1
            return r2
        La:
            r2 = 0
            return r2
    }

    public static com.bianfeng.thridlibrary.ImageLoadUtils getInstance() {
            com.bianfeng.thridlibrary.ImageLoadUtils r0 = com.bianfeng.thridlibrary.ImageLoadUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.thridlibrary.ImageLoadUtils> r0 = com.bianfeng.thridlibrary.ImageLoadUtils.class
            monitor-enter(r0)
            com.bianfeng.thridlibrary.ImageLoadUtils r1 = com.bianfeng.thridlibrary.ImageLoadUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.thridlibrary.ImageLoadUtils r1 = new com.bianfeng.thridlibrary.ImageLoadUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.thridlibrary.ImageLoadUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.thridlibrary.ImageLoadUtils r0 = com.bianfeng.thridlibrary.ImageLoadUtils.utils
            return r0
    }

    public void displayImage(android.app.Activity r2, java.lang.String r3, android.widget.ImageView r4) {
            r1 = this;
            boolean r0 = r1.checkGif(r3)
            if (r0 == 0) goto L16
            com.bumptech.glide.RequestManager r2 = com.bumptech.glide.Glide.with(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = r2.load(r3)
            com.bumptech.glide.GifTypeRequest r2 = r2.asGif()
            r2.into(r4)
            goto L21
        L16:
            com.bumptech.glide.RequestManager r2 = com.bumptech.glide.Glide.with(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = r2.load(r3)
            r2.into(r4)
        L21:
            return
    }
}
