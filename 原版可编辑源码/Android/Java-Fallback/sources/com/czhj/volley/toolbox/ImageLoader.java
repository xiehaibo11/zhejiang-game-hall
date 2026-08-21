package com.czhj.volley.toolbox;

public class ImageLoader {
    private final com.czhj.volley.RequestQueue a;
    private final com.czhj.volley.toolbox.ImageLoader.ImageCache b;
    private final java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest> c;
    private final java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest> d;
    private final android.os.Handler e;
    private int f;
    private java.lang.Runnable g;





    private static class BatchedImageRequest {
        private final com.czhj.volley.Request<?> a;
        private final java.util.List<com.czhj.volley.toolbox.ImageLoader.ImageContainer> b;
        private android.graphics.Bitmap c;
        private com.czhj.volley.VolleyError d;

        public BatchedImageRequest(com.czhj.volley.Request<?> r2, com.czhj.volley.toolbox.ImageLoader.ImageContainer r3) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.b = r0
                r1.a = r2
                r0.add(r3)
                return
        }

        static android.graphics.Bitmap a(com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest r0, android.graphics.Bitmap r1) {
                r0.c = r1
                return r1
        }

        static java.util.List a(com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest r0) {
                java.util.List<com.czhj.volley.toolbox.ImageLoader$ImageContainer> r0 = r0.b
                return r0
        }

        static android.graphics.Bitmap b(com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest r0) {
                android.graphics.Bitmap r0 = r0.c
                return r0
        }

        public void addContainer(com.czhj.volley.toolbox.ImageLoader.ImageContainer r2) {
                r1 = this;
                java.util.List<com.czhj.volley.toolbox.ImageLoader$ImageContainer> r0 = r1.b
                r0.add(r2)
                return
        }

        public com.czhj.volley.VolleyError getError() {
                r1 = this;
                com.czhj.volley.VolleyError r0 = r1.d
                return r0
        }

        public boolean removeContainerAndCancelIfNecessary(com.czhj.volley.toolbox.ImageLoader.ImageContainer r2) {
                r1 = this;
                java.util.List<com.czhj.volley.toolbox.ImageLoader$ImageContainer> r0 = r1.b
                r0.remove(r2)
                java.util.List<com.czhj.volley.toolbox.ImageLoader$ImageContainer> r2 = r1.b
                int r2 = r2.size()
                if (r2 != 0) goto L14
                com.czhj.volley.Request<?> r2 = r1.a
                r2.cancel()
                r2 = 1
                return r2
            L14:
                r2 = 0
                return r2
        }

