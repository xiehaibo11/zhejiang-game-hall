.class final Lcom/ss/android/downloadlib/df/rg$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/df/pt;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadad/api/rg/rg;

.field final synthetic rg:Lorg/json/JSONObject;


# direct methods
.method constructor <init>(Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 0

    .line 287
    iput-object p1, p0, Lcom/ss/android/downloadlib/df/rg$2;->rg:Lorg/json/JSONObject;

    iput-object p2, p0, Lcom/ss/android/downloadlib/df/rg$2;->df:Lcom/ss/android/downloadad/api/rg/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Z)V
    .locals 11

    .line 290
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    if-eqz p1, :cond_0

    const-string v1, "deeplink_success"

    goto :goto_0

    :cond_0
    const-string v1, "deeplink_failed"

    :goto_0
    iget-object v2, p0, Lcom/ss/android/downloadlib/df/rg$2;->rg:Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/ss/android/downloadlib/df/rg$2;->df:Lcom/ss/android/downloadad/api/rg/rg;

    invoke-virtual {v0, v1, v2, v3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    if-eqz p1, :cond_1

    .line 294
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->n()Lcom/ss/android/download/api/config/qx;

    move-result-object v4

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v5

    iget-object p1, p0, Lcom/ss/android/downloadlib/df/rg$2;->df:Lcom/ss/android/downloadad/api/rg/rg;

    .line 295
    invoke-interface {p1}, Lcom/ss/android/downloadad/api/rg/rg;->ou()Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v6

    iget-object p1, p0, Lcom/ss/android/downloadlib/df/rg$2;->df:Lcom/ss/android/downloadad/api/rg/rg;

    invoke-interface {p1}, Lcom/ss/android/downloadad/api/rg/rg;->fo()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v7

    iget-object p1, p0, Lcom/ss/android/downloadlib/df/rg$2;->df:Lcom/ss/android/downloadad/api/rg/rg;

    invoke-interface {p1}, Lcom/ss/android/downloadad/api/rg/rg;->y()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v8

    iget-object p1, p0, Lcom/ss/android/downloadlib/df/rg$2;->df:Lcom/ss/android/downloadad/api/rg/rg;

    .line 296
    invoke-interface {p1}, Lcom/ss/android/downloadad/api/rg/rg;->pp()Ljava/lang/String;

    move-result-object v9

    const/4 v10, 0x0

    .line 294
    invoke-interface/range {v4 .. v10}, Lcom/ss/android/download/api/config/qx;->rg(Landroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;Ljava/lang/String;I)V

    :cond_1
    return-void
.end method
