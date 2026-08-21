.class final Lcom/mbridge/msdk/click/b$3;
.super Ljava/lang/Object;
.source "CommonClickControl.java"

# interfaces
.implements Lcom/mbridge/msdk/optimize/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Z

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lcom/mbridge/msdk/click/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 2023
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    iput-object p2, p0, Lcom/mbridge/msdk/click/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-boolean p3, p0, Lcom/mbridge/msdk/click/b$3;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/click/b$3;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/click/b$3;->d:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 2026
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->i(Lcom/mbridge/msdk/click/b;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 2027
    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v1}, Lcom/mbridge/msdk/click/b;->i(Lcom/mbridge/msdk/click/b;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 2028
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v2

    sget v3, Lcom/mbridge/msdk/foundation/same/a;->H:I

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 2029
    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$3;->b:Z

    if-eqz v0, :cond_0

    .line 2030
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v1}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v1

    const-string v2, "start"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    .line 2032
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v1}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v1

    const-string v2, "shortcuts_start"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final a(I)V
    .locals 2

    .line 2038
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->i(Lcom/mbridge/msdk/click/b;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 2039
    iput p1, v0, Landroid/os/Message;->arg1:I

    .line 2040
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->i(Lcom/mbridge/msdk/click/b;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/io/File;)V
    .locals 4

    .line 2045
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$3;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "isDowning"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-wide/16 v2, 0x0

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 2046
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$3;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "process"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 2047
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v1}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v1

    const-string v2, "end"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 2048
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/g;->b(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/g;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/g;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)J

    .line 2049
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$3;->b:Z

    if-eqz v0, :cond_0

    .line 2050
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v0

    invoke-static {p1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$3;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/click/b$3;->c:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    .line 2051
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->c:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    .line 2052
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$3;->b:Z

    if-nez v0, :cond_1

    .line 2053
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->c:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final b()V
    .locals 3

    .line 2059
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$3;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$3;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$3;->c:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
