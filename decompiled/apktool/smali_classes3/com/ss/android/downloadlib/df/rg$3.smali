.class final Lcom/ss/android/downloadlib/df/rg$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/df/pt;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/model/pp;

.field final synthetic q:Lorg/json/JSONObject;

.field final synthetic rg:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;)V
    .locals 0

    .line 368
    iput-object p1, p0, Lcom/ss/android/downloadlib/df/rg$3;->rg:Ljava/lang/String;

    iput-object p2, p0, Lcom/ss/android/downloadlib/df/rg$3;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iput-object p3, p0, Lcom/ss/android/downloadlib/df/rg$3;->q:Lorg/json/JSONObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Z)V
    .locals 11

    if-nez p1, :cond_0

    .line 371
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/rg$3;->rg:Ljava/lang/String;

    const-string v1, "open_market"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 373
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "market://details?id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/downloadlib/df/rg$3;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-virtual {v2}, Lcom/ss/android/downloadlib/addownload/model/pp;->pp()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/utils/ux;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/df/rg$3;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    .line 375
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    if-eqz p1, :cond_1

    const-string v1, "market_delay_success"

    goto :goto_0

    :cond_1
    const-string v1, "market_delay_failed"

    :goto_0
    iget-object v2, p0, Lcom/ss/android/downloadlib/df/rg$3;->q:Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/ss/android/downloadlib/df/rg$3;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-virtual {v0, v1, v2, v3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    if-eqz p1, :cond_2

    .line 379
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->n()Lcom/ss/android/download/api/config/qx;

    move-result-object v4

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v5

    iget-object p1, p0, Lcom/ss/android/downloadlib/df/rg$3;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v6, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object p1, p0, Lcom/ss/android/downloadlib/df/rg$3;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v7, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    iget-object p1, p0, Lcom/ss/android/downloadlib/df/rg$3;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v8, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object p1, p0, Lcom/ss/android/downloadlib/df/rg$3;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p1, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 380
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v9

    const/4 v10, 0x2

    .line 379
    invoke-interface/range {v4 .. v10}, Lcom/ss/android/download/api/config/qx;->rg(Landroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;Ljava/lang/String;I)V

    :cond_2
    return-void
.end method
