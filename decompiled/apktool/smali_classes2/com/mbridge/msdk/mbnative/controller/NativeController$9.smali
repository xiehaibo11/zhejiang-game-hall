.class final Lcom/mbridge/msdk/mbnative/controller/NativeController$9;
.super Ljava/lang/Object;
.source "NativeController.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


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

    .line 1070
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 1073
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->f(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/click/b;

    const/4 v0, 0x0

    sput-boolean v0, Lcom/mbridge/msdk/click/b;->a:Z

    .line 1074
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->f(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/click/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 1075
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->b:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    .line 1084
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;->a()V

    return-void
.end method
