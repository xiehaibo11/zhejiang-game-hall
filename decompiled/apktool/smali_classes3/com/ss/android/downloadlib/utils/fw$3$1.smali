.class Lcom/ss/android/downloadlib/utils/fw$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/r;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/utils/fw$3;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/utils/fw$3;

.field final synthetic rg:Lorg/json/JSONObject;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/utils/fw$3;Lorg/json/JSONObject;)V
    .locals 0

    .line 445
    iput-object p1, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iput-object p2, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->rg:Lorg/json/JSONObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Ljava/lang/String;)V
    .locals 4

    .line 448
    iget-object v0, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iget-object v0, v0, Lcom/ss/android/downloadlib/utils/fw$3;->df:Landroid/content/Context;

    iget-object v1, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iget-object v1, v1, Lcom/ss/android/downloadlib/utils/fw$3;->rg:Ljava/lang/String;

    iget-object v2, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iget-object v2, v2, Lcom/ss/android/downloadlib/utils/fw$3;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v3, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->rg:Lorg/json/JSONObject;

    invoke-static {v0, v1, p1, v2, v3}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;)V

    return-void
.end method

.method public rg(Ljava/lang/Throwable;)V
    .locals 5

    .line 453
    iget-object v0, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iget-object v0, v0, Lcom/ss/android/downloadlib/utils/fw$3;->df:Landroid/content/Context;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "market://details?id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iget-object v3, v3, Lcom/ss/android/downloadlib/utils/fw$3;->rg:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iget-object v1, v1, Lcom/ss/android/downloadlib/utils/fw$3;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    const/4 v3, 0x1

    invoke-static {v0, v1, v3}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    .line 454
    iget-object v0, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->rg:Lorg/json/JSONObject;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, "null"

    :goto_0
    const-string v1, "ttdownloader_message"

    invoke-static {v0, v1, p1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 455
    iget-object p1, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iget-object p1, p1, Lcom/ss/android/downloadlib/utils/fw$3;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->rg:Lorg/json/JSONObject;

    const/4 v1, 0x7

    const/4 v3, 0x5

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/downloadlib/utils/fw$3$1;->df:Lcom/ss/android/downloadlib/utils/fw$3;

    iget-object v2, v2, Lcom/ss/android/downloadlib/utils/fw$3;->rg:Ljava/lang/String;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v0, v1, v3, v2}, Lcom/ss/android/downloadlib/utils/fw;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    return-void
.end method
