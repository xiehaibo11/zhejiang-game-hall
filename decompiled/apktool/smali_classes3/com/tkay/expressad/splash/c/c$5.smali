.class final Lcom/tkay/expressad/splash/c/c$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/c;->f(Lcom/tkay/expressad/foundation/d/c;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/expressad/splash/c/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 0

    .line 630
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c$5;->c:Lcom/tkay/expressad/splash/c/c;

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/c$5;->a:Lcom/tkay/expressad/foundation/d/c;

    iput p3, p0, Lcom/tkay/expressad/splash/c/c$5;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 633
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x1

    .line 634
    iput v0, p1, Landroid/os/Message;->what:I

    .line 635
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$5;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 636
    iget v0, p0, Lcom/tkay/expressad/splash/c/c$5;->b:I

    iput v0, p1, Landroid/os/Message;->arg1:I

    .line 637
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$5;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/splash/c/c;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 642
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/c$5;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {p2}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/c/c;)Ljava/lang/String;

    invoke-static {p2, p1}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/c/c;Ljava/lang/String;)V

    .line 643
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v0, 0x2

    .line 644
    iput v0, p2, Landroid/os/Message;->what:I

    .line 645
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 646
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c$5;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/splash/c/c;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
