.class final Lcom/mbridge/msdk/splash/c/c$7;
.super Ljava/lang/Object;
.source "SplashLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/splash/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/c/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:I

.field final synthetic c:Lcom/mbridge/msdk/splash/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 685
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c$7;->c:Lcom/mbridge/msdk/splash/c/c;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/c$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p3, p0, Lcom/mbridge/msdk/splash/c/c$7;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 2

    .line 688
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$7;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 689
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$7;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setDynamicView(Z)V

    .line 690
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$7;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setSplashNativeView(Landroid/view/View;)V

    .line 692
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c$7;->c:Lcom/mbridge/msdk/splash/c/c;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget v1, p0, Lcom/mbridge/msdk/splash/c/c$7;->b:I

    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 698
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$7;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;)Ljava/lang/String;

    move-result-object v1

    iget v2, p0, Lcom/mbridge/msdk/splash/c/c$7;->b:I

    invoke-static {v0, p1, v1, v2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
