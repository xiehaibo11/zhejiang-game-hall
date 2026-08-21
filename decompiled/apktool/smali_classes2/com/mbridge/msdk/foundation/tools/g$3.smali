.class final Lcom/mbridge/msdk/foundation/tools/g$3;
.super Ljava/lang/Object;
.source "DomainSameSDKTool.java"

# interfaces
.implements Lcom/mbridge/msdk/optimize/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/tools/g;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic c:Landroid/content/Context;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;


# direct methods
.method constructor <init>(ZLcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 325
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->a:Z

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p3, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->c:Landroid/content/Context;

    iput-object p4, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->d:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->e:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 328
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->a:Z

    if-eqz v0, :cond_0

    .line 329
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->c:Landroid/content/Context;

    const-string v2, "start"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    .line 331
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->c:Landroid/content/Context;

    const-string v2, "shortcuts_start"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final a(I)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/io/File;)V
    .locals 4

    .line 342
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "isDowning"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-wide/16 v2, 0x0

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 343
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "process"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 344
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->c:Landroid/content/Context;

    const-string v2, "end"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 345
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/g;->b(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/g;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/g;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)J

    .line 346
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->a:Z

    if-eqz v0, :cond_0

    .line 347
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->c:Landroid/content/Context;

    invoke-static {p1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->e:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->d:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    .line 348
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->d:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    .line 349
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->a:Z

    if-nez v0, :cond_1

    .line 350
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->d:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final b()V
    .locals 3

    .line 356
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->c:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->e:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/tools/g$3;->d:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
