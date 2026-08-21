.class Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;
.super Ljava/lang/Object;
.source "ExChangeVideoBroadcast.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/system/ExChangeVideoBroadcast;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "ExChangeVideoRunnable"
.end annotation


# instance fields
.field private pn:Ljava/lang/String;

.field private videoBinderInterface:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 76
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 77
    iput-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->pn:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;
    .locals 0

    .line 72
    iget-object p0, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->videoBinderInterface:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    return-object p0
.end method

.method static synthetic access$002(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->videoBinderInterface:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    return-object p1
.end method


# virtual methods
.method public run()V
    .locals 8

    .line 82
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 84
    iget-object v0, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->pn:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_2

    .line 90
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getInstance()Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getDatabaseHelper()Lcom/mbridge/msdk/foundation/download/database/IDatabaseHelper;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/download/database/IDatabaseHelper;->findAll()Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    .line 95
    :goto_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 96
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    if-eqz v0, :cond_2

    .line 97
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 98
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;

    if-eqz v3, :cond_1

    .line 99
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadedBytes()J

    move-result-wide v4

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getTotalBytes()J

    move-result-wide v6

    cmp-long v4, v4, v6

    if-nez v4, :cond_1

    .line 100
    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 101
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getResourceUrl()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 106
    :cond_2
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.mbridge.msdk.foundation.aidl.VideoRequestService"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 107
    iget-object v3, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->pn:Ljava/lang/String;

    invoke-virtual {v0, v3, v1}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 108
    new-instance v1, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;

    invoke-direct {v1, p0, v2}, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;-><init>(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;Ljava/util/List;)V

    .line 214
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {v2, v0, v1, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    :cond_3
    :goto_2
    return-void
.end method
