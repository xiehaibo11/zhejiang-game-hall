.class final Lcom/mbridge/msdk/mbnative/controller/NativeController$12;
.super Ljava/lang/Object;
.source "NativeController.java"

# interfaces
.implements Lcom/mbridge/msdk/mbnative/controller/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbnative/controller/NativeController;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Lcom/mbridge/msdk/mbnative/controller/NativeController;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 1302
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$12;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$12;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/util/ArrayList;Ljava/util/ArrayList;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/ArrayList<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 1306
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object p2

    const-string v0, "trackView onVisibilityChanged"

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 1307
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    if-lez p1, :cond_0

    .line 1308
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object p1

    const-string p2, "trackView send"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1310
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$12;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$12;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Landroid/content/Context;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$12;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$12;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;

    move-result-object v1

    invoke-static {p1, p2, v0, v1}, Lcom/mbridge/msdk/mbnative/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbnative/c/a;)V

    :cond_0
    return-void
.end method
