.class final Lcom/tkay/expressad/videocommon/b/a$3;
.super Lcom/tkay/core/common/res/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/videocommon/b/a;->u()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/videocommon/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/videocommon/b/a;)V
    .locals 0

    .line 247
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a$a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 277
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "errorCode:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ",errorMsg:"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;)V

    return-void
.end method

.method public final a(IJJ)Z
    .locals 2

    .line 250
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/a;->e(Lcom/tkay/expressad/videocommon/b/a;)J

    move-result-wide v0

    cmp-long v0, v0, p4

    if-eqz v0, :cond_0

    .line 251
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {v0, p4, p5}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;J)J

    .line 254
    :cond_0
    iget-object p4, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p4}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p5

    invoke-static {p4, p2, p3, p5}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;JI)V

    .line 256
    iget-object p2, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p2}, Lcom/tkay/expressad/videocommon/b/a;->f(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p2

    const/4 p3, 0x1

    if-lt p1, p2, :cond_1

    .line 257
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/a;->g()V

    .line 258
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/a;->q()V

    return p3

    .line 262
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p1

    const/4 p2, 0x4

    const/4 p4, 0x2

    if-eq p1, p4, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p1

    if-ne p1, p2, :cond_2

    goto :goto_0

    :cond_2
    const/4 p1, 0x0

    return p1

    .line 264
    :cond_3
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p1

    if-ne p1, p2, :cond_4

    const/4 p4, 0x3

    .line 267
    :cond_4
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    .line 268
    iput p4, p1, Landroid/os/Message;->what:I

    .line 269
    iget-object p2, p0, Lcom/tkay/expressad/videocommon/b/a$3;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p2}, Lcom/tkay/expressad/videocommon/b/a;->g(Lcom/tkay/expressad/videocommon/b/a;)Landroid/os/Handler;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return p3
.end method
