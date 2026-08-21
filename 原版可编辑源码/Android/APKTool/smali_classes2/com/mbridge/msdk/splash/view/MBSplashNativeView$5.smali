.class final Lcom/mbridge/msdk/splash/view/MBSplashNativeView$5;
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
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashNativeView;Ljava/lang/String;)V
    .locals 0

    .line 320
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$5;->b:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$5;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 323
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$5;->b:Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView$5;->a:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method
