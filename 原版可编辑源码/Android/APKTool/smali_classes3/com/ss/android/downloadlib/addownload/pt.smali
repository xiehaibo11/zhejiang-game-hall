.class public Lcom/ss/android/downloadlib/addownload/pt;
.super Ljava/lang/Object;


# instance fields
.field private df:Lcom/ss/android/downloadlib/addownload/model/pp;

.field private pt:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private q:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private rg:Landroid/os/Handler;


# direct methods
.method constructor <init>(Landroid/os/Handler;)V
    .locals 2

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 47
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 49
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 40
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pt;->rg:Landroid/os/Handler;

    return-void
.end method

.method public static df()J
    .locals 2

    .line 318
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 319
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v0

    invoke-interface {v0}, Lcom/ss/android/download/api/config/f;->rg()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method private df(Lcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;JJ)V
    .locals 1

    const-string v0, "1"

    .line 364
    invoke-virtual {p1, v0}, Lcom/ss/android/downloadad/api/rg/df;->hq(Ljava/lang/String;)V

    .line 365
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    :try_start_0
    const-string v0, "quite_clean_size"

    sub-long/2addr p5, p3

    .line 367
    invoke-static {p5, p6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    invoke-virtual {p2, v0, p3}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p3

    .line 369
    invoke-virtual {p3}, Lorg/json/JSONException;->printStackTrace()V

    .line 371
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p3

    const-string p4, "cleanspace_download_after_quite_clean"

    invoke-virtual {p3, p4, p2, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method private static pt()J
    .locals 2

    const-wide/16 v0, 0x0

    .line 350
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/utils/b;->rg(J)J

    move-result-wide v0

    return-wide v0
.end method

.method static synthetic q()J
    .locals 2

    .line 33
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pt;->pt()J

    move-result-wide v0

    return-wide v0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/pt;Ljava/util/Map;)J
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Ljava/util/Map;)J

    move-result-wide p0

    return-wide p0
.end method

.method private rg(Ljava/util/Map;)J
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)J"
        }
    .end annotation

    const-wide/16 v0, 0x0

    if-eqz p1, :cond_2

    .line 154
    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    .line 158
    :cond_0
    :try_start_0
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 159
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 160
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v4, "content-length"

    .line 162
    invoke-virtual {v4, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 163
    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    :catch_0
    move-exception p1

    .line 167
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-wide v0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/pt;)Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/pt;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object p0
.end method

