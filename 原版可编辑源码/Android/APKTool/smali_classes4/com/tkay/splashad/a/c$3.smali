.class final Lcom/tkay/splashad/a/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/c;->a(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/f;ZLcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/splashad/a/f;

.field final synthetic b:Lcom/tkay/splashad/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/c;Lcom/tkay/splashad/a/f;)V
    .locals 0

    .line 389
    iput-object p1, p0, Lcom/tkay/splashad/a/c$3;->b:Lcom/tkay/splashad/a/c;

    iput-object p2, p0, Lcom/tkay/splashad/a/c$3;->a:Lcom/tkay/splashad/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 0

    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 396
    iget-object v0, p0, Lcom/tkay/splashad/a/c$3;->a:Lcom/tkay/splashad/a/f;

    invoke-virtual {v0}, Lcom/tkay/splashad/a/f;->onSplashAdDismiss()V

    return-void
.end method

.method public final onAdShow()V
    .locals 0

    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 0

    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 0

    return-void
.end method
