.class final Lcom/mbridge/msdk/d/b$4$1;
.super Ljava/lang/Object;
.source "ShortCutsManager.java"

# interfaces
.implements Lcom/mbridge/msdk/d/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/d/b$4;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/c/a;

.field final synthetic b:Lcom/mbridge/msdk/d/b$4;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/d/b$4;Lcom/mbridge/msdk/c/a;)V
    .locals 0

    .line 743
    iput-object p1, p0, Lcom/mbridge/msdk/d/b$4$1;->b:Lcom/mbridge/msdk/d/b$4;

    iput-object p2, p0, Lcom/mbridge/msdk/d/b$4$1;->a:Lcom/mbridge/msdk/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 758
    iget-object v0, p0, Lcom/mbridge/msdk/d/b$4$1;->b:Lcom/mbridge/msdk/d/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/d/b$4;->b:Lcom/mbridge/msdk/d/b;

    iget-object v1, p0, Lcom/mbridge/msdk/d/b$4$1;->b:Lcom/mbridge/msdk/d/b$4;

    iget-object v1, v1, Lcom/mbridge/msdk/d/b$4;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/d/b$4$1;->a:Lcom/mbridge/msdk/c/a;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/d/b;->b(Lcom/mbridge/msdk/d/b;Landroid/content/Context;Lcom/mbridge/msdk/c/a;)V

    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 746
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 747
    iget-object v0, p0, Lcom/mbridge/msdk/d/b$4$1;->b:Lcom/mbridge/msdk/d/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/d/b$4;->b:Lcom/mbridge/msdk/d/b;

    const/4 v1, 0x0

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/app/Activity;)V

    :cond_0
    return-void
.end method
