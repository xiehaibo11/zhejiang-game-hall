.class final Lcom/mbridge/msdk/splash/c/d$6;
.super Ljava/lang/Object;
.source "SplashShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Z

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/mbridge/msdk/splash/c/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    .locals 0

    .line 557
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d$6;->d:Lcom/mbridge/msdk/splash/c/d;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/d$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-boolean p3, p0, Lcom/mbridge/msdk/splash/c/d$6;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/splash/c/d$6;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 560
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$6;->d:Lcom/mbridge/msdk/splash/c/d;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-boolean v2, p0, Lcom/mbridge/msdk/splash/c/d$6;->b:Z

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/d$6;->c:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/splash/c/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 565
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$6;->d:Lcom/mbridge/msdk/splash/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/c/d;->f()V

    return-void
.end method

.method public final c()V
    .locals 0

    .line 569
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/c/d$6;->a()V

    return-void
.end method
