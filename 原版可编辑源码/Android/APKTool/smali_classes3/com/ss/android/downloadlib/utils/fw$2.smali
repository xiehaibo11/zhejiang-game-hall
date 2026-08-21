.class final Lcom/ss/android/downloadlib/utils/fw$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/utils/fw;->pt(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Ljava/lang/String;

.field final synthetic q:Lcom/ss/android/downloadlib/addownload/model/pp;

.field final synthetic rg:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;)V
    .locals 0

    .line 373
    iput-object p1, p0, Lcom/ss/android/downloadlib/utils/fw$2;->rg:Landroid/content/Context;

    iput-object p2, p0, Lcom/ss/android/downloadlib/utils/fw$2;->df:Ljava/lang/String;

    iput-object p3, p0, Lcom/ss/android/downloadlib/utils/fw$2;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 10

    .line 376
    iget-object v0, p0, Lcom/ss/android/downloadlib/utils/fw$2;->rg:Landroid/content/Context;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "market://details?id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/ss/android/downloadlib/utils/fw$2;->df:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/utils/fw$2;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    const/4 v3, 0x1

    invoke-static {v0, v1, v3}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    .line 377
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const/4 v1, 0x2

    .line 380
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v4

    const-string v5, "m2_delay_millis"

    const/16 v6, 0x3e8

    .line 381
    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    int-to-long v5, v5

    invoke-static {v5, v6}, Ljava/lang/Thread;->sleep(J)V

    .line 382
    invoke-static {}, Lcom/ss/android/downloadlib/rg/df/rg;->rg()Lcom/ss/android/downloadlib/rg/df/rg;

    move-result-object v5

    iget-object v6, p0, Lcom/ss/android/downloadlib/utils/fw$2;->rg:Landroid/content/Context;

    invoke-virtual {v5, v6, v3}, Lcom/ss/android/downloadlib/rg/df/rg;->rg(Landroid/content/Context;Z)Z

    .line 383
    new-instance v5, Lcom/ss/android/downloadlib/rg/df/df;

    invoke-direct {v5}, Lcom/ss/android/downloadlib/rg/df/df;-><init>()V

    .line 384
    iput v3, v5, Lcom/ss/android/downloadlib/rg/df/df;->rg:I

    const/4 v6, 0x0

    .line 385
    iput v6, v5, Lcom/ss/android/downloadlib/rg/df/df;->df:I

    const-string v7, "s"

    .line 386
    invoke-virtual {v4, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "v"

    .line 387
    invoke-virtual {v4, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4, v7}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    new-array v7, v3, [Ljava/lang/Object;

    .line 388
    iget-object v8, p0, Lcom/ss/android/downloadlib/utils/fw$2;->df:Ljava/lang/String;

    aput-object v8, v7, v6

    invoke-static {v4, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    iput-object v7, v5, Lcom/ss/android/downloadlib/rg/df/df;->q:Ljava/lang/String;

    .line 390
    invoke-static {}, Lcom/ss/android/downloadlib/rg/df/rg;->rg()Lcom/ss/android/downloadlib/rg/df/rg;

    move-result-object v7

    const/4 v8, 0x0

    invoke-virtual {v7, v5, v8}, Lcom/ss/android/downloadlib/rg/df/rg;->rg(Lcom/ss/android/downloadlib/rg/df/df;Lcom/ss/android/downloadlib/rg/df/pt;)V

    .line 391
    invoke-static {}, Lcom/ss/android/downloadlib/rg/df/rg;->rg()Lcom/ss/android/downloadlib/rg/df/rg;

    move-result-object v5

    invoke-virtual {v5}, Lcom/ss/android/downloadlib/rg/df/rg;->df()V

    .line 392
    iget-object v5, p0, Lcom/ss/android/downloadlib/utils/fw$2;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    const/4 v7, -0x1

    new-array v8, v3, [Ljava/lang/Object;

    iget-object v9, p0, Lcom/ss/android/downloadlib/utils/fw$2;->df:Ljava/lang/String;

    aput-object v9, v8, v6

    invoke-static {v4, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v5, v0, v7, v1, v4}, Lcom/ss/android/downloadlib/utils/fw;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v4

    .line 394
    invoke-virtual {v4}, Ljava/lang/Throwable;->printStackTrace()V

    .line 395
    iget-object v4, p0, Lcom/ss/android/downloadlib/utils/fw$2;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/downloadlib/utils/fw$2;->df:Ljava/lang/String;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v0, v3, v1, v2}, Lcom/ss/android/downloadlib/utils/fw;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    :goto_0
    return-void
.end method
