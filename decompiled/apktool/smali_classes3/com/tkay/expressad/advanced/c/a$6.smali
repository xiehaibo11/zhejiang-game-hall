.class final Lcom/tkay/expressad/advanced/c/a$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a;->e(Lcom/tkay/expressad/foundation/d/c;)V
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

    .line 674
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$6;->c:Lcom/tkay/expressad/advanced/c/a;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a$6;->a:Lcom/tkay/expressad/foundation/d/c;

    const/4 p1, 0x2

    iput p1, p0, Lcom/tkay/expressad/advanced/c/a$6;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 0

    .line 677
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 678
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$6;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 679
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$6;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object p1

    new-instance p2, Lcom/tkay/expressad/advanced/c/a$6$1;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/advanced/c/a$6$1;-><init>(Lcom/tkay/expressad/advanced/c/a$6;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 690
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 691
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$6;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 692
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$6;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/a;->d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;

    move-result-object p1

    new-instance p2, Lcom/tkay/expressad/advanced/c/a$6$2;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/advanced/c/a$6$2;-><init>(Lcom/tkay/expressad/advanced/c/a$6;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
