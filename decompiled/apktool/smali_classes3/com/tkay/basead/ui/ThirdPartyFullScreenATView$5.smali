.class final Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$5;
.super Ljava/util/TimerTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->M()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V
    .locals 0

    .line 504
    iput-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$5;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 507
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$5;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)Lcom/tkay/core/api/BaseAd;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/api/BaseAd;->getVideoProgress()D

    move-result-wide v1

    double-to-int v1, v1

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->a(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;I)V

    return-void
.end method
