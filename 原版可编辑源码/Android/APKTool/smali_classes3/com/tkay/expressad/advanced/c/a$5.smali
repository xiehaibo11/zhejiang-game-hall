.class final Lcom/tkay/expressad/advanced/c/a$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/foundation/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/expressad/advanced/c/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 644
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$5;->c:Lcom/tkay/expressad/advanced/c/a;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a$5;->a:Lcom/tkay/expressad/foundation/d/c;

    const/4 p1, 0x2

    iput p1, p0, Lcom/tkay/expressad/advanced/c/a$5;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 647
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 648
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$5;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 649
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x4

    .line 650
    iput v0, p1, Landroid/os/Message;->what:I

    .line 651
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$5;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 652
    iget v0, p0, Lcom/tkay/expressad/advanced/c/a$5;->b:I

    iput v0, p1, Landroid/os/Message;->arg1:I

    .line 653
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$5;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 659
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 660
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a$5;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 661
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a$5;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setEndCardReady(Z)V

    .line 664
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v0, 0x2

    .line 665
    iput v0, p2, Landroid/os/Message;->what:I

    .line 666
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 667
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$5;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
