.class final Lcom/mbridge/msdk/click/b$10;
.super Ljava/lang/Object;
.source "CommonClickControl.java"

# interfaces
.implements Lcom/mbridge/msdk/out/IDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
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

    .line 1916
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    iput-object p2, p0, Lcom/mbridge/msdk/click/b$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-boolean p3, p0, Lcom/mbridge/msdk/click/b$10;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/click/b$10;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/click/b$10;->d:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onEnd(IILjava/lang/String;)V
    .locals 3

    .line 1938
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "download listener onEnd result = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " nid = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " file = "

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "-sdkclick:"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p2, p0, Lcom/mbridge/msdk/click/b$10;->b:Z

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "MBridge SDK M"

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1939
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$10;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "isDowning"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-wide/16 v1, 0x0

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-static {p2, v0, v1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1940
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$10;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "process"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {p2, v0, v1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1941
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 1942
    iget-object p2, p0, Lcom/mbridge/msdk/click/b$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "end"

    invoke-static {p2, v0, v1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1943
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/db/g;->b(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/g;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/foundation/db/g;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)J

    .line 1944
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1945
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$10;->b:Z

    if-eqz v0, :cond_0

    .line 1946
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v0

    invoke-static {p2}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$10;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$10;->c:Ljava/lang/String;

    invoke-static {v0, p2, v1, v2}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    .line 1947
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->c:Ljava/lang/String;

    invoke-static {p2, v0, p3}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    .line 1948
    :cond_0
    iget-boolean p2, p0, Lcom/mbridge/msdk/click/b$10;->b:Z

    if-nez p2, :cond_1

    .line 1949
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->c:Ljava/lang/String;

    invoke-static {p2, v0, p3}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1952
    :cond_1
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {p2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object p2

    if-eqz p2, :cond_2

    const/4 p2, 0x1

    if-ne p1, p2, :cond_2

    .line 1954
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/click/b$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onDownloadFinish(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_2
    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 0

    return-void
.end method

.method public final onStart()V
    .locals 4

    .line 1924
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v2

    sget v3, Lcom/mbridge/msdk/foundation/same/a;->G:I

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 1925
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v1}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v1

    const-string v2, "start"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1926
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1927
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$10;->e:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onDownloadStart(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_0
    return-void
.end method

.method public final onStatus(I)V
    .locals 0

    return-void
.end method
