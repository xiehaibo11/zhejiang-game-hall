.class final Lcom/tkay/expressad/reward/a/c$f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/d/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "f"
.end annotation


# instance fields
.field private a:Landroid/os/Handler;

.field private final b:Ljava/lang/String;

.field private final c:Ljava/lang/String;

.field private final d:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/os/Handler;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 515
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 516
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$f;->a:Landroid/os/Handler;

    .line 517
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/c$f;->c:Ljava/lang/String;

    .line 518
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/c$f;->b:Ljava/lang/String;

    .line 519
    iput-object p4, p0, Lcom/tkay/expressad/reward/a/c$f;->d:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 4

    .line 525
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Video download success: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$f;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 526
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/videocommon/b/j;->a(Ljava/lang/String;Z)V

    .line 527
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0x64

    .line 528
    iput v1, v0, Landroid/os/Message;->what:I

    .line 529
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 530
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$f;->b:Ljava/lang/String;

    const-string v3, "unit_id"

    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 531
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$f;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 532
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$f;->d:Ljava/lang/String;

    const-string v3, "request_id"

    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "url"

    .line 533
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 534
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 535
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$f;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 540
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Video download fail: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$f;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 541
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p2, v1}, Lcom/tkay/expressad/videocommon/b/j;->a(Ljava/lang/String;Z)V

    .line 542
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0xc8

    .line 543
    iput v1, v0, Landroid/os/Message;->what:I

    .line 544
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 545
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$f;->b:Ljava/lang/String;

    const-string v3, "unit_id"

    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 546
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$f;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 547
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$f;->d:Ljava/lang/String;

    const-string v3, "request_id"

    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "url"

    .line 548
    invoke-virtual {v1, v2, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "message"

    .line 549
    invoke-virtual {v1, p2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 550
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 551
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$f;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
