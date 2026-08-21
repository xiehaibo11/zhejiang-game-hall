.class final Lcom/tkay/expressad/reward/a/c$e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "e"
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1


# instance fields
.field private c:Landroid/os/Handler;

.field private d:I

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Lcom/tkay/expressad/foundation/d/c;


# direct methods
.method public constructor <init>(Landroid/os/Handler;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 448
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 449
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$e;->c:Landroid/os/Handler;

    .line 450
    iput p2, p0, Lcom/tkay/expressad/reward/a/c$e;->d:I

    .line 451
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/c$e;->f:Ljava/lang/String;

    .line 452
    iput-object p4, p0, Lcom/tkay/expressad/reward/a/c$e;->e:Ljava/lang/String;

    .line 453
    iput-object p5, p0, Lcom/tkay/expressad/reward/a/c$e;->g:Ljava/lang/String;

    .line 454
    iput-object p6, p0, Lcom/tkay/expressad/reward/a/c$e;->h:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 2

    .line 459
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    invoke-static {p2}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;)V

    .line 460
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    .line 461
    iget p2, p0, Lcom/tkay/expressad/reward/a/c$e;->d:I

    if-nez p2, :cond_0

    const/16 p2, 0x66

    goto :goto_0

    :cond_0
    const/16 p2, 0x68

    :goto_0
    iput p2, p1, Landroid/os/Message;->what:I

    .line 462
    new-instance p2, Landroid/os/Bundle;

    invoke-direct {p2}, Landroid/os/Bundle;-><init>()V

    .line 463
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$e;->e:Ljava/lang/String;

    const-string v1, "unit_id"

    invoke-virtual {p2, v1, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 464
    sget-object v0, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$e;->f:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 465
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$e;->g:Ljava/lang/String;

    const-string v1, "request_id"

    invoke-virtual {p2, v1, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 466
    invoke-virtual {p1, p2}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 467
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$e;->c:Landroid/os/Handler;

    invoke-virtual {p2, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 472
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    .line 473
    iget p2, p0, Lcom/tkay/expressad/reward/a/c$e;->d:I

    if-nez p2, :cond_0

    const/16 p2, 0xca

    goto :goto_0

    :cond_0
    const/16 p2, 0xcc

    :goto_0
    iput p2, p1, Landroid/os/Message;->what:I

    .line 474
    new-instance p2, Landroid/os/Bundle;

    invoke-direct {p2}, Landroid/os/Bundle;-><init>()V

    .line 475
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$e;->e:Ljava/lang/String;

    const-string v1, "unit_id"

    invoke-virtual {p2, v1, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 476
    sget-object v0, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$e;->f:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 477
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$e;->g:Ljava/lang/String;

    const-string v1, "request_id"

    invoke-virtual {p2, v1, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 478
    invoke-virtual {p1, p2}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 479
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$e;->c:Landroid/os/Handler;

    invoke-virtual {p2, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