        public void setError(com.czhj.volley.VolleyError r1) {
                r0 = this;
                r0.d = r1
                return
        }
    }

    public interface ImageCache {
        android.graphics.Bitmap getBitmap(java.lang.String r1);

        void putBitmap(java.lang.String r1, android.graphics.Bitmap r2);
    }

    public class ImageContainer {
        final com.czhj.volley.toolbox.ImageLoader a;
        private final com.czhj.volley.toolbox.ImageLoader.ImageListener b;
        private final java.lang.String c;
        private final java.lang.String d;
        private android.graphics.Bitmap e;

        public ImageContainer(com.czhj.volley.toolbox.ImageLoader r1, android.graphics.Bitmap r2, java.lang.String r3, java.lang.String r4, com.czhj.volley.toolbox.ImageLoader.ImageListener r5) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.e = r2
                r0.d = r3
                r0.c = r4
                r0.b = r5
                return
        }

        static android.graphics.Bitmap a(com.czhj.volley.toolbox.ImageLoader.ImageContainer r0, android.graphics.Bitmap r1) {
                r0.e = r1
                return r1
        }

        static com.czhj.volley.toolbox.ImageLoader.ImageListener a(com.czhj.volley.toolbox.ImageLoader.ImageContainer r0) {
                com.czhj.volley.toolbox.ImageLoader$ImageListener r0 = r0.b
                return r0
        }

        public void cancelRequest() {
                r2 = this;
                com.czhj.volley.toolbox.Threads.a()
                com.czhj.volley.toolbox.ImageLoader$ImageListener r0 = r2.b
                if (r0 != 0) goto L8
                return
            L8:
                com.czhj.volley.toolbox.ImageLoader r0 = r2.a
                java.util.HashMap r0 = com.czhj.volley.toolbox.ImageLoader.b(r0)
                java.lang.String r1 = r2.c
                java.lang.Object r0 = r0.get(r1)
                com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest r0 = (com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest) r0
                if (r0 == 0) goto L25
                boolean r0 = r0.removeContainerAndCancelIfNecessary(r2)
                if (r0 == 0) goto L4d
                com.czhj.volley.toolbox.ImageLoader r0 = r2.a
                java.util.HashMap r0 = com.czhj.volley.toolbox.ImageLoader.b(r0)
                goto L48
            L25:
                com.czhj.volley.toolbox.ImageLoader r0 = r2.a
                java.util.HashMap r0 = com.czhj.volley.toolbox.ImageLoader.a(r0)
                java.lang.String r1 = r2.c
                java.lang.Object r0 = r0.get(r1)
                com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest r0 = (com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest) r0
                if (r0 == 0) goto L4d
                r0.removeContainerAndCancelIfNecessary(r2)
                java.util.List r0 = com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest.a(r0)
                int r0 = r0.size()
                if (r0 != 0) goto L4d
                com.czhj.volley.toolbox.ImageLoader r0 = r2.a
                java.util.HashMap r0 = com.czhj.volley.toolbox.ImageLoader.a(r0)
            L48:
                java.lang.String r1 = r2.c
                r0.remove(r1)
            L4d:
                return
        }

        public android.graphics.Bitmap getBitmap() {
                r1 = this;
                android.graphics.Bitmap r0 = r1.e
                return r0
        }

        public java.lang.String getRequestUrl() {
                r1 = this;
                java.lang.String r0 = r1.d
                return r0
        }
    }

    public interface ImageListener extends com.czhj.volley.Response.ErrorListener {
        void onResponse(com.czhj.volley.toolbox.ImageLoader.ImageContainer r1, boolean r2);
    }

    public ImageLoader(com.czhj.volley.RequestQueue r3, com.czhj.volley.toolbox.ImageLoader.ImageCache r4) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.d = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.e = r0
            r0 = 100
            r2.f = r0
            r2.a = r3
            r2.b = r4
            return
    }

    static java.lang.Runnable a(com.czhj.volley.toolbox.ImageLoader r0, java.lang.Runnable r1) {
            r0.g = r1
            return r1
    }

    private static java.lang.String a(java.lang.String r2, int r3, int r4, android.widget.ImageView.ScaleType r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r2.length()
            int r1 = r1 + 12
            r0.<init>(r1)
            java.lang.String r1 = "#W"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "#H"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = "#S"
            r0.append(r3)
            int r3 = r5.ordinal()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    static java.util.HashMap a(com.czhj.volley.toolbox.ImageLoader r0) {
            java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest> r0 = r0.d
            return r0
    }

    private void a(java.lang.String r3, com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest> r0 = r2.d
            r0.put(r3, r4)
            java.lang.Runnable r3 = r2.g
            if (r3 != 0) goto L18
            com.czhj.volley.toolbox.ImageLoader$4 r3 = new com.czhj.volley.toolbox.ImageLoader$4
            r3.<init>(r2)
            r2.g = r3
            android.os.Handler r4 = r2.e
            int r0 = r2.f
            long r0 = (long) r0
            r4.postDelayed(r3, r0)
        L18:
            return
    }

    static java.util.HashMap b(com.czhj.volley.toolbox.ImageLoader r0) {
            java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest> r0 = r0.c
            return r0
    }

    public static com.czhj.volley.toolbox.ImageLoader.ImageListener getImageListener(android.widget.ImageView r1, int r2, int r3) {
            com.czhj.volley.toolbox.ImageLoader$1 r0 = new com.czhj.volley.toolbox.ImageLoader$1
            r0.<init>(r3, r1, r2)
            return r0
    }

    public com.czhj.volley.toolbox.ImageLoader.ImageContainer get(java.lang.String r2, com.czhj.volley.toolbox.ImageLoader.ImageListener r3) {
            r1 = this;
            r0 = 0
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r2 = r1.get(r2, r3, r0, r0)
            return r2
    }

    public com.czhj.volley.toolbox.ImageLoader.ImageContainer get(java.lang.String r7, com.czhj.volley.toolbox.ImageLoader.ImageListener r8, int r9, int r10) {
            r6 = this;
            android.widget.ImageView$ScaleType r5 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r7 = r0.get(r1, r2, r3, r4, r5)
            return r7
    }

    public com.czhj.volley.toolbox.ImageLoader.ImageContainer get(java.lang.String r16, com.czhj.volley.toolbox.ImageLoader.ImageListener r17, int r18, int r19, android.widget.ImageView.ScaleType r20) {
            r15 = this;
            r6 = r15
            r7 = r17
            com.czhj.volley.toolbox.Threads.a()
            r8 = r16
            r9 = r18
            r10 = r19
            r11 = r20
            java.lang.String r12 = a(r8, r9, r10, r11)
            com.czhj.volley.toolbox.ImageLoader$ImageCache r0 = r6.b
            android.graphics.Bitmap r2 = r0.getBitmap(r12)
            r13 = 1
            if (r2 == 0) goto L2a
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r9 = new com.czhj.volley.toolbox.ImageLoader$ImageContainer
            r4 = 0
            r5 = 0
            r0 = r9
            r1 = r15
            r3 = r16
            r0.<init>(r1, r2, r3, r4, r5)
            r7.onResponse(r9, r13)
            return r9
        L2a:
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r14 = new com.czhj.volley.toolbox.ImageLoader$ImageContainer
            r2 = 0
            r0 = r14
            r1 = r15
            r3 = r16
            r4 = r12
            r5 = r17
            r0.<init>(r1, r2, r3, r4, r5)
            r7.onResponse(r14, r13)
            java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest> r0 = r6.c
            java.lang.Object r0 = r0.get(r12)
            com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest r0 = (com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest) r0
            if (r0 == 0) goto L48
            r0.addContainer(r14)
            return r14
        L48:
            r0 = r15
            r1 = r16
            r2 = r18
            r3 = r19
            r4 = r20
            r5 = r12
            com.czhj.volley.Request r0 = r0.makeImageRequest(r1, r2, r3, r4, r5)
            com.czhj.volley.RequestQueue r1 = r6.a
            if (r1 == 0) goto L67
            r1.add(r0)
            java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest> r1 = r6.c
            com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest r2 = new com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest
            r2.<init>(r0, r14)
            r1.put(r12, r2)
        L67:
            return r14
    }

    public boolean isCached(java.lang.String r2, int r3, int r4) {
            r1 = this;
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            boolean r2 = r1.isCached(r2, r3, r4, r0)
            return r2
    }

    public boolean isCached(java.lang.String r1, int r2, int r3, android.widget.ImageView.ScaleType r4) {
            r0 = this;
            com.czhj.volley.toolbox.Threads.a()
            java.lang.String r1 = a(r1, r2, r3, r4)
            com.czhj.volley.toolbox.ImageLoader$ImageCache r2 = r0.b
            android.graphics.Bitmap r1 = r2.getBitmap(r1)
            if (r1 == 0) goto L11
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            return r1
    }

    protected com.czhj.volley.Request<android.graphics.Bitmap> makeImageRequest(java.lang.String r10, int r11, int r12, android.widget.ImageView.ScaleType r13, java.lang.String r14) {
            r9 = this;
            com.czhj.volley.toolbox.ImageRequest r8 = new com.czhj.volley.toolbox.ImageRequest
            com.czhj.volley.toolbox.ImageLoader$2 r2 = new com.czhj.volley.toolbox.ImageLoader$2
            r2.<init>(r9, r14)
            android.graphics.Bitmap$Config r6 = android.graphics.Bitmap.Config.RGB_565
            com.czhj.volley.toolbox.ImageLoader$3 r7 = new com.czhj.volley.toolbox.ImageLoader$3
            r7.<init>(r9, r14)
            r0 = r8
            r1 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    protected void onGetImageError(java.lang.String r2, com.czhj.volley.VolleyError r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest> r0 = r1.c
            java.lang.Object r0 = r0.remove(r2)
            com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest r0 = (com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest) r0
            if (r0 == 0) goto L10
            r0.setError(r3)
            r1.a(r2, r0)
        L10:
            return
    }

    protected void onGetImageSuccess(java.lang.String r2, android.graphics.Bitmap r3) {
            r1 = this;
            com.czhj.volley.toolbox.ImageLoader$ImageCache r0 = r1.b
            r0.putBitmap(r2, r3)
            java.util.HashMap<java.lang.String, com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest> r0 = r1.c
            java.lang.Object r0 = r0.remove(r2)
            com.czhj.volley.toolbox.ImageLoader$BatchedImageRequest r0 = (com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest) r0
            if (r0 == 0) goto L15
            com.czhj.volley.toolbox.ImageLoader.BatchedImageRequest.a(r0, r3)
            r1.a(r2, r0)
        L15:
            return
    }

    public void setBatchedResponseDelay(int r1) {
            r0 = this;
            r0.f = r1
            return
    }
}
