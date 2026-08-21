.class final Lcom/mbridge/msdk/splash/c/a$3;
.super Ljava/lang/Object;
.source "NativeViewRenderManager.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/dycreator/f/a/a;

.field final synthetic b:Lcom/mbridge/msdk/splash/d/a;

.field final synthetic c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic d:I

.field final synthetic e:Lcom/mbridge/msdk/splash/c/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/dycreator/f/a/a;Lcom/mbridge/msdk/splash/d/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 225
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/a$3;->e:Lcom/mbridge/msdk/splash/c/a;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/a$3;->a:Lcom/mbridge/msdk/dycreator/f/a/a;

    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/a$3;->b:Lcom/mbridge/msdk/splash/d/a;

    iput-object p4, p0, Lcom/mbridge/msdk/splash/c/a$3;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p5, p0, Lcom/mbridge/msdk/splash/c/a$3;->d:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 228
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$3;->e:Lcom/mbridge/msdk/splash/c/a;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/a$3;->a:Lcom/mbridge/msdk/dycreator/f/a/a;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/a$3;->b:Lcom/mbridge/msdk/splash/d/a;

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/a$3;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/splash/c/a;->a(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/dycreator/f/a/a;Lcom/mbridge/msdk/splash/d/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method public final b()V
    .locals 3

    .line 233
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$3;->b:Lcom/mbridge/msdk/splash/d/a;

    iget v1, p0, Lcom/mbridge/msdk/splash/c/a$3;->d:I

    const/4 v2, 0x2

    invoke-interface {v0, v2, v1}, Lcom/mbridge/msdk/splash/d/a;->a(II)V

    return-void
.end method

.method public final c()V
    .locals 0

    .line 238
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/c/a$3;->a()V

    return-void
.end method
