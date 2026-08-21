package com.sigmob.sdk.base.common;

public class f {
    private static final java.lang.Integer b = null;
    private static final java.lang.Integer c = null;
    private static final java.lang.Integer d = null;
    private static final java.lang.Integer e = null;
    private static final long f = 512000;
    private static final long g = 61440;
    private static com.sigmob.sdk.base.common.f h;
    private static java.util.Map<java.lang.String, com.sigmob.sdk.base.models.BaseAdUnit> i;
    private static com.sigmob.sdk.videocache.h j;
    private static java.util.HashMap<java.lang.String, java.lang.Integer> k;
    private static volatile com.czhj.sdk.common.utils.ImageManager l;
    private static java.util.Map<java.lang.String, java.util.List<com.sigmob.sdk.base.models.BaseAdUnit>> v;
    final com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener a;
    private java.util.Map<java.lang.String, java.lang.String> m;
    private java.util.HashMap<java.lang.String, java.lang.Long> n;
    private java.util.HashSet<com.sigmob.sdk.base.common.f.a> o;
    private java.util.ArrayList<com.sigmob.sdk.base.models.BaseAdUnit> p;
    private java.util.HashMap<java.lang.String, com.czhj.sdk.common.models.AdCache> q;
    private java.lang.String r;
    private java.lang.String s;
    private java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.sigmob.sdk.base.common.f.b>> t;
    private java.util.HashMap<java.lang.String, com.czhj.sdk.common.models.AdCache> u;





    public interface a {
        com.sigmob.sdk.base.models.BaseAdUnit a();

        void a(com.sigmob.sdk.base.models.BaseAdUnit r1);

        void b(com.sigmob.sdk.base.models.BaseAdUnit r1);
    }

    public interface b {
        void a(com.sigmob.sdk.base.models.BaseAdUnit r1);

        void a(com.sigmob.sdk.base.models.BaseAdUnit r1, java.lang.String r2);
    }

    class c extends android.os.AsyncTask<java.lang.Object, java.lang.Void, java.lang.String> {
        final com.sigmob.sdk.base.common.f a;
        private com.czhj.volley.toolbox.DownloadItem b;

        c(com.sigmob.sdk.base.common.f r1, com.czhj.volley.toolbox.DownloadItem r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.b = r1
                r0.b = r2
                return
        }

        protected java.lang.String a(java.lang.Object... r8) {
                r7 = this;
                com.czhj.volley.toolbox.DownloadItem r8 = r7.b
                if (r8 != 0) goto L10
                java.lang.String r8 = "Download Item is null"
                com.czhj.sdk.logger.SigmobLog.e(r8)
                com.sigmob.windad.WindAdError r8 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD
                java.lang.String r8 = r8.toString()
                return r8
            L10:
                com.czhj.volley.VolleyError r8 = r8.error
                if (r8 == 0) goto L1d
                com.czhj.volley.toolbox.DownloadItem r8 = r7.b
                com.czhj.volley.VolleyError r8 = r8.error
                java.lang.String r8 = r8.toString()
                return r8
            L1d:
                com.czhj.volley.toolbox.DownloadItem r8 = r7.b
                java.lang.String r8 = r8.filePath
                java.lang.String r0 = com.czhj.sdk.common.utils.FileUtil.getExtensionName(r8)
                java.lang.String r1 = com.czhj.sdk.common.utils.Md5Util.fileMd5(r8)
                com.czhj.volley.toolbox.DownloadItem r2 = r7.b
                java.lang.String r2 = r2.md5
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                r3 = 0
                if (r2 != 0) goto L49
                com.czhj.volley.toolbox.DownloadItem r2 = r7.b
                java.lang.String r2 = r2.md5
                boolean r2 = r2.equalsIgnoreCase(r1)
                if (r2 != 0) goto L49
                com.czhj.volley.toolbox.DownloadItem r8 = r7.b
                r8.status = r3
                com.sigmob.windad.WindAdError r8 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_MD5
                java.lang.String r8 = r8.toString()
                return r8
            L49:
                com.czhj.volley.toolbox.DownloadItem r2 = r7.b
                com.czhj.volley.toolbox.DownloadItem$FileType r2 = r2.type
                com.czhj.volley.toolbox.DownloadItem$FileType r4 = com.czhj.volley.toolbox.DownloadItem.FileType.VIDEO
                r5 = 0
                r6 = 1
                if (r2 != r4) goto L61
                com.sigmob.sdk.base.common.f r0 = r7.a
                java.util.Map r0 = com.sigmob.sdk.base.common.f.b(r0)
                r0.put(r8, r1)
                com.czhj.volley.toolbox.DownloadItem r8 = r7.b
                r8.status = r6
                goto L88
            L61:
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 != 0) goto L9c
                java.lang.String r1 = "tgz"
                boolean r0 = r0.equalsIgnoreCase(r1)
                if (r0 == 0) goto L9c
                java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L89
                r0.<init>(r8)     // Catch: java.lang.Throwable -> L89
                java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L89
                java.lang.String r2 = ".tgz"
                java.lang.String r4 = "/"
                java.lang.String r8 = r8.replace(r2, r4)     // Catch: java.lang.Throwable -> L89
                r1.<init>(r8)     // Catch: java.lang.Throwable -> L89
                com.sigmob.sdk.base.utils.a.a(r0, r1)     // Catch: java.lang.Throwable -> L89
                com.czhj.volley.toolbox.DownloadItem r8 = r7.b     // Catch: java.lang.Throwable -> L89
                r8.status = r6     // Catch: java.lang.Throwable -> L89
            L88:
                return r5
            L89:
                r8 = move-exception
                com.czhj.volley.toolbox.DownloadItem r0 = r7.b
                r0.status = r3
                java.lang.String r8 = r8.getMessage()
                com.czhj.sdk.logger.SigmobLog.e(r8)
                com.sigmob.windad.WindAdError r8 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD
                java.lang.String r8 = r8.toString()
                return r8
            L9c:
                com.czhj.volley.toolbox.DownloadItem r8 = r7.b
                com.czhj.volley.toolbox.DownloadItem$FileType r8 = r8.type
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = com.czhj.volley.toolbox.DownloadItem.FileType.MRAID_VIDEO
                if (r8 != r0) goto La5
                return r5
            La5:
                com.czhj.volley.toolbox.DownloadItem r8 = r7.b
                r8.status = r3
                com.sigmob.windad.WindAdError r8 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE
                java.lang.String r8 = r8.toString()
                return r8
        }

