.class Lcom/ss/android/downloadlib/q/ux$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/q/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadad/api/rg/df;

.field final synthetic q:Lcom/ss/android/downloadlib/q/ux;

.field final synthetic rg:I


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/q/ux;ILcom/ss/android/downloadad/api/rg/df;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/ss/android/downloadlib/q/ux$3;->q:Lcom/ss/android/downloadlib/q/ux;

    iput p2, p0, Lcom/ss/android/downloadlib/q/ux$3;->rg:I

    iput-object p3, p0, Lcom/ss/android/downloadlib/q/ux$3;->df:Lcom/ss/android/downloadad/api/rg/df;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 146
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/downloadlib/q/ux$3;->rg:I

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    .line 147
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const/4 v2, 0x3

    .line 148
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "ttdownloader_type"

    invoke-static {v1, v3, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 149
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/utils/pp;->q(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;)V

    .line 150
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/ux$3;->df:Lcom/ss/android/downloadad/api/rg/df;

    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/b;->q(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x3eb

    .line 151
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v2, "error_code"

    invoke-static {v1, v2, v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    .line 153
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/ux$3;->q:Lcom/ss/android/downloadlib/q/ux;

    iget v2, p0, Lcom/ss/android/downloadlib/q/ux$3;->rg:I

    iget-object v3, p0, Lcom/ss/android/downloadlib/q/ux$3;->df:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {v0, v2, v3, v1}, Lcom/ss/android/downloadlib/q/ux;->rg(Lcom/ss/android/downloadlib/q/ux;ILcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;)V

    .line 155
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v2, p0, Lcom/ss/android/downloadlib/q/ux$3;->df:Lcom/ss/android/downloadad/api/rg/df;

    const-string v3, "download_notification_try_show"

    invoke-virtual {v0, v3, v1, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method
