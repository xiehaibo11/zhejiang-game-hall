.class public final Lcom/tkay/expressad/exoplayer/l/h$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/l/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field private final a:Landroid/os/Handler;

.field private final b:Lcom/tkay/expressad/exoplayer/l/h;


# direct methods
.method public constructor <init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/l/h;)V
    .locals 0

    .line 124
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-eqz p2, :cond_0

    .line 125
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/Handler;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->a:Landroid/os/Handler;

    .line 126
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/l/h$a;)Lcom/tkay/expressad/exoplayer/l/h;
    .locals 0

    .line 113
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    return-object p0
.end method


# virtual methods
.method public final a(IIIF)V
    .locals 8

    .line 192
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    if-eqz v0, :cond_0

    .line 193
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->a:Landroid/os/Handler;

    new-instance v7, Lcom/tkay/expressad/exoplayer/l/h$a$5;

    move-object v1, v7

    move-object v2, p0

    move v3, p1

    move v4, p2

    move v5, p3

    move v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/l/h$a$5;-><init>(Lcom/tkay/expressad/exoplayer/l/h$a;IIIF)V

    invoke-virtual {v0, v7}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public final a(IJ)V
    .locals 2

    .line 177
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->a:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/exoplayer/l/h$a$4;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/l/h$a$4;-><init>(Lcom/tkay/expressad/exoplayer/l/h$a;IJ)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public final a(Landroid/view/Surface;)V
    .locals 2

    .line 207
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    if-eqz v0, :cond_0

    .line 208
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->a:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/exoplayer/l/h$a$6;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/exoplayer/l/h$a$6;-><init>(Lcom/tkay/expressad/exoplayer/l/h$a;Landroid/view/Surface;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 2

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    if-eqz v0, :cond_0

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->a:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/exoplayer/l/h$a$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/exoplayer/l/h$a$1;-><init>(Lcom/tkay/expressad/exoplayer/l/h$a;Lcom/tkay/expressad/exoplayer/c/d;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 2

    .line 163
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    if-eqz v0, :cond_0

    .line 164
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->a:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/exoplayer/l/h$a$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/exoplayer/l/h$a$3;-><init>(Lcom/tkay/expressad/exoplayer/l/h$a;Lcom/tkay/expressad/exoplayer/m;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;JJ)V
    .locals 9

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    if-eqz v0, :cond_0

    .line 149
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->a:Landroid/os/Handler;

    new-instance v8, Lcom/tkay/expressad/exoplayer/l/h$a$2;

    move-object v1, v8

    move-object v2, p0

    move-object v3, p1

    move-wide v4, p2

    move-wide v6, p4

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/l/h$a$2;-><init>(Lcom/tkay/expressad/exoplayer/l/h$a;Ljava/lang/String;JJ)V

    invoke-virtual {v0, v8}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 2

    .line 221
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->b:Lcom/tkay/expressad/exoplayer/l/h;

    if-eqz v0, :cond_0

    .line 222
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/h$a;->a:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/exoplayer/l/h$a$7;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/exoplayer/l/h$a$7;-><init>(Lcom/tkay/expressad/exoplayer/l/h$a;Lcom/tkay/expressad/exoplayer/c/d;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