        protected void a(java.lang.String r7) {
                r6 = this;
                super.onPostExecute(r7)
                boolean r0 = android.text.TextUtils.isEmpty(r7)
                if (r0 != 0) goto L10
                com.czhj.volley.toolbox.DownloadItem r0 = r6.b
                java.lang.String r0 = r0.filePath
                com.czhj.sdk.common.utils.FileUtil.deleteFile(r0)
            L10:
                java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
                com.sigmob.sdk.base.common.f r1 = r6.a
                java.util.ArrayList r1 = com.sigmob.sdk.base.common.f.c(r1)
                r0.<init>(r1)
                java.util.Iterator r0 = r0.iterator()
            L1f:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L90
                java.lang.Object r1 = r0.next()
                com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1
                com.sigmob.sdk.base.common.f r2 = r6.a
                java.util.HashMap r2 = com.sigmob.sdk.base.common.f.d(r2)
                java.lang.String r3 = r1.getUuid()
                java.lang.Object r2 = r2.get(r3)
                java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2
                r3 = 0
                if (r2 == 0) goto L45
                java.lang.Object r2 = r2.get()
                r3 = r2
                com.sigmob.sdk.base.common.f$b r3 = (com.sigmob.sdk.base.common.f.b) r3
            L45:
                com.czhj.volley.toolbox.DownloadItem r2 = r6.b
                com.czhj.volley.toolbox.DownloadItem$FileType r2 = r2.type
                com.czhj.volley.toolbox.DownloadItem$FileType r4 = com.czhj.volley.toolbox.DownloadItem.FileType.VIDEO
                r5 = 0
                if (r2 != r4) goto L67
                java.lang.String r2 = r1.getVideoPath()
                com.czhj.volley.toolbox.DownloadItem r4 = r6.b
                java.lang.String r4 = r4.filePath
                boolean r2 = r2.equals(r4)
                if (r2 == 0) goto L67
            L5c:
                com.czhj.volley.toolbox.DownloadItem r2 = r6.b
                com.sigmob.sdk.base.common.z.a(r2, r1, r7, r5)
            L61:
                com.sigmob.sdk.base.common.f r2 = r6.a
                com.sigmob.sdk.base.common.f.a(r2, r1, r7, r3)
                goto L1f
            L67:
                com.czhj.volley.toolbox.DownloadItem r2 = r6.b
                com.czhj.volley.toolbox.DownloadItem$FileType r2 = r2.type
                com.czhj.volley.toolbox.DownloadItem$FileType r4 = com.czhj.volley.toolbox.DownloadItem.FileType.FILE
                if (r2 != r4) goto L7e
                java.lang.String r2 = r1.getEndCardZipPath()
                com.czhj.volley.toolbox.DownloadItem r4 = r6.b
                java.lang.String r4 = r4.filePath
                boolean r2 = r2.equals(r4)
                if (r2 == 0) goto L7e
                goto L86
            L7e:
                com.czhj.volley.toolbox.DownloadItem r2 = r6.b
                com.czhj.volley.toolbox.DownloadItem$FileType r2 = r2.type
                com.czhj.volley.toolbox.DownloadItem$FileType r4 = com.czhj.volley.toolbox.DownloadItem.FileType.ZIP_FILE
                if (r2 != r4) goto L87
            L86:
                goto L61
            L87:
                com.czhj.volley.toolbox.DownloadItem r2 = r6.b
                com.czhj.volley.toolbox.DownloadItem$FileType r2 = r2.type
                com.czhj.volley.toolbox.DownloadItem$FileType r4 = com.czhj.volley.toolbox.DownloadItem.FileType.MRAID_VIDEO
                if (r2 != r4) goto L1f
                goto L5c
            L90:
                return
        }

        @Override
        protected java.lang.String doInBackground(java.lang.Object[] r1) {
                r0 = this;
                java.lang.String r1 = r0.a(r1)
                return r1
        }

