.class final Lcom/mbridge/msdk/splash/view/MBSplashNativeView$8;
.super Ljava/lang/Object;
.source "MBSplashNativeView.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/view/MBSplashNativeView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)V
    .locals 0

    .line 401
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$8;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 404
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$8;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->e(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 405
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$8;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->e(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getPriUrl()Ljava/lang/String;

    move-result-object p1

    .line 406
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 407
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$8;->a:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
