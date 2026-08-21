.class final Lcom/tkay/expressad/advanced/c/b$2;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/advanced/c/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/c/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/b;Landroid/os/Looper;)V
    .locals 0

    .line 118
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/b$2;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 121
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 122
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 124
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$2;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->c(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$2;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->c(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ay()Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$2;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->d(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 125
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$2;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->d(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    :cond_1
    :goto_0
    return-void
.end method