        @Override
        protected void onPostExecute(java.lang.String r1) {
                r0 = this;
                java.lang.String r1 = (java.lang.String) r1
                r0.a(r1)
                return
        }
    }

    private class d extends android.os.AsyncTask<java.lang.Object, java.lang.Void, java.util.ArrayList<com.czhj.volley.toolbox.DownloadItem>> {
        com.sigmob.sdk.base.models.BaseAdUnit a;
        final com.sigmob.sdk.base.common.f b;


        d(com.sigmob.sdk.base.common.f r1, com.sigmob.sdk.base.models.BaseAdUnit r2) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                r0.a = r2
                return
        }

        private com.czhj.volley.toolbox.DownloadItem a(com.sigmob.sdk.base.models.rtb.Template r5) {
                r4 = this;
                com.czhj.wire.okio.ByteString r0 = r5.context
                java.lang.String r0 = r0.utf8()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L50
                com.czhj.wire.okio.ByteString r0 = r5.context
                java.lang.String r0 = r0.utf8()
                java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r0)
                java.lang.String r1 = com.sigmob.sdk.base.utils.b.c
                java.io.File r1 = com.sigmob.sdk.base.utils.b.c(r1)
                java.io.File r2 = new java.io.File
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                java.lang.String r0 = ".tgz"
                r3.append(r0)
                java.lang.String r0 = r3.toString()
                r2.<init>(r1, r0)
                boolean r0 = r2.exists()
                if (r0 != 0) goto L50
                com.czhj.volley.toolbox.DownloadItem r0 = new com.czhj.volley.toolbox.DownloadItem
                r0.<init>()
                com.czhj.wire.okio.ByteString r5 = r5.context
                java.lang.String r5 = r5.utf8()
                r0.url = r5
                java.lang.String r5 = r2.getAbsolutePath()
                r0.filePath = r5
                com.czhj.volley.toolbox.DownloadItem$FileType r5 = com.czhj.volley.toolbox.DownloadItem.FileType.ZIP_FILE
                r0.type = r5
                goto L51
            L50:
                r0 = 0
            L51:
                return r0
        }

        protected java.util.ArrayList<com.czhj.volley.toolbox.DownloadItem> a(java.lang.Object... r8) {
                r7 = this;
                java.util.ArrayList r8 = new java.util.ArrayList
                r8.<init>()
                com.sigmob.sdk.base.models.BaseAdUnit r0 = r7.a
                r1 = 0
                if (r0 == 0) goto L208
                com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
                if (r0 != 0) goto L12
                goto L208
            L12:
                com.sigmob.sdk.base.models.BaseAdUnit r0 = r7.a
                com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
                r2 = 0
                com.sigmob.sdk.base.models.BaseAdUnit r4 = r7.a
                java.lang.String r4 = r4.getVideo_url()
                boolean r4 = android.text.TextUtils.isEmpty(r4)
                if (r4 != 0) goto Ldf
                com.sigmob.sdk.base.models.BaseAdUnit r4 = r7.a
                boolean r4 = r4.isVideoExist()
                if (r4 == 0) goto L79
                com.sigmob.sdk.base.models.BaseAdUnit r4 = r7.a
                java.lang.String r4 = r4.getVideoPath()
                java.lang.String r4 = com.czhj.sdk.common.utils.Md5Util.fileMd5(r4)
                com.sigmob.sdk.base.models.BaseAdUnit r5 = r7.a
                java.lang.String r5 = r5.getVideo_OriginMD5()
                boolean r5 = android.text.TextUtils.isEmpty(r5)
                if (r5 != 0) goto L5a
                com.sigmob.sdk.base.models.BaseAdUnit r5 = r7.a
                java.lang.String r5 = r5.getVideo_OriginMD5()
                boolean r5 = r5.equalsIgnoreCase(r4)
                if (r5 != 0) goto L5a
                com.sigmob.sdk.base.models.BaseAdUnit r5 = r7.a
                java.lang.String r5 = r5.getVideoPath()
                com.czhj.sdk.common.utils.FileUtil.deleteFile(r5)
                goto L7a
            L5a:
                com.sigmob.sdk.base.common.f r2 = r7.b
                java.util.Map r2 = com.sigmob.sdk.base.common.f.b(r2)
                com.sigmob.sdk.base.models.BaseAdUnit r3 = r7.a
                java.lang.String r3 = r3.getVideoPath()
                r2.put(r3, r4)
                java.io.File r2 = new java.io.File
                com.sigmob.sdk.base.models.BaseAdUnit r3 = r7.a
                java.lang.String r3 = r3.getVideoPath()
                r2.<init>(r3)
                long r2 = r2.length()
                goto L7a
            L79:
                r4 = r1
            L7a:
                com.sigmob.sdk.base.models.BaseAdUnit r5 = r7.a
                boolean r5 = r5.checkVideoValid()
                com.czhj.volley.toolbox.DownloadItem r6 = new com.czhj.volley.toolbox.DownloadItem
                r6.<init>()
                if (r5 == 0) goto Lb0
                com.sigmob.sdk.base.models.BaseAdUnit r5 = r7.a
                boolean r5 = r5.isVideoExist()
                if (r5 == 0) goto Lb0
                com.sigmob.sdk.base.models.BaseAdUnit r5 = r7.a
                java.lang.String r5 = r5.getVideo_url()
                r6.url = r5
                com.sigmob.sdk.base.models.BaseAdUnit r5 = r7.a
                java.lang.String r5 = r5.getVideoPath()
                r6.filePath = r5
                com.czhj.volley.toolbox.DownloadItem$FileType r5 = com.czhj.volley.toolbox.DownloadItem.FileType.VIDEO
                r6.type = r5
                r6.md5 = r4
                r6.size = r2
                r2 = 1
                r6.status = r2
                com.sigmob.sdk.base.models.BaseAdUnit r3 = r7.a
                com.sigmob.sdk.base.common.z.a(r6, r3, r1, r2)
                goto Ldf
            Lb0:
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                int r1 = r1.getPlayMode()
                r2 = 2
                if (r1 == r2) goto Ldf
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                java.lang.String r1 = r1.getVideo_url()
                r6.url = r1
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                java.lang.String r1 = r1.getVideoPath()
                r6.filePath = r1
                com.czhj.volley.toolbox.DownloadItem$FileType r1 = com.czhj.volley.toolbox.DownloadItem.FileType.VIDEO
                r6.type = r1
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                java.lang.String r1 = r1.getVideo_OriginMD5()
                r6.md5 = r1
                com.sigmob.sdk.base.common.f r1 = r7.b
                com.sigmob.sdk.base.models.BaseAdUnit r2 = r7.a
                com.sigmob.sdk.base.common.f.a(r1, r6, r2)
                r8.add(r6)
            Ldf:
                java.lang.Integer r1 = r0.creative_type
                int r1 = r1.intValue()
                com.sigmob.sdk.base.common.l r2 = com.sigmob.sdk.base.common.l.a
                int r2 = r2.a()
                if (r1 != r2) goto L111
                com.czhj.volley.toolbox.DownloadItem r1 = new com.czhj.volley.toolbox.DownloadItem
                r1.<init>()
                com.sigmob.sdk.base.models.BaseAdUnit r2 = r7.a
                java.lang.String r2 = r2.getEndcard_url()
                r1.url = r2
                com.sigmob.sdk.base.models.BaseAdUnit r2 = r7.a
                java.lang.String r2 = r2.getEndCardZipPath()
                r1.filePath = r2
                com.czhj.volley.toolbox.DownloadItem$FileType r2 = com.czhj.volley.toolbox.DownloadItem.FileType.FILE
                r1.type = r2
                com.sigmob.sdk.base.models.BaseAdUnit r2 = r7.a
                java.lang.String r2 = r2.getEndCard_OriginMD5()
                r1.md5 = r2
                r8.add(r1)
            L111:
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                com.sigmob.sdk.base.models.rtb.Template r1 = r1.scene
                r2 = 3
                if (r1 == 0) goto L131
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                com.sigmob.sdk.base.models.rtb.Template r1 = r1.scene
                java.lang.Integer r1 = r1.type
                int r1 = r1.intValue()
                if (r1 != r2) goto L131
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                com.sigmob.sdk.base.models.rtb.Template r1 = r1.scene
                com.czhj.volley.toolbox.DownloadItem r1 = r7.a(r1)
                if (r1 == 0) goto L131
                r8.add(r1)
            L131:
                com.sigmob.sdk.base.models.rtb.Template r1 = r0.main_template
                if (r1 == 0) goto L14a
                com.sigmob.sdk.base.models.rtb.Template r1 = r0.main_template
                java.lang.Integer r1 = r1.type
                int r1 = r1.intValue()
                if (r1 != r2) goto L14a
                com.sigmob.sdk.base.models.rtb.Template r1 = r0.main_template
                com.czhj.volley.toolbox.DownloadItem r1 = r7.a(r1)
                if (r1 == 0) goto L14a
                r8.add(r1)
            L14a:
                com.sigmob.sdk.base.models.rtb.Template r1 = r0.sub_template
                if (r1 == 0) goto L163
                com.sigmob.sdk.base.models.rtb.Template r1 = r0.sub_template
                java.lang.Integer r1 = r1.type
                int r1 = r1.intValue()
                if (r1 != r2) goto L163
                com.sigmob.sdk.base.models.rtb.Template r1 = r0.sub_template
                com.czhj.volley.toolbox.DownloadItem r1 = r7.a(r1)
                if (r1 == 0) goto L163
                r8.add(r1)
            L163:
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                boolean r1 = r1.isCatchVideo()
                if (r1 == 0) goto L1cc
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r0.asset
                if (r1 == 0) goto L1cc
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r0.asset
                int r1 = r1.size()
                if (r1 <= 0) goto L1cc
                r1 = 0
            L178:
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r2 = r0.asset
                int r2 = r2.size()
                if (r1 >= r2) goto L1cc
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r2 = r0.asset
                java.lang.Object r2 = r2.get(r1)
                com.sigmob.sdk.base.models.rtb.ResponseAsset r2 = (com.sigmob.sdk.base.models.rtb.ResponseAsset) r2
                if (r2 == 0) goto L1c9
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r3 = r2.video
                if (r3 == 0) goto L1c9
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r3 = r2.video
                java.lang.String r3 = r3.url
                boolean r3 = android.text.TextUtils.isEmpty(r3)
                if (r3 != 0) goto L1c9
                com.sigmob.sdk.videocache.h r3 = com.sigmob.sdk.base.common.f.c()
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r4 = r2.video
                java.lang.String r4 = r4.url
                java.io.File r3 = r3.c(r4)
                boolean r4 = r3.exists()
                if (r4 != 0) goto L1c9
                com.czhj.volley.toolbox.DownloadItem r4 = new com.czhj.volley.toolbox.DownloadItem
                r4.<init>()
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r2 = r2.video
                java.lang.String r2 = r2.url
                r4.url = r2
                java.lang.String r2 = r3.getAbsolutePath()
                r4.filePath = r2
                com.czhj.volley.toolbox.DownloadItem$FileType r2 = com.czhj.volley.toolbox.DownloadItem.FileType.MRAID_VIDEO
                r4.type = r2
                com.sigmob.sdk.base.common.f r2 = r7.b
                com.sigmob.sdk.base.models.BaseAdUnit r3 = r7.a
                com.sigmob.sdk.base.common.f.a(r2, r4, r3)
                r8.add(r4)
            L1c9:
                int r1 = r1 + 1
                goto L178
            L1cc:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "cache() adUnit = ["
                r0.append(r1)
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                java.lang.String r1 = r1.getCrid()
                r0.append(r1)
                java.lang.String r1 = "] videoUrl = ["
                r0.append(r1)
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                java.lang.String r1 = r1.getVideo_url()
                r0.append(r1)
                java.lang.String r1 = "] endcardUrl = ["
                r0.append(r1)
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r7.a
                java.lang.String r1 = r1.getEndcard_url()
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.czhj.sdk.logger.SigmobLog.d(r0)
                return r8
            L208:
                return r1
        }

        protected void a(java.util.ArrayList<com.czhj.volley.toolbox.DownloadItem> r9) {
                r8 = this;
                super.onPostExecute(r9)
                com.sigmob.sdk.base.models.BaseAdUnit r0 = r8.a
                if (r0 != 0) goto L8
                return
            L8:
                com.sigmob.sdk.base.common.f r0 = r8.b
                java.util.HashMap r0 = com.sigmob.sdk.base.common.f.d(r0)
                com.sigmob.sdk.base.models.BaseAdUnit r1 = r8.a
                java.lang.String r1 = r1.getUuid()
                java.lang.Object r0 = r0.get(r1)
                java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
                r1 = 0
                if (r0 == 0) goto L24
                java.lang.Object r0 = r0.get()
                com.sigmob.sdk.base.common.f$b r0 = (com.sigmob.sdk.base.common.f.b) r0
                goto L25
            L24:
                r0 = r1
            L25:
                r2 = 0
                if (r9 == 0) goto Lcd
                int r3 = r9.size()
                if (r3 != 0) goto L30
                goto Lcd
            L30:
                com.czhj.volley.toolbox.FileDownloader r0 = com.sigmob.sdk.base.common.p.a()
                com.sigmob.sdk.base.common.f r1 = r8.b
                java.util.ArrayList r1 = com.sigmob.sdk.base.common.f.c(r1)
                java.util.Iterator r1 = r1.iterator()
            L3e:
                boolean r3 = r1.hasNext()
                if (r3 == 0) goto L5c
                java.lang.Object r3 = r1.next()
                com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
                java.lang.String r3 = r3.getUuid()
                com.sigmob.sdk.base.models.BaseAdUnit r4 = r8.a
                java.lang.String r4 = r4.getUuid()
                boolean r3 = r3.equals(r4)
                if (r3 == 0) goto L3e
                r1 = 1
                goto L5d
            L5c:
                r1 = r2
            L5d:
                if (r1 != 0) goto L6a
                com.sigmob.sdk.base.common.f r1 = r8.b
                java.util.ArrayList r1 = com.sigmob.sdk.base.common.f.c(r1)
                com.sigmob.sdk.base.models.BaseAdUnit r3 = r8.a
                r1.add(r3)
            L6a:
                java.util.Iterator r1 = r9.iterator()
            L6e:
                boolean r3 = r1.hasNext()
                if (r3 == 0) goto Ld4
                java.lang.Object r3 = r1.next()
                com.czhj.volley.toolbox.DownloadItem r3 = (com.czhj.volley.toolbox.DownloadItem) r3
                java.lang.String r4 = r3.url
                java.lang.String r4 = com.czhj.sdk.common.utils.Md5Util.md5(r4)
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r6 = "downloader add  item "
                r5.append(r6)
                java.lang.String r6 = r3.url
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                com.czhj.sdk.logger.SigmobLog.d(r5)
                com.czhj.volley.toolbox.DownloadItem$FileType r5 = r3.type
                com.czhj.volley.toolbox.DownloadItem$FileType r6 = com.czhj.volley.toolbox.DownloadItem.FileType.VIDEO
                if (r5 == r6) goto L6e
                java.util.HashMap r5 = com.sigmob.sdk.base.common.f.n()
                java.lang.Object r5 = r5.get(r4)
                if (r5 == 0) goto Lba
                java.util.HashMap r5 = com.sigmob.sdk.base.common.f.n()
                java.lang.Object r5 = r5.get(r4)
                java.lang.Integer r5 = (java.lang.Integer) r5
                java.lang.Integer r6 = com.sigmob.sdk.base.common.f.m()
                boolean r5 = r5.equals(r6)
                if (r5 == 0) goto L6e
            Lba:
                java.util.HashMap r5 = com.sigmob.sdk.base.common.f.n()
                java.lang.Integer r6 = com.sigmob.sdk.base.common.f.p()
                r5.put(r4, r6)
                com.sigmob.sdk.base.common.f r4 = r8.b
                com.czhj.volley.toolbox.FileDownloadRequest$FileDownloadListener r4 = r4.a
                r0.add(r3, r4)
                goto L6e
            Lcd:
                if (r0 == 0) goto Ld4
                com.sigmob.sdk.base.models.BaseAdUnit r3 = r8.a
                r0.a(r3, r1)
            Ld4:
                com.sigmob.sdk.base.models.BaseAdUnit r0 = r8.a
                com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r0.getMaterial()
                if (r0 == 0) goto L195
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r0.ad_privacy
                if (r1 == 0) goto L195
                com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r0.ad_privacy
                java.lang.String r0 = r0.privacy_template_url
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 != 0) goto L195
                java.lang.String r1 = com.czhj.sdk.common.utils.Md5Util.md5(r0)
                java.lang.String r3 = com.sigmob.sdk.base.utils.b.b
                java.io.File r3 = com.sigmob.sdk.base.utils.b.b(r3)
                java.io.File r4 = new java.io.File
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                r5.append(r1)
                java.lang.String r6 = ".html"
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                r4.<init>(r3, r5)
                boolean r5 = r4.exists()
                if (r5 != 0) goto L17c
                boolean r1 = r3.exists()     // Catch: java.lang.Exception -> L157
                if (r1 == 0) goto L15b
                boolean r1 = r3.isDirectory()     // Catch: java.lang.Exception -> L157
                if (r1 == 0) goto L15b
                java.io.File[] r1 = r3.listFiles()     // Catch: java.lang.Exception -> L157
                int r3 = r1.length     // Catch: java.lang.Exception -> L157
            L121:
                if (r2 >= r3) goto L15b
                r5 = r1[r2]     // Catch: java.lang.Exception -> L157
                boolean r6 = r5.exists()     // Catch: java.lang.Exception -> L157
                if (r6 == 0) goto L154
                boolean r6 = r5.isFile()     // Catch: java.lang.Exception -> L157
                if (r6 == 0) goto L154
                boolean r6 = r5.delete()     // Catch: java.lang.Exception -> L157
                if (r6 == 0) goto L154
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L157
                r6.<init>()     // Catch: java.lang.Exception -> L157
                java.lang.String r7 = "删除单个文件"
                r6.append(r7)     // Catch: java.lang.Exception -> L157
                java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.Exception -> L157
                r6.append(r5)     // Catch: java.lang.Exception -> L157
                java.lang.String r5 = "成功！"
                r6.append(r5)     // Catch: java.lang.Exception -> L157
                java.lang.String r5 = r6.toString()     // Catch: java.lang.Exception -> L157
                com.czhj.sdk.logger.SigmobLog.d(r5)     // Catch: java.lang.Exception -> L157
            L154:
                int r2 = r2 + 1
                goto L121
            L157:
                r1 = move-exception
                r1.printStackTrace()
            L15b:
                com.czhj.volley.toolbox.DownloadItem r1 = new com.czhj.volley.toolbox.DownloadItem
                r1.<init>()
                r1.url = r0
                java.lang.String r0 = r4.getAbsolutePath()
                r1.filePath = r0
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = com.czhj.volley.toolbox.DownloadItem.FileType.OTHER
                r1.type = r0
                r9.add(r1)
                com.czhj.volley.toolbox.FileDownloader r9 = com.sigmob.sdk.base.common.p.a()
                com.sigmob.sdk.base.common.f$d$1 r0 = new com.sigmob.sdk.base.common.f$d$1
                r0.<init>(r8)
                r9.add(r1, r0)
                goto L195
            L17c:
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                r9.<init>()
                java.lang.String r0 = "privacy_template_url:"
                r9.append(r0)
                r9.append(r1)
                java.lang.String r0 = " is exists"
                r9.append(r0)
                java.lang.String r9 = r9.toString()
                com.czhj.sdk.logger.SigmobLog.i(r9)
            L195:
                return
        }

        @Override
        protected java.util.ArrayList<com.czhj.volley.toolbox.DownloadItem> doInBackground(java.lang.Object[] r1) {
                r0 = this;
                java.util.ArrayList r1 = r0.a(r1)
                return r1
        }

        @Override
        protected void onPostExecute(java.util.ArrayList<com.czhj.volley.toolbox.DownloadItem> r1) {
                r0 = this;
                java.util.ArrayList r1 = (java.util.ArrayList) r1
                r0.a(r1)
                return
        }
    }

    static {
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.common.f.b = r0
            r0 = 1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.common.f.c = r0
            r0 = 2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.common.f.d = r0
            r0 = 3
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.common.f.e = r0
            r0 = 0
            com.sigmob.sdk.base.common.f.h = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.sigmob.sdk.base.common.f.i = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.sigmob.sdk.base.common.f.k = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.sigmob.sdk.base.common.f.v = r0
            return
    }

    private f() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.m = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.n = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.o = r0
            com.sigmob.sdk.base.common.f$1 r0 = new com.sigmob.sdk.base.common.f$1
            r0.<init>(r1)
            r1.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.p = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.q = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.t = r0
            return
    }

    public static synchronized com.czhj.sdk.common.utils.ImageManager a() {
            java.lang.Class<com.sigmob.sdk.base.common.f> r0 = com.sigmob.sdk.base.common.f.class
            monitor-enter(r0)
            com.czhj.sdk.common.utils.ImageManager r1 = com.sigmob.sdk.base.common.f.l     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L2b
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = com.sigmob.sdk.base.utils.b.e()     // Catch: java.lang.Throwable -> L2f
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2f
            java.lang.Class<com.czhj.sdk.common.utils.ImageManager> r2 = com.czhj.sdk.common.utils.ImageManager.class
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L2f
            com.czhj.sdk.common.utils.ImageManager r3 = com.sigmob.sdk.base.common.f.l     // Catch: java.lang.Throwable -> L28
            if (r3 != 0) goto L26
            com.czhj.sdk.common.utils.ImageManager r3 = new com.czhj.sdk.common.utils.ImageManager     // Catch: java.lang.Throwable -> L28
            android.content.Context r4 = com.sigmob.sdk.b.b()     // Catch: java.lang.Throwable -> L28
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L28
            com.czhj.sdk.common.utils.ImageManager r1 = r3.customCachePath(r1)     // Catch: java.lang.Throwable -> L28
            com.sigmob.sdk.base.common.f.l = r1     // Catch: java.lang.Throwable -> L28
        L26:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L28
            goto L2b
        L28:
            r1 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L28
            throw r1     // Catch: java.lang.Throwable -> L2f
        L2b:
            com.czhj.sdk.common.utils.ImageManager r1 = com.sigmob.sdk.base.common.f.l     // Catch: java.lang.Throwable -> L2f
            monitor-exit(r0)
            return r1
        L2f:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static com.sigmob.sdk.base.models.BaseAdUnit a(java.lang.String r1) {
            java.util.Map<java.lang.String, com.sigmob.sdk.base.models.BaseAdUnit> r0 = com.sigmob.sdk.base.common.f.i
            java.lang.Object r1 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1
            return r1
    }

    static java.util.HashSet a(com.sigmob.sdk.base.common.f r0) {
            java.util.HashSet<com.sigmob.sdk.base.common.f$a> r0 = r0.o
            return r0
    }

    private void a(com.czhj.volley.toolbox.DownloadItem r4, com.sigmob.sdk.base.models.BaseAdUnit r5) {
            r3 = this;
            com.sigmob.sdk.videocache.h r5 = com.sigmob.sdk.base.common.f.j
            if (r5 == 0) goto L2f
            java.lang.String r5 = r4.url
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L2f
            com.sigmob.sdk.videocache.h r0 = com.sigmob.sdk.base.common.f.j
            boolean r0 = r0.b(r5)
            if (r0 != 0) goto L2f
            com.sigmob.sdk.videocache.h r0 = com.sigmob.sdk.base.common.f.j
            java.lang.String r0 = r0.a(r5)
            com.sigmob.sdk.videocache.h r1 = com.sigmob.sdk.base.common.f.j
            com.sigmob.sdk.base.common.f$2 r2 = new com.sigmob.sdk.base.common.f$2
            r2.<init>(r3, r4)
            r1.a(r2, r5)
            android.content.Context r4 = com.sigmob.sdk.b.b()
            com.sigmob.sdk.videocache.v r4 = com.sigmob.sdk.videocache.v.a(r4)
            r4.a(r0)
        L2f:
            return
    }

    static void a(com.sigmob.sdk.base.common.f r0, com.czhj.volley.toolbox.DownloadItem r1, com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.sigmob.sdk.base.common.f r0, com.sigmob.sdk.base.models.BaseAdUnit r1, java.lang.String r2, com.sigmob.sdk.base.common.f.b r3) {
            r0.a(r1, r2, r3)
            return
    }

    public static void a(com.sigmob.sdk.base.models.BaseAdUnit r0) {
            b(r0)
            return
    }

    private void a(com.sigmob.sdk.base.models.BaseAdUnit r1, java.lang.String r2, com.sigmob.sdk.base.common.f.b r3) {
            r0 = this;
            if (r2 != 0) goto L1a
            boolean r2 = r1.isVideoExist()
            if (r2 == 0) goto L19
            boolean r2 = r1.isEndCardIndexExist()
            if (r2 != 0) goto Lf
            goto L19
        Lf:
            int r2 = r1.getPlayMode()
            if (r2 != 0) goto L1f
            if (r3 == 0) goto L1f
            r2 = 0
            goto L1c
        L19:
            return
        L1a:
            if (r3 == 0) goto L1f
        L1c:
            r3.a(r1, r2)
        L1f:
            java.util.ArrayList<com.sigmob.sdk.base.models.BaseAdUnit> r2 = r0.p
            r2.remove(r1)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.sigmob.sdk.base.common.f$b>> r2 = r0.t
            java.lang.String r1 = r1.getUuid()
            r2.remove(r1)
            return
    }

    public static void a(java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2) {
            if (r2 == 0) goto L18
            int r0 = r2.size()
            if (r0 <= 0) goto L18
            java.util.Map<java.lang.String, java.util.List<com.sigmob.sdk.base.models.BaseAdUnit>> r0 = com.sigmob.sdk.base.common.f.v
            r1 = 0
            java.lang.Object r1 = r2.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1
            java.lang.String r1 = r1.getUuid()
            r0.put(r1, r2)
        L18:
            return
    }

    public static java.io.File[] a(java.io.File[] r8, long r9, long r11) {
            if (r8 == 0) goto L50
            int r0 = r8.length
            if (r0 != 0) goto L6
            goto L50
        L6:
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r1 = java.util.Arrays.asList(r8)
            r0.<init>(r1)
            r1 = 0
            r2 = r1
        L11:
            int r3 = r8.length
            if (r2 >= r3) goto L47
            r3 = r8[r2]
            long r4 = r9 - r11
            boolean r6 = r3.exists()
            if (r6 == 0) goto L44
            long r6 = r3.lastModified()
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L44
            r3.delete()
            r0.remove(r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "file delete "
            r4.append(r5)
            java.lang.String r3 = r3.getName()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
        L44:
            int r2 = r2 + 1
            goto L11
        L47:
            java.io.File[] r8 = new java.io.File[r1]
            java.lang.Object[] r8 = r0.toArray(r8)
            java.io.File[] r8 = (java.io.File[]) r8
            return r8
        L50:
            r8 = 0
            return r8
    }

    public static java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> b(java.lang.String r1) {
            java.util.Map<java.lang.String, java.util.List<com.sigmob.sdk.base.models.BaseAdUnit>> r0 = com.sigmob.sdk.base.common.f.v
            java.lang.Object r1 = r0.get(r1)
            java.util.List r1 = (java.util.List) r1
            return r1
    }

    static java.util.Map b(com.sigmob.sdk.base.common.f r0) {
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.m
            return r0
    }

    public static void b() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.a     // Catch: java.lang.Throwable -> L11
            java.io.File r0 = com.sigmob.sdk.base.utils.b.b(r0)     // Catch: java.lang.Throwable -> L11
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L11
            com.czhj.sdk.common.utils.FileUtil.deleteDirectory(r0)     // Catch: java.lang.Throwable -> L11
            q()     // Catch: java.lang.Throwable -> L11
            goto L19
        L11:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L19:
            return
    }

    public static void b(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            if (r2 == 0) goto L15
            java.lang.String r0 = r2.getUuid()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L15
            java.util.Map<java.lang.String, com.sigmob.sdk.base.models.BaseAdUnit> r0 = com.sigmob.sdk.base.common.f.i
            java.lang.String r1 = r2.getUuid()
            r0.put(r1, r2)
        L15:
            return
    }

    private void b(com.sigmob.sdk.base.models.BaseAdUnit r4, com.sigmob.sdk.base.common.f.b r5) {
            r3 = this;
            if (r4 == 0) goto L74
            java.io.File r0 = r4.getAdPrivacyTemplateFile()
            if (r0 == 0) goto L33
            boolean r1 = r0.exists()
            if (r1 != 0) goto L33
            com.czhj.volley.toolbox.DownloadItem r1 = new com.czhj.volley.toolbox.DownloadItem
            r1.<init>()
            com.sigmob.sdk.base.models.rtb.AdPrivacy r2 = r4.getadPrivacy()
            java.lang.String r2 = r2.privacy_template_url
            r1.url = r2
            java.lang.String r0 = r0.getAbsolutePath()
            r1.filePath = r0
            com.czhj.volley.toolbox.DownloadItem$FileType r0 = com.czhj.volley.toolbox.DownloadItem.FileType.OTHER
            r1.type = r0
            com.czhj.volley.toolbox.FileDownloader r0 = com.sigmob.sdk.base.common.p.a()
            if (r0 == 0) goto L33
            com.sigmob.sdk.base.common.f$3 r2 = new com.sigmob.sdk.base.common.f$3
            r2.<init>(r3)
            r0.add(r1, r2)
        L33:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r4.getSplashFilePath()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L50
            long r1 = java.lang.System.currentTimeMillis()
            r0.setLastModified(r1)
            if (r5 == 0) goto L74
            r0 = 0
            r5.a(r4, r0)
            goto L74
        L50:
            com.czhj.volley.toolbox.FileDownloader r0 = com.sigmob.sdk.base.common.p.a()
            com.czhj.volley.toolbox.DownloadItem r1 = new com.czhj.volley.toolbox.DownloadItem
            r1.<init>()
            java.lang.String r2 = r4.getSplashFilePath()
            r1.filePath = r2
            java.lang.String r2 = r4.getSplashURL()
            r1.url = r2
            com.czhj.volley.toolbox.DownloadItem$FileType r2 = com.czhj.volley.toolbox.DownloadItem.FileType.OTHER
            r1.type = r2
            r2 = 0
            r1.userRange = r2
            com.sigmob.sdk.base.common.f$4 r2 = new com.sigmob.sdk.base.common.f$4
            r2.<init>(r3, r5, r4)
            r0.add(r1, r2)
        L74:
            return
    }

    public static com.sigmob.sdk.videocache.h c() {
            com.sigmob.sdk.videocache.h r0 = com.sigmob.sdk.base.common.f.j
            return r0
    }

    static java.util.ArrayList c(com.sigmob.sdk.base.common.f r0) {
            java.util.ArrayList<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r0.p
            return r0
    }

    public static void c(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            if (r2 == 0) goto L1e
            java.lang.String r0 = r2.getUuid()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1e
            java.util.Map<java.lang.String, com.sigmob.sdk.base.models.BaseAdUnit> r0 = com.sigmob.sdk.base.common.f.i
            java.lang.String r1 = r2.getUuid()
            r0.remove(r1)
            java.util.Map<java.lang.String, java.util.List<com.sigmob.sdk.base.models.BaseAdUnit>> r0 = com.sigmob.sdk.base.common.f.v
            java.lang.String r2 = r2.getUuid()
            r0.remove(r2)
        L1e:
            return
    }

    static java.util.HashMap d(com.sigmob.sdk.base.common.f r0) {
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.sigmob.sdk.base.common.f$b>> r0 = r0.t
            return r0
    }

    public static void d() {
            com.sigmob.sdk.videocache.h$a r0 = new com.sigmob.sdk.videocache.h$a
            android.content.Context r1 = com.sigmob.sdk.b.b()
            r0.<init>(r1)
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = com.sigmob.sdk.base.utils.b.b()     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            r0.a(r1)     // Catch: java.lang.Throwable -> L16
            goto L1c
        L16:
            r1 = move-exception
            java.lang.String r2 = "initHttpProxyCacheServer fail "
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)
        L1c:
            com.sigmob.sdk.videocache.h r0 = r0.a()
            com.sigmob.sdk.base.common.f.j = r0
            return
    }

    public static com.sigmob.sdk.base.common.f e() {
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.h
            if (r0 != 0) goto L17
            java.lang.Class<com.sigmob.sdk.base.common.f> r0 = com.sigmob.sdk.base.common.f.class
            monitor-enter(r0)
            com.sigmob.sdk.base.common.f r1 = com.sigmob.sdk.base.common.f.h     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.sigmob.sdk.base.common.f r1 = new com.sigmob.sdk.base.common.f     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.sigmob.sdk.base.common.f.h = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.h
            return r0
    }

    private java.lang.String f(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            com.sigmob.sdk.videocache.h r0 = c()
            java.io.File r3 = r0.c(r3)
            if (r3 == 0) goto L1d
            boolean r0 = r3.exists()
            if (r0 == 0) goto L1d
            java.lang.String r3 = r3.getAbsolutePath()
            return r3
        L1d:
            return r1
    }

    public static void f() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.d()     // Catch: java.lang.Throwable -> L3f
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.orderByDate(r0)     // Catch: java.lang.Throwable -> L3f
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3f
            com.sigmob.sdk.base.i r3 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L3f
            long r3 = r3.s()     // Catch: java.lang.Throwable -> L3f
            java.io.File[] r0 = a(r0, r1, r3)     // Catch: java.lang.Throwable -> L3f
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L3f
            int r1 = r1.r()     // Catch: java.lang.Throwable -> L3f
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.clearCacheFileByCount(r0, r1)     // Catch: java.lang.Throwable -> L3f
            if (r0 != 0) goto L2c
            java.lang.String r0 = "splash ad file list is null"
        L28:
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L3f
            goto L45
        L2c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r1.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = "splash ad file remain num: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L3f
            int r0 = r0.length     // Catch: java.lang.Throwable -> L3f
            r1.append(r0)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L3f
            goto L28
        L3f:
            r0 = move-exception
            java.lang.String r1 = "clean splash ad file error"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L45:
            return
    }

    public static void g() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.b()     // Catch: java.lang.Throwable -> L38
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.orderByDate(r0)     // Catch: java.lang.Throwable -> L38
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L38
            int r1 = r1.o()     // Catch: java.lang.Throwable -> L38
            com.sigmob.sdk.base.i r2 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L38
            int r2 = r2.t()     // Catch: java.lang.Throwable -> L38
            int r1 = r1 + r2
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.clearCacheFileByCount(r0, r1)     // Catch: java.lang.Throwable -> L38
            if (r0 != 0) goto L25
            java.lang.String r0 = "splash ad file list is null"
        L21:
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L38
            goto L3e
        L25:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r1.<init>()     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "splash ad file remain num: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L38
            int r0 = r0.length     // Catch: java.lang.Throwable -> L38
            r1.append(r0)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L38
            goto L21
        L38:
            r0 = move-exception
            java.lang.String r1 = "clean splash ad file error"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L3e:
            return
    }

    public static void h() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.e()     // Catch: java.lang.Throwable -> L2f
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.orderByDate(r0)     // Catch: java.lang.Throwable -> L2f
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L2f
            int r1 = r1.t()     // Catch: java.lang.Throwable -> L2f
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.clearCacheFileByCount(r0, r1)     // Catch: java.lang.Throwable -> L2f
            if (r0 != 0) goto L1c
            java.lang.String r0 = "native ad file list is null"
        L18:
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L2f
            goto L35
        L1c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2f
            r1.<init>()     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = "native ad file remain num: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L2f
            int r0 = r0.length     // Catch: java.lang.Throwable -> L2f
            r1.append(r0)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L2f
            goto L18
        L2f:
            r0 = move-exception
            java.lang.String r1 = "clean native ad file error"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L35:
            return
    }

    public static void i() {
            android.content.Context r0 = com.sigmob.sdk.b.b()     // Catch: java.lang.Throwable -> L72
            java.io.File r0 = com.sigmob.sdk.base.utils.b.a(r0)     // Catch: java.lang.Throwable -> L72
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L72
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.orderByDate(r0)     // Catch: java.lang.Throwable -> L72
            r1 = 5
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.clearCacheFileByCount(r0, r1)     // Catch: java.lang.Throwable -> L72
            if (r0 != 0) goto L1d
            java.lang.String r1 = "Download APK files  is null"
        L19:
            com.czhj.sdk.logger.SigmobLog.i(r1)     // Catch: java.lang.Throwable -> L72
            goto L30
        L1d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L72
            r1.<init>()     // Catch: java.lang.Throwable -> L72
            java.lang.String r2 = "Download APK files remain num: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L72
            int r2 = r0.length     // Catch: java.lang.Throwable -> L72
            r1.append(r2)     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L72
            goto L19
        L30:
            if (r0 == 0) goto L78
            int r1 = r0.length     // Catch: java.lang.Throwable -> L72
            if (r1 <= 0) goto L78
            r1 = 0
        L36:
            int r2 = r0.length     // Catch: java.lang.Throwable -> L72
            if (r1 >= r2) goto L78
            r2 = r0[r1]     // Catch: java.lang.Throwable -> L72
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L72
            long r5 = r2.lastModified()     // Catch: java.lang.Throwable -> L72
            long r3 = r3 - r5
            r5 = 604800000(0x240c8400, double:2.988109026E-315)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L6f
            boolean r3 = r2.delete()     // Catch: java.lang.Throwable -> L72
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L72
            r4.<init>()     // Catch: java.lang.Throwable -> L72
            java.lang.String r5 = "Download APK files timeOut seven day and delete:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L72
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L72
            r4.append(r2)     // Catch: java.lang.Throwable -> L72
            java.lang.String r2 = ":"
            r4.append(r2)     // Catch: java.lang.Throwable -> L72
            r4.append(r3)     // Catch: java.lang.Throwable -> L72
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L72
            com.czhj.sdk.logger.SigmobLog.i(r2)     // Catch: java.lang.Throwable -> L72
        L6f:
            int r1 = r1 + 1
            goto L36
        L72:
            r0 = move-exception
            java.lang.String r1 = "clean Download APK file error"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L78:
            return
    }

    public static void j() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.a()     // Catch: java.lang.Throwable -> L76
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.orderByDate(r0)     // Catch: java.lang.Throwable -> L76
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L76
            java.util.List r2 = java.util.Arrays.asList(r0)     // Catch: java.lang.Throwable -> L76
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L76
            r2 = 0
            r3 = r2
        L13:
            int r4 = r0.length     // Catch: java.lang.Throwable -> L76
            if (r3 >= r4) goto L4e
            r4 = r0[r3]     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = r4.getPath()     // Catch: java.lang.Throwable -> L76
            java.lang.String r6 = ".mp4"
            boolean r5 = r5.endsWith(r6)     // Catch: java.lang.Throwable -> L76
            if (r5 != 0) goto L4b
            java.lang.String r5 = r4.getPath()     // Catch: java.lang.Throwable -> L76
            java.lang.String r6 = ".mp4.tmp"
            boolean r5 = r5.endsWith(r6)     // Catch: java.lang.Throwable -> L76
            if (r5 != 0) goto L4b
            java.lang.String r5 = r4.getPath()     // Catch: java.lang.Throwable -> L76
            java.lang.String r6 = ".tgz"
            boolean r5 = r5.endsWith(r6)     // Catch: java.lang.Throwable -> L76
            if (r5 != 0) goto L4b
            java.lang.String r5 = r4.getPath()     // Catch: java.lang.Throwable -> L76
            java.lang.String r6 = ".html"
            boolean r5 = r5.endsWith(r6)     // Catch: java.lang.Throwable -> L76
            if (r5 != 0) goto L4b
            r1.remove(r4)     // Catch: java.lang.Throwable -> L76
        L4b:
            int r3 = r3 + 1
            goto L13
        L4e:
            java.io.File[] r0 = new java.io.File[r2]     // Catch: java.lang.Throwable -> L76
            java.lang.Object[] r0 = r1.toArray(r0)     // Catch: java.lang.Throwable -> L76
            java.io.File[] r0 = (java.io.File[]) r0     // Catch: java.lang.Throwable -> L76
            r1 = 5
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.clearCacheFileByCount(r0, r1)     // Catch: java.lang.Throwable -> L76
            if (r0 != 0) goto L63
            java.lang.String r0 = "splash ad file list is null"
        L5f:
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L76
            goto L7c
        L63:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r1.<init>()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = "splash ad file remain num: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L76
            int r0 = r0.length     // Catch: java.lang.Throwable -> L76
            r1.append(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L76
            goto L5f
        L76:
            r0 = move-exception
            java.lang.String r1 = "clean splash ad file error"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L7c:
            return
    }

    static java.lang.Integer m() {
            java.lang.Integer r0 = com.sigmob.sdk.base.common.f.e
            return r0
    }

    static java.util.HashMap n() {
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = com.sigmob.sdk.base.common.f.k
            return r0
    }

    static com.sigmob.sdk.videocache.h o() {
            com.sigmob.sdk.videocache.h r0 = com.sigmob.sdk.base.common.f.j
            return r0
    }

    static java.lang.Integer p() {
            java.lang.Integer r0 = com.sigmob.sdk.base.common.f.c
            return r0
    }

    private static void q() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.c     // Catch: java.lang.Throwable -> L54
            java.io.File r0 = com.sigmob.sdk.base.utils.b.c(r0)     // Catch: java.lang.Throwable -> L54
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L54
            java.io.File[] r0 = com.czhj.sdk.common.utils.FileUtil.orderByDate(r0)     // Catch: java.lang.Throwable -> L54
            r1 = 0
        Lf:
            int r2 = r0.length     // Catch: java.lang.Throwable -> L54
            if (r1 >= r2) goto L58
            r2 = r0[r1]     // Catch: java.lang.Throwable -> L54
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L54
            com.sigmob.sdk.base.i r5 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L54
            long r5 = r5.s()     // Catch: java.lang.Throwable -> L54
            long r3 = r3 - r5
            boolean r5 = r2.exists()     // Catch: java.lang.Throwable -> L54
            if (r5 == 0) goto L51
            long r5 = r2.lastModified()     // Catch: java.lang.Throwable -> L54
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L51
            boolean r3 = r2.isFile()     // Catch: java.lang.Throwable -> L54
            if (r3 == 0) goto L40
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> L54
            boolean r2 = com.czhj.sdk.common.utils.FileUtil.deleteFile(r2)     // Catch: java.lang.Throwable -> L54
            if (r2 != 0) goto L51
            goto L58
        L40:
            boolean r3 = r2.isDirectory()     // Catch: java.lang.Throwable -> L54
            if (r3 == 0) goto L51
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> L54
            boolean r2 = com.czhj.sdk.common.utils.FileUtil.deleteDirectory(r2)     // Catch: java.lang.Throwable -> L54
            if (r2 != 0) goto L51
            goto L58
        L51:
            int r1 = r1 + 1
            goto Lf
        L54:
            r0 = move-exception
            r0.printStackTrace()
        L58:
            return
    }

    public java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> a(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto Le
            r0 = 4
            if (r2 == r0) goto Le
            r0 = 5
            if (r2 == r0) goto Lb
            r2 = 0
            return r2
        Lb:
            java.util.HashMap<java.lang.String, com.czhj.sdk.common.models.AdCache> r2 = r1.u
            return r2
        Le:
            java.util.HashMap<java.lang.String, com.czhj.sdk.common.models.AdCache> r2 = r1.q
            return r2
    }

    public void a(com.sigmob.sdk.base.common.f.a r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            java.util.HashSet<com.sigmob.sdk.base.common.f$a> r0 = r1.o
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto Lf
            java.util.HashSet<com.sigmob.sdk.base.common.f$a> r0 = r1.o
            r0.add(r2)
        Lf:
            return
    }

    public void a(com.sigmob.sdk.base.models.BaseAdUnit r4, com.sigmob.sdk.base.common.f.b r5) {
            r3 = this;
            if (r5 == 0) goto L5
            r5.a(r4)
        L5:
            if (r4 != 0) goto L12
            java.lang.String r0 = "adUnit is null"
            com.czhj.sdk.logger.SigmobLog.e(r0)
            if (r5 == 0) goto L11
            r5.a(r4, r0)
        L11:
            return
        L12:
            int r0 = r4.getAd_type()
            r1 = 2
            if (r0 != r1) goto L1d
            r3.b(r4, r5)
            goto L47
        L1d:
            if (r5 == 0) goto L2d
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.sigmob.sdk.base.common.f$b>> r0 = r3.t
            java.lang.String r1 = r4.getUuid()
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r5)
            r0.put(r1, r2)
        L2d:
            com.sigmob.sdk.base.common.f$d r5 = new com.sigmob.sdk.base.common.f$d     // Catch: java.lang.Throwable -> L41
            r5.<init>(r3, r4)     // Catch: java.lang.Throwable -> L41
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r4 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()     // Catch: java.lang.Throwable -> L41
            java.util.concurrent.ExecutorService r4 = r4.getExecutorService()     // Catch: java.lang.Throwable -> L41
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L41
            r5.executeOnExecutor(r4, r0)     // Catch: java.lang.Throwable -> L41
            goto L47
        L41:
            r4 = move-exception
            java.lang.String r5 = "AdUnitCheckCacheTask execute error"
            com.czhj.sdk.logger.SigmobLog.e(r5, r4)
        L47:
            return
    }

    public void a(java.lang.String r2, int r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Map r3 = r1.a(r3)
            if (r3 == 0) goto L10
            r3.remove(r2)
        L10:
            return
    }

    public void b(com.sigmob.sdk.base.common.f.a r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            java.util.HashSet<com.sigmob.sdk.base.common.f$a> r0 = r1.o
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto Lf
            java.util.HashSet<com.sigmob.sdk.base.common.f$a> r0 = r1.o
            r0.remove(r2)
        Lf:
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public void d(com.sigmob.sdk.base.models.BaseAdUnit r5) {
            r4 = this;
            if (r5 == 0) goto L51
            java.lang.String r0 = r5.getadslot_id()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            goto L51
        Ld:
            int r0 = r5.getAd_type()
            java.util.Map r0 = r4.a(r0)
            if (r0 == 0) goto L51
            java.lang.String r1 = r5.getadslot_id()
            java.lang.Object r1 = r0.get(r1)
            com.czhj.sdk.common.models.AdCache r1 = (com.czhj.sdk.common.models.AdCache) r1
            if (r1 == 0) goto L51
            java.util.ArrayList r2 = new java.util.ArrayList
            java.util.List<java.lang.String> r3 = r1.crids
            r2.<init>(r3)
            if (r1 == 0) goto L3d
            java.lang.String r1 = r5.getCrid()
            boolean r1 = r2.contains(r1)
            if (r1 == 0) goto L3d
            java.lang.String r1 = r5.getCrid()
            r2.remove(r1)
        L3d:
            com.czhj.sdk.common.models.AdCache r1 = new com.czhj.sdk.common.models.AdCache
            int r3 = r5.getAd_type()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1.<init>(r3, r2)
            java.lang.String r5 = r5.getadslot_id()
            r0.put(r5, r1)
        L51:
            return
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public java.lang.String e(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.m
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public void e(com.sigmob.sdk.base.models.BaseAdUnit r5) {
            r4 = this;
            if (r5 == 0) goto L5d
            java.lang.String r0 = r5.getCrid()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L5d
            java.lang.String r0 = r5.getadslot_id()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L17
            goto L5d
        L17:
            int r0 = r5.getAd_type()
            java.util.Map r0 = r4.a(r0)
            if (r0 == 0) goto L2a
            int r1 = r0.size()
            r2 = 29
            if (r1 <= r2) goto L2a
            return
        L2a:
            if (r0 == 0) goto L5d
            java.lang.String r1 = r5.getadslot_id()
            java.lang.Object r1 = r0.get(r1)
            com.czhj.sdk.common.models.AdCache r1 = (com.czhj.sdk.common.models.AdCache) r1
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.String r3 = r5.getCrid()
            r2.add(r3)
            if (r1 == 0) goto L49
            java.util.List<java.lang.String> r1 = r1.crids
            r2.addAll(r1)
        L49:
            com.czhj.sdk.common.models.AdCache r1 = new com.czhj.sdk.common.models.AdCache
            int r3 = r5.getAd_type()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1.<init>(r3, r2)
            java.lang.String r5 = r5.getadslot_id()
            r0.put(r5, r1)
        L5d:
            return
    }

    public java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    public java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.s
            return r0
    }
}
