.class Lcom/sigmob/sdk/splash/i$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/i;->b(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/sigmob/sdk/splash/i;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/i;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$3;->b:Lcom/sigmob/sdk/splash/i;

    iput-object p2, p0, Lcom/sigmob/sdk/splash/i$3;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i$3;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$3;->b:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.sigmob.action.splash.skip"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return p2
.end method
