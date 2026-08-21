.class final Lcom/ss/android/downloadlib/utils/fw$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/utils/fw;->pp(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Landroid/content/Context;

.field final synthetic q:Lcom/ss/android/downloadlib/addownload/model/pp;

.field final synthetic rg:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;)V
    .locals 0

    .line 424
    iput-object p1, p0, Lcom/ss/android/downloadlib/utils/fw$3;->rg:Ljava/lang/String;

    iput-object p2, p0, Lcom/ss/android/downloadlib/utils/fw$3;->df:Landroid/content/Context;

    iput-object p3, p0, Lcom/ss/android/downloadlib/utils/fw$3;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 9

    .line 427
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "s"

    .line 428
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 430
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "x"

    .line 433
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 435
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "t"

    const-string v3, "v"

    .line 436
    invoke-static {v0, v1, v3}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 437
    iget-object v1, p0, Lcom/ss/android/downloadlib/utils/fw$3;->rg:Ljava/lang/String;

    const-string v3, "p"

    invoke-static {v0, v3, v1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 439
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    .line 440
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->z()Lcom/ss/android/download/api/config/z;

    move-result-object v1

    array-length v3, v0

    invoke-interface {v1, v0, v3}, Lcom/ss/android/download/api/config/z;->rg([BI)[B

    move-result-object v5

    .line 442
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->pt()Lcom/ss/android/download/api/config/ux;

    move-result-object v3

    new-instance v8, Lcom/ss/android/downloadlib/utils/fw$3$1;

    invoke-direct {v8, p0, v2}, Lcom/ss/android/downloadlib/utils/fw$3$1;-><init>(Lcom/ss/android/downloadlib/utils/fw$3;Lorg/json/JSONObject;)V

    const-string v6, "application/octet-stream;tt-data=a"

    const/4 v7, 0x0

    invoke-interface/range {v3 .. v8}, Lcom/ss/android/download/api/config/ux;->rg(Ljava/lang/String;[BLjava/lang/String;ILcom/ss/android/download/api/config/r;)V

    return-void
.end method
