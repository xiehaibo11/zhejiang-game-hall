.class final Lcom/mbridge/msdk/video/module/a/a/j$2;
.super Ljava/lang/Object;
.source "StatisticsOnNotifyListener.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/video/module/a/a/j;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/module/a/a/j;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/module/a/a/j;)V
    .locals 0

    .line 207
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j$2;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    const-string v0, "NotifyListener"

    .line 211
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j$2;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-boolean v1, v1, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j$2;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v1, v1, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j$2;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v1, v1, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 212
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j$2;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v2, v2, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/j$2;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v3, v3, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/videocommon/a/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 215
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    :try_start_1
    const-string v1, "Delete cached campaigns by alrbs"

    .line 218
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 219
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j$2;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v2, v2, Lcom/mbridge/msdk/video/module/a/a/j;->h:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/j$2;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v3, v3, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/videocommon/a/a;->c(Ljava/lang/String;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v1

    goto :goto_1

    :catch_1
    move-exception v0

    goto :goto_2

    .line 225
    :goto_1
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 221
    :goto_2
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 222
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_3
    return-void
.end method
