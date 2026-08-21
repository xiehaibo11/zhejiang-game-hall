.class final Lcom/mbridge/msdk/click/b$6;
.super Ljava/lang/Object;
.source "CommonClickControl.java"

# interfaces
.implements Lcom/mbridge/msdk/click/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZZIZLjava/lang/Boolean;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Z

.field final synthetic c:Ljava/lang/Boolean;

.field final synthetic d:I

.field final synthetic e:Z

.field final synthetic f:Lcom/mbridge/msdk/click/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/Boolean;IZ)V
    .locals 0

    .line 1156
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    iput-object p2, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-boolean p3, p0, Lcom/mbridge/msdk/click/b$6;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/click/b$6;->c:Ljava/lang/Boolean;

    iput p5, p0, Lcom/mbridge/msdk/click/b$6;->d:I

    iput-boolean p6, p0, Lcom/mbridge/msdk/click/b$6;->e:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 1193
    sget-object v0, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    if-eqz v0, :cond_0

    .line 1194
    sget-object v0, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    :cond_0
    if-eqz p1, :cond_1

    .line 1196
    instance-of v0, p1, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    if-eqz v0, :cond_1

    .line 1197
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Z)Z

    .line 1198
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    check-cast p1, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v3, 0x0

    invoke-static {v0, p1, v2, v1, v3}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1200
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 1201
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-interface {p1, v0, p2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1203
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    iget-boolean p2, p0, Lcom/mbridge/msdk/click/b$6;->e:Z

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;ZLcom/mbridge/msdk/out/Campaign;)V

    return-void
.end method

.method public final b(Ljava/lang/Object;)V
    .locals 8

    .line 1169
    sget-object v0, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    if-eqz v0, :cond_0

    .line 1170
    sget-object v0, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    :cond_0
    if-eqz p1, :cond_2

    .line 1173
    instance-of v0, p1, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    if-eqz v0, :cond_2

    .line 1174
    check-cast p1, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    .line 1175
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Redirection done...   code: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridge SDK M"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1176
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Z)Z

    .line 1178
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setJumpResult(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)V

    .line 1181
    iget-object v1, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-boolean v4, p0, Lcom/mbridge/msdk/click/b$6;->b:Z

    invoke-static {v1}, Lcom/mbridge/msdk/click/b;->f(Lcom/mbridge/msdk/click/b;)Z

    move-result v5

    const/4 v6, 0x0

    iget-object v7, p0, Lcom/mbridge/msdk/click/b$6;->c:Ljava/lang/Boolean;

    move-object v3, p1

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZZLjava/lang/Boolean;)V

    .line 1182
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->isjumpDone()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 1183
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v0

    .line 1184
    iget-object v1, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p1, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/click/b;)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    const/4 v4, -0x1

    iget v5, p0, Lcom/mbridge/msdk/click/b$6;->d:I

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZII)J

    .line 1186
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$6;->f:Lcom/mbridge/msdk/click/b;

    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$6;->e:Z

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;ZLcom/mbridge/msdk/out/Campaign;)V

    :cond_2
    return-void
.end method