.method public static rg(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 2

    .line 298
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "clean_space_install_params"

    .line 300
    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 302
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public static rg(I)V
    .locals 0

    .line 308
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/pt;->c(I)Z

    move-result p0

    if-nez p0, :cond_0

    return-void

    .line 312
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object p0

    invoke-interface {p0}, Lcom/ss/android/download/api/config/f;->df()Z

    move-result p0

    if-eqz p0, :cond_1

    .line 313
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object p0

    invoke-interface {p0}, Lcom/ss/android/download/api/config/f;->q()V

    :cond_1
    return-void
.end method

.method private rg(ILjava/lang/String;JLcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/addownload/pp$rg;)V
    .locals 18

    move-object/from16 v8, p0

    move-wide/from16 v1, p3

    move-object/from16 v9, p5

    move-object/from16 v10, p8

    .line 176
    iget-object v0, v8, Lcom/ss/android/downloadlib/addownload/pt;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v11, 0x1

    invoke-virtual {v0, v11}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    const-wide/16 v3, 0x0

    cmp-long v0, v1, v3

    const/4 v12, 0x0

    if-lez v0, :cond_2

    .line 178
    new-instance v13, Lorg/json/JSONObject;

    invoke-direct {v13}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "apk_size"

    .line 180
    invoke-static/range {p3 .. p4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v13, v0, v3}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 182
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 185
    :goto_0
    invoke-static/range {p1 .. p1}, Lcom/ss/android/downloadlib/utils/pt;->rg(I)D

    move-result-wide v3

    const-wide/high16 v5, 0x3ff0000000000000L    # 1.0

    add-double/2addr v3, v5

    long-to-double v0, v1

    mul-double/2addr v3, v0

    .line 186
    invoke-static {v3, v4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Double;->longValue()J

    move-result-wide v0

    invoke-static/range {p1 .. p1}, Lcom/ss/android/downloadlib/utils/pt;->df(I)J

    move-result-wide v2

    add-long/2addr v0, v2

    sub-long v14, v0, p6

    .line 187
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pt;->pt()J

    move-result-wide v16

    cmp-long v0, v16, v14

    if-gez v0, :cond_2

    move-object/from16 v1, p0

    move-object/from16 v2, p5

    move-object v3, v13

    move-wide v4, v14

    move-wide/from16 v6, v16

    .line 191
    invoke-direct/range {v1 .. v7}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;JJ)V

    .line 194
    invoke-static/range {p5 .. p5}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 196
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pt;->pt()J

    move-result-wide v6

    cmp-long v0, v6, v14

    if-gez v0, :cond_0

    move v0, v11

    goto :goto_1

    :cond_0
    move v0, v12

    :goto_1
    if-eqz v0, :cond_1

    .line 200
    invoke-virtual {v9, v11}, Lcom/ss/android/downloadad/api/rg/df;->pt(Z)V

    .line 202
    invoke-virtual/range {p5 .. p5}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v0

    .line 203
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg()Lcom/ss/android/downloadlib/addownload/df/pt;

    move-result-object v1

    new-instance v2, Lcom/ss/android/downloadlib/addownload/pt$4;

    invoke-direct {v2, v8, v9, v10, v0}, Lcom/ss/android/downloadlib/addownload/pt$4;-><init>(Lcom/ss/android/downloadlib/addownload/pt;Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/addownload/pp$rg;Ljava/lang/String;)V

    invoke-virtual {v1, v0, v2}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/df/pp;)V

    move-object/from16 v1, p0

    move/from16 v2, p1

    move-object/from16 v3, p5

    move-object/from16 v4, p2

    move-wide v5, v14

    .line 217
    invoke-direct/range {v1 .. v6}, Lcom/ss/android/downloadlib/addownload/pt;->rg(ILcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;J)Z

    move-result v12

    if-eqz v12, :cond_2

    .line 219
    invoke-virtual {v9, v11}, Lcom/ss/android/downloadad/api/rg/df;->pp(Z)V

    goto :goto_2

    :cond_1
    move-object/from16 v1, p0

    move-object/from16 v2, p5

    move-object v3, v13

    move-wide/from16 v4, v16

    .line 222
    invoke-direct/range {v1 .. v7}, Lcom/ss/android/downloadlib/addownload/pt;->df(Lcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;JJ)V

    :cond_2
    :goto_2
    if-nez v12, :cond_3

    .line 228
    iget-object v0, v8, Lcom/ss/android/downloadlib/addownload/pt;->rg:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/pt$5;

    invoke-direct {v1, v8, v10}, Lcom/ss/android/downloadlib/addownload/pt$5;-><init>(Lcom/ss/android/downloadlib/addownload/pt;Lcom/ss/android/downloadlib/addownload/pp$rg;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_3
    return-void
.end method

.method private static rg(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 6

    .line 325
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pt;->pt()J

    move-result-wide v0

    .line 327
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 328
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/download/api/config/f;->pp()V

    .line 332
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/df/q;->rg()V

    .line 333
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/df/q;->df()V

    .line 335
    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v2

    invoke-static {v2}, Lcom/ss/android/downloadlib/utils/pt;->fw(I)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 336
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/df/q;->rg(Landroid/content/Context;)V

    .line 339
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pt;->pt()J

    move-result-wide v2

    .line 340
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v5, "quite_clean_size"

    sub-long/2addr v2, v0

    .line 342
    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v4, v5, v0}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 344
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 346
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    const-string v1, "clean_quite_finish"

    invoke-virtual {v0, v1, v4, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method private rg(Lcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;JJ)V
    .locals 1

    :try_start_0
    const-string v0, "available_space"

    .line 355
    invoke-static {p5, p6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p5

    invoke-virtual {p2, v0, p5}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p5, "apk_download_need_size"

    .line 356
    invoke-static {p3, p4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    invoke-virtual {p2, p5, p3}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p3

    .line 358
    invoke-virtual {p3}, Lorg/json/JSONException;->printStackTrace()V

    .line 360
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p3

    const-string p4, "clean_space_no_enough_for_download"

    invoke-virtual {p3, p4, p2, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/pt;ILjava/lang/String;JLcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/addownload/pp$rg;)V
    .locals 0

    .line 33
    invoke-direct/range {p0 .. p8}, Lcom/ss/android/downloadlib/addownload/pt;->rg(ILjava/lang/String;JLcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/addownload/pp$rg;)V

    return-void
.end method

.method private rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/addownload/pp$df;)V
    .locals 0

    if-nez p3, :cond_0

    return-void

    .line 127
    :cond_0
    new-instance p2, Lcom/ss/android/downloadlib/addownload/pt$3;

    invoke-direct {p2, p0, p3}, Lcom/ss/android/downloadlib/addownload/pt$3;-><init>(Lcom/ss/android/downloadlib/addownload/pt;Lcom/ss/android/downloadlib/addownload/pp$df;)V

    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->asyncFetchHttpHeadInfo(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IFetchHttpHeadInfoListener;)V

    return-void
.end method

.method private rg(ILcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;J)Z
    .locals 8

    .line 241
    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/pt;->c(I)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 246
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 247
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v2

    const/4 v5, 0x1

    move v3, p1

    move-object v4, p3

    move-wide v6, p4

    invoke-interface/range {v2 .. v7}, Lcom/ss/android/download/api/config/f;->rg(ILjava/lang/String;ZJ)Z

    move-result p1

    return p1

    .line 249
    :cond_1
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string p3, "show_dialog_result"

    const/4 p4, 0x3

    .line 251
    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p4

    invoke-virtual {p1, p3, p4}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p3

    .line 253
    invoke-virtual {p3}, Lorg/json/JSONException;->printStackTrace()V

    .line 255
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p3

    const-string p4, "cleanspace_window_show"

    invoke-virtual {p3, p4, p1, p2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return v1
.end method

.method public static rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;J)Z
    .locals 6

    .line 266
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    .line 267
    invoke-static {v1}, Lcom/ss/android/downloadlib/utils/pt;->c(I)Z

    move-result v0

    const/4 v2, 0x0

    if-nez v0, :cond_0

    return v2

    .line 272
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 273
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    move-wide v4, p1

    invoke-interface/range {v0 .. v5}, Lcom/ss/android/download/api/config/f;->rg(ILjava/lang/String;ZJ)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 275
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg()Lcom/ss/android/downloadlib/addownload/df/pt;

    move-result-object p1

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Lcom/ss/android/downloadlib/addownload/pt$6;

    invoke-direct {v0, p0}, Lcom/ss/android/downloadlib/addownload/pt$6;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {p1, p2, v0}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/df/pp;)V

    :cond_1
    return v2
.end method


# virtual methods
.method rg(IJJLcom/ss/android/downloadlib/addownload/pp$rg;)V
    .locals 15

    move-object v9, p0

    move-object/from16 v10, p6

    .line 64
    iget-object v0, v9, Lcom/ss/android/downloadlib/addownload/pt;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    if-nez v10, :cond_0

    return-void

    .line 70
    :cond_0
    invoke-static/range {p1 .. p1}, Lcom/ss/android/downloadlib/utils/pt;->c(I)Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-static/range {p1 .. p1}, Lcom/ss/android/downloadlib/utils/pt;->pp(I)Z

    move-result v0

    if-nez v0, :cond_1

    goto/16 :goto_1

    .line 74
    :cond_1
    invoke-static/range {p1 .. p1}, Lcom/ss/android/downloadlib/utils/pt;->q(I)J

    move-result-wide v11

    .line 75
    iget-object v0, v9, Lcom/ss/android/downloadlib/addownload/pt;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 76
    iget-object v0, v9, Lcom/ss/android/downloadlib/addownload/pt;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v8

    .line 78
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, v8}, Lcom/ss/android/downloadlib/addownload/model/c;->df(Ljava/lang/String;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v0

    if-nez v0, :cond_2

    .line 80
    new-instance v0, Lcom/ss/android/downloadad/api/rg/df;

    iget-object v2, v9, Lcom/ss/android/downloadlib/addownload/pt;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v2, v2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v3, v9, Lcom/ss/android/downloadlib/addownload/pt;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v3, v3, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v4, v9, Lcom/ss/android/downloadlib/addownload/pt;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v4, v4, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-direct {v0, v2, v3, v4, v1}, Lcom/ss/android/downloadad/api/rg/df;-><init>(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;I)V

    .line 81
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    :cond_2
    move-object v13, v0

    .line 83
    invoke-virtual {v13, v1}, Lcom/ss/android/downloadad/api/rg/df;->pp(Z)V

    .line 85
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 86
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object v0

    invoke-virtual {v13}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v1

    invoke-interface {v0, v1, v2}, Lcom/ss/android/download/api/config/f;->rg(J)V

    .line 88
    :cond_3
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg()Lcom/ss/android/downloadlib/addownload/df/pt;

    move-result-object v0

    invoke-virtual {v13}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg(Ljava/lang/String;)V

    .line 90
    invoke-static/range {p1 .. p1}, Lcom/ss/android/downloadlib/utils/pt;->pt(I)Z

    move-result v0

    const-wide/16 v1, 0x0

    cmp-long v3, p4, v1

    if-lez v3, :cond_4

    move-object v0, p0

    move/from16 v1, p1

    move-object v2, v8

    move-wide/from16 v3, p4

    move-object v5, v13

    move-wide/from16 v6, p2

    move-object/from16 v8, p6

    .line 93
    invoke-direct/range {v0 .. v8}, Lcom/ss/android/downloadlib/addownload/pt;->rg(ILjava/lang/String;JLcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/addownload/pp$rg;)V

    goto :goto_0

    :cond_4
    if-eqz v0, :cond_5

    .line 96
    new-instance v14, Lcom/ss/android/downloadlib/addownload/pt$1;

    move-object v0, v14

    move-object v1, p0

    move/from16 v2, p1

    move-object v3, v8

    move-object v4, v13

    move-wide/from16 v5, p2

    move-object/from16 v7, p6

    invoke-direct/range {v0 .. v7}, Lcom/ss/android/downloadlib/addownload/pt$1;-><init>(Lcom/ss/android/downloadlib/addownload/pt;ILjava/lang/String;Lcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/addownload/pp$rg;)V

    invoke-direct {p0, v8, v13, v14}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/addownload/pp$df;)V

    goto :goto_0

    :cond_5
    move-wide v11, v1

    .line 109
    :goto_0
    iget-object v0, v9, Lcom/ss/android/downloadlib/addownload/pt;->rg:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/pt$2;

    invoke-direct {v1, p0, v10}, Lcom/ss/android/downloadlib/addownload/pt$2;-><init>(Lcom/ss/android/downloadlib/addownload/pt;Lcom/ss/android/downloadlib/addownload/pp$rg;)V

    invoke-virtual {v0, v1, v11, v12}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void

    .line 71
    :cond_6
    :goto_1
    invoke-interface/range {p6 .. p6}, Lcom/ss/android/downloadlib/addownload/pp$rg;->rg()V

    return-void
.end method

.method public rg(Lcom/ss/android/downloadlib/addownload/model/pp;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pt;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    return-void
.end method

.method public rg(Z)V
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void
.end method

.method public rg()Z
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method
