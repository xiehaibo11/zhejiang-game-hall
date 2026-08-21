.class final Lcom/tkay/expressad/advanced/c/a$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a;->g(Lcom/tkay/expressad/foundation/d/c;)V
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

    .line 767
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$8;->c:Lcom/tkay/expressad/advanced/c/a;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a$8;->a:Lcom/tkay/expressad/foundation/d/c;

    const/4 p1, 0x2

    iput p1, p0, Lcom/tkay/expressad/advanced/c/a$8;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 770
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 771
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x1

    .line 772
    iput v0, p1, Landroid/os/Message;->what:I

    .line 773
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$8;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 774
    iget v0, p0, Lcom/tkay/expressad/advanced/c/a$8;->b:I

    iput v0, p1, Landroid/os/Message;->arg1:I

    .line 775
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$8;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 780
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "zip download fail: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " "

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 782
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v0, 0x2

    .line 783
    iput v0, p2, Landroid/os/Message;->what:I

    .line 784
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 785
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$8;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
