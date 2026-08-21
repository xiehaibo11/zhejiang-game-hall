.class final Lcom/mbridge/msdk/splash/c/b$1;
.super Ljava/lang/Object;
.source "ResManager.java"

# interfaces
.implements Lcom/mbridge/msdk/videocommon/listener/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/c/b;->a(Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/view/MBSplashView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashView;)V
    .locals 0

    .line 195
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/b$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 198
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/b$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setVideoReady(Z)V

    .line 199
    invoke-static {}, Lcom/mbridge/msdk/splash/c/b;->a()Ljava/lang/String;

    move-result-object p1

    const-string v0, "========VIDEO SUC"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 204
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/b$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setVideoReady(Z)V

    .line 205
    invoke-static {}, Lcom/mbridge/msdk/splash/c/b;->a()Ljava/lang/String;

    move-result-object p1

    const-string p2, "========VIDEO FAILED"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
