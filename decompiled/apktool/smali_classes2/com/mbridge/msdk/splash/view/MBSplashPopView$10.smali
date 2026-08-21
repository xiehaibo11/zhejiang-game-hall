.class final Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;
.super Ljava/lang/Object;
.source "MBSplashPopView.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/view/MBSplashPopView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Lcom/mbridge/msdk/splash/view/MBSplashPopView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 660
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;->b:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 663
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;->b:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b(Lcom/mbridge/msdk/splash/view/MBSplashPopView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 667
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;->b:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->reStartCountDown()V

    return-void
.end method

.method public final c()V
    .locals 0

    .line 671
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;->a()V

    return-void
.end method
