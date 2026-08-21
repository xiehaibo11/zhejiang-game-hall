.class final Lcom/ss/android/downloadlib/utils/fw$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/utils/fw;->df(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V
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

    .line 167
    iput-object p1, p0, Lcom/ss/android/downloadlib/utils/fw$1;->rg:Ljava/lang/String;

    iput-object p2, p0, Lcom/ss/android/downloadlib/utils/fw$1;->df:Landroid/content/Context;

    iput-object p3, p0, Lcom/ss/android/downloadlib/utils/fw$1;->q:Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 10

    .line 170
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "s"

    .line 171
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 173
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "x"

    .line 176
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v1}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 178
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    .line 179
    iget-object v4, p0, Lcom/ss/android/downloadlib/utils/fw$1;->rg:Ljava/lang/String;

    const-string v6, "p"

    invoke-static {v3, v6, v4}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 180
    sget-object v4, Landroid/os/Build$VERSION;->INCREMENTAL:Ljava/lang/String;

    const-string v6, "i"

    invoke-static {v3, v6, v4}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 181
    sget-object v4, Landroid/os/Build;->MODEL:Ljava/lang/String;

    const-string v6, "m"

    invoke-static {v3, v6, v4}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 182
    iget-object v4, p0, Lcom/ss/android/downloadlib/utils/fw$1;->df:Landroid/content/Context;

    invoke-static {v4}, Lcom/ss/android/downloadlib/rg/rg/df;->rg(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    const-string v7, "im"

    invoke-static {v3, v7, v4}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 183
    iget-object v4, p0, Lcom/ss/android/downloadlib/utils/fw$1;->df:Landroid/content/Context;

    invoke-static {v4}, Lcom/ss/android/downloadlib/rg/rg/df;->df(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    const-string v7, "d"

    invoke-static {v3, v7, v4}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v4, "t"

    .line 184
    invoke-static {v3, v4, v6}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 186
    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    .line 187
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->z()Lcom/ss/android/download/api/config/z;

    move-result-object v4

    array-length v6, v3

    invoke-interface {v4, v3, v6}, Lcom/ss/android/download/api/config/z;->rg([BI)[B

    move-result-object v6

    .line 189
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->pt()Lcom/ss/android/download/api/config/ux;

    move-result-object v4

    new-instance v9, Lcom/ss/android/downloadlib/utils/fw$1$1;

    invoke-direct {v9, p0, v2, v0, v1}, Lcom/ss/android/downloadlib/utils/fw$1$1;-><init>(Lcom/ss/android/downloadlib/utils/fw$1;Lorg/json/JSONObject;Lorg/json/JSONObject;Ljava/lang/String;)V

    const-string v7, "application/octet-stream;tt-data=a"

    const/4 v8, 0x0

    invoke-interface/range {v4 .. v9}, Lcom/ss/android/download/api/config/ux;->rg(Ljava/lang/String;[BLjava/lang/String;ILcom/ss/android/download/api/config/r;)V

    return-void
.end method
