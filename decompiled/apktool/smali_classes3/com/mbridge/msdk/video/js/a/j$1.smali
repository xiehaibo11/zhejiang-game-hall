.class final Lcom/mbridge/msdk/video/js/a/j$1;
.super Ljava/lang/Object;
.source "JSCommon.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/js/a/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Lcom/mbridge/msdk/video/js/a/j;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/js/a/j;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 431
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j$1;->b:Lcom/mbridge/msdk/video/js/a/j;

    iput-object p2, p0, Lcom/mbridge/msdk/video/js/a/j$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 434
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$1;->b:Lcom/mbridge/msdk/video/js/a/j;

    invoke-static {v0}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/video/js/a/j;)Lcom/mbridge/msdk/video/bt/module/a/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 435
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$1;->b:Lcom/mbridge/msdk/video/js/a/j;

    invoke-static {v0}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/video/js/a/j;)Lcom/mbridge/msdk/video/bt/module/a/b;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/bt/module/a/b;->b()V

    .line 437
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$1;->b:Lcom/mbridge/msdk/video/js/a/j;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/video/js/a/j;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 442
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$1;->b:Lcom/mbridge/msdk/video/js/a/j;

    invoke-static {v0}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/video/js/a/j;)Lcom/mbridge/msdk/video/bt/module/a/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 443
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$1;->b:Lcom/mbridge/msdk/video/js/a/j;

    invoke-static {v0}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/video/js/a/j;)Lcom/mbridge/msdk/video/bt/module/a/b;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/bt/module/a/b;->b()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 2

    .line 448
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$1;->b:Lcom/mbridge/msdk/video/js/a/j;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/video/js/a/j;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method
