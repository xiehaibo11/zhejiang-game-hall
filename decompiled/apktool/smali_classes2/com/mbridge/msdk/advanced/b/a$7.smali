.class final Lcom/mbridge/msdk/advanced/b/a$7;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/advanced/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Lcom/mbridge/msdk/advanced/b/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 472
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$7;->b:Lcom/mbridge/msdk/advanced/b/a;

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 476
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$7;->b:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->g(Lcom/mbridge/msdk/advanced/b/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v0

    .line 477
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/db/l;->b()V

    .line 478
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$7;->b:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->g(Lcom/mbridge/msdk/advanced/b/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method
