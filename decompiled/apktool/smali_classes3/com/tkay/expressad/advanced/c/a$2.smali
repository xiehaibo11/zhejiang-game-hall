.class final Lcom/tkay/expressad/advanced/c/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/d/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a;->h(Lcom/tkay/expressad/foundation/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/expressad/advanced/c/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 895
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$2;->b:Lcom/tkay/expressad/advanced/c/a;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a$2;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 898
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 899
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    .line 900
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$2;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v0, 0x5

    .line 901
    iput v0, p1, Landroid/os/Message;->what:I

    .line 902
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$2;->b:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 907
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 908
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    .line 909
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x2

    .line 910
    iput p1, p2, Landroid/os/Message;->what:I

    .line 911
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$2;->b:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
