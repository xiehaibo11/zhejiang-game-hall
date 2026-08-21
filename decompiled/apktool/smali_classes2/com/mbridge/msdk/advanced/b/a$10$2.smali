.class final Lcom/mbridge/msdk/advanced/b/a$10$2;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a$10;->onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/advanced/b/a$10;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a$10;)V
    .locals 0

    .line 714
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$10$2;->a:Lcom/mbridge/msdk/advanced/b/a$10;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 717
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$10$2;->a:Lcom/mbridge/msdk/advanced/b/a$10;

    iget-object v0, v0, Lcom/mbridge/msdk/advanced/b/a$10;->c:Lcom/mbridge/msdk/advanced/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a$10$2;->a:Lcom/mbridge/msdk/advanced/b/a$10;

    iget-object v1, v1, Lcom/mbridge/msdk/advanced/b/a$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a$10$2;->a:Lcom/mbridge/msdk/advanced/b/a$10;

    iget v2, v2, Lcom/mbridge/msdk/advanced/b/a$10;->b:I

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    return-void
.end method
