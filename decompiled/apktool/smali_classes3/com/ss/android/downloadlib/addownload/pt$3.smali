.class Lcom/ss/android/downloadlib/addownload/pt$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/network/IFetchHttpHeadInfoListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pt;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/addownload/pp$df;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/pt;

.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/pp$df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pt;Lcom/ss/android/downloadlib/addownload/pp$df;)V
    .locals 0

    .line 127
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pt$3;->df:Lcom/ss/android/downloadlib/addownload/pt;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/pt$3;->rg:Lcom/ss/android/downloadlib/addownload/pp$df;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFetchFinished(Ljava/util/Map;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 130
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt$3;->df:Lcom/ss/android/downloadlib/addownload/pt;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadlib/addownload/pt;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 134
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt$3;->df:Lcom/ss/android/downloadlib/addownload/pt;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadlib/addownload/pt;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 136
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt$3;->df:Lcom/ss/android/downloadlib/addownload/pt;

    invoke-static {v0, p1}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadlib/addownload/pt;Ljava/util/Map;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-lez p1, :cond_1

    .line 139
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v2, "apk_size"

    .line 141
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {p1, v2, v3}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "available_space"

    .line 142
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pt;->q()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {p1, v2, v3}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 144
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 148
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pt$3;->rg:Lcom/ss/android/downloadlib/addownload/pp$df;

    invoke-interface {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/pp$df;->rg(J)V

    return-void
.end method
