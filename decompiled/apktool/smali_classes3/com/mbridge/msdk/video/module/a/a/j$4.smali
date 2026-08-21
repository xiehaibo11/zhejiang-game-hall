.class final Lcom/mbridge/msdk/video/module/a/a/j$4;
.super Ljava/lang/Object;
.source "StatisticsOnNotifyListener.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/module/a/a/j;
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

    .line 388
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j$4;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 391
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v0

    const-string v1, "c_r_v_f_w_s_e"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 395
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j$4;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-boolean v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j$4;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v0, :cond_2

    .line 396
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j$4;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j$4;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    .line 397
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 398
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j$4;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v0

    .line 399
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/s;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/s;

    move-result-object v1

    .line 400
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/db/s;->b(Ljava/lang/String;)V

    .line 402
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j$4;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 403
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j$4;->a:Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 404
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 405
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {v1}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 406
    invoke-virtual {v1}, Ljava/io/File;->delete()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "NotifyListener"

    .line 408
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "DEL File :"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 414
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method
